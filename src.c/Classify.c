/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "Classify.d"

static _ModId _mid;

unsigned char Classify__ElementUpdate(Data__Usable arg) {
  register int i0, i1;
  i0 = *(int*)((int)arg-4);
  i0 = _type_test(i0, &Data__InstructionDesc_td.td, 4);
  if (!(i0)) goto l0;
  i1 = (int)arg + 44;
  i0 = *(short int*)i1;
  i1 = i0 == 48;
  if (i1) goto l1;
  i0 = i0 == 49;
  if (i0) goto l1;
l0:
  i0 = 0;
  goto l2;
l1:
  i0 = 1;
l2:
  return (unsigned char)i0;
}

unsigned char Classify__NoopUpdate_SideEffect(Data__Result res, Data__Instruction *Classify__NoopUpdate_instr) {
  register int i0, i1, i2, i3;
  i0 = (int)res + 16;
  i2 = (int)*(void**)i0;
  i0 = i2 + 44;
  i0 = *(short int*)i0;
  i0 = i0 != 3;
  if (i0) goto l3;
  i1 = (int)res + 20;
  i0 = (int)*(void**)i1;
  i1 = i0 == 0;
  if (i1) goto l2;
  i1 = (int)*Classify__NoopUpdate_instr;
  i3 = i1 + 44;
  i3 = *(short int*)i3;
  i2 = i3 == 51;
  if (i2) goto l0;
  i3 = i3 != 52;
  if (i3) goto l1;
l0:
  i1 += 28;
  i1 = (int)*(void**)i1;
  i0 = (int)*(void**)i0;
  i1 = (int)*(void**)i1;
  i3 = i1 == i0;
  goto l4;
l1:
  i3 = 0;
  goto l4;
l2:
  i3 = (int)res != i2;
  goto l4;
l3:
  i3 = 0;
l4:
  return (unsigned char)i3;
}

unsigned char Classify__NoopUpdate(Data__Instruction instr) {
  register int i0, i1, i2;
  i0 = (int)instr + 44;
  i0 = *(short int*)i0;
  i0 = i0 == 53;
  if (i0) goto l0;
  i1 = (int)Data__InstructionDesc_LastOperand((Data__Instruction)(int)instr);
  goto l1;
l0:
  i1 = (int)instr + 28;
  i1 = (int)*(void**)i1;
  i1 += 8;
  i1 = (int)*(void**)i1;
l1:
  i0 = (int)Data__OpndDesc_OpndType((Data__Opnd)i1);
  i0 = SymbolTable__TypeInGroup((Data__Struct)i0, (signed char)47);
  if (i0) goto l3;
  i1 = (int)*(void**)i1;
  i0 = *(int*)(i1-4);
  i2 = _type_test(i0, &Data__ResultDesc_td.td, 3);
  if (!(i2)) goto l2;
  i2 = Classify__NoopUpdate_SideEffect((Data__Result)i1, (Data__Instruction *)&instr);
  if (i2) goto l3;
l2:
  i0 = _type_test(i0, &Data__ObjectDesc_td.td, 4);
  if (i0) goto l3;
  i0 = 0;
  goto l4;
l3:
  i0 = 1;
l4:
  return (unsigned char)i0;
}

unsigned char Classify__NoopAccess_SameAddress(Data__Opnd opnd, Data__Usable accessAdr, Data__Instruction *Classify__NoopAccess_instr) {
  register int i0, i1, i2;
  i0 = (int)opnd + 16;
  i1 = (int)*(void**)i0;
  i0 = *(int*)((int)accessAdr-4);
  i1 = (int)*(void**)i1;
  i2 = _type_test(i0, &Data__ResultDesc_td.td, 3);
  if (!(i2)) goto l0;
  i2 = (int)accessAdr + 16;
  i2 = (int)*(void**)i2;
  i2 += 44;
  i2 = *(short int*)i2;
  i2 = i2 == 1;
  if (i2) goto l3;
l0:
  i0 = _type_test(i0, &Data__InstructionDesc_td.td, 4);
  if (!(i0)) goto l1;
  i0 = (int)accessAdr + 44;
  i0 = *(short int*)i0;
  i0 = i0 != 8;
  if (i0) goto l1;
  i0 = (int)accessAdr + 28;
  i0 = (int)*(void**)i0;
  i0 = (int)*(void**)i0;
  i1 = i1 == i0;
  if (i1) goto l2;
l1:
  i2 = 0;
  goto l4;
l2:
  i2 = 1;
  goto l4;
l3:
  i2 = (int)*Classify__NoopAccess_instr;
  i2 += 32;
  i2 = (int)*(void**)i2;
  i2 = (int)Data__RegionDesc_EnterInstr((Data__Region)i2);
  i2 = (int)Data__InstructionDesc_GetResult((Data__Instruction)i2, (Data__Addressable)i1, (short int)-2);
  i2 = (int)accessAdr == i2;
l4:
  return (unsigned char)i2;
}

unsigned char Classify__NoopAccess(Data__Instruction instr) {
  register int i0, i1, i2, i3, i4;
  i3 = (int)*(void**)(int)instr;
  i0 = i3 != 0;
  if (i0) goto l0;
  i4 = 1;
  goto l15;
l0:
  i2 = (int)instr;
l1:
  i0 = i3 + 12;
  i1 = (int)*(void**)i0;
  i0 = i1 + 44;
  i0 = *(short int*)i0;
  i4 = i0 == 3;
  if (i4) goto l7;
  i4 = i0 == 2;
  if (i4) goto l4;
  i4 = i0 == 32;
  if (i4) goto l2;
  i0 = i0 != 33;
  if (i0) goto l3;
l2:
  i1 += 28;
  i1 = (int)*(void**)i1;
  i1 = i3 != i1;
  if (i1) goto l3;
  i4 = 1;
  goto l14;
l3:
  i4 = 0;
  goto l14;
l4:
  i4 = i3 + 16;
  i4 = (int)*(void**)i4;
  i0 = i4 == 0;
  if (i0) goto l5;
  i4 = (int)*(void**)i4;
  i0 = *(int*)(i4-4);
  i0 = _type_test(i0, &Data__ObjectDesc_td.td, 4);
  if (!(i0)) goto l5;
  i4 += 20;
  i4 = (int)*(void**)i4;
  i4 = strcmp((const char*) i4, (const char*) (int)_c0) == 0;
  if (i4) goto l6;
l5:
  i4 = 1;
  goto l14;
l6:
  i4 = 0;
  goto l14;
l7:
  i0 = (int)Data__OpndDesc_GetFormalParam((Data__Opnd)i3);
  i4 = i0 == 0;
  if (i4) goto l8;
  i0 += 28;
  i0 = *(signed char*)i0;
  i0 = i0 == 3;
  if (i0) goto l9;
l8:
  i4 = Data__OpndDesc_OperandIndex((Data__Opnd)i3);
  i4 = i4 >= 3;
  if (i4) goto l10;
l9:
  i0 = i2;
  goto l12;
l10:
  i4 = i2 + 28;
  i4 = (int)*(void**)i4;
  i4 += 8;
  i4 = (int)*(void**)i4;
  i4 = (int)*(void**)i4;
  instr = (void*)i2;
  instr = (void*)i2;
  i4 = Classify__NoopAccess_SameAddress((Data__Opnd)i3, (Data__Usable)i4, (Data__Instruction *)&instr);
  if (!(i4)) goto l11;
  i4 = 1;
  i0 = (int)instr;
  goto l13;
l11:
  i0 = (int)instr;
l12:
  i4 = 0;
l13:
  i2 = i0;
l14:
  i0 = i3 + 4;
  i3 = (int)*(void**)i0;
  if (!(i4)) goto l15;
  i0 = i3 != 0;
  if (i0) goto l1;
l15:
  return (unsigned char)i4;
}

Data__Opnd Classify__UpdateSourceAdr(Data__Instruction instr) {
  register int i0, i1, i2, i3, i4;
  i4 = (int)Data__InstructionDesc_LastOperand((Data__Instruction)(int)instr);
  i3 = (int)*(void**)i4;
  i0 = *(int*)(i3-4);
  i1 = _type_test(i0, &Data__ConstDesc_td.td, 3);
  if (i1) goto l3;
  i0 = Classify__ElementUpdate((Data__Usable)i3);
  if (i0) goto l0;
  i2 = i3;
  goto l2;
l0:
  i2 = i3;
l1:
  i2 += 28;
  i2 = (int)*(void**)i2;
  i2 = (int)*(void**)i2;
  i0 = Classify__ElementUpdate((Data__Usable)i2);
  if (i0) goto l1;
l2:
  i3 = i2;
l3:
  if (i1) goto l5;
  i0 = i3 + 44;
  i0 = *(short int*)i0;
  i4 = i0 == 22;
  if (i4) goto l4;
  i0 = i0 == 23;
  if (i0) goto l4;
  i4 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)i3, (short int)1);
  goto l5;
l4:
  i4 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)i3, (short int)4);
l5:
  return (void*)i4;
}

signed char Classify__RegClass(Data__Struct type) {
  register int i0;
  i0 = (int)type + 20;
  i0 = *(signed char*)i0;
  if (!((i0>=1 && i0<=6) || (i0>=12 && i0<=14) || i0==16)) goto l0;
  i0 = 12;
  goto l5;
l0:
  if (!(i0==17 || i0==20 || (i0>=27 && i0<=28))) goto l1;
  i0 = 12;
  goto l5;
l1:
  if (!(i0==7 || i0==15)) goto l2;
  i0 = 13;
  goto l5;
l2:
  if (!(i0==8)) goto l3;
  i0 = 14;
  goto l5;
l3:
  if (!(i0==9)) goto l4;
  i0 = 15;
  goto l5;
l4:
  if (!(i0==0 || (i0>=18 && i0<=19) || i0==21 || (i0>=29 && i0<=31))) goto l5;
  i0 = 11;
l5:
  return (signed char)i0;
}

unsigned char Classify__TestInstr(Data__Instruction instr) {
  register int i0, i1;
  i0 = (int)instr + 44;
  i0 = *(short int*)i0;
  i1 = i0 == 12;
  if (i1) goto l0;
  i1 = i0 == 13;
  if (i1) goto l0;
  i1 = i0 == 15;
  if (i1) goto l0;
  i0 = i0 == 16;
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = 1;
l1:
  return (unsigned char)i0;
}

unsigned char Classify__Region_TypeCastOp(Data__Instruction instr) {
  register int i0, i1;
  i0 = (int)instr + 44;
  i0 = *(short int*)i0;
  i0 = (short int)_ashr(i0, 4, (unsigned short int));
  i0 = i0 != 7;
  if (i0) goto l2;
  i1 = (int)instr + 28;
  i1 = (int)*(void**)i1;
  i1 += 8;
  i1 = (int)*(void**)i1;
  i1 = (int)Data__OpndDesc_OpndType((Data__Opnd)i1);
  i0 = SymbolTable__TypeInGroup((Data__Struct)i1, (signed char)37);
  if (!(i0)) goto l0;
  i0 = (int)instr + 24;
  i0 = (int)*(void**)i0;
  i1 += 20;
  i0 += 20;
  i1 = *(signed char*)i1;
  i0 = *(signed char*)i0;
  i1 = i0 > i1;
  if (i1) goto l1;
l0:
  i1 = 0;
  goto l3;
l1:
  i1 = 1;
  goto l3;
l2:
  i1 = 0;
l3:
  return (unsigned char)i1;
}

void Classify__Region(Data__Region region) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
  i0 = (int)region + 56;
  i11 = (int)*(void**)i0;
  i0 = i11 == 0;
  if (i0) goto l29;
  i0 = (int)Data__struct + 24;
l0:
  i9 = i11 + 48;
  i1 = *(unsigned int*)i9;
  i10 = *(int*)(i11-4);
  i12 = _type_test(i10, &Data__RegionDesc_td.td, 5);
  i1 = i1 & ~((unsigned int)0x7FC00U);
  *(unsigned int*)i9 = i1;
  if (i12) goto l27;
  i7 = i11 + 24;
  i8 = (int)*(void**)i7;
  i6 = i8 == 0;
  if (i6) goto l1;
  i1 = Classify__RegClass((Data__Struct)i8);
  goto l2;
l1:
  i1 = 11;
l2:
  i4 = i11 + 44;
  i2 = *(short int*)i4;
  i3 = (short int)_ashr(i2, 4, (unsigned short int));
  i6 = Classify__TestInstr((Data__Instruction)i11);
  if (i6) goto l25;
  i5 = i3 == 7;
  if (i5) goto l16;
  i12 = i3 < 2;
  if (i12) goto l8;
  if (!(i3<=1 || i3>=4)) goto l3;
  i12 = i1;
  goto l26;
l3:
  if (!(i3==2)) goto l6;
  i12 = i1 == 11;
  if (i12) goto l4;
  i12 = Classify__NoopAccess((Data__Instruction)i11);
  if (!(i12)) goto l5;
l4:
  i12 = 10;
  goto l26;
l5:
  i12 = i1;
  goto l26;
l6:
  if (!(i3==3)) goto l26;
  i12 = *(unsigned int*)i9;
  i12 = i12 | ((unsigned int)1 << 11);
  *(unsigned int*)i9 = i12;
  i12 = Classify__NoopUpdate((Data__Instruction)i11);
  if (i12) goto l7;
  i12 = 11;
  goto l26;
l7:
  i12 = 10;
  goto l26;
l8:
  if (!(i2<=5 || (i2>=8 && i2<=9) || (i2>=11 && i2<=17) || i2==20 || i2>=22)) goto l9;
  i12 = i1;
  goto l26;
l9:
  if (!((i2>=6 && i2<=7))) goto l10;
  i12 = 10;
  goto l26;
l10:
  if (!(i2==21)) goto l12;
  i8 = SymbolTable__TypeInGroup((Data__Struct)i8, (signed char)47);
  if (i8) goto l11;
  i12 = i1;
  goto l26;
l11:
  i12 = 10;
  goto l26;
l12:
  if (!(i2==10)) goto l13;
  i12 = (int)*(void**)i0;
  i12 = Classify__RegClass((Data__Struct)i12);
  goto l26;
l13:
  if (!(i2==18)) goto l15;
  i12 = i1 == 11;
  if (i12) goto l14;
  i12 = i1;
  goto l26;
l14:
  i12 = 10;
  goto l26;
l15:
  if (!(i2==19)) goto l26;
  i8 = *(unsigned int*)i9;
  i8 = i8 | ((unsigned int)1 << 10);
  *(unsigned int*)i9 = i8;
  i12 = i1;
  goto l26;
l16:
  i2 = i11 + 28;
  i6 = (int)*(void**)i2;
  i6 += 8;
  i6 = (int)*(void**)i6;
  i3 = (int)Data__OpndDesc_OpndType((Data__Opnd)i6);
  i8 = (int)*(void**)i7;
  i7 = Classify__Region_TypeCastOp((Data__Instruction)i11);
  if (i7) goto l24;
  i8 = Classify__RegClass((Data__Struct)i8);
  i3 = Classify__RegClass((Data__Struct)i3);
  i3 = i8 == i3;
  if (i3) goto l17;
  i12 = i1;
  goto l26;
l17:
  i8 = (int)*(void**)i11;
  i12 = i8 != 0;
  if (i12) goto l18;
  i3 = 1;
  goto l22;
l18:
  i3 = 1;
l19:
  i5 = i8 + 12;
  i6 = (int)*(void**)i5;
  i12 = i6 + 44;
  i12 = *(short int*)i12;
  i12 = i12 == 21;
  i7 = i8 + 4;
  i7 = (int)*(void**)i7;
  if (i12) goto l20;
  i6 = Classify__Region_TypeCastOp((Data__Instruction)i6);
  if (i6) goto l20;
  i5 = (int)*(void**)i5;
  i5 += 44;
  i5 = *(short int*)i5;
  i5 = i5 == 53;
  if (i5) goto l20;
  i6 = (int)*(void**)i2;
  i6 += 8;
  i6 = (int)*(void**)i6;
  i6 = (int)*(void**)i6;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i8, (Data__Usable)i6);
  goto l21;
l20:
  i3 = 0;
l21:
  i12 = i7 != 0;
  if (!(i12)) goto l22;
  i8 = i7;
  goto l19;
l22:
  if (i3) goto l23;
  i12 = i1;
  goto l26;
l23:
  i12 = 10;
  goto l26;
l24:
  i12 = i1;
  goto l26;
l25:
  i12 = 11;
l26:
  i8 = *(unsigned int*)i9;
  i8 = i8 | ((unsigned int)1 << i12);
  *(unsigned int*)i9 = i8;
  i8 = *(short int*)i4;
  i8 = i8 != 3;
  if (i8) goto l28;
  i7 = i11 + 28;
  i7 = (int)*(void**)i7;
  i7 += 8;
  i7 = (int)*(void**)i7;
  i7 += 8;
  i7 = (int)*(void**)i7;
  i7 = (int)*(void**)i7;
  i8 = *(int*)(i7-4);
  i8 = _type_test(i8, &Data__ObjectDesc_td.td, 4);
  if (!(i8)) goto l28;
  i8 = i7 + 64;
  i8 = *(unsigned int*)i8;
  i8 = (i8 & ((unsigned int)1 << 8)) != 0;
  if (!(i8)) goto l28;
  i7 += 52;
  i7 = (int)*(void**)i7;
  i7 += 24;
  i7 = *(int*)i7;
  i7 = i7 != 1;
  if (i7) goto l28;
  i10 = (int)((_Type)i10)->tbprocs[0];
  i10 = (int)((_TBP_Data__NodeDesc_Greg)i10)((Data__Node)i11);
  i7 = i10 + 48;
  i8 = *(unsigned int*)i7;
  i8 = i8 | ((unsigned int)1 << 18);
  *(unsigned int*)i7 = i8;
  goto l28;
l27:
  Classify__Region((Data__Region)i11);
l28:
  i12 = i11 + 36;
  i11 = (int)*(void**)i12;
  i12 = i11 != 0;
  if (i12) goto l0;
l29:
  ;
}

void Classify_init(void) {
  _mid = _register_module(&Classify_md.md, NULL);
}
