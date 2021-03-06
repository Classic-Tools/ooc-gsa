/* file generated by oo2c -- do not edit */
#include "AlgebraicTransformation.h"
#include "Out.h"
#include "Opcode.h"
#include "SymbolTable.h"
#include "StdTypes.h"
#include "Worklist.h"

/* local definitions */

/* function prototypes */
void AlgebraicTransformation__Transform_InitialWorklist(Data__Region region, Worklist__Worklist *AlgebraicTransformation__Transform_worklist);
unsigned char AlgebraicTransformation__Transform_BooleanResult_AllUsesAreNegations(Data__Instruction instr);
unsigned char AlgebraicTransformation__Transform_BooleanResult_AllUsesAreGuards(Data__Instruction instr);
void AlgebraicTransformation__Transform_BooleanResult_NegateGuards(Data__Instruction instr);
Data__Usable AlgebraicTransformation__Transform_BooleanResult(Data__Instruction instr, short int *AlgebraicTransformation__Transform_class_, short int *AlgebraicTransformation__Transform_subClass, Worklist__Worklist *AlgebraicTransformation__Transform_worklist);
Data__Usable AlgebraicTransformation__Transform_RemoveNeutralOpnd(Data__Instruction instr);
int AlgebraicTransformation__Transform_ArithmTransform_PowerOfTwo(int int_);
Data__Instruction AlgebraicTransformation__Transform_ArithmTransform_ReplaceMod(short int subcl, Data__Usable arg, int mask, Data__Instruction *AlgebraicTransformation__Transform_ArithmTransform_instr);
Data__Usable AlgebraicTransformation__Transform_ArithmTransform(Data__Instruction instr);
Data__Usable AlgebraicTransformation__Transform_HandleComparison_Negation(Data__Opnd opnd);
Data__Const AlgebraicTransformation__Transform_HandleComparison_GetMinMax(signed char type, unsigned char max);
Data__Usable AlgebraicTransformation__Transform_HandleComparison_RangeFolding(short int class_, double const_, double lowerBound, double upperBound);
Data__Usable AlgebraicTransformation__Transform_HandleComparison(Data__Instruction instr);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[3];
} _p0 = {3, NULL, {
  (const void*)&AlgebraicTransformation__GetOne,
  (const void*)&AlgebraicTransformation__GetZero,
  (const void*)&AlgebraicTransformation__Transform,
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {0, NULL, {NULL
}};
static const struct {
  int length;
  void* pad;
  const char name[24];
} _n0 = {24, NULL, {"AlgebraicTransformation"}};
static struct _MD AlgebraicTransformation_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -1459997155
  }
};

/* local strings */
static const unsigned char _c0[] = "AlgebraicTransformation:* error in frontend: conversion `classNeg -> classNot\047 performed";

