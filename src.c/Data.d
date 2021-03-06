/* file generated by oo2c -- do not edit */
#include "Data.h"
#include "Opcode.h"
#include "Strings.h"

/* local definitions */
unsigned int Data__setMask[4];
Data__Struct Data__struct[22];
static Data__Const Data__constList[128];
Data__Const Data__constNil;
Data__Const Data__constUndef;
static Data__Const Data__constRange;
static short int Data__i;

/* function prototypes */
void Data__InitUsable(Data__Usable u);
void Data__InitOpnd(Data__Opnd opnd);
void Data__InitResult(Data__Result res, Data__Struct type);
void Data__InitAddressable(Data__Addressable a);
void Data__InitInstruction(Data__Instruction instr, Data__Struct type, int pos);
void Data__InsertUse(Data__Usable arg, Data__Opnd opnd);
void Data__DeleteUse(Data__Opnd opnd);
void Data__InstructionDesc_Operand_Append(Data__Opnd *opnd, Data__Instruction *Data__InstructionDesc_Operand_instr, Data__Usable *Data__InstructionDesc_Operand_arg);
void Data__InstructionDesc_InsertOperand_Insert(Data__Opnd *list, Data__Instruction *Data__InstructionDesc_InsertOperand_instr, Data__Usable *Data__InstructionDesc_InsertOperand_arg);
void Data__InstructionDesc_UniqueOperand_Append(Data__Opnd *opnd, Data__Instruction *Data__InstructionDesc_UniqueOperand_instr, Data__Location *Data__InstructionDesc_UniqueOperand_loc, Data__Usable *Data__InstructionDesc_UniqueOperand_arg);
Data__Result Data__InstructionDesc_AppendResult_Append(Data__Result *res, Data__Struct *Data__InstructionDesc_AppendResult_type, Data__Location *Data__InstructionDesc_AppendResult_location, Data__Instruction *Data__InstructionDesc_AppendResult_instr);
void Data__RemoveFromInstrList(Data__Instruction instr);
void Data__RemoveFromRegionList(Data__Region instr);
Data__Const Data__NewConst(Data__Struct type, int hash);
unsigned char Data__GetStringConst_Neq(unsigned char* a, int a_0d, unsigned char* b, int b_0d, int lena, int lenb, int *Data__GetStringConst_i, int *Data__GetStringConst_sizeChar);
Data__Const Data__ConvertString_To8(unsigned char* buffer, int buffer_0d, unsigned char* source, int source_0d, int len);
Data__Const Data__ConvertString_To16(unsigned char* buffer, int buffer_0d, unsigned char* source, int source_0d, int len);
void Data__FreeConsts_FreeList(Data__Const *c);
void Data__SortRanges_Insert(Data__Opnd *list, Data__Opnd opnd);
void Data__GlobalRegionDesc_NumberDominanceTree_RecNumberTree(Data__Region reg, short int *counter);
unsigned char Data__OpndDesc_GetFormalParam_OpndPartOfParam(Data__Object param, Data__Opnd *paramOpnd, Data__Opnd *Data__OpndDesc_GetFormalParam_opnd);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[20];
} _p0 = {20, NULL, {
  (const void*)&Data__CompareStrings,
  (const void*)&Data__ConvertString,
  (const void*)&Data__CreateGuard,
  (const void*)&Data__CreateMerge,
  (const void*)&Data__CreateSymLocation,
  (const void*)&Data__FreeConsts,
  (const void*)&Data__GetIntConst,
  (const void*)&Data__GetRangeConst,
  (const void*)&Data__GetRealConst,
  (const void*)&Data__GetSetConst,
  (const void*)&Data__GetStringConst,
  (const void*)&Data__InitConst,
  (const void*)&Data__InitGuard,
  (const void*)&Data__InitObject,
  (const void*)&Data__InitRegion,
  (const void*)&Data__InitStruct,
  (const void*)&Data__OperatorSubclass,
  (const void*)&Data__SortRanges,
  (const void*)&Data__TransferOperandList,
  (const void*)&Data__TransferResultList,
}};
static const struct {
  int length;
  void* pad;
  const void* list[4];
} _p1 = {4, NULL, {
  (const void*)&Data__constNil,
  (const void*)&Data__constUndef,
  (const void*)&Data__setMask,
  (const void*)&Data__struct,
}};
static const struct {
  int length;
  void* pad;
  const char name[5];
} _n0 = {5, NULL, {"Data"}};
static struct _MD Data_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -919271629
  }
};

static const struct {
  int length;
  void* pad;
  const char name[9];
} _n1 = {9, NULL, {"InfoDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Data__InfoDesc_tdb = {
  1, 
  NULL, 
  {
    &Data__InfoDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD Data__InfoDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__InfoDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &Data_md.md,
    0, 
    '0', '1',
    sizeof(Data__InfoDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[9];
} _n2 = {9, NULL, {"NodeDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} Data__NodeDesc_tdb = {
  2, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb1 = {1, NULL, {
  (void*)Data__NodeDesc_Greg
}};
struct _TD Data__NodeDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__NodeDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &Data_md.md,
    1, 
    '0', '1',
    sizeof(Data__NodeDesc),
    &Data__InfoDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n3 = {11, NULL, {"UsableDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[3];
} Data__UsableDesc_tdb = {
  3, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[2];
} _tb2 = {2, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses
}};
struct _TD Data__UsableDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__UsableDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &Data_md.md,
    2, 
    '0', '1',
    sizeof(Data__UsableDesc),
    &Data__NodeDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[13];
} _n4 = {13, NULL, {"LocationDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} Data__LocationDesc_tdb = {
  2, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__LocationDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb3 = {0, NULL, {
  NULL
}};
struct _TD Data__LocationDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__LocationDesc_tdb.btypes,
    _tb3.tbprocs,
    (const unsigned char*)_n4.name,
    &Data_md.md,
    1, 
    '0', '1',
    sizeof(Data__LocationDesc),
    &Data__UsableDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[16];
} _n5 = {16, NULL, {"SymLocationDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[3];
} Data__SymLocationDesc_tdb = {
  3, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__LocationDesc_td.td, 
    &Data__SymLocationDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb4 = {0, NULL, {
  NULL
}};
struct _TD Data__SymLocationDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__SymLocationDesc_tdb.btypes,
    _tb4.tbprocs,
    (const unsigned char*)_n5.name,
    &Data_md.md,
    2, 
    '0', '1',
    sizeof(Data__SymLocationDesc),
    &Data__LocationDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[9];
} _n6 = {9, NULL, {"OpndDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[3];
} Data__OpndDesc_tdb = {
  3, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__OpndDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[10];
} _tb5 = {10, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__OpndDesc_SwapArguments, 
  (void*)Data__OpndDesc_DeleteOperand, 
  (void*)Data__OpndDesc_ReplaceOperand, 
  (void*)Data__OpndDesc_MoveOperandToEnd, 
  (void*)Data__OpndDesc_OpndType, 
  (void*)Data__OpndDesc_OperandIndex, 
  (void*)Data__OpndDesc_ValueOperand, 
  (void*)Data__OpndDesc_PassThroughOperand, 
  (void*)Data__OpndDesc_GetFormalParam
}};
struct _TD Data__OpndDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__OpndDesc_tdb.btypes,
    _tb5.tbprocs,
    (const unsigned char*)_n6.name,
    &Data_md.md,
    2, 
    '0', '1',
    sizeof(Data__OpndDesc),
    &Data__SymLocationDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[10];
} _n7 = {10, NULL, {"ConstDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[4];
} Data__ConstDesc_tdb = {
  4, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ConstDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[2];
} _tb6 = {2, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses
}};
struct _TD Data__ConstDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__ConstDesc_tdb.btypes,
    _tb6.tbprocs,
    (const unsigned char*)_n7.name,
    &Data_md.md,
    3, 
    '0', '1',
    sizeof(Data__ConstDesc),
    &Data__OpndDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n8 = {11, NULL, {"ResultDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[4];
} Data__ResultDesc_tdb = {
  4, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[5];
} _tb7 = {5, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex
}};
struct _TD Data__ResultDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__ResultDesc_tdb.btypes,
    _tb7.tbprocs,
    (const unsigned char*)_n8.name,
    &Data_md.md,
    3, 
    '0', '1',
    sizeof(Data__ResultDesc),
    &Data__ConstDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[16];
} _n9 = {16, NULL, {"AddressableDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[4];
} Data__AddressableDesc_tdb = {
  4, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__AddressableDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[2];
} _tb8 = {2, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses
}};
struct _TD Data__AddressableDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__AddressableDesc_tdb.btypes,
    _tb8.tbprocs,
    (const unsigned char*)_n9.name,
    &Data_md.md,
    3, 
    '0', '1',
    sizeof(Data__AddressableDesc),
    &Data__ResultDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n10 = {11, NULL, {"ObjectDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[5];
} Data__ObjectDesc_tdb = {
  5, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__AddressableDesc_td.td, 
    &Data__ObjectDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[3];
} _tb9 = {3, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ObjectDesc_Module
}};
struct _TD Data__ObjectDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__ObjectDesc_tdb.btypes,
    _tb9.tbprocs,
    (const unsigned char*)_n10.name,
    &Data_md.md,
    4, 
    '0', '1',
    sizeof(Data__ObjectDesc),
    &Data__AddressableDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n11 = {11, NULL, {"StructDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[5];
} Data__StructDesc_tdb = {
  5, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__AddressableDesc_td.td, 
    &Data__StructDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[4];
} _tb10 = {4, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__StructDesc_OpenDimensions, 
  (void*)Data__StructDesc_Dimensions
}};
struct _TD Data__StructDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__StructDesc_tdb.btypes,
    _tb10.tbprocs,
    (const unsigned char*)_n11.name,
    &Data_md.md,
    4, 
    '0', '1',
    sizeof(Data__StructDesc),
    &Data__ObjectDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[16];
} _n12 = {16, NULL, {"InstructionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[5];
} Data__InstructionDesc_tdb = {
  5, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[28];
} _tb11 = {28, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver
}};
struct _TD Data__InstructionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__InstructionDesc_tdb.btypes,
    _tb11.tbprocs,
    (const unsigned char*)_n12.name,
    &Data_md.md,
    4, 
    '0', '1',
    sizeof(Data__InstructionDesc),
    &Data__StructDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[9];
} _n13 = {9, NULL, {"GateDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[6];
} Data__GateDesc_tdb = {
  6, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td, 
    &Data__GateDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[28];
} _tb12 = {28, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver
}};
struct _TD Data__GateDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__GateDesc_tdb.btypes,
    _tb12.tbprocs,
    (const unsigned char*)_n13.name,
    &Data_md.md,
    5, 
    '0', '1',
    sizeof(Data__GateDesc),
    &Data__InstructionDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n14 = {11, NULL, {"RegionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[6];
} Data__RegionDesc_tdb = {
  6, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td, 
    &Data__RegionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[44];
} _tb13 = {44, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver, 
  (void*)Data__RegionDesc_Insert, 
  (void*)Data__RegionDesc_ReverseInstr, 
  (void*)Data__RegionDesc_MoveInstruction, 
  (void*)Data__RegionDesc_MoveInstructions, 
  (void*)Data__RegionDesc_CreateInstruction, 
  (void*)Data__RegionDesc_EnterInstr, 
  (void*)Data__RegionDesc_ExitInstr, 
  (void*)Data__RegionDesc_ClearInfo, 
  (void*)Data__RegionDesc_ClearInstrInfo, 
  (void*)Data__RegionDesc_ClearRegionInfo, 
  (void*)Data__RegionDesc_Dominates, 
  (void*)Data__RegionDesc_DominatesNR, 
  (void*)Data__RegionDesc_RegionMerge, 
  (void*)Data__RegionDesc_CreateAdrInstr, 
  (void*)Data__RegionDesc_CreateDyadicOp, 
  (void*)Data__RegionDesc_CreateTypeCast
}};
struct _TD Data__RegionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__RegionDesc_tdb.btypes,
    _tb13.tbprocs,
    (const unsigned char*)_n14.name,
    &Data_md.md,
    5, 
    '0', '1',
    sizeof(Data__RegionDesc),
    &Data__GateDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[10];
} _n15 = {10, NULL, {"GuardDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[7];
} Data__GuardDesc_tdb = {
  7, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td, 
    &Data__RegionDesc_td.td, 
    &Data__GuardDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[44];
} _tb14 = {44, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver, 
  (void*)Data__RegionDesc_Insert, 
  (void*)Data__RegionDesc_ReverseInstr, 
  (void*)Data__RegionDesc_MoveInstruction, 
  (void*)Data__RegionDesc_MoveInstructions, 
  (void*)Data__RegionDesc_CreateInstruction, 
  (void*)Data__RegionDesc_EnterInstr, 
  (void*)Data__RegionDesc_ExitInstr, 
  (void*)Data__RegionDesc_ClearInfo, 
  (void*)Data__RegionDesc_ClearInstrInfo, 
  (void*)Data__RegionDesc_ClearRegionInfo, 
  (void*)Data__RegionDesc_Dominates, 
  (void*)Data__RegionDesc_DominatesNR, 
  (void*)Data__RegionDesc_RegionMerge, 
  (void*)Data__RegionDesc_CreateAdrInstr, 
  (void*)Data__RegionDesc_CreateDyadicOp, 
  (void*)Data__RegionDesc_CreateTypeCast
}};
struct _TD Data__GuardDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__GuardDesc_tdb.btypes,
    _tb14.tbprocs,
    (const unsigned char*)_n15.name,
    &Data_md.md,
    6, 
    '0', '1',
    sizeof(Data__GuardDesc),
    &Data__RegionDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[10];
} _n16 = {10, NULL, {"MergeDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[7];
} Data__MergeDesc_tdb = {
  7, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td, 
    &Data__RegionDesc_td.td, 
    &Data__MergeDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[45];
} _tb15 = {45, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver, 
  (void*)Data__RegionDesc_Insert, 
  (void*)Data__RegionDesc_ReverseInstr, 
  (void*)Data__RegionDesc_MoveInstruction, 
  (void*)Data__RegionDesc_MoveInstructions, 
  (void*)Data__RegionDesc_CreateInstruction, 
  (void*)Data__RegionDesc_EnterInstr, 
  (void*)Data__RegionDesc_ExitInstr, 
  (void*)Data__RegionDesc_ClearInfo, 
  (void*)Data__RegionDesc_ClearInstrInfo, 
  (void*)Data__RegionDesc_ClearRegionInfo, 
  (void*)Data__RegionDesc_Dominates, 
  (void*)Data__RegionDesc_DominatesNR, 
  (void*)Data__RegionDesc_RegionMerge, 
  (void*)Data__RegionDesc_CreateAdrInstr, 
  (void*)Data__RegionDesc_CreateDyadicOp, 
  (void*)Data__RegionDesc_CreateTypeCast, 
  (void*)Data__MergeDesc_CreateGate
}};
struct _TD Data__MergeDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__MergeDesc_tdb.btypes,
    _tb15.tbprocs,
    (const unsigned char*)_n16.name,
    &Data_md.md,
    6, 
    '0', '1',
    sizeof(Data__MergeDesc),
    &Data__GuardDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[17];
} _n17 = {17, NULL, {"GlobalRegionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[8];
} Data__GlobalRegionDesc_tdb = {
  8, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Data__NodeDesc_td.td, 
    &Data__UsableDesc_td.td, 
    &Data__ResultDesc_td.td, 
    &Data__InstructionDesc_td.td, 
    &Data__RegionDesc_td.td, 
    &Data__GuardDesc_td.td, 
    &Data__GlobalRegionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[45];
} _tb16 = {45, NULL, {
  (void*)Data__NodeDesc_Greg, 
  (void*)Data__UsableDesc_ReplaceUses, 
  (void*)Data__ResultDesc_DeleteResult, 
  (void*)Data__ResultDesc_MoveResultToEnd, 
  (void*)Data__ResultDesc_ResultIndex, 
  (void*)Data__InstructionDesc_Operand, 
  (void*)Data__InstructionDesc_InsertOperand, 
  (void*)Data__InstructionDesc_UniqueOperand, 
  (void*)Data__InstructionDesc_AppendResult, 
  (void*)Data__InstructionDesc_Delete, 
  (void*)Data__InstructionDesc_MoveResultList, 
  (void*)Data__InstructionDesc_GetResult, 
  (void*)Data__InstructionDesc_LastResult, 
  (void*)Data__InstructionDesc_GetOperand, 
  (void*)Data__InstructionDesc_LastOperand, 
  (void*)Data__InstructionDesc_SetOpndSymLoc, 
  (void*)Data__InstructionDesc_ArgumentIndex, 
  (void*)Data__InstructionDesc_NthOperand, 
  (void*)Data__InstructionDesc_NthArgument, 
  (void*)Data__InstructionDesc_NthResult, 
  (void*)Data__InstructionDesc_NumOfOperands, 
  (void*)Data__InstructionDesc_NumOfResults, 
  (void*)Data__InstructionDesc_MoveBehind, 
  (void*)Data__InstructionDesc_MoveInFront, 
  (void*)Data__InstructionDesc_Class, 
  (void*)Data__InstructionDesc_Subclass, 
  (void*)Data__InstructionDesc_MayTrap, 
  (void*)Data__InstructionDesc_GetReceiver, 
  (void*)Data__RegionDesc_Insert, 
  (void*)Data__RegionDesc_ReverseInstr, 
  (void*)Data__RegionDesc_MoveInstruction, 
  (void*)Data__RegionDesc_MoveInstructions, 
  (void*)Data__RegionDesc_CreateInstruction, 
  (void*)Data__RegionDesc_EnterInstr, 
  (void*)Data__RegionDesc_ExitInstr, 
  (void*)Data__RegionDesc_ClearInfo, 
  (void*)Data__RegionDesc_ClearInstrInfo, 
  (void*)Data__RegionDesc_ClearRegionInfo, 
  (void*)Data__RegionDesc_Dominates, 
  (void*)Data__RegionDesc_DominatesNR, 
  (void*)Data__RegionDesc_RegionMerge, 
  (void*)Data__RegionDesc_CreateAdrInstr, 
  (void*)Data__RegionDesc_CreateDyadicOp, 
  (void*)Data__RegionDesc_CreateTypeCast, 
  (void*)Data__GlobalRegionDesc_NumberDominanceTree
}};
struct _TD Data__GlobalRegionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Data__GlobalRegionDesc_tdb.btypes,
    _tb16.tbprocs,
    (const unsigned char*)_n17.name,
    &Data_md.md,
    7, 
    '0', '1',
    sizeof(Data__GlobalRegionDesc),
    &Data__MergeDesc_td.td
  }
};
#define _TB2 5
#define _TB5 2
#define _TB10 28
#define _TB11 29
#define _TB12 0
#define _TB13 9
#define _TB14 30
#define _TB19 32
#define _TB21 2
#define _TB22 3
#define _TB26 14
#define _TB31 17
#define _TB41 35
#define _TB42 36
#define _TB43 37
#define _TB57 27

/* local strings */

