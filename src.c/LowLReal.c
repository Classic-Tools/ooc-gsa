/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "LowLReal.d"

static _ModId _mid;

short int LowLReal__err(void) {
  register int i0;
  i0 = LowReal__err;
  return (short int)i0;
}

void LowLReal__ClearError(void) {
  LowReal__ClearError();
}

void LowLReal__ErrorHandler(short int err) {
  register int i0;
  i0 = (int)LowReal__ErrorHandler;
  ((void(*)(short int))i0)((short int)err);
}

void LowLReal__Move(double *x, int* ra, int ra_0d) {
  register int i0, i1, i2;
  int t;
  (void)memcpy((void*) (int)ra, (const void*) (int)x, 8);
  i0 = LowLReal__isBigEndian;
  if (i0) goto l0;
  i1 = (int)ra + 4;
  i0 = *(int*)i1;
  i2 = *(int*)(int)ra;
  *(int*)(int)ra = i0;
  *(int*)i1 = i2;
l0:
  ;
}

void LowLReal__MoveSet(double *x, unsigned int* ra, int ra_0d) {
  register int i0, i1, i2;
  unsigned int t;
  (void)memcpy((void*) (int)ra, (const void*) (int)x, 8);
  i0 = LowLReal__isBigEndian;
  if (i0) goto l0;
  i1 = (int)ra + 4;
  i0 = *(unsigned int*)i1;
  i2 = *(unsigned int*)(int)ra;
  *(unsigned int*)(int)ra = i0;
  *(unsigned int*)i1 = i2;
l0:
  ;
}

double LowLReal__Real(const int* ra__ref, int ra_0d) {
  register int i0, i1, i2;
  int t;
  double x;
  int* ra;
  char* _old_top_vs = _top_vs;
  _push_value(int, ra, ra__ref, ra_0d*4);
  i0 = LowLReal__isBigEndian;
  if (i0) goto l0;
  i1 = (int)ra + 4;
  i2 = *(int*)(int)ra;
  i0 = *(int*)i1;
  *(int*)(int)ra = i0;
  *(int*)i1 = i2;
  goto l1;
l0:
l1:
  t = (int)i2;
  (void)memcpy((void*) (int)&x, (const void*) (int)ra, 8);
  _top_vs = _old_top_vs;
  return (double)x;
}

double LowLReal__ToReal(const unsigned int* ra__ref, int ra_0d) {
  register int i0, i1, i2;
  unsigned int t;
  double x;
  unsigned int* ra;
  char* _old_top_vs = _top_vs;
  _push_value(int, ra, ra__ref, ra_0d*4);
  i0 = LowLReal__isBigEndian;
  if (i0) goto l0;
  i1 = (int)ra + 4;
  i2 = *(unsigned int*)(int)ra;
  i0 = *(unsigned int*)i1;
  *(unsigned int*)(int)ra = i0;
  *(unsigned int*)i1 = i2;
  goto l1;
l0:
l1:
  t = (unsigned int)i2;
  (void)memcpy((void*) (int)&x, (const void*) (int)ra, 8);
  _top_vs = _old_top_vs;
  return (double)x;
}

short int LowLReal__exponent(double x) {
  register int i0;
  LowLReal__LongInt ra;
  i0 = x == 0.0000000000000000;
  if (i0) goto l0;
  LowLReal__Move((double *)(int)&x, (int*)(int)ra, 2);
  i0 = *(int*)(int)ra;
  i0 = (int)_lshr(i0, 20, (unsigned int));
  i0 &= 0x7FFU;
  i0 -= 1023;
  goto l1;
l0:
  i0 = 0;
l1:
  return (short int)i0;
}

short int LowLReal__exponent10(double x) {
  register int i0, i1, i2;
  register double d0, d1;
  i0 = x == 0.0000000000000000;
  if (i0) goto l5;
  d1 = _abs(x);
  i1 = d1 >= 1.0000000000000000E+1;
  if (i1) goto l0;
  d0 = d1;
  i1 = 0;
  goto l2;
l0:
  i1 = 0;
  d0 = d1;
l1:
  d0 /= 1.0000000000000000E+1;
  i1++;
  i0 = d0 >= 1.0000000000000000E+1;
  if (i0) goto l1;
l2:
  i0 = d0 < 1.0000000000000000;
  if (i0) goto l3;
  i2 = i1;
  goto l6;
l3:
  i2 = i1;
l4:
  d0 *= 1.0000000000000000E+1;
  i2--;
  i0 = d0 < 1.0000000000000000;
  if (i0) goto l4;
  goto l6;
l5:
  i2 = 0;
l6:
  return (short int)i2;
}

double LowLReal__fraction(double x) {
  register int i0;
  register double d0;
  LowLReal__LongInt ra;
  i0 = x == 0.0000000000000000;
  if (i0) goto l0;
  LowLReal__Move((double *)(int)&x, (int*)(int)ra, 2);
  i0 = *(int*)(int)ra;
  i0 &= 0x800FFFFFU;
  i0 |= 0x3FE00000U;
  *(int*)(int)ra = i0;
  d0 = LowLReal__Real((const int*)(int)ra, 2);
  d0 *= 2.0000000000000000;
  goto l1;
l0:
  d0 = 0.0000000000000000;
l1:
  return (double)d0;
}

unsigned char LowLReal__IsInfinity(double real) {
  register int i0;
  LowLReal__LongSet ra;
  LowLReal__MoveSet((double *)(int)&real, (unsigned int*)(int)ra, 2);
  i0 = *(unsigned int*)(int)ra;
  i0 &= 0x7FFFFFFFU;
  i0 = i0 != 0x7FF00000U;
  if (i0) goto l0;
  i0 = (int)ra + 4;
  i0 = *(unsigned int*)i0;
  i0 = i0 == 0x0U;
  if (i0) goto l1;
l0:
  i0 = 0;
  goto l2;
l1:
  i0 = 1;
l2:
  return (unsigned char)i0;
}

unsigned char LowLReal__IsNaN(double real) {
  register int i0, i1;
  LowLReal__LongSet ra;
  LowLReal__MoveSet((double *)(int)&real, (unsigned int*)(int)ra, 2);
  i0 = *(unsigned int*)(int)ra;
  i1 = i0 & 0x7FF00000U;
  i1 = i1 != 0x7FF00000U;
  if (i1) goto l0;
  i1 = (int)ra + 4;
  i1 = *(unsigned int*)i1;
  i1 = i1 != 0x0U;
  if (i1) goto l1;
  i0 &= 0xFFFFFU;
  i0 = i0 != 0x0U;
  if (i0) goto l1;
l0:
  i0 = 0;
  goto l2;
l1:
  i0 = 1;
l2:
  return (unsigned char)i0;
}

double LowLReal__sign(double x) {
  register int i0;
  register double d0;
  i0 = x < 0.0000000000000000;
  if (i0) goto l0;
  d0 = 1.0000000000000000;
  goto l1;
l0:
  d0 = -1.0000000000000000;
l1:
  return (double)d0;
}

double LowLReal__scale(double x, short int n) {
  register int i0, i1;
  register double d0;
  LowLReal__LongInt ra;
  i0 = x == 0.0000000000000000;
  if (i0) goto l3;
  i0 = LowLReal__exponent((double)x);
  i0 = n + i0;
  i1 = i0 > 1023;
  if (i1) goto l1;
  i1 = i0 < -1022;
  if (i1) goto l0;
  goto l2;
l0:
  d0 = LowLReal__sign((double)x);
  d0 *= 2.2250738585072014E-308;
  goto l2;
l1:
  d0 = LowLReal__sign((double)x);
  d0 *= 1.7976931348623157E+308;
  i1 = 1;
l2:
  if (i1) goto l4;
  LowLReal__Move((double *)(int)&x, (int*)(int)ra, 2);
  i0 += 1023;
  i1 = *(int*)(int)ra;
  i0 = (int)_lshl(i0, 20, (unsigned int));
  i1 &= 0x800FFFFFU;
  i0 |= i1;
  *(int*)(int)ra = i0;
  d0 = LowLReal__Real((const int*)(int)ra, 2);
  goto l4;
l3:
  d0 = 0.0000000000000000;
l4:
  return (double)d0;
}

double LowLReal__ulp(double x) {
  register int i0;
  register double d0;
  i0 = LowLReal__exponent((double)x);
  i0 -= 53;
  i0++;
  d0 = LowLReal__scale((double)1.0000000000000000, (short int)i0);
  return (double)d0;
}

double LowLReal__succ(double x) {
  register double d0, d1;
  d0 = LowLReal__sign((double)x);
  d1 = LowLReal__ulp((double)x);
  d0 = d1 * d0;
  d0 = x + d0;
  return (double)d0;
}

double LowLReal__pred(double x) {
  register double d0, d1;
  d0 = LowLReal__sign((double)x);
  d1 = LowLReal__ulp((double)x);
  d0 = d1 * d0;
  d0 = x - d0;
  return (double)d0;
}

double LowLReal__MaskReal(double x, short int lo) {
  register int i0, i1, i2;
  register double d0;
  LowLReal__LongSet ra;
  LowLReal__MoveSet((double *)(int)&x, (unsigned int*)(int)ra, 2);
  i0 = lo < 32;
  if (i0) goto l0;
  i1 = *(unsigned int*)(int)ra;
  i0 = lo - 32;
  i0 = _bit_range((unsigned int), i0, 31);
  i1 &= i0;
  *(unsigned int*)(int)ra = i1;
  i1 = (int)ra + 4;
  *(unsigned int*)i1 = 0x0U;
  goto l1;
l0:
  i2 = (int)ra + 4;
  i1 = *(unsigned int*)i2;
  i0 = _bit_range((unsigned int), lo, 31);
  i1 &= i0;
  *(unsigned int*)i2 = i1;
l1:
  d0 = LowLReal__ToReal((const unsigned int*)(int)ra, 2);
  return (double)d0;
}

double LowLReal__intpart(double x) {
  register int i0, i1;
  register double d0;
  i0 = LowLReal__exponent((double)x);
  i0 = 52 - i0;
  i1 = i0 <= 0;
  if (i1) goto l1;
  i1 = i0 <= 52;
  if (i1) goto l0;
  d0 = 0.0000000000000000;
  goto l2;
l0:
  d0 = LowLReal__MaskReal((double)x, (short int)i0);
  goto l2;
l1:
  d0 = x;
l2:
  return (double)d0;
}

double LowLReal__fractpart(double x) {
  register double d0;
  d0 = LowLReal__intpart((double)x);
  d0 = x - d0;
  return (double)d0;
}

double LowLReal__trunc(double x, short int n) {
  register int i0, i1;
  register double d0;
  i1 = n <= 0;
  i0 = 53 - n;
  if (i1) goto l1;
  i1 = i0 <= 0;
  if (i1) goto l0;
  d0 = LowLReal__MaskReal((double)x, (short int)i0);
  goto l2;
l0:
  d0 = x;
  goto l2;
l1:
  d0 = 0.0000000000000000;
l2:
  return (double)d0;
}

unsigned char LowLReal__In(short int bit, double x) {
  register int i0, i1;
  LowLReal__LongSet ra;
  LowLReal__MoveSet((double *)(int)&x, (unsigned int*)(int)ra, 2);
  i0 = bit < 32;
  if (i0) goto l0;
  i0 = *(unsigned int*)(int)ra;
  i1 = bit - 32;
  i1 = (i0 & ((unsigned int)1 << i1)) != 0;
  goto l1;
l0:
  i1 = (int)ra + 4;
  i1 = *(unsigned int*)i1;
  i1 = (i1 & ((unsigned int)1 << bit)) != 0;
l1:
  return (unsigned char)i1;
}

double LowLReal__round(double x, short int n) {
  register int i0, i1;
  register double d0, d1, d2;
  i0 = 53 - n;
  i1 = n <= 0;
  if (i1) goto l3;
  i1 = i0 <= 0;
  if (i1) goto l2;
  d1 = LowLReal__MaskReal((double)x, (short int)i0);
  i0--;
  i0 = LowLReal__In((short int)i0, (double)x);
  if (i0) goto l0;
  d2 = d1;
  goto l4;
l0:
  i0 = LowLReal__exponent((double)x);
  i0 -= n;
  i0++;
  d0 = LowLReal__scale((double)1.0000000000000000, (short int)i0);
  i0 = LowLReal__In((short int)63, (double)x);
  if (i0) goto l1;
  d2 = d1 + d0;
  goto l4;
l1:
  d2 = d1 - d0;
  goto l4;
l2:
  d2 = x;
  goto l4;
l3:
  d2 = 0.0000000000000000;
l4:
  return (double)d2;
}

double LowLReal__synthesize(short int expart, double frapart) {
  register double d0;
  d0 = LowLReal__scale((double)frapart, (short int)expart);
  return (double)d0;
}

void LowLReal__setMode(unsigned int m) {
}

unsigned int LowLReal__currentMode(void) {
  return (unsigned int)0x0U;
}

unsigned char LowLReal__IsLowException(void) {
  return (unsigned char)0;
}

void LowLReal__InitEndian(void) {
  register int i0;
  unsigned char c;
  short int endianTest;
  endianTest = (short int)1;
  i0 = *(unsigned char*)(int)&endianTest;
  i0 = i0 != 1;
  LowLReal__isBigEndian = i0;
}

void LowLReal__Test(void) {
  register int i0;
  register double d0;
  i0 = LowLReal__exponent((double)1.2340000000000000E+39);
  i0 = LowLReal__exponent((double)-1.2334300000000000E-20);
  d0 = LowLReal__fraction((double)1.2340000000000000E+39);
  d0 = LowLReal__fraction((double)-1.2334300000000000E-20);
  d0 = LowLReal__scale((double)1.0000000000000000, (short int)-8);
  d0 = LowLReal__scale((double)1.0000000000000000, (short int)8);
  d0 = LowLReal__succ((double)1.0000000000000000E+1);
  d0 = LowLReal__intpart((double)1.2345600128173828E+2);
  d0 = LowLReal__trunc((double)1.2345600128173828E+2, (short int)5);
  d0 = LowLReal__trunc((double)1.2345600128173828E+2, (short int)7);
  d0 = LowLReal__trunc((double)1.2345600128173828E+2, (short int)12);
  d0 = LowLReal__round((double)1.2345600128173828E+2, (short int)5);
  d0 = LowLReal__round((double)1.2345600128173828E+2, (short int)7);
  d0 = LowLReal__round((double)1.2345600128173828E+2, (short int)12);
}

void LowLReal_init(void) {
  _mid = _register_module(&LowLReal_md.md, NULL);
  LowLReal__InitEndian();
  LowLReal__Test();
}
