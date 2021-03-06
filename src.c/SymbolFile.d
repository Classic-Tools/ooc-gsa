/* file generated by oo2c -- do not edit */
#include "SymbolFile.h"
#include "Config.h"
#include "Error.h"
#include "Files.h"
#include "IntStr.h"
#include "ParamPaths.h"
#include "StdTypes.h"
#include "Strings.h"
#include "SymbolTable.h"
#include "SystemFlags.h"

/* local definitions */
typedef Data__Struct* SymbolFile__StructArray;
static SymbolFile__StructArray SymbolFile__structArray;
static int SymbolFile__structLen;
static unsigned char SymbolFile__emptyString[2];
static Parameter__String SymbolFile__emptyStringPtr;
unsigned char SymbolFile__symbolFileId[5];
typedef struct SymbolFile__Read_ModuleListDesc* SymbolFile__Read_ModuleList;
typedef struct SymbolFile__Read_ModuleListDesc {
  struct SymbolFile__Read_ModuleListDesc* next;
  Data__Object mod;
} SymbolFile__Read_ModuleListDesc;

/* function prototypes */
unsigned char SymbolFile__RemoveImportedModule_Remove(Data__Object *list, unsigned char* SymbolFile__RemoveImportedModule_modName);
short int SymbolFile__CreateModuleId(void);
unsigned char SymbolFile__IntegrateSymbols_IntegrateTree_IntegrateList_ObjIsPtrBase(Data__Object obj);
void SymbolFile__IntegrateSymbols_IntegrateTree_IntegrateList(Data__Object *list, short int *SymbolFile__IntegrateSymbols_mid, unsigned char *SymbolFile__IntegrateSymbols_stripData, Data__Object *SymbolFile__IntegrateSymbols_IntegrateTree_o);
void SymbolFile__IntegrateSymbols_IntegrateTree(Data__Object *tree, short int *SymbolFile__IntegrateSymbols_mid, unsigned char *SymbolFile__IntegrateSymbols_stripData);
void SymbolFile__WriteStringConst(BinaryRider__Writer w, Data__Const const_);
Data__Const SymbolFile__ReadStringConst(BinaryRider__Reader r, signed char form);
void SymbolFile__AppendToStructArray(Data__Struct t);
void SymbolFile__Write_MarkExportedObjects_MarkObject_MarkStruct(Data__Struct t, Data__Object *SymbolFile__Write_mod);
void SymbolFile__Write_MarkExportedObjects_MarkObject(Data__Object obj, Data__Object *SymbolFile__Write_mod);
void SymbolFile__Write_MarkExportedObjects(Data__Object root, Data__Object *SymbolFile__Write_mod);
void SymbolFile__Write_WriteObject_WriteStruct_WriteObjList(Data__Object obj, BinaryRider__Writer *SymbolFile__Write_w);
void SymbolFile__Write_WriteObject_WriteStruct(Data__Struct t, BinaryRider__Writer *SymbolFile__Write_w, Data__Object *SymbolFile__Write_WriteObject_obj);
void SymbolFile__Write_WriteObject(Data__Object obj, BinaryRider__Writer *SymbolFile__Write_w);
void SymbolFile__Write_WriteTree(Data__Object obj, BinaryRider__Writer *SymbolFile__Write_w);
Data__Object SymbolFile__Write_WriteUsedImports_GetModule(const unsigned char* lowerBound, int lowerBound_0d);
void SymbolFile__Write_WriteUsedImports(int *SymbolFile__Write_importIndex, BinaryRider__Writer *SymbolFile__Write_w);
void SymbolFile__Write_WriteOtherImports(Data__Object obj, BinaryRider__Writer *SymbolFile__Write_w);
void SymbolFile__Write_Fingerprint(Files__File f, int startPos, unsigned char* key, int key_0d);
unsigned char SymbolFile__Write_GetPreviousMagic(int *magic, Data__Object *SymbolFile__Write_mod);
void SymbolFile__Write_ClearImportedMods(Data__Object obj);
void SymbolFile__Read_Abort(Parameter__Filename SymbolFile__Read_fileName, BinaryRider__Reader *SymbolFile__Read_r);
void SymbolFile__Read_ReadObject_ReadStruct_ReadObjList(Data__Object *obj, unsigned char parameter, BinaryRider__Reader *SymbolFile__Read_r, Data__Struct *SymbolFile__Read_ReadObject_ReadStruct_t, Parameter__Filename SymbolFile__Read_fileName, Data__Object *SymbolFile__Read_mod, struct SymbolFile__Read_ModuleListDesc* *SymbolFile__Read_modList);
Data__Struct SymbolFile__Read_ReadObject_ReadStruct(BinaryRider__Reader *SymbolFile__Read_r, struct SymbolFile__Read_ModuleListDesc* *SymbolFile__Read_modList, Parameter__Filename SymbolFile__Read_fileName, Data__Object *SymbolFile__Read_mod);
Data__Object SymbolFile__Read_ReadObject(int mode, BinaryRider__Reader *SymbolFile__Read_r, Parameter__Filename SymbolFile__Read_fileName, Data__Object *SymbolFile__Read_mod, struct SymbolFile__Read_ModuleListDesc* *SymbolFile__Read_modList);
void SymbolFile__Read_ReadImportList(Data__Object *list, struct SymbolFile__Read_ModuleListDesc* *modList, BinaryRider__Reader *SymbolFile__Read_r, int *SymbolFile__Read_pos, unsigned char* SymbolFile__Read_moduleName, int SymbolFile__Read_moduleName_0d);
void SymbolFile__Read_StructAlloc(Data__Struct t);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[9];
} _p0 = {9, NULL, {
  (const void*)&SymbolFile__FindImportedModule,
  (const void*)&SymbolFile__IntegrateSymbols,
  (const void*)&SymbolFile__Read,
  (const void*)&SymbolFile__ReadFlags,
  (const void*)&SymbolFile__ReadString,
  (const void*)&SymbolFile__RemoveImportedModule,
  (const void*)&SymbolFile__Write,
  (const void*)&SymbolFile__WriteFlags,
  (const void*)&SymbolFile__WriteString,
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {1, NULL, {
  (const void*)&SymbolFile__symbolFileId,
}};
static const struct {
  int length;
  void* pad;
  const char name[11];
} _n0 = {11, NULL, {"SymbolFile"}};
static struct _MD SymbolFile_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -1837613339
  }
};

static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} SymbolFile__Read_ModuleListDesc_tdb = {
  1, 
  NULL, 
  {
    &SymbolFile__Read_ModuleListDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD SymbolFile__Read_ModuleListDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    SymbolFile__Read_ModuleListDesc_tdb.btypes,
    _tb0.tbprocs,
    NULL,
    &SymbolFile_md.md,
    0, 
    '0', '1',
    sizeof(SymbolFile__Read_ModuleListDesc),
    NULL
  }
};

/* local strings */
static const unsigned char _c11[] = "Read error in file `%\047";
static const unsigned char _c10[] = "...";
static const unsigned char _c9[] = " is corrupt, aborting at pos ";
static const unsigned char _c8[] = "Symbol file ";
static const unsigned char _c7[] = "Couldn\047t create new symbol file `%\047";
static const unsigned char _c6[] = "Closing file `%\047 failed";
static const unsigned char _c5[] = "Registering file `%\047 failed";
static const unsigned char _c4[] = "Write error in file `%\047";
static const unsigned char _c3[] = "XXXX";
static const unsigned char _c2[] = "Sym";
static const unsigned char _c1[] = "";
static const unsigned char _c0[] = "SYSTEM";

