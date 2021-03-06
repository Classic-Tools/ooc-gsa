/* file generated by oo2c -- do not edit */
#include "Scanner.h"
#include "Channel.h"
#include "Config.h"
#include "Data.h"
#include "Error.h"
#include "Files.h"
#include "IntStr.h"
#include "LRealStr.h"
#include "ParamPaths.h"
#include "RealStr.h"
#include "StdTypes.h"
#include "Strings.h"
#include "Termination.h"
#include "RCS.h"

/* local definitions */
ParamOptions__IntegerOption Scanner__stringLength;
ParamOptions__IntegerOption Scanner__identLength;
unsigned char Scanner__allowUnderscore;
unsigned char Scanner__moduleIdent;
static unsigned char Scanner__kwStr[2560];
static signed char Scanner__kwSym[256];
static unsigned char Scanner__incrementalRead;
static unsigned char* Scanner__buf;
static int Scanner__pos;
static int Scanner__fileLen;
static int Scanner__currLen;
static Files__File Scanner__inFile;
static Channel__Reader Scanner__inReader;
signed char Scanner__sym;
int Scanner__currSymPos;
int Scanner__lastSymEnd;
Parameter__String Scanner__str;
signed char Scanner__numType;
int Scanner__intVal;
double Scanner__realVal;
static unsigned char Scanner__finished;
int Scanner__sourceTotal;
int Scanner__sourceLines;
typedef int* Scanner__PosArray;
static Scanner__PosArray Scanner__eolArray;
static int Scanner__eolCounter;
static Scanner__ConditionStack Scanner__condStack;
static signed char Scanner__scanStatus;
typedef struct Scanner__ParsePragma_Value {
  signed char type;
  unsigned char boolean;
  char _2pad, _3pad;
  int integer;
  Parameter__String string;
  int pos;
} Scanner__ParsePragma_Value;

/* function prototypes */
void Scanner__EndOfLine(void);
int Scanner__FindLine(int pos);
void Scanner__PopCond(void);
void Scanner__ParsePragma_CheckName(unsigned char* name, int name_0d);
void Scanner__ParsePragma_CheckBoolean(unsigned char eval, Scanner__ParsePragma_Value *value, _Type value__tag);
void Scanner__ParsePragma_Expression_SimpleExpr_Term_Factor(unsigned char eval, Scanner__ParsePragma_Value *value, _Type value__tag);
void Scanner__ParsePragma_Expression_SimpleExpr_Term(unsigned char eval, Scanner__ParsePragma_Value *value, _Type value__tag);
void Scanner__ParsePragma_Expression_SimpleExpr(unsigned char eval, Scanner__ParsePragma_Value *value, _Type value__tag);
void Scanner__ParsePragma_Expression(unsigned char eval, Scanner__ParsePragma_Value *value, _Type value__tag);
unsigned char Scanner__ParsePragma_BoolExpression(unsigned char eval);
void Scanner__ParsePragma_PushCond(unsigned char *Scanner__ParsePragma_evalText);
void Scanner__ParsePragma_CheckForIf(unsigned char noElse, unsigned char *Scanner__ParsePragma_evalText);
void Scanner__ParsePragma_Assignment(unsigned char define, unsigned char eval, unsigned char *Scanner__ParsePragma_err, unsigned char Scanner__ParsePragma_ins[16]);
void Scanner__ParsePragma(void);
void Scanner__ReadBlock(void);
void Scanner__Comment(void);
void Scanner__StoreString(int from, int to);
void Scanner__GetString(unsigned char end);
unsigned char Scanner__Ident_CompareIdent(unsigned char* kw, int kw_0d, int *Scanner__Ident_start);
unsigned char Scanner__Ident_IsChar(unsigned char inclDigit);
void Scanner__Ident_SkipWord(int *Scanner__Ident_sum);
void Scanner__Ident(void);
short int Scanner__Number_ConvertHex_GetCypher(unsigned char c);
int Scanner__Number_ConvertHex(int spos, int epos, int *Scanner__Number_start);
void Scanner__Number(void);
Scanner__ConditionStack Scanner__SaveScanPos_Copy(Scanner__ConditionStack cond);
void Scanner__InitKeywords_KW(const unsigned char* ident__ref, int ident_0d, signed char sym);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[12];
} _p0 = {12, NULL, {
  (const void*)&Scanner__CheckPragmas,
  (const void*)&Scanner__CheckSym,
  (const void*)&Scanner__Close,
  (const void*)&Scanner__Column,
  (const void*)&Scanner__GetSym,
  (const void*)&Scanner__Init,
  (const void*)&Scanner__Line,
  (const void*)&Scanner__Name2File,
  (const void*)&Scanner__RestoreScanPos,
  (const void*)&Scanner__SaveScanPos,
  (const void*)&Scanner__SetSym,
  (const void*)&Scanner__ThreeDots,
}};
static const struct {
  int length;
  void* pad;
  const void* list[13];
} _p1 = {13, NULL, {
  (const void*)&Scanner__allowUnderscore,
  (const void*)&Scanner__currSymPos,
  (const void*)&Scanner__identLength,
  (const void*)&Scanner__intVal,
  (const void*)&Scanner__lastSymEnd,
  (const void*)&Scanner__moduleIdent,
  (const void*)&Scanner__numType,
  (const void*)&Scanner__realVal,
  (const void*)&Scanner__sourceLines,
  (const void*)&Scanner__sourceTotal,
  (const void*)&Scanner__str,
  (const void*)&Scanner__stringLength,
  (const void*)&Scanner__sym,
}};
static const struct {
  int length;
  void* pad;
  const char name[8];
} _n0 = {8, NULL, {"Scanner"}};
static struct _MD Scanner_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -97749775
  }
};

static const struct {
  int length;
  void* pad;
  const char name[19];
} _n1 = {19, NULL, {"ConditionStackDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Scanner__ConditionStackDesc_tdb = {
  1, 
  NULL, 
  {
    &Scanner__ConditionStackDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD Scanner__ConditionStackDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Scanner__ConditionStackDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &Scanner_md.md,
    0, 
    '0', '1',
    sizeof(Scanner__ConditionStackDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[10];
} _n2 = {10, NULL, {"ScanState"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Scanner__ScanState_tdb = {
  1, 
  NULL, 
  {
    &Scanner__ScanState_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb1 = {0, NULL, {
  NULL
}};
struct _TD Scanner__ScanState_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Scanner__ScanState_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &Scanner_md.md,
    0, 
    '0', '1',
    sizeof(Scanner__ScanState),
    &Scanner__ConditionStackDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Scanner__ParsePragma_Value_tdb = {
  1, 
  NULL, 
  {
    &Scanner__ParsePragma_Value_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb2 = {0, NULL, {
  NULL
}};
struct _TD Scanner__ParsePragma_Value_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Scanner__ParsePragma_Value_tdb.btypes,
    _tb2.tbprocs,
    NULL,
    &Scanner_md.md,
    0, 
    '0', '1',
    sizeof(Scanner__ParsePragma_Value),
    &Scanner__ScanState_td.td
  }
};

/* local strings */
static const unsigned char _c47[] = "IdentLength";
static const unsigned char _c46[] = "StringLength";
static const unsigned char _c45[] = "WITH";
static const unsigned char _c44[] = "WHILE";
static const unsigned char _c43[] = "VAR";
static const unsigned char _c42[] = "UNTIL";
static const unsigned char _c41[] = "TYPE";
static const unsigned char _c40[] = "TO";
static const unsigned char _c39[] = "THEN";
static const unsigned char _c38[] = "RETURN";
static const unsigned char _c37[] = "REPEAT";
static const unsigned char _c36[] = "RECORD";
static const unsigned char _c35[] = "PROCEDURE";
static const unsigned char _c34[] = "POINTER";
static const unsigned char _c33[] = "OR";
static const unsigned char _c32[] = "OF";
static const unsigned char _c31[] = "NIL";
static const unsigned char _c30[] = "MODULE";
static const unsigned char _c29[] = "MOD";
static const unsigned char _c28[] = "LOOP";
static const unsigned char _c27[] = "IS";
static const unsigned char _c26[] = "IN";
static const unsigned char _c25[] = "IMPORT";
static const unsigned char _c24[] = "IF";
static const unsigned char _c23[] = "FOR";
static const unsigned char _c22[] = "EXIT";
static const unsigned char _c21[] = "END";
static const unsigned char _c20[] = "ELSIF";
static const unsigned char _c19[] = "ELSE";
static const unsigned char _c18[] = "DO";
static const unsigned char _c17[] = "DIV";
static const unsigned char _c16[] = "CONST";
static const unsigned char _c15[] = "CASE";
static const unsigned char _c14[] = "BY";
static const unsigned char _c13[] = "BEGIN";
static const unsigned char _c12[] = "ARRAY";
static const unsigned char _c11[] = " not found";
static const unsigned char _c10[] = "File ";
static const unsigned char _c9[] = "Read error in file ";
static const unsigned char _c8[] = "integer";
static const unsigned char _c7[] = "string";
static const unsigned char _c6[] = "";
static const unsigned char _c5[] = "boolean";
static const unsigned char _c4[] = "DEFINE";
static const unsigned char _c3[] = "POP";
static const unsigned char _c2[] = "PUSH";
static const unsigned char _c1[] = "FALSE";
static const unsigned char _c0[] = "TRUE";

