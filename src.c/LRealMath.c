/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "LRealMath.d"

static _ModId _mid;

double LRealMath__SinCos(double x, double y, double sign) {
  register int i0, i1;
  register double d0, d1, d2, d3, d4;
  i0 = y >= 2.1082871400000000E+8;
  if (!(i0)) goto l0;
  LowLReal__ErrorHandler((short int)10);
l0:
  if (i0) goto l7;
  d3 = y * 3.1830988618379069E-1;
  d2 = _abs(x);
  d3 += 5.0000000000000000E-1;
  _entier(i1, d3);
  i0 = y != d2;
  d3 = i1;
  i1 = _odd(i1);
  if (i0) goto l1;
  d1 = d3;
  goto l2;
l1:
  d1 = d3 - 5.0000000000000000E-1;
l2:
  if (i1) goto l3;
  d3 = sign;
  goto l4;
l3:
  d3 = - sign;
l4:
  _entier(i0, d2);
  d4 = i0;
  d0 = d2 - d4;
  d2 = d1 * 3.1416015625000000;
  d2 = d4 - d2;
  d2 += d0;
  d1 *= -8.9089102067615380E-6;
  d2 -= d1;
  d1 = _abs(d2);
  i0 = d1 < 1.0536712000000000E-8;
  if (i0) goto l5;
  goto l6;
l5:
  d4 = d3 * d2;
l6:
  if (i0) goto l8;
  d4 = d2 * d2;
  d1 = d4 * 2.7204790957888847E-15;
  d1 += -7.6429178068910469E-13;
  d1 *= d4;
  d1 += 1.6058936490371589E-10;
  d1 *= d4;
  d1 += -2.5052106798274583E-8;
  d1 *= d4;
  d1 += 2.7557319210152756E-6;
  d1 *= d4;
  d1 += -1.9841269841201840E-4;
  d1 *= d4;
  d1 += 8.3333333333331649E-3;
  d1 *= d4;
  d1 += -1.6666666666666666E-1;
  d4 = d1 * d4;
  d4 = d2 * d4;
  d4 = d2 + d4;
  d4 = d3 * d4;
  goto l8;
l7:
  d4 = 0.0000000000000000;
l8:
  return (double)d4;
}

int LRealMath__div(int x, int y) {
  register int i0;
  i0 = x < 0;
  if (i0) goto l0;
  _div(i0, x, y, int);
  goto l1;
l0:
  i0 = _abs(x);
  _div(i0, i0, y, int);
  i0 = - i0;
l1:
  return (int)i0;
}

double LRealMath__sqrt(double x) {
  register int i0, i1;
  register double d0, d1, d2, d3;
  i0 = x == 0.0000000000000000;
  if (i0) goto l4;
  i0 = x < 0.0000000000000000;
  if (i0) goto l0;
  d3 = x;
  goto l1;
l0:
  d3 = - x;
  LowLReal__ErrorHandler((short int)1);
l1:
  d2 = LowLReal__fraction((double)d3);
  d2 *= 5.0000000000000000E-1;
  d1 = d2 * 5.9016001224517822E-1;
  d0 = d1 + 4.1730999946594238E-1;
  d1 = d2 / d0;
  d0 += d1;
  d1 = d2 / d0;
  d0 *= 2.5000000000000000E-1;
  d1 = d0 + d1;
  d2 /= d1;
  d2 = d1 + d2;
  i0 = LowLReal__exponent((double)d3);
  i0++;
  d3 = d2 * 5.0000000000000000E-1;
  i1 = _odd(i0);
  if (i1) goto l2;
  i1 = i0;
  d2 = d3;
  goto l3;
l2:
  d2 = d3 * 7.0710678118654757E-1;
  i1 = i0 + 1;
l3:
  i0 = (short int)_ashr(i1, 1, (unsigned short int));
  d3 = LowLReal__scale((double)d2, (short int)i0);
  goto l5;
l4:
  d3 = 0.0000000000000000;
l5:
  return (double)d3;
}

double LRealMath__exp(double x) {
  register int i0;
  register double d0, d1, d2, d3;
  d0 = LRealMath__LnInfinity;
  i0 = x > d0;
  if (i0) goto l2;
  d3 = LRealMath__LnSmall;
  i0 = x < d3;
  if (i0) goto l1;
  d3 = _abs(x);
  i0 = d3 < 5.5511150999999999E-17;
  if (i0) goto l0;
  goto l3;
l0:
  d3 = 1.0000000000000000;
  goto l3;
l1:
  d3 = 0.0000000000000000;
  i0 = 1;
  goto l3;
l2:
  LowLReal__ErrorHandler((short int)3);
  d3 = 1.7976931348623157E+308;
  i0 = 1;
l3:
  if (i0) goto l6;
  i0 = x >= 0.0000000000000000;
  if (i0) goto l4;
  d3 = x * 1.4426950408889634;
  d3 -= 5.0000000000000000E-1;
  _entier(i0, d3);
  goto l5;
l4:
  d3 = x * 1.4426950408889634;
  d3 += 5.0000000000000000E-1;
  _entier(i0, d3);
l5:
  d2 = i0;
  d3 = d2 * 6.9335937500000000E-1;
  d2 *= -2.1219444005469057E-4;
  d3 = x - d3;
  d3 -= d2;
  d2 = d3 * d3;
  d0 = d2 * 1.6520330026827912E-5;
  d1 = d2 * 4.9586288490544126E-4;
  d0 += 6.9436000151179289E-3;
  d0 *= d2;
  d1 += 5.5553866696900121E-2;
  d2 = d1 * d2;
  d1 = d0 + 2.5000000000000000E-1;
  d3 = d1 * d3;
  d2 += 5.0000000000000000E-1;
  d2 -= d3;
  d3 /= d2;
  d3 += 5.0000000000000000E-1;
  i0++;
  d3 = LowLReal__scale((double)d3, (short int)i0);
l6:
  return (double)d3;
}

double LRealMath__ln(double x) {
  register int i0, i1;
  register double d0, d1, d2, d3;
  i0 = x <= 0.0000000000000000;
  if (!(i0)) goto l0;
  LowLReal__ErrorHandler((short int)2);
l0:
  if (i0) goto l3;
  d3 = LowLReal__fraction((double)x);
  d3 *= 5.0000000000000000E-1;
  i0 = d3 > 7.0710678118654757E-1;
  i1 = LowLReal__exponent((double)x);
  i1++;
  if (i0) goto l1;
  d2 = d3 - 5.0000000000000000E-1;
  i0 = i1 - 1;
  d1 = d2 * 5.0000000000000000E-1;
  d1 += 5.0000000000000000E-1;
  i1 = i0;
  goto l2;
l1:
  d2 = d3 - 5.0000000000000000E-1;
  d3 *= 5.0000000000000000E-1;
  d2 -= 5.0000000000000000E-1;
  d1 = d3 + 5.0000000000000000E-1;
l2:
  d3 = d2 / d1;
  d2 = d3 * d3;
  d0 = d2 * -7.8956112887491259E-1;
  d1 = d2 + -3.5667977739034647E+1;
  d1 *= d2;
  d0 += 1.6383943563021536E+1;
  d0 *= d2;
  d1 += 3.1203222091924533E+2;
  d1 *= d2;
  d0 += -6.4124943423745577E+1;
  d2 = d0 * d2;
  d1 += -7.6949932108494875E+2;
  d2 /= d1;
  d1 = d3 * d2;
  d2 = i1;
  d3 = d1 + d3;
  d1 = d2 * -2.1219444005469057E-4;
  d3 += d1;
  d2 *= 6.9335937500000000E-1;
  d3 += d2;
  goto l4;
l3:
  d3 = -1.7976931348623157E+308;
l4:
  return (double)d3;
}

double LRealMath__sin(double x) {
  register int i0;
  register double d0;
  i0 = x < 0.0000000000000000;
  if (i0) goto l0;
  d0 = LRealMath__SinCos((double)x, (double)x, (double)1.0000000000000000);
  goto l1;
l0:
  d0 = - x;
  d0 = LRealMath__SinCos((double)x, (double)d0, (double)-1.0000000000000000);
l1:
  return (double)d0;
}

double LRealMath__cos(double x) {
  register double d0;
  d0 = _abs(x);
  d0 += 1.5707963267948966;
  d0 = LRealMath__SinCos((double)x, (double)d0, (double)1.0000000000000000);
  return (double)d0;
}

double LRealMath__tan(double x) {
  register int i0;
  register double d0;
  double Cos;
  double Sin;
  LRealMath__sincos((double)x, (double *)(int)&Sin, (double *)(int)&Cos);
  d0 = _abs(Cos);
  i0 = d0 < 2.2250738585072014E-308;
  if (i0) goto l0;
  d0 = Sin / Cos;
  goto l1;
l0:
  LowLReal__ErrorHandler((short int)6);
  d0 = 1.7976931348623157E+308;
l1:
  return (double)d0;
}

double LRealMath__arcsin(double x) {
  register int i0;
  register double d0;
  d0 = _abs(x);
  i0 = d0 > 1.0000000000000000;
  if (i0) goto l0;
  d0 = x * x;
  d0 = 1.0000000000000000 - d0;
  d0 = LRealMath__sqrt((double)d0);
  d0 = LRealMath__arctan2((double)x, (double)d0);
  goto l1;
l0:
  LowLReal__ErrorHandler((short int)7);
  d0 = 1.7976931348623157E+308;
l1:
  return (double)d0;
}

double LRealMath__arccos(double x) {
  register int i0;
  register double d0;
  d0 = _abs(x);
  i0 = d0 > 1.0000000000000000;
  if (i0) goto l0;
  d0 = x * x;
  d0 = 1.0000000000000000 - d0;
  d0 = LRealMath__sqrt((double)d0);
  d0 = LRealMath__arctan2((double)d0, (double)x);
  goto l1;
l0:
  LowLReal__ErrorHandler((short int)7);
  d0 = 1.7976931348623157E+308;
l1:
  return (double)d0;
}

double LRealMath__arctan(double x) {
  register double d0;
  d0 = LRealMath__arctan2((double)x, (double)1.0000000000000000);
  return (double)d0;
}

double LRealMath__power(double base, double exponent) {
  register int i0, i1, i2, i3, i4, i5;
  register double d0, d1, d2, d3;
  d0 = _abs(exponent);
  i0 = d0 < 2.2250738585072014E-308;
  if (i0) goto l3;
  i0 = base < 0.0000000000000000;
  if (i0) goto l2;
  d3 = _abs(base);
  i1 = d3 < 2.2250738585072014E-308;
  if (i1) goto l0;
  goto l4;
l0:
  i0 = exponent > 0.0000000000000000;
  if (i0) goto l1;
  LowLReal__ErrorHandler((short int)3);
  d3 = -1.7976931348623157E+308;
  goto l4;
l1:
  d3 = 0.0000000000000000;
  goto l4;
l2:
  LowLReal__ErrorHandler((short int)4);
  d3 = -1.7976931348623157E+308;
  i1 = 1;
  goto l4;
l3:
  d3 = 1.0000000000000000;
  i1 = 1;
l4:
  if (i1) goto l16;
  d2 = LowLReal__fraction((double)base);
  d0 = d2 * 5.0000000000000000E-1;
  i4 = LowLReal__exponent((double)base);
  i3 = (int)LRealMath__a1 + 72;
  d2 = *(double*)i3;
  i3 = d2 >= d0;
  if (i3) goto l5;
  i3 = 1;
  goto l6;
l5:
  i3 = 9;
l6:
  i2 = i3 + 4;
  i1 = (int)_ashl(i2, 3, (unsigned int));
  i1 = (int)LRealMath__a1 + i1;
  d2 = *(double*)i1;
  i1 = d2 >= d0;
  if (i1) goto l7;
  i2 = i3;
l7:
  i3 = i2 + 2;
  i1 = (int)_ashl(i3, 3, (unsigned int));
  i1 = (int)LRealMath__a1 + i1;
  d2 = *(double*)i1;
  i1 = d2 >= d0;
  if (i1) goto l8;
  i3 = i2;
l8:
  i2 = i3 + 1;
  i1 = (short int)_ashr(i2, 1, (unsigned short int));
  i0 = (int)_ashl(i2, 3, (unsigned int));
  i5 = (int)_ashl(i1, 3, (unsigned int));
  i0 = (int)LRealMath__a1 + i0;
  d2 = *(double*)i0;
  i2 = (int)LRealMath__a2 + i5;
  d1 = d0 - d2;
  d3 = *(double*)i2;
  d2 += d0;
  d1 -= d3;
  d2 = d1 / d2;
  d2 += d2;
  d1 = d2 * d2;
  d3 = d1 * 4.3445775672163118E-4;
  d3 += 2.2321421285924261E-3;
  d3 *= d1;
  d3 += 1.2500000000503799E-2;
  d3 *= d1;
  d3 += 8.3333333333333218E-2;
  d1 = d3 * d1;
  d0 = d2 * d1;
  i4++;
  d1 = exponent * 1.6000000000000000E+1;
  d3 = d0 * 4.4269504088896339E-1;
  i2 = (short int)_ashl(i4, 4, (unsigned short int));
  _entier(i4, d1);
  d0 += d3;
  d3 = d2 * 4.4269504088896339E-1;
  i3 = i2 - i3;
  d1 = i4;
  d0 += d3;
  d1 *= 6.2500000000000000E-2;
  d3 = i3;
  d2 = d0 + d2;
  d3 *= 6.2500000000000000E-2;
  d0 = exponent - d1;
  d0 *= d3;
  d2 = exponent * d2;
  d2 += d0;
  d0 = d2 * 1.6000000000000000E+1;
  _entier(i4, d0);
  d3 *= d1;
  d1 = i4;
  d1 *= 6.2500000000000000E-2;
  d0 = d1 + d3;
  d3 = d0 * 1.6000000000000000E+1;
  _entier(i4, d3);
  d3 = i4;
  d3 *= 6.2500000000000000E-2;
  d2 -= d1;
  d1 = d0 - d3;
  d2 += d1;
  d1 = d2 * 1.6000000000000000E+1;
  _entier(i4, d1);
  d1 = i4;
  d1 *= 6.2500000000000000E-2;
  d3 = d1 + d3;
  d3 *= 1.6000000000000000E+1;
  _entier(i4, d3);
  i3 = i4 > 16367;
  if (i3) goto l10;
  i3 = i4 < -16351;
  if (i3) goto l9;
  goto l11;
l9:
  d3 = 0.0000000000000000;
  goto l11;
l10:
  LowLReal__ErrorHandler((short int)3);
  d3 = 1.7976931348623157E+308;
  i3 = 1;
l11:
  d2 -= d1;
  if (i3) goto l16;
  i2 = d2 > 0.0000000000000000;
  if (i2) goto l12;
  d3 = d2;
  i2 = i4;
  goto l13;
l12:
  i2 = i4 + 1;
  d3 = d2 - 6.2500000000000000E-2;
l13:
  i4 = i2 < 0;
  if (i4) goto l14;
  i3 = 1;
  goto l15;
l14:
  i3 = 0;
l15:
  d2 = d3 * 1.4928852680595609E-5;
  d2 += 1.5400290440989765E-4;
  d2 = d3 * d2;
  d2 += 1.3333541313585784E-3;
  d2 = d3 * d2;
  d2 += 9.6181290595172414E-3;
  i4 = LRealMath__div((int)i2, (int)16);
  i4 += i3;
  d2 = d3 * d2;
  i3 = (int)_ashl(i4, 4, (unsigned int));
  d2 += 5.5504108664085595E-2;
  i2 = i3 - i2;
  d2 = d3 * d2;
  i3 = i2 + 1;
  d2 += 2.4022650695909537E-1;
  i2 = (int)_ashl(i3, 3, (unsigned int));
  d1 = d3 * d2;
  i2 = (int)LRealMath__a1 + i2;
  d2 = *(double*)i2;
  d1 += 6.9314718055994529E-1;
  d3 *= d1;
  d3 = d2 * d3;
  d2 += d3;
  d3 = LowLReal__scale((double)d2, (short int)i4);
l16:
  return (double)d3;
}

int LRealMath__round(double x) {
  register int i0;
  register double d0;
  i0 = x < 0.0000000000000000;
  if (i0) goto l0;
  d0 = x + 5.0000000000000000E-1;
  _entier(i0, d0);
  goto l1;
l0:
  d0 = 5.0000000000000000E-1 - x;
  _entier(i0, d0);
  i0 = - i0;
l1:
  return (int)i0;
}

unsigned char LRealMath__IsRMathException(void) {
  return (unsigned char)0;
}

double LRealMath__log(double x, double base) {
  register int i0;
  register double d0, d1;
  i0 = base <= 0.0000000000000000;
  if (i0) goto l0;
  d0 = LRealMath__ln((double)x);
  d1 = LRealMath__ln((double)base);
  d1 = d0 / d1;
  goto l1;
l0:
  LowLReal__ErrorHandler((short int)5);
  d1 = -1.7976931348623157E+308;
l1:
  return (double)d1;
}

double LRealMath__ipower_Adjust(double xadj, double *LRealMath__ipower_x, short int *LRealMath__ipower_base) {
  register int i0;
  register double d0;
  d0 = *LRealMath__ipower_x;
  i0 = d0 >= 0.0000000000000000;
  if (i0) goto l0;
  i0 = *LRealMath__ipower_base;
  i0 = _odd(i0);
  if (i0) goto l1;
l0:
  d0 = xadj;
  goto l2;
l1:
  d0 = - xadj;
l2:
  return (double)d0;
}

double LRealMath__ipower(double x, short int base) {
  register int i0, i1, i2, i3;
  register double d0, d1, d2, d3;
  i0 = base == 0;
  if (i0) goto l2;
  d3 = _abs(x);
  i1 = d3 < 2.2250738585072014E-308;
  if (i1) goto l0;
  goto l3;
l0:
  i0 = base > 0;
  if (i0) goto l1;
  d3 = LRealMath__ipower_Adjust((double)1.7976931348623157E+308, &x, &base);
  LowLReal__ErrorHandler((short int)3);
  goto l3;
l1:
  d3 = 0.0000000000000000;
  goto l3;
l2:
  d3 = 1.0000000000000000;
  i1 = 1;
l3:
  if (i1) goto l15;
  i2 = LowLReal__exponent((double)x);
  i2++;
  i2 = base * i2;
  d2 = i2;
  d1 = LRealMath__LnInfinity;
  d1 *= 1.4426950408889634;
  i2 = d2 > d1;
  if (i2) goto l5;
  d1 = - d1;
  i2 = d2 < d1;
  if (i2) goto l4;
  goto l6;
l4:
  d3 = 0.0000000000000000;
  goto l6;
l5:
  d3 = LRealMath__ipower_Adjust((double)1.7976931348623157E+308, &x, &base);
  LowLReal__ErrorHandler((short int)3);
  i2 = 1;
l6:
  if (i2) goto l15;
  i3 = base < 0;
  if (i3) goto l7;
  i2 = base;
  goto l8;
l7:
  i2 = - base;
l8:
  d1 = x;
  d0 = 1.0000000000000000;
l9:
  i0 = (short int)_ashr(i2, 1, (unsigned short int));
  i1 = i0 == 0;
  i2 = _odd(i2);
  if (i1) goto l10;
  d3 = d1 * d1;
  goto l11;
l10:
  d3 = d1;
l11:
  if (!(i2)) goto l12;
  d2 = d0 * d1;
  d0 = d2;
l12:
  if (i1) goto l13;
  d1 = d3;
  i2 = i0;
  goto l9;
l13:
  if (i3) goto l14;
  d3 = d0;
  goto l15;
l14:
  d3 = 1.0000000000000000 / d0;
l15:
  return (double)d3;
}

void LRealMath__sincos(double x, double *Sin, double *Cos) {
  register double d0;
  d0 = LRealMath__sin((double)x);
  *Sin = d0;
  d0 = *Sin;
  d0 *= d0;
  d0 = 1.0000000000000000 - d0;
  d0 = LRealMath__sqrt((double)d0);
  *Cos = d0;
}

double LRealMath__arctan2(double xn, double xd) {
  register int i0, i1;
  register double d0, d1, d2, d3;
  d1 = _abs(xd);
  i0 = d1 < 2.2250738585072014E-308;
  if (i0) goto l13;
  i0 = LowLReal__exponent((double)xn);
  i1 = LowLReal__exponent((double)xd);
  i1 = i0 - i1;
  i0 = i1 >= 1020;
  if (i0) goto l10;
  i1 = i1 < -1019;
  if (i1) goto l9;
  d0 = _abs(xn);
  i0 = d0 > d1;
  if (i0) goto l0;
  d1 = xn / xd;
  d1 = _abs(d1);
  i0 = 0;
  goto l1;
l0:
  d1 = xd / xn;
  d1 = _abs(d1);
  i0 = 2;
l1:
  i1 = d1 > 2.6794919243112281E-1;
  if (i1) goto l2;
  i1 = i0;
  d3 = d1;
  goto l3;
l2:
  d3 = d1 * 1.7320508075688772;
  d0 = d3 - 1.0000000000000000;
  d3 = d1 + 1.7320508075688772;
  d3 = d0 / d3;
  i1 = i0 + 1;
l3:
  d0 = _abs(d3);
  i0 = d0 < 1.0536712000000000E-8;
  if (i0) goto l4;
  d1 = d3 * d3;
  d0 = d1 * 1.2888383034157279E+1;
  d2 = d1 + 3.8501486508351192E+1;
  d2 *= d1;
  d0 += 1.3270239816397674E+2;
  d0 *= d1;
  d2 += 2.2105088302841767E+2;
  d2 *= d1;
  d0 += 3.2266207001325120E+2;
  d0 *= d1;
  d2 += 3.9468283931228297E+2;
  d1 = d2 * d1;
  d2 = d0 + 2.1606230789724256E+2;
  d1 += 2.1606230789724262E+2;
  d2 = d3 * d2;
  d1 = d2 / d1;
  d3 = d1;
l4:
  i0 = i1 > 1;
  if (i0) goto l5;
  d0 = d3;
  goto l6;
l5:
  d0 = - d3;
l6:
  if (i1<=0 || i1>=4) goto l11;
  if (!(i1==1)) goto l7;
  d1 = d0 + 5.2359877559829882E-1;
  d0 = d1;
  goto l11;
l7:
  if (!(i1==2)) goto l8;
  d1 = d0 + 1.5707963267948966;
  d0 = d1;
  goto l11;
l8:
  if (!(i1==3)) goto l11;
  d1 = d0 + 1.0471975511965976;
  d0 = d1;
  goto l11;
l9:
  d0 = 0.0000000000000000;
  goto l11;
l10:
  LowLReal__ErrorHandler((short int)3);
  d0 = 1.5707963267948966;
l11:
  i1 = xd < 0.0000000000000000;
  if (i1) goto l12;
  d2 = d0;
  goto l15;
l12:
  d2 = 3.1415926535897931 - d0;
  goto l15;
l13:
  d2 = _abs(xn);
  i0 = d2 < 2.2250738585072014E-308;
  if (i0) goto l14;
  LowLReal__ErrorHandler((short int)3);
  d2 = 1.5707963267948966;
  goto l15;
l14:
  LowLReal__ErrorHandler((short int)7);
  d2 = 0.0000000000000000;
l15:
  i0 = xn < 0.0000000000000000;
  if (i0) goto l16;
  d0 = d2;
  goto l17;
l16:
  d0 = - d2;
l17:
  return (double)d0;
}

double LRealMath__sinh(double x) {
  register int i0, i1;
  register double d0, d1, d2, d3;
  double f;
  d0 = _abs(x);
  i0 = d0 <= 1.0000000000000000;
  if (i0) goto l4;
  d2 = LRealMath__LnInfinity;
  i0 = d2 < d0;
  if (i0) goto l0;
  d3 = LRealMath__exp((double)d0);
  d1 = 1.0000000000000000 / d3;
  d1 = d3 - d1;
  d1 *= 5.0000000000000000E-1;
  i1 = 0;
  goto l7;
l0:
  d3 = d0 - 6.9316101074218750E-1;
  d1 = d2 - 6.9316101074218750E-1;
  d1 += 6.8999999761581421E-1;
  i1 = d1 < d3;
  if (i1) goto l1;
  d2 = LRealMath__exp((double)d3);
  d1 = d2 * 1.3830277879601902E-5;
  d1 = d2 + d1;
  goto l7;
l1:
  i0 = x > 0.0000000000000000;
  if (i0) goto l2;
  d3 = -1.7976931348623157E+308;
  goto l3;
l2:
  d3 = 1.7976931348623157E+308;
l3:
  LowLReal__ErrorHandler((short int)3);
  goto l7;
l4:
  i0 = d0 < 1.0536712000000000E-8;
  if (i0) goto l5;
  d1 = d0 * d0;
  d3 = d1 * -7.8966127417357102E-1;
  d0 = d1 + -2.7773523119650702E+2;
  d3 += -1.6375798202630750E+2;
  d0 *= d1;
  d3 *= d1;
  d0 += 3.6162723109421837E+4;
  d3 += -1.1563521196851769E+4;
  d0 *= d1;
  d3 *= d1;
  d0 += -2.1108770058106272E+6;
  d3 += -3.5181283430177119E+5;
  d0 = d3 / d0;
  d0 = d1 * d0;
  d0 = x * d0;
  d3 = x + d0;
  goto l6;
l5:
  d3 = x;
l6:
  i1 = 1;
l7:
  if (i1) goto l9;
  i0 = x > 0.0000000000000000;
  if (i0) goto l8;
  d3 = - d1;
  goto l9;
l8:
  d3 = d1;
l9:
  return (double)d3;
}

double LRealMath__cosh(double x) {
  register int i0;
  register double d0, d1, d2, d3;
  d1 = LRealMath__LnInfinity;
  d0 = _abs(x);
  i0 = d1 < d0;
  if (i0) goto l0;
  d2 = LRealMath__exp((double)d0);
  d3 = 1.0000000000000000 / d2;
  d3 = d2 + d3;
  d3 *= 5.0000000000000000E-1;
  goto l4;
l0:
  d0 -= 6.9316101074218750E-1;
  d3 = d1 - 6.9316101074218750E-1;
  d3 += 6.8999999761581421E-1;
  i0 = d3 < d0;
  if (i0) goto l1;
  d1 = LRealMath__exp((double)d0);
  d3 = d1 * 1.3830277879601902E-5;
  d3 = d1 + d3;
  goto l4;
l1:
  i0 = x > 0.0000000000000000;
  if (i0) goto l2;
  d3 = -1.7976931348623157E+308;
  goto l3;
l2:
  d3 = 1.7976931348623157E+308;
l3:
  LowLReal__ErrorHandler((short int)3);
l4:
  return (double)d3;
}

double LRealMath__tanh(double x) {
  register int i0;
  register double d0, d1, d2, d3;
  d1 = _abs(x);
  i0 = d1 > 1.9061547470000001E+1;
  if (i0) goto l2;
  i0 = d1 > 5.4930614433405489E-1;
  if (i0) goto l1;
  i0 = d1 < 1.0536712000000000E-8;
  if (i0) goto l0;
  d2 = d1 * d1;
  d0 = d2 + 1.1274474380534949E+2;
  d0 *= d2;
  d3 = d2 * -9.6437492777225464E-1;
  d0 += 2.2337720718962314E+3;
  d3 += -9.9225929672236077E+1;
  d0 *= d2;
  d3 *= d2;
  d0 += 4.8402357071988690E+3;
  d3 += -1.6134119023996227E+3;
  d0 = d3 / d0;
  d2 *= d0;
  d2 *= d1;
  d2 += d1;
  goto l3;
l0:
  d2 = d1;
  goto l3;
l1:
  d2 = d1 * 2.0000000000000000;
  d2 = LRealMath__exp((double)d2);
  d2 += 1.0000000000000000;
  d2 = 2.0000000000000000 / d2;
  d2 = 1.0000000000000000 - d2;
  goto l3;
l2:
  d2 = 1.0000000000000000;
l3:
  i0 = x < 0.0000000000000000;
  if (i0) goto l4;
  d0 = d2;
  goto l5;
l4:
  d0 = - d2;
l5:
  return (double)d0;
}

double LRealMath__arcsinh(double x) {
  register int i0;
  register double d0, d1;
  d0 = LRealMath__SqrtInfinity;
  d1 = d0 * 5.0000000000000000E-1;
  d0 = _abs(x);
  i0 = d1 < d0;
  if (i0) goto l1;
  i0 = x < 0.0000000000000000;
  if (i0) goto l0;
  d0 = x * x;
  d0 += 1.0000000000000000;
  d0 = LRealMath__sqrt((double)d0);
  d0 = x + d0;
  d0 = LRealMath__ln((double)d0);
  goto l3;
l0:
  d0 = x * x;
  d0 += 1.0000000000000000;
  d0 = LRealMath__sqrt((double)d0);
  d0 -= x;
  d0 = LRealMath__ln((double)d0);
  d0 = - d0;
  goto l3;
l1:
  i0 = x > 0.0000000000000000;
  LowLReal__ErrorHandler((short int)8);
  if (i0) goto l2;
  d0 = LRealMath__SqrtInfinity;
  d0 = LRealMath__ln((double)d0);
  d0 = - d0;
  goto l3;
l2:
  d0 = LRealMath__SqrtInfinity;
  d0 = LRealMath__ln((double)d0);
l3:
  return (double)d0;
}

double LRealMath__arccosh(double x) {
  register int i0;
  register double d0;
  i0 = x < 1.0000000000000000;
  if (i0) goto l1;
  d0 = LRealMath__SqrtInfinity;
  d0 *= 5.0000000000000000E-1;
  i0 = x > d0;
  if (i0) goto l0;
  d0 = x * x;
  d0 -= 1.0000000000000000;
  d0 = LRealMath__sqrt((double)d0);
  d0 = x + d0;
  d0 = LRealMath__ln((double)d0);
  goto l2;
l0:
  LowLReal__ErrorHandler((short int)8);
  d0 = LRealMath__SqrtInfinity;
  d0 = LRealMath__ln((double)d0);
  goto l2;
l1:
  LowLReal__ErrorHandler((short int)9);
  d0 = 0.0000000000000000;
l2:
  return (double)d0;
}

double LRealMath__arctanh(double x) {
  register int i0, i1;
  register double d0, d1;
  d0 = _abs(x);
  i0 = d0 >= 1.0000000000000000;
  if (i0) goto l1;
  d1 = LRealMath__em;
  d1 *= 2.0000000000000000;
  d1 = 1.0000000000000000 - d1;
  i0 = d1 < d0;
  if (i0) goto l1;
  i1 = d0 <= 9.9998499100000005E-1;
  if (i1) goto l0;
  LowLReal__ErrorHandler((short int)10);
l0:
  i0 = 0;
  goto l4;
l1:
  i0 = x < 0.0000000000000000;
  LowLReal__ErrorHandler((short int)9);
  if (i0) goto l2;
  d0 = LRealMath__TanhMax;
  goto l3;
l2:
  d0 = LRealMath__TanhMax;
  d0 = - d0;
l3:
  i0 = 1;
l4:
  if (i0) goto l5;
  d0 = x * x;
  d0 = 1.0000000000000000 - d0;
  d0 = LRealMath__sqrt((double)d0);
  d0 = x / d0;
  d0 = LRealMath__arcsinh((double)d0);
l5:
  return (double)d0;
}

double LRealMath__ToLONGREAL(int hi, int lo) {
  register int i0;
  register double d0;
  int ra[2];
  i0 = (int)ra + 4;
  *(int*)(int)ra = hi;
  *(int*)i0 = lo;
  d0 = LowLReal__Real((const int*)(int)ra, 2);
  return (double)d0;
}

void LRealMath_init(void) {
  register int i0;
  register double d0, d1;
  _mid = _register_module(&LRealMath_md.md, NULL);
  d0 = LowLReal__ulp((double)1.0000000000000000);
  LRealMath__em = d0;
  d0 = LRealMath__ln((double)1.7976931348623157E+308);
  LRealMath__LnInfinity = d0;
  d0 = LRealMath__ln((double)2.2250738585072014E-308);
  LRealMath__LnSmall = d0;
  d0 = LRealMath__sqrt((double)1.7976931348623157E+308);
  LRealMath__SqrtInfinity = d0;
  d0 = LowLReal__pred((double)1.0000000000000000);
  d1 = LRealMath__em;
  d1 = LRealMath__sqrt((double)d1);
  d0 /= d1;
  LRealMath__t = d0;
  d0 = LRealMath__t;
  d1 = d0 * d0;
  d1 += 1.0000000000000000;
  d1 = LRealMath__sqrt((double)d1);
  d0 = d1 + d0;
  d0 = LRealMath__ln((double)d0);
  LRealMath__TanhMax = d0;
  i0 = (int)LRealMath__a1 + 8;
  *(double*)i0 = 1.0000000000000000;
  i0 = (int)LRealMath__a1 + 16;
  d0 = LRealMath__ToLONGREAL((int)1072604335, (int)-1566273318);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 24;
  d0 = LRealMath__ToLONGREAL((int)1072519192, (int)-587488121);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 32;
  d0 = LRealMath__ToLONGREAL((int)1072437659, (int)-578465124);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 40;
  d0 = LRealMath__ToLONGREAL((int)1072359583, (int)-1722100819);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 48;
  d0 = LRealMath__ToLONGREAL((int)1072284817, (int)-2103185264);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 56;
  d0 = LRealMath__ToLONGREAL((int)1072213221, (int)1110089947);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 64;
  d0 = LRealMath__ToLONGREAL((int)1072144660, (int)1944781190);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 72;
  d0 = LRealMath__ToLONGREAL((int)1072079006, (int)1719614412);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 80;
  d0 = LRealMath__ToLONGREAL((int)1072016135, (int)-582462423);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 88;
  d0 = LRealMath__ToLONGREAL((int)1071955930, (int)-717870553);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 96;
  d0 = LRealMath__ToLONGREAL((int)1071898278, (int)1276261410);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 104;
  d0 = LRealMath__ToLONGREAL((int)1071843070, (int)171030293);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 112;
  d0 = LRealMath__ToLONGREAL((int)1071790202, (int)1853186616);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 120;
  d0 = LRealMath__ToLONGREAL((int)1071739576, (int)1014845818);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 128;
  d0 = LRealMath__ToLONGREAL((int)1071691096, (int)1828292879);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a1 + 136;
  *(double*)i0 = 5.0000000000000000E-1;
  i0 = (int)LRealMath__a2 + 8;
  d0 = LRealMath__ToLONGREAL((int)1016115694, (int)1949433856);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 16;
  d0 = LRealMath__ToLONGREAL((int)1014042725, (int)-1991245824);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 24;
  d0 = LRealMath__ToLONGREAL((int)1013742662, (int)-1334837248);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 32;
  d0 = LRealMath__ToLONGREAL((int)1016789666, (int)75431936);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 40;
  d0 = LRealMath__ToLONGREAL((int)1015427660, (int)88473600);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 48;
  d0 = LRealMath__ToLONGREAL((int)1014684169, (int)300941312);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 56;
  d0 = LRealMath__ToLONGREAL((int)1015656574, (int)-1228406784);
  *(double*)i0 = d0;
  i0 = (int)LRealMath__a2 + 64;
  d0 = LRealMath__ToLONGREAL((int)1015588398, (int)1255931904);
  *(double*)i0 = d0;
}
