/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "ProgramArgs.d"

static _ModId _mid;

Msg__Msg ProgramArgs__GetError(int code) {
  register int i0;
  i0 = (int)ProgramArgs__errorContext;
  i0 = (int)Msg__New((Msg__Context)i0, (int)code);
  return (void*)i0;
}

int ProgramArgs__ReaderDesc_Pos(ProgramArgs__Reader r) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i0 = (int)r + 16;
  i5 = *(int*)i0;
  i0 = _program_argc;
  i0 = i5 == i0;
  if (i0) goto l4;
  i4 = i5 != 0;
  if (i4) goto l0;
  i4 = (int)r + 20;
  i4 = *(int*)i4;
  i4 = i4 != 0;
  if (i4) goto l0;
  i6 = 0;
  goto l5;
l0:
  i3 = (int)_program_argv;
  i4 = (int)r + 20;
  i6 = 0;
  i1 = 0;
  i0 = 0;
l1:
  i2 = (int)_ashl(i1, 2, (unsigned int));
  i2 = i3 + i2;
  i2 = (int)*(void**)i2;
  i2 = i0 + i2;
  i2 = *(unsigned char*)i2;
  i2 = i2 == 0;
  if (i2) goto l2;
  i2 = i0 + 1;
  i0 = i2;
  goto l3;
l2:
  i2 = i1 + 1;
  i0 = 0;
  i1 = i2;
l3:
  i2 = i1 != i5;
  i6++;
  if (i2) goto l1;
  i2 = *(int*)i4;
  i2 = i0 != i2;
  if (i2) goto l1;
  goto l5;
l4:
  i6 = (int)r + 20;
  i6 = *(int*)i6;
l5:
  return (int)i6;
}

int ProgramArgs__ReaderDesc_Available(ProgramArgs__Reader r) {
  register int i0, i1;
  i0 = (int)*(void**)(int)r;
  i1 = i0 + 6;
  i1 = *(unsigned char*)i1;
  if (i1) goto l0;
  i1 = -1;
  goto l1;
l0:
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[0];
  i1 = ((_TBP_Channel__ChannelDesc_Length)i1)((Channel__Channel)i0);
  i0 = *(int*)((int)r-4);
  i0 = (int)((_Type)i0)->tbprocs[0];
  i0 = ((_TBP_ProgramArgs__ReaderDesc_Pos)i0)((ProgramArgs__Reader)(int)r);
  i1 -= i0;
  i0 = i1 >= 0;
  if (i0) goto l1;
  i1 = 0;
l1:
  return (int)i1;
}

void ProgramArgs__ReaderDesc_SetPos(ProgramArgs__Reader r, int newPos) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i6 = (int)r + 4;
  i0 = (int)*(void**)i6;
  i0 = i0 != 0;
  if (i0) goto l8;
  i5 = newPos < 0;
  if (i5) goto l7;
  i7 = (int)*(void**)(int)r;
  i7 += 6;
  i7 = *(unsigned char*)i7;
  if (i7) goto l0;
  i7 = (int)ProgramArgs__GetError((int)6);
  *(void**)i6 = (void*)i7;
  goto l8;
l0:
  i2 = _program_argc;
  i5 = i2 <= 0;
  if (i5) goto l4;
  i5 = newPos == 0;
  if (i5) goto l4;
  i0 = (int)_program_argv;
  i4 = 0;
  i1 = 0;
  i7 = 0;
l1:
  i3 = (int)_ashl(i1, 2, (unsigned int));
  i3 = i0 + i3;
  i3 = (int)*(void**)i3;
  i3 = i7 + i3;
  i3 = *(unsigned char*)i3;
  i3 = i3 == 0;
  if (i3) goto l2;
  i3 = i7 + 1;
  i7 = i3;
  goto l3;
l2:
  i3 = i1 + 1;
  i7 = 0;
  i1 = i3;
l3:
  i4++;
  i3 = i1 >= i2;
  if (i3) goto l5;
  i3 = newPos != i4;
  if (i3) goto l1;
  goto l5;
l4:
  i7 = 0;
  i1 = 0;
l5:
  i5 = (int)r + 16;
  *(int*)i5 = i1;
  i5 = _program_argc;
  i5 = i1 == i5;
  if (i5) goto l6;
  i5 = (int)r + 20;
  *(int*)i5 = i7;
  goto l8;
l6:
  i5 = (int)r + 20;
  *(int*)i5 = newPos;
  goto l8;
l7:
  i5 = (int)ProgramArgs__GetError((int)4);
  *(void**)i6 = (void*)i5;
l8:
  ;
}

void ProgramArgs__ReaderDesc_ReadByte(ProgramArgs__Reader r, unsigned char *x) {
  register int i0, i1, i2, i3, i4, i5;
  i4 = (int)r + 4;
  i0 = (int)*(void**)i4;
  i0 = i0 == 0;
  if (i0) goto l0;
  i0 = (int)r + 8;
  *(int*)i0 = 0;
  goto l6;
l0:
  i3 = (int)*(void**)(int)r;
  i3 += 6;
  i3 = *(unsigned char*)i3;
  if (i3) goto l1;
  i3 = (int)ProgramArgs__GetError((int)6);
  *(void**)i4 = (void*)i3;
  i3 = (int)r + 8;
  *(int*)i3 = 0;
  goto l6;
l1:
  i2 = (int)r + 16;
  i5 = *(int*)i2;
  i1 = _program_argc;
  i1 = i5 == i1;
  if (i1) goto l5;
  i1 = (int)r + 20;
  i3 = *(int*)i1;
  i4 = (int)_program_argv;
  i0 = (int)_ashl(i5, 2, (unsigned int));
  i0 = i4 + i0;
  i0 = (int)*(void**)i0;
  i0 = i3 + i0;
  i4 = *(unsigned char*)i0;
  i0 = i4 == 0;
  if (i0) goto l3;
  i0 = i4 == 10;
  if (i0) goto l2;
  i0 = i3 + 1;
  *(int*)i1 = i0;
  *x = i4;
  goto l6;
l2:
  i3++;
  *(int*)i1 = i3;
  *x = 32;
  goto l6;
l3:
  i5++;
  *(int*)i2 = i5;
  *x = 10;
  i2 = *(int*)i2;
  i5 = _program_argc;
  i2 = i2 == i5;
  if (i2) goto l4;
  *(int*)i1 = 0;
  goto l6;
l4:
  i2 = (int)*(void**)(int)r;
  i5 = *(int*)(i2-4);
  i5 = (int)((_Type)i5)->tbprocs[0];
  i2 = ((_TBP_Channel__ChannelDesc_Length)i5)((Channel__Channel)i2);
  *(int*)i1 = i2;
  goto l6;
l5:
  i1 = (int)ProgramArgs__GetError((int)5);
  *(void**)i4 = (void*)i1;
l6:
  ;
}

void ProgramArgs__ReaderDesc_ReadBytes(ProgramArgs__Reader r, unsigned char* x, int x_0d, int start, int n) {
  register int i0, i1, i2, i3, i4, i5;
  i0 = n <= 0;
  if (i0) goto l2;
  i1 = (int)r + 4;
  i4 = (int)*(void**)i1;
  i2 = i4 != 0;
  if (i2) goto l2;
  i3 = *(int*)((int)r-4);
  i4 = (int)((_Type)i3)->tbprocs[3];
  i5 = 0;
l0:
  i0 = start + i5;
  i3 = (int)x + i0;
  i0 = *(unsigned char*)i3;
  ((_TBP_ProgramArgs__ReaderDesc_ReadByte)i4)((ProgramArgs__Reader)(int)r, (unsigned char *)i3);
  i3 = (int)*(void**)i1;
  i3 = i3 == 0;
  if (!(i3)) goto l1;
  i0 = i5 + 1;
  i5 = i0;
l1:
  i0 = n > i5;
  if (!(i0)) goto l3;
  if (i3) goto l0;
  goto l3;
l2:
  i5 = 0;
l3:
  i0 = (int)r + 8;
  *(int*)i0 = i5;
}

int ProgramArgs__ChannelDesc_Length(ProgramArgs__Channel ch) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i5 = _program_argc;
  i0 = i5 > 0;
  if (i0) goto l0;
  i6 = 0;
  goto l5;
l0:
  i0 = (int)_program_argv;
  i3 = 0;
  i6 = 0;
l1:
  i1 = (int)_ashl(i3, 2, (unsigned int));
  i1 = i0 + i1;
  i2 = (int)*(void**)i1;
  i1 = *(unsigned char*)i2;
  i1 = i1 != 0;
  if (i1) goto l2;
  i4 = 0;
  goto l4;
l2:
  i4 = 0;
l3:
  i4++;
  i1 = i2 + i4;
  i1 = *(unsigned char*)i1;
  i1 = i1 != 0;
  if (i1) goto l3;
l4:
  i3++;
  i1 = i5 > i3;
  i2 = i4 + 1;
  i6 += i2;
  if (i1) goto l1;
l5:
  return (int)i6;
}

int ProgramArgs__ChannelDesc_ArgNumber(ProgramArgs__Channel ch) {
  register int i0;
  i0 = _program_argc;
  i0--;
  return (int)i0;
}

void ProgramArgs__ChannelDesc_GetModTime(ProgramArgs__Channel ch, Time__TimeStamp *mtime, _Type mtime__tag) {
  register int i0;
  i0 = (int)ProgramArgs__GetError((int)12);
  *(void**)(int)ch = (void*)i0;
}

ProgramArgs__Reader ProgramArgs__ChannelDesc_NewReader(ProgramArgs__Channel ch) {
  register int i0, i1, i2;
  i0 = (int)ch + 6;
  i0 = *(unsigned char*)i0;
  if (i0) goto l0;
  i0 = (int)ProgramArgs__GetError((int)6);
  *(void**)(int)ch = (void*)i0;
  i2 = 0;
  goto l1;
l0:
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(24)+8);
    if (!_mem) _new_failed(_P(10175));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ProgramArgs__ReaderDesc_td.td;
    i2 = (int)_var;
  }
  i1 = *(int*)(i2-4);
  *(void**)i2 = (void*)(int)ch;
  i1 = (int)((_Type)i1)->tbprocs[5];
  i0 = i2 + 8;
  ((_TBP_Channel__ReaderDesc_ClearError)i1)((Channel__Reader)i2);
  i1 = i2 + 12;
  *(int*)i0 = 1;
  i0 = i2 + 16;
  *(unsigned char*)i1 = 1;
  i1 = i2 + 20;
  *(int*)i0 = 0;
  i0 = *(int*)((int)ch-4);
  *(int*)i1 = 0;
  i1 = (int)((_Type)i0)->tbprocs[6];
  ((_TBP_Channel__ChannelDesc_ClearError)i1)((Channel__Channel)(int)ch);
l1:
  return (void*)i2;
}

void ProgramArgs__ChannelDesc_Flush(ProgramArgs__Channel ch) {
  register int i0;
  i0 = (int)ch + 6;
  i0 = *(unsigned char*)i0;
  if (i0) goto l0;
  i0 = (int)ProgramArgs__GetError((int)6);
  *(void**)(int)ch = (void*)i0;
l0:
  ;
}

void ProgramArgs__ChannelDesc_Close(ProgramArgs__Channel ch) {
  register int i0;
  i0 = (int)ch + 6;
  *(unsigned char*)i0 = 0;
}

void ProgramArgs_init(void) {
  register int i0, i1;
  _mid = _register_module(&ProgramArgs_md.md, &ProgramArgs__ErrorContextDesc_td.td);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(10756));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ProgramArgs__ErrorContextDesc_td.td;
    i0 = (int)_var;
  }
  ProgramArgs__errorContext = (void*)i0;
  i0 = (int)ProgramArgs__errorContext;
  Msg__InitContext((Msg__Context)i0, (const Msg__String)(int)_c0, 21);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(8)+8);
    if (!_mem) _new_failed(_P(10839));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ProgramArgs__ChannelDesc_td.td;
    i0 = (int)_var;
  }
  ProgramArgs__args = (void*)i0;
  i0 = (int)ProgramArgs__args;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[6];
  ((_TBP_Channel__ChannelDesc_ClearError)i1)((Channel__Channel)i0);
  i0 = (int)ProgramArgs__args;
  i1 = i0 + 4;
  *(unsigned char*)i1 = 1;
  i1 = (int)ProgramArgs__args;
  i0 = i1 + 5;
  *(unsigned char*)i0 = 0;
  i1 = (int)ProgramArgs__args;
  i0 = i1 + 6;
  *(unsigned char*)i0 = 1;
}
