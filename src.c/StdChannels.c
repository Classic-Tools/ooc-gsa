/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "StdChannels.d"

static _ModId _mid;

Msg__Msg StdChannels__GetError(int code) {
  register int i0;
  i0 = (int)StdChannels__errorContext;
  i0 = (int)Msg__New((Msg__Context)i0, (int)code);
  return (void*)i0;
}

int StdChannels__WriterDesc_Pos(StdChannels__Writer w) {
  return (int)-2;
}

void StdChannels__WriterDesc_SetPos(StdChannels__Writer w, int newPos) {
}

void StdChannels__WriterDesc_WriteByte(StdChannels__Writer w, unsigned char x) {
  register int i0;
  i0 = (int)w + 8;
  *(int*)i0 = 1;
}

void StdChannels__WriterDesc_WriteBytes(StdChannels__Writer w, unsigned char* x, int x_0d, int start, int n) {
  register int i0;
  i0 = (int)w + 8;
  *(int*)i0 = n;
}

int StdChannels__NullChannelDesc_Length(StdChannels__NullChannel ch) {
  return (int)-1;
}

void StdChannels__NullChannelDesc_GetModTime(StdChannels__NullChannel ch, Time__TimeStamp *mtime, _Type mtime__tag) {
  register int i0;
  i0 = (int)StdChannels__GetError((int)12);
  *(void**)(int)ch = (void*)i0;
}

Channel__Reader StdChannels__NullChannelDesc_NewReader(StdChannels__NullChannel ch) {
  register int i0;
  i0 = (int)StdChannels__GetError((int)9);
  *(void**)(int)ch = (void*)i0;
  return (int)0;
}

Channel__Writer StdChannels__NullChannelDesc_NewWriter(StdChannels__NullChannel ch) {
  register int i0, i1, i2, i3;
  i0 = *(int*)((int)ch-4);
  i1 = (int)((_Type)i0)->tbprocs[6];
  i0 = (int)ch + 8;
  ((_TBP_Channel__ChannelDesc_ClearError)i1)((Channel__Channel)(int)ch);
  i3 = (int)*(void**)i0;
  i1 = i3 != 0;
  if (i1) goto l0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(16)+8);
    if (!_mem) _new_failed(_P(3305));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &StdChannels__WriterDesc_td.td;
    i3 = (int)_var;
  }
  i2 = *(int*)(i3-4);
  *(void**)i3 = (void*)(int)ch;
  i1 = (int)((_Type)i2)->tbprocs[4];
  i2 = i3 + 12;
  ((_TBP_Channel__WriterDesc_ClearError)i1)((Channel__Writer)i3);
  i1 = i3 + 8;
  *(void**)i0 = (void*)i3;
  *(unsigned char*)i2 = 0;
  *(int*)i1 = -1;
l0:
  return (void*)i3;
}

void StdChannels__NullChannelDesc_Flush(StdChannels__NullChannel ch) {
  register int i0;
  i0 = *(int*)((int)ch-4);
  i0 = (int)((_Type)i0)->tbprocs[6];
  ((_TBP_Channel__ChannelDesc_ClearError)i0)((Channel__Channel)(int)ch);
}

void StdChannels__NullChannelDesc_Close(StdChannels__NullChannel ch) {
  register int i0;
  i0 = *(int*)((int)ch-4);
  i0 = (int)((_Type)i0)->tbprocs[6];
  ((_TBP_Channel__ChannelDesc_ClearError)i0)((Channel__Channel)(int)ch);
}

void StdChannels__Flush(void) {
  register int i0, i1;
  i0 = (int)StdChannels__stdout;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_Channel__ChannelDesc_Flush)i1)((Channel__Channel)i0);
  i0 = (int)StdChannels__stderr;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_Channel__ChannelDesc_Flush)i1)((Channel__Channel)i0);
}

void StdChannels_init(void) {
  register int i0, i1, i2;
  _mid = _register_module(&StdChannels_md.md, &StdChannels__ErrorContextDesc_td.td);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(3755));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &StdChannels__ErrorContextDesc_td.td;
    i0 = (int)_var;
  }
  StdChannels__errorContext = (void*)i0;
  i0 = (int)StdChannels__errorContext;
  Msg__InitContext((Msg__Context)i0, (const Msg__String)(int)_c0, 21);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(44)+8);
    if (!_mem) _new_failed(_P(3929));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &PosixFileDescr__ChannelDesc_td.td;
    i0 = (int)_var;
  }
  StdChannels__fd = (void*)i0;
  i0 = (int)StdChannels__fd;
  PosixFileDescr__Init((PosixFileDescr__Channel)i0, (int)0, (signed char)0);
  i0 = (int)StdChannels__fd;
  StdChannels__stdin = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(44)+8);
    if (!_mem) _new_failed(_P(4001));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &PosixFileDescr__ChannelDesc_td.td;
    i0 = (int)_var;
  }
  StdChannels__fd = (void*)i0;
  i0 = (int)StdChannels__fd;
  PosixFileDescr__Init((PosixFileDescr__Channel)i0, (int)1, (signed char)1);
  i0 = (int)StdChannels__fd;
  StdChannels__stdout = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(44)+8);
    if (!_mem) _new_failed(_P(4076));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &PosixFileDescr__ChannelDesc_td.td;
    i0 = (int)_var;
  }
  StdChannels__fd = (void*)i0;
  i0 = (int)StdChannels__fd;
  PosixFileDescr__Init((PosixFileDescr__Channel)i0, (int)2, (signed char)1);
  i0 = (int)StdChannels__fd;
  StdChannels__stderr = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(12)+8);
    if (!_mem) _new_failed(_P(4182));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &StdChannels__NullChannelDesc_td.td;
    i1 = (int)_var;
  }
  StdChannels__null = (void*)i1;
  i1 = (int)StdChannels__null;
  i2 = *(int*)(i1-4);
  i2 = (int)((_Type)i2)->tbprocs[6];
  ((_TBP_Channel__ChannelDesc_ClearError)i2)((Channel__Channel)i1);
  i2 = (int)StdChannels__null;
  i0 = i2 + 4;
  i1 = i2 + 5;
  *(unsigned char*)i0 = 0;
  i0 = i2 + 6;
  *(unsigned char*)i1 = 1;
  *(unsigned char*)i0 = 1;
  Termination__RegisterProc((Termination__Proc)(int)&StdChannels__Flush);
}
