#include "a.h"
#include "mem.h"
#include "vor.h"
#include "cvt.h"

#include "butt.h"
#include "cvt.h"
#include "cvt.impl.h"
yeah* foop_int_to_float(yeah* arg0) {
  yeah* here1 = arg0;
  yeah* harg2 = hcar(here1);
  int i = (int)getint(harg2);
  here1 = hcdr(here1);
  A(isnil(here1));
  float ret3 = int_to_float(i);
  return flote((float)ret3);
}
void cvt_impl_register() {
  register_command("int_to_float", &foop_int_to_float);
}
