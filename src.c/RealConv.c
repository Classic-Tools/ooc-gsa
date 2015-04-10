/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "RealConv.d"

static _ModId _mid;

unsigned char RealConv__IsSign(unsigned char ch) {
  register int i0;
  i0 = (int)ch == 43;
  if (i0) goto l0;
  i0 = (int)ch == 45;
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = 1;
l1:
  return (unsigned char)i0;
}

void RealConv__RSState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 2;
  i0 = (int)RealConv__RS;
  *nextState = (void*)i0;
  goto l1;
l0:
  *chClass = 1;
  i0 = (int)RealConv__P;
  *nextState = (void*)i0;
l1:
  ;
}

void RealConv__PState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l2;
  i0 = (int)inputCh == 46;
  if (i0) goto l1;
  i0 = (int)inputCh == 69;
  if (i0) goto l0;
  *chClass = 3;
  *nextState = (void*)0;
  goto l3;
l0:
  *chClass = 1;
  i0 = (int)RealConv__E;
  *nextState = (void*)i0;
  goto l3;
l1:
  *chClass = 1;
  i0 = (int)RealConv__F;
  *nextState = (void*)i0;
  goto l3;
l2:
  *chClass = 1;
  i0 = (int)RealConv__P;
  *nextState = (void*)i0;
l3:
  ;
}

void RealConv__FState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l1;
  i0 = (int)inputCh == 69;
  if (i0) goto l0;
  *chClass = 3;
  *nextState = (void*)0;
  goto l2;
l0:
  *chClass = 1;
  i0 = (int)RealConv__E;
  *nextState = (void*)i0;
  goto l2;
l1:
  *chClass = 1;
  i0 = (int)RealConv__F;
  *nextState = (void*)i0;
l2:
  ;
}

void RealConv__EState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = RealConv__IsSign((unsigned char)(int)inputCh);
  if (i0) goto l1;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 2;
  i0 = (int)RealConv__E;
  *nextState = (void*)i0;
  goto l2;
l0:
  *chClass = 1;
  i0 = (int)RealConv__WE;
  *nextState = (void*)i0;
  goto l2;
l1:
  *chClass = 1;
  i0 = (int)RealConv__SE;
  *nextState = (void*)i0;
l2:
  ;
}

void RealConv__SEState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 2;
  i0 = (int)RealConv__SE;
  *nextState = (void*)i0;
  goto l1;
l0:
  *chClass = 1;
  i0 = (int)RealConv__WE;
  *nextState = (void*)i0;
l1:
  ;
}

void RealConv__WEState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 3;
  *nextState = (void*)0;
  goto l1;
l0:
  *chClass = 1;
  i0 = (int)RealConv__WE;
  *nextState = (void*)i0;
l1:
  ;
}

void RealConv__ScanReal(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsWhiteSpace((unsigned char)(int)inputCh);
  if (i0) goto l2;
  i0 = RealConv__IsSign((unsigned char)(int)inputCh);
  if (i0) goto l1;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 2;
  i0 = (int)RealConv__SR;
  *nextState = (void*)i0;
  goto l3;
l0:
  *chClass = 1;
  i0 = (int)RealConv__P;
  *nextState = (void*)i0;
  goto l3;
l1:
  *chClass = 1;
  i0 = (int)RealConv__RS;
  *nextState = (void*)i0;
  goto l3;
l2:
  *chClass = 0;
  i0 = (int)RealConv__SR;
  *nextState = (void*)i0;
l3:
  ;
}

signed char RealConv__FormatReal(const unsigned char* str__ref, int str_0d) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17;
  register float f0;
  register double d0, d1, d2;
  signed char class_;
  ConvTypes__ScanState state;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i15 = Strings__Length((const unsigned char*)(int)str, str_0d);
  i17 = (int)RealConv__SR;
  i16 = 0;
  i2 = 0;
  i4 = 1;
  i12 = 0;
  d1 = 0.0000000000000000;
  i1 = 0;
  i5 = 0;
  i6 = 0;
  i0 = 0;
l0:
  i14 = i15 == i6;
  if (i14) goto l17;
  i9 = (int)str + i6;
  i3 = *(unsigned char*)i9;
  i9 = (int)*(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i17;
  class_ = (signed char)i16;
  state = (void*)i17;
  class_ = (signed char)i16;
  state = (void*)i17;
  ((void(*)(unsigned char, signed char *, ConvTypes__ScanState *))i9)((unsigned char)i3, (signed char *)(int)&class_, (ConvTypes__ScanState *)(int)&state);
  if (!(class_==0)) goto l1;
  i3 = 0;
  i14 = i2;
  i13 = i4;
  i11 = i12;
  d0 = d1;
  i10 = i1;
  i9 = i5;
  goto l14;
l1:
  if (!(class_==1)) goto l13;
  if (i5) goto l7;
  i9 = _cap(i3);
  i9 = i9 == 69;
  if (i9) goto l5;
  i11 = i3 == 46;
  if (i11) goto l4;
  if (i12) goto l2;
  i10 = i1;
  goto l3;
l2:
  i10 = i1 - 1;
l3:
  i11 = i3 - 48;
  d2 = i11;
  d0 = d1 * 1.0000000000000000E+1;
  d0 = d2 + d0;
  i11 = i12;
  goto l6;
l4:
  i10 = i1;
  d0 = d1;
  i11 = 1;
  goto l6;
l5:
  i11 = i12;
  d0 = d1;
  i10 = i1;
l6:
  i13 = i4;
  i14 = i2;
  goto l12;
l7:
  i13 = RealConv__IsSign((unsigned char)i3);
  if (i13) goto l10;
  i13 = i3 - 48;
  if (i4) goto l8;
  i14 = i2 * 10;
  i14 -= i13;
  goto l9;
l8:
  i14 = i2 * 10;
  i14 = i13 + i14;
l9:
  i13 = i4;
  goto l11;
l10:
  i13 = i3 == 43;
  i14 = i2;
l11:
  i9 = 1;
  i10 = i1;
  d0 = d1;
  i11 = i12;
l12:
  i3 = 0;
  goto l14;
l13:
  if (!((class_>=2 && class_<=3))) goto l14;
  i3 = 1;
  i14 = i2;
  i13 = i4;
  i11 = i12;
  d0 = d1;
  i10 = i1;
  i9 = i5;
l14:
  if (i3) goto l15;
  i8 = i6 + 1;
  i7 = class_;
  goto l16;
l15:
  i8 = i6;
  i7 = i0;
l16:
  i0 = i7;
  i6 = i8;
  i5 = i9;
  i1 = i10;
  d1 = d0;
  i12 = i11;
  i4 = i13;
  i2 = i14;
  i17 = (int)state;
  i16 = class_;
  goto l18;
l17:
  i3 = 1;
l18:
  if (!(i3)) goto l0;
  i3 = (0xCU & ((unsigned int)1 << i16)) != 0;
  if (i3) goto l36;
  i5 = i0 == 0;
  if (i5) goto l35;
  i4 = i2 + i1;
  i6 = d1 != 0.0000000000000000;
  if (i6) goto l19;
  i5 = 0;
  goto l33;
l19:
  i3 = i4 > 0;
  if (i3) goto l20;
  d0 = d1;
  i5 = 0;
  i6 = i4;
  goto l26;
l20:
  i6 = i4;
  d0 = d1;
l21:
  i3 = d0 > -3.4028235677973366E+38;
  if (!(i3)) goto l22;
  i3 = d0 >= 3.4028235677973366E+38;
  if (i3) goto l23;
  f0 = d0;
  i3 = f0 > 3.40282347E+37F;
  if (i3) goto l23;
l22:
  d2 = d0 * 1.0000000000000000E+1;
  d0 = d2;
  i5 = 0;
  goto l24;
l23:
  i5 = 1;
l24:
  if (i5) goto l25;
  i3 = i6 - 1;
  i6 = i3;
l25:
  if (i5) goto l26;
  i3 = i6 > 0;
  if (i3) goto l21;
l26:
  if (i5) goto l32;
  i3 = i6 < 0;
  if (i3) goto l27;
  i5 = 0;
  goto l33;
l27:
  i3 = d0 < 3.4028235677973366E+38;
  if (!(i3)) goto l28;
  i3 = d0 <= -3.4028235677973366E+38;
  if (i3) goto l29;
  f0 = d0;
  i3 = f0 < 1.17549435E-37F;
  if (i3) goto l29;
l28:
  d2 = d0 / 1.0000000000000000E+1;
  d0 = d2;
  i5 = 0;
  goto l30;
l29:
  i5 = 1;
l30:
  if (i5) goto l31;
  i3 = i6 + 1;
  i6 = i3;
l31:
  if (i5) goto l33;
  i3 = i6 < 0;
  if (i3) goto l27;
  goto l33;
l32:
  i5 = 1;
l33:
  if (i5) goto l34;
  i6 = 0;
  goto l37;
l34:
  i6 = 1;
  goto l37;
l35:
  i6 = 3;
  goto l37;
l36:
  i6 = 2;
l37:
  _top_vs = _old_top_vs;
  return (signed char)i6;
}

float RealConv__ValueReal(const unsigned char* str__ref, int str_0d) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19;
  register float f0, f1;
  register double d0, d1, d2;
  signed char class_;
  ConvTypes__ScanState state;
  float x;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i17 = Strings__Length((const unsigned char*)(int)str, str_0d);
  i19 = (int)RealConv__SR;
  i18 = 0;
  i2 = 0;
  i5 = 1;
  i3 = 1;
  i1 = 0;
  d1 = 0.0000000000000000;
  i6 = 0;
  i12 = 0;
  i8 = 0;
  i0 = 0;
l0:
  i16 = i17 == i8;
  if (i16) goto l19;
  i11 = (int)str + i8;
  i7 = *(unsigned char*)i11;
  i11 = (int)*(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i19;
  class_ = (signed char)i18;
  state = (void*)i19;
  class_ = (signed char)i18;
  state = (void*)i19;
  ((void(*)(unsigned char, signed char *, ConvTypes__ScanState *))i11)((unsigned char)i7, (signed char *)(int)&class_, (ConvTypes__ScanState *)(int)&state);
  if (!(class_==0)) goto l1;
  i7 = 0;
  i16 = i2;
  i15 = i5;
  i14 = i3;
  i13 = i1;
  d0 = d1;
  i4 = i6;
  i11 = i12;
  goto l16;
l1:
  if (!(class_==1)) goto l15;
  if (i12) goto l9;
  i11 = _cap(i7);
  i11 = i11 == 69;
  if (i11) goto l7;
  i13 = RealConv__IsSign((unsigned char)i7);
  if (i13) goto l6;
  i4 = i7 == 46;
  if (i4) goto l4;
  if (i6) goto l2;
  i13 = i1;
  goto l3;
l2:
  i13 = i1 - 1;
l3:
  i4 = i7 - 48;
  d2 = i4;
  d0 = d1 * 1.0000000000000000E+1;
  d0 = d2 + d0;
  i4 = i6;
  goto l5;
l4:
  i13 = i1;
  d0 = d1;
  i4 = 1;
l5:
  i14 = i3;
  goto l8;
l6:
  i14 = i7 == 43;
  i4 = i6;
  d0 = d1;
  i13 = i1;
  goto l8;
l7:
  i14 = i3;
  i13 = i1;
  d0 = d1;
  i4 = i6;
l8:
  i15 = i5;
  i16 = i2;
  goto l14;
l9:
  i15 = RealConv__IsSign((unsigned char)i7);
  if (i15) goto l12;
  i15 = i7 - 48;
  if (i5) goto l10;
  i16 = i2 * 10;
  i16 -= i15;
  goto l11;
l10:
  i16 = i2 * 10;
  i16 = i15 + i16;
l11:
  i15 = i5;
  goto l13;
l12:
  i15 = i7 == 43;
  i16 = i2;
l13:
  i11 = 1;
  i4 = i6;
  d0 = d1;
  i13 = i1;
  i14 = i3;
l14:
  i7 = 0;
  goto l16;
l15:
  if (!((class_>=2 && class_<=3))) goto l16;
  i7 = 1;
  i16 = i2;
  i15 = i5;
  i14 = i3;
  i13 = i1;
  d0 = d1;
  i4 = i6;
  i11 = i12;
l16:
  if (i7) goto l17;
  i10 = i8 + 1;
  i9 = class_;
  goto l18;
l17:
  i10 = i8;
  i9 = i0;
l18:
  i0 = i9;
  i8 = i10;
  i12 = i11;
  i6 = i4;
  d1 = d0;
  i1 = i13;
  i3 = i14;
  i5 = i15;
  i2 = i16;
  i19 = (int)state;
  i18 = class_;
  goto l20;
l19:
  i7 = 1;
l20:
  if (!(i7)) goto l0;
  i4 = (0xCU & ((unsigned int)1 << i18)) != 0;
  if (i4) goto l29;
  i7 = i0 == 0;
  if (i7) goto l28;
  i5 = i2 + i1;
  i4 = d1 != 0.0000000000000000;
  if (i4) goto l21;
  d2 = 0.0000000000000000;
  goto l27;
l21:
  i6 = i5 > 0;
  if (i6) goto l22;
  d0 = d1;
  i4 = i5;
  goto l24;
l22:
  i4 = i5;
  d0 = d1;
l23:
  i4--;
  d0 *= 1.0000000000000000E+1;
  i6 = i4 > 0;
  if (i6) goto l23;
l24:
  i6 = i4 < 0;
  if (i6) goto l25;
  d2 = d0;
  goto l27;
l25:
  d2 = d0;
l26:
  i4++;
  d2 /= 1.0000000000000000E+1;
  i6 = i4 < 0;
  if (i6) goto l26;
l27:
  f0 = d2;
  goto l30;
l28:
  goto l30;
l29:
  i7 = 1;
l30:
  if (i7) goto l32;
  if (i3) goto l31;
  f1 = - f0;
  goto l33;
l31:
  f1 = f0;
  goto l33;
l32:
  f1 = 0.00000000F;
l33:
  _top_vs = _old_top_vs;
  return (float)f1;
}

short int RealConv__LengthFloatReal(float real, short int sigFigs) {
  register int i0, i1, i2;
  register float f0;
  i0 = LowReal__IsNaN((float)real);
  if (i0) goto l2;
  i0 = LowReal__IsInfinity((float)real);
  if (i0) goto l0;
  goto l3;
l0:
  i1 = real < 0.00000000F;
  if (i1) goto l1;
  i1 = 8;
  goto l3;
l1:
  i1 = 9;
  goto l3;
l2:
  i1 = 3;
  i0 = 1;
l3:
  if (i0) goto l12;
  i0 = sigFigs == 0;
  if (i0) goto l4;
  i0 = sigFigs;
  goto l5;
l4:
  i0 = 7;
l5:
  i2 = real < 0.00000000F;
  if (i2) goto l6;
  f0 = real;
  i2 = i0;
  goto l7;
l6:
  i2 = i0 + 1;
  f0 = - real;
l7:
  i0 = i0 > 1;
  if (i0) goto l8;
  i0 = i2;
  goto l9;
l8:
  i0 = i2 + 1;
l9:
  i2 = LowReal__exponent10((float)f0);
  i1 = i2 > 10;
  if (i1) goto l11;
  i2 = i2 != 0;
  if (i2) goto l10;
  i1 = i0;
  goto l12;
l10:
  i1 = i0 + 3;
  goto l12;
l11:
  i1 = i0 + 4;
l12:
  return (short int)i1;
}

short int RealConv__LengthEngReal(float real, short int sigFigs) {
  register int i0, i1, i2, i3, i4;
  register float f0;
  i0 = LowReal__IsNaN((float)real);
  if (i0) goto l2;
  i0 = LowReal__IsInfinity((float)real);
  if (i0) goto l0;
  goto l3;
l0:
  i3 = real < 0.00000000F;
  if (i3) goto l1;
  i3 = 8;
  goto l3;
l1:
  i3 = 9;
  goto l3;
l2:
  i3 = 3;
  i0 = 1;
l3:
  if (i0) goto l14;
  i2 = sigFigs == 0;
  if (i2) goto l4;
  i2 = sigFigs;
  goto l5;
l4:
  i2 = 7;
l5:
  i3 = real < 0.00000000F;
  if (i3) goto l6;
  f0 = real;
  i1 = i2;
  goto l7;
l6:
  i1 = i2 + 1;
  f0 = - real;
l7:
  i0 = LowReal__exponent10((float)f0);
  _mod(i3, i0, 3, short int);
  i4 = i0 - i3;
  i0 = i4 > 10;
  if (i0) goto l9;
  i4 = i4 != 0;
  if (i4) goto l8;
  i0 = i1;
  goto l10;
l8:
  i0 = i1 + 3;
  goto l10;
l9:
  i0 = i1 + 4;
l10:
  i3++;
  i1 = i2 > i3;
  if (i1) goto l11;
  i1 = i0;
  goto l12;
l11:
  i1 = i0 + 1;
l12:
  i2 = i3 - i2;
  i3 = i2 > 0;
  if (i3) goto l13;
  i3 = i1;
  goto l14;
l13:
  i3 = i1 + i2;
l14:
  return (short int)i3;
}

short int RealConv__LengthFixedReal(float real, short int place) {
  register int i0, i1, i2, i3;
  i0 = LowReal__IsNaN((float)real);
  if (i0) goto l2;
  i0 = LowReal__IsInfinity((float)real);
  if (i0) goto l0;
  goto l3;
l0:
  i2 = real < 0.00000000F;
  if (i2) goto l1;
  i2 = 8;
  goto l3;
l1:
  i2 = 9;
  goto l3;
l2:
  i2 = 3;
  i0 = 1;
l3:
  if (i0) goto l13;
  i1 = place < 0;
  if (i1) goto l4;
  i1 = place + 1;
  goto l5;
l4:
  i1 = place + 2;
l5:
  i2 = LowReal__exponent10((float)real);
  i3 = i2 < 0;
  if (i3) goto l7;
  i2 += i1;
  i0 = 1 - i1;
  i3 = i0 > 0;
  if (i3) goto l6;
  i3 = i2;
  goto l9;
l6:
  i3 = i2 + i0;
  goto l9;
l7:
  i3 = i1 <= 0;
  if (i3) goto l8;
  i3 = i1;
  goto l9;
l8:
  i3 = 1;
l9:
  i1 = real < 0.00000000F;
  if (i1) goto l10;
  i1 = i3;
  goto l11;
l10:
  i1 = i3 + 1;
l11:
  i2 = place >= 0;
  if (i2) goto l12;
  i2 = i1;
  goto l13;
l12:
  i2 = i1 + 1;
l13:
  return (short int)i2;
}

unsigned char RealConv__IsRConvException(void) {
  return (unsigned char)0;
}

void RealConv__Test(void) {
  register int i0;
  register float f0;
  f0 = RealConv__ValueReal((const unsigned char*)(int)_c0, 15);
  i0 = RealConv__LengthFixedReal((float)1.00000000E+2F, (short int)0);
  i0 = RealConv__LengthEngReal((float)1.00000000E+2F, (short int)0);
  i0 = RealConv__LengthFloatReal((float)1.00000000E+2F, (short int)0);
  i0 = RealConv__LengthFixedReal((float)-1.00123001E+2F, (short int)0);
  i0 = RealConv__LengthEngReal((float)-1.00123001E+2F, (short int)0);
  i0 = RealConv__LengthFloatReal((float)-1.00123001E+2F, (short int)0);
  i0 = RealConv__LengthFixedReal((float)-1.00000002E+20F, (short int)0);
  i0 = RealConv__LengthEngReal((float)-1.00000002E+20F, (short int)0);
  i0 = RealConv__LengthFloatReal((float)-1.00000002E+20F, (short int)0);
}

void RealConv_init(void) {
  register int i0;
  _mid = _register_module(&RealConv_md.md, NULL);
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13316));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__RS = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13325));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__P = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13333));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__F = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13341));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__E = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13349));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__SE = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13358));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__WE = (void*)i0;
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(_not_zero(4)+8);
    if (!_mem) _new_failed(_P(13367));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  RealConv__SR = (void*)i0;
  i0 = (int)RealConv__RS;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__RSState;
  i0 = (int)RealConv__P;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__PState;
  i0 = (int)RealConv__F;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__FState;
  i0 = (int)RealConv__E;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__EState;
  i0 = (int)RealConv__SE;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__SEState;
  i0 = (int)RealConv__WE;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__WEState;
  i0 = (int)RealConv__SR;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&RealConv__ScanReal;
}
