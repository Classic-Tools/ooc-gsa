/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "Opcode.d"

static _ModId _mid;

unsigned char Opcode__Commutative(short int opcode) {
  register int i0;
  i0 = (short int)_ashr(opcode, 4, (unsigned short int));
  if (!(i0<=7 || i0==9 || (i0>=11 && i0<=20) || (i0>=24 && i0<=30) || i0>=33)) goto l0;
  i0 = 0;
  goto l1;
l0:
  if (!(i0==8 || i0==10 || (i0>=21 && i0<=23) || (i0>=31 && i0<=32))) goto l1;
  i0 = 1;
l1:
  return (unsigned char)i0;
}

void Opcode_init(void) {
  _mid = _register_module(&Opcode_md.md, NULL);
}
