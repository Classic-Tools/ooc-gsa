/* file generated by oo2c -- do not edit */
#include "ProgramArgs.h"
#include "CharClass.h"
#include "PosixFileDescr.h"

/* local definitions */
ProgramArgs__Channel ProgramArgs__args;
typedef struct ProgramArgs__ErrorContextDesc* ProgramArgs__ErrorContext;
static ProgramArgs__ErrorContext ProgramArgs__errorContext;

/* function prototypes */
Msg__Msg ProgramArgs__GetError(int code);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p0 = {0, NULL, {NULL
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {1, NULL, {
  (const void*)&ProgramArgs__args,
}};
static const struct {
  int length;
  void* pad;
  const char name[12];
} _n0 = {12, NULL, {"ProgramArgs"}};
static struct _MD ProgramArgs_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    698174999
  }
};

static const struct {
  int length;
  void* pad;
  const char name[12];
} _n1 = {12, NULL, {"ChannelDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ProgramArgs__ChannelDesc_tdb = {
  2, 
  NULL, 
  {
    &Channel__ChannelDesc_td.td, 
    &ProgramArgs__ChannelDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[8];
} _tb0 = {8, NULL, {
  (void*)ProgramArgs__ChannelDesc_Length, 
  (void*)ProgramArgs__ChannelDesc_GetModTime, 
  (void*)ProgramArgs__ChannelDesc_NewReader, 
  (void*)Channel__ChannelDesc_NewWriter, 
  (void*)ProgramArgs__ChannelDesc_Flush, 
  (void*)ProgramArgs__ChannelDesc_Close, 
  (void*)Channel__ChannelDesc_ClearError, 
  (void*)ProgramArgs__ChannelDesc_ArgNumber
}};
struct _TD ProgramArgs__ChannelDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ProgramArgs__ChannelDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &ProgramArgs_md.md,
    1, 
    '0', '1',
    sizeof(ProgramArgs__ChannelDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n2 = {11, NULL, {"ReaderDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ProgramArgs__ReaderDesc_tdb = {
  2, 
  NULL, 
  {
    &Channel__ReaderDesc_td.td, 
    &ProgramArgs__ReaderDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[6];
} _tb1 = {6, NULL, {
  (void*)ProgramArgs__ReaderDesc_Pos, 
  (void*)ProgramArgs__ReaderDesc_Available, 
  (void*)ProgramArgs__ReaderDesc_SetPos, 
  (void*)ProgramArgs__ReaderDesc_ReadByte, 
  (void*)ProgramArgs__ReaderDesc_ReadBytes, 
  (void*)Channel__ReaderDesc_ClearError
}};
struct _TD ProgramArgs__ReaderDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ProgramArgs__ReaderDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &ProgramArgs_md.md,
    1, 
    '0', '1',
    sizeof(ProgramArgs__ReaderDesc),
    &ProgramArgs__ChannelDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[17];
} _n3 = {17, NULL, {"ErrorContextDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[3];
} ProgramArgs__ErrorContextDesc_tdb = {
  3, 
  NULL, 
  {
    &Msg__ContextDesc_td.td, 
    &Channel__ErrorContextDesc_td.td, 
    &ProgramArgs__ErrorContextDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb2 = {1, NULL, {
  (void*)Channel__ErrorContextDesc_GetTemplate
}};
struct _TD ProgramArgs__ErrorContextDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ProgramArgs__ErrorContextDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &ProgramArgs_md.md,
    2, 
    '0', '1',
    sizeof(ProgramArgs__ErrorContextDesc),
    &ProgramArgs__ReaderDesc_td.td
  }
};

/* local strings */
static const unsigned char _c0[] = "OOC:Core:ProgramArgs";

