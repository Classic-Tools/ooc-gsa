/* file generated by oo2c -- do not edit */
#include "Make.h"
#include "BinaryRider.h"
#include "Config.h"
#include "Error.h"
#include "Files.h"
#include "Out.h"
#include "ParamPaths.h"
#include "ParamPragmas.h"
#include "Scanner.h"
#include "Strings.h"
#include "SymbolTable.h"
#include "SymbolFile.h"
#include "SystemFlags.h"
#include "Time.h"

/* local definitions */
static ParamPragmas__PragmaState Make__pragmas;

/* function prototypes */
Make__Module Make__AddModule(Make__Module *modList, unsigned char* moduleName, int moduleName_0d, unsigned char* fileName, int fileName_0d);
unsigned char Make__AddImport_SystemModule(unsigned char* name, int name_0d);
void Make__AddImport(Make__Module *modList, Make__Import *importList, unsigned char* import, int import_0d, int pos, unsigned char hasMagic, int magic);
void Make__NameMismatch(const unsigned char* import__ref, int import_0d, const unsigned char* header__ref, int header_0d);
void Make__ScanSymbolFile_ReadImportList(BinaryRider__Reader *Make__ScanSymbolFile_r, Make__Module *Make__ScanSymbolFile_moduleList, Make__Module *Make__ScanSymbolFile_mod);
void Make__ScanSymbolFile(Make__Module *moduleList, Files__File f, Make__Module mod);
void Make__ScanSources_ImportList_GetModuleIdent(void);
void Make__ScanSources_ImportList(Make__Module *Make__ScanSources_mod, Make__Module *Make__ScanSources_moduleList);
unsigned char Make__ScanSources(Make__Module *moduleList, Make__Module mod);
unsigned char Make__ScanModule(Make__Module *moduleList, Make__Module mod, unsigned char useSources);
Make__Module Make__TopSort_RemoveBest(Make__Module *mod, short int prevBest, Make__Module *Make__TopSort_modules);
void Make__TopSort_ErrorCyclic(Make__Module mod, unsigned char Make__TopSort_msg[8192]);
Make__Module Make__TopSort(Make__Module modules, unsigned char mainFirst);
unsigned char Make__Dependencies_ImportsUnknown(Make__Module mod);
void Make__Dependencies_MarkUnknownImports(Make__Module mod, unsigned char useError);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[4];
} _p0 = {4, NULL, {
  (const void*)&Make__Dependencies,
  (const void*)&Make__GetModuleInfo,
  (const void*)&Make__ImportChanged,
  (const void*)&Make__UpdateModuleInfo,
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
  const char name[5];
} _n0 = {5, NULL, {"Make"}};
static struct _MD Make_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    420915750
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n1 = {11, NULL, {"ImportDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Make__ImportDesc_tdb = {
  1, 
  NULL, 
  {
    &Make__ImportDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD Make__ImportDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Make__ImportDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &Make_md.md,
    0, 
    '0', '1',
    sizeof(Make__ImportDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n2 = {11, NULL, {"ModuleDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Make__ModuleDesc_tdb = {
  1, 
  NULL, 
  {
    &Make__ModuleDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb1 = {0, NULL, {
  NULL
}};
struct _TD Make__ModuleDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Make__ModuleDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &Make_md.md,
    0, 
    '0', '1',
    sizeof(Make__ModuleDesc),
    &Make__ImportDesc_td.td
  }
};

/* local strings */
static const unsigned char _c11[] = "\047 imports unknown module `";
static const unsigned char _c10[] = "Error: Module `";
static const unsigned char _c9[] = "Cyclic import via";
static const unsigned char _c8[] = " ";
static const unsigned char _c7[] = "Sym";
static const unsigned char _c6[] = "Mod";
static const unsigned char _c5[] = "XXXX";
static const unsigned char _c4[] = "\047";
static const unsigned char _c3[] = "\047 implements `";
static const unsigned char _c2[] = "Module imported as `";
static const unsigned char _c1[] = "";
static const unsigned char _c0[] = "SYSTEM";

