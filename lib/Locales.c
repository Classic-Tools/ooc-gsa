/*	$Id: Locales.c,v 1.6 2000/09/23 19:40:43 ooc-devel Exp $	*/
#include <limits.h>
#include <locale.h>
#include <time.h>

#include "__oo2c.h"

/* --- begin #include "Locales.d" */
#include "Locales.h"
#include "Strings.h"

/* local definitions */
LONGINT Locales__ALL;
LONGINT Locales__COLLATE;
LONGINT Locales__CTYPE;
LONGINT Locales__MONETARY;
LONGINT Locales__NUMERIC;
LONGINT Locales__TIME;

Locales__ErrorProc Locales__GetText;

/* function prototypes */

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[8];
} _n0 = {8, NULL, {"Locales"}};
static struct _MD Locales_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};
/* --- end #include "Locales.d" */

static _ModId _mid;
static struct tm Locales__base;


void Locales__RecoverPattern_ReplacePattern(const OOC_CHAR* pattern, LONGINT pattern_0d,
                                           OOC_CHAR* str, LONGINT str_0d) {
  int i;
  OOC_BOOLEAN found;
  INTEGER pos;
  OOC_CHAR src[132];

  i = strftime((char*)src, 132, (const char*)pattern, &Locales__base);
  Strings__FindNext((const OOC_CHAR*)src, 132, (const OOC_CHAR*)str, str_0d, 
		   0, &found, &pos);
  if (found) {
    i = Strings__Length(src, 132);
    Strings__Delete(str, str_0d, pos, (short int)i);
    Strings__Insert(pattern, pattern_0d, pos, str, str_0d);
  }
}

void Locales__RecoverPattern(OOC_CHAR* str, LONGINT str_0d) {
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%A", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%a", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%B", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%b", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%d", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%H", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%I", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%j", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%m", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%M", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%p", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%S", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%U", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%W", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%w", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%Y", 3, str, str_0d);
  Locales__RecoverPattern_ReplacePattern((const OOC_CHAR*)"%y", 3, str, str_0d);
}

OOC_BOOLEAN Locales__GetStr(LONGINT id, OOC_CHAR* ls, LONGINT ls_0d) {
  OOC_CHAR* str;
  struct tm tp;
  struct lconv *loc;
  LONGINT ret;

  if (id<Locales__daysOfWeek) {
    /* use the C localization information */
    loc=localeconv();
    switch (id) {
      case (Locales__decimalPoint):      str=(OOC_CHAR*)loc->decimal_point; break;
      case (Locales__thousandsSep):      str=(OOC_CHAR*)loc->thousands_sep; break;
      case (Locales__grouping):          str=(OOC_CHAR*)loc->grouping; break;
      case (Locales__intCurrencySymbol): str=(OOC_CHAR*)loc->int_curr_symbol; break;
      case (Locales__currencySymbol):    str=(OOC_CHAR*)loc->currency_symbol; break;
      case (Locales__monDecimalPoint):   str=(OOC_CHAR*)loc->mon_decimal_point; break;
      case (Locales__monThousandsSep):   str=(OOC_CHAR*)loc->mon_thousands_sep; break;
      case (Locales__monGrouping):       str=(OOC_CHAR*)loc->mon_grouping; break;
      case (Locales__positiveSign):      str=(OOC_CHAR*)loc->positive_sign; break;
      case (Locales__negativeSign):      str=(OOC_CHAR*)loc->negative_sign; break;
      default:                          return 0; break;
    }
    _string_copy(ls, str, ls_0d);
  } else if (id<Locales__months) {
    /* use the strftime routine to get the day strings */
    tp = Locales__base;
    tp.tm_wday=id-Locales__daysOfWeek;
    tp.tm_mday+=tp.tm_wday;
    ret=strftime((char*)ls, ls_0d, "%A", &tp);
  } else if (id<Locales__defTimeFormat) {
    /* use the strftime routine to get the month strings */
    tp = Locales__base;
    tp.tm_mon=id-Locales__months;
    ret=strftime((char*)ls, ls_0d, "%B", &tp);
  } else if (id==Locales__defTimeFormat) {
    tp = Locales__base;
    ret=strftime((char*)ls, ls_0d, "%X", &tp);
    Locales__RecoverPattern(ls, ls_0d);        
  } else if (id==Locales__defDateFormat) {
    tp = Locales__base;
    ret=strftime((char*)ls, ls_0d, "%x", &tp);
    Locales__RecoverPattern(ls, ls_0d); 
  } else if (id==Locales__defBothFormat) {
    tp = Locales__base;
    ret=strftime((char*)ls, ls_0d, "%c", &tp);
    Locales__RecoverPattern(ls, ls_0d); 
  } else {
    return 0;
  };
  return 1;
}

LONGINT Locales__GetInt(LONGINT id) {
  struct lconv *loc;

  loc=localeconv();
  switch (id) {
    case (Locales__intFracDigits): return loc->int_frac_digits; break;
    case (Locales__fracDigits):    return loc->frac_digits; break;
    case (Locales__pCSPrecedes):   return loc->p_cs_precedes; break;
    case (Locales__pSepBySpace):   return loc->p_sep_by_space; break;
    case (Locales__nCSPrecedes):   return loc->n_cs_precedes; break;
    case (Locales__nSepBySpace):   return loc->n_sep_by_space; break;
    case (Locales__pSignPosn):     return loc->p_sign_posn; break;
    case (Locales__nSignPosn):     return loc->n_sign_posn; break;
    default:                      return (-2147483647-1); break;
  }
}

void Locales__Set(LONGINT category, const OOC_CHAR* name, LONGINT name_0d, 
		 OOC_CHAR* old, LONGINT old_0d) {
  char* oloc;

  oloc = setlocale(category, (const char*)name);
  if (oloc) {
    _string_copy(old, oloc, old_0d);
  } else {
    _string_copy(old, "", old_0d);
  }
}

void Locales_init(void) {
  _mid = _register_module(&Locales_md.md, NULL);

  /* initialize a base date = Sunday, 22 Dec 1996, 16:02:03 */
  Locales__base.tm_sec=3; Locales__base.tm_min=2; Locales__base.tm_hour=16;
  Locales__base.tm_mday=22; Locales__base.tm_mon=11; Locales__base.tm_year=96;
  Locales__base.tm_wday=0;

  /* valid definitions for all OSes */
  Locales__ALL = LC_ALL;
  Locales__COLLATE = LC_COLLATE;
  Locales__CTYPE = LC_CTYPE;
  Locales__MONETARY = LC_MONETARY;
  Locales__NUMERIC = LC_NUMERIC;
  Locales__TIME = LC_TIME;

  /* initialize the error procedure pointer */
  Locales__GetText = NULL;
}
