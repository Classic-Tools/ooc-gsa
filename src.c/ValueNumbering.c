/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "ValueNumbering.d"

static _ModId _mid;

void ValueNumbering__PartitionDesc_Concatenate(ValueNumbering__Partition list, ValueNumbering__Partition tail) {
  register int i0, i1;
  i0 = (int)*(void**)(int)list;
  i0 = i0 != 0;
  if (i0) goto l0;
  i1 = (int)list;
  goto l2;
l0:
  i1 = (int)list;
l1:
  i1 = (int)*(void**)i1;
  i0 = (int)*(void**)i1;
  i0 = i0 != 0;
  if (i0) goto l1;
l2:
  *(void**)i1 = (void*)(int)tail;
}

ValueNumbering__InstrNode ValueNumbering__NewInstrNode(Data__Instruction instr) {
  register int i0, i1, i2;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(16)+8);
    if (!_mem) _new_failed(_P(3301));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ValueNumbering__InstrNodeDesc_td.td;
    i0 = (int)_var;
  }
  i2 = i0 + 4;
  *(void**)i0 = (void*)0;
  i1 = i0 + 8;
  *(void**)i2 = (void*)(int)instr;
  i2 = i0 + 12;
  *(void**)i1 = (void*)0;
  *(void**)i2 = (void*)0;
  return (void*)i0;
}

ValueNumbering__Partition ValueNumbering__NewPartition(ValueNumbering__Partition super) {
  register int i0, i1, i2;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(32)+8);
    if (!_mem) _new_failed(_P(3563));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ValueNumbering__PartitionDesc_td.td;
    i0 = (int)_var;
  }
  i2 = i0 + 16;
  *(void**)i0 = (void*)0;
  i1 = i0 + 20;
  *(void**)i2 = (void*)0;
  i2 = i0 + 8;
  *(int*)i1 = 0;
  i1 = i0 + 12;
  *(int*)i2 = -1;
  i2 = i0 + 4;
  *(void**)i1 = (void*)(int)super;
  i1 = i0 + 24;
  *(void**)i2 = (void*)0;
  i2 = i0 + 28;
  *(void**)i1 = (void*)0;
  i1 = i0 + 29;
  *(unsigned char*)i2 = 0;
  *(unsigned char*)i1 = 0;
  return (void*)i0;
}

void ValueNumbering__PartitionDesc_IncludeInstrNode(ValueNumbering__Partition partition, ValueNumbering__InstrNode instrNode) {
  register int i0, i1, i2;
  i0 = (int)partition + 16;
  i2 = (int)instrNode + 8;
  i1 = (int)*(void**)i0;
  *(void**)i2 = (void*)(int)partition;
  i2 = (int)partition + 20;
  *(void**)i0 = (void*)(int)instrNode;
  *(void**)(int)instrNode = (void*)i1;
  i0 = *(int*)i2;
  i0++;
  *(int*)i2 = i0;
}

void ValueNumbering__PartitionDesc_ExcludeInstrNode(ValueNumbering__Partition partition, ValueNumbering__InstrNode instrNode) {
  register int i0, i1, i2, i3;
  i1 = (int)partition + 16;
  i2 = (int)*(void**)i1;
  i0 = (int)instrNode == i2;
  if (i0) goto l3;
  i1 = i2 == 0;
  if (i1) goto l1;
  i3 = (int)*(void**)i2;
  i3 = (int)instrNode == i3;
  if (i3) goto l1;
  i0 = i2;
l0:
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l2;
  i1 = (int)*(void**)i0;
  i1 = (int)instrNode != i1;
  if (i1) goto l0;
  goto l2;
l1:
  i0 = i2;
l2:
  i1 = (int)*(void**)(int)instrNode;
  *(void**)i0 = (void*)i1;
  goto l4;
l3:
  i0 = (int)*(void**)(int)instrNode;
  *(void**)i1 = (void*)i0;
l4:
  i1 = (int)partition + 20;
  i0 = *(int*)i1;
  i0--;
  *(int*)i1 = i0;
  i0 = (int)instrNode + 8;
  *(void**)(int)instrNode = (void*)0;
  *(void**)i0 = (void*)0;
}

int ValueNumbering__PartitionDesc_Size(ValueNumbering__Partition partition) {
  register int i0;
  i0 = (int)partition + 20;
  i0 = *(int*)i0;
  return (int)i0;
}

ValueNumbering__InstrNode ValueNumbering__PartitionDesc_GetAnyInstruction(ValueNumbering__Partition partition) {
  register int i0;
  i0 = (int)partition + 16;
  i0 = (int)*(void**)i0;
  return (void*)i0;
}

unsigned char ValueNumbering__PartitionDesc_IsEmpty(ValueNumbering__Partition partition) {
  register int i0;
  i0 = *(int*)((int)partition-4);
  i0 = (int)((_Type)i0)->tbprocs[3];
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)partition);
  i0 = i0 == 0;
  return (unsigned char)i0;
}

ValueNumbering__InstrList ValueNumbering__PartitionDesc_CreateInstrList(ValueNumbering__Partition partition) {
  register int i0, i1, i2, i3, i4;
  i0 = (int)partition + 16;
  i3 = (int)*(void**)i0;
  i0 = i3 != 0;
  if (i0) goto l0;
  i4 = 0;
  goto l2;
l0:
  i0 = 0;
l1:
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(8)+8);
    if (!_mem) _new_failed(_P(5669));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ValueNumbering__InstrListDesc_td.td;
    i4 = (int)_var;
  }
  i2 = i3 + 4;
  i1 = i4 + 4;
  i2 = (int)*(void**)i2;
  *(void**)i1 = (void*)i2;
  i3 = (int)*(void**)i3;
  *(void**)i4 = (void*)i0;
  i0 = i3 == 0;
  if (i0) goto l2;
  i0 = i4;
  goto l1;
l2:
  return (void*)i4;
}

unsigned char ValueNumbering__SameOperandArgument(Data__Opnd opnd1, Data__Opnd opnd2) {
  register int i0, i1;
  i1 = (int)*(void**)(int)opnd1;
  i0 = (int)*(void**)(int)opnd2;
  i0 = i1 == i0;
  return (unsigned char)i0;
}

unsigned char ValueNumbering__OwnPartitionAsDefault(Data__Instruction instr) {
  register int i0;
  i0 = (int)instr + 48;
  i0 = *(unsigned int*)i0;
  i0 = (i0 & ((unsigned int)1 << 7)) != 0;
  if (i0) goto l0;
  i0 = *(int*)((int)instr-4);
  i0 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = 1;
l1:
  return (unsigned char)i0;
}

unsigned char ValueNumbering__Available(Data__Instruction res, Data__Region reg) {
  register int i0, i1, i2;
  i0 = *(int*)((int)res-4);
  i1 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  if (i1) goto l2;
  i0 = _type_test(i0, &Data__GateDesc_td.td, 5);
  if (i0) goto l0;
  i2 = (int)res + 32;
  i2 = (int)*(void**)i2;
  i2 = Data__RegionDesc_Dominates((Data__Region)i2, (Data__Region)(int)reg);
  goto l1;
l0:
l1:
  i1 = ! i0;
  goto l3;
l2:
  i2 = 0;
  i1 = 1;
l3:
  if (i1) goto l4;
  i2 = 0;
l4:
  return (unsigned char)i2;
}

void ValueNumbering__AddToWorklistUnique(ValueNumbering__Partition *worklist, ValueNumbering__Partition part) {
  register int i0, i1, i2;
  i1 = (int)part + 28;
  i0 = *(unsigned char*)i1;
  if (i0) goto l0;
  i0 = (int)part + 24;
  i2 = (int)*worklist;
  *(void**)i0 = (void*)i2;
  *(unsigned char*)i1 = 1;
  *worklist = (void*)(int)part;
l0:
  ;
}

void ValueNumbering__ClearWorklist(ValueNumbering__Partition *worklist) {
  register int i0, i1, i2, i3;
  i2 = (int)*worklist;
  i0 = i2 == 0;
  if (i0) goto l1;
l0:
  i0 = i2 + 24;
  i3 = (int)*(void**)i0;
  *(void**)i0 = (void*)0;
  i0 = i2 + 28;
  i1 = i3 == 0;
  *(unsigned char*)i0 = 0;
  if (i1) goto l1;
  i2 = i3;
  goto l0;
l1:
  *worklist = (void*)0;
}

unsigned char ValueNumbering__PartitionInWorklist(ValueNumbering__Partition part, ValueNumbering__Partition worklist) {
  register int i0;
  i0 = (int)part + 28;
  i0 = *(unsigned char*)i0;
  return (unsigned char)i0;
}

void ValueNumbering__Normalize(Data__Region reg) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
  i0 = (int)reg + 56;
  i9 = (int)*(void**)i0;
  i0 = i9 == 0;
  if (i0) goto l12;
l0:
  i10 = *(int*)(i9-4);
  i10 = _type_test(i10, &Data__RegionDesc_td.td, 5);
  if (i10) goto l10;
  i8 = i9 + 28;
  i0 = (int)*(void**)i8;
  i8 = i0 == 0;
  if (i8) goto l11;
  i1 = i0 + 8;
  i10 = (int)*(void**)i1;
  i1 = i10 == 0;
  if (i1) goto l11;
  i6 = (int)*(void**)i0;
  i5 = (int)*(void**)i10;
  i7 = *(int*)(i6-4);
  i8 = _type_test(i7, &Data__ConstDesc_td.td, 3);
  i1 = i9 + 44;
  i3 = *(short int*)i1;
  i4 = (short int)_ashr(i3, 4, (unsigned short int));
  i2 = i3 & 0xFU;
  if (!(i8)) goto l1;
  i8 = *(int*)(i5-4);
  i8 = _type_test(i8, &Data__ConstDesc_td.td, 3);
  if (!(i8)) goto l3;
l1:
  i8 = _type_test(i7, &Data__ObjectDesc_td.td, 4);
  if (!(i8)) goto l2;
  i8 = *(int*)(i5-4);
  i8 = _type_test(i8, &Data__ConstDesc_td.td, 3);
  if (!(i8)) goto l3;
l2:
  i7 = _type_test(i7, &Data__ResultDesc_td.td, 3);
  if (!(i7)) goto l11;
  i7 = *(int*)(i5-4);
  i7 = _type_test(i7, &Data__ResultDesc_td.td, 3);
  if (!(i7)) goto l11;
  i6 += 16;
  i5 += 16;
  i6 = (int)*(void**)i6;
  i5 = (int)*(void**)i5;
  i6 += 44;
  i5 += 44;
  i6 = *(short int*)i6;
  i5 = *(short int*)i5;
  i5 = i6 <= i5;
  if (i5) goto l11;
l3:
  if (!(i4<=7 || i4==9 || (i4>=11 && i4<=20) || (i4>=24 && i4<=30) || i4>=37)) goto l4;
  i3 = -1;
  goto l8;
l4:
  if (i4==8 || i4==10 || (i4>=21 && i4<=23) || (i4>=31 && i4<=32)) goto l8;
  if (!(i4==33)) goto l5;
  i3 = i2 + 560;
  goto l8;
l5:
  if (!(i4==34)) goto l6;
  i3 = i2 + 576;
  goto l8;
l6:
  if (!(i4==35)) goto l7;
  i3 = i2 + 528;
  goto l8;
l7:
  if (!(i4==36)) goto l8;
  i3 = i2 + 544;
l8:
  i4 = i3 >= 0;
  if (!(i4)) goto l11;
  Data__OpndDesc_SwapArguments((Data__Opnd)i0, (Data__Opnd)i10);
  i10 = i2 < 12;
  if (i10) goto l9;
  i0 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)i9, (short int)2);
  i10 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)i9, (short int)3);
  Data__OpndDesc_SwapArguments((Data__Opnd)i0, (Data__Opnd)i10);
l9:
  *(short int*)i1 = i3;
  goto l11;
l10:
  ValueNumbering__Normalize((Data__Region)i9);
l11:
  i10 = i9 + 36;
  i9 = (int)*(void**)i10;
  i10 = i9 != 0;
  if (i10) goto l0;
l12:
  ;
}

void ValueNumbering__MarkLoopDependentInstr_AddUsingInstrUniqueIn(Worklist__Worklist *wl, _Type wl__tag, Data__Result used, Data__Merge merge) {
  register int i0, i1, i2, i3, i4, i5;
  i4 = (int)*(void**)(int)used;
  i0 = i4 == 0;
  if (i0) goto l2;
  i5 = (int)((_Type)wl__tag)->tbprocs[10];
l0:
  i0 = i4 + 12;
  i3 = (int)*(void**)i0;
  i0 = i3 + 32;
  i0 = (int)*(void**)i0;
  i0 = Data__RegionDesc_Dominates((Data__Region)(int)merge, (Data__Region)i0);
  if (!(i0)) goto l1;
  i2 = i3 + 4;
  i1 = (int)*(void**)i2;
  i2 = i1 + 12;
  i0 = (int)*(void**)i2;
  i0 = (int)merge == i0;
  if (i0) goto l1;
  *(void**)i2 = (void*)(int)merge;
  ((_TBP_Worklist__Worklist_AddTailUnique)i5)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)i3);
l1:
  i0 = i4 + 4;
  i4 = (int)*(void**)i0;
  i0 = i4 != 0;
  if (i0) goto l0;
l2:
  ;
}

void ValueNumbering__MarkLoopDependentInstr(Data__Region reg) {
  register int i0, i1, i2, i3, i4;
  Worklist__Worklist worklist;
  i0 = (int)reg + 44;
  i0 = *(short int*)i0;
  i0 = i0 != 82;
  if (i0) goto l3;
  i3 = (int)((_Type)&Worklist__Worklist_td.td)->tbprocs[0];
  ((_TBP_Worklist__Worklist_Init)i3)((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td);
  i4 = (int)((_Type)&Worklist__Worklist_td.td)->tbprocs[13];
  ValueNumbering__MarkLoopDependentInstr_AddUsingInstrUniqueIn((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td, (Data__Result)(int)reg, (Data__Merge)(int)reg);
  i3 = ((_TBP_Worklist__Worklist_IsEmpty)i4)((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td);
  if (i3) goto l3;
  i3 = (int)((_Type)&Worklist__Worklist_td.td)->tbprocs[15];
  i0 = (int)((_Type)&Worklist__Worklist_td.td)->tbprocs[18];
l0:
  i2 = (int)((_TBP_Worklist__Worklist_GetHead)i3)((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td);
  i1 = i2 == 0;
  ((_TBP_Worklist__Worklist_RemoveHead)i0)((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td);
  if (i1) goto l2;
l1:
  ValueNumbering__MarkLoopDependentInstr_AddUsingInstrUniqueIn((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td, (Data__Result)i2, (Data__Merge)(int)reg);
  i2 += 12;
  i2 = (int)*(void**)i2;
  i1 = i2 != 0;
  if (i1) goto l1;
l2:
  i2 = ((_TBP_Worklist__Worklist_IsEmpty)i4)((Worklist__Worklist *)(int)&worklist, &Worklist__Worklist_td.td);
  if (!(i2)) goto l0;
l3:
  i0 = (int)reg + 64;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l5;
l4:
  ValueNumbering__MarkLoopDependentInstr((Data__Region)i0);
  i0 += 68;
  i0 = (int)*(void**)i0;
  i1 = i0 != 0;
  if (i1) goto l4;
l5:
  ;
}

void ValueNumbering__InitCollectPartitions(void) {
  register int i0, i1, i2, i3;
  i3 = 0;
l0:
  i1 = (int)_ashl(i3, 2, (unsigned int));
  i2 = i3 + 1;
  i1 = (int)ValueNumbering__collectPartitions + i1;
  i0 = i2 > 591;
  *(void**)i1 = (void*)0;
  if (i0) goto l1;
  i3 = i2;
  goto l0;
l1:
  ;
}

void ValueNumbering__ClassifyInstructions_IncludeInPartition(Data__Instruction instr) {
  register int i0, i1, i2, i3, i4;
  i1 = (int)ValueNumbering__NewInstrNode((Data__Instruction)(int)instr);
  i0 = (int)instr + 4;
  *(void**)i0 = (void*)i1;
  i1 = (int)instr + 44;
  i2 = *(short int*)i1;
  i3 = (int)_ashl(i2, 2, (unsigned int));
  i3 = (int)ValueNumbering__collectPartitions + i3;
  i4 = (int)*(void**)i3;
  i4 = i4 != 0;
  if (i4) goto l0;
  i4 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  *(void**)i3 = (void*)i4;
l0:
  i1 = *(short int*)i1;
  i2 = (int)_ashl(i1, 2, (unsigned int));
  i2 = (int)ValueNumbering__collectPartitions + i2;
  i1 = (int)*(void**)i2;
  i2 = *(int*)(i1-4);
  i0 = (int)*(void**)i0;
  i2 = (int)((_Type)i2)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i2)((ValueNumbering__Partition)i1, (ValueNumbering__InstrNode)i0);
}

void ValueNumbering__ClassifyInstructions(Data__Region reg) {
  register int i0, i1;
  i0 = (int)reg + 56;
  ValueNumbering__ClassifyInstructions_IncludeInPartition((Data__Instruction)(int)reg);
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l3;
l0:
  i1 = *(int*)(i0-4);
  i1 = _type_test(i1, &Data__RegionDesc_td.td, 5);
  if (i1) goto l1;
  ValueNumbering__ClassifyInstructions_IncludeInPartition((Data__Instruction)i0);
  goto l2;
l1:
  ValueNumbering__ClassifyInstructions((Data__Region)i0);
l2:
  i1 = i0 + 36;
  i0 = (int)*(void**)i1;
  i1 = i0 != 0;
  if (i1) goto l0;
l3:
  ;
}

void ValueNumbering__CollectNonEmptyPartitions(void) {
  register int i0, i1, i2, i3;
  ValueNumbering__partitionList = (void*)0;
  ValueNumbering__sizeOnePartitions = (void*)0;
  i0 = 0;
l0:
  i3 = (int)_ashl(i0, 2, (unsigned int));
  i1 = (int)ValueNumbering__collectPartitions + i3;
  i2 = (int)*(void**)i1;
  i3 = i2 == 0;
  if (i3) goto l1;
  i3 = (int)ValueNumbering__partitionList;
  *(void**)i2 = (void*)i3;
  i2 = (int)*(void**)i1;
  ValueNumbering__partitionList = (void*)i2;
l1:
  i0++;
  i3 = i0 <= 591;
  if (i3) goto l0;
}

void ValueNumbering__PartitionByPredicate(ValueNumbering__MoveDifferentProc mdp) {
  register int i0, i1, i2, i3;
  ValueNumbering__Partition newParts;
  i2 = (int)ValueNumbering__partitionList;
  i0 = i2 == 0;
  if (i0) goto l4;
  i1 = 0;
l0:
  newParts = (void*)0;
  newParts = (void*)0;
  ((ValueNumbering__MoveDifferentProc)(int)mdp)((ValueNumbering__Partition)i2, (ValueNumbering__Partition *)(int)&newParts);
  i3 = (int)newParts == 0;
  if (i3) goto l2;
  i3 = i1 == 0;
  if (i3) goto l1;
  i3 = *(int*)((int)newParts-4);
  i3 = (int)((_Type)i3)->tbprocs[0];
  ((_TBP_ValueNumbering__PartitionDesc_Concatenate)i3)((ValueNumbering__Partition)(int)newParts, (ValueNumbering__Partition)i1);
l1:
  i1 = (int)newParts;
l2:
  i3 = (int)*(void**)i2;
  i3 = i3 != 0;
  if (i3) goto l3;
  i0 = i1 == 0;
  if (i0) goto l3;
  i0 = (int)ValueNumbering__partitionList;
  i3 = *(int*)(i0-4);
  i3 = (int)((_Type)i3)->tbprocs[0];
  ((_TBP_ValueNumbering__PartitionDesc_Concatenate)i3)((ValueNumbering__Partition)i0, (ValueNumbering__Partition)i1);
  i1 = 0;
l3:
  i2 = (int)*(void**)i2;
  i3 = i2 != 0;
  if (i3) goto l0;
l4:
  ;
}

void ValueNumbering__MoveDifferentSignature_MoveInstrIntoOwnPartition(ValueNumbering__Partition current, ValueNumbering__Partition *created) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i4 = *(int*)((int)current-4);
  i5 = (int)((_Type)i4)->tbprocs[3];
  *created = (void*)0;
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i5)((ValueNumbering__Partition)(int)current);
  i0 = i0 <= 1;
  if (i0) goto l1;
  i6 = (int)((_Type)i4)->tbprocs[4];
  i0 = (int)((_Type)i4)->tbprocs[2];
l0:
  i1 = (int)((_TBP_ValueNumbering__PartitionDesc_GetAnyInstruction)i6)((ValueNumbering__Partition)(int)current);
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i0)((ValueNumbering__Partition)(int)current, (ValueNumbering__InstrNode)i1);
  i2 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  i3 = *(int*)(i2-4);
  i4 = (int)*created;
  *(void**)i2 = (void*)i4;
  i3 = (int)((_Type)i3)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i3)((ValueNumbering__Partition)i2, (ValueNumbering__InstrNode)i1);
  *created = (void*)i2;
  i1 = ((_TBP_ValueNumbering__PartitionDesc_Size)i5)((ValueNumbering__Partition)(int)current);
  i1 = i1 > 1;
  if (i1) goto l0;
l1:
  ;
}

void ValueNumbering__MoveDifferentSignature(ValueNumbering__Partition current, ValueNumbering__Partition *created) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i5 = *(int*)((int)current-4);
  i0 = (int)((_Type)i5)->tbprocs[3];
  *created = (void*)0;
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)current);
  i0 = i0 <= 1;
  if (i0) goto l6;
  i4 = (int)current + 16;
  i0 = (int)*(void**)i4;
  i4 = i0 + 4;
  i1 = (int)*(void**)i4;
  i4 = ValueNumbering__OwnPartitionAsDefault((Data__Instruction)i1);
  if (i4) goto l5;
  i6 = Data__InstructionDesc_NumOfResults((Data__Instruction)i1);
  i3 = Data__InstructionDesc_NumOfOperands((Data__Instruction)i1);
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l6;
  i0 = (int)((_Type)i5)->tbprocs[2];
l0:
  i5 = i2 + 4;
  i4 = (int)*(void**)i2;
  i1 = (int)*(void**)i5;
  i1 = Data__InstructionDesc_NumOfOperands((Data__Instruction)i1);
  i1 = i1 != i3;
  if (i1) goto l1;
  i5 = (int)*(void**)i5;
  i5 = Data__InstructionDesc_NumOfResults((Data__Instruction)i5);
  i5 = i5 != i6;
  if (i5) goto l1;
  i1 = 0;
  goto l2;
l1:
  i1 = 1;
l2:
  if (!(i1)) goto l4;
  i5 = (int)*created;
  i5 = i5 != 0;
  if (i5) goto l3;
  i5 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  *created = (void*)i5;
l3:
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i0)((ValueNumbering__Partition)(int)current, (ValueNumbering__InstrNode)i2);
  i5 = (int)*created;
  i1 = *(int*)(i5-4);
  i1 = (int)((_Type)i1)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i1)((ValueNumbering__Partition)i5, (ValueNumbering__InstrNode)i2);
l4:
  i1 = i4 != 0;
  if (!(i1)) goto l6;
  i2 = i4;
  goto l0;
l5:
  i4 = (int)*created;
  ValueNumbering__MoveDifferentSignature_MoveInstrIntoOwnPartition((ValueNumbering__Partition)(int)current, (ValueNumbering__Partition *)(int)(int)created);
l6:
  ;
}

void ValueNumbering__PartitionBySignature(void) {
  ValueNumbering__PartitionByPredicate((ValueNumbering__MoveDifferentProc)(int)&ValueNumbering__MoveDifferentSignature);
}

void ValueNumbering__MoveDifferentOperand(ValueNumbering__Partition current, ValueNumbering__Partition *created) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
  *created = (void*)0;
  i0 = (int)current + 16;
  i7 = (int)*(void**)i0;
  i0 = i7 == 0;
  i1 = i7 + 4;
  i8 = (int)*(void**)i1;
  if (i0) goto l9;
  i0 = i8 + 28;
l0:
  i1 = i7 + 4;
  i1 = (int)*(void**)i1;
  i4 = (int)*(void**)i0;
  i9 = i1 + 28;
  i1 = i4 != 0;
  i3 = (int)*(void**)i7;
  i5 = (int)*(void**)i9;
  if (i1) goto l1;
  i6 = 0;
  goto l6;
l1:
  i2 = (int)*(void**)i5;
  i1 = (int)*(void**)i4;
  i6 = *(int*)(i2-4);
  i6 = _type_test(i6, &Data__ResultDesc_td.td, 3);
  i9 = *(int*)(i1-4);
  i1 = _type_test(i9, &Data__ResultDesc_td.td, 3);
  i6 = i1 != i6;
  if (i6) goto l3;
  if (i1) goto l2;
  i6 = ValueNumbering__SameOperandArgument((Data__Opnd)i4, (Data__Opnd)i5);
  if (i6) goto l4;
l2:
  if (!(i1)) goto l3;
  i2 = Data__ResultDesc_ResultIndex((Data__Result)i2);
  i1 = (int)*(void**)i4;
  i1 = Data__ResultDesc_ResultIndex((Data__Result)i1);
  i2 = i2 == i1;
  if (i2) goto l4;
l3:
  i1 = 0;
  goto l5;
l4:
  i1 = 1;
l5:
  i6 = i4 + 8;
  i4 = (int)*(void**)i6;
  i9 = i5 + 8;
  i6 = ! i1;
  i5 = (int)*(void**)i9;
  if (i6) goto l6;
  i1 = i4 != 0;
  if (i1) goto l1;
l6:
  if (!(i6)) goto l8;
  i9 = (int)*created;
  i9 = i9 != 0;
  if (i9) goto l7;
  i9 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  *created = (void*)i9;
l7:
  i9 = *(int*)((int)current-4);
  i9 = (int)((_Type)i9)->tbprocs[2];
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i9)((ValueNumbering__Partition)(int)current, (ValueNumbering__InstrNode)i7);
  i9 = (int)*created;
  i1 = *(int*)(i9-4);
  i1 = (int)((_Type)i1)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i1)((ValueNumbering__Partition)i9, (ValueNumbering__InstrNode)i7);
l8:
  i1 = i3 != 0;
  if (!(i1)) goto l9;
  i7 = i3;
  goto l0;
l9:
  ;
}

void ValueNumbering__PartitionByOperand(void) {
  ValueNumbering__PartitionByPredicate((ValueNumbering__MoveDifferentProc)(int)&ValueNumbering__MoveDifferentOperand);
}

void ValueNumbering__MoveDifferentLoopDependence(ValueNumbering__Partition current, ValueNumbering__Partition *created) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i5 = *(int*)((int)current-4);
  i0 = (int)((_Type)i5)->tbprocs[3];
  *created = (void*)0;
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)current);
  i0 = i0 <= 1;
  if (i0) goto l3;
  i4 = (int)current + 16;
  i1 = (int)*(void**)i4;
  i0 = (int)*(void**)i1;
  i4 = i0 == 0;
  if (i4) goto l3;
  i6 = i1 + 12;
  i4 = (int)((_Type)i5)->tbprocs[2];
l0:
  i2 = i0 + 12;
  i3 = (int)*(void**)i6;
  i2 = (int)*(void**)i2;
  i3 = i3 == i2;
  i2 = (int)*(void**)i0;
  if (i3) goto l2;
  i5 = (int)*created;
  i5 = i5 != 0;
  if (i5) goto l1;
  i5 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  *created = (void*)i5;
l1:
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i4)((ValueNumbering__Partition)(int)current, (ValueNumbering__InstrNode)i0);
  i5 = (int)*created;
  i3 = *(int*)(i5-4);
  i3 = (int)((_Type)i3)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i3)((ValueNumbering__Partition)i5, (ValueNumbering__InstrNode)i0);
l2:
  i3 = i2 != 0;
  if (!(i3)) goto l3;
  i0 = i2;
  goto l0;
l3:
  ;
}

void ValueNumbering__PartitionByLoopDependence(void) {
  ValueNumbering__PartitionByPredicate((ValueNumbering__MoveDifferentProc)(int)&ValueNumbering__MoveDifferentLoopDependence);
}

void ValueNumbering__MoveNotAvailable(ValueNumbering__Partition current, ValueNumbering__Partition *created) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i6 = *(int*)((int)current-4);
  i0 = (int)((_Type)i6)->tbprocs[3];
  *created = (void*)0;
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)current);
  i0 = i0 <= 1;
  if (i0) goto l7;
  i3 = (int)current + 16;
  i7 = (int)*(void**)i3;
  i2 = (int)*(void**)i7;
  i5 = i2 != 0;
  if (i5) goto l0;
  i1 = i7;
  goto l3;
l0:
  i1 = i7;
l1:
  i5 = i1 + 4;
  i5 = (int)*(void**)i5;
  i4 = i5 + 32;
  i5 = i2 + 4;
  i4 = (int)*(void**)i4;
  i5 = (int)*(void**)i5;
  i5 = ValueNumbering__Available((Data__Instruction)i5, (Data__Region)i4);
  if (!(i5)) goto l2;
  i1 = i2;
l2:
  i2 = (int)*(void**)i2;
  i5 = i2 != 0;
  if (i5) goto l1;
l3:
  i7 = (int)*(void**)i3;
  i5 = i7 == 0;
  if (i5) goto l7;
  i4 = (int)((_Type)i6)->tbprocs[2];
  i5 = i1 + 4;
l4:
  i3 = i7 != i1;
  i0 = (int)*(void**)i7;
  if (!(i3)) goto l6;
  i6 = i7 + 4;
  i6 = (int)*(void**)i6;
  i2 = i6 + 32;
  i6 = (int)*(void**)i5;
  i2 = (int)*(void**)i2;
  i2 = ValueNumbering__Available((Data__Instruction)i6, (Data__Region)i2);
  if (i2) goto l6;
  i3 = (int)*created;
  i3 = i3 != 0;
  if (i3) goto l5;
  i3 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  *created = (void*)i3;
l5:
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i4)((ValueNumbering__Partition)(int)current, (ValueNumbering__InstrNode)i7);
  i3 = (int)*created;
  i6 = *(int*)(i3-4);
  i6 = (int)((_Type)i6)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i6)((ValueNumbering__Partition)i3, (ValueNumbering__InstrNode)i7);
l6:
  i3 = i0 != 0;
  if (!(i3)) goto l7;
  i7 = i0;
  goto l4;
l7:
  ;
}

void ValueNumbering__PartitionByAvailability(void) {
  ValueNumbering__PartitionByPredicate((ValueNumbering__MoveDifferentProc)(int)&ValueNumbering__MoveNotAvailable);
}

void ValueNumbering__StripUnusedPartitions(ValueNumbering__Partition *partitionList, ValueNumbering__Partition *sizeOnePartitions) {
  register int i0, i1, i2, i3, i4;
  i3 = (int)*partitionList;
  i0 = i3 == 0;
  if (i0) goto l6;
  i2 = 0;
l0:
  i1 = *(int*)(i3-4);
  i4 = (int)*(void**)i3;
  i0 = (int)((_Type)i1)->tbprocs[5];
  i0 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i0)((ValueNumbering__Partition)i3);
  if (i0) goto l2;
  i0 = (int)((_Type)i1)->tbprocs[3];
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)i3);
  i0 = i0 != 1;
  if (i0) goto l1;
  i0 = i3 + 29;
  i0 = *(unsigned char*)i0;
  if (i0) goto l2;
l1:
  i2 = i3;
  goto l5;
l2:
  i0 = i2 == 0;
  if (i0) goto l3;
  i0 = (int)*(void**)i3;
  *(void**)i2 = (void*)i0;
  goto l4;
l3:
  i0 = (int)*(void**)i3;
  *partitionList = (void*)i0;
l4:
  i1 = (int)((_Type)i1)->tbprocs[3];
  i1 = ((_TBP_ValueNumbering__PartitionDesc_Size)i1)((ValueNumbering__Partition)i3);
  i1 = i1 != 1;
  if (i1) goto l5;
  i1 = (int)*sizeOnePartitions;
  *(void**)i3 = (void*)i1;
  *sizeOnePartitions = (void*)i3;
l5:
  i0 = i4 != 0;
  if (!(i0)) goto l6;
  i3 = i4;
  goto l0;
l6:
  ;
}

int ValueNumbering__GetMaxOpndPos(ValueNumbering__InstrList instrList) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i0 = (int)instrList != 0;
  if (i0) goto l0;
  i6 = -1;
  goto l7;
l0:
  i5 = (int)instrList;
  i6 = -1;
l1:
  i0 = i5 + 4;
  i3 = (int)*(void**)i0;
  i0 = i3 == 0;
  if (i0) goto l6;
  i4 = i6;
l2:
  i1 = (int)*(void**)i3;
  i0 = i1 == 0;
  if (i0) goto l5;
  i2 = i4;
l3:
  i0 = Data__OpndDesc_OperandIndex((Data__Opnd)i1);
  i0 = i2 >= i0;
  if (i0) goto l4;
  i2 = Data__OpndDesc_OperandIndex((Data__Opnd)i1);
l4:
  i0 = i1 + 4;
  i1 = (int)*(void**)i0;
  i0 = i1 != 0;
  if (i0) goto l3;
  i4 = i2;
l5:
  i0 = i3 + 12;
  i3 = (int)*(void**)i0;
  i0 = i3 != 0;
  if (i0) goto l2;
  i6 = i4;
l6:
  i5 = (int)*(void**)i5;
  i0 = i5 != 0;
  if (i0) goto l1;
l7:
  return (int)i6;
}

void ValueNumbering__GetSplittedPartitions(ValueNumbering__Partition *splittedPartitions, ValueNumbering__InstrList instrList, int opndPos) {
  register int i0, i1, i2, i3, i4;
  *splittedPartitions = (void*)0;
  i0 = (int)instrList == 0;
  if (i0) goto l6;
  i3 = (int)instrList;
l0:
  i4 = i3 + 4;
  i2 = (int)*(void**)i4;
  i4 = i2 == 0;
  if (i4) goto l5;
l1:
  i1 = (int)*(void**)i2;
  i4 = i1 == 0;
  if (i4) goto l4;
l2:
  i4 = Data__OpndDesc_OperandIndex((Data__Opnd)i1);
  i4 = opndPos != i4;
  if (i4) goto l3;
  i0 = i1 + 12;
  i0 = (int)*(void**)i0;
  i0 += 4;
  i0 = (int)*(void**)i0;
  i0 += 8;
  i4 = (int)*(void**)i0;
  i0 = (int)*splittedPartitions;
  ValueNumbering__AddToWorklistUnique((ValueNumbering__Partition *)(int)(int)splittedPartitions, (ValueNumbering__Partition)i4);
l3:
  i4 = i1 + 4;
  i1 = (int)*(void**)i4;
  i4 = i1 != 0;
  if (i4) goto l2;
l4:
  i4 = i2 + 12;
  i2 = (int)*(void**)i4;
  i4 = i2 != 0;
  if (i4) goto l1;
l5:
  i3 = (int)*(void**)i3;
  i4 = i3 != 0;
  if (i4) goto l0;
l6:
  ;
}

unsigned char ValueNumbering__HasOpndAtIn(Data__Instruction instr, int at, ValueNumbering__InstrList in) {
  register int i0, i1, i2, i3;
  i0 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)(int)instr, (short int)at);
  i0 = (int)*(void**)i0;
  i1 = i0 + 16;
  i0 = (int)in != 0;
  i2 = (int)*(void**)i1;
  if (i0) goto l0;
  i3 = 0;
  goto l2;
l0:
  i0 = (int)in;
l1:
  i3 = i0 + 4;
  i3 = (int)*(void**)i3;
  i3 = i3 == i2;
  i0 = (int)*(void**)i0;
  if (i3) goto l2;
  i1 = i0 != 0;
  if (i1) goto l1;
l2:
  return (unsigned char)i3;
}

void ValueNumbering__SplitPartitions_SplitByPartition_SplitPartitionByAt(ValueNumbering__Partition split, ValueNumbering__Partition by, int at, ValueNumbering__InstrList instrList, ValueNumbering__Partition *ValueNumbering__SplitPartitions_SplitByPartition_created, unsigned char *ValueNumbering__SplitPartitions_fixpoint) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
  i9 = *(int*)((int)split-4);
  i0 = (int)((_Type)i9)->tbprocs[3];
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)split);
  i0 = i0 <= 1;
  if (i0) goto l8;
  i1 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)(int)split);
  i10 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)(int)split);
  i8 = (int)split + 4;
  i2 = (int)((_Type)i9)->tbprocs[5];
  *(void**)i8 = (void*)(int)by;
  i7 = (int)split + 8;
  i8 = *(int*)(i1-4);
  i3 = *(int*)(i10-4);
  *(int*)i7 = at;
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i2)((ValueNumbering__Partition)(int)split);
  if (i7) goto l3;
  i6 = (int)((_Type)i9)->tbprocs[4];
  i4 = (int)((_Type)i9)->tbprocs[2];
  i5 = (int)((_Type)i8)->tbprocs[1];
  i7 = (int)((_Type)i3)->tbprocs[1];
l0:
  i0 = (int)((_TBP_ValueNumbering__PartitionDesc_GetAnyInstruction)i6)((ValueNumbering__Partition)(int)split);
  i9 = i0 + 4;
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i4)((ValueNumbering__Partition)(int)split, (ValueNumbering__InstrNode)i0);
  i9 = (int)*(void**)i9;
  i9 = ValueNumbering__HasOpndAtIn((Data__Instruction)i9, (int)at, (ValueNumbering__InstrList)(int)instrList);
  if (i9) goto l1;
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i7)((ValueNumbering__Partition)i10, (ValueNumbering__InstrNode)i0);
  goto l2;
l1:
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i5)((ValueNumbering__Partition)i1, (ValueNumbering__InstrNode)i0);
l2:
  i0 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i2)((ValueNumbering__Partition)(int)split);
  if (!(i0)) goto l0;
l3:
  i7 = (int)((_Type)i3)->tbprocs[5];
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i7)((ValueNumbering__Partition)i10);
  if (i7) goto l4;
  i7 = (int)*ValueNumbering__SplitPartitions_SplitByPartition_created;
  *(void**)i10 = (void*)i7;
   *ValueNumbering__SplitPartitions_SplitByPartition_created = (void*)i10;
  goto l5;
l4:
  i6 = i1 + 29;
  i7 = (int)split + 29;
  i7 = *(unsigned char*)i7;
  *(unsigned char*)i6 = i7;
  i10 = 0;
l5:
  i8 = (int)((_Type)i8)->tbprocs[5];
  i8 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i8)((ValueNumbering__Partition)i1);
  if (i8) goto l6;
  i8 = (int)*ValueNumbering__SplitPartitions_SplitByPartition_created;
  *(void**)i1 = (void*)i8;
   *ValueNumbering__SplitPartitions_SplitByPartition_created = (void*)i1;
  goto l7;
l6:
  i7 = (int)split + 29;
  i7 = *(unsigned char*)i7;
  i8 = i10 + 29;
  *(unsigned char*)i8 = i7;
  i1 = 0;
l7:
  i8 = i1 != 0;
  if (!(i8)) goto l8;
  i10 = i10 == 0;
  if (i10) goto l8;
  *ValueNumbering__SplitPartitions_fixpoint = 0;
l8:
  ;
}

void ValueNumbering__SplitPartitions_SplitByPartition(ValueNumbering__Partition splittingPart, ValueNumbering__Partition *created, ValueNumbering__Partition *ValueNumbering__SplitPartitions_current, unsigned char *ValueNumbering__SplitPartitions_fixpoint) {
  register int i0, i1, i2, i3, i4, i5, i6;
  ValueNumbering__Partition splittedPartitions;
  i0 = (int)*ValueNumbering__SplitPartitions_current;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[6];
  i4 = (int)((_TBP_ValueNumbering__PartitionDesc_CreateInstrList)i1)((ValueNumbering__Partition)i0);
  i0 = ValueNumbering__GetMaxOpndPos((ValueNumbering__InstrList)i4);
  i5 = i0 + 1;
  i0 = i5 >= 0;
  if (i0) goto l0;
  i6 = 0;
  goto l7;
l0:
  i1 = 0;
  i2 = 0;
l1:
  splittedPartitions = (void*)i2;
  splittedPartitions = (void*)i2;
  ValueNumbering__GetSplittedPartitions((ValueNumbering__Partition *)(int)&splittedPartitions, (ValueNumbering__InstrList)i4, (int)i1);
  i0 = (int)splittedPartitions;
  i2 = (int)*ValueNumbering__SplitPartitions_current;
  i6 = ValueNumbering__PartitionInWorklist((ValueNumbering__Partition)i2, (ValueNumbering__Partition)i0);
  if (i6) goto l4;
  i3 = i0 == 0;
  if (i3) goto l3;
  i2 = i0;
l2:
  i3 = (int)*ValueNumbering__SplitPartitions_current;
  ValueNumbering__SplitPartitions_SplitByPartition_SplitPartitionByAt((ValueNumbering__Partition)i2, (ValueNumbering__Partition)i3, (int)i1, (ValueNumbering__InstrList)i4, (ValueNumbering__Partition *)&*created, &*ValueNumbering__SplitPartitions_fixpoint);
  i3 = i2 + 24;
  i2 = (int)*(void**)i3;
  i3 = i2 != 0;
  if (i3) goto l2;
l3:
  i2 = i0;
  goto l5;
l4:
  ValueNumbering__SplitPartitions_SplitByPartition_SplitPartitionByAt((ValueNumbering__Partition)i2, (ValueNumbering__Partition)i2, (int)i1, (ValueNumbering__InstrList)i4, (ValueNumbering__Partition *)&*created, &*ValueNumbering__SplitPartitions_fixpoint);
  splittedPartitions = (void*)i0;
  ValueNumbering__ClearWorklist((ValueNumbering__Partition *)(int)&splittedPartitions);
  i2 = (int)splittedPartitions;
l5:
  if (i6) goto l6;
  splittedPartitions = (void*)i0;
  ValueNumbering__ClearWorklist((ValueNumbering__Partition *)(int)&splittedPartitions);
  i2 = (int)splittedPartitions;
l6:
  i1++;
  if (i6) goto l7;
  i0 = i1 <= i5;
  if (i0) goto l1;
l7:
  if (i6) goto l8;
  i1 = (int)*ValueNumbering__SplitPartitions_current;
  i0 = i1 + 29;
  *(unsigned char*)i0 = 1;
l8:
  ;
}

void ValueNumbering__SplitPartitions(void) {
  register int i0, i1, i2, i3, i4;
  ValueNumbering__Partition current;
  unsigned char fixpoint;
  ValueNumbering__Partition newParts;
l0:
  i4 = (int)ValueNumbering__partitionList;
  i3 = (int)ValueNumbering__sizeOnePartitions;
  ValueNumbering__StripUnusedPartitions((ValueNumbering__Partition *)(int)(int)&ValueNumbering__partitionList, (ValueNumbering__Partition *)(int)(int)&ValueNumbering__sizeOnePartitions);
  i1 = (int)ValueNumbering__partitionList;
  i4 = i1 != 0;
  if (i4) goto l1;
  i0 = 1;
  goto l8;
l1:
  i0 = 1;
  i3 = 0;
l2:
  i4 = i1 + 29;
  i4 = *(unsigned char*)i4;
  if (i4) goto l6;
  i2 = *(int*)(i1-4);
  i2 = (int)((_Type)i2)->tbprocs[5];
  i4 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i2)((ValueNumbering__Partition)i1);
  if (i4) goto l6;
  current = (void*)i1;
  fixpoint = (unsigned char)i0;
  current = (void*)i1;
  fixpoint = (unsigned char)i0;
  newParts = (void*)0;
  newParts = (void*)0;
  ValueNumbering__SplitPartitions_SplitByPartition((ValueNumbering__Partition)i1, (ValueNumbering__Partition *)(int)&newParts, (ValueNumbering__Partition *)&current, &fixpoint);
  i2 = (int)newParts != 0;
  if (i2) goto l3;
  i2 = i3;
  goto l5;
l3:
  i2 = i3 == 0;
  if (i2) goto l4;
  i2 = *(int*)((int)newParts-4);
  i2 = (int)((_Type)i2)->tbprocs[0];
  ((_TBP_ValueNumbering__PartitionDesc_Concatenate)i2)((ValueNumbering__Partition)(int)newParts, (ValueNumbering__Partition)i3);
l4:
  i2 = (int)newParts;
l5:
  i3 = i2;
  i0 = fixpoint;
  i1 = (int)current;
l6:
  i4 = (int)*(void**)i1;
  i4 = i4 != 0;
  if (i4) goto l7;
  i4 = i3 == 0;
  if (i4) goto l7;
  i4 = (int)ValueNumbering__partitionList;
  i2 = *(int*)(i4-4);
  i2 = (int)((_Type)i2)->tbprocs[0];
  ((_TBP_ValueNumbering__PartitionDesc_Concatenate)i2)((ValueNumbering__Partition)i4, (ValueNumbering__Partition)i3);
  i3 = 0;
l7:
  i1 = (int)*(void**)i1;
  i4 = i1 != 0;
  if (i4) goto l2;
l8:
  if (!(i0)) goto l0;
}

void ValueNumbering__CSE_Eliminate(ValueNumbering__Partition part, ValueNumbering__Partition *ValueNumbering__CSE_other) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  i7 = *(int*)((int)part-4);
  i0 = (int)((_Type)i7)->tbprocs[3];
  i0 = ((_TBP_ValueNumbering__PartitionDesc_Size)i0)((ValueNumbering__Partition)(int)part);
  i0 = i0 <= 1;
  if (i0) goto l8;
  i0 = (int)((_Type)i7)->tbprocs[4];
  i4 = (int)((_TBP_ValueNumbering__PartitionDesc_GetAnyInstruction)i0)((ValueNumbering__Partition)(int)part);
  i3 = (int)((_Type)i7)->tbprocs[2];
  i2 = (int)((_Type)i7)->tbprocs[5];
  i7 = i4 + 4;
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i3)((ValueNumbering__Partition)(int)part, (ValueNumbering__InstrNode)i4);
  i8 = (int)*(void**)i7;
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i2)((ValueNumbering__Partition)(int)part);
  if (i7) goto l3;
  i1 = i8;
l0:
  i6 = (int)((_TBP_ValueNumbering__PartitionDesc_GetAnyInstruction)i0)((ValueNumbering__Partition)(int)part);
  i7 = i6 + 4;
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i3)((ValueNumbering__Partition)(int)part, (ValueNumbering__InstrNode)i6);
  i5 = (int)*(void**)i7;
  i5 += 32;
  i5 = (int)*(void**)i5;
  i5 = ValueNumbering__Available((Data__Instruction)i1, (Data__Region)i5);
  if (i5) goto l1;
  i1 = (int)*ValueNumbering__CSE_other;
  i5 = *(int*)(i1-4);
  i5 = (int)((_Type)i5)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i5)((ValueNumbering__Partition)i1, (ValueNumbering__InstrNode)i4);
  i1 = (int)*(void**)i7;
  i4 = i6;
  goto l2;
l1:
  i7 = (int)*ValueNumbering__CSE_other;
  i5 = *(int*)(i7-4);
  i5 = (int)((_Type)i5)->tbprocs[1];
  ((_TBP_ValueNumbering__PartitionDesc_IncludeInstrNode)i5)((ValueNumbering__Partition)i7, (ValueNumbering__InstrNode)i6);
l2:
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i2)((ValueNumbering__Partition)(int)part);
  if (!(i7)) goto l0;
  goto l4;
l3:
  i1 = i8;
l4:
  i7 = (int)*ValueNumbering__CSE_other;
  i6 = *(int*)(i7-4);
  i6 = (int)((_Type)i6)->tbprocs[5];
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i6)((ValueNumbering__Partition)i7);
  if (i7) goto l8;
l5:
  i7 = (int)*ValueNumbering__CSE_other;
  i6 = *(int*)(i7-4);
  i6 = (int)((_Type)i6)->tbprocs[4];
  i7 = (int)((_TBP_ValueNumbering__PartitionDesc_GetAnyInstruction)i6)((ValueNumbering__Partition)i7);
  i6 = (int)*ValueNumbering__CSE_other;
  i3 = *(int*)(i6-4);
  i3 = (int)((_Type)i3)->tbprocs[2];
  ((_TBP_ValueNumbering__PartitionDesc_ExcludeInstrNode)i3)((ValueNumbering__Partition)i6, (ValueNumbering__InstrNode)i7);
  i7 += 4;
  i4 = (int)*(void**)i7;
  i7 = i4 == 0;
  if (i7) goto l7;
  i5 = i1;
  i3 = i4;
l6:
  i7 = *(int*)(i3-4);
  i7 = (int)((_Type)i7)->tbprocs[1];
  i6 = i3 + 12;
  ((_TBP_Data__UsableDesc_ReplaceUses)i7)((Data__Usable)i3, (Data__Usable)i5);
  i3 = (int)*(void**)i6;
  i6 = i5 + 12;
  i7 = i3 != 0;
  i5 = (int)*(void**)i6;
  if (i7) goto l6;
l7:
  Data__InstructionDesc_Delete((Data__Instruction)i4);
  i7 = (int)*ValueNumbering__CSE_other;
  i6 = *(int*)(i7-4);
  i6 = (int)((_Type)i6)->tbprocs[5];
  i7 = ((_TBP_ValueNumbering__PartitionDesc_IsEmpty)i6)((ValueNumbering__Partition)i7);
  if (!(i7)) goto l5;
l8:
  ;
}

void ValueNumbering__CSE(void) {
  register int i0, i1, i2;
  ValueNumbering__Partition other;
  i1 = (int)ValueNumbering__NewPartition((ValueNumbering__Partition)0);
  i2 = (int)ValueNumbering__partitionList;
  i0 = i2 == 0;
  if (i0) goto l1;
l0:
  other = (void*)i1;
  other = (void*)i1;
  ValueNumbering__CSE_Eliminate((ValueNumbering__Partition)i2, (ValueNumbering__Partition *)&other);
  i2 = (int)*(void**)i2;
  i1 = i2 == 0;
  if (i1) goto l1;
  i1 = (int)other;
  goto l0;
l1:
  ;
}

void ValueNumbering__Number(Data__Region greg) {
  ValueNumbering__Normalize((Data__Region)(int)greg);
  ValueNumbering__InitCollectPartitions();
  ValueNumbering__ClassifyInstructions((Data__Region)(int)greg);
  ValueNumbering__CollectNonEmptyPartitions();
  ValueNumbering__InitCollectPartitions();
  Data__GlobalRegionDesc_NumberDominanceTree((Data__GlobalRegion)(int)greg);
  ValueNumbering__MarkLoopDependentInstr((Data__Region)(int)greg);
  ValueNumbering__PartitionBySignature();
  ValueNumbering__PartitionByOperand();
  ValueNumbering__PartitionByLoopDependence();
  ValueNumbering__SplitPartitions();
  ValueNumbering__PartitionByAvailability();
  ValueNumbering__CSE();
}

void ValueNumbering_init(void) {
  _mid = _register_module(&ValueNumbering_md.md, &ValueNumbering__InstrNodeDesc_td.td);
}
