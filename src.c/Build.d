/* file generated by oo2c -- do not edit */
#include "Build.h"
#include "Ascii.h"
#include "Config.h"
#include "Data.h"
#include "Error.h"
#include "FileData.h"
#include "Files.h"
#include "GenInclude.h"
#include "GenStatm.h"
#include "Out.h"
#include "ParamPaths.h"
#include "Parameter.h"
#include "ProgramArgs.h"
#include "Rts.h"
#include "SystemFlags.h"
#include "Scanner.h"
#include "StdTypes.h"
#include "Strings.h"
#include "TextRider.h"
#include "RCS.h"

/* local definitions */
static ParamOptions__StringOption Build__cc;
static ParamOptions__StringOption Build__cflags;
static ParamOptions__StringOption Build__coptflags;
static ParamOptions__StringOption Build__ldflags;
static ParamOptions__StringOption Build__libs;
static ParamOptions__StringOption Build__libtoolCmd;
static ParamOptions__StringOption Build__installCmd;
static ParamOptions__StringOption Build__libpath;
static ParamOptions__BooleanOption Build__libtoolLink;
ParamOptions__BooleanOption Build__optimize;
static ParamOptions__BooleanOption Build__noBuild;
static Parameter__String Build__command;
static int Build__commandLen;

/* function prototypes */
void Build__ExtendCommand(int newLen);
void Build__SetCommand(const unsigned char* com__ref, int com_0d);
void Build__AppendCommand(const unsigned char* com__ref, int com_0d);
void Build__AppendOptions(External__NameList list);
FileData__FileData Build__CompileCCode(FileData__FileData cFile, FileData__FileData oFile, External__NameList prefixOptions, External__NameList suffixOptions, unsigned char buildLib);
void Build__Main_WriteName(TextRider__Writer w, const unsigned char* name__ref, int name_0d);
FileData__FileData Build__Main(Make__Module modList, FileData__FileData main, const unsigned char* command__ref, int command_0d, unsigned char buildObj);
unsigned char Build__PartOfProgram(Make__Module mod, External__Lib buildLib, unsigned char linkLib);
External__Lib Build__FromExternalLib(Make__Module mod, External__Lib buildLib);
unsigned char Build__CollectFiles_NewEntry(External__Ref ref, External__Ref *Build__CollectFiles_list);
External__Ref Build__CollectFiles(Make__Module modList, signed char mode, External__Lib buildLib, unsigned char linkLib);
void Build__BuildExternals_UpdateFile_AppendModule(External__File ef, Make__Module *Build__BuildExternals_modList, unsigned char Build__BuildExternals_UpdateFile_msg[256]);
void Build__BuildExternals_UpdateFile(External__File ef, External__Lib *Build__BuildExternals_buildLib, unsigned char *Build__BuildExternals_makeAll, Make__Module *Build__BuildExternals_modList);
void Build__BuildExternals(Make__Module modList, unsigned char makeAll, External__Lib buildLib);
FileData__FileData Build__MainFile(Make__Module mainMod, const unsigned char* com__ref, int com_0d, const unsigned char* suffix__ref, int suffix_0d);
void Build__CheckLibs(Make__Module modList, External__Lib buildLib, unsigned char linkLib);
unsigned char Build__LinkAgainstLibs_AddLib_LibtoolLibrary(const unsigned char* libName__ref, int libName_0d, unsigned char* fileName, int fileName_0d);
void Build__LinkAgainstLibs_AddLib(External__Lib lib);
void Build__LinkAgainstLibs_AddOberonLibraries(Make__Module modList, External__Lib buildLib, External__Ref *list);
void Build__LinkAgainstLibs(Make__Module modList, External__Lib buildLib, unsigned char linkLib);
void Build__LinkProgram(Make__Module modList, Make__Module mainMod, FileData__FileData oMain, External__Lib buildLib);
void Build__Makefile_Options(unsigned char *Build__Makefile_ocRules, TextRider__Writer *Build__Makefile_w, Make__Module *Build__Makefile_modList);
Make__Module Build__Makefile_FileLists(Make__Module *Build__Makefile_modList, TextRider__Writer *Build__Makefile_w, unsigned char* Build__Makefile_com, int Build__Makefile_com_0d, unsigned char *Build__Makefile_ocRules, unsigned char Build__Makefile_symSuffix[16]);
void Build__Makefile_MainRules(Make__Module mainMod, unsigned char* Build__Makefile_com, int Build__Makefile_com_0d, TextRider__Writer *Build__Makefile_w, unsigned char *Build__Makefile_ocRules);
void Build__Makefile_OberonRules(Make__Module *Build__Makefile_modList, unsigned char Build__Makefile_symSuffix[16], TextRider__Writer *Build__Makefile_w, unsigned char Build__Makefile_modSuffix[16]);
void Build__Makefile_CRules(Make__Module mainMod, Make__Module *Build__Makefile_modList, TextRider__Writer *Build__Makefile_w, unsigned char* Build__Makefile_com, int Build__Makefile_com_0d);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[5];
} _p0 = {5, NULL, {
  (const void*)&Build__CheckLibtool,
  (const void*)&Build__Executable,
  (const void*)&Build__InstallLib,
  (const void*)&Build__Makefile,
  (const void*)&Build__RemoveSymbolFiles,
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {1, NULL, {
  (const void*)&Build__optimize,
}};
static const struct {
  int length;
  void* pad;
  const char name[6];
} _n0 = {6, NULL, {"Build"}};
static struct _MD Build_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    71309110
  }
};

/* local strings */
static const unsigned char _c128[] = "noBuild:=TRUE";
static const unsigned char _c127[] = "--no-build";
static const unsigned char _c126[] = "noBuild";
static const unsigned char _c125[] = "optimize:=TRUE";
static const unsigned char _c124[] = "-O,--optimize";
static const unsigned char _c123[] = "optimize";
static const unsigned char _c122[] = "libtoolLink:=TRUE";
static const unsigned char _c121[] = "--libtool-link";
static const unsigned char _c120[] = "libtoolLink";
static const unsigned char _c119[] = "libpath:=\047$1\047";
static const unsigned char _c118[] = "--lib-path";
static const unsigned char _c117[] = "libpath";
static const unsigned char _c116[] = "installCmd:=\047$1\047";
static const unsigned char _c115[] = "--install-cmd";
static const unsigned char _c114[] = "cp";
static const unsigned char _c113[] = "installCmd";
static const unsigned char _c112[] = "libtoolCmd:=\047$1\047";
static const unsigned char _c111[] = "--libtool-cmd";
static const unsigned char _c110[] = "libtool";
static const unsigned char _c109[] = "libtoolCmd";
static const unsigned char _c108[] = "libs:=\047$1\047";
static const unsigned char _c107[] = "--libs";
static const unsigned char _c106[] = "libs";
static const unsigned char _c105[] = "ldflags:=\047$1\047";
static const unsigned char _c104[] = "--ldflags";
static const unsigned char _c103[] = "ldflags";
static const unsigned char _c102[] = "coptflags:=\047$1\047";
static const unsigned char _c101[] = "--coptflags";
static const unsigned char _c100[] = "coptflags";
static const unsigned char _c99[] = "cflags:=\047$1\047";
static const unsigned char _c98[] = "--cflags";
static const unsigned char _c97[] = "cflags";
static const unsigned char _c96[] = "cc:=\047$1\047";
static const unsigned char _c95[] = "--cc";
static const unsigned char _c94[] = "cc";
static const unsigned char _c93[] = "Mod";
static const unsigned char _c92[] = "Couldn\047t create make file `%\047";
static const unsigned char _c91[] = " -o $@";
static const unsigned char _c90[] = "$(CC) $(ALL_CFLAGS) -c ";
static const unsigned char _c89[] = "$(OC) $(OFLAGS) ";
static const unsigned char _c88[] = ": ";
static const unsigned char _c87[] = "-rm $(d_gen)";
static const unsigned char _c86[] = "-rm $(c_gen)";
static const unsigned char _c85[] = "-rm $(headers)";
static const unsigned char _c84[] = "-rm $(syms)";
static const unsigned char _c83[] = "o2_clean: clean";
static const unsigned char _c82[] = "-rm $(objs_gen) ";
static const unsigned char _c81[] = "clean:";
static const unsigned char _c80[] = "$(headers) $(c_gen)";
static const unsigned char _c79[] = "$(syms) ";
static const unsigned char _c78[] = "cfiles: ";
static const unsigned char _c77[] = "build: ";
static const unsigned char _c76[] = "$(CC) $(ALL_CFLAGS) -o $@ $(objs_ext) $(objs_gen) $(ALL_LDFLAGS) $(GCFLAGS)";
static const unsigned char _c75[] = ": $(objs_gen) $(objs_ext)";
static const unsigned char _c74[] = "all: cfiles build";
static const unsigned char _c73[] = "syms =";
static const unsigned char _c72[] = "headers =";
static const unsigned char _c71[] = "objs_gen =";
static const unsigned char _c70[] = ".d";
static const unsigned char _c69[] = "d_gen =";
static const unsigned char _c68[] = "c_gen =";
static const unsigned char _c67[] = "objs_ext =";
static const unsigned char _c66[] = "c_ext =";
static const unsigned char _c65[] = ".PHONY: all build cfiles clean o2_clean";
static const unsigned char _c64[] = ".SUFFIXES:";
static const unsigned char _c63[] = "ALL_LDFLAGS = $(LDFLAGS)";
static const unsigned char _c62[] = "ALL_CFLAGS = $(CFLAGS)";
static const unsigned char _c61[] = "SHELL = /bin/sh";
static const unsigned char _c60[] = "###### no need to change anything below this line";
static const unsigned char _c59[] = "GCFLAGS = ";
static const unsigned char _c58[] = "LDFLAGS = ";
static const unsigned char _c57[] = "CFLAGS = ";
static const unsigned char _c56[] = "CC = ";
static const unsigned char _c55[] = "OFLAGS = ";
static const unsigned char _c54[] = "OC = ";
static const unsigned char _c53[] = "rm ";
static const unsigned char _c52[] = ".";
static const unsigned char _c51[] = "Sym";
static const unsigned char _c50[] = "You must specify the libtool command with option --libtool-cmd.";
static const unsigned char _c49[] = "Error: This compiler depends on GNU libtool to support libraries.";
static const unsigned char _c48[] = "Libtool reported error, aborting";
static const unsigned char _c47[] = ".la ";
static const unsigned char _c46[] = " lib";
static const unsigned char _c45[] = "No such directory: ";
static const unsigned char _c44[] = "test -d ";
static const unsigned char _c43[] = "o";
static const unsigned char _c42[] = "Linker reported error, aborting";
static const unsigned char _c41[] = " -rpath ";
static const unsigned char _c40[] = " -version-info ";
static const unsigned char _c39[] = " -l";
static const unsigned char _c38[] = ".la";
static const unsigned char _c37[] = "lib";
static const unsigned char _c36[] = "\047 which isn\047t declared anywhere";
static const unsigned char _c35[] = "\047 depends on library `";
static const unsigned char _c34[] = "A library in module `";
static const unsigned char _c33[] = "\047";
static const unsigned char _c32[] = "\047 for module `";
static const unsigned char _c31[] = "Can\047t find external file `";
static const unsigned char _c30[] = ".c";
static const unsigned char _c29[] = "Closing file `%\047 failed";
static const unsigned char _c28[] = "Registering file `%\047 failed";
static const unsigned char _c27[] = "Write error in file `%\047";
static const unsigned char _c26[] = "  return _program_exit_code;";
static const unsigned char _c25[] = "();";
static const unsigned char _c24[] = "_";
static const unsigned char _c23[] = "_init();";
static const unsigned char _c22[] = "  ";
static const unsigned char _c21[] = "  _oo2c_init();";
static const unsigned char _c20[] = "  _end_vs = _top_vs+";
static const unsigned char _c19[] = ");";
static const unsigned char _c18[] = "  _top_vs = (char*)malloc(";
static const unsigned char _c17[] = "  _program_argv = (OOC_CHAR**) argv;";
static const unsigned char _c16[] = "  _program_argc = argc;";
static const unsigned char _c15[] = "int main (int argc, char *argv[]) {";
static const unsigned char _c14[] = "__libc";
static const unsigned char _c13[] = "__oo2c";
static const unsigned char _c12[] = ".h";
static const unsigned char _c11[] = "_init(void);";
static const unsigned char _c10[] = "extern void ";
static const unsigned char _c9[] = "/* file generated by oo2c -- do not edit */";
static const unsigned char _c8[] = "Couldn\047t create symbol file `%\047";
static const unsigned char _c7[] = "C compiler reported error, aborting";
static const unsigned char _c6[] = " -o ";
static const unsigned char _c5[] = " -c ";
static const unsigned char _c4[] = " -DUSE_GC=1";
static const unsigned char _c3[] = ".lo";
static const unsigned char _c2[] = ".o";
static const unsigned char _c1[] = " ";
static const unsigned char _c0[] = "";

