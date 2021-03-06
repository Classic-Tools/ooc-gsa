/* file generated by oo2c -- do not edit */
#include "BinaryRider.h"
#include "Strings.h"

/* local definitions */
static signed char BinaryRider__systemByteOrder;
typedef struct BinaryRider__ErrorContextDesc* BinaryRider__ErrorContext;
static BinaryRider__ErrorContext BinaryRider__errorContext;

/* function prototypes */
Msg__Msg BinaryRider__GetError(int code);
void BinaryRider__SetDefaultByteOrder(unsigned char* x, int x_0d);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[4];
} _p0 = {4, NULL, {
  (const void*)&BinaryRider__ConnectReader,
  (const void*)&BinaryRider__ConnectWriter,
  (const void*)&BinaryRider__InitReader,
  (const void*)&BinaryRider__InitWriter,
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
  const char name[12];
} _n0 = {12, NULL, {"BinaryRider"}};
static struct _MD BinaryRider_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -1333355882
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n1 = {11, NULL, {"ReaderDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} BinaryRider__ReaderDesc_tdb = {
  1, 
  NULL, 
  {
    &BinaryRider__ReaderDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[19];
} _tb0 = {19, NULL, {
  (void*)BinaryRider__ReaderDesc_Pos, 
  (void*)BinaryRider__ReaderDesc_SetPos, 
  (void*)BinaryRider__ReaderDesc_ClearError, 
  (void*)BinaryRider__ReaderDesc_Available, 
  (void*)BinaryRider__ReaderDesc_ReadBytes, 
  (void*)BinaryRider__ReaderDesc_ReadBytesOrdered, 
  (void*)BinaryRider__ReaderDesc_ReadBool, 
  (void*)BinaryRider__ReaderDesc_ReadChar, 
  (void*)BinaryRider__ReaderDesc_ReadLChar, 
  (void*)BinaryRider__ReaderDesc_ReadString, 
  (void*)BinaryRider__ReaderDesc_ReadLString, 
  (void*)BinaryRider__ReaderDesc_ReadSInt, 
  (void*)BinaryRider__ReaderDesc_ReadInt, 
  (void*)BinaryRider__ReaderDesc_ReadLInt, 
  (void*)BinaryRider__ReaderDesc_ReadNum, 
  (void*)BinaryRider__ReaderDesc_ReadReal, 
  (void*)BinaryRider__ReaderDesc_ReadLReal, 
  (void*)BinaryRider__ReaderDesc_ReadSet, 
  (void*)BinaryRider__ReaderDesc_SetByteOrder
}};
struct _TD BinaryRider__ReaderDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    BinaryRider__ReaderDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &BinaryRider_md.md,
    0, 
    '0', '1',
    sizeof(BinaryRider__ReaderDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n2 = {11, NULL, {"WriterDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} BinaryRider__WriterDesc_tdb = {
  1, 
  NULL, 
  {
    &BinaryRider__WriterDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[18];
} _tb1 = {18, NULL, {
  (void*)BinaryRider__WriterDesc_Pos, 
  (void*)BinaryRider__WriterDesc_SetPos, 
  (void*)BinaryRider__WriterDesc_ClearError, 
  (void*)BinaryRider__WriterDesc_WriteBytes, 
  (void*)BinaryRider__WriterDesc_WriteBytesOrdered, 
  (void*)BinaryRider__WriterDesc_WriteBool, 
  (void*)BinaryRider__WriterDesc_WriteChar, 
  (void*)BinaryRider__WriterDesc_WriteLChar, 
  (void*)BinaryRider__WriterDesc_WriteString, 
  (void*)BinaryRider__WriterDesc_WriteLString, 
  (void*)BinaryRider__WriterDesc_WriteSInt, 
  (void*)BinaryRider__WriterDesc_WriteInt, 
  (void*)BinaryRider__WriterDesc_WriteLInt, 
  (void*)BinaryRider__WriterDesc_WriteNum, 
  (void*)BinaryRider__WriterDesc_WriteReal, 
  (void*)BinaryRider__WriterDesc_WriteLReal, 
  (void*)BinaryRider__WriterDesc_WriteSet, 
  (void*)BinaryRider__WriterDesc_SetByteOrder
}};
struct _TD BinaryRider__WriterDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    BinaryRider__WriterDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &BinaryRider_md.md,
    0, 
    '0', '1',
    sizeof(BinaryRider__WriterDesc),
    &BinaryRider__ReaderDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[17];
} _n3 = {17, NULL, {"ErrorContextDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[3];
} BinaryRider__ErrorContextDesc_tdb = {
  3, 
  NULL, 
  {
    &Msg__ContextDesc_td.td, 
    &Channel__ErrorContextDesc_td.td, 
    &BinaryRider__ErrorContextDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb2 = {1, NULL, {
  (void*)Channel__ErrorContextDesc_GetTemplate
}};
struct _TD BinaryRider__ErrorContextDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    BinaryRider__ErrorContextDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &BinaryRider_md.md,
    2, 
    '0', '1',
    sizeof(BinaryRider__ErrorContextDesc),
    &BinaryRider__WriterDesc_td.td
  }
};

/* local strings */
static const unsigned char _c0[] = "OOC:Core:BinaryRider";

