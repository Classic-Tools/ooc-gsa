/* file generated by oo2c -- do not edit */
#ifndef _MODULE_WriteGSAvC_
#define _MODULE_WriteGSAvC_

#define WriteGSAvC__mark (-2147483647-1)
#include "ParamOptions.h"
extern ParamOptions__BooleanOption WriteGSAvC__writeGSA;
extern ParamOptions__BooleanOption WriteGSAvC__writeQualNames;
extern void WriteGSAvC__Class(short int ccode, unsigned char* str, int str_0d);
extern void WriteGSAvC__Opcode(short int opcode, unsigned char* str, int str_0d);
#include "Data.h"
extern void WriteGSAvC__WrArgument(Data__Info i);
extern void WriteGSAvC__WrOpcode(short int opc);
extern void WriteGSAvC__Body(Data__GlobalRegion greg);
extern void WriteGSAvC__MW(Data__Node n);
extern void WriteGSAvC_init(void);

#endif
