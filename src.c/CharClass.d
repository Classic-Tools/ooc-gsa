/* file generated by oo2c -- do not edit */
#include "CharClass.h"
#include "Ascii.h"

/* local definitions */
unsigned char CharClass__systemEol[3];

/* function prototypes */

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[7];
} _p0 = {7, NULL, {
  (const void*)&CharClass__IsControl,
  (const void*)&CharClass__IsEol,
  (const void*)&CharClass__IsLetter,
  (const void*)&CharClass__IsLower,
  (const void*)&CharClass__IsNumeric,
  (const void*)&CharClass__IsUpper,
  (const void*)&CharClass__IsWhiteSpace,
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {1, NULL, {
  (const void*)&CharClass__systemEol,
}};
static const struct {
  int length;
  void* pad;
  const char name[10];
} _n0 = {10, NULL, {"CharClass"}};
static struct _MD CharClass_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -1780599231
  }
};

/* local strings */

