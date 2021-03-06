/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "FileData.d"

static _ModId _mid;

void FileData__MarkForRemoval(const unsigned char* name__ref, int name_0d, const unsigned char* suffix__ref, int suffix_0d) {
  register int i0, i1, i2, i3;
  unsigned char* name;
  unsigned char* suffix;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  _push_value(int, suffix, suffix__ref, suffix_0d);
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(8)+8);
    if (!_mem) _new_failed(_P(1905));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &FileData__FileListDesc_td.td;
    i0 = (int)_var;
  }
  i2 = Strings__Length((const unsigned char*)(int)name, name_0d);
  i1 = Strings__Length((const unsigned char*)(int)suffix, suffix_0d);
  i1 = i2 + i1;
  i1++;
  i2 = i0 + 4;
  i3 = (int)FileData__removalList;
  *(void**)i0 = (void*)i3;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(1963));
    _mem = GC_malloc_atomic(_not_zero(i1*1)+8);
    if (!_mem) _new_failed(_P(1948));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i1 = (int)_var;
  }
  *(void**)i2 = (void*)i1;
  i2 = (int)*(void**)i2;
  i1 = *(int*)(i2-8);
  _string_copy(i2, (int)name, i1);
  Strings__Append((const unsigned char*)(int)suffix, suffix_0d, (unsigned char*)i2, i1);
  FileData__removalList = (void*)i0;
  _top_vs = _old_top_vs;
}

void FileData__GetFile_InitFile(FileData__FileData file, unsigned char* name, int name_0d, unsigned char* suffix, int suffix_0d) {
  register int i0, i1, i2;
  i0 = (int)FileData__fileList;
  *(void**)(int)file = (void*)i0;
  i0 = Strings__Length((const unsigned char*)(int)name, name_0d);
  i1 = i0 + 1;
  i0 = (int)file + 4;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(2334));
    _mem = GC_malloc_atomic(_not_zero(i1*1)+8);
    if (!_mem) _new_failed(_P(2296));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i1 = (int)_var;
  }
  *(void**)i0 = (void*)i1;
  i0 = (int)*(void**)i0;
  i1 = (int)file + 8;
  i2 = *(int*)(i0-8);
  _string_copy(i0, (int)name, i2);
  _string_copy(i1, (int)suffix, 8);
  i0 = (int)file + 16;
  *(unsigned int*)i0 = 0x0U;
  i0 = (int)file + 20;
  *(void**)i0 = (void*)0;
  i0 = (int)file + 32;
  *(void**)i0 = (void*)0;
  FileData__fileList = (void*)(int)file;
}

FileData__FileData FileData__GetFile(const unsigned char* name__ref, int name_0d, const unsigned char* suffix__ref, int suffix_0d) {
  register int i0, i1, i2;
  unsigned char* name;
  unsigned char* suffix;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  _push_value(int, suffix, suffix__ref, suffix_0d);
  i0 = (int)FileData__fileList;
  i1 = i0 == 0;
  if (i1) goto l0;
  i2 = i0 + 4;
  i2 = (int)*(void**)i2;
  i2 = strcmp((const char*) (int)name, (const char*) i2) != 0;
  if (i2) goto l1;
  i2 = i0 + 8;
  i2 = strcmp((const char*) (int)suffix, (const char*) i2) != 0;
  if (i2) goto l1;
l0:
  i2 = i0;
  goto l3;
l1:
  i2 = i0;
l2:
  i2 = (int)*(void**)i2;
  i1 = i2 == 0;
  if (i1) goto l3;
  i1 = i2 + 4;
  i1 = (int)*(void**)i1;
  i1 = strcmp((const char*) (int)name, (const char*) i1) != 0;
  if (i1) goto l2;
  i1 = i2 + 8;
  i1 = strcmp((const char*) (int)suffix, (const char*) i1) != 0;
  if (i1) goto l2;
l3:
  i1 = i2 == 0;
  if (!(i1)) goto l4;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(36)+8);
    if (!_mem) _new_failed(_P(2716));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &FileData__FileDataDesc_td.td;
    i2 = (int)_var;
  }
  FileData__GetFile_InitFile((FileData__FileData)i2, (unsigned char*)(int)name, name_0d, (unsigned char*)(int)suffix, suffix_0d);
l4:
  _top_vs = _old_top_vs;
  return (void*)i2;
}

void FileData__AddDependence(FileData__FileData file, const unsigned char* depName__ref, int depName_0d, const unsigned char* depSuffix__ref, int depSuffix_0d) {
  register int i0, i1, i2, i3, i4;
  unsigned char* depName;
  unsigned char* depSuffix;
  char* _old_top_vs = _top_vs;
  _push_value(int, depName, depName__ref, depName_0d);
  _push_value(int, depSuffix, depSuffix__ref, depSuffix_0d);
  i3 = (int)file + 32;
  i2 = (int)*(void**)i3;
  i0 = i2 == 0;
  if (i0) goto l0;
  i1 = i2 + 4;
  i1 = (int)*(void**)i1;
  i4 = i1 + 4;
  i4 = (int)*(void**)i4;
  i4 = strcmp((const char*) (int)depName, (const char*) i4) != 0;
  if (i4) goto l1;
  i1 += 8;
  i1 = strcmp((const char*) (int)depSuffix, (const char*) i1) != 0;
  if (i1) goto l1;
l0:
  i4 = i2;
  goto l3;
l1:
  i4 = i2;
l2:
  i4 = (int)*(void**)i4;
  i0 = i4 == 0;
  if (i0) goto l3;
  i0 = i4 + 4;
  i0 = (int)*(void**)i0;
  i1 = i0 + 4;
  i1 = (int)*(void**)i1;
  i1 = strcmp((const char*) (int)depName, (const char*) i1) != 0;
  if (i1) goto l2;
  i0 += 8;
  i0 = strcmp((const char*) (int)depSuffix, (const char*) i0) != 0;
  if (i0) goto l2;
l3:
  i0 = i4 == 0;
  if (!(i0)) goto l4;
  {
    char *_mem, *_var;
    _mem = GC_malloc(_not_zero(8)+8);
    if (!_mem) _new_failed(_P(3190));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &FileData__DependenceDesc_td.td;
    i1 = (int)_var;
  }
  i2 = (int)FileData__GetFile((const unsigned char*)(int)depName, depName_0d, (const unsigned char*)(int)depSuffix, depSuffix_0d);
  i0 = i1 + 4;
  *(void**)i0 = (void*)i2;
  i0 = (int)*(void**)i3;
  *(void**)i3 = (void*)i1;
  *(void**)i1 = (void*)i0;
l4:
  _top_vs = _old_top_vs;
}

void FileData__SetFilename(FileData__FileData file, unsigned char* filename, int filename_0d) {
  register int i0, i1, i2, i3;
  i0 = Strings__Length((const unsigned char*)(int)filename, filename_0d);
  i1 = i0 + 1;
  i0 = (int)file + 20;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(3465));
    _mem = GC_malloc_atomic(_not_zero(i1*1)+8);
    if (!_mem) _new_failed(_P(3419));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i1 = (int)_var;
  }
  *(void**)i0 = (void*)i1;
  i3 = (int)*(void**)i0;
  i0 = (int)file + 16;
  i1 = *(int*)(i3-8);
  i2 = *(unsigned int*)i0;
  _string_copy(i3, (int)filename, i1);
  i1 = i2 | ((unsigned int)1 << 0);
  *(unsigned int*)i0 = i1;
}

void FileData__SetTimeStamp(FileData__FileData file) {
  register int i0, i1, i2, i3, i4;
  unsigned char msg[291];
  Msg__Msg res;
  i3 = (int)file + 16;
  i0 = *(unsigned int*)i3;
  i0 = (i0 & ((unsigned int)1 << 1)) != 0;
  if (i0) goto l1;
  i4 = (int)file + 20;
  i2 = (int)*(void**)i4;
  i0 = (int)file + 24;
  i1 = *(int*)(i2-8);
  Files__GetModTime((const unsigned char*)i2, i1, (Time__TimeStamp *)i0, &Time__TimeStamp_td.td, (Msg__Msg *)(int)&res);
  i2 = (int)res == 0;
  if (i2) goto l0;
  i4 = (int)*(void**)i4;
  (void)memcpy((void*) (int)msg, (const void*) (int)_c0, 34);
  i2 = *(int*)(i4-8);
  Strings__Append((const unsigned char*)i4, i2, (unsigned char*)(int)msg, 291);
  Strings__Append((const unsigned char*)(int)_c1, 2, (unsigned char*)(int)msg, 291);
  Parameter__FatalError((const unsigned char*)(int)msg, 291);
l0:
  i2 = *(unsigned int*)i3;
  i2 = i2 | ((unsigned int)1 << 1);
  *(unsigned int*)i3 = i2;
l1:
  ;
}

FileData__FileData FileData__FindFile(const unsigned char* name__ref, int name_0d, const unsigned char* suffix__ref, int suffix_0d, unsigned char timeStamp) {
  register int i0, i1, i2, i3;
  Parameter__Filename filename;
  unsigned char* name;
  unsigned char* suffix;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  _push_value(int, suffix, suffix__ref, suffix_0d);
  i2 = (int)FileData__GetFile((const unsigned char*)(int)name, name_0d, (const unsigned char*)(int)suffix, suffix_0d);
  i1 = i2 + 16;
  Strings__Delete((unsigned char*)(int)suffix, suffix_0d, (short int)0, (short int)1);
  i0 = *(unsigned int*)i1;
  i0 = (i0 & ((unsigned int)1 << 0)) != 0;
  if (i0) goto l0;
  i3 = ParamPaths__FindPathExt((const unsigned char*)(int)name, name_0d, (const unsigned char*)(int)suffix, suffix_0d, (unsigned char)0, (unsigned char*)(int)filename, 256);
  FileData__SetFilename((FileData__FileData)i2, (unsigned char*)(int)filename, 256);
  if (!(i3)) goto l1;
  i0 = *(unsigned int*)i1;
  i0 = i0 | ((unsigned int)1 << 2);
  *(unsigned int*)i1 = i0;
  goto l1;
l0:
  i3 = 1;
l1:
  if (!(i3)) goto l2;
  if (!(timeStamp)) goto l2;
  FileData__SetTimeStamp((FileData__FileData)i2);
l2:
  _top_vs = _old_top_vs;
  return (void*)i2;
}

FileData__FileData FileData__NewFile(const unsigned char* name__ref, int name_0d, const unsigned char* suffix__ref, int suffix_0d) {
  register int i0, i1, i2;
  Parameter__Filename filename;
  unsigned char* name;
  unsigned char* suffix;
  char* _old_top_vs = _top_vs;
  _push_value(int, name, name__ref, name_0d);
  _push_value(int, suffix, suffix__ref, suffix_0d);
  i0 = *(unsigned char*)(int)suffix;
  i1 = i0 == 46;
  i0 = (int)FileData__GetFile((const unsigned char*)(int)name, name_0d, (const unsigned char*)(int)suffix, suffix_0d);
  if (i1) goto l0;
  ParamPaths__GeneratePath((const unsigned char*)(int)name, name_0d, (unsigned char*)(int)filename, 256);
  goto l1;
l0:
  Strings__Delete((unsigned char*)(int)suffix, suffix_0d, (short int)0, (short int)1);
  ParamPaths__GeneratePathExt((const unsigned char*)(int)name, name_0d, (const unsigned char*)(int)suffix, suffix_0d, (unsigned char*)(int)filename, 256);
l1:
  i1 = i0 + 16;
  FileData__SetFilename((FileData__FileData)i0, (unsigned char*)(int)filename, 256);
  i2 = *(unsigned int*)i1;
  i2 = i2 | ((unsigned int)1 << 2);
  *(unsigned int*)i1 = i2;
  _top_vs = _old_top_vs;
  return (void*)i0;
}

void FileData__ClearFiles(void) {
  FileData__fileList = (void*)0;
}

void FileData__RemoveFiles_ExecCmd(short int *FileData__RemoveFiles_cmdLen, unsigned char FileData__RemoveFiles_cmd[2048]) {
  register int i0;
  i0 = *FileData__RemoveFiles_cmdLen;
  i0 = i0 == 0;
  if (i0) goto l0;
  i0 = Rts_System((const unsigned char*)(int)FileData__RemoveFiles_cmd);
  *FileData__RemoveFiles_cmdLen = 0;
l0:
  ;
}

void FileData__RemoveFiles_AddFile(unsigned char* file, int file_0d, short int *FileData__RemoveFiles_cmdLen, unsigned char FileData__RemoveFiles_cmd[2048]) {
  register int i0, i1, i2;
  i0 = Strings__Length((const unsigned char*)(int)file, file_0d);
  i1 = *FileData__RemoveFiles_cmdLen;
  i2 = i0 + i1;
  i2 += 2;
  i2 = i2 < 2048;
  if (i2) goto l0;
  FileData__RemoveFiles_ExecCmd(&*FileData__RemoveFiles_cmdLen, FileData__RemoveFiles_cmd);
l0:
  i1 = *FileData__RemoveFiles_cmdLen;
  i1 = i1 != 0;
  if (i1) goto l1;
  _string_copy((int)FileData__RemoveFiles_cmd, (int)_c2, 2048);
  i1 = Strings__Length((const unsigned char*)(int)FileData__RemoveFiles_cmd, 2048);
  *FileData__RemoveFiles_cmdLen = i1;
l1:
  i2 = *FileData__RemoveFiles_cmdLen;
  i1 = (int)FileData__RemoveFiles_cmd + i2;
  *(unsigned char*)i1 = 32;
  i1 = *FileData__RemoveFiles_cmdLen;
  i2 = i1 + 1;
  i1 = (int)FileData__RemoveFiles_cmd + i2;
  *(unsigned char*)i1 = 0;
  i0++;
  Strings__Append((const unsigned char*)(int)file, file_0d, (unsigned char*)(int)FileData__RemoveFiles_cmd, 2048);
  i1 = *FileData__RemoveFiles_cmdLen;
  i0 = i1 + i0;
  *FileData__RemoveFiles_cmdLen = i0;
}

void FileData__RemoveFiles(void) {
  register int i0, i1, i2;
  unsigned char cmd[2048];
  short int cmdLen;
  i0 = (int)FileData__removalList;
  i0 = i0 != 0;
  if (i0) goto l0;
  i0 = 0;
  goto l3;
l0:
  i0 = 0;
l1:
  i1 = (int)FileData__removalList;
  i2 = (int)*(void**)i1;
  FileData__removalList = (void*)i2;
  i1 += 4;
  i2 = (int)*(void**)i1;
  i1 = *(int*)(i2-8);
  cmdLen = (short int)i0;
  cmdLen = (short int)i0;
  FileData__RemoveFiles_AddFile((unsigned char*)i2, i1, &cmdLen, cmd);
  i0 = (int)FileData__removalList;
  i0 = i0 == 0;
  if (i0) goto l2;
  i0 = cmdLen;
  goto l1;
l2:
  i0 = cmdLen;
l3:
  cmdLen = (short int)i0;
  cmdLen = (short int)i0;
  FileData__RemoveFiles_ExecCmd(&cmdLen, cmd);
}

void FileData_init(void) {
  _mid = _register_module(&FileData_md.md, &FileData__FileListDesc_td.td);
  FileData__removalList = (void*)0;
  FileData__ClearFiles();
  Termination__RegisterProc((Termination__Proc)(int)&FileData__RemoveFiles);
}
