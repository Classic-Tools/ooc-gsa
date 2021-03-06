/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "ParamOptions.d"

static _ModId _mid;

void ParamOptions__InitOption(ParamOptions__Option opt, const unsigned char* name__ref, int name_0d) {
  register int i0, i1;
  unsigned char* name;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  *(void**)(int)opt = (void*)0;
  i0 = Strings__Length((const unsigned char*)(int)name, name_0d);
  i1 = i0 + 1;
  i0 = (int)opt + 4;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(3883));
    _mem = GC_malloc_atomic(_not_zero(i1*1)+8);
    if (!_mem) _new_failed(_P(3846));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i1 = (int)_var;
  }
  *(void**)i0 = (void*)i1;
  i0 = (int)*(void**)i0;
  i1 = *(int*)(i0-8);
  _string_copy(i0, (int)name, i1);
  _top_vs = _old_top_vs;
}

void ParamOptions__OptionDesc_Write(ParamOptions__Option opt) {
}

unsigned char ParamOptions__OptionDesc_Accept(ParamOptions__Option opt, const unsigned char* str, int str_0d) {
}

ParamOptions__Option ParamOptions__OptionDesc_Copy(ParamOptions__Option opt) {
}

void ParamOptions__OptionDesc_CopyValue(ParamOptions__Option opt, ParamOptions__Option dest) {
}

ParamOptions__Option ParamOptions__OptionsSectionDesc_Find(ParamOptions__OptionsSection section, const unsigned char* name, int name_0d) {
  register int i0, i1, i2, i3;
  i0 = (int)section + 16;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l1;
  i1 = i2 + 4;
  i1 = (int)*(void**)i1;
  i0 = strcmp((const char*) (int)name, (const char*) i1) == 0;
  if (i0) goto l1;
  i3 = i2;
l0:
  i3 = (int)*(void**)i3;
  i1 = i3 == 0;
  if (i1) goto l2;
  i1 = i3 + 4;
  i1 = (int)*(void**)i1;
  i1 = strcmp((const char*) (int)name, (const char*) i1) != 0;
  if (i1) goto l0;
  goto l2;
l1:
  i3 = i2;
l2:
  return (void*)i3;
}

void ParamOptions__OptionsSectionDesc_Add(ParamOptions__OptionsSection section, ParamOptions__Option option) {
  register int i0, i1;
  i0 = (int)section + 16;
  i1 = (int)*(void**)i0;
  *(void**)i0 = (void*)(int)option;
  *(void**)(int)option = (void*)i1;
}

void ParamOptions__OptionsSectionDesc_Remove_Remove(ParamOptions__Option *opt, unsigned char* ParamOptions__OptionsSectionDesc_Remove_name) {
  register int i0, i1;
  i0 = (int)*opt;
  i1 = i0 + 4;
  i1 = (int)*(void**)i1;
  i1 = strcmp((const char*) i1, (const char*) (int)ParamOptions__OptionsSectionDesc_Remove_name) == 0;
  if (i1) goto l0;
  i1 = (int)*(void**)i0;
  ParamOptions__OptionsSectionDesc_Remove_Remove((ParamOptions__Option *)i0, ParamOptions__OptionsSectionDesc_Remove_name);
  goto l1;
l0:
  i0 = (int)*(void**)i0;
  *opt = (void*)i0;
l1:
  ;
}

void ParamOptions__OptionsSectionDesc_Remove(ParamOptions__OptionsSection section, const unsigned char* name__ref, int name_0d) {
  register int i0, i1;
  unsigned char* name;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  i0 = (int)section + 16;
  i1 = (int)*(void**)i0;
  ParamOptions__OptionsSectionDesc_Remove_Remove((ParamOptions__Option *)i0, name);
  _top_vs = _old_top_vs;
}

void ParamOptions__BooleanOptionDesc_Set(ParamOptions__BooleanOption opt, unsigned char value) {
  register int i0;
  i0 = (int)opt + 8;
  *(unsigned char*)i0 = value;
  ParamOptions__done = 1;
}

ParamOptions__BooleanOption ParamOptions__CreateBoolean(const unsigned char* name__ref, int name_0d, unsigned char default_) {
  register int i0, i1;
  unsigned char* name;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(12)+8);
    if (!_mem) _new_failed(_P(6252));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__BooleanOptionDesc_td.td;
    i0 = (int)_var;
  }
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[_TB1];
  ParamOptions__InitOption((ParamOptions__Option)i0, (const unsigned char*)(int)name, name_0d);
  ((_TBP_ParamOptions__BooleanOptionDesc_Set)i1)((ParamOptions__BooleanOption)i0, (unsigned char)default_);
  _top_vs = _old_top_vs;
  return (void*)i0;
}

unsigned char ParamOptions__BooleanOptionDesc_Accept(ParamOptions__BooleanOption opt, const unsigned char* str__ref, int str_0d) {
  register int i0, i1;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i0 = strcmp((const char*) (int)str, (const char*) (int)_c0) == 0;
  if (i0) goto l0;
  i1 = strcmp((const char*) (int)str, (const char*) (int)_c1) == 0;
  if (i1) goto l0;
  i1 = 0;
  goto l1;
l0:
  i1 = 1;
l1:
  ParamOptions__done = i1;
  i1 = ParamOptions__done;
  if (i1) goto l2;
  (void)memcpy((void*) (int)ParamOptions__error, (const void*) (int)_c2, 39);
  goto l3;
l2:
  i1 = *(int*)((int)opt-4);
  i1 = (int)((_Type)i1)->tbprocs[_TB1];
  ((_TBP_ParamOptions__BooleanOptionDesc_Set)i1)((ParamOptions__BooleanOption)(int)opt, (unsigned char)i0);
l3:
  i0 = ParamOptions__done;
  _top_vs = _old_top_vs;
  return (unsigned char)i0;
}

void ParamOptions__BooleanOptionDesc_Write(ParamOptions__BooleanOption opt) {
  register int i0;
  i0 = (int)opt + 8;
  i0 = *(unsigned char*)i0;
  if (i0) goto l0;
  Out__String((const unsigned char*)(int)_c1, 6);
  goto l1;
l0:
  Out__String((const unsigned char*)(int)_c0, 5);
l1:
  ;
}

ParamOptions__Option ParamOptions__BooleanOptionDesc_Copy(ParamOptions__BooleanOption opt) {
  register int i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(12)+8);
    if (!_mem) _new_failed(_P(6881));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__BooleanOptionDesc_td.td;
    i0 = (int)_var;
  }
  (void)memcpy((void*) i0, (const void*) (int)opt, 12);
  return (void*)i0;
}

void ParamOptions__BooleanOptionDesc_CopyValue(ParamOptions__BooleanOption opt, ParamOptions__Option dest) {
  register int i0, i1;
  i0 = (int)opt + 8;
  i0 = *(unsigned char*)i0;
  i1 = (int)dest + 8;
  *(unsigned char*)i1 = i0;
}

void ParamOptions__IntegerOptionDesc_Set(ParamOptions__IntegerOption opt, int value) {
  register int i0, i1, i2;
  unsigned char num[32];
  i1 = (int)opt + 12;
  i0 = *(int*)i1;
  i0 = value < i0;
  if (i0) goto l0;
  i2 = (int)opt + 16;
  i2 = *(int*)i2;
  i2 = value > i2;
  if (i2) goto l0;
  i0 = (int)opt + 8;
  *(int*)i0 = value;
  ParamOptions__done = 1;
  goto l1;
l0:
  (void)memcpy((void*) (int)ParamOptions__error, (const void*) (int)_c3, 36);
  i1 = *(int*)i1;
  IntStr__IntToStr((int)i1, (unsigned char*)(int)num, 32);
  Strings__Append((const unsigned char*)(int)num, 32, (unsigned char*)(int)ParamOptions__error, 128);
  Strings__Append((const unsigned char*)(int)_c4, 10, (unsigned char*)(int)ParamOptions__error, 128);
  i1 = (int)opt + 16;
  i1 = *(int*)i1;
  IntStr__IntToStr((int)i1, (unsigned char*)(int)num, 32);
  Strings__Append((const unsigned char*)(int)num, 32, (unsigned char*)(int)ParamOptions__error, 128);
  ParamOptions__done = 0;
l1:
  ;
}

ParamOptions__IntegerOption ParamOptions__CreateInteger(const unsigned char* name__ref, int name_0d, int default_, int lower, int upper) {
  register int i0, i1, i2, i3;
  unsigned char* name;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(20)+8);
    if (!_mem) _new_failed(_P(7870));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__IntegerOptionDesc_td.td;
    i0 = (int)_var;
  }
  i3 = i0 + 12;
  ParamOptions__InitOption((ParamOptions__Option)i0, (const unsigned char*)(int)name, name_0d);
  i1 = *(int*)(i0-4);
  i2 = i0 + 16;
  *(int*)i3 = lower;
  i1 = (int)((_Type)i1)->tbprocs[_TB2];
  *(int*)i2 = upper;
  ((_TBP_ParamOptions__IntegerOptionDesc_Set)i1)((ParamOptions__IntegerOption)i0, (int)default_);
  _top_vs = _old_top_vs;
  return (void*)i0;
}

unsigned char ParamOptions__IntegerOptionDesc_Accept(ParamOptions__IntegerOption opt, const unsigned char* str__ref, int str_0d) {
  register int i0;
  signed char format;
  int int_;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  IntStr__StrToInt((const unsigned char*)(int)str, str_0d, (int *)(int)&int_, (signed char *)(int)&format);
  i0 = format == 0;
  ParamOptions__done = i0;
  i0 = ParamOptions__done;
  if (i0) goto l0;
  (void)memcpy((void*) (int)ParamOptions__error, (const void*) (int)_c5, 16);
  goto l1;
l0:
  i0 = *(int*)((int)opt-4);
  i0 = (int)((_Type)i0)->tbprocs[_TB2];
  ((_TBP_ParamOptions__IntegerOptionDesc_Set)i0)((ParamOptions__IntegerOption)(int)opt, (int)int_);
l1:
  i0 = ParamOptions__done;
  _top_vs = _old_top_vs;
  return (unsigned char)i0;
}

void ParamOptions__IntegerOptionDesc_Write(ParamOptions__IntegerOption opt) {
  register int i0;
  i0 = (int)opt + 8;
  i0 = *(int*)i0;
  Out__LongInt((int)i0, (int)0);
}

ParamOptions__Option ParamOptions__IntegerOptionDesc_Copy(ParamOptions__IntegerOption opt) {
  register int i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(20)+8);
    if (!_mem) _new_failed(_P(8536));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__IntegerOptionDesc_td.td;
    i0 = (int)_var;
  }
  (void)memcpy((void*) i0, (const void*) (int)opt, 20);
  return (void*)i0;
}

void ParamOptions__IntegerOptionDesc_CopyValue(ParamOptions__IntegerOption opt, ParamOptions__Option dest) {
  register int i0, i1;
  i0 = (int)opt + 8;
  i0 = *(int*)i0;
  i1 = (int)dest + 8;
  *(int*)i1 = i0;
}

void ParamOptions__StringOptionDesc_Set(ParamOptions__StringOption opt, const unsigned char* value__ref, int value_0d) {
  register int i0, i1;
  unsigned char* value;
  char* _old_top_vs = _top_vs;
  _push_value(int, value, value__ref, value_0d);
  i0 = Strings__Length((const unsigned char*)(int)value, value_0d);
  i1 = i0 + 1;
  i0 = (int)opt + 8;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(8836));
    _mem = GC_malloc_atomic(_not_zero(i1*1)+8);
    if (!_mem) _new_failed(_P(8797));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i1 = (int)_var;
  }
  *(void**)i0 = (void*)i1;
  i0 = (int)*(void**)i0;
  i1 = *(int*)(i0-8);
  _string_copy(i0, (int)value, i1);
  ParamOptions__done = 1;
  _top_vs = _old_top_vs;
}

ParamOptions__StringOption ParamOptions__CreateString(const unsigned char* name__ref, int name_0d, const unsigned char* default___ref, int default__0d) {
  register int i0, i1;
  unsigned char* name;
  unsigned char* default_;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  _push_value(int, default_, default___ref, default__0d);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(12)+8);
    if (!_mem) _new_failed(_P(9028));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__StringOptionDesc_td.td;
    i0 = (int)_var;
  }
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[_TB3];
  ParamOptions__InitOption((ParamOptions__Option)i0, (const unsigned char*)(int)name, name_0d);
  ((_TBP_ParamOptions__StringOptionDesc_Set)i1)((ParamOptions__StringOption)i0, (const unsigned char*)(int)default_, default__0d);
  _top_vs = _old_top_vs;
  return (void*)i0;
}

unsigned char ParamOptions__StringOptionDesc_Accept(ParamOptions__StringOption opt, const unsigned char* str__ref, int str_0d) {
  register int i0;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i0 = *(int*)((int)opt-4);
  i0 = (int)((_Type)i0)->tbprocs[_TB3];
  ((_TBP_ParamOptions__StringOptionDesc_Set)i0)((ParamOptions__StringOption)(int)opt, (const unsigned char*)(int)str, str_0d);
  i0 = ParamOptions__done;
  _top_vs = _old_top_vs;
  return (unsigned char)i0;
}

void ParamOptions__StringOptionDesc_Write(ParamOptions__StringOption opt) {
  register int i0, i1, i2;
  unsigned char found;
  short int pos;
  i1 = (int)opt + 8;
  i0 = (int)*(void**)i1;
  i2 = *(int*)(i0-8);
  Strings__FindNext((const unsigned char*)(int)_c6, 2, (const unsigned char*)i0, i2, (short int)0, (unsigned char *)(int)&found, (short int *)(int)&pos);
  if (found) goto l0;
  Out__Char((unsigned char)34);
  i0 = (int)*(void**)i1;
  i2 = *(int*)(i0-8);
  Out__String((const unsigned char*)i0, i2);
  Out__Char((unsigned char)34);
  goto l1;
l0:
  Out__Char((unsigned char)39);
  i1 = (int)*(void**)i1;
  i0 = *(int*)(i1-8);
  Out__String((const unsigned char*)i1, i0);
  Out__Char((unsigned char)39);
l1:
  ;
}

ParamOptions__Option ParamOptions__StringOptionDesc_Copy(ParamOptions__StringOption opt) {
  register int i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(12)+8);
    if (!_mem) _new_failed(_P(9750));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__StringOptionDesc_td.td;
    i0 = (int)_var;
  }
  (void)memcpy((void*) i0, (const void*) (int)opt, 12);
  return (void*)i0;
}

void ParamOptions__StringOptionDesc_CopyValue(ParamOptions__StringOption opt, ParamOptions__Option dest) {
  register int i0, i1;
  i0 = (int)opt + 8;
  i0 = (int)*(void**)i0;
  i1 = (int)dest + 8;
  *(void**)i1 = (void*)i0;
}

void ParamOptions__OptionsSectionDesc_Parse_GetSym(int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd) {
  register int i0, i1, i2;
  i0 = (int)Parameter__in;
  Parameter__StreamDesc_SkipWhitespace((Parameter__Stream)i0);
  i1 = (int)Parameter__in;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  i0 = ((_TBP_Parameter__StreamDesc_CurrPos)i0)((Parameter__Stream)i1);
  *ParamOptions__OptionsSectionDesc_Parse_currSymPos = i0;
  i2 = (int)Parameter__in;
  i0 = i2 + 6;
  i0 = *(unsigned char*)i0;
  if (i0) goto l8;
  i2 += 5;
  i1 = *(unsigned char*)i2;
  if (!(i1<=33 || (i1>=35 && i1<=38) || (i1>=40 && i1<=43) || (i1>=45 && i1<=57) || i1>=60)) goto l4;
  i2 = Parameter__IsNum((unsigned char)i1);
  if (i2) goto l3;
  i0 = (int)Parameter__in;
  i0 += 5;
  i0 = *(unsigned char*)i0;
  i2 = i0 == 45;
  if (i2) goto l3;
  i2 = i0 == 43;
  if (i2) goto l3;
  i0 = Parameter__IsAlpha((unsigned char)i0);
  if (!(i0)) goto l9;
  i0 = (int)Parameter__in;
  Parameter__StreamDesc_ReadIdent((Parameter__Stream)i0, (unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_str, 2048);
  i0 = *ParamOptions__OptionsSectionDesc_Parse_includeEnd;
  if (!(i0)) goto l0;
  i0 = strcmp((const char*) (int)ParamOptions__OptionsSectionDesc_Parse_str, (const char*) (int)_c7) == 0;
  if (i0) goto l2;
l0:
  i0 = strcmp((const char*) (int)ParamOptions__OptionsSectionDesc_Parse_str, (const char*) (int)_c8) == 0;
  if (i0) goto l1;
  *ParamOptions__OptionsSectionDesc_Parse_sym = 5;
  goto l9;
l1:
  *ParamOptions__OptionsSectionDesc_Parse_sym = 8;
  goto l9;
l2:
  *ParamOptions__OptionsSectionDesc_Parse_sym = 7;
  goto l9;
l3:
  i2 = (int)Parameter__in;
  Parameter__StreamDesc_ReadInteger((Parameter__Stream)i2, (unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_str, 2048);
  *ParamOptions__OptionsSectionDesc_Parse_sym = 6;
  goto l9;
l4:
  if (!(i1==34 || i1==39)) goto l5;
  *ParamOptions__OptionsSectionDesc_Parse_sym = 1;
  i2 = (int)Parameter__in;
  Parameter__StreamDesc_ReadString((Parameter__Stream)i2, (unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_str, 2048);
  goto l9;
l5:
  if (!(i1==59)) goto l6;
  *ParamOptions__OptionsSectionDesc_Parse_sym = 2;
  i2 = (int)Parameter__in;
  i1 = *(int*)(i2-4);
  i1 = (int)((_Type)i1)->tbprocs[1];
  ((_TBP_Parameter__StreamDesc_NextChar)i1)((Parameter__Stream)i2);
  goto l9;
l6:
  if (!(i1==44)) goto l7;
  *ParamOptions__OptionsSectionDesc_Parse_sym = 3;
  i1 = (int)Parameter__in;
  i2 = *(int*)(i1-4);
  i2 = (int)((_Type)i2)->tbprocs[1];
  ((_TBP_Parameter__StreamDesc_NextChar)i2)((Parameter__Stream)i1);
  goto l9;
l7:
  if (!(i1==58)) goto l9;
  *ParamOptions__OptionsSectionDesc_Parse_sym = 4;
  i2 = (int)Parameter__in;
  Parameter__StreamDesc_Match((Parameter__Stream)i2, (const unsigned char*)(int)_c9, 3);
  goto l9;
l8:
  *ParamOptions__OptionsSectionDesc_Parse_sym = 0;
l9:
  ;
}

void ParamOptions__OptionsSectionDesc_Parse_Match(signed char expected, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd) {
  register int i0, i1, i2;
  unsigned char str[32];
  i0 = *ParamOptions__OptionsSectionDesc_Parse_sym;
  i0 = expected == i0;
  if (i0) goto l2;
  if (!(expected==4)) goto l0;
  (void)memcpy((void*) (int)str, (const void*) (int)_c9, 3);
  goto l1;
l0:
  if (!(expected==7)) goto l1;
  (void)memcpy((void*) (int)str, (const void*) (int)_c7, 4);
l1:
  Strings__Append((const unsigned char*)(int)_c10, 10, (unsigned char*)(int)str, 32);
  i2 = (int)Parameter__in;
  i1 = *(int*)(i2-4);
  i0 = (int)((_Type)i1)->tbprocs[3];
  i1 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i0)((Parameter__Stream)i2, (int)i1, (const unsigned char*)(int)str, 32);
l2:
  i0 = expected != 7;
  if (!(i0)) goto l3;
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&*ParamOptions__OptionsSectionDesc_Parse_currSymPos, &*ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__OptionsSectionDesc_Parse_str, &*ParamOptions__OptionsSectionDesc_Parse_includeEnd);
l3:
  ;
}

ParamOptions__Option ParamOptions__OptionsSectionDesc_Parse_Create(const unsigned char* name__ref, int name_0d, unsigned char register_, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, ParamOptions__OptionsSection *ParamOptions__OptionsSectionDesc_Parse_s) {
  register int i0, i1, i2;
  unsigned char* name;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  i0 = *ParamOptions__OptionsSectionDesc_Parse_sym;
  if (!(i0<=0 || (i0>=2 && i0<=4) || i0>=7)) goto l0;
  i1 = (int)Parameter__in;
  i0 = *(int*)(i1-4);
  i2 = (int)((_Type)i0)->tbprocs[3];
  i0 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i2)((Parameter__Stream)i1, (int)i0, (const unsigned char*)(int)_c11, 14);
  i1 = 0;
  goto l3;
l0:
  if (!(i0==1)) goto l1;
  i1 = (int)ParamOptions__CreateString((const unsigned char*)(int)name, name_0d, (const unsigned char*)(int)_c12, 1);
  goto l3;
l1:
  if (!(i0==6)) goto l2;
  i1 = (int)ParamOptions__CreateInteger((const unsigned char*)(int)name, name_0d, (int)0, (int)(-2147483647-1), (int)2147483647);
  goto l3;
l2:
  if (!(i0==5)) goto l3;
  i1 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)name, name_0d, (unsigned char)0);
l3:
  if (!(register_)) goto l4;
  i0 = i1 == 0;
  if (i0) goto l4;
  i0 = (int)*ParamOptions__OptionsSectionDesc_Parse_s;
  i2 = *(int*)(i0-4);
  i2 = (int)((_Type)i2)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i2)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i1);
l4:
  _top_vs = _old_top_vs;
  return (void*)i1;
}

void ParamOptions__OptionsSectionDesc_Parse_Accept(ParamOptions__Option opt, const unsigned char* str__ref, int str_0d, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos) {
  register int i0, i1, i2, i3;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i0 = (int)opt == 0;
  if (i0) goto l2;
  i0 = *(int*)((int)opt-4);
  i2 = _type_test(i0, &ParamOptions__StringOptionDesc_td.td, 1);
  if (!(i2)) goto l0;
  i3 = *ParamOptions__OptionsSectionDesc_Parse_sym;
  i3 = i3 != 1;
  if (i3) goto l1;
l0:
  i0 = (int)((_Type)i0)->tbprocs[1];
  i0 = ((_TBP_ParamOptions__OptionDesc_Accept)i0)((ParamOptions__Option)(int)opt, (const unsigned char*)(int)str, str_0d);
  if (i0) goto l2;
  i1 = (int)Parameter__in;
  i2 = *(int*)(i1-4);
  i0 = (int)((_Type)i2)->tbprocs[3];
  i2 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i0)((Parameter__Stream)i1, (int)i2, (const unsigned char*)(int)ParamOptions__error, 128);
  goto l2;
l1:
  i1 = (int)Parameter__in;
  i2 = *(int*)(i1-4);
  i3 = (int)((_Type)i2)->tbprocs[3];
  i2 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i3)((Parameter__Stream)i1, (int)i2, (const unsigned char*)(int)_c13, 16);
l2:
  _top_vs = _old_top_vs;
}

void ParamOptions__OptionsSectionDesc_Parse_Assign(unsigned char def, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__Option *ParamOptions__OptionsSectionDesc_Parse_opt, ParamOptions__OptionsSection *ParamOptions__OptionsSectionDesc_Parse_s, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_name, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd) {
  register int i0, i1, i2, i3;
  i0 = *ParamOptions__OptionsSectionDesc_Parse_sym;
  i0 = i0 == 5;
  if (i0) goto l0;
  i1 = (int)Parameter__in;
  i2 = *(int*)(i1-4);
  i0 = (int)((_Type)i2)->tbprocs[3];
  i2 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i0)((Parameter__Stream)i1, (int)i2, (const unsigned char*)(int)_c14, 23);
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&*ParamOptions__OptionsSectionDesc_Parse_currSymPos, &*ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__OptionsSectionDesc_Parse_str, &*ParamOptions__OptionsSectionDesc_Parse_includeEnd);
  goto l7;
l0:
  i1 = (int)*ParamOptions__OptionsSectionDesc_Parse_s;
  i2 = *(int*)(i1-4);
  i2 = (int)((_Type)i2)->tbprocs[3];
  i2 = (int)((_TBP_ParamOptions__OptionsSectionDesc_Find)i2)((ParamOptions__OptionsSection)i1, (const unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_str, 2048);
  *ParamOptions__OptionsSectionDesc_Parse_opt = (void*)i2;
  (void)memcpy((void*) (int)ParamOptions__OptionsSectionDesc_Parse_name, (const void*) (int)ParamOptions__OptionsSectionDesc_Parse_str, 2048);
  i3 = (int)*ParamOptions__OptionsSectionDesc_Parse_opt;
  i2 = i3 != 0;
  if (i2) goto l1;
  i0 = (int)*ParamOptions__OptionsSectionDesc_Parse_s;
  i0 += 12;
  i1 = *(signed char*)i0;
  i0 = i1 == 0;
  if (i0) goto l2;
  i1 = i1 != 1;
  if (i1) goto l1;
  if (!(def)) goto l2;
l1:
  i3 = i3 != 0;
  if (!(i3)) goto l3;
  if (!(def)) goto l3;
  i3 = (int)Parameter__in;
  i1 = *(int*)(i3-4);
  i2 = (int)((_Type)i1)->tbprocs[3];
  i1 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i2)((Parameter__Stream)i3, (int)i1, (const unsigned char*)(int)_c16, 25);
  goto l3;
l2:
  i1 = (int)Parameter__in;
  i2 = *(int*)(i1-4);
  i0 = (int)((_Type)i2)->tbprocs[3];
  i2 = *ParamOptions__OptionsSectionDesc_Parse_currSymPos;
  ((_TBP_Parameter__StreamDesc_Error)i0)((Parameter__Stream)i1, (int)i2, (const unsigned char*)(int)_c15, 21);
l3:
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&*ParamOptions__OptionsSectionDesc_Parse_currSymPos, &*ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__OptionsSectionDesc_Parse_str, &*ParamOptions__OptionsSectionDesc_Parse_includeEnd);
  ParamOptions__OptionsSectionDesc_Parse_Match((signed char)4, &*ParamOptions__OptionsSectionDesc_Parse_sym, &*ParamOptions__OptionsSectionDesc_Parse_currSymPos, ParamOptions__OptionsSectionDesc_Parse_str, &*ParamOptions__OptionsSectionDesc_Parse_includeEnd);
  i2 = (int)*ParamOptions__OptionsSectionDesc_Parse_opt;
  i2 = i2 != 0;
  if (i2) goto l6;
  i1 = (int)*ParamOptions__OptionsSectionDesc_Parse_s;
  if (def) goto l4;
  i2 = i1 + 12;
  i2 = *(signed char*)i2;
  i2 = i2 == 3;
  if (i2) goto l4;
  i2 = 0;
  goto l5;
l4:
  i2 = 1;
l5:
  i1 = (int)ParamOptions__OptionsSectionDesc_Parse_Create((const unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_name, 2048, (unsigned char)i2, &*ParamOptions__OptionsSectionDesc_Parse_sym, &*ParamOptions__OptionsSectionDesc_Parse_currSymPos, (ParamOptions__OptionsSection *)&*ParamOptions__OptionsSectionDesc_Parse_s);
  *ParamOptions__OptionsSectionDesc_Parse_opt = (void*)i1;
l6:
  i2 = (int)*ParamOptions__OptionsSectionDesc_Parse_opt;
  ParamOptions__OptionsSectionDesc_Parse_Accept((ParamOptions__Option)i2, (const unsigned char*)(int)ParamOptions__OptionsSectionDesc_Parse_str, 2048, &*ParamOptions__OptionsSectionDesc_Parse_sym, &*ParamOptions__OptionsSectionDesc_Parse_currSymPos);
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&*ParamOptions__OptionsSectionDesc_Parse_currSymPos, &*ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__OptionsSectionDesc_Parse_str, &*ParamOptions__OptionsSectionDesc_Parse_includeEnd);
l7:
  ;
}

void ParamOptions__OptionsSectionDesc_Parse(ParamOptions__OptionsSection s, unsigned char includeEnd) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
  int currSymPos;
  Parameter__LargeString name;
  ParamOptions__Option opt;
  Parameter__LargeString str;
  signed char sym;
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&currSymPos, &sym, str, &includeEnd);
  i8 = currSymPos;
  i7 = includeEnd;
  i5 = (int)s;
  i9 = sym;
l0:
  i4 = i9 == 5;
  if (i4) goto l3;
  i3 = i9 == 8;
  if (i3) goto l1;
  i0 = i5;
  i1 = i6;
  i4 = i9;
  i3 = i7;
  i2 = i8;
  goto l2;
l1:
  currSymPos = (int)i8;
  sym = (signed char)8;
  includeEnd = (unsigned char)i7;
  currSymPos = (int)i8;
  includeEnd = (unsigned char)i7;
  sym = (signed char)8;
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&currSymPos, &sym, str, &includeEnd);
  opt = (void*)i6;
  s = (void*)i5;
  opt = (void*)i6;
  s = (void*)i5;
  ParamOptions__OptionsSectionDesc_Parse_Assign((unsigned char)1, &sym, (ParamOptions__Option *)&opt, (ParamOptions__OptionsSection *)&s, str, name, &currSymPos, &includeEnd);
  i0 = (int)s;
  i1 = (int)opt;
  i4 = sym;
  i3 = includeEnd;
  i2 = currSymPos;
l2:
  i5 = i0;
  i6 = i1;
  goto l4;
l3:
  sym = (signed char)5;
  opt = (void*)i6;
  s = (void*)i5;
  currSymPos = (int)i8;
  includeEnd = (unsigned char)i7;
  currSymPos = (int)i8;
  includeEnd = (unsigned char)i7;
  opt = (void*)i6;
  s = (void*)i5;
  sym = (signed char)5;
  ParamOptions__OptionsSectionDesc_Parse_Assign((unsigned char)0, &sym, (ParamOptions__Option *)&opt, (ParamOptions__OptionsSection *)&s, str, name, &currSymPos, &includeEnd);
  i4 = sym;
  i5 = (int)s;
  i6 = (int)opt;
  i3 = includeEnd;
  i2 = currSymPos;
l4:
  i9 = i4 == 0;
  if (i9) goto l5;
  i9 = i4 == 7;
  if (i9) goto l5;
  i1 = 0;
  goto l6;
l5:
  i1 = 1;
l6:
  if (i1) goto l8;
  i7 = i4 != 2;
  if (i7) goto l7;
  currSymPos = (int)i2;
  sym = (signed char)2;
  includeEnd = (unsigned char)i3;
  currSymPos = (int)i2;
  includeEnd = (unsigned char)i3;
  sym = (signed char)2;
  ParamOptions__OptionsSectionDesc_Parse_GetSym(&currSymPos, &sym, str, &includeEnd);
  i9 = sym;
  i7 = includeEnd;
  i8 = currSymPos;
  goto l9;
l7:
  i9 = (int)Parameter__in;
  i7 = *(int*)(i9-4);
  i7 = (int)((_Type)i7)->tbprocs[3];
  ((_TBP_Parameter__StreamDesc_Error)i7)((Parameter__Stream)i9, (int)i2, (const unsigned char*)(int)_c17, 11);
  i9 = i4;
  i7 = i3;
  i8 = i2;
  goto l9;
l8:
  i8 = i2;
  i7 = i3;
  i9 = i4;
l9:
  if (!(i1)) goto l0;
  if (!(i7)) goto l10;
  sym = (signed char)i9;
  currSymPos = (int)i8;
  includeEnd = (unsigned char)1;
  currSymPos = (int)i8;
  includeEnd = (unsigned char)1;
  sym = (signed char)i9;
  ParamOptions__OptionsSectionDesc_Parse_Match((signed char)7, &sym, &currSymPos, str, &includeEnd);
l10:
  ;
}

void ParamOptions__OptionsSectionDesc_Write(ParamOptions__OptionsSection s) {
  register int i0, i1, i2;
  i0 = (int)s + 16;
  i1 = (int)*(void**)i0;
  i0 = i1 == 0;
  if (i0) goto l1;
l0:
  Out__String((const unsigned char*)(int)_c18, 3);
  i0 = i1 + 4;
  i0 = (int)*(void**)i0;
  i2 = *(int*)(i0-8);
  Out__String((const unsigned char*)i0, i2);
  i0 = *(int*)(i1-4);
  Out__String((const unsigned char*)(int)_c19, 5);
  i0 = (int)((_Type)i0)->tbprocs[0];
  ((_TBP_ParamOptions__OptionDesc_Write)i0)((ParamOptions__Option)i1);
  Out__Ln();
  i1 = (int)*(void**)i1;
  i0 = i1 != 0;
  if (i0) goto l0;
l1:
  ;
}

void ParamOptions__Init(signed char undef) {
  register int i0, i1;
  i1 = (int)ParamOptions__options;
  i0 = i1 + 12;
  *(signed char*)i0 = undef;
  i0 = (int)ParamOptions__options;
  Parameter__AddSection((const unsigned char*)(int)_c20, 8, (Parameter__Section)i0);
}

void ParamOptions_init(void) {
  register int i0, i1;
  _mid = _register_module(&ParamOptions_md.md, &ParamOptions__StringOptionDesc_td.td);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(20)+8);
    if (!_mem) _new_failed(_P(14704));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ParamOptions__OptionsSectionDesc_td.td;
    i0 = (int)_var;
  }
  ParamOptions__options = (void*)i0;
  i0 = (int)ParamOptions__options;
  i1 = i0 + 16;
  *(void**)i1 = (void*)0;
}
