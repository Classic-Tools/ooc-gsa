/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"

static _ModId _mid;

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[7];
} _n0 = {7, NULL, {"Kernel"}};
static struct _MD Kernel_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};

/* this type descriptor is defined in __Descr.c:
static const struct {
  int length;
  void* pad;
  const char name[11];
} _n1 = {11, NULL, {"ModuleDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} Kernel_ModuleDesc__tdb = {
  1, 
  NULL, 
  {
    &Kernel_ModuleDesc__td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD Kernel_ModuleDesc__td = {
  NULL, 
  &Types_TypeDesc__td.td, 
  {
    Kernel_ModuleDesc__tdb.btypes, 
    (void**)_tb0.tbprocs, 
    (const unsigned char*)_n1.name, 
    &Kernel_md.md, 
    0, 
    '0', '1', 
    16, 
    NULL
  }
};
*/

void Kernel_init(void) {
  _mid = _register_module(&Kernel_md.md, &Kernel__ModuleDesc_td.td);
}
