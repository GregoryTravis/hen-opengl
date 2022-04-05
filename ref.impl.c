#include "a.h"
#include "mem.h"
#include "vor.h"
#include "cvt.h"
#include "mem.h"
#include "ref.h"
#include "butt.h"
#include "ref.h"
#include "ref.impl.h"
yeah* foop_create_null_ref(yeah* arg0) {
  yeah* here1 = arg0;
  A(isnil(here1));
  void* ret2 = create_null_ref();
  return opaque((void*)ret2);
}
yeah* foop_destroy_charp_ref(yeah* arg3) {
  yeah* here4 = arg3;
  yeah* harg5 = hcar(here4);
  char** ip = (char**)opaqueval(harg5);
  here4 = hcdr(here4);
  A(isnil(here4));
  destroy_charp_ref(ip);
  return Nil;
}
yeah* foop_write_charp_ref(yeah* arg6) {
  yeah* here7 = arg6;
  yeah* harg8 = hcar(here7);
  char** ip = (char**)opaqueval(harg8);
  here7 = hcdr(here7);
  yeah* harg9 = hcar(here7);
  char* i = (char*)stringval(harg9);
  here7 = hcdr(here7);
  A(isnil(here7));
  write_charp_ref(ip, i);
  return Nil;
}
yeah* foop_read_charp_ref(yeah* arg10) {
  yeah* here11 = arg10;
  yeah* harg12 = hcar(here11);
  char** ip = (char**)opaqueval(harg12);
  here11 = hcdr(here11);
  A(isnil(here11));
  char* ret13 = read_charp_ref(ip);
  return string((char*)ret13);
}
yeah* foop_create_charp_ref(yeah* arg14) {
  yeah* here15 = arg14;
  yeah* harg16 = hcar(here15);
  char* i = (char*)stringval(harg16);
  here15 = hcdr(here15);
  A(isnil(here15));
  char** ret17 = create_charp_ref(i);
  return opaque((void*)ret17);
}
yeah* foop_destroy_float_ref(yeah* arg18) {
  yeah* here19 = arg18;
  yeah* harg20 = hcar(here19);
  float* ip = (float*)opaqueval(harg20);
  here19 = hcdr(here19);
  A(isnil(here19));
  destroy_float_ref(ip);
  return Nil;
}
yeah* foop_write_float_ref(yeah* arg21) {
  yeah* here22 = arg21;
  yeah* harg23 = hcar(here22);
  float* ip = (float*)opaqueval(harg23);
  here22 = hcdr(here22);
  yeah* harg24 = hcar(here22);
  float i = (float)getfloatcvt(harg24);
  here22 = hcdr(here22);
  A(isnil(here22));
  write_float_ref(ip, i);
  return Nil;
}
yeah* foop_read_float_ref(yeah* arg25) {
  yeah* here26 = arg25;
  yeah* harg27 = hcar(here26);
  float* ip = (float*)opaqueval(harg27);
  here26 = hcdr(here26);
  A(isnil(here26));
  float ret28 = read_float_ref(ip);
  return flote((float)ret28);
}
yeah* foop_create_float_ref(yeah* arg29) {
  yeah* here30 = arg29;
  yeah* harg31 = hcar(here30);
  float i = (float)getfloatcvt(harg31);
  here30 = hcdr(here30);
  A(isnil(here30));
  float* ret32 = create_float_ref(i);
  return opaque((void*)ret32);
}
yeah* foop_destroy_int_ref(yeah* arg33) {
  yeah* here34 = arg33;
  yeah* harg35 = hcar(here34);
  int* ip = (int*)opaqueval(harg35);
  here34 = hcdr(here34);
  A(isnil(here34));
  destroy_int_ref(ip);
  return Nil;
}
yeah* foop_write_int_ref(yeah* arg36) {
  yeah* here37 = arg36;
  yeah* harg38 = hcar(here37);
  int* ip = (int*)opaqueval(harg38);
  here37 = hcdr(here37);
  yeah* harg39 = hcar(here37);
  int i = (int)getint(harg39);
  here37 = hcdr(here37);
  A(isnil(here37));
  write_int_ref(ip, i);
  return Nil;
}
yeah* foop_read_int_ref(yeah* arg40) {
  yeah* here41 = arg40;
  yeah* harg42 = hcar(here41);
  int* ip = (int*)opaqueval(harg42);
  here41 = hcdr(here41);
  A(isnil(here41));
  int ret43 = read_int_ref(ip);
  return integer((int)ret43);
}
yeah* foop_create_int_ref(yeah* arg44) {
  yeah* here45 = arg44;
  yeah* harg46 = hcar(here45);
  int i = (int)getint(harg46);
  here45 = hcdr(here45);
  A(isnil(here45));
  int* ret47 = create_int_ref(i);
  return opaque((void*)ret47);
}
yeah* foop_strkat(yeah* arg48) {
  yeah* here49 = arg48;
  yeah* harg50 = hcar(here49);
  char* s0 = (char*)stringval(harg50);
  here49 = hcdr(here49);
  yeah* harg51 = hcar(here49);
  char* s1 = (char*)stringval(harg51);
  here49 = hcdr(here49);
  A(isnil(here49));
  char* ret52 = strkat(s0, s1);
  return string((char*)ret52);
}
yeah* foop_strdoop(yeah* arg53) {
  yeah* here54 = arg53;
  yeah* harg55 = hcar(here54);
  char* s = (char*)stringval(harg55);
  here54 = hcdr(here54);
  A(isnil(here54));
  char* ret56 = strdoop(s);
  return string((char*)ret56);
}
yeah* foop_memfill(yeah* arg57) {
  yeah* here58 = arg57;
  yeah* harg59 = hcar(here58);
  void* dest = (void*)opaqueval(harg59);
  here58 = hcdr(here58);
  yeah* harg60 = hcar(here58);
  int c = (int)getint(harg60);
  here58 = hcdr(here58);
  yeah* harg61 = hcar(here58);
  int n = (int)getint(harg61);
  here58 = hcdr(here58);
  A(isnil(here58));
  void* ret62 = memfill(dest, c, n);
  return opaque((void*)ret62);
}
yeah* foop_strkapi(yeah* arg63) {
  yeah* here64 = arg63;
  yeah* harg65 = hcar(here64);
  char* dest = (char*)stringval(harg65);
  here64 = hcdr(here64);
  yeah* harg66 = hcar(here64);
  char* src = (char*)stringval(harg66);
  here64 = hcdr(here64);
  A(isnil(here64));
  strkapi(dest, src);
  return Nil;
}
yeah* foop_memkapi(yeah* arg67) {
  yeah* here68 = arg67;
  yeah* harg69 = hcar(here68);
  void* dest = (void*)opaqueval(harg69);
  here68 = hcdr(here68);
  yeah* harg70 = hcar(here68);
  void* src = (void*)opaqueval(harg70);
  here68 = hcdr(here68);
  yeah* harg71 = hcar(here68);
  int len = (int)getint(harg71);
  here68 = hcdr(here68);
  A(isnil(here68));
  memkapi(dest, src, len);
  return Nil;
}
yeah* foop_fri_actual(yeah* arg72) {
  yeah* here73 = arg72;
  yeah* harg74 = hcar(here73);
  char* file = (char*)stringval(harg74);
  here73 = hcdr(here73);
  yeah* harg75 = hcar(here73);
  int line = (int)getint(harg75);
  here73 = hcdr(here73);
  yeah* harg76 = hcar(here73);
  void* mem = (void*)opaqueval(harg76);
  here73 = hcdr(here73);
  A(isnil(here73));
  fri_actual(file, line, mem);
  return Nil;
}
yeah* foop_realik_actual(yeah* arg77) {
  yeah* here78 = arg77;
  yeah* harg79 = hcar(here78);
  char* file = (char*)stringval(harg79);
  here78 = hcdr(here78);
  yeah* harg80 = hcar(here78);
  int line = (int)getint(harg80);
  here78 = hcdr(here78);
  yeah* harg81 = hcar(here78);
  void* mem = (void*)opaqueval(harg81);
  here78 = hcdr(here78);
  yeah* harg82 = hcar(here78);
  int size = (int)getint(harg82);
  here78 = hcdr(here78);
  A(isnil(here78));
  void* ret83 = realik_actual(file, line, mem, size);
  return opaque((void*)ret83);
}
yeah* foop_malik_actual(yeah* arg84) {
  yeah* here85 = arg84;
  yeah* harg86 = hcar(here85);
  char* file = (char*)stringval(harg86);
  here85 = hcdr(here85);
  yeah* harg87 = hcar(here85);
  int line = (int)getint(harg87);
  here85 = hcdr(here85);
  yeah* harg88 = hcar(here85);
  int size = (int)getint(harg88);
  here85 = hcdr(here85);
  A(isnil(here85));
  void* ret89 = malik_actual(file, line, size);
  return opaque((void*)ret89);
}
yeah* foop_cmalik(yeah* arg90) {
  yeah* here91 = arg90;
  yeah* harg92 = hcar(here91);
  int size = (int)getint(harg92);
  here91 = hcdr(here91);
  A(isnil(here91));
  void* ret93 = cmalik(size);
  return opaque((void*)ret93);
}
void ref_impl_register() {
  register_command("create_null_ref", &foop_create_null_ref);
  register_command("destroy_charp_ref", &foop_destroy_charp_ref);
  register_command("write_charp_ref", &foop_write_charp_ref);
  register_command("read_charp_ref", &foop_read_charp_ref);
  register_command("create_charp_ref", &foop_create_charp_ref);
  register_command("destroy_float_ref", &foop_destroy_float_ref);
  register_command("write_float_ref", &foop_write_float_ref);
  register_command("read_float_ref", &foop_read_float_ref);
  register_command("create_float_ref", &foop_create_float_ref);
  register_command("destroy_int_ref", &foop_destroy_int_ref);
  register_command("write_int_ref", &foop_write_int_ref);
  register_command("read_int_ref", &foop_read_int_ref);
  register_command("create_int_ref", &foop_create_int_ref);
  register_command("strkat", &foop_strkat);
  register_command("strdoop", &foop_strdoop);
  register_command("memfill", &foop_memfill);
  register_command("strkapi", &foop_strkapi);
  register_command("memkapi", &foop_memkapi);
  register_command("fri_actual", &foop_fri_actual);
  register_command("realik_actual", &foop_realik_actual);
  register_command("malik_actual", &foop_malik_actual);
  register_command("cmalik", &foop_cmalik);
}
