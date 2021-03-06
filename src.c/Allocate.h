/* file generated by oo2c -- do not edit */
#ifndef _MODULE_Allocate_
#define _MODULE_Allocate_

#include "Parameter.h"
#include "Data.h"
typedef struct Allocate__LocationDesc {
  Parameter__String value;
  Data__SymLocation old;
  struct Allocate__LocationDesc* outerLocation;
  unsigned char used;
  char _13pad, _14pad, _15pad;
  int gid;
} Allocate__LocationDesc;
typedef struct Allocate__LocationDesc* Allocate__Location;
extern Allocate__Location Allocate__NewLoc(const unsigned char* str__ref, int str_0d);
extern Data__SymLocation Allocate__GetLocation(Data__Node u);
extern Data__Result Allocate__FindResult(Data__Instruction instr, Data__Addressable var, short int attrib);
extern Data__Opnd Allocate__FindOperand(Data__Instruction instr, Data__Addressable var, short int attrib);
extern unsigned char Allocate__PtrValue(Data__Struct t);
extern Allocate__Location Allocate__AccessNonlocal(Data__GlobalRegion greg, Data__Object var, const unsigned char* prefix__ref, int prefix_0d);
extern Allocate__Location Allocate__GetAddressValue(Data__GlobalRegion greg, Data__Usable arg, unsigned char castToInt);
extern Data__Location Allocate__TransformLocation(Data__GlobalRegion greg, Data__SymLocation loc);
extern void Allocate__GlobalRegion(Data__GlobalRegion greg);
#include "TextRider.h"
extern void Allocate__WriteRegType(TextRider__Writer w, signed char reg);
extern void Allocate__EmitVariables(TextRider__Writer w, Data__GlobalRegion greg, unsigned char vsStack);
extern void Allocate__WriteStats(void);
extern struct _TD Allocate__LocationDesc_td;
extern struct _TD Allocate__RangeInfo_td;
extern struct _TD Allocate__RegFileSummary_td;
extern struct _TD Allocate__RegionSummaryDesc_td;
extern struct _TD Allocate__LiveRangeListDesc_td;
extern struct _TD Allocate__ResolveVarConflicts_1_td;
extern struct _TD Allocate__ResolveVarConflicts_0_td;
extern void Allocate_init(void);

#endif
