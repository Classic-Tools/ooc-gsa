#include "__oo2c.h"
#include "__config.h"

#define _POSIX_SOURCE  /* file uses POSIX.1 functions */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#if HAVE_UNISTD_H
#include <unistd.h>
#elif HAVE_IO_H
#include <io.h>
#endif
#include <signal.h>
#if HAVE_PWD_H
#include <pwd.h>
#endif
#include <string.h>
#include "__mini_gc.h"

#if !HAVE_ATEXIT
/* assume this is a SunOS 4, use on_exit instead */
#ifdef __cplusplus
extern "C" int on_exit(void (*procp)(void),void* arg);
#else
extern int on_exit(void (*procp)(void),void* arg);
#endif
#endif



#define MAX_TERM_PROCS 32	/* maximum number of termination procs */

static _ModId _mid;

/* module descriptor */
static const struct {
  int length;
  void* pad;
  const char name[4];
} _n0 = {4, NULL, {"Rts"}};
static struct _MD Rts__md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};


void (*Rts_termProcs[MAX_TERM_PROCS])(void);
volatile int /*sig_atomic_t*/ Rts_noSignalHandlerInProgress = 1;



INTEGER Rts_ArgNumber (void) {
  return (INTEGER) (_program_argc-1);
}

void Rts_GetArg (INTEGER num, OOC_CHAR *arg) {
  INTEGER i = -1;

  do {
    i++;
    arg[i] = _program_argv[num][i];
  } while (arg[i]);
}

void Rts_Terminate (void) {
  exit((int) _program_exit_code);
}

void Rts_Error (const OOC_CHAR *msg) {
  fprintf (stderr, "*** Error: %s\n", msg);
  exit(1);
}

void Rts_Assert (OOC_BOOLEAN expr, const OOC_CHAR *msg) {
  if (!expr) {
    fprintf (stderr, "*** Assert: %s\n", msg);
    exit(1);
  }
}

void Rts_TerminationProc (void (*func)(void)) {
  int i;

  for (i = 0; i != MAX_TERM_PROCS; i++) {
    if (!(Rts_termProcs[i])) {
      Rts_termProcs[i] = func;
      return;
    }
  }

  fprintf (stderr, "[Rts] Couldn't add termination proc, aborting.\n");
  exit(1);
}

INTEGER Rts_System (const OOC_CHAR *command) {
  return (INTEGER) system((const char*) command);
}

void Rts_GC (void) {
  GC_gcollect();
}


static void Rts_RunTermProcs (void) {
  int i;
  void (*ptr)(void);

  for (i = 0; i != MAX_TERM_PROCS; i++) {
    ptr = Rts_termProcs[i];
    if (ptr) {
      Rts_termProcs[i] = (void (*)(void))NULL;
      (*ptr)();
    }
  }
}

static RETSIGTYPE Rts_SignalHandler (int sig) {
  signal(sig, SIG_DFL);  /* install default handler, necessary for SunOS 4 */
  if (Rts_noSignalHandlerInProgress) {
    Rts_noSignalHandlerInProgress = 0;
    Rts_RunTermProcs();
  }
#if HAVE_RAISE
  raise(sig);
#else
  kill(getpid(), sig);   /* raise signal to call default handler */
#endif
}

static void Rts_CatchSignal (int sig) {
  void (*func)(int); 

  func = signal (sig, Rts_SignalHandler);
  if (func == SIG_IGN) {
    signal (sig, SIG_IGN);
  }
}


void Rts_GetUserHome (OOC_CHAR *home, const OOC_CHAR *user) {
#if HAVE_PWD_H
  struct passwd *entry;

  if (*user)
    entry=(void*)getpwnam((const char*) user);
  else
    entry=(void*)getpwuid(getuid());

  if (entry != NULL)
    strcpy((char*) home, entry->pw_dir);  /* danguerous */
  else
    home[0] = '\000';
#else
  home[0] = '\000';
#endif
}

OOC_BOOLEAN Rts_GetEnv(OOC_CHAR* var, const OOC_CHAR* name) {
  char *value;

  value = getenv((const char*)name);
  if (value) {
    strcpy((char*)var, value);  /* danguerous */
    return 1;
  } else {
    return 0;
  }
}

void Rts_init (void) {
  int i, result;
  _mid = _register_module (&Rts__md.md, NULL);

  for (i=0; i != MAX_TERM_PROCS; i++) {
    Rts_termProcs[i] = (void (*)(void))NULL;
  }

  /* error signals */
  Rts_CatchSignal(SIGFPE);
  Rts_CatchSignal(SIGILL);
  Rts_CatchSignal(SIGSEGV);
#ifdef SIGBUS
  Rts_CatchSignal(SIGBUS);
#endif
  Rts_CatchSignal(SIGABRT);
  /* termination signals */
#ifdef SIGHUP
  Rts_CatchSignal(SIGHUP);
#endif
  Rts_CatchSignal(SIGINT);
#ifdef SIGQUIT
  Rts_CatchSignal(SIGQUIT);
#endif
  Rts_CatchSignal(SIGTERM);
  /* normal program exit */
#if HAVE_ATEXIT
  result = atexit(&Rts_RunTermProcs);
#else
  result = on_exit(&Rts_RunTermProcs,NULL);
#endif
  if (result) {
    fprintf (stderr, "[Rts] Couldn't install termination handler, aborting.\n");
    exit(1);
  }
}

