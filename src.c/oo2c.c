/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "oo2c.d"

static _ModId _mid;

void oo2c__Compile(const unsigned char* sourceFile__ref, int sourceFile_0d, CodeGen__Program program, Make__Module makeData) {
  register int i0, i1, i2, i3;
  unsigned char* sourceFile;
  char* _old_top_vs = _top_vs;
  _push_value(int, sourceFile, sourceFile__ref, sourceFile_0d);
  Error__Init();
  Scanner__Init((const unsigned char*)(int)sourceFile, sourceFile_0d, (unsigned char)0);
  SymbolTable__Init();
  GenDecl__Init();
  i0 = (int)CodeGen__stupidCodeGen;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  i1 = (int)makeData != 0;
  i0 = ! i0;
  ParseDecl__removeDeadCode = i0;
  i2 = (int)ParseDecl__Module((CodeGen__Program)(int)program);
  if (!(i1)) goto l1;
  i3 = i2 == 0;
  if (i3) goto l1;
  i3 = i2 + 8;
  i0 = (int)*(void**)i3;
  i3 = i0 != 0;
  if (i3) goto l0;
  i3 = i2 + 12;
  i0 = (int)makeData + 20;
  i3 = *(int*)i3;
  i0 = (int)*(void**)i0;
  Make__UpdateModuleInfo((Make__Module)(int)makeData, (Data__Object)i0, (int)i3);
  goto l1;
l0:
  i2 += 12;
  i2 = *(int*)i2;
  Make__UpdateModuleInfo((Make__Module)(int)makeData, (Data__Object)i0, (int)i2);
l1:
  if (!(i1)) goto l3;
  i1 = (int)program == 0;
  if (i1) goto l2;
  i1 = (int)program + 4;
  i1 = (int)*(void**)i1;
  i1 = i1 != 0;
  if (i1) goto l3;
l2:
  i0 = (int)makeData + 20;
  i0 = (int)*(void**)i0;
  i1 = i0 + 68;
  i2 = *(unsigned int*)i1;
  i2 = i2 & ~((unsigned int)1 << 5);
  *(unsigned int*)i1 = i2;
  i2 = *(unsigned int*)i1;
  i2 = i2 & ~((unsigned int)1 << 6);
  *(unsigned int*)i1 = i2;
l3:
  Scanner__Close();
  Error__EmitErrors((unsigned char)1);
  ParamPragmas__Restore((ParamPragmas__PragmaState *)(int)&oo2c__pragmas, &ParamPragmas__PragmaState_td.td);
  _top_vs = _old_top_vs;
}

void oo2c__RunMake(const unsigned char* main__ref, int main_0d, unsigned char makeAll) {
  register int i0, i1, i2, i3, i4, i5, i6;
  unsigned char err;
  Parameter__Filename ext;
  Parameter__Filename file;
  Make__Module moduleList;
  unsigned char* main;
  char* _old_top_vs = _top_vs;
  _push_value(int, main, main__ref, main_0d);
  Filenames__GetExt((const unsigned char*)(int)main, main_0d, (unsigned char*)(int)file, 256, (unsigned char*)(int)ext, 256);
  i0 = strcmp((const char*) (int)ext, (const char*) (int)_c0) == 0;
  if (i0) goto l0;
  Scanner__Name2File((unsigned char*)(int)main, main_0d);
  i0 = ParamPaths__FindPathExt((const unsigned char*)(int)main, main_0d, (const unsigned char*)(int)_c0, 4, (unsigned char)0, (unsigned char*)(int)main, main_0d);
  goto l1;
l0:
  i0 = ParamPaths__FindPath((const unsigned char*)(int)main, main_0d, (unsigned char)1, (unsigned char*)(int)main, main_0d);
l1:
  Make__Dependencies((const unsigned char*)(int)main, main_0d, (unsigned char)makeAll, (Make__Module *)(int)&moduleList, (unsigned char *)(int)&err);
  if (err) goto l7;
  i0 = (int)CodeGen__CreateProgram((External__Lib)0);
  Error__noerr = 1;
  i5 = Error__noerr;
  if (!(i5)) goto l6;
  i5 = (int)moduleList == 0;
  if (i5) goto l6;
  i3 = (int)moduleList;
l2:
  i2 = i3 + 12;
  i6 = *(unsigned int*)i2;
  i6 = (i6 & ((unsigned int)1 << 4)) != 0;
  if (i6) goto l3;
  i1 = Make__ImportChanged((Make__Module)i3);
  if (i1) goto l3;
  i1 = CodeGen__FileMissing((Make__Module)i3);
  if (i1) goto l3;
  i6 = i3 + 4;
  i6 = (int)*(void**)i6;
  i4 = *(int*)(i6-8);
  CodeGen__AddModule((CodeGen__Program)i0, (const unsigned char*)i6, i4);
  goto l5;
l3:
  i1 = *(unsigned int*)i2;
  i1 = (i1 & ((unsigned int)1 << 3)) != 0;
  if (i1) goto l4;
  (void)memcpy((void*) (int)ext, (const void*) (int)_c2, 31);
  i4 = i3 + 4;
  i4 = (int)*(void**)i4;
  i1 = *(int*)(i4-8);
  Strings__Append((const unsigned char*)i4, i1, (unsigned char*)(int)ext, 256);
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)ext, 256);
  Parameter__FatalError((const unsigned char*)(int)ext, 256);
  goto l5;
l4:
  (void)memcpy((void*) (int)ext, (const void*) (int)_c1, 3);
  i6 = i3 + 8;
  i4 = (int)*(void**)i6;
  i1 = *(int*)(i4-8);
  Strings__Append((const unsigned char*)i4, i1, (unsigned char*)(int)ext, 256);
  Error__VerboseMsg((const unsigned char*)(int)ext, 256);
  i6 = (int)*(void**)i6;
  i4 = *(int*)(i6-8);
  oo2c__Compile((const unsigned char*)i6, i4, (CodeGen__Program)i0, (Make__Module)i3);
  i6 = *(unsigned int*)i2;
  i6 = i6 | ((unsigned int)1 << 7);
  *(unsigned int*)i2 = i6;
l5:
  i3 = (int)*(void**)i3;
  i6 = Error__noerr;
  if (!(i6)) goto l6;
  i6 = i3 != 0;
  if (i6) goto l2;
l6:
  i5 = Error__noerr;
  if (!(i5)) goto l7;
  CodeGen__FinishProgram((CodeGen__Program)i0);
  Build__Executable((Make__Module)(int)moduleList, (const unsigned char*)(int)_c4, 1, (unsigned char)makeAll, (External__Lib)0);
l7:
  _top_vs = _old_top_vs;
}

void oo2c__MakeLib(const unsigned char* main__ref, int main_0d) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  unsigned char err;
  Parameter__Filename ext;
  Parameter__Filename file;
  Make__Module moduleList;
  unsigned char* main;
  char* _old_top_vs = _top_vs;
  _push_value(int, main, main__ref, main_0d);
  Filenames__GetExt((const unsigned char*)(int)main, main_0d, (unsigned char*)(int)file, 256, (unsigned char*)(int)ext, 256);
  i0 = strcmp((const char*) (int)ext, (const char*) (int)_c0) == 0;
  if (i0) goto l0;
  i0 = ParamPaths__FindPathExt((const unsigned char*)(int)main, main_0d, (const unsigned char*)(int)_c0, 4, (unsigned char)0, (unsigned char*)(int)main, main_0d);
  goto l1;
l0:
  i0 = ParamPaths__FindPath((const unsigned char*)(int)main, main_0d, (unsigned char)1, (unsigned char*)(int)main, main_0d);
l1:
  SystemFlags__noLibFileRead = 1;
  Make__Dependencies((const unsigned char*)(int)main, main_0d, (unsigned char)0, (Make__Module *)(int)&moduleList, (unsigned char *)(int)&err);
  SystemFlags__noLibFileRead = 0;
  if (err) goto l15;
  i7 = (int)*(void**)(int)moduleList;
  i7 = i7 != 0;
  if (i7) goto l2;
  i6 = (int)moduleList;
  goto l4;
l2:
  i6 = (int)moduleList;
l3:
  i6 = (int)*(void**)i6;
  i7 = (int)*(void**)i6;
  i7 = i7 != 0;
  if (i7) goto l3;
l4:
  i5 = i6 + 20;
  i7 = (int)*(void**)i5;
  i7 += 68;
  i7 = *(unsigned int*)i7;
  i7 = (i7 & ((unsigned int)1 << 6)) != 0;
  if (i7) goto l7;
  i4 = i6 + 4;
  i7 = (int)*(void**)i4;
  (void)memcpy((void*) (int)ext, (const void*) (int)_c5, 9);
  i4 = *(int*)(i7-8);
  Strings__Append((const unsigned char*)i7, i4, (unsigned char*)(int)ext, 256);
  i4 = (int)*(void**)i5;
  i4 += 68;
  i4 = *(unsigned int*)i4;
  i4 = (i4 & ((unsigned int)1 << 5)) != 0;
  if (i4) goto l5;
  Strings__Append((const unsigned char*)(int)_c6, 35, (unsigned char*)(int)ext, 256);
  goto l6;
l5:
  Strings__Append((const unsigned char*)(int)_c7, 31, (unsigned char*)(int)ext, 256);
  i7 = (int)*(void**)i5;
  i7 += 16;
  i7 = (int)*(void**)i7;
  i7 += 16;
  i7 = (int)*(void**)i7;
  i7 += 20;
  i4 = (int)*(void**)i7;
  i7 = *(int*)(i4-8);
  Strings__Append((const unsigned char*)i4, i7, (unsigned char*)(int)ext, 256);
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)ext, 256);
l6:
  Parameter__FatalError((const unsigned char*)(int)ext, 256);
l7:
  i7 = (int)*(void**)i5;
  i7 += 16;
  i7 = (int)*(void**)i7;
  i7 += 16;
  i7 = (int)*(void**)i7;
  i0 = (int)CodeGen__CreateProgram((External__Lib)i7);
  SymbolTable__importedMods = (void*)0;
  External__ClearLibList((External__Lib)i7);
  Error__noerr = 1;
  i7 = Error__noerr;
  if (!(i7)) goto l13;
  i7 = (int)moduleList == 0;
  if (i7) goto l13;
  i1 = i0 + 4;
  i8 = (int)moduleList;
l8:
  i6 = i8 + 12;
  i5 = *(unsigned int*)i6;
  i2 = (i5 & ((unsigned int)1 << 1)) != 0;
  if (!(i2)) goto l9;
  i4 = i8 + 20;
  i3 = (int)*(void**)i4;
  i4 = i3 + 68;
  i4 = *(unsigned int*)i4;
  i4 = (i4 & ((unsigned int)1 << 5)) != 0;
  if (!(i4)) goto l9;
  i3 += 16;
  i3 = (int)*(void**)i3;
  i2 = (int)*(void**)i1;
  i3 += 16;
  i3 = (int)*(void**)i3;
  i2 += 20;
  i4 = i3 + 20;
  i2 = (int)*(void**)i2;
  i4 = (int)*(void**)i4;
  i2 = strcmp((const char*) i4, (const char*) i2) != 0;
  if (i2) goto l11;
l9:
  i5 = (i5 & ((unsigned int)1 << 3)) != 0;
  if (i5) goto l10;
  (void)memcpy((void*) (int)ext, (const void*) (int)_c2, 31);
  i3 = i8 + 4;
  i3 = (int)*(void**)i3;
  i5 = *(int*)(i3-8);
  Strings__Append((const unsigned char*)i3, i5, (unsigned char*)(int)ext, 256);
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)ext, 256);
  Parameter__FatalError((const unsigned char*)(int)ext, 256);
  goto l12;
l10:
  (void)memcpy((void*) (int)ext, (const void*) (int)_c1, 3);
  i5 = i8 + 8;
  i2 = (int)*(void**)i5;
  i3 = *(int*)(i2-8);
  Strings__Append((const unsigned char*)i2, i3, (unsigned char*)(int)ext, 256);
  Error__VerboseMsg((const unsigned char*)(int)ext, 256);
  i2 = (int)*(void**)i5;
  i3 = *(int*)(i2-8);
  oo2c__Compile((const unsigned char*)i2, i3, (CodeGen__Program)i0, (Make__Module)i8);
  i2 = Error__noerr;
  if (!(i2)) goto l12;
  i2 = *(unsigned int*)i6;
  i2 = i2 | ((unsigned int)1 << 7);
  *(unsigned int*)i6 = i2;
  goto l12;
l11:
  i4 = i3 + 49;
  i4 = *(unsigned char*)i4;
  if (!(i4)) goto l12;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    _mem = GC_malloc_atomic(_not_zero(11*1)+8);
    if (!_mem) _new_failed(_P(8526));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = 11;
    i2 = (int)_var;
  }
  Error__sourceFile = (void*)i2;
  i2 = (int)Error__sourceFile;
  i4 = *(int*)(i2-8);
  _string_copy(i2, (int)_c8, i4);
  i2 = (int)StdPragmas__warnings;
  i4 = *(int*)(i2-4);
  i4 = (int)((_Type)i4)->tbprocs[4];
  ((_TBP_ParamOptions__BooleanOptionDesc_Set)i4)((ParamOptions__BooleanOption)i2, (unsigned char)1);
  Error__Init();
  External__ReadLibFile((External__Lib)i3, (int)0);
l12:
  i8 = (int)*(void**)i8;
  i2 = Error__noerr;
  if (!(i2)) goto l14;
  i2 = i8 != 0;
  if (i2) goto l8;
  goto l14;
l13:
  i8 = (int)moduleList;
l14:
  i7 = Error__noerr;
  if (!(i7)) goto l16;
  i7 = i0 + 4;
  CodeGen__FinishProgram((CodeGen__Program)i0);
  i0 = (int)*(void**)i7;
  Build__Executable((Make__Module)(int)moduleList, (const unsigned char*)(int)_c4, 1, (unsigned char)1, (External__Lib)i0);
  goto l16;
l15:
  i8 = (int)moduleList;
l16:
  i0 = (int)moduleList != i8;
  if (!(i0)) goto l17;
  Error__VerboseMsg((const unsigned char*)(int)_c9, 31);
  FileData__RemoveFiles();
  i0 = Error__noerr;
  if (i0) goto l17;
  Build__RemoveSymbolFiles((Make__Module)(int)moduleList);
l17:
  _top_vs = _old_top_vs;
}

void oo2c__InstallLib(const unsigned char* main__ref, int main_0d) {
  register int i0, i1, i2, i3;
  unsigned char err;
  Parameter__Filename ext;
  Parameter__Filename file;
  unsigned char* main;
  char* _old_top_vs = _top_vs;
  _push_value(int, main, main__ref, main_0d);
  Filenames__GetExt((const unsigned char*)(int)main, main_0d, (unsigned char*)(int)file, 256, (unsigned char*)(int)ext, 256);
  i0 = strcmp((const char*) (int)ext, (const char*) (int)_c0) == 0;
  if (i0) goto l0;
  i0 = ParamPaths__FindPathExt((const unsigned char*)(int)main, main_0d, (const unsigned char*)(int)_c0, 4, (unsigned char)0, (unsigned char*)(int)main, main_0d);
  goto l1;
l0:
  i0 = ParamPaths__FindPath((const unsigned char*)(int)main, main_0d, (unsigned char)1, (unsigned char*)(int)main, main_0d);
l1:
  SystemFlags__noLibFileRead = 1;
  i2 = (int)Make__GetModuleInfo((const unsigned char*)(int)main, main_0d, (unsigned char *)(int)&err);
  SystemFlags__noLibFileRead = 0;
  if (err) goto l3;
  i0 = i2 + 20;
  i1 = (int)*(void**)i0;
  i1 += 68;
  i1 = *(unsigned int*)i1;
  i1 = (i1 & ((unsigned int)1 << 6)) != 0;
  if (i1) goto l2;
  i1 = i2 + 4;
  i1 = (int)*(void**)i1;
  (void)memcpy((void*) (int)ext, (const void*) (int)_c5, 9);
  i3 = *(int*)(i1-8);
  Strings__Append((const unsigned char*)i1, i3, (unsigned char*)(int)ext, 256);
  Strings__Append((const unsigned char*)(int)_c6, 35, (unsigned char*)(int)ext, 256);
  Parameter__FatalError((const unsigned char*)(int)ext, 256);
l2:
  i1 = (int)*(void**)i0;
  i1 += 16;
  i1 = (int)*(void**)i1;
  i1 += 16;
  i1 = (int)*(void**)i1;
  Build__InstallLib((External__Lib)i1);
l3:
  _top_vs = _old_top_vs;
}

void oo2c__Makefile(const unsigned char* main__ref, int main_0d, const unsigned char* makefile__ref, int makefile_0d) {
  register int i0;
  unsigned char err;
  Parameter__Filename ext;
  Parameter__Filename file;
  Make__Module moduleList;
  unsigned char* main;
  unsigned char* makefile;
  char* _old_top_vs = _top_vs;
  _push_value(int, main, main__ref, main_0d);
  _push_value(int, makefile, makefile__ref, makefile_0d);
  Filenames__GetExt((const unsigned char*)(int)main, main_0d, (unsigned char*)(int)file, 256, (unsigned char*)(int)ext, 256);
  i0 = strcmp((const char*) (int)ext, (const char*) (int)_c0) == 0;
  if (i0) goto l0;
  i0 = ParamPaths__FindPathExt((const unsigned char*)(int)main, main_0d, (const unsigned char*)(int)_c0, 4, (unsigned char)0, (unsigned char*)(int)main, main_0d);
  goto l1;
l0:
  i0 = ParamPaths__FindPath((const unsigned char*)(int)main, main_0d, (unsigned char)1, (unsigned char*)(int)main, main_0d);
l1:
  Make__Dependencies((const unsigned char*)(int)main, main_0d, (unsigned char)0, (Make__Module *)(int)&moduleList, (unsigned char *)(int)&err);
  if (err) goto l2;
  i0 = (int)oo2c__makefileOCRules;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  Build__Makefile((Make__Module)(int)moduleList, (const unsigned char*)(int)_c4, 1, (const unsigned char*)(int)makefile, makefile_0d, (unsigned char)i0);
l2:
  _top_vs = _old_top_vs;
}

void oo2c__WriteVersion(void) {
  Out__String((const unsigned char*)(int)_c10, 4);
  Out__String((const unsigned char*)(int)_c11, 2);
  Out__String((const unsigned char*)(int)_c12, 7);
  Out__String((const unsigned char*)(int)_c13, 2);
  Out__String((const unsigned char*)(int)_c14, 6);
  Out__String((const unsigned char*)(int)_c15, 6);
  Out__String((const unsigned char*)(int)_c16, 5);
  Out__Ln();
}

void oo2c__WriteHelp(void) {
  register int i0, i1;
  Parameter__Filename arg;
  i0 = (int)ProgramArgs__args;
  i0 = (int)TextRider__ConnectReader((Channel__Channel)i0);
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[10];
  ((_TBP_TextRider__ReaderDesc_ReadLine)i1)((TextRider__Reader)i0, (unsigned char*)(int)arg, 256);
  Out__String((const unsigned char*)(int)_c18, 7);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c17, 3);
  Out__String((const unsigned char*)(int)arg, 256);
  Out__String((const unsigned char*)(int)_c19, 23);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c17, 3);
  Out__String((const unsigned char*)(int)arg, 256);
  Out__String((const unsigned char*)(int)_c20, 32);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c17, 3);
  Out__String((const unsigned char*)(int)arg, 256);
  Out__String((const unsigned char*)(int)_c21, 47);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c17, 3);
  Out__String((const unsigned char*)(int)arg, 256);
  Out__String((const unsigned char*)(int)_c22, 43);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c23, 9);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c24, 79);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c25, 77);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c26, 17);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c27, 72);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c28, 17);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c29, 21);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c30, 75);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c31, 33);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c32, 15);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c33, 72);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c34, 79);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c35, 67);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c36, 77);
  Out__Ln();
  Out__String((const unsigned char*)(int)_c37, 60);
  Out__Ln();
}

void oo2c_init(void) {
  register int i0, i1, i2;
  _mid = _register_module(&oo2c_md.md, NULL);
  ParamPaths__Init((unsigned char)1, (unsigned char)1, (unsigned char)1);
  ParamOptions__Init((signed char)1);
  ParamPragmas__Init((signed char)1);
  i1 = (int)Parameter__include;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c38, 17, (const unsigned char*)(int)_c39, 5);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c40, 5, (unsigned char)0);
  oo2c__help = (void*)i0;
  i0 = (int)ParamOptions__options;
  i2 = (int)oo2c__help;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i1)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i2);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c41, 10, (const unsigned char*)(int)_c42, 11);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c43, 13, (unsigned char)0);
  oo2c__writeVersion = (void*)i0;
  i0 = (int)ParamOptions__options;
  i1 = (int)oo2c__writeVersion;
  i2 = *(int*)(i0-4);
  i2 = (int)((_Type)i2)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i2)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i1);
  i1 = (int)ParamOptions__options;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c44, 10, (const unsigned char*)(int)_c45, 19);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c46, 12, (unsigned char)0);
  oo2c__writeConfig = (void*)i0;
  i0 = (int)ParamOptions__options;
  i2 = (int)oo2c__writeConfig;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i1)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i2);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c47, 15, (const unsigned char*)(int)_c48, 18);
  i0 = (int)ParamOptions__CreateInteger((const unsigned char*)(int)_c49, 5, (int)0, (int)0, (int)4);
  oo2c__mode = (void*)i0;
  i2 = (int)ParamOptions__options;
  i0 = (int)oo2c__mode;
  i1 = *(int*)(i2-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i1)((ParamOptions__OptionsSection)i2, (ParamOptions__Option)i0);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c50, 10, (const unsigned char*)(int)_c51, 8);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c52, 11, (const unsigned char*)(int)_c53, 22);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c54, 14, (const unsigned char*)(int)_c55, 22);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c56, 8, (unsigned char)0);
  oo2c__makeAll = (void*)i0;
  i0 = (int)ParamOptions__options;
  i1 = (int)oo2c__makeAll;
  i2 = *(int*)(i0-4);
  i2 = (int)((_Type)i2)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i2)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i1);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c57, 9, (const unsigned char*)(int)_c58, 14);
  i0 = (int)ParamOptions__CreateString((const unsigned char*)(int)_c59, 9, (const unsigned char*)(int)_c4, 1);
  oo2c__makefile = (void*)i0;
  i2 = (int)ParamOptions__options;
  i0 = (int)oo2c__makefile;
  i1 = *(int*)(i2-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i1)((ParamOptions__OptionsSection)i2, (ParamOptions__Option)i0);
  i1 = (int)ParamOptions__options;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c60, 11, (const unsigned char*)(int)_c61, 23);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c62, 16, (unsigned char)0);
  oo2c__makefileOCRules = (void*)i0;
  i2 = (int)ParamOptions__options;
  i0 = (int)oo2c__makefileOCRules;
  i1 = *(int*)(i2-4);
  i1 = (int)((_Type)i1)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i1)((ParamOptions__OptionsSection)i2, (ParamOptions__Option)i0);
  i1 = (int)ParamOptions__options;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c63, 11, (const unsigned char*)(int)_c64, 22);
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c65, 11, (unsigned char)0);
  oo2c__allocStats = (void*)i0;
  i0 = (int)ParamOptions__options;
  i1 = (int)oo2c__allocStats;
  i2 = *(int*)(i0-4);
  i2 = (int)((_Type)i2)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i2)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i1);
  i1 = (int)ParamOptions__options;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c66, 14, (const unsigned char*)(int)_c67, 17);
  i0 = (int)ParamOptions__options;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c69, 10, (const unsigned char*)(int)_c68, 3);
  StdPragmas__Init();
  i0 = (int)ParamOptions__CreateBoolean((const unsigned char*)(int)_c70, 16, (unsigned char)1);
  oo2c__useLibm = (void*)i0;
  i0 = (int)ParamPragmas__pragmas;
  i1 = (int)oo2c__useLibm;
  i2 = *(int*)(i0-4);
  i2 = (int)((_Type)i2)->tbprocs[4];
  ((_TBP_ParamOptions__OptionsSectionDesc_Add)i2)((ParamOptions__OptionsSection)i0, (ParamOptions__Option)i1);
  i1 = (int)ParamPragmas__pragmas;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i0)((Parameter__Section)i1, (const unsigned char*)(int)_c71, 10, (const unsigned char*)(int)_c68, 3);
  i0 = (int)ParamPragmas__pragmas;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c71, 10, (const unsigned char*)(int)_c68, 3);
  i0 = (int)ParamPragmas__pragmas;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c72, 9, (const unsigned char*)(int)_c73, 10);
  i0 = (int)ParamPragmas__pragmas;
  i1 = *(int*)(i0-4);
  i1 = (int)((_Type)i1)->tbprocs[2];
  ((_TBP_Parameter__SectionDesc_CmdLineOption)i1)((Parameter__Section)i0, (const unsigned char*)(int)_c74, 9, (const unsigned char*)(int)_c75, 228);
  Parameter__ParseConfigFile((const unsigned char*)(int)_c76, 22, (const unsigned char*)(int)_c77, 11, (const unsigned char*)(int)_c78, 9, (unsigned char)1, (unsigned char)0, (unsigned char*)(int)oo2c__topLevelConfig, 256);
  i0 = Parameter__ParseCmdLine((unsigned char)1, (unsigned char)1, (unsigned char)1);
  oo2c__restArg = i0;
  i0 = (int)StdPragmas__intOverflowCheck;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (!(i0)) goto l0;
  Parameter__Warning((const unsigned char*)(int)_c79, 67);
  i1 = (int)StdPragmas__intOverflowCheck;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  ((_TBP_ParamOptions__BooleanOptionDesc_Set)i0)((ParamOptions__BooleanOption)i1, (unsigned char)0);
l0:
  i0 = (int)CodeGen__translationBasis;
  i0 += 8;
  i1 = (int)*(void**)i0;
  i0 = strcmp((const char*) i1, (const char*) (int)_c80) == 0;
  if (i0) goto l1;
  i0 = strcmp((const char*) i1, (const char*) (int)_c81) == 0;
  if (i0) goto l2;
  i1 = strcmp((const char*) i1, (const char*) (int)_c82) == 0;
  if (i1) goto l2;
  Parameter__FatalError((const unsigned char*)(int)_c83, 69);
  goto l2;
l1:
  Parameter__FatalError((const unsigned char*)(int)_c84, 49);
  i1 = (int)oo2c__mode;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  ((_TBP_ParamOptions__IntegerOptionDesc_Set)i0)((ParamOptions__IntegerOption)i1, (int)1);
  i1 = (int)oo2c__makeAll;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  ((_TBP_ParamOptions__BooleanOptionDesc_Set)i0)((ParamOptions__BooleanOption)i1, (unsigned char)1);
l2:
  i1 = (int)CodeGen__optimizers;
  i0 = i1 + 8;
  i0 = (int)*(void**)i0;
  i0 = strcmp((const char*) i0, (const char*) (int)_c85) != 0;
  if (i0) goto l4;
  i0 = (int)Build__optimize;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (i0) goto l3;
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  ((_TBP_ParamOptions__StringOptionDesc_Set)i0)((ParamOptions__StringOption)i1, (const unsigned char*)(int)_c86, 7);
  goto l4;
l3:
  i0 = *(int*)(i1-4);
  i0 = (int)((_Type)i0)->tbprocs[4];
  ((_TBP_ParamOptions__StringOptionDesc_Set)i0)((ParamOptions__StringOption)i1, (const unsigned char*)(int)_c87, 15);
l4:
  CodeGen__CheckOptimizers();
  i0 = (int)oo2c__writeConfig;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (i0) goto l17;
  i0 = (int)oo2c__writeVersion;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (i0) goto l16;
  i0 = (int)oo2c__help;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (i0) goto l15;
  i0 = oo2c__restArg;
  i0 = i0 == 0;
  if (i0) goto l14;
  ParamPragmas__Save((ParamPragmas__PragmaState *)(int)&oo2c__pragmas, &ParamPragmas__PragmaState_td.td);
  i1 = (int)oo2c__mode;
  i1 += 8;
  i1 = *(int*)i1;
  i1 = i1 == 0;
  if (i1) goto l9;
  i0 = oo2c__restArg;
  i0 = i0 == 1;
  if (i0) goto l5;
  Parameter__FatalError((const unsigned char*)(int)_c88, 20);
  goto l11;
l5:
  Parameter__GetArg((short int)0, (unsigned char*)(int)oo2c__arg, 256);
  i1 = (int)oo2c__mode;
  i1 += 8;
  i1 = *(int*)i1;
  if (!(i1==1)) goto l6;
  i1 = (int)oo2c__makeAll;
  i1 += 8;
  i1 = *(unsigned char*)i1;
  oo2c__RunMake((const unsigned char*)(int)oo2c__arg, 256, (unsigned char)i1);
  goto l11;
l6:
  if (!(i1==2)) goto l7;
  i0 = (int)oo2c__makefile;
  i0 += 8;
  i1 = (int)*(void**)i0;
  i0 = *(int*)(i1-8);
  oo2c__Makefile((const unsigned char*)(int)oo2c__arg, 256, (const unsigned char*)i1, i0);
  goto l11;
l7:
  if (!(i1==3)) goto l8;
  Build__CheckLibtool();
  oo2c__MakeLib((const unsigned char*)(int)oo2c__arg, 256);
  goto l11;
l8:
  if (!(i1==4)) goto l11;
  Build__CheckLibtool();
  oo2c__InstallLib((const unsigned char*)(int)oo2c__arg, 256);
  goto l11;
l9:
  oo2c__i = 0;
l10:
  i0 = oo2c__i;
  Parameter__GetArg((short int)i0, (unsigned char*)(int)oo2c__arg, 256);
  i0 = ParamPaths__FindPath((const unsigned char*)(int)oo2c__arg, 256, (unsigned char)0, (unsigned char*)(int)oo2c__arg, 256);
  oo2c__found = i0;
  oo2c__Compile((const unsigned char*)(int)oo2c__arg, 256, (CodeGen__Program)0, (Make__Module)0);
  i0 = oo2c__i;
  i0++;
  oo2c__i = i0;
  i0 = oo2c__restArg;
  i1 = oo2c__i;
  i0 = i1 == i0;
  if (i0) goto l11;
  i0 = Error__noerr;
  if (i0) goto l10;
l11:
  i1 = Error__noerr;
  if (i1) goto l12;
  _halt(1);
  goto l13;
l12:
  i0 = (int)oo2c__allocStats;
  i0 += 8;
  i0 = *(unsigned char*)i0;
  if (!(i0)) goto l13;
  Allocate__WriteStats();
l13:
  i1 = ! i1;
  goto l18;
l14:
  Parameter__FatalError((const unsigned char*)(int)_c89, 19);
  i1 = 0;
  goto l18;
l15:
  oo2c__WriteHelp();
  i1 = 0;
  goto l18;
l16:
  oo2c__WriteVersion();
  i1 = 0;
  goto l18;
l17:
  Out__String((const unsigned char*)(int)_c90, 12);
  oo2c__WriteVersion();
  Out__String((const unsigned char*)(int)_c91, 24);
  Out__String((const unsigned char*)(int)oo2c__topLevelConfig, 256);
  Out__Ln();
  Parameter__WriteConfig();
  i1 = 0;
l18:
  if (i1) goto l19;
l19:
  ;
}
