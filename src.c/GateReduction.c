/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "GateReduction.d"

static _ModId _mid;

Data__Usable GateReduction__Reduce_TraverseGates_VisibleValue(Data__Instruction gate, Data__Opnd opnd) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
  i8 = (int)gate + 28;
  i0 = (int)*(void**)i8;
  i1 = (int)*(void**)i0;
  i1 += 44;
  i1 = *(short int*)i1;
  i1 = i1 == 82;
  if (i1) goto l17;
  i1 = (int)GuardCond__OperandInfo((Data__Opnd)(int)opnd);
  i8 = (int)*(void**)i8;
  i8 += 8;
  i2 = (int)*(void**)i8;
  i8 = i2 != 0;
  if (i8) goto l0;
  i9 = 0;
  i0 = 1;
  i7 = 0;
  i8 = 1;
  goto l14;
l0:
  i8 = 1;
  i7 = 0;
  i0 = 1;
  i9 = 0;
l1:
  i6 = (int)GuardCond__OperandInfo((Data__Opnd)i2);
  i6 = GuardCond__Contradicting((GuardCond__RegionInfo)i6, (GuardCond__RegionInfo)i1);
  if (i6) goto l13;
  i6 = (int)*(void**)i2;
  i4 = *(int*)(i6-4);
  i4 = _type_test(i4, &Data__InstructionDesc_td.td, 4);
  if (!(i4)) goto l2;
  i3 = i6 + 44;
  i3 = *(short int*)i3;
  i3 = i3 == 19;
  if (i3) goto l3;
l2:
  i4 = i6;
  goto l4;
l3:
  i4 = (int)GateReduction__Reduce_TraverseGates_VisibleValue((Data__Instruction)i6, (Data__Opnd)(int)opnd);
  i3 = i4 != 0;
  if (i3) goto l4;
  i4 = (int)*(void**)i2;
l4:
  i3 = i7 == 0;
  if (i3) goto l7;
  i3 = i7 != i6;
  if (i3) goto l5;
  i3 = i8;
  goto l6;
l5:
  i3 = 0;
l6:
  i6 = i7;
  goto l8;
l7:
  i3 = i8;
l8:
  i5 = i9 == 0;
  if (i5) goto l11;
  i5 = i9 != i4;
  if (i5) goto l9;
  i5 = i0;
  goto l10;
l9:
  i5 = 0;
l10:
  i4 = i9;
  goto l12;
l11:
  i5 = i0;
l12:
  i9 = i4;
  i0 = i5;
  i7 = i6;
  i8 = i3;
l13:
  i2 += 8;
  i2 = (int)*(void**)i2;
  i6 = i2 != 0;
  if (i6) goto l1;
l14:
  if (!(i0)) goto l15;
  i6 = i9 != 0;
  if (i6) goto l22;
l15:
  if (i8) goto l16;
  i9 = 0;
  goto l22;
l16:
  i9 = i7;
  goto l22;
l17:
  i0 += 8;
  i0 = (int)*(void**)i0;
  i1 = i0 + 8;
  i1 = (int)*(void**)i1;
  i1 = (int)*(void**)i1;
  i9 = (int)gate == i1;
  if (i9) goto l18;
  i9 = (int)*(void**)i0;
  i9 = i9 == i1;
  if (i9) goto l18;
  i9 = 0;
  goto l22;
l18:
  i9 = (int)*(void**)i0;
  i0 = *(int*)(i9-4);
  i0 = _type_test(i0, &Data__InstructionDesc_td.td, 4);
  if (!(i0)) goto l19;
  i0 = i9 + 44;
  i0 = *(short int*)i0;
  i0 = i0 == 19;
  if (i0) goto l20;
l19:
  i1 = 0;
  goto l21;
l20:
  i0 = (int)GateReduction__Reduce_TraverseGates_VisibleValue((Data__Instruction)i9, (Data__Opnd)(int)opnd);
  i1 = i0 != 0;
  if (i1) goto l21;
l21:
  if (!(i1)) goto l22;
  i9 = i0;
l22:
  return (void*)i9;
}

unsigned char GateReduction__Reduce_TraverseGates_CanReplace(Data__Opnd use, Data__Usable value) {
  register int i0, i1;
  i0 = *(int*)((int)value-4);
  i0 = _type_test(i0, &Data__ResultDesc_td.td, 3);
  if (i0) goto l0;
  i1 = 1;
  goto l1;
l0:
  i1 = (int)value + 16;
  i1 = (int)*(void**)i1;
  i0 = (int)use + 12;
  i0 = (int)*(void**)i0;
  i1 += 32;
  i0 += 32;
  i1 = (int)*(void**)i1;
  i0 = (int)*(void**)i0;
  i1 = Data__RegionDesc_Dominates((Data__Region)i1, (Data__Region)i0);
l1:
  return (unsigned char)i1;
}

unsigned char GateReduction__Reduce_TraverseGates_MergeGate(Data__Usable u) {
  register int i0;
  i0 = *(int*)((int)u-4);
  i0 = _type_test(i0, &Data__GateDesc_td.td, 5);
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = (int)u + 32;
  i0 = (int)*(void**)i0;
  i0 += 44;
  i0 = *(short int*)i0;
  i0 = i0 != 82;
l1:
  return (unsigned char)i0;
}

void GateReduction__Reduce_TraverseGates(Data__Region r) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  Data__Usable value;
  i0 = (int)r + 56;
  i6 = (int)*(void**)i0;
  i0 = i6 == 0;
  if (i0) goto l15;
  i0 = (int)Data__struct + 4;
l0:
  i7 = i6 + 44;
  i7 = *(short int*)i7;
  i7 = i7 == 19;
  if (i7) goto l1;
  i7 = *(int*)(i6-4);
  i7 = _type_test(i7, &Data__RegionDesc_td.td, 5);
  if (!(i7)) goto l14;
  GateReduction__Reduce_TraverseGates((Data__Region)i6);
  goto l14;
l1:
  i1 = (int)*(void**)i6;
  i3 = i1 != 0;
  if (i3) goto l2;
  i7 = i5;
  goto l4;
l2:
  i3 = i1 + 4;
  i3 = (int)*(void**)i3;
  i7 = (int)GateReduction__Reduce_TraverseGates_VisibleValue((Data__Instruction)i6, (Data__Opnd)i1);
  i2 = i7 == 0;
  if (i2) goto l3;
  i2 = GateReduction__Reduce_TraverseGates_CanReplace((Data__Opnd)i1, (Data__Usable)i7);
  if (!(i2)) goto l3;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i1, (Data__Usable)i7);
l3:
  i1 = i3 != 0;
  if (!(i1)) goto l4;
  i1 = i3;
  goto l2;
l4:
  value = (void*)i7;
  value = (void*)i7;
  i7 = GuardCond__TraceValue((Data__Usable)i6, (Data__Usable *)(int)&value, (unsigned char)1);
  i3 = (int)value == i6;
  if (i3) goto l12;
  i1 = i6 + 24;
  i3 = (int)*(void**)i1;
  i1 = i3 == 0;
  if (i1) goto l12;
  i3 += 20;
  i3 = *(signed char*)i3;
  i3 = i3 != 1;
  if (i3) goto l12;
  if (!(i7)) goto l5;
  i1 = GateReduction__Reduce_TraverseGates_MergeGate((Data__Usable)(int)value);
  if (i1) goto l12;
l5:
  i2 = *(int*)((int)value-4);
  i3 = _type_test(i2, &Data__ConstDesc_td.td, 3);
  if (i3) goto l6;
  i4 = _type_test(i2, &Data__ObjectDesc_td.td, 4);
  if (i4) goto l6;
  if (!(i7)) goto l6;
  i4 = (int)value + 16;
  i4 = (int)*(void**)i4;
  i4 += 28;
  i1 = (int)*(void**)i4;
  i4 = i1 == 0;
  if (i4) goto l6;
  i1 = (int)*(void**)i1;
  i1 = i6 == i1;
  if (i1) goto l12;
l6:
  if (i7) goto l7;
  i4 = (int)value;
  goto l11;
l7:
  if (i3) goto l10;
  i2 = _type_test(i2, &Data__ObjectDesc_td.td, 4);
  if (i2) goto l8;
  i2 = (int)value + 16;
  i2 = (int)*(void**)i2;
  i4 = i2 + 32;
  i2 += 52;
  i4 = (int)*(void**)i4;
  i2 = *(int*)i2;
  goto l9;
l8:
  i4 = *(int*)((int)r-4);
  i4 = (int)((_Type)i4)->tbprocs[0];
  i4 = (int)((_TBP_Data__NodeDesc_Greg)i4)((Data__Node)(int)r);
  i2 = i6 + 52;
  i2 = *(int*)i2;
l9:
  i3 = (int)*(void**)i0;
  i4 = (int)Data__RegionDesc_CreateInstruction((Data__Region)i4, (short int)481, (Data__Struct)i3, (int)i2);
  Data__InstructionDesc_Operand((Data__Instruction)i4, (Data__Usable)(int)value);
  goto l11;
l10:
  i4 = (int)SymbolTable__constFalse;
l11:
  i2 = *(int*)(i6-4);
  i2 = (int)((_Type)i2)->tbprocs[1];
  ((_TBP_Data__UsableDesc_ReplaceUses)i2)((Data__Usable)i6, (Data__Usable)i4);
  goto l13;
l12:
  i4 = (int)value;
l13:
  i5 = i4;
l14:
  i7 = i6 + 36;
  i6 = (int)*(void**)i7;
  i7 = i6 != 0;
  if (i7) goto l0;
l15:
  ;
}

void GateReduction__Reduce(Data__Region r) {
  Data__RegionDesc_ClearInstrInfo((Data__Region)(int)r, (int)0);
  Data__GlobalRegionDesc_NumberDominanceTree((Data__GlobalRegion)(int)r);
  GateReduction__Reduce_TraverseGates((Data__Region)(int)r);
}

void GateReduction_init(void) {
  _mid = _register_module(&GateReduction_md.md, NULL);
}
