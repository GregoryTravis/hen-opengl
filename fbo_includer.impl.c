#include "a.h"
#include "mem.h"
#include "vor.h"
#include "cvt.h"
#include "GLee.h"
#include "OpenGL/gl.h"
#include "GLUT/glut.h"
#include "OpenGL/glext.h"
#include "OpenGL/glu.h"
#include "butt.h"
#include "fbo_includer.impl.h"
typedef void (*uuint_void)(int);
static uuint_void uuint_void_wrap(yeah* fun);
typedef void (*uuint_int_int_void)(int, int, int);
static uuint_int_int_void uuint_int_int_void_wrap(yeah* fun);
typedef void (*uuunsigned_int_int_int_void)(unsigned, int, int, int);
static uuunsigned_int_int_int_void uuunsigned_int_int_int_void_wrap(yeah* fun);
typedef void (*uuunsigned_char_int_int_void)(unsigned char, int, int);
static uuunsigned_char_int_int_void uuunsigned_char_int_int_void_wrap(yeah* fun);
typedef void (*uuint_int_void)(int, int);
static uuint_int_void uuint_int_void_wrap(yeah* fun);
typedef void (*uuint_int_int_int_void)(int, int, int, int);
static uuint_int_int_int_void uuint_int_int_int_void_wrap(yeah* fun);
typedef GLvoid (*uuGLvoid)();
static uuGLvoid uuGLvoid_wrap(yeah* fun);
typedef void (*uuvoid_void)();
static uuvoid_void uuvoid_void_wrap(yeah* fun);
static void cb_uuint_void_0(int bloot435);
static void cb_uuint_void_1(int bloot435);
static void cb_uuint_void_2(int bloot435);
static void cb_uuint_void_3(int bloot435);
static uuint_void uuint_void_cbs[4] = {
  &cb_uuint_void_0,
  &cb_uuint_void_1,
  &cb_uuint_void_2,
  &cb_uuint_void_3,
};
    static yeah* hen_cbs_uuint_void[4];
static void cb_uuint_void_0(int bloot435) {
  yeah* _bloot435 = integer((int)bloot435);
  yeah* __arg = pair(_bloot435, Nil);
  evl_from_callback(app(hen_cbs_uuint_void[0], __arg));
}
static void cb_uuint_void_1(int bloot435) {
  yeah* _bloot435 = integer((int)bloot435);
  yeah* __arg = pair(_bloot435, Nil);
  evl_from_callback(app(hen_cbs_uuint_void[1], __arg));
}
static void cb_uuint_void_2(int bloot435) {
  yeah* _bloot435 = integer((int)bloot435);
  yeah* __arg = pair(_bloot435, Nil);
  evl_from_callback(app(hen_cbs_uuint_void[2], __arg));
}
static void cb_uuint_void_3(int bloot435) {
  yeah* _bloot435 = integer((int)bloot435);
  yeah* __arg = pair(_bloot435, Nil);
  evl_from_callback(app(hen_cbs_uuint_void[3], __arg));
}
static int uuint_void_cbs_inx = 0;
static uuint_void uuint_void_wrap(yeah* fun) {
  int inx = uuint_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuint_void[inx] = fun;
  return uuint_void_cbs[inx];
}
static void cb_uuint_int_int_void_0(int bloot436, int bloot437, int bloot438);
static void cb_uuint_int_int_void_1(int bloot436, int bloot437, int bloot438);
static void cb_uuint_int_int_void_2(int bloot436, int bloot437, int bloot438);
static void cb_uuint_int_int_void_3(int bloot436, int bloot437, int bloot438);
static uuint_int_int_void uuint_int_int_void_cbs[4] = {
  &cb_uuint_int_int_void_0,
  &cb_uuint_int_int_void_1,
  &cb_uuint_int_int_void_2,
  &cb_uuint_int_int_void_3,
};
    static yeah* hen_cbs_uuint_int_int_void[4];
static void cb_uuint_int_int_void_0(int bloot436, int bloot437, int bloot438) {
  yeah* _bloot436 = integer((int)bloot436);
  yeah* _bloot437 = integer((int)bloot437);
  yeah* _bloot438 = integer((int)bloot438);
  yeah* __arg = pair(_bloot436, pair(_bloot437, pair(_bloot438, Nil)));
  evl_from_callback(app(hen_cbs_uuint_int_int_void[0], __arg));
}
static void cb_uuint_int_int_void_1(int bloot436, int bloot437, int bloot438) {
  yeah* _bloot436 = integer((int)bloot436);
  yeah* _bloot437 = integer((int)bloot437);
  yeah* _bloot438 = integer((int)bloot438);
  yeah* __arg = pair(_bloot436, pair(_bloot437, pair(_bloot438, Nil)));
  evl_from_callback(app(hen_cbs_uuint_int_int_void[1], __arg));
}
static void cb_uuint_int_int_void_2(int bloot436, int bloot437, int bloot438) {
  yeah* _bloot436 = integer((int)bloot436);
  yeah* _bloot437 = integer((int)bloot437);
  yeah* _bloot438 = integer((int)bloot438);
  yeah* __arg = pair(_bloot436, pair(_bloot437, pair(_bloot438, Nil)));
  evl_from_callback(app(hen_cbs_uuint_int_int_void[2], __arg));
}
static void cb_uuint_int_int_void_3(int bloot436, int bloot437, int bloot438) {
  yeah* _bloot436 = integer((int)bloot436);
  yeah* _bloot437 = integer((int)bloot437);
  yeah* _bloot438 = integer((int)bloot438);
  yeah* __arg = pair(_bloot436, pair(_bloot437, pair(_bloot438, Nil)));
  evl_from_callback(app(hen_cbs_uuint_int_int_void[3], __arg));
}
static int uuint_int_int_void_cbs_inx = 0;
static uuint_int_int_void uuint_int_int_void_wrap(yeah* fun) {
  int inx = uuint_int_int_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuint_int_int_void[inx] = fun;
  return uuint_int_int_void_cbs[inx];
}
static void cb_uuunsigned_int_int_int_void_0(unsigned bloot439, int bloot440, int bloot441, int bloot442);
static void cb_uuunsigned_int_int_int_void_1(unsigned bloot439, int bloot440, int bloot441, int bloot442);
static void cb_uuunsigned_int_int_int_void_2(unsigned bloot439, int bloot440, int bloot441, int bloot442);
static void cb_uuunsigned_int_int_int_void_3(unsigned bloot439, int bloot440, int bloot441, int bloot442);
static uuunsigned_int_int_int_void uuunsigned_int_int_int_void_cbs[4] = {
  &cb_uuunsigned_int_int_int_void_0,
  &cb_uuunsigned_int_int_int_void_1,
  &cb_uuunsigned_int_int_int_void_2,
  &cb_uuunsigned_int_int_int_void_3,
};
    static yeah* hen_cbs_uuunsigned_int_int_int_void[4];
static void cb_uuunsigned_int_int_int_void_0(unsigned bloot439, int bloot440, int bloot441, int bloot442) {
  yeah* _bloot439 = integer((int)bloot439);
  yeah* _bloot440 = integer((int)bloot440);
  yeah* _bloot441 = integer((int)bloot441);
  yeah* _bloot442 = integer((int)bloot442);
  yeah* __arg = pair(_bloot439, pair(_bloot440, pair(_bloot441, pair(_bloot442, Nil))));
  evl_from_callback(app(hen_cbs_uuunsigned_int_int_int_void[0], __arg));
}
static void cb_uuunsigned_int_int_int_void_1(unsigned bloot439, int bloot440, int bloot441, int bloot442) {
  yeah* _bloot439 = integer((int)bloot439);
  yeah* _bloot440 = integer((int)bloot440);
  yeah* _bloot441 = integer((int)bloot441);
  yeah* _bloot442 = integer((int)bloot442);
  yeah* __arg = pair(_bloot439, pair(_bloot440, pair(_bloot441, pair(_bloot442, Nil))));
  evl_from_callback(app(hen_cbs_uuunsigned_int_int_int_void[1], __arg));
}
static void cb_uuunsigned_int_int_int_void_2(unsigned bloot439, int bloot440, int bloot441, int bloot442) {
  yeah* _bloot439 = integer((int)bloot439);
  yeah* _bloot440 = integer((int)bloot440);
  yeah* _bloot441 = integer((int)bloot441);
  yeah* _bloot442 = integer((int)bloot442);
  yeah* __arg = pair(_bloot439, pair(_bloot440, pair(_bloot441, pair(_bloot442, Nil))));
  evl_from_callback(app(hen_cbs_uuunsigned_int_int_int_void[2], __arg));
}
static void cb_uuunsigned_int_int_int_void_3(unsigned bloot439, int bloot440, int bloot441, int bloot442) {
  yeah* _bloot439 = integer((int)bloot439);
  yeah* _bloot440 = integer((int)bloot440);
  yeah* _bloot441 = integer((int)bloot441);
  yeah* _bloot442 = integer((int)bloot442);
  yeah* __arg = pair(_bloot439, pair(_bloot440, pair(_bloot441, pair(_bloot442, Nil))));
  evl_from_callback(app(hen_cbs_uuunsigned_int_int_int_void[3], __arg));
}
static int uuunsigned_int_int_int_void_cbs_inx = 0;
static uuunsigned_int_int_int_void uuunsigned_int_int_int_void_wrap(yeah* fun) {
  int inx = uuunsigned_int_int_int_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuunsigned_int_int_int_void[inx] = fun;
  return uuunsigned_int_int_int_void_cbs[inx];
}
static void cb_uuunsigned_char_int_int_void_0(unsigned char bloot443, int bloot444, int bloot445);
static void cb_uuunsigned_char_int_int_void_1(unsigned char bloot443, int bloot444, int bloot445);
static void cb_uuunsigned_char_int_int_void_2(unsigned char bloot443, int bloot444, int bloot445);
static void cb_uuunsigned_char_int_int_void_3(unsigned char bloot443, int bloot444, int bloot445);
static uuunsigned_char_int_int_void uuunsigned_char_int_int_void_cbs[4] = {
  &cb_uuunsigned_char_int_int_void_0,
  &cb_uuunsigned_char_int_int_void_1,
  &cb_uuunsigned_char_int_int_void_2,
  &cb_uuunsigned_char_int_int_void_3,
};
    static yeah* hen_cbs_uuunsigned_char_int_int_void[4];
static void cb_uuunsigned_char_int_int_void_0(unsigned char bloot443, int bloot444, int bloot445) {
  yeah* _bloot443 = integer((int)bloot443);
  yeah* _bloot444 = integer((int)bloot444);
  yeah* _bloot445 = integer((int)bloot445);
  yeah* __arg = pair(_bloot443, pair(_bloot444, pair(_bloot445, Nil)));
  evl_from_callback(app(hen_cbs_uuunsigned_char_int_int_void[0], __arg));
}
static void cb_uuunsigned_char_int_int_void_1(unsigned char bloot443, int bloot444, int bloot445) {
  yeah* _bloot443 = integer((int)bloot443);
  yeah* _bloot444 = integer((int)bloot444);
  yeah* _bloot445 = integer((int)bloot445);
  yeah* __arg = pair(_bloot443, pair(_bloot444, pair(_bloot445, Nil)));
  evl_from_callback(app(hen_cbs_uuunsigned_char_int_int_void[1], __arg));
}
static void cb_uuunsigned_char_int_int_void_2(unsigned char bloot443, int bloot444, int bloot445) {
  yeah* _bloot443 = integer((int)bloot443);
  yeah* _bloot444 = integer((int)bloot444);
  yeah* _bloot445 = integer((int)bloot445);
  yeah* __arg = pair(_bloot443, pair(_bloot444, pair(_bloot445, Nil)));
  evl_from_callback(app(hen_cbs_uuunsigned_char_int_int_void[2], __arg));
}
static void cb_uuunsigned_char_int_int_void_3(unsigned char bloot443, int bloot444, int bloot445) {
  yeah* _bloot443 = integer((int)bloot443);
  yeah* _bloot444 = integer((int)bloot444);
  yeah* _bloot445 = integer((int)bloot445);
  yeah* __arg = pair(_bloot443, pair(_bloot444, pair(_bloot445, Nil)));
  evl_from_callback(app(hen_cbs_uuunsigned_char_int_int_void[3], __arg));
}
static int uuunsigned_char_int_int_void_cbs_inx = 0;
static uuunsigned_char_int_int_void uuunsigned_char_int_int_void_wrap(yeah* fun) {
  int inx = uuunsigned_char_int_int_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuunsigned_char_int_int_void[inx] = fun;
  return uuunsigned_char_int_int_void_cbs[inx];
}
static void cb_uuint_int_void_0(int bloot446, int bloot447);
static void cb_uuint_int_void_1(int bloot446, int bloot447);
static void cb_uuint_int_void_2(int bloot446, int bloot447);
static void cb_uuint_int_void_3(int bloot446, int bloot447);
static uuint_int_void uuint_int_void_cbs[4] = {
  &cb_uuint_int_void_0,
  &cb_uuint_int_void_1,
  &cb_uuint_int_void_2,
  &cb_uuint_int_void_3,
};
    static yeah* hen_cbs_uuint_int_void[4];
static void cb_uuint_int_void_0(int bloot446, int bloot447) {
  yeah* _bloot446 = integer((int)bloot446);
  yeah* _bloot447 = integer((int)bloot447);
  yeah* __arg = pair(_bloot446, pair(_bloot447, Nil));
  evl_from_callback(app(hen_cbs_uuint_int_void[0], __arg));
}
static void cb_uuint_int_void_1(int bloot446, int bloot447) {
  yeah* _bloot446 = integer((int)bloot446);
  yeah* _bloot447 = integer((int)bloot447);
  yeah* __arg = pair(_bloot446, pair(_bloot447, Nil));
  evl_from_callback(app(hen_cbs_uuint_int_void[1], __arg));
}
static void cb_uuint_int_void_2(int bloot446, int bloot447) {
  yeah* _bloot446 = integer((int)bloot446);
  yeah* _bloot447 = integer((int)bloot447);
  yeah* __arg = pair(_bloot446, pair(_bloot447, Nil));
  evl_from_callback(app(hen_cbs_uuint_int_void[2], __arg));
}
static void cb_uuint_int_void_3(int bloot446, int bloot447) {
  yeah* _bloot446 = integer((int)bloot446);
  yeah* _bloot447 = integer((int)bloot447);
  yeah* __arg = pair(_bloot446, pair(_bloot447, Nil));
  evl_from_callback(app(hen_cbs_uuint_int_void[3], __arg));
}
static int uuint_int_void_cbs_inx = 0;
static uuint_int_void uuint_int_void_wrap(yeah* fun) {
  int inx = uuint_int_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuint_int_void[inx] = fun;
  return uuint_int_void_cbs[inx];
}
static void cb_uuint_int_int_int_void_0(int bloot448, int bloot449, int bloot450, int bloot451);
static void cb_uuint_int_int_int_void_1(int bloot448, int bloot449, int bloot450, int bloot451);
static void cb_uuint_int_int_int_void_2(int bloot448, int bloot449, int bloot450, int bloot451);
static void cb_uuint_int_int_int_void_3(int bloot448, int bloot449, int bloot450, int bloot451);
static uuint_int_int_int_void uuint_int_int_int_void_cbs[4] = {
  &cb_uuint_int_int_int_void_0,
  &cb_uuint_int_int_int_void_1,
  &cb_uuint_int_int_int_void_2,
  &cb_uuint_int_int_int_void_3,
};
    static yeah* hen_cbs_uuint_int_int_int_void[4];
static void cb_uuint_int_int_int_void_0(int bloot448, int bloot449, int bloot450, int bloot451) {
  yeah* _bloot448 = integer((int)bloot448);
  yeah* _bloot449 = integer((int)bloot449);
  yeah* _bloot450 = integer((int)bloot450);
  yeah* _bloot451 = integer((int)bloot451);
  yeah* __arg = pair(_bloot448, pair(_bloot449, pair(_bloot450, pair(_bloot451, Nil))));
  evl_from_callback(app(hen_cbs_uuint_int_int_int_void[0], __arg));
}
static void cb_uuint_int_int_int_void_1(int bloot448, int bloot449, int bloot450, int bloot451) {
  yeah* _bloot448 = integer((int)bloot448);
  yeah* _bloot449 = integer((int)bloot449);
  yeah* _bloot450 = integer((int)bloot450);
  yeah* _bloot451 = integer((int)bloot451);
  yeah* __arg = pair(_bloot448, pair(_bloot449, pair(_bloot450, pair(_bloot451, Nil))));
  evl_from_callback(app(hen_cbs_uuint_int_int_int_void[1], __arg));
}
static void cb_uuint_int_int_int_void_2(int bloot448, int bloot449, int bloot450, int bloot451) {
  yeah* _bloot448 = integer((int)bloot448);
  yeah* _bloot449 = integer((int)bloot449);
  yeah* _bloot450 = integer((int)bloot450);
  yeah* _bloot451 = integer((int)bloot451);
  yeah* __arg = pair(_bloot448, pair(_bloot449, pair(_bloot450, pair(_bloot451, Nil))));
  evl_from_callback(app(hen_cbs_uuint_int_int_int_void[2], __arg));
}
static void cb_uuint_int_int_int_void_3(int bloot448, int bloot449, int bloot450, int bloot451) {
  yeah* _bloot448 = integer((int)bloot448);
  yeah* _bloot449 = integer((int)bloot449);
  yeah* _bloot450 = integer((int)bloot450);
  yeah* _bloot451 = integer((int)bloot451);
  yeah* __arg = pair(_bloot448, pair(_bloot449, pair(_bloot450, pair(_bloot451, Nil))));
  evl_from_callback(app(hen_cbs_uuint_int_int_int_void[3], __arg));
}
static int uuint_int_int_int_void_cbs_inx = 0;
static uuint_int_int_int_void uuint_int_int_int_void_wrap(yeah* fun) {
  int inx = uuint_int_int_int_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuint_int_int_int_void[inx] = fun;
  return uuint_int_int_int_void_cbs[inx];
}
static GLvoid cb_uuGLvoid_0();
static GLvoid cb_uuGLvoid_1();
static GLvoid cb_uuGLvoid_2();
static GLvoid cb_uuGLvoid_3();
static uuGLvoid uuGLvoid_cbs[4] = {
  &cb_uuGLvoid_0,
  &cb_uuGLvoid_1,
  &cb_uuGLvoid_2,
  &cb_uuGLvoid_3,
};
    static yeah* hen_cbs_uuGLvoid[4];
static GLvoid cb_uuGLvoid_0() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuGLvoid[0], __arg));
}
static GLvoid cb_uuGLvoid_1() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuGLvoid[1], __arg));
}
static GLvoid cb_uuGLvoid_2() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuGLvoid[2], __arg));
}
static GLvoid cb_uuGLvoid_3() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuGLvoid[3], __arg));
}
static int uuGLvoid_cbs_inx = 0;
static uuGLvoid uuGLvoid_wrap(yeah* fun) {
  int inx = uuGLvoid_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuGLvoid[inx] = fun;
  return uuGLvoid_cbs[inx];
}
static void cb_uuvoid_void_0();
static void cb_uuvoid_void_1();
static void cb_uuvoid_void_2();
static void cb_uuvoid_void_3();
static uuvoid_void uuvoid_void_cbs[4] = {
  &cb_uuvoid_void_0,
  &cb_uuvoid_void_1,
  &cb_uuvoid_void_2,
  &cb_uuvoid_void_3,
};
    static yeah* hen_cbs_uuvoid_void[4];
static void cb_uuvoid_void_0() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuvoid_void[0], __arg));
}
static void cb_uuvoid_void_1() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuvoid_void[1], __arg));
}
static void cb_uuvoid_void_2() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuvoid_void[2], __arg));
}
static void cb_uuvoid_void_3() {
  yeah* __arg = Nil;
  evl_from_callback(app(hen_cbs_uuvoid_void[3], __arg));
}
static int uuvoid_void_cbs_inx = 0;
static uuvoid_void uuvoid_void_wrap(yeah* fun) {
  int inx = uuvoid_void_cbs_inx++;
  A(inx < 4);
  hen_cbs_uuvoid_void[inx] = fun;
  return uuvoid_void_cbs[inx];
}
yeah* foop_glutGameModeGet(yeah* arg452) {
  yeah* here453 = arg452;
  yeah* harg454 = hcar(here453);
  GLenum mode = (GLenum)getint(harg454);
  here453 = hcdr(here453);
  A(isnil(here453));
  int ret455 = glutGameModeGet(mode);
  return integer((int)ret455);
}
yeah* foop_glutLeaveGameMode(yeah* arg456) {
  yeah* here457 = arg456;
  A(isnil(here457));
  glutLeaveGameMode();
  return Nil;
}
yeah* foop_glutEnterGameMode(yeah* arg458) {
  yeah* here459 = arg458;
  A(isnil(here459));
  int ret460 = glutEnterGameMode();
  return integer((int)ret460);
}
yeah* foop_glutGameModeString(yeah* arg461) {
  yeah* here462 = arg461;
  yeah* harg463 = hcar(here462);
  const char* string = (const char*)stringval(harg463);
  here462 = hcdr(here462);
  A(isnil(here462));
  glutGameModeString(string);
  return Nil;
}
yeah* foop_glutForceJoystickFunc(yeah* arg464) {
  yeah* here465 = arg464;
  A(isnil(here465));
  glutForceJoystickFunc();
  return Nil;
}
yeah* foop_glutSetKeyRepeat(yeah* arg466) {
  yeah* here467 = arg466;
  yeah* harg468 = hcar(here467);
  int repeatMode = (int)getint(harg468);
  here467 = hcdr(here467);
  A(isnil(here467));
  glutSetKeyRepeat(repeatMode);
  return Nil;
}
yeah* foop_glutIgnoreKeyRepeat(yeah* arg469) {
  yeah* here470 = arg469;
  yeah* harg471 = hcar(here470);
  int ignore = (int)getint(harg471);
  here470 = hcdr(here470);
  A(isnil(here470));
  glutIgnoreKeyRepeat(ignore);
  return Nil;
}
yeah* foop_glutReportErrors(yeah* arg472) {
  yeah* here473 = arg472;
  A(isnil(here473));
  glutReportErrors();
  return Nil;
}
yeah* foop_glutVideoPan(yeah* arg474) {
  yeah* here475 = arg474;
  yeah* harg476 = hcar(here475);
  int x = (int)getint(harg476);
  here475 = hcdr(here475);
  yeah* harg477 = hcar(here475);
  int y = (int)getint(harg477);
  here475 = hcdr(here475);
  yeah* harg478 = hcar(here475);
  int width = (int)getint(harg478);
  here475 = hcdr(here475);
  yeah* harg479 = hcar(here475);
  int height = (int)getint(harg479);
  here475 = hcdr(here475);
  A(isnil(here475));
  glutVideoPan(x, y, width, height);
  return Nil;
}
yeah* foop_glutVideoResize(yeah* arg480) {
  yeah* here481 = arg480;
  yeah* harg482 = hcar(here481);
  int x = (int)getint(harg482);
  here481 = hcdr(here481);
  yeah* harg483 = hcar(here481);
  int y = (int)getint(harg483);
  here481 = hcdr(here481);
  yeah* harg484 = hcar(here481);
  int width = (int)getint(harg484);
  here481 = hcdr(here481);
  yeah* harg485 = hcar(here481);
  int height = (int)getint(harg485);
  here481 = hcdr(here481);
  A(isnil(here481));
  glutVideoResize(x, y, width, height);
  return Nil;
}
yeah* foop_glutStopVideoResizing(yeah* arg486) {
  yeah* here487 = arg486;
  A(isnil(here487));
  glutStopVideoResizing();
  return Nil;
}
yeah* foop_glutSetupVideoResizing(yeah* arg488) {
  yeah* here489 = arg488;
  A(isnil(here489));
  glutSetupVideoResizing();
  return Nil;
}
yeah* foop_glutVideoResizeGet(yeah* arg490) {
  yeah* here491 = arg490;
  yeah* harg492 = hcar(here491);
  GLenum param = (GLenum)getint(harg492);
  here491 = hcdr(here491);
  A(isnil(here491));
  int ret493 = glutVideoResizeGet(param);
  return integer((int)ret493);
}
yeah* foop_glutSolidIcosahedron(yeah* arg494) {
  yeah* here495 = arg494;
  A(isnil(here495));
  glutSolidIcosahedron();
  return Nil;
}
yeah* foop_glutWireIcosahedron(yeah* arg496) {
  yeah* here497 = arg496;
  A(isnil(here497));
  glutWireIcosahedron();
  return Nil;
}
yeah* foop_glutSolidTetrahedron(yeah* arg498) {
  yeah* here499 = arg498;
  A(isnil(here499));
  glutSolidTetrahedron();
  return Nil;
}
yeah* foop_glutWireTetrahedron(yeah* arg500) {
  yeah* here501 = arg500;
  A(isnil(here501));
  glutWireTetrahedron();
  return Nil;
}
yeah* foop_glutSolidOctahedron(yeah* arg502) {
  yeah* here503 = arg502;
  A(isnil(here503));
  glutSolidOctahedron();
  return Nil;
}
yeah* foop_glutWireOctahedron(yeah* arg504) {
  yeah* here505 = arg504;
  A(isnil(here505));
  glutWireOctahedron();
  return Nil;
}
yeah* foop_glutSolidTeapot(yeah* arg506) {
  yeah* here507 = arg506;
  yeah* harg508 = hcar(here507);
  GLdouble size = (GLdouble)getfloatcvt(harg508);
  here507 = hcdr(here507);
  A(isnil(here507));
  glutSolidTeapot(size);
  return Nil;
}
yeah* foop_glutWireTeapot(yeah* arg509) {
  yeah* here510 = arg509;
  yeah* harg511 = hcar(here510);
  GLdouble size = (GLdouble)getfloatcvt(harg511);
  here510 = hcdr(here510);
  A(isnil(here510));
  glutWireTeapot(size);
  return Nil;
}
yeah* foop_glutSolidDodecahedron(yeah* arg512) {
  yeah* here513 = arg512;
  A(isnil(here513));
  glutSolidDodecahedron();
  return Nil;
}
yeah* foop_glutWireDodecahedron(yeah* arg514) {
  yeah* here515 = arg514;
  A(isnil(here515));
  glutWireDodecahedron();
  return Nil;
}
yeah* foop_glutSolidTorus(yeah* arg516) {
  yeah* here517 = arg516;
  yeah* harg518 = hcar(here517);
  GLdouble innerRadius = (GLdouble)getfloatcvt(harg518);
  here517 = hcdr(here517);
  yeah* harg519 = hcar(here517);
  GLdouble outerRadius = (GLdouble)getfloatcvt(harg519);
  here517 = hcdr(here517);
  yeah* harg520 = hcar(here517);
  GLint sides = (GLint)getint(harg520);
  here517 = hcdr(here517);
  yeah* harg521 = hcar(here517);
  GLint rings = (GLint)getint(harg521);
  here517 = hcdr(here517);
  A(isnil(here517));
  glutSolidTorus(innerRadius, outerRadius, sides, rings);
  return Nil;
}
yeah* foop_glutWireTorus(yeah* arg522) {
  yeah* here523 = arg522;
  yeah* harg524 = hcar(here523);
  GLdouble innerRadius = (GLdouble)getfloatcvt(harg524);
  here523 = hcdr(here523);
  yeah* harg525 = hcar(here523);
  GLdouble outerRadius = (GLdouble)getfloatcvt(harg525);
  here523 = hcdr(here523);
  yeah* harg526 = hcar(here523);
  GLint sides = (GLint)getint(harg526);
  here523 = hcdr(here523);
  yeah* harg527 = hcar(here523);
  GLint rings = (GLint)getint(harg527);
  here523 = hcdr(here523);
  A(isnil(here523));
  glutWireTorus(innerRadius, outerRadius, sides, rings);
  return Nil;
}
yeah* foop_glutSolidCube(yeah* arg528) {
  yeah* here529 = arg528;
  yeah* harg530 = hcar(here529);
  GLdouble size = (GLdouble)getfloatcvt(harg530);
  here529 = hcdr(here529);
  A(isnil(here529));
  glutSolidCube(size);
  return Nil;
}
yeah* foop_glutWireCube(yeah* arg531) {
  yeah* here532 = arg531;
  yeah* harg533 = hcar(here532);
  GLdouble size = (GLdouble)getfloatcvt(harg533);
  here532 = hcdr(here532);
  A(isnil(here532));
  glutWireCube(size);
  return Nil;
}
yeah* foop_glutSolidCone(yeah* arg534) {
  yeah* here535 = arg534;
  yeah* harg536 = hcar(here535);
  GLdouble base = (GLdouble)getfloatcvt(harg536);
  here535 = hcdr(here535);
  yeah* harg537 = hcar(here535);
  GLdouble height = (GLdouble)getfloatcvt(harg537);
  here535 = hcdr(here535);
  yeah* harg538 = hcar(here535);
  GLint slices = (GLint)getint(harg538);
  here535 = hcdr(here535);
  yeah* harg539 = hcar(here535);
  GLint stacks = (GLint)getint(harg539);
  here535 = hcdr(here535);
  A(isnil(here535));
  glutSolidCone(base, height, slices, stacks);
  return Nil;
}
yeah* foop_glutWireCone(yeah* arg540) {
  yeah* here541 = arg540;
  yeah* harg542 = hcar(here541);
  GLdouble base = (GLdouble)getfloatcvt(harg542);
  here541 = hcdr(here541);
  yeah* harg543 = hcar(here541);
  GLdouble height = (GLdouble)getfloatcvt(harg543);
  here541 = hcdr(here541);
  yeah* harg544 = hcar(here541);
  GLint slices = (GLint)getint(harg544);
  here541 = hcdr(here541);
  yeah* harg545 = hcar(here541);
  GLint stacks = (GLint)getint(harg545);
  here541 = hcdr(here541);
  A(isnil(here541));
  glutWireCone(base, height, slices, stacks);
  return Nil;
}
yeah* foop_glutSolidSphere(yeah* arg546) {
  yeah* here547 = arg546;
  yeah* harg548 = hcar(here547);
  GLdouble radius = (GLdouble)getfloatcvt(harg548);
  here547 = hcdr(here547);
  yeah* harg549 = hcar(here547);
  GLint slices = (GLint)getint(harg549);
  here547 = hcdr(here547);
  yeah* harg550 = hcar(here547);
  GLint stacks = (GLint)getint(harg550);
  here547 = hcdr(here547);
  A(isnil(here547));
  glutSolidSphere(radius, slices, stacks);
  return Nil;
}
yeah* foop_glutWireSphere(yeah* arg551) {
  yeah* here552 = arg551;
  yeah* harg553 = hcar(here552);
  GLdouble radius = (GLdouble)getfloatcvt(harg553);
  here552 = hcdr(here552);
  yeah* harg554 = hcar(here552);
  GLint slices = (GLint)getint(harg554);
  here552 = hcdr(here552);
  yeah* harg555 = hcar(here552);
  GLint stacks = (GLint)getint(harg555);
  here552 = hcdr(here552);
  A(isnil(here552));
  glutWireSphere(radius, slices, stacks);
  return Nil;
}
yeah* foop_glutStrokeLength(yeah* arg556) {
  yeah* here557 = arg556;
  yeah* harg558 = hcar(here557);
  void* font = (void*)opaqueval(harg558);
  here557 = hcdr(here557);
  yeah* harg559 = hcar(here557);
  const unsigned char* string = (const unsigned char*)opaqueval(harg559);
  here557 = hcdr(here557);
  A(isnil(here557));
  int ret560 = glutStrokeLength(font, string);
  return integer((int)ret560);
}
yeah* foop_glutBitmapLength(yeah* arg561) {
  yeah* here562 = arg561;
  yeah* harg563 = hcar(here562);
  void* font = (void*)opaqueval(harg563);
  here562 = hcdr(here562);
  yeah* harg564 = hcar(here562);
  const unsigned char* string = (const unsigned char*)opaqueval(harg564);
  here562 = hcdr(here562);
  A(isnil(here562));
  int ret565 = glutBitmapLength(font, string);
  return integer((int)ret565);
}
yeah* foop_glutStrokeWidth(yeah* arg566) {
  yeah* here567 = arg566;
  yeah* harg568 = hcar(here567);
  void* font = (void*)opaqueval(harg568);
  here567 = hcdr(here567);
  yeah* harg569 = hcar(here567);
  int character = (int)getint(harg569);
  here567 = hcdr(here567);
  A(isnil(here567));
  int ret570 = glutStrokeWidth(font, character);
  return integer((int)ret570);
}
yeah* foop_glutStrokeCharacter(yeah* arg571) {
  yeah* here572 = arg571;
  yeah* harg573 = hcar(here572);
  void* font = (void*)opaqueval(harg573);
  here572 = hcdr(here572);
  yeah* harg574 = hcar(here572);
  int character = (int)getint(harg574);
  here572 = hcdr(here572);
  A(isnil(here572));
  glutStrokeCharacter(font, character);
  return Nil;
}
yeah* foop_glutBitmapWidth(yeah* arg575) {
  yeah* here576 = arg575;
  yeah* harg577 = hcar(here576);
  void* font = (void*)opaqueval(harg577);
  here576 = hcdr(here576);
  yeah* harg578 = hcar(here576);
  int character = (int)getint(harg578);
  here576 = hcdr(here576);
  A(isnil(here576));
  int ret579 = glutBitmapWidth(font, character);
  return integer((int)ret579);
}
yeah* foop_glutBitmapCharacter(yeah* arg580) {
  yeah* here581 = arg580;
  yeah* harg582 = hcar(here581);
  void* font = (void*)opaqueval(harg582);
  here581 = hcdr(here581);
  yeah* harg583 = hcar(here581);
  int character = (int)getint(harg583);
  here581 = hcdr(here581);
  A(isnil(here581));
  glutBitmapCharacter(font, character);
  return Nil;
}
yeah* foop_glutGetProcAddress(yeah* arg584) {
  yeah* here585 = arg584;
  yeah* harg586 = hcar(here585);
  const char* procName = (const char*)stringval(harg586);
  here585 = hcdr(here585);
  A(isnil(here585));
  void* ret587 = glutGetProcAddress(procName);
  return opaque((void*)ret587);
}
yeah* foop_glutLayerGet(yeah* arg588) {
  yeah* here589 = arg588;
  yeah* harg590 = hcar(here589);
  GLenum type = (GLenum)getint(harg590);
  here589 = hcdr(here589);
  A(isnil(here589));
  int ret591 = glutLayerGet(type);
  return integer((int)ret591);
}
yeah* foop_glutGetModifiers(yeah* arg592) {
  yeah* here593 = arg592;
  A(isnil(here593));
  int ret594 = glutGetModifiers();
  return integer((int)ret594);
}
yeah* foop_glutExtensionSupported(yeah* arg595) {
  yeah* here596 = arg595;
  yeah* harg597 = hcar(here596);
  const char* name = (const char*)stringval(harg597);
  here596 = hcdr(here596);
  A(isnil(here596));
  int ret598 = glutExtensionSupported(name);
  return integer((int)ret598);
}
yeah* foop_glutDeviceGet(yeah* arg599) {
  yeah* here600 = arg599;
  yeah* harg601 = hcar(here600);
  GLenum type = (GLenum)getint(harg601);
  here600 = hcdr(here600);
  A(isnil(here600));
  int ret602 = glutDeviceGet(type);
  return integer((int)ret602);
}
yeah* foop_glutGet(yeah* arg603) {
  yeah* here604 = arg603;
  yeah* harg605 = hcar(here604);
  GLenum type = (GLenum)getint(harg605);
  here604 = hcdr(here604);
  A(isnil(here604));
  int ret606 = glutGet(type);
  return integer((int)ret606);
}
yeah* foop_glutCopyColormap(yeah* arg607) {
  yeah* here608 = arg607;
  yeah* harg609 = hcar(here608);
  int win = (int)getint(harg609);
  here608 = hcdr(here608);
  A(isnil(here608));
  glutCopyColormap(win);
  return Nil;
}
yeah* foop_glutGetColor(yeah* arg610) {
  yeah* here611 = arg610;
  yeah* harg612 = hcar(here611);
  int ndx = (int)getint(harg612);
  here611 = hcdr(here611);
  yeah* harg613 = hcar(here611);
  int component = (int)getint(harg613);
  here611 = hcdr(here611);
  A(isnil(here611));
  GLfloat ret614 = glutGetColor(ndx, component);
  return flote((float)ret614);
}
yeah* foop_glutSetColor(yeah* arg615) {
  yeah* here616 = arg615;
  yeah* harg617 = hcar(here616);
  int anonp0 = (int)getint(harg617);
  here616 = hcdr(here616);
  yeah* harg618 = hcar(here616);
  GLfloat red = (GLfloat)getfloatcvt(harg618);
  here616 = hcdr(here616);
  yeah* harg619 = hcar(here616);
  GLfloat green = (GLfloat)getfloatcvt(harg619);
  here616 = hcdr(here616);
  yeah* harg620 = hcar(here616);
  GLfloat blue = (GLfloat)getfloatcvt(harg620);
  here616 = hcdr(here616);
  A(isnil(here616));
  glutSetColor(anonp0, red, green, blue);
  return Nil;
}
yeah* foop_glutJoystickFunc(yeah* arg621) {
  yeah* here622 = arg621;
  yeah* harg623 = hcar(here622);
  void (*func)(unsigned anonp2, int anonp3, int anonp4, int anonp5) = uuunsigned_int_int_int_void_wrap(harg623);
  here622 = hcdr(here622);
  yeah* harg624 = hcar(here622);
  int pollInterval = (int)getint(harg624);
  here622 = hcdr(here622);
  A(isnil(here622));
  glutJoystickFunc(func, pollInterval);
  return Nil;
}
yeah* foop_glutSpecialUpFunc(yeah* arg625) {
  yeah* here626 = arg625;
  yeah* harg627 = hcar(here626);
  void (*func)(int anonp7, int anonp8, int anonp9) = uuint_int_int_void_wrap(harg627);
  here626 = hcdr(here626);
  A(isnil(here626));
  glutSpecialUpFunc(func);
  return Nil;
}
yeah* foop_glutKeyboardUpFunc(yeah* arg628) {
  yeah* here629 = arg628;
  yeah* harg630 = hcar(here629);
  void (*func)(unsigned char anonp11, int anonp12, int anonp13) = uuunsigned_char_int_int_void_wrap(harg630);
  here629 = hcdr(here629);
  A(isnil(here629));
  glutKeyboardUpFunc(func);
  return Nil;
}
yeah* foop_glutWindowStatusFunc(yeah* arg631) {
  yeah* here632 = arg631;
  yeah* harg633 = hcar(here632);
  void (*func)(int anonp15) = uuint_void_wrap(harg633);
  here632 = hcdr(here632);
  A(isnil(here632));
  glutWindowStatusFunc(func);
  return Nil;
}
yeah* foop_glutOverlayDisplayFunc(yeah* arg634) {
  yeah* here635 = arg634;
  yeah* harg636 = hcar(here635);
  void (*func)() = uuvoid_void_wrap(harg636);
  here635 = hcdr(here635);
  A(isnil(here635));
  glutOverlayDisplayFunc(func);
  return Nil;
}
yeah* foop_glutMenuStatusFunc(yeah* arg637) {
  yeah* here638 = arg637;
  yeah* harg639 = hcar(here638);
  void (*func)(int anonp18, int anonp19, int anonp20) = uuint_int_int_void_wrap(harg639);
  here638 = hcdr(here638);
  A(isnil(here638));
  glutMenuStatusFunc(func);
  return Nil;
}
yeah* foop_glutTabletButtonFunc(yeah* arg640) {
  yeah* here641 = arg640;
  yeah* harg642 = hcar(here641);
  void (*func)(int anonp22, int anonp23, int anonp24, int anonp25) = uuint_int_int_int_void_wrap(harg642);
  here641 = hcdr(here641);
  A(isnil(here641));
  glutTabletButtonFunc(func);
  return Nil;
}
yeah* foop_glutTabletMotionFunc(yeah* arg643) {
  yeah* here644 = arg643;
  yeah* harg645 = hcar(here644);
  void (*func)(int anonp27, int anonp28) = uuint_int_void_wrap(harg645);
  here644 = hcdr(here644);
  A(isnil(here644));
  glutTabletMotionFunc(func);
  return Nil;
}
yeah* foop_glutDialsFunc(yeah* arg646) {
  yeah* here647 = arg646;
  yeah* harg648 = hcar(here647);
  void (*func)(int anonp30, int anonp31) = uuint_int_void_wrap(harg648);
  here647 = hcdr(here647);
  A(isnil(here647));
  glutDialsFunc(func);
  return Nil;
}
yeah* foop_glutButtonBoxFunc(yeah* arg649) {
  yeah* here650 = arg649;
  yeah* harg651 = hcar(here650);
  void (*func)(int anonp33, int anonp34) = uuint_int_void_wrap(harg651);
  here650 = hcdr(here650);
  A(isnil(here650));
  glutButtonBoxFunc(func);
  return Nil;
}
yeah* foop_glutSpaceballButtonFunc(yeah* arg652) {
  yeah* here653 = arg652;
  yeah* harg654 = hcar(here653);
  void (*func)(int anonp36, int anonp37) = uuint_int_void_wrap(harg654);
  here653 = hcdr(here653);
  A(isnil(here653));
  glutSpaceballButtonFunc(func);
  return Nil;
}
yeah* foop_glutSpaceballRotateFunc(yeah* arg655) {
  yeah* here656 = arg655;
  yeah* harg657 = hcar(here656);
  void (*func)(int anonp39, int anonp40, int anonp41) = uuint_int_int_void_wrap(harg657);
  here656 = hcdr(here656);
  A(isnil(here656));
  glutSpaceballRotateFunc(func);
  return Nil;
}
yeah* foop_glutSpaceballMotionFunc(yeah* arg658) {
  yeah* here659 = arg658;
  yeah* harg660 = hcar(here659);
  void (*func)(int anonp43, int anonp44, int anonp45) = uuint_int_int_void_wrap(harg660);
  here659 = hcdr(here659);
  A(isnil(here659));
  glutSpaceballMotionFunc(func);
  return Nil;
}
yeah* foop_glutSpecialFunc(yeah* arg661) {
  yeah* here662 = arg661;
  yeah* harg663 = hcar(here662);
  void (*func)(int anonp47, int anonp48, int anonp49) = uuint_int_int_void_wrap(harg663);
  here662 = hcdr(here662);
  A(isnil(here662));
  glutSpecialFunc(func);
  return Nil;
}
yeah* foop_glutMenuStateFunc(yeah* arg664) {
  yeah* here665 = arg664;
  yeah* harg666 = hcar(here665);
  void (*func)(int anonp51) = uuint_void_wrap(harg666);
  here665 = hcdr(here665);
  A(isnil(here665));
  glutMenuStateFunc(func);
  return Nil;
}
yeah* foop_glutTimerFunc(yeah* arg667) {
  yeah* here668 = arg667;
  yeah* harg669 = hcar(here668);
  unsigned millis = (unsigned)getint(harg669);
  here668 = hcdr(here668);
  yeah* harg670 = hcar(here668);
  void (*func)(int anonp53) = uuint_void_wrap(harg670);
  here668 = hcdr(here668);
  yeah* harg671 = hcar(here668);
  int value = (int)getint(harg671);
  here668 = hcdr(here668);
  A(isnil(here668));
  glutTimerFunc(millis, func, value);
  return Nil;
}
yeah* foop_glutIdleFunc(yeah* arg672) {
  yeah* here673 = arg672;
  yeah* harg674 = hcar(here673);
  void (*func)() = uuvoid_void_wrap(harg674);
  here673 = hcdr(here673);
  A(isnil(here673));
  glutIdleFunc(func);
  return Nil;
}
yeah* foop_glutVisibilityFunc(yeah* arg675) {
  yeah* here676 = arg675;
  yeah* harg677 = hcar(here676);
  void (*func)(int anonp56) = uuint_void_wrap(harg677);
  here676 = hcdr(here676);
  A(isnil(here676));
  glutVisibilityFunc(func);
  return Nil;
}
yeah* foop_glutEntryFunc(yeah* arg678) {
  yeah* here679 = arg678;
  yeah* harg680 = hcar(here679);
  void (*func)(int anonp58) = uuint_void_wrap(harg680);
  here679 = hcdr(here679);
  A(isnil(here679));
  glutEntryFunc(func);
  return Nil;
}
yeah* foop_glutPassiveMotionFunc(yeah* arg681) {
  yeah* here682 = arg681;
  yeah* harg683 = hcar(here682);
  void (*func)(int anonp60, int anonp61) = uuint_int_void_wrap(harg683);
  here682 = hcdr(here682);
  A(isnil(here682));
  glutPassiveMotionFunc(func);
  return Nil;
}
yeah* foop_glutMotionFunc(yeah* arg684) {
  yeah* here685 = arg684;
  yeah* harg686 = hcar(here685);
  void (*func)(int anonp63, int anonp64) = uuint_int_void_wrap(harg686);
  here685 = hcdr(here685);
  A(isnil(here685));
  glutMotionFunc(func);
  return Nil;
}
yeah* foop_glutMouseFunc(yeah* arg687) {
  yeah* here688 = arg687;
  yeah* harg689 = hcar(here688);
  void (*func)(int anonp66, int anonp67, int anonp68, int anonp69) = uuint_int_int_int_void_wrap(harg689);
  here688 = hcdr(here688);
  A(isnil(here688));
  glutMouseFunc(func);
  return Nil;
}
yeah* foop_glutKeyboardFunc(yeah* arg690) {
  yeah* here691 = arg690;
  yeah* harg692 = hcar(here691);
  void (*func)(unsigned char anonp71, int anonp72, int anonp73) = uuunsigned_char_int_int_void_wrap(harg692);
  here691 = hcdr(here691);
  A(isnil(here691));
  glutKeyboardFunc(func);
  return Nil;
}
yeah* foop_glutReshapeFunc(yeah* arg693) {
  yeah* here694 = arg693;
  yeah* harg695 = hcar(here694);
  void (*func)(int anonp75, int anonp76) = uuint_int_void_wrap(harg695);
  here694 = hcdr(here694);
  A(isnil(here694));
  glutReshapeFunc(func);
  return Nil;
}
yeah* foop_glutDisplayFunc(yeah* arg696) {
  yeah* here697 = arg696;
  yeah* harg698 = hcar(here697);
  void (*func)() = uuvoid_void_wrap(harg698);
  here697 = hcdr(here697);
  A(isnil(here697));
  glutDisplayFunc(func);
  return Nil;
}
yeah* foop_glutDetachMenu(yeah* arg699) {
  yeah* here700 = arg699;
  yeah* harg701 = hcar(here700);
  int button = (int)getint(harg701);
  here700 = hcdr(here700);
  A(isnil(here700));
  glutDetachMenu(button);
  return Nil;
}
yeah* foop_glutAttachMenu(yeah* arg702) {
  yeah* here703 = arg702;
  yeah* harg704 = hcar(here703);
  int button = (int)getint(harg704);
  here703 = hcdr(here703);
  A(isnil(here703));
  glutAttachMenu(button);
  return Nil;
}
yeah* foop_glutRemoveMenuItem(yeah* arg705) {
  yeah* here706 = arg705;
  yeah* harg707 = hcar(here706);
  int item = (int)getint(harg707);
  here706 = hcdr(here706);
  A(isnil(here706));
  glutRemoveMenuItem(item);
  return Nil;
}
yeah* foop_glutChangeToSubMenu(yeah* arg708) {
  yeah* here709 = arg708;
  yeah* harg710 = hcar(here709);
  int item = (int)getint(harg710);
  here709 = hcdr(here709);
  yeah* harg711 = hcar(here709);
  const char* label = (const char*)stringval(harg711);
  here709 = hcdr(here709);
  yeah* harg712 = hcar(here709);
  int submenu = (int)getint(harg712);
  here709 = hcdr(here709);
  A(isnil(here709));
  glutChangeToSubMenu(item, label, submenu);
  return Nil;
}
yeah* foop_glutChangeToMenuEntry(yeah* arg713) {
  yeah* here714 = arg713;
  yeah* harg715 = hcar(here714);
  int item = (int)getint(harg715);
  here714 = hcdr(here714);
  yeah* harg716 = hcar(here714);
  const char* label = (const char*)stringval(harg716);
  here714 = hcdr(here714);
  yeah* harg717 = hcar(here714);
  int value = (int)getint(harg717);
  here714 = hcdr(here714);
  A(isnil(here714));
  glutChangeToMenuEntry(item, label, value);
  return Nil;
}
yeah* foop_glutAddSubMenu(yeah* arg718) {
  yeah* here719 = arg718;
  yeah* harg720 = hcar(here719);
  const char* label = (const char*)stringval(harg720);
  here719 = hcdr(here719);
  yeah* harg721 = hcar(here719);
  int submenu = (int)getint(harg721);
  here719 = hcdr(here719);
  A(isnil(here719));
  glutAddSubMenu(label, submenu);
  return Nil;
}
yeah* foop_glutAddMenuEntry(yeah* arg722) {
  yeah* here723 = arg722;
  yeah* harg724 = hcar(here723);
  const char* label = (const char*)stringval(harg724);
  here723 = hcdr(here723);
  yeah* harg725 = hcar(here723);
  int value = (int)getint(harg725);
  here723 = hcdr(here723);
  A(isnil(here723));
  glutAddMenuEntry(label, value);
  return Nil;
}
yeah* foop_glutSetMenu(yeah* arg726) {
  yeah* here727 = arg726;
  yeah* harg728 = hcar(here727);
  int menu = (int)getint(harg728);
  here727 = hcdr(here727);
  A(isnil(here727));
  glutSetMenu(menu);
  return Nil;
}
yeah* foop_glutGetMenu(yeah* arg729) {
  yeah* here730 = arg729;
  A(isnil(here730));
  int ret731 = glutGetMenu();
  return integer((int)ret731);
}
yeah* foop_glutDestroyMenu(yeah* arg732) {
  yeah* here733 = arg732;
  yeah* harg734 = hcar(here733);
  int menu = (int)getint(harg734);
  here733 = hcdr(here733);
  A(isnil(here733));
  glutDestroyMenu(menu);
  return Nil;
}
yeah* foop_glutCreateMenu(yeah* arg735) {
  yeah* here736 = arg735;
  yeah* harg737 = hcar(here736);
  void (*anonp80)(int anonp79) = uuint_void_wrap(harg737);
  here736 = hcdr(here736);
  A(isnil(here736));
  int ret738 = glutCreateMenu(anonp80);
  return integer((int)ret738);
}
yeah* foop_glutHideOverlay(yeah* arg739) {
  yeah* here740 = arg739;
  A(isnil(here740));
  glutHideOverlay();
  return Nil;
}
yeah* foop_glutShowOverlay(yeah* arg741) {
  yeah* here742 = arg741;
  A(isnil(here742));
  glutShowOverlay();
  return Nil;
}
yeah* foop_glutPostWindowOverlayRedisplay(yeah* arg743) {
  yeah* here744 = arg743;
  yeah* harg745 = hcar(here744);
  int win = (int)getint(harg745);
  here744 = hcdr(here744);
  A(isnil(here744));
  glutPostWindowOverlayRedisplay(win);
  return Nil;
}
yeah* foop_glutPostOverlayRedisplay(yeah* arg746) {
  yeah* here747 = arg746;
  A(isnil(here747));
  glutPostOverlayRedisplay();
  return Nil;
}
yeah* foop_glutUseLayer(yeah* arg748) {
  yeah* here749 = arg748;
  yeah* harg750 = hcar(here749);
  GLenum layer = (GLenum)getint(harg750);
  here749 = hcdr(here749);
  A(isnil(here749));
  glutUseLayer(layer);
  return Nil;
}
yeah* foop_glutRemoveOverlay(yeah* arg751) {
  yeah* here752 = arg751;
  A(isnil(here752));
  glutRemoveOverlay();
  return Nil;
}
yeah* foop_glutEstablishOverlay(yeah* arg753) {
  yeah* here754 = arg753;
  A(isnil(here754));
  glutEstablishOverlay();
  return Nil;
}
yeah* foop_glutCheckLoop(yeah* arg755) {
  yeah* here756 = arg755;
  A(isnil(here756));
  glutCheckLoop();
  return Nil;
}
yeah* foop_glutWMCloseFunc(yeah* arg757) {
  yeah* here758 = arg757;
  yeah* harg759 = hcar(here758);
  void (*func)() = uuvoid_void_wrap(harg759);
  here758 = hcdr(here758);
  A(isnil(here758));
  glutWMCloseFunc(func);
  return Nil;
}
yeah* foop_glutSurfaceTexture(yeah* arg760) {
  yeah* here761 = arg760;
  yeah* harg762 = hcar(here761);
  GLenum target = (GLenum)getint(harg762);
  here761 = hcdr(here761);
  yeah* harg763 = hcar(here761);
  GLenum internalformat = (GLenum)getint(harg763);
  here761 = hcdr(here761);
  yeah* harg764 = hcar(here761);
  int surfacewin = (int)getint(harg764);
  here761 = hcdr(here761);
  A(isnil(here761));
  glutSurfaceTexture(target, internalformat, surfacewin);
  return Nil;
}
yeah* foop_glutWarpPointer(yeah* arg765) {
  yeah* here766 = arg765;
  yeah* harg767 = hcar(here766);
  int x = (int)getint(harg767);
  here766 = hcdr(here766);
  yeah* harg768 = hcar(here766);
  int y = (int)getint(harg768);
  here766 = hcdr(here766);
  A(isnil(here766));
  glutWarpPointer(x, y);
  return Nil;
}
yeah* foop_glutSetCursor(yeah* arg769) {
  yeah* here770 = arg769;
  yeah* harg771 = hcar(here770);
  int cursor = (int)getint(harg771);
  here770 = hcdr(here770);
  A(isnil(here770));
  glutSetCursor(cursor);
  return Nil;
}
yeah* foop_glutFullScreen(yeah* arg772) {
  yeah* here773 = arg772;
  A(isnil(here773));
  glutFullScreen();
  return Nil;
}
yeah* foop_glutHideWindow(yeah* arg774) {
  yeah* here775 = arg774;
  A(isnil(here775));
  glutHideWindow();
  return Nil;
}
yeah* foop_glutShowWindow(yeah* arg776) {
  yeah* here777 = arg776;
  A(isnil(here777));
  glutShowWindow();
  return Nil;
}
yeah* foop_glutIconifyWindow(yeah* arg778) {
  yeah* here779 = arg778;
  A(isnil(here779));
  glutIconifyWindow();
  return Nil;
}
yeah* foop_glutPushWindow(yeah* arg780) {
  yeah* here781 = arg780;
  A(isnil(here781));
  glutPushWindow();
  return Nil;
}
yeah* foop_glutPopWindow(yeah* arg782) {
  yeah* here783 = arg782;
  A(isnil(here783));
  glutPopWindow();
  return Nil;
}
yeah* foop_glutReshapeWindow(yeah* arg784) {
  yeah* here785 = arg784;
  yeah* harg786 = hcar(here785);
  int width = (int)getint(harg786);
  here785 = hcdr(here785);
  yeah* harg787 = hcar(here785);
  int height = (int)getint(harg787);
  here785 = hcdr(here785);
  A(isnil(here785));
  glutReshapeWindow(width, height);
  return Nil;
}
yeah* foop_glutPositionWindow(yeah* arg788) {
  yeah* here789 = arg788;
  yeah* harg790 = hcar(here789);
  int x = (int)getint(harg790);
  here789 = hcdr(here789);
  yeah* harg791 = hcar(here789);
  int y = (int)getint(harg791);
  here789 = hcdr(here789);
  A(isnil(here789));
  glutPositionWindow(x, y);
  return Nil;
}
yeah* foop_glutSetIconTitle(yeah* arg792) {
  yeah* here793 = arg792;
  yeah* harg794 = hcar(here793);
  const char* title = (const char*)stringval(harg794);
  here793 = hcdr(here793);
  A(isnil(here793));
  glutSetIconTitle(title);
  return Nil;
}
yeah* foop_glutSetWindowTitle(yeah* arg795) {
  yeah* here796 = arg795;
  yeah* harg797 = hcar(here796);
  const char* title = (const char*)stringval(harg797);
  here796 = hcdr(here796);
  A(isnil(here796));
  glutSetWindowTitle(title);
  return Nil;
}
yeah* foop_glutSetWindow(yeah* arg798) {
  yeah* here799 = arg798;
  yeah* harg800 = hcar(here799);
  int win = (int)getint(harg800);
  here799 = hcdr(here799);
  A(isnil(here799));
  glutSetWindow(win);
  return Nil;
}
yeah* foop_glutGetWindow(yeah* arg801) {
  yeah* here802 = arg801;
  A(isnil(here802));
  int ret803 = glutGetWindow();
  return integer((int)ret803);
}
yeah* foop_glutSwapBuffers(yeah* arg804) {
  yeah* here805 = arg804;
  A(isnil(here805));
  glutSwapBuffers();
  return Nil;
}
yeah* foop_glutPostWindowRedisplay(yeah* arg806) {
  yeah* here807 = arg806;
  yeah* harg808 = hcar(here807);
  int win = (int)getint(harg808);
  here807 = hcdr(here807);
  A(isnil(here807));
  glutPostWindowRedisplay(win);
  return Nil;
}
yeah* foop_glutPostRedisplay(yeah* arg809) {
  yeah* here810 = arg809;
  A(isnil(here810));
  glutPostRedisplay();
  return Nil;
}
yeah* foop_glutDestroyWindow(yeah* arg811) {
  yeah* here812 = arg811;
  yeah* harg813 = hcar(here812);
  int win = (int)getint(harg813);
  here812 = hcdr(here812);
  A(isnil(here812));
  glutDestroyWindow(win);
  return Nil;
}
yeah* foop_glutCreateSubWindow(yeah* arg814) {
  yeah* here815 = arg814;
  yeah* harg816 = hcar(here815);
  int win = (int)getint(harg816);
  here815 = hcdr(here815);
  yeah* harg817 = hcar(here815);
  int x = (int)getint(harg817);
  here815 = hcdr(here815);
  yeah* harg818 = hcar(here815);
  int y = (int)getint(harg818);
  here815 = hcdr(here815);
  yeah* harg819 = hcar(here815);
  int width = (int)getint(harg819);
  here815 = hcdr(here815);
  yeah* harg820 = hcar(here815);
  int height = (int)getint(harg820);
  here815 = hcdr(here815);
  A(isnil(here815));
  int ret821 = glutCreateSubWindow(win, x, y, width, height);
  return integer((int)ret821);
}
yeah* foop_glutCreateWindow(yeah* arg822) {
  yeah* here823 = arg822;
  yeah* harg824 = hcar(here823);
  const char* title = (const char*)stringval(harg824);
  here823 = hcdr(here823);
  A(isnil(here823));
  int ret825 = glutCreateWindow(title);
  return integer((int)ret825);
}
yeah* foop_glutMainLoop(yeah* arg826) {
  yeah* here827 = arg826;
  A(isnil(here827));
  glutMainLoop();
  return Nil;
}
yeah* foop_glutInitWindowSize(yeah* arg828) {
  yeah* here829 = arg828;
  yeah* harg830 = hcar(here829);
  int width = (int)getint(harg830);
  here829 = hcdr(here829);
  yeah* harg831 = hcar(here829);
  int height = (int)getint(harg831);
  here829 = hcdr(here829);
  A(isnil(here829));
  glutInitWindowSize(width, height);
  return Nil;
}
yeah* foop_glutInitWindowPosition(yeah* arg832) {
  yeah* here833 = arg832;
  yeah* harg834 = hcar(here833);
  int x = (int)getint(harg834);
  here833 = hcdr(here833);
  yeah* harg835 = hcar(here833);
  int y = (int)getint(harg835);
  here833 = hcdr(here833);
  A(isnil(here833));
  glutInitWindowPosition(x, y);
  return Nil;
}
yeah* foop_glutInitDisplayString(yeah* arg836) {
  yeah* here837 = arg836;
  yeah* harg838 = hcar(here837);
  const char* string = (const char*)stringval(harg838);
  here837 = hcdr(here837);
  A(isnil(here837));
  glutInitDisplayString(string);
  return Nil;
}
yeah* foop_glutInitDisplayMode(yeah* arg839) {
  yeah* here840 = arg839;
  yeah* harg841 = hcar(here840);
  unsigned mode = (unsigned)getint(harg841);
  here840 = hcdr(here840);
  A(isnil(here840));
  glutInitDisplayMode(mode);
  return Nil;
}
yeah* foop_glutInit(yeah* arg842) {
  yeah* here843 = arg842;
  yeah* harg844 = hcar(here843);
  int* argcp = (int*)opaqueval(harg844);
  here843 = hcdr(here843);
  yeah* harg845 = hcar(here843);
  char** argv = (char**)opaqueval(harg845);
  here843 = hcdr(here843);
  A(isnil(here843));
  glutInit(argcp, argv);
  return Nil;
}
yeah* foop_gluUnProject4(yeah* arg846) {
  yeah* here847 = arg846;
  yeah* harg848 = hcar(here847);
  GLdouble winX = (GLdouble)getfloatcvt(harg848);
  here847 = hcdr(here847);
  yeah* harg849 = hcar(here847);
  GLdouble winY = (GLdouble)getfloatcvt(harg849);
  here847 = hcdr(here847);
  yeah* harg850 = hcar(here847);
  GLdouble winZ = (GLdouble)getfloatcvt(harg850);
  here847 = hcdr(here847);
  yeah* harg851 = hcar(here847);
  GLdouble clipW = (GLdouble)getfloatcvt(harg851);
  here847 = hcdr(here847);
  yeah* harg852 = hcar(here847);
  const GLdouble* model = (const GLdouble*)opaqueval(harg852);
  here847 = hcdr(here847);
  yeah* harg853 = hcar(here847);
  const GLdouble* proj = (const GLdouble*)opaqueval(harg853);
  here847 = hcdr(here847);
  yeah* harg854 = hcar(here847);
  const GLint* view = (const GLint*)opaqueval(harg854);
  here847 = hcdr(here847);
  yeah* harg855 = hcar(here847);
  GLdouble nearPlane = (GLdouble)getfloatcvt(harg855);
  here847 = hcdr(here847);
  yeah* harg856 = hcar(here847);
  GLdouble farPlane = (GLdouble)getfloatcvt(harg856);
  here847 = hcdr(here847);
  yeah* harg857 = hcar(here847);
  GLdouble* objX = (GLdouble*)opaqueval(harg857);
  here847 = hcdr(here847);
  yeah* harg858 = hcar(here847);
  GLdouble* objY = (GLdouble*)opaqueval(harg858);
  here847 = hcdr(here847);
  yeah* harg859 = hcar(here847);
  GLdouble* objZ = (GLdouble*)opaqueval(harg859);
  here847 = hcdr(here847);
  yeah* harg860 = hcar(here847);
  GLdouble* objW = (GLdouble*)opaqueval(harg860);
  here847 = hcdr(here847);
  A(isnil(here847));
  GLint ret861 = gluUnProject4(winX, winY, winZ, clipW, model, proj, view, nearPlane, farPlane, objX, objY, objZ, objW);
  return integer((int)ret861);
}
yeah* foop_gluUnProject(yeah* arg862) {
  yeah* here863 = arg862;
  yeah* harg864 = hcar(here863);
  GLdouble winX = (GLdouble)getfloatcvt(harg864);
  here863 = hcdr(here863);
  yeah* harg865 = hcar(here863);
  GLdouble winY = (GLdouble)getfloatcvt(harg865);
  here863 = hcdr(here863);
  yeah* harg866 = hcar(here863);
  GLdouble winZ = (GLdouble)getfloatcvt(harg866);
  here863 = hcdr(here863);
  yeah* harg867 = hcar(here863);
  const GLdouble* model = (const GLdouble*)opaqueval(harg867);
  here863 = hcdr(here863);
  yeah* harg868 = hcar(here863);
  const GLdouble* proj = (const GLdouble*)opaqueval(harg868);
  here863 = hcdr(here863);
  yeah* harg869 = hcar(here863);
  const GLint* view = (const GLint*)opaqueval(harg869);
  here863 = hcdr(here863);
  yeah* harg870 = hcar(here863);
  GLdouble* objX = (GLdouble*)opaqueval(harg870);
  here863 = hcdr(here863);
  yeah* harg871 = hcar(here863);
  GLdouble* objY = (GLdouble*)opaqueval(harg871);
  here863 = hcdr(here863);
  yeah* harg872 = hcar(here863);
  GLdouble* objZ = (GLdouble*)opaqueval(harg872);
  here863 = hcdr(here863);
  A(isnil(here863));
  GLint ret873 = gluUnProject(winX, winY, winZ, model, proj, view, objX, objY, objZ);
  return integer((int)ret873);
}
yeah* foop_gluTessVertex(yeah* arg874) {
  yeah* here875 = arg874;
  yeah* harg876 = hcar(here875);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg876);
  here875 = hcdr(here875);
  yeah* harg877 = hcar(here875);
  GLdouble* location = (GLdouble*)opaqueval(harg877);
  here875 = hcdr(here875);
  yeah* harg878 = hcar(here875);
  GLvoid* data = (GLvoid*)opaqueval(harg878);
  here875 = hcdr(here875);
  A(isnil(here875));
  gluTessVertex(tess, location, data);
  return Nil;
}
yeah* foop_gluTessProperty(yeah* arg879) {
  yeah* here880 = arg879;
  yeah* harg881 = hcar(here880);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg881);
  here880 = hcdr(here880);
  yeah* harg882 = hcar(here880);
  GLenum which = (GLenum)getint(harg882);
  here880 = hcdr(here880);
  yeah* harg883 = hcar(here880);
  GLdouble data = (GLdouble)getfloatcvt(harg883);
  here880 = hcdr(here880);
  A(isnil(here880));
  gluTessProperty(tess, which, data);
  return Nil;
}
yeah* foop_gluTessNormal(yeah* arg884) {
  yeah* here885 = arg884;
  yeah* harg886 = hcar(here885);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg886);
  here885 = hcdr(here885);
  yeah* harg887 = hcar(here885);
  GLdouble valueX = (GLdouble)getfloatcvt(harg887);
  here885 = hcdr(here885);
  yeah* harg888 = hcar(here885);
  GLdouble valueY = (GLdouble)getfloatcvt(harg888);
  here885 = hcdr(here885);
  yeah* harg889 = hcar(here885);
  GLdouble valueZ = (GLdouble)getfloatcvt(harg889);
  here885 = hcdr(here885);
  A(isnil(here885));
  gluTessNormal(tess, valueX, valueY, valueZ);
  return Nil;
}
yeah* foop_gluTessEndPolygon(yeah* arg890) {
  yeah* here891 = arg890;
  yeah* harg892 = hcar(here891);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg892);
  here891 = hcdr(here891);
  A(isnil(here891));
  gluTessEndPolygon(tess);
  return Nil;
}
yeah* foop_gluTessEndContour(yeah* arg893) {
  yeah* here894 = arg893;
  yeah* harg895 = hcar(here894);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg895);
  here894 = hcdr(here894);
  A(isnil(here894));
  gluTessEndContour(tess);
  return Nil;
}
yeah* foop_gluTessCallback(yeah* arg896) {
  yeah* here897 = arg896;
  yeah* harg898 = hcar(here897);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg898);
  here897 = hcdr(here897);
  yeah* harg899 = hcar(here897);
  GLenum which = (GLenum)getint(harg899);
  here897 = hcdr(here897);
  yeah* harg900 = hcar(here897);
  GLvoid (*CallBackFunc)() = uuGLvoid_wrap(harg900);
  here897 = hcdr(here897);
  A(isnil(here897));
  gluTessCallback(tess, which, CallBackFunc);
  return Nil;
}
yeah* foop_gluTessBeginPolygon(yeah* arg901) {
  yeah* here902 = arg901;
  yeah* harg903 = hcar(here902);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg903);
  here902 = hcdr(here902);
  yeah* harg904 = hcar(here902);
  GLvoid* data = (GLvoid*)opaqueval(harg904);
  here902 = hcdr(here902);
  A(isnil(here902));
  gluTessBeginPolygon(tess, data);
  return Nil;
}
yeah* foop_gluTessBeginContour(yeah* arg905) {
  yeah* here906 = arg905;
  yeah* harg907 = hcar(here906);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg907);
  here906 = hcdr(here906);
  A(isnil(here906));
  gluTessBeginContour(tess);
  return Nil;
}
yeah* foop_gluSphere(yeah* arg908) {
  yeah* here909 = arg908;
  yeah* harg910 = hcar(here909);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg910);
  here909 = hcdr(here909);
  yeah* harg911 = hcar(here909);
  GLdouble radius = (GLdouble)getfloatcvt(harg911);
  here909 = hcdr(here909);
  yeah* harg912 = hcar(here909);
  GLint slices = (GLint)getint(harg912);
  here909 = hcdr(here909);
  yeah* harg913 = hcar(here909);
  GLint stacks = (GLint)getint(harg913);
  here909 = hcdr(here909);
  A(isnil(here909));
  gluSphere(quad, radius, slices, stacks);
  return Nil;
}
yeah* foop_gluScaleImage(yeah* arg914) {
  yeah* here915 = arg914;
  yeah* harg916 = hcar(here915);
  GLenum format = (GLenum)getint(harg916);
  here915 = hcdr(here915);
  yeah* harg917 = hcar(here915);
  GLsizei wIn = (GLsizei)getint(harg917);
  here915 = hcdr(here915);
  yeah* harg918 = hcar(here915);
  GLsizei hIn = (GLsizei)getint(harg918);
  here915 = hcdr(here915);
  yeah* harg919 = hcar(here915);
  GLenum typeIn = (GLenum)getint(harg919);
  here915 = hcdr(here915);
  yeah* harg920 = hcar(here915);
  const void* dataIn = (const void*)opaqueval(harg920);
  here915 = hcdr(here915);
  yeah* harg921 = hcar(here915);
  GLsizei wOut = (GLsizei)getint(harg921);
  here915 = hcdr(here915);
  yeah* harg922 = hcar(here915);
  GLsizei hOut = (GLsizei)getint(harg922);
  here915 = hcdr(here915);
  yeah* harg923 = hcar(here915);
  GLenum typeOut = (GLenum)getint(harg923);
  here915 = hcdr(here915);
  yeah* harg924 = hcar(here915);
  GLvoid* dataOut = (GLvoid*)opaqueval(harg924);
  here915 = hcdr(here915);
  A(isnil(here915));
  GLint ret925 = gluScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
  return integer((int)ret925);
}
yeah* foop_gluQuadricTexture(yeah* arg926) {
  yeah* here927 = arg926;
  yeah* harg928 = hcar(here927);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg928);
  here927 = hcdr(here927);
  yeah* harg929 = hcar(here927);
  int texture = (int)getint(harg929);
  here927 = hcdr(here927);
  A(isnil(here927));
  gluQuadricTexture(quad, texture);
  return Nil;
}
yeah* foop_gluQuadricOrientation(yeah* arg930) {
  yeah* here931 = arg930;
  yeah* harg932 = hcar(here931);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg932);
  here931 = hcdr(here931);
  yeah* harg933 = hcar(here931);
  GLenum orientation = (GLenum)getint(harg933);
  here931 = hcdr(here931);
  A(isnil(here931));
  gluQuadricOrientation(quad, orientation);
  return Nil;
}
yeah* foop_gluQuadricNormals(yeah* arg934) {
  yeah* here935 = arg934;
  yeah* harg936 = hcar(here935);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg936);
  here935 = hcdr(here935);
  yeah* harg937 = hcar(here935);
  GLenum normal = (GLenum)getint(harg937);
  here935 = hcdr(here935);
  A(isnil(here935));
  gluQuadricNormals(quad, normal);
  return Nil;
}
yeah* foop_gluQuadricDrawStyle(yeah* arg938) {
  yeah* here939 = arg938;
  yeah* harg940 = hcar(here939);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg940);
  here939 = hcdr(here939);
  yeah* harg941 = hcar(here939);
  GLenum draw = (GLenum)getint(harg941);
  here939 = hcdr(here939);
  A(isnil(here939));
  gluQuadricDrawStyle(quad, draw);
  return Nil;
}
yeah* foop_gluQuadricCallback(yeah* arg942) {
  yeah* here943 = arg942;
  yeah* harg944 = hcar(here943);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg944);
  here943 = hcdr(here943);
  yeah* harg945 = hcar(here943);
  GLenum which = (GLenum)getint(harg945);
  here943 = hcdr(here943);
  yeah* harg946 = hcar(here943);
  GLvoid (*CallBackFunc)() = uuGLvoid_wrap(harg946);
  here943 = hcdr(here943);
  A(isnil(here943));
  gluQuadricCallback(quad, which, CallBackFunc);
  return Nil;
}
yeah* foop_gluPwlCurve(yeah* arg947) {
  yeah* here948 = arg947;
  yeah* harg949 = hcar(here948);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg949);
  here948 = hcdr(here948);
  yeah* harg950 = hcar(here948);
  GLint count = (GLint)getint(harg950);
  here948 = hcdr(here948);
  yeah* harg951 = hcar(here948);
  GLfloat* data = (GLfloat*)opaqueval(harg951);
  here948 = hcdr(here948);
  yeah* harg952 = hcar(here948);
  GLint stride = (GLint)getint(harg952);
  here948 = hcdr(here948);
  yeah* harg953 = hcar(here948);
  GLenum type = (GLenum)getint(harg953);
  here948 = hcdr(here948);
  A(isnil(here948));
  gluPwlCurve(nurb, count, data, stride, type);
  return Nil;
}
yeah* foop_gluProject(yeah* arg954) {
  yeah* here955 = arg954;
  yeah* harg956 = hcar(here955);
  GLdouble objX = (GLdouble)getfloatcvt(harg956);
  here955 = hcdr(here955);
  yeah* harg957 = hcar(here955);
  GLdouble objY = (GLdouble)getfloatcvt(harg957);
  here955 = hcdr(here955);
  yeah* harg958 = hcar(here955);
  GLdouble objZ = (GLdouble)getfloatcvt(harg958);
  here955 = hcdr(here955);
  yeah* harg959 = hcar(here955);
  const GLdouble* model = (const GLdouble*)opaqueval(harg959);
  here955 = hcdr(here955);
  yeah* harg960 = hcar(here955);
  const GLdouble* proj = (const GLdouble*)opaqueval(harg960);
  here955 = hcdr(here955);
  yeah* harg961 = hcar(here955);
  const GLint* view = (const GLint*)opaqueval(harg961);
  here955 = hcdr(here955);
  yeah* harg962 = hcar(here955);
  GLdouble* winX = (GLdouble*)opaqueval(harg962);
  here955 = hcdr(here955);
  yeah* harg963 = hcar(here955);
  GLdouble* winY = (GLdouble*)opaqueval(harg963);
  here955 = hcdr(here955);
  yeah* harg964 = hcar(here955);
  GLdouble* winZ = (GLdouble*)opaqueval(harg964);
  here955 = hcdr(here955);
  A(isnil(here955));
  GLint ret965 = gluProject(objX, objY, objZ, model, proj, view, winX, winY, winZ);
  return integer((int)ret965);
}
yeah* foop_gluPickMatrix(yeah* arg966) {
  yeah* here967 = arg966;
  yeah* harg968 = hcar(here967);
  GLdouble x = (GLdouble)getfloatcvt(harg968);
  here967 = hcdr(here967);
  yeah* harg969 = hcar(here967);
  GLdouble y = (GLdouble)getfloatcvt(harg969);
  here967 = hcdr(here967);
  yeah* harg970 = hcar(here967);
  GLdouble delX = (GLdouble)getfloatcvt(harg970);
  here967 = hcdr(here967);
  yeah* harg971 = hcar(here967);
  GLdouble delY = (GLdouble)getfloatcvt(harg971);
  here967 = hcdr(here967);
  yeah* harg972 = hcar(here967);
  GLint* viewport = (GLint*)opaqueval(harg972);
  here967 = hcdr(here967);
  A(isnil(here967));
  gluPickMatrix(x, y, delX, delY, viewport);
  return Nil;
}
yeah* foop_gluPerspective(yeah* arg973) {
  yeah* here974 = arg973;
  yeah* harg975 = hcar(here974);
  GLdouble fovy = (GLdouble)getfloatcvt(harg975);
  here974 = hcdr(here974);
  yeah* harg976 = hcar(here974);
  GLdouble aspect = (GLdouble)getfloatcvt(harg976);
  here974 = hcdr(here974);
  yeah* harg977 = hcar(here974);
  GLdouble zNear = (GLdouble)getfloatcvt(harg977);
  here974 = hcdr(here974);
  yeah* harg978 = hcar(here974);
  GLdouble zFar = (GLdouble)getfloatcvt(harg978);
  here974 = hcdr(here974);
  A(isnil(here974));
  gluPerspective(fovy, aspect, zNear, zFar);
  return Nil;
}
yeah* foop_gluPartialDisk(yeah* arg979) {
  yeah* here980 = arg979;
  yeah* harg981 = hcar(here980);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg981);
  here980 = hcdr(here980);
  yeah* harg982 = hcar(here980);
  GLdouble inner = (GLdouble)getfloatcvt(harg982);
  here980 = hcdr(here980);
  yeah* harg983 = hcar(here980);
  GLdouble outer = (GLdouble)getfloatcvt(harg983);
  here980 = hcdr(here980);
  yeah* harg984 = hcar(here980);
  GLint slices = (GLint)getint(harg984);
  here980 = hcdr(here980);
  yeah* harg985 = hcar(here980);
  GLint loops = (GLint)getint(harg985);
  here980 = hcdr(here980);
  yeah* harg986 = hcar(here980);
  GLdouble start = (GLdouble)getfloatcvt(harg986);
  here980 = hcdr(here980);
  yeah* harg987 = hcar(here980);
  GLdouble sweep = (GLdouble)getfloatcvt(harg987);
  here980 = hcdr(here980);
  A(isnil(here980));
  gluPartialDisk(quad, inner, outer, slices, loops, start, sweep);
  return Nil;
}
yeah* foop_gluOrtho2D(yeah* arg988) {
  yeah* here989 = arg988;
  yeah* harg990 = hcar(here989);
  GLdouble left = (GLdouble)getfloatcvt(harg990);
  here989 = hcdr(here989);
  yeah* harg991 = hcar(here989);
  GLdouble right = (GLdouble)getfloatcvt(harg991);
  here989 = hcdr(here989);
  yeah* harg992 = hcar(here989);
  GLdouble bottom = (GLdouble)getfloatcvt(harg992);
  here989 = hcdr(here989);
  yeah* harg993 = hcar(here989);
  GLdouble top = (GLdouble)getfloatcvt(harg993);
  here989 = hcdr(here989);
  A(isnil(here989));
  gluOrtho2D(left, right, bottom, top);
  return Nil;
}
yeah* foop_gluNurbsSurface(yeah* arg994) {
  yeah* here995 = arg994;
  yeah* harg996 = hcar(here995);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg996);
  here995 = hcdr(here995);
  yeah* harg997 = hcar(here995);
  GLint sKnotCount = (GLint)getint(harg997);
  here995 = hcdr(here995);
  yeah* harg998 = hcar(here995);
  GLfloat* sKnots = (GLfloat*)opaqueval(harg998);
  here995 = hcdr(here995);
  yeah* harg999 = hcar(here995);
  GLint tKnotCount = (GLint)getint(harg999);
  here995 = hcdr(here995);
  yeah* harg1000 = hcar(here995);
  GLfloat* tKnots = (GLfloat*)opaqueval(harg1000);
  here995 = hcdr(here995);
  yeah* harg1001 = hcar(here995);
  GLint sStride = (GLint)getint(harg1001);
  here995 = hcdr(here995);
  yeah* harg1002 = hcar(here995);
  GLint tStride = (GLint)getint(harg1002);
  here995 = hcdr(here995);
  yeah* harg1003 = hcar(here995);
  GLfloat* control = (GLfloat*)opaqueval(harg1003);
  here995 = hcdr(here995);
  yeah* harg1004 = hcar(here995);
  GLint sOrder = (GLint)getint(harg1004);
  here995 = hcdr(here995);
  yeah* harg1005 = hcar(here995);
  GLint tOrder = (GLint)getint(harg1005);
  here995 = hcdr(here995);
  yeah* harg1006 = hcar(here995);
  GLenum type = (GLenum)getint(harg1006);
  here995 = hcdr(here995);
  A(isnil(here995));
  gluNurbsSurface(nurb, sKnotCount, sKnots, tKnotCount, tKnots, sStride, tStride, control, sOrder, tOrder, type);
  return Nil;
}
yeah* foop_gluNurbsProperty(yeah* arg1007) {
  yeah* here1008 = arg1007;
  yeah* harg1009 = hcar(here1008);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1009);
  here1008 = hcdr(here1008);
  yeah* harg1010 = hcar(here1008);
  GLenum property = (GLenum)getint(harg1010);
  here1008 = hcdr(here1008);
  yeah* harg1011 = hcar(here1008);
  GLfloat value = (GLfloat)getfloatcvt(harg1011);
  here1008 = hcdr(here1008);
  A(isnil(here1008));
  gluNurbsProperty(nurb, property, value);
  return Nil;
}
yeah* foop_gluNurbsCurve(yeah* arg1012) {
  yeah* here1013 = arg1012;
  yeah* harg1014 = hcar(here1013);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1014);
  here1013 = hcdr(here1013);
  yeah* harg1015 = hcar(here1013);
  GLint knotCount = (GLint)getint(harg1015);
  here1013 = hcdr(here1013);
  yeah* harg1016 = hcar(here1013);
  GLfloat* knots = (GLfloat*)opaqueval(harg1016);
  here1013 = hcdr(here1013);
  yeah* harg1017 = hcar(here1013);
  GLint stride = (GLint)getint(harg1017);
  here1013 = hcdr(here1013);
  yeah* harg1018 = hcar(here1013);
  GLfloat* control = (GLfloat*)opaqueval(harg1018);
  here1013 = hcdr(here1013);
  yeah* harg1019 = hcar(here1013);
  GLint order = (GLint)getint(harg1019);
  here1013 = hcdr(here1013);
  yeah* harg1020 = hcar(here1013);
  GLenum type = (GLenum)getint(harg1020);
  here1013 = hcdr(here1013);
  A(isnil(here1013));
  gluNurbsCurve(nurb, knotCount, knots, stride, control, order, type);
  return Nil;
}
yeah* foop_gluNurbsCallbackData(yeah* arg1021) {
  yeah* here1022 = arg1021;
  yeah* harg1023 = hcar(here1022);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1023);
  here1022 = hcdr(here1022);
  yeah* harg1024 = hcar(here1022);
  GLvoid* userData = (GLvoid*)opaqueval(harg1024);
  here1022 = hcdr(here1022);
  A(isnil(here1022));
  gluNurbsCallbackData(nurb, userData);
  return Nil;
}
yeah* foop_gluNurbsCallback(yeah* arg1025) {
  yeah* here1026 = arg1025;
  yeah* harg1027 = hcar(here1026);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1027);
  here1026 = hcdr(here1026);
  yeah* harg1028 = hcar(here1026);
  GLenum which = (GLenum)getint(harg1028);
  here1026 = hcdr(here1026);
  yeah* harg1029 = hcar(here1026);
  GLvoid (*CallBackFunc)() = uuGLvoid_wrap(harg1029);
  here1026 = hcdr(here1026);
  A(isnil(here1026));
  gluNurbsCallback(nurb, which, CallBackFunc);
  return Nil;
}
yeah* foop_gluNextContour(yeah* arg1030) {
  yeah* here1031 = arg1030;
  yeah* harg1032 = hcar(here1031);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg1032);
  here1031 = hcdr(here1031);
  yeah* harg1033 = hcar(here1031);
  GLenum type = (GLenum)getint(harg1033);
  here1031 = hcdr(here1031);
  A(isnil(here1031));
  gluNextContour(tess, type);
  return Nil;
}
yeah* foop_gluNewTess(yeah* arg1034) {
  yeah* here1035 = arg1034;
  A(isnil(here1035));
  GLUtesselator* ret1036 = gluNewTess();
  return opaque((void*)ret1036);
}
yeah* foop_gluNewQuadric(yeah* arg1037) {
  yeah* here1038 = arg1037;
  A(isnil(here1038));
  GLUquadric* ret1039 = gluNewQuadric();
  return opaque((void*)ret1039);
}
yeah* foop_gluNewNurbsRenderer(yeah* arg1040) {
  yeah* here1041 = arg1040;
  A(isnil(here1041));
  GLUnurbs* ret1042 = gluNewNurbsRenderer();
  return opaque((void*)ret1042);
}
yeah* foop_gluLookAt(yeah* arg1043) {
  yeah* here1044 = arg1043;
  yeah* harg1045 = hcar(here1044);
  GLdouble eyeX = (GLdouble)getfloatcvt(harg1045);
  here1044 = hcdr(here1044);
  yeah* harg1046 = hcar(here1044);
  GLdouble eyeY = (GLdouble)getfloatcvt(harg1046);
  here1044 = hcdr(here1044);
  yeah* harg1047 = hcar(here1044);
  GLdouble eyeZ = (GLdouble)getfloatcvt(harg1047);
  here1044 = hcdr(here1044);
  yeah* harg1048 = hcar(here1044);
  GLdouble centerX = (GLdouble)getfloatcvt(harg1048);
  here1044 = hcdr(here1044);
  yeah* harg1049 = hcar(here1044);
  GLdouble centerY = (GLdouble)getfloatcvt(harg1049);
  here1044 = hcdr(here1044);
  yeah* harg1050 = hcar(here1044);
  GLdouble centerZ = (GLdouble)getfloatcvt(harg1050);
  here1044 = hcdr(here1044);
  yeah* harg1051 = hcar(here1044);
  GLdouble upX = (GLdouble)getfloatcvt(harg1051);
  here1044 = hcdr(here1044);
  yeah* harg1052 = hcar(here1044);
  GLdouble upY = (GLdouble)getfloatcvt(harg1052);
  here1044 = hcdr(here1044);
  yeah* harg1053 = hcar(here1044);
  GLdouble upZ = (GLdouble)getfloatcvt(harg1053);
  here1044 = hcdr(here1044);
  A(isnil(here1044));
  gluLookAt(eyeX, eyeY, eyeZ, centerX, centerY, centerZ, upX, upY, upZ);
  return Nil;
}
yeah* foop_gluLoadSamplingMatrices(yeah* arg1054) {
  yeah* here1055 = arg1054;
  yeah* harg1056 = hcar(here1055);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1056);
  here1055 = hcdr(here1055);
  yeah* harg1057 = hcar(here1055);
  const GLfloat* model = (const GLfloat*)opaqueval(harg1057);
  here1055 = hcdr(here1055);
  yeah* harg1058 = hcar(here1055);
  const GLfloat* perspective = (const GLfloat*)opaqueval(harg1058);
  here1055 = hcdr(here1055);
  yeah* harg1059 = hcar(here1055);
  const GLint* view = (const GLint*)opaqueval(harg1059);
  here1055 = hcdr(here1055);
  A(isnil(here1055));
  gluLoadSamplingMatrices(nurb, model, perspective, view);
  return Nil;
}
yeah* foop_gluGetTessProperty(yeah* arg1060) {
  yeah* here1061 = arg1060;
  yeah* harg1062 = hcar(here1061);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg1062);
  here1061 = hcdr(here1061);
  yeah* harg1063 = hcar(here1061);
  GLenum which = (GLenum)getint(harg1063);
  here1061 = hcdr(here1061);
  yeah* harg1064 = hcar(here1061);
  GLdouble* data = (GLdouble*)opaqueval(harg1064);
  here1061 = hcdr(here1061);
  A(isnil(here1061));
  gluGetTessProperty(tess, which, data);
  return Nil;
}
yeah* foop_gluGetString(yeah* arg1065) {
  yeah* here1066 = arg1065;
  yeah* harg1067 = hcar(here1066);
  GLenum name = (GLenum)getint(harg1067);
  here1066 = hcdr(here1066);
  A(isnil(here1066));
  const GLubyte* ret1068 = gluGetString(name);
  return opaque((void*)ret1068);
}
yeah* foop_gluGetNurbsProperty(yeah* arg1069) {
  yeah* here1070 = arg1069;
  yeah* harg1071 = hcar(here1070);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1071);
  here1070 = hcdr(here1070);
  yeah* harg1072 = hcar(here1070);
  GLenum property = (GLenum)getint(harg1072);
  here1070 = hcdr(here1070);
  yeah* harg1073 = hcar(here1070);
  GLfloat* data = (GLfloat*)opaqueval(harg1073);
  here1070 = hcdr(here1070);
  A(isnil(here1070));
  gluGetNurbsProperty(nurb, property, data);
  return Nil;
}
yeah* foop_gluErrorString(yeah* arg1074) {
  yeah* here1075 = arg1074;
  yeah* harg1076 = hcar(here1075);
  GLenum error = (GLenum)getint(harg1076);
  here1075 = hcdr(here1075);
  A(isnil(here1075));
  const GLubyte* ret1077 = gluErrorString(error);
  return opaque((void*)ret1077);
}
yeah* foop_gluEndTrim(yeah* arg1078) {
  yeah* here1079 = arg1078;
  yeah* harg1080 = hcar(here1079);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1080);
  here1079 = hcdr(here1079);
  A(isnil(here1079));
  gluEndTrim(nurb);
  return Nil;
}
yeah* foop_gluEndSurface(yeah* arg1081) {
  yeah* here1082 = arg1081;
  yeah* harg1083 = hcar(here1082);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1083);
  here1082 = hcdr(here1082);
  A(isnil(here1082));
  gluEndSurface(nurb);
  return Nil;
}
yeah* foop_gluEndPolygon(yeah* arg1084) {
  yeah* here1085 = arg1084;
  yeah* harg1086 = hcar(here1085);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg1086);
  here1085 = hcdr(here1085);
  A(isnil(here1085));
  gluEndPolygon(tess);
  return Nil;
}
yeah* foop_gluEndCurve(yeah* arg1087) {
  yeah* here1088 = arg1087;
  yeah* harg1089 = hcar(here1088);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1089);
  here1088 = hcdr(here1088);
  A(isnil(here1088));
  gluEndCurve(nurb);
  return Nil;
}
yeah* foop_gluDisk(yeah* arg1090) {
  yeah* here1091 = arg1090;
  yeah* harg1092 = hcar(here1091);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg1092);
  here1091 = hcdr(here1091);
  yeah* harg1093 = hcar(here1091);
  GLdouble inner = (GLdouble)getfloatcvt(harg1093);
  here1091 = hcdr(here1091);
  yeah* harg1094 = hcar(here1091);
  GLdouble outer = (GLdouble)getfloatcvt(harg1094);
  here1091 = hcdr(here1091);
  yeah* harg1095 = hcar(here1091);
  GLint slices = (GLint)getint(harg1095);
  here1091 = hcdr(here1091);
  yeah* harg1096 = hcar(here1091);
  GLint loops = (GLint)getint(harg1096);
  here1091 = hcdr(here1091);
  A(isnil(here1091));
  gluDisk(quad, inner, outer, slices, loops);
  return Nil;
}
yeah* foop_gluDeleteTess(yeah* arg1097) {
  yeah* here1098 = arg1097;
  yeah* harg1099 = hcar(here1098);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg1099);
  here1098 = hcdr(here1098);
  A(isnil(here1098));
  gluDeleteTess(tess);
  return Nil;
}
yeah* foop_gluDeleteQuadric(yeah* arg1100) {
  yeah* here1101 = arg1100;
  yeah* harg1102 = hcar(here1101);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg1102);
  here1101 = hcdr(here1101);
  A(isnil(here1101));
  gluDeleteQuadric(quad);
  return Nil;
}
yeah* foop_gluDeleteNurbsRenderer(yeah* arg1103) {
  yeah* here1104 = arg1103;
  yeah* harg1105 = hcar(here1104);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1105);
  here1104 = hcdr(here1104);
  A(isnil(here1104));
  gluDeleteNurbsRenderer(nurb);
  return Nil;
}
yeah* foop_gluCylinder(yeah* arg1106) {
  yeah* here1107 = arg1106;
  yeah* harg1108 = hcar(here1107);
  GLUquadric* quad = (GLUquadric*)opaqueval(harg1108);
  here1107 = hcdr(here1107);
  yeah* harg1109 = hcar(here1107);
  GLdouble base = (GLdouble)getfloatcvt(harg1109);
  here1107 = hcdr(here1107);
  yeah* harg1110 = hcar(here1107);
  GLdouble top = (GLdouble)getfloatcvt(harg1110);
  here1107 = hcdr(here1107);
  yeah* harg1111 = hcar(here1107);
  GLdouble height = (GLdouble)getfloatcvt(harg1111);
  here1107 = hcdr(here1107);
  yeah* harg1112 = hcar(here1107);
  GLint slices = (GLint)getint(harg1112);
  here1107 = hcdr(here1107);
  yeah* harg1113 = hcar(here1107);
  GLint stacks = (GLint)getint(harg1113);
  here1107 = hcdr(here1107);
  A(isnil(here1107));
  gluCylinder(quad, base, top, height, slices, stacks);
  return Nil;
}
yeah* foop_gluCheckExtension(yeah* arg1114) {
  yeah* here1115 = arg1114;
  yeah* harg1116 = hcar(here1115);
  const GLubyte* extName = (const GLubyte*)opaqueval(harg1116);
  here1115 = hcdr(here1115);
  yeah* harg1117 = hcar(here1115);
  const GLubyte* extString = (const GLubyte*)opaqueval(harg1117);
  here1115 = hcdr(here1115);
  A(isnil(here1115));
  GLboolean ret1118 = gluCheckExtension(extName, extString);
  return integer((int)ret1118);
}
yeah* foop_gluBuild3DMipmaps(yeah* arg1119) {
  yeah* here1120 = arg1119;
  yeah* harg1121 = hcar(here1120);
  GLenum target = (GLenum)getint(harg1121);
  here1120 = hcdr(here1120);
  yeah* harg1122 = hcar(here1120);
  GLint internalFormat = (GLint)getint(harg1122);
  here1120 = hcdr(here1120);
  yeah* harg1123 = hcar(here1120);
  GLsizei width = (GLsizei)getint(harg1123);
  here1120 = hcdr(here1120);
  yeah* harg1124 = hcar(here1120);
  GLsizei height = (GLsizei)getint(harg1124);
  here1120 = hcdr(here1120);
  yeah* harg1125 = hcar(here1120);
  GLsizei depth = (GLsizei)getint(harg1125);
  here1120 = hcdr(here1120);
  yeah* harg1126 = hcar(here1120);
  GLenum format = (GLenum)getint(harg1126);
  here1120 = hcdr(here1120);
  yeah* harg1127 = hcar(here1120);
  GLenum type = (GLenum)getint(harg1127);
  here1120 = hcdr(here1120);
  yeah* harg1128 = hcar(here1120);
  const void* data = (const void*)opaqueval(harg1128);
  here1120 = hcdr(here1120);
  A(isnil(here1120));
  GLint ret1129 = gluBuild3DMipmaps(target, internalFormat, width, height, depth, format, type, data);
  return integer((int)ret1129);
}
yeah* foop_gluBuild3DMipmapLevels(yeah* arg1130) {
  yeah* here1131 = arg1130;
  yeah* harg1132 = hcar(here1131);
  GLenum target = (GLenum)getint(harg1132);
  here1131 = hcdr(here1131);
  yeah* harg1133 = hcar(here1131);
  GLint internalFormat = (GLint)getint(harg1133);
  here1131 = hcdr(here1131);
  yeah* harg1134 = hcar(here1131);
  GLsizei width = (GLsizei)getint(harg1134);
  here1131 = hcdr(here1131);
  yeah* harg1135 = hcar(here1131);
  GLsizei height = (GLsizei)getint(harg1135);
  here1131 = hcdr(here1131);
  yeah* harg1136 = hcar(here1131);
  GLsizei depth = (GLsizei)getint(harg1136);
  here1131 = hcdr(here1131);
  yeah* harg1137 = hcar(here1131);
  GLenum format = (GLenum)getint(harg1137);
  here1131 = hcdr(here1131);
  yeah* harg1138 = hcar(here1131);
  GLenum type = (GLenum)getint(harg1138);
  here1131 = hcdr(here1131);
  yeah* harg1139 = hcar(here1131);
  GLint level = (GLint)getint(harg1139);
  here1131 = hcdr(here1131);
  yeah* harg1140 = hcar(here1131);
  GLint base = (GLint)getint(harg1140);
  here1131 = hcdr(here1131);
  yeah* harg1141 = hcar(here1131);
  GLint max = (GLint)getint(harg1141);
  here1131 = hcdr(here1131);
  yeah* harg1142 = hcar(here1131);
  const void* data = (const void*)opaqueval(harg1142);
  here1131 = hcdr(here1131);
  A(isnil(here1131));
  GLint ret1143 = gluBuild3DMipmapLevels(target, internalFormat, width, height, depth, format, type, level, base, max, data);
  return integer((int)ret1143);
}
yeah* foop_gluBuild2DMipmaps(yeah* arg1144) {
  yeah* here1145 = arg1144;
  yeah* harg1146 = hcar(here1145);
  GLenum target = (GLenum)getint(harg1146);
  here1145 = hcdr(here1145);
  yeah* harg1147 = hcar(here1145);
  GLint internalFormat = (GLint)getint(harg1147);
  here1145 = hcdr(here1145);
  yeah* harg1148 = hcar(here1145);
  GLsizei width = (GLsizei)getint(harg1148);
  here1145 = hcdr(here1145);
  yeah* harg1149 = hcar(here1145);
  GLsizei height = (GLsizei)getint(harg1149);
  here1145 = hcdr(here1145);
  yeah* harg1150 = hcar(here1145);
  GLenum format = (GLenum)getint(harg1150);
  here1145 = hcdr(here1145);
  yeah* harg1151 = hcar(here1145);
  GLenum type = (GLenum)getint(harg1151);
  here1145 = hcdr(here1145);
  yeah* harg1152 = hcar(here1145);
  const void* data = (const void*)opaqueval(harg1152);
  here1145 = hcdr(here1145);
  A(isnil(here1145));
  GLint ret1153 = gluBuild2DMipmaps(target, internalFormat, width, height, format, type, data);
  return integer((int)ret1153);
}
yeah* foop_gluBuild2DMipmapLevels(yeah* arg1154) {
  yeah* here1155 = arg1154;
  yeah* harg1156 = hcar(here1155);
  GLenum target = (GLenum)getint(harg1156);
  here1155 = hcdr(here1155);
  yeah* harg1157 = hcar(here1155);
  GLint internalFormat = (GLint)getint(harg1157);
  here1155 = hcdr(here1155);
  yeah* harg1158 = hcar(here1155);
  GLsizei width = (GLsizei)getint(harg1158);
  here1155 = hcdr(here1155);
  yeah* harg1159 = hcar(here1155);
  GLsizei height = (GLsizei)getint(harg1159);
  here1155 = hcdr(here1155);
  yeah* harg1160 = hcar(here1155);
  GLenum format = (GLenum)getint(harg1160);
  here1155 = hcdr(here1155);
  yeah* harg1161 = hcar(here1155);
  GLenum type = (GLenum)getint(harg1161);
  here1155 = hcdr(here1155);
  yeah* harg1162 = hcar(here1155);
  GLint level = (GLint)getint(harg1162);
  here1155 = hcdr(here1155);
  yeah* harg1163 = hcar(here1155);
  GLint base = (GLint)getint(harg1163);
  here1155 = hcdr(here1155);
  yeah* harg1164 = hcar(here1155);
  GLint max = (GLint)getint(harg1164);
  here1155 = hcdr(here1155);
  yeah* harg1165 = hcar(here1155);
  const void* data = (const void*)opaqueval(harg1165);
  here1155 = hcdr(here1155);
  A(isnil(here1155));
  GLint ret1166 = gluBuild2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data);
  return integer((int)ret1166);
}
yeah* foop_gluBuild1DMipmaps(yeah* arg1167) {
  yeah* here1168 = arg1167;
  yeah* harg1169 = hcar(here1168);
  GLenum target = (GLenum)getint(harg1169);
  here1168 = hcdr(here1168);
  yeah* harg1170 = hcar(here1168);
  GLint internalFormat = (GLint)getint(harg1170);
  here1168 = hcdr(here1168);
  yeah* harg1171 = hcar(here1168);
  GLsizei width = (GLsizei)getint(harg1171);
  here1168 = hcdr(here1168);
  yeah* harg1172 = hcar(here1168);
  GLenum format = (GLenum)getint(harg1172);
  here1168 = hcdr(here1168);
  yeah* harg1173 = hcar(here1168);
  GLenum type = (GLenum)getint(harg1173);
  here1168 = hcdr(here1168);
  yeah* harg1174 = hcar(here1168);
  const void* data = (const void*)opaqueval(harg1174);
  here1168 = hcdr(here1168);
  A(isnil(here1168));
  GLint ret1175 = gluBuild1DMipmaps(target, internalFormat, width, format, type, data);
  return integer((int)ret1175);
}
yeah* foop_gluBuild1DMipmapLevels(yeah* arg1176) {
  yeah* here1177 = arg1176;
  yeah* harg1178 = hcar(here1177);
  GLenum target = (GLenum)getint(harg1178);
  here1177 = hcdr(here1177);
  yeah* harg1179 = hcar(here1177);
  GLint internalFormat = (GLint)getint(harg1179);
  here1177 = hcdr(here1177);
  yeah* harg1180 = hcar(here1177);
  GLsizei width = (GLsizei)getint(harg1180);
  here1177 = hcdr(here1177);
  yeah* harg1181 = hcar(here1177);
  GLenum format = (GLenum)getint(harg1181);
  here1177 = hcdr(here1177);
  yeah* harg1182 = hcar(here1177);
  GLenum type = (GLenum)getint(harg1182);
  here1177 = hcdr(here1177);
  yeah* harg1183 = hcar(here1177);
  GLint level = (GLint)getint(harg1183);
  here1177 = hcdr(here1177);
  yeah* harg1184 = hcar(here1177);
  GLint base = (GLint)getint(harg1184);
  here1177 = hcdr(here1177);
  yeah* harg1185 = hcar(here1177);
  GLint max = (GLint)getint(harg1185);
  here1177 = hcdr(here1177);
  yeah* harg1186 = hcar(here1177);
  const void* data = (const void*)opaqueval(harg1186);
  here1177 = hcdr(here1177);
  A(isnil(here1177));
  GLint ret1187 = gluBuild1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data);
  return integer((int)ret1187);
}
yeah* foop_gluBeginTrim(yeah* arg1188) {
  yeah* here1189 = arg1188;
  yeah* harg1190 = hcar(here1189);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1190);
  here1189 = hcdr(here1189);
  A(isnil(here1189));
  gluBeginTrim(nurb);
  return Nil;
}
yeah* foop_gluBeginSurface(yeah* arg1191) {
  yeah* here1192 = arg1191;
  yeah* harg1193 = hcar(here1192);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1193);
  here1192 = hcdr(here1192);
  A(isnil(here1192));
  gluBeginSurface(nurb);
  return Nil;
}
yeah* foop_gluBeginPolygon(yeah* arg1194) {
  yeah* here1195 = arg1194;
  yeah* harg1196 = hcar(here1195);
  GLUtesselator* tess = (GLUtesselator*)opaqueval(harg1196);
  here1195 = hcdr(here1195);
  A(isnil(here1195));
  gluBeginPolygon(tess);
  return Nil;
}
yeah* foop_gluBeginCurve(yeah* arg1197) {
  yeah* here1198 = arg1197;
  yeah* harg1199 = hcar(here1198);
  GLUnurbs* nurb = (GLUnurbs*)opaqueval(harg1199);
  here1198 = hcdr(here1198);
  A(isnil(here1198));
  gluBeginCurve(nurb);
  return Nil;
}
yeah* foop__GLeeEnabled(yeah* arg1200) {
  yeah* here1201 = arg1200;
  yeah* harg1202 = hcar(here1201);
  GLboolean* extensionQueryingVariable = (GLboolean*)opaqueval(harg1202);
  here1201 = hcdr(here1201);
  A(isnil(here1201));
  GLboolean ret1203 = GLeeEnabled(extensionQueryingVariable);
  return integer((int)ret1203);
}
yeah* foop__GLeeGetExtStrGL(yeah* arg1204) {
  yeah* here1205 = arg1204;
  A(isnil(here1205));
  const char* ret1206 = GLeeGetExtStrGL();
  return string((char*)ret1206);
}
yeah* foop__GLeeGetErrorString(yeah* arg1207) {
  yeah* here1208 = arg1207;
  A(isnil(here1208));
  const char* ret1209 = GLeeGetErrorString();
  return string((char*)ret1209);
}
yeah* foop__GLeeForceLink(yeah* arg1210) {
  yeah* here1211 = arg1210;
  yeah* harg1212 = hcar(here1211);
  const char* extensionName = (const char*)stringval(harg1212);
  here1211 = hcdr(here1211);
  A(isnil(here1211));
  GLint ret1213 = GLeeForceLink(extensionName);
  return integer((int)ret1213);
}
yeah* foop__GLeeInit(yeah* arg1214) {
  yeah* here1215 = arg1214;
  A(isnil(here1215));
  GLboolean ret1216 = GLeeInit();
  return integer((int)ret1216);
}
yeah* foop_glUniformMatrix4x3fv(yeah* arg1217) {
  yeah* here1218 = arg1217;
  yeah* harg1219 = hcar(here1218);
  GLint location = (GLint)getint(harg1219);
  here1218 = hcdr(here1218);
  yeah* harg1220 = hcar(here1218);
  GLsizei count = (GLsizei)getint(harg1220);
  here1218 = hcdr(here1218);
  yeah* harg1221 = hcar(here1218);
  int transpose = (int)getint(harg1221);
  here1218 = hcdr(here1218);
  yeah* harg1222 = hcar(here1218);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1222);
  here1218 = hcdr(here1218);
  A(isnil(here1218));
  glUniformMatrix4x3fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix3x4fv(yeah* arg1223) {
  yeah* here1224 = arg1223;
  yeah* harg1225 = hcar(here1224);
  GLint location = (GLint)getint(harg1225);
  here1224 = hcdr(here1224);
  yeah* harg1226 = hcar(here1224);
  GLsizei count = (GLsizei)getint(harg1226);
  here1224 = hcdr(here1224);
  yeah* harg1227 = hcar(here1224);
  int transpose = (int)getint(harg1227);
  here1224 = hcdr(here1224);
  yeah* harg1228 = hcar(here1224);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1228);
  here1224 = hcdr(here1224);
  A(isnil(here1224));
  glUniformMatrix3x4fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix4x2fv(yeah* arg1229) {
  yeah* here1230 = arg1229;
  yeah* harg1231 = hcar(here1230);
  GLint location = (GLint)getint(harg1231);
  here1230 = hcdr(here1230);
  yeah* harg1232 = hcar(here1230);
  GLsizei count = (GLsizei)getint(harg1232);
  here1230 = hcdr(here1230);
  yeah* harg1233 = hcar(here1230);
  int transpose = (int)getint(harg1233);
  here1230 = hcdr(here1230);
  yeah* harg1234 = hcar(here1230);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1234);
  here1230 = hcdr(here1230);
  A(isnil(here1230));
  glUniformMatrix4x2fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix2x4fv(yeah* arg1235) {
  yeah* here1236 = arg1235;
  yeah* harg1237 = hcar(here1236);
  GLint location = (GLint)getint(harg1237);
  here1236 = hcdr(here1236);
  yeah* harg1238 = hcar(here1236);
  GLsizei count = (GLsizei)getint(harg1238);
  here1236 = hcdr(here1236);
  yeah* harg1239 = hcar(here1236);
  int transpose = (int)getint(harg1239);
  here1236 = hcdr(here1236);
  yeah* harg1240 = hcar(here1236);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1240);
  here1236 = hcdr(here1236);
  A(isnil(here1236));
  glUniformMatrix2x4fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix3x2fv(yeah* arg1241) {
  yeah* here1242 = arg1241;
  yeah* harg1243 = hcar(here1242);
  GLint location = (GLint)getint(harg1243);
  here1242 = hcdr(here1242);
  yeah* harg1244 = hcar(here1242);
  GLsizei count = (GLsizei)getint(harg1244);
  here1242 = hcdr(here1242);
  yeah* harg1245 = hcar(here1242);
  int transpose = (int)getint(harg1245);
  here1242 = hcdr(here1242);
  yeah* harg1246 = hcar(here1242);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1246);
  here1242 = hcdr(here1242);
  A(isnil(here1242));
  glUniformMatrix3x2fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix2x3fv(yeah* arg1247) {
  yeah* here1248 = arg1247;
  yeah* harg1249 = hcar(here1248);
  GLint location = (GLint)getint(harg1249);
  here1248 = hcdr(here1248);
  yeah* harg1250 = hcar(here1248);
  GLsizei count = (GLsizei)getint(harg1250);
  here1248 = hcdr(here1248);
  yeah* harg1251 = hcar(here1248);
  int transpose = (int)getint(harg1251);
  here1248 = hcdr(here1248);
  yeah* harg1252 = hcar(here1248);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1252);
  here1248 = hcdr(here1248);
  A(isnil(here1248));
  glUniformMatrix2x3fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glStencilMaskSeparate(yeah* arg1253) {
  yeah* here1254 = arg1253;
  yeah* harg1255 = hcar(here1254);
  GLenum face = (GLenum)getint(harg1255);
  here1254 = hcdr(here1254);
  yeah* harg1256 = hcar(here1254);
  GLuint mask = (GLuint)getint(harg1256);
  here1254 = hcdr(here1254);
  A(isnil(here1254));
  glStencilMaskSeparate(face, mask);
  return Nil;
}
yeah* foop_glStencilOpSeparate(yeah* arg1257) {
  yeah* here1258 = arg1257;
  yeah* harg1259 = hcar(here1258);
  GLenum face = (GLenum)getint(harg1259);
  here1258 = hcdr(here1258);
  yeah* harg1260 = hcar(here1258);
  GLenum fail = (GLenum)getint(harg1260);
  here1258 = hcdr(here1258);
  yeah* harg1261 = hcar(here1258);
  GLenum zfail = (GLenum)getint(harg1261);
  here1258 = hcdr(here1258);
  yeah* harg1262 = hcar(here1258);
  GLenum zpass = (GLenum)getint(harg1262);
  here1258 = hcdr(here1258);
  A(isnil(here1258));
  glStencilOpSeparate(face, fail, zfail, zpass);
  return Nil;
}
yeah* foop_glStencilFuncSeparate(yeah* arg1263) {
  yeah* here1264 = arg1263;
  yeah* harg1265 = hcar(here1264);
  GLenum face = (GLenum)getint(harg1265);
  here1264 = hcdr(here1264);
  yeah* harg1266 = hcar(here1264);
  GLenum func = (GLenum)getint(harg1266);
  here1264 = hcdr(here1264);
  yeah* harg1267 = hcar(here1264);
  GLint ref = (GLint)getint(harg1267);
  here1264 = hcdr(here1264);
  yeah* harg1268 = hcar(here1264);
  GLuint mask = (GLuint)getint(harg1268);
  here1264 = hcdr(here1264);
  A(isnil(here1264));
  glStencilFuncSeparate(face, func, ref, mask);
  return Nil;
}
yeah* foop_glGetAttribLocation(yeah* arg1269) {
  yeah* here1270 = arg1269;
  yeah* harg1271 = hcar(here1270);
  GLuint program = (GLuint)getint(harg1271);
  here1270 = hcdr(here1270);
  yeah* harg1272 = hcar(here1270);
  const GLchar* name = (const GLchar*)opaqueval(harg1272);
  here1270 = hcdr(here1270);
  A(isnil(here1270));
  GLint ret1273 = glGetAttribLocation(program, name);
  return integer((int)ret1273);
}
yeah* foop_glGetActiveAttrib(yeah* arg1274) {
  yeah* here1275 = arg1274;
  yeah* harg1276 = hcar(here1275);
  GLuint program = (GLuint)getint(harg1276);
  here1275 = hcdr(here1275);
  yeah* harg1277 = hcar(here1275);
  GLuint index = (GLuint)getint(harg1277);
  here1275 = hcdr(here1275);
  yeah* harg1278 = hcar(here1275);
  GLsizei bufSize = (GLsizei)getint(harg1278);
  here1275 = hcdr(here1275);
  yeah* harg1279 = hcar(here1275);
  GLsizei* length = (GLsizei*)opaqueval(harg1279);
  here1275 = hcdr(here1275);
  yeah* harg1280 = hcar(here1275);
  GLint* size = (GLint*)opaqueval(harg1280);
  here1275 = hcdr(here1275);
  yeah* harg1281 = hcar(here1275);
  GLenum* type = (GLenum*)opaqueval(harg1281);
  here1275 = hcdr(here1275);
  yeah* harg1282 = hcar(here1275);
  GLchar* name = (GLchar*)opaqueval(harg1282);
  here1275 = hcdr(here1275);
  A(isnil(here1275));
  glGetActiveAttrib(program, index, bufSize, length, size, type, name);
  return Nil;
}
yeah* foop_glBindAttribLocation(yeah* arg1283) {
  yeah* here1284 = arg1283;
  yeah* harg1285 = hcar(here1284);
  GLuint program = (GLuint)getint(harg1285);
  here1284 = hcdr(here1284);
  yeah* harg1286 = hcar(here1284);
  GLuint index = (GLuint)getint(harg1286);
  here1284 = hcdr(here1284);
  yeah* harg1287 = hcar(here1284);
  const GLchar* name = (const GLchar*)opaqueval(harg1287);
  here1284 = hcdr(here1284);
  A(isnil(here1284));
  glBindAttribLocation(program, index, name);
  return Nil;
}
yeah* foop_glGetShaderSource(yeah* arg1288) {
  yeah* here1289 = arg1288;
  yeah* harg1290 = hcar(here1289);
  GLuint shader = (GLuint)getint(harg1290);
  here1289 = hcdr(here1289);
  yeah* harg1291 = hcar(here1289);
  GLsizei bufSize = (GLsizei)getint(harg1291);
  here1289 = hcdr(here1289);
  yeah* harg1292 = hcar(here1289);
  GLsizei* length = (GLsizei*)opaqueval(harg1292);
  here1289 = hcdr(here1289);
  yeah* harg1293 = hcar(here1289);
  GLchar* source = (GLchar*)opaqueval(harg1293);
  here1289 = hcdr(here1289);
  A(isnil(here1289));
  glGetShaderSource(shader, bufSize, length, source);
  return Nil;
}
yeah* foop_glGetUniformiv(yeah* arg1294) {
  yeah* here1295 = arg1294;
  yeah* harg1296 = hcar(here1295);
  GLuint program = (GLuint)getint(harg1296);
  here1295 = hcdr(here1295);
  yeah* harg1297 = hcar(here1295);
  GLint location = (GLint)getint(harg1297);
  here1295 = hcdr(here1295);
  yeah* harg1298 = hcar(here1295);
  GLint* params = (GLint*)opaqueval(harg1298);
  here1295 = hcdr(here1295);
  A(isnil(here1295));
  glGetUniformiv(program, location, params);
  return Nil;
}
yeah* foop_glGetUniformfv(yeah* arg1299) {
  yeah* here1300 = arg1299;
  yeah* harg1301 = hcar(here1300);
  GLuint program = (GLuint)getint(harg1301);
  here1300 = hcdr(here1300);
  yeah* harg1302 = hcar(here1300);
  GLint location = (GLint)getint(harg1302);
  here1300 = hcdr(here1300);
  yeah* harg1303 = hcar(here1300);
  GLfloat* params = (GLfloat*)opaqueval(harg1303);
  here1300 = hcdr(here1300);
  A(isnil(here1300));
  glGetUniformfv(program, location, params);
  return Nil;
}
yeah* foop_glGetActiveUniform(yeah* arg1304) {
  yeah* here1305 = arg1304;
  yeah* harg1306 = hcar(here1305);
  GLuint program = (GLuint)getint(harg1306);
  here1305 = hcdr(here1305);
  yeah* harg1307 = hcar(here1305);
  GLuint index = (GLuint)getint(harg1307);
  here1305 = hcdr(here1305);
  yeah* harg1308 = hcar(here1305);
  GLsizei bufSize = (GLsizei)getint(harg1308);
  here1305 = hcdr(here1305);
  yeah* harg1309 = hcar(here1305);
  GLsizei* length = (GLsizei*)opaqueval(harg1309);
  here1305 = hcdr(here1305);
  yeah* harg1310 = hcar(here1305);
  GLint* size = (GLint*)opaqueval(harg1310);
  here1305 = hcdr(here1305);
  yeah* harg1311 = hcar(here1305);
  GLenum* type = (GLenum*)opaqueval(harg1311);
  here1305 = hcdr(here1305);
  yeah* harg1312 = hcar(here1305);
  GLchar* name = (GLchar*)opaqueval(harg1312);
  here1305 = hcdr(here1305);
  A(isnil(here1305));
  glGetActiveUniform(program, index, bufSize, length, size, type, name);
  return Nil;
}
yeah* foop_glGetUniformLocation(yeah* arg1313) {
  yeah* here1314 = arg1313;
  yeah* harg1315 = hcar(here1314);
  GLuint program = (GLuint)getint(harg1315);
  here1314 = hcdr(here1314);
  yeah* harg1316 = hcar(here1314);
  const GLchar* name = (const GLchar*)opaqueval(harg1316);
  here1314 = hcdr(here1314);
  A(isnil(here1314));
  GLint ret1317 = glGetUniformLocation(program, name);
  return integer((int)ret1317);
}
yeah* foop_glGetProgramInfoLog(yeah* arg1318) {
  yeah* here1319 = arg1318;
  yeah* harg1320 = hcar(here1319);
  GLuint program = (GLuint)getint(harg1320);
  here1319 = hcdr(here1319);
  yeah* harg1321 = hcar(here1319);
  GLsizei bufSize = (GLsizei)getint(harg1321);
  here1319 = hcdr(here1319);
  yeah* harg1322 = hcar(here1319);
  GLsizei* length = (GLsizei*)opaqueval(harg1322);
  here1319 = hcdr(here1319);
  yeah* harg1323 = hcar(here1319);
  GLchar* infoLog = (GLchar*)opaqueval(harg1323);
  here1319 = hcdr(here1319);
  A(isnil(here1319));
  glGetProgramInfoLog(program, bufSize, length, infoLog);
  return Nil;
}
yeah* foop_glGetShaderInfoLog(yeah* arg1324) {
  yeah* here1325 = arg1324;
  yeah* harg1326 = hcar(here1325);
  GLuint shader = (GLuint)getint(harg1326);
  here1325 = hcdr(here1325);
  yeah* harg1327 = hcar(here1325);
  GLsizei bufSize = (GLsizei)getint(harg1327);
  here1325 = hcdr(here1325);
  yeah* harg1328 = hcar(here1325);
  GLsizei* length = (GLsizei*)opaqueval(harg1328);
  here1325 = hcdr(here1325);
  yeah* harg1329 = hcar(here1325);
  GLchar* infoLog = (GLchar*)opaqueval(harg1329);
  here1325 = hcdr(here1325);
  A(isnil(here1325));
  glGetShaderInfoLog(shader, bufSize, length, infoLog);
  return Nil;
}
yeah* foop_glGetAttachedShaders(yeah* arg1330) {
  yeah* here1331 = arg1330;
  yeah* harg1332 = hcar(here1331);
  GLuint program = (GLuint)getint(harg1332);
  here1331 = hcdr(here1331);
  yeah* harg1333 = hcar(here1331);
  GLsizei maxCount = (GLsizei)getint(harg1333);
  here1331 = hcdr(here1331);
  yeah* harg1334 = hcar(here1331);
  GLsizei* count = (GLsizei*)opaqueval(harg1334);
  here1331 = hcdr(here1331);
  yeah* harg1335 = hcar(here1331);
  GLuint* shaders = (GLuint*)opaqueval(harg1335);
  here1331 = hcdr(here1331);
  A(isnil(here1331));
  glGetAttachedShaders(program, maxCount, count, shaders);
  return Nil;
}
yeah* foop_glGetProgramiv(yeah* arg1336) {
  yeah* here1337 = arg1336;
  yeah* harg1338 = hcar(here1337);
  GLuint program = (GLuint)getint(harg1338);
  here1337 = hcdr(here1337);
  yeah* harg1339 = hcar(here1337);
  GLenum pname = (GLenum)getint(harg1339);
  here1337 = hcdr(here1337);
  yeah* harg1340 = hcar(here1337);
  GLint* params = (GLint*)opaqueval(harg1340);
  here1337 = hcdr(here1337);
  A(isnil(here1337));
  glGetProgramiv(program, pname, params);
  return Nil;
}
yeah* foop_glGetShaderiv(yeah* arg1341) {
  yeah* here1342 = arg1341;
  yeah* harg1343 = hcar(here1342);
  GLuint shader = (GLuint)getint(harg1343);
  here1342 = hcdr(here1342);
  yeah* harg1344 = hcar(here1342);
  GLenum pname = (GLenum)getint(harg1344);
  here1342 = hcdr(here1342);
  yeah* harg1345 = hcar(here1342);
  GLint* params = (GLint*)opaqueval(harg1345);
  here1342 = hcdr(here1342);
  A(isnil(here1342));
  glGetShaderiv(shader, pname, params);
  return Nil;
}
yeah* foop_glIsProgram(yeah* arg1346) {
  yeah* here1347 = arg1346;
  yeah* harg1348 = hcar(here1347);
  GLuint program = (GLuint)getint(harg1348);
  here1347 = hcdr(here1347);
  A(isnil(here1347));
  GLboolean ret1349 = glIsProgram(program);
  return integer((int)ret1349);
}
yeah* foop_glIsShader(yeah* arg1350) {
  yeah* here1351 = arg1350;
  yeah* harg1352 = hcar(here1351);
  GLuint shader = (GLuint)getint(harg1352);
  here1351 = hcdr(here1351);
  A(isnil(here1351));
  GLboolean ret1353 = glIsShader(shader);
  return integer((int)ret1353);
}
yeah* foop_glUniformMatrix4fv(yeah* arg1354) {
  yeah* here1355 = arg1354;
  yeah* harg1356 = hcar(here1355);
  GLint location = (GLint)getint(harg1356);
  here1355 = hcdr(here1355);
  yeah* harg1357 = hcar(here1355);
  GLsizei count = (GLsizei)getint(harg1357);
  here1355 = hcdr(here1355);
  yeah* harg1358 = hcar(here1355);
  int transpose = (int)getint(harg1358);
  here1355 = hcdr(here1355);
  yeah* harg1359 = hcar(here1355);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1359);
  here1355 = hcdr(here1355);
  A(isnil(here1355));
  glUniformMatrix4fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix3fv(yeah* arg1360) {
  yeah* here1361 = arg1360;
  yeah* harg1362 = hcar(here1361);
  GLint location = (GLint)getint(harg1362);
  here1361 = hcdr(here1361);
  yeah* harg1363 = hcar(here1361);
  GLsizei count = (GLsizei)getint(harg1363);
  here1361 = hcdr(here1361);
  yeah* harg1364 = hcar(here1361);
  int transpose = (int)getint(harg1364);
  here1361 = hcdr(here1361);
  yeah* harg1365 = hcar(here1361);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1365);
  here1361 = hcdr(here1361);
  A(isnil(here1361));
  glUniformMatrix3fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix2fv(yeah* arg1366) {
  yeah* here1367 = arg1366;
  yeah* harg1368 = hcar(here1367);
  GLint location = (GLint)getint(harg1368);
  here1367 = hcdr(here1367);
  yeah* harg1369 = hcar(here1367);
  GLsizei count = (GLsizei)getint(harg1369);
  here1367 = hcdr(here1367);
  yeah* harg1370 = hcar(here1367);
  int transpose = (int)getint(harg1370);
  here1367 = hcdr(here1367);
  yeah* harg1371 = hcar(here1367);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1371);
  here1367 = hcdr(here1367);
  A(isnil(here1367));
  glUniformMatrix2fv(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniform4iv(yeah* arg1372) {
  yeah* here1373 = arg1372;
  yeah* harg1374 = hcar(here1373);
  GLint location = (GLint)getint(harg1374);
  here1373 = hcdr(here1373);
  yeah* harg1375 = hcar(here1373);
  GLsizei count = (GLsizei)getint(harg1375);
  here1373 = hcdr(here1373);
  yeah* harg1376 = hcar(here1373);
  const GLint* value = (const GLint*)opaqueval(harg1376);
  here1373 = hcdr(here1373);
  A(isnil(here1373));
  glUniform4iv(location, count, value);
  return Nil;
}
yeah* foop_glUniform3iv(yeah* arg1377) {
  yeah* here1378 = arg1377;
  yeah* harg1379 = hcar(here1378);
  GLint location = (GLint)getint(harg1379);
  here1378 = hcdr(here1378);
  yeah* harg1380 = hcar(here1378);
  GLsizei count = (GLsizei)getint(harg1380);
  here1378 = hcdr(here1378);
  yeah* harg1381 = hcar(here1378);
  const GLint* value = (const GLint*)opaqueval(harg1381);
  here1378 = hcdr(here1378);
  A(isnil(here1378));
  glUniform3iv(location, count, value);
  return Nil;
}
yeah* foop_glUniform2iv(yeah* arg1382) {
  yeah* here1383 = arg1382;
  yeah* harg1384 = hcar(here1383);
  GLint location = (GLint)getint(harg1384);
  here1383 = hcdr(here1383);
  yeah* harg1385 = hcar(here1383);
  GLsizei count = (GLsizei)getint(harg1385);
  here1383 = hcdr(here1383);
  yeah* harg1386 = hcar(here1383);
  const GLint* value = (const GLint*)opaqueval(harg1386);
  here1383 = hcdr(here1383);
  A(isnil(here1383));
  glUniform2iv(location, count, value);
  return Nil;
}
yeah* foop_glUniform1iv(yeah* arg1387) {
  yeah* here1388 = arg1387;
  yeah* harg1389 = hcar(here1388);
  GLint location = (GLint)getint(harg1389);
  here1388 = hcdr(here1388);
  yeah* harg1390 = hcar(here1388);
  GLsizei count = (GLsizei)getint(harg1390);
  here1388 = hcdr(here1388);
  yeah* harg1391 = hcar(here1388);
  const GLint* value = (const GLint*)opaqueval(harg1391);
  here1388 = hcdr(here1388);
  A(isnil(here1388));
  glUniform1iv(location, count, value);
  return Nil;
}
yeah* foop_glUniform4fv(yeah* arg1392) {
  yeah* here1393 = arg1392;
  yeah* harg1394 = hcar(here1393);
  GLint location = (GLint)getint(harg1394);
  here1393 = hcdr(here1393);
  yeah* harg1395 = hcar(here1393);
  GLsizei count = (GLsizei)getint(harg1395);
  here1393 = hcdr(here1393);
  yeah* harg1396 = hcar(here1393);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1396);
  here1393 = hcdr(here1393);
  A(isnil(here1393));
  glUniform4fv(location, count, value);
  return Nil;
}
yeah* foop_glUniform3fv(yeah* arg1397) {
  yeah* here1398 = arg1397;
  yeah* harg1399 = hcar(here1398);
  GLint location = (GLint)getint(harg1399);
  here1398 = hcdr(here1398);
  yeah* harg1400 = hcar(here1398);
  GLsizei count = (GLsizei)getint(harg1400);
  here1398 = hcdr(here1398);
  yeah* harg1401 = hcar(here1398);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1401);
  here1398 = hcdr(here1398);
  A(isnil(here1398));
  glUniform3fv(location, count, value);
  return Nil;
}
yeah* foop_glUniform2fv(yeah* arg1402) {
  yeah* here1403 = arg1402;
  yeah* harg1404 = hcar(here1403);
  GLint location = (GLint)getint(harg1404);
  here1403 = hcdr(here1403);
  yeah* harg1405 = hcar(here1403);
  GLsizei count = (GLsizei)getint(harg1405);
  here1403 = hcdr(here1403);
  yeah* harg1406 = hcar(here1403);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1406);
  here1403 = hcdr(here1403);
  A(isnil(here1403));
  glUniform2fv(location, count, value);
  return Nil;
}
yeah* foop_glUniform1fv(yeah* arg1407) {
  yeah* here1408 = arg1407;
  yeah* harg1409 = hcar(here1408);
  GLint location = (GLint)getint(harg1409);
  here1408 = hcdr(here1408);
  yeah* harg1410 = hcar(here1408);
  GLsizei count = (GLsizei)getint(harg1410);
  here1408 = hcdr(here1408);
  yeah* harg1411 = hcar(here1408);
  const GLfloat* value = (const GLfloat*)opaqueval(harg1411);
  here1408 = hcdr(here1408);
  A(isnil(here1408));
  glUniform1fv(location, count, value);
  return Nil;
}
yeah* foop_glUniform4i(yeah* arg1412) {
  yeah* here1413 = arg1412;
  yeah* harg1414 = hcar(here1413);
  GLint location = (GLint)getint(harg1414);
  here1413 = hcdr(here1413);
  yeah* harg1415 = hcar(here1413);
  GLint v0 = (GLint)getint(harg1415);
  here1413 = hcdr(here1413);
  yeah* harg1416 = hcar(here1413);
  GLint v1 = (GLint)getint(harg1416);
  here1413 = hcdr(here1413);
  yeah* harg1417 = hcar(here1413);
  GLint v2 = (GLint)getint(harg1417);
  here1413 = hcdr(here1413);
  yeah* harg1418 = hcar(here1413);
  GLint v3 = (GLint)getint(harg1418);
  here1413 = hcdr(here1413);
  A(isnil(here1413));
  glUniform4i(location, v0, v1, v2, v3);
  return Nil;
}
yeah* foop_glUniform3i(yeah* arg1419) {
  yeah* here1420 = arg1419;
  yeah* harg1421 = hcar(here1420);
  GLint location = (GLint)getint(harg1421);
  here1420 = hcdr(here1420);
  yeah* harg1422 = hcar(here1420);
  GLint v0 = (GLint)getint(harg1422);
  here1420 = hcdr(here1420);
  yeah* harg1423 = hcar(here1420);
  GLint v1 = (GLint)getint(harg1423);
  here1420 = hcdr(here1420);
  yeah* harg1424 = hcar(here1420);
  GLint v2 = (GLint)getint(harg1424);
  here1420 = hcdr(here1420);
  A(isnil(here1420));
  glUniform3i(location, v0, v1, v2);
  return Nil;
}
yeah* foop_glUniform2i(yeah* arg1425) {
  yeah* here1426 = arg1425;
  yeah* harg1427 = hcar(here1426);
  GLint location = (GLint)getint(harg1427);
  here1426 = hcdr(here1426);
  yeah* harg1428 = hcar(here1426);
  GLint v0 = (GLint)getint(harg1428);
  here1426 = hcdr(here1426);
  yeah* harg1429 = hcar(here1426);
  GLint v1 = (GLint)getint(harg1429);
  here1426 = hcdr(here1426);
  A(isnil(here1426));
  glUniform2i(location, v0, v1);
  return Nil;
}
yeah* foop_glUniform1i(yeah* arg1430) {
  yeah* here1431 = arg1430;
  yeah* harg1432 = hcar(here1431);
  GLint location = (GLint)getint(harg1432);
  here1431 = hcdr(here1431);
  yeah* harg1433 = hcar(here1431);
  GLint v0 = (GLint)getint(harg1433);
  here1431 = hcdr(here1431);
  A(isnil(here1431));
  glUniform1i(location, v0);
  return Nil;
}
yeah* foop_glUniform4f(yeah* arg1434) {
  yeah* here1435 = arg1434;
  yeah* harg1436 = hcar(here1435);
  GLint location = (GLint)getint(harg1436);
  here1435 = hcdr(here1435);
  yeah* harg1437 = hcar(here1435);
  GLfloat v0 = (GLfloat)getfloatcvt(harg1437);
  here1435 = hcdr(here1435);
  yeah* harg1438 = hcar(here1435);
  GLfloat v1 = (GLfloat)getfloatcvt(harg1438);
  here1435 = hcdr(here1435);
  yeah* harg1439 = hcar(here1435);
  GLfloat v2 = (GLfloat)getfloatcvt(harg1439);
  here1435 = hcdr(here1435);
  yeah* harg1440 = hcar(here1435);
  GLfloat v3 = (GLfloat)getfloatcvt(harg1440);
  here1435 = hcdr(here1435);
  A(isnil(here1435));
  glUniform4f(location, v0, v1, v2, v3);
  return Nil;
}
yeah* foop_glUniform3f(yeah* arg1441) {
  yeah* here1442 = arg1441;
  yeah* harg1443 = hcar(here1442);
  GLint location = (GLint)getint(harg1443);
  here1442 = hcdr(here1442);
  yeah* harg1444 = hcar(here1442);
  GLfloat v0 = (GLfloat)getfloatcvt(harg1444);
  here1442 = hcdr(here1442);
  yeah* harg1445 = hcar(here1442);
  GLfloat v1 = (GLfloat)getfloatcvt(harg1445);
  here1442 = hcdr(here1442);
  yeah* harg1446 = hcar(here1442);
  GLfloat v2 = (GLfloat)getfloatcvt(harg1446);
  here1442 = hcdr(here1442);
  A(isnil(here1442));
  glUniform3f(location, v0, v1, v2);
  return Nil;
}
yeah* foop_glUniform2f(yeah* arg1447) {
  yeah* here1448 = arg1447;
  yeah* harg1449 = hcar(here1448);
  GLint location = (GLint)getint(harg1449);
  here1448 = hcdr(here1448);
  yeah* harg1450 = hcar(here1448);
  GLfloat v0 = (GLfloat)getfloatcvt(harg1450);
  here1448 = hcdr(here1448);
  yeah* harg1451 = hcar(here1448);
  GLfloat v1 = (GLfloat)getfloatcvt(harg1451);
  here1448 = hcdr(here1448);
  A(isnil(here1448));
  glUniform2f(location, v0, v1);
  return Nil;
}
yeah* foop_glUniform1f(yeah* arg1452) {
  yeah* here1453 = arg1452;
  yeah* harg1454 = hcar(here1453);
  GLint location = (GLint)getint(harg1454);
  here1453 = hcdr(here1453);
  yeah* harg1455 = hcar(here1453);
  GLfloat v0 = (GLfloat)getfloatcvt(harg1455);
  here1453 = hcdr(here1453);
  A(isnil(here1453));
  glUniform1f(location, v0);
  return Nil;
}
yeah* foop_glValidateProgram(yeah* arg1456) {
  yeah* here1457 = arg1456;
  yeah* harg1458 = hcar(here1457);
  GLuint program = (GLuint)getint(harg1458);
  here1457 = hcdr(here1457);
  A(isnil(here1457));
  glValidateProgram(program);
  return Nil;
}
yeah* foop_glDeleteProgram(yeah* arg1459) {
  yeah* here1460 = arg1459;
  yeah* harg1461 = hcar(here1460);
  GLuint program = (GLuint)getint(harg1461);
  here1460 = hcdr(here1460);
  A(isnil(here1460));
  glDeleteProgram(program);
  return Nil;
}
yeah* foop_glUseProgram(yeah* arg1462) {
  yeah* here1463 = arg1462;
  yeah* harg1464 = hcar(here1463);
  GLuint program = (GLuint)getint(harg1464);
  here1463 = hcdr(here1463);
  A(isnil(here1463));
  glUseProgram(program);
  return Nil;
}
yeah* foop_glLinkProgram(yeah* arg1465) {
  yeah* here1466 = arg1465;
  yeah* harg1467 = hcar(here1466);
  GLuint program = (GLuint)getint(harg1467);
  here1466 = hcdr(here1466);
  A(isnil(here1466));
  glLinkProgram(program);
  return Nil;
}
yeah* foop_glAttachShader(yeah* arg1468) {
  yeah* here1469 = arg1468;
  yeah* harg1470 = hcar(here1469);
  GLuint program = (GLuint)getint(harg1470);
  here1469 = hcdr(here1469);
  yeah* harg1471 = hcar(here1469);
  GLuint shader = (GLuint)getint(harg1471);
  here1469 = hcdr(here1469);
  A(isnil(here1469));
  glAttachShader(program, shader);
  return Nil;
}
yeah* foop_glCreateProgram(yeah* arg1472) {
  yeah* here1473 = arg1472;
  A(isnil(here1473));
  GLuint ret1474 = glCreateProgram();
  return integer((int)ret1474);
}
yeah* foop_glCompileShader(yeah* arg1475) {
  yeah* here1476 = arg1475;
  yeah* harg1477 = hcar(here1476);
  GLuint shader = (GLuint)getint(harg1477);
  here1476 = hcdr(here1476);
  A(isnil(here1476));
  glCompileShader(shader);
  return Nil;
}
yeah* foop_glShaderSource(yeah* arg1478) {
  yeah* here1479 = arg1478;
  yeah* harg1480 = hcar(here1479);
  GLuint shader = (GLuint)getint(harg1480);
  here1479 = hcdr(here1479);
  yeah* harg1481 = hcar(here1479);
  GLsizei count = (GLsizei)getint(harg1481);
  here1479 = hcdr(here1479);
  yeah* harg1482 = hcar(here1479);
  const GLchar** string = (const GLchar**)opaqueval(harg1482);
  here1479 = hcdr(here1479);
  yeah* harg1483 = hcar(here1479);
  const GLint* length = (const GLint*)opaqueval(harg1483);
  here1479 = hcdr(here1479);
  A(isnil(here1479));
  glShaderSource(shader, count, string, length);
  return Nil;
}
yeah* foop_glCreateShader(yeah* arg1484) {
  yeah* here1485 = arg1484;
  yeah* harg1486 = hcar(here1485);
  GLenum type = (GLenum)getint(harg1486);
  here1485 = hcdr(here1485);
  A(isnil(here1485));
  GLuint ret1487 = glCreateShader(type);
  return integer((int)ret1487);
}
yeah* foop_glDetachShader(yeah* arg1488) {
  yeah* here1489 = arg1488;
  yeah* harg1490 = hcar(here1489);
  GLuint program = (GLuint)getint(harg1490);
  here1489 = hcdr(here1489);
  yeah* harg1491 = hcar(here1489);
  GLuint shader = (GLuint)getint(harg1491);
  here1489 = hcdr(here1489);
  A(isnil(here1489));
  glDetachShader(program, shader);
  return Nil;
}
yeah* foop_glDeleteShader(yeah* arg1492) {
  yeah* here1493 = arg1492;
  yeah* harg1494 = hcar(here1493);
  GLuint shader = (GLuint)getint(harg1494);
  here1493 = hcdr(here1493);
  A(isnil(here1493));
  glDeleteShader(shader);
  return Nil;
}
yeah* foop_glGetVertexAttribPointerv(yeah* arg1495) {
  yeah* here1496 = arg1495;
  yeah* harg1497 = hcar(here1496);
  GLuint index = (GLuint)getint(harg1497);
  here1496 = hcdr(here1496);
  yeah* harg1498 = hcar(here1496);
  GLenum pname = (GLenum)getint(harg1498);
  here1496 = hcdr(here1496);
  yeah* harg1499 = hcar(here1496);
  GLvoid** pointer = (GLvoid**)opaqueval(harg1499);
  here1496 = hcdr(here1496);
  A(isnil(here1496));
  glGetVertexAttribPointerv(index, pname, pointer);
  return Nil;
}
yeah* foop_glGetVertexAttribiv(yeah* arg1500) {
  yeah* here1501 = arg1500;
  yeah* harg1502 = hcar(here1501);
  GLuint index = (GLuint)getint(harg1502);
  here1501 = hcdr(here1501);
  yeah* harg1503 = hcar(here1501);
  GLenum pname = (GLenum)getint(harg1503);
  here1501 = hcdr(here1501);
  yeah* harg1504 = hcar(here1501);
  GLint* params = (GLint*)opaqueval(harg1504);
  here1501 = hcdr(here1501);
  A(isnil(here1501));
  glGetVertexAttribiv(index, pname, params);
  return Nil;
}
yeah* foop_glGetVertexAttribfv(yeah* arg1505) {
  yeah* here1506 = arg1505;
  yeah* harg1507 = hcar(here1506);
  GLuint index = (GLuint)getint(harg1507);
  here1506 = hcdr(here1506);
  yeah* harg1508 = hcar(here1506);
  GLenum pname = (GLenum)getint(harg1508);
  here1506 = hcdr(here1506);
  yeah* harg1509 = hcar(here1506);
  GLfloat* params = (GLfloat*)opaqueval(harg1509);
  here1506 = hcdr(here1506);
  A(isnil(here1506));
  glGetVertexAttribfv(index, pname, params);
  return Nil;
}
yeah* foop_glGetVertexAttribdv(yeah* arg1510) {
  yeah* here1511 = arg1510;
  yeah* harg1512 = hcar(here1511);
  GLuint index = (GLuint)getint(harg1512);
  here1511 = hcdr(here1511);
  yeah* harg1513 = hcar(here1511);
  GLenum pname = (GLenum)getint(harg1513);
  here1511 = hcdr(here1511);
  yeah* harg1514 = hcar(here1511);
  GLdouble* params = (GLdouble*)opaqueval(harg1514);
  here1511 = hcdr(here1511);
  A(isnil(here1511));
  glGetVertexAttribdv(index, pname, params);
  return Nil;
}
yeah* foop_glDisableVertexAttribArray(yeah* arg1515) {
  yeah* here1516 = arg1515;
  yeah* harg1517 = hcar(here1516);
  GLuint index = (GLuint)getint(harg1517);
  here1516 = hcdr(here1516);
  A(isnil(here1516));
  glDisableVertexAttribArray(index);
  return Nil;
}
yeah* foop_glEnableVertexAttribArray(yeah* arg1518) {
  yeah* here1519 = arg1518;
  yeah* harg1520 = hcar(here1519);
  GLuint index = (GLuint)getint(harg1520);
  here1519 = hcdr(here1519);
  A(isnil(here1519));
  glEnableVertexAttribArray(index);
  return Nil;
}
yeah* foop_glVertexAttribPointer(yeah* arg1521) {
  yeah* here1522 = arg1521;
  yeah* harg1523 = hcar(here1522);
  GLuint index = (GLuint)getint(harg1523);
  here1522 = hcdr(here1522);
  yeah* harg1524 = hcar(here1522);
  GLint size = (GLint)getint(harg1524);
  here1522 = hcdr(here1522);
  yeah* harg1525 = hcar(here1522);
  GLenum type = (GLenum)getint(harg1525);
  here1522 = hcdr(here1522);
  yeah* harg1526 = hcar(here1522);
  int normalized = (int)getint(harg1526);
  here1522 = hcdr(here1522);
  yeah* harg1527 = hcar(here1522);
  GLsizei stride = (GLsizei)getint(harg1527);
  here1522 = hcdr(here1522);
  yeah* harg1528 = hcar(here1522);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg1528);
  here1522 = hcdr(here1522);
  A(isnil(here1522));
  glVertexAttribPointer(index, size, type, normalized, stride, pointer);
  return Nil;
}
yeah* foop_glVertexAttrib4usv(yeah* arg1529) {
  yeah* here1530 = arg1529;
  yeah* harg1531 = hcar(here1530);
  GLuint index = (GLuint)getint(harg1531);
  here1530 = hcdr(here1530);
  yeah* harg1532 = hcar(here1530);
  const GLushort* v = (const GLushort*)opaqueval(harg1532);
  here1530 = hcdr(here1530);
  A(isnil(here1530));
  glVertexAttrib4usv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4uiv(yeah* arg1533) {
  yeah* here1534 = arg1533;
  yeah* harg1535 = hcar(here1534);
  GLuint index = (GLuint)getint(harg1535);
  here1534 = hcdr(here1534);
  yeah* harg1536 = hcar(here1534);
  const GLuint* v = (const GLuint*)opaqueval(harg1536);
  here1534 = hcdr(here1534);
  A(isnil(here1534));
  glVertexAttrib4uiv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4ubv(yeah* arg1537) {
  yeah* here1538 = arg1537;
  yeah* harg1539 = hcar(here1538);
  GLuint index = (GLuint)getint(harg1539);
  here1538 = hcdr(here1538);
  yeah* harg1540 = hcar(here1538);
  const GLubyte* v = (const GLubyte*)opaqueval(harg1540);
  here1538 = hcdr(here1538);
  A(isnil(here1538));
  glVertexAttrib4ubv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4sv(yeah* arg1541) {
  yeah* here1542 = arg1541;
  yeah* harg1543 = hcar(here1542);
  GLuint index = (GLuint)getint(harg1543);
  here1542 = hcdr(here1542);
  yeah* harg1544 = hcar(here1542);
  const GLshort* v = (const GLshort*)opaqueval(harg1544);
  here1542 = hcdr(here1542);
  A(isnil(here1542));
  glVertexAttrib4sv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4s(yeah* arg1545) {
  yeah* here1546 = arg1545;
  yeah* harg1547 = hcar(here1546);
  GLuint index = (GLuint)getint(harg1547);
  here1546 = hcdr(here1546);
  yeah* harg1548 = hcar(here1546);
  int x = (int)getint(harg1548);
  here1546 = hcdr(here1546);
  yeah* harg1549 = hcar(here1546);
  int y = (int)getint(harg1549);
  here1546 = hcdr(here1546);
  yeah* harg1550 = hcar(here1546);
  int z = (int)getint(harg1550);
  here1546 = hcdr(here1546);
  yeah* harg1551 = hcar(here1546);
  int w = (int)getint(harg1551);
  here1546 = hcdr(here1546);
  A(isnil(here1546));
  glVertexAttrib4s(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4iv(yeah* arg1552) {
  yeah* here1553 = arg1552;
  yeah* harg1554 = hcar(here1553);
  GLuint index = (GLuint)getint(harg1554);
  here1553 = hcdr(here1553);
  yeah* harg1555 = hcar(here1553);
  const GLint* v = (const GLint*)opaqueval(harg1555);
  here1553 = hcdr(here1553);
  A(isnil(here1553));
  glVertexAttrib4iv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4fv(yeah* arg1556) {
  yeah* here1557 = arg1556;
  yeah* harg1558 = hcar(here1557);
  GLuint index = (GLuint)getint(harg1558);
  here1557 = hcdr(here1557);
  yeah* harg1559 = hcar(here1557);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1559);
  here1557 = hcdr(here1557);
  A(isnil(here1557));
  glVertexAttrib4fv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4f(yeah* arg1560) {
  yeah* here1561 = arg1560;
  yeah* harg1562 = hcar(here1561);
  GLuint index = (GLuint)getint(harg1562);
  here1561 = hcdr(here1561);
  yeah* harg1563 = hcar(here1561);
  GLfloat x = (GLfloat)getfloatcvt(harg1563);
  here1561 = hcdr(here1561);
  yeah* harg1564 = hcar(here1561);
  GLfloat y = (GLfloat)getfloatcvt(harg1564);
  here1561 = hcdr(here1561);
  yeah* harg1565 = hcar(here1561);
  GLfloat z = (GLfloat)getfloatcvt(harg1565);
  here1561 = hcdr(here1561);
  yeah* harg1566 = hcar(here1561);
  GLfloat w = (GLfloat)getfloatcvt(harg1566);
  here1561 = hcdr(here1561);
  A(isnil(here1561));
  glVertexAttrib4f(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4dv(yeah* arg1567) {
  yeah* here1568 = arg1567;
  yeah* harg1569 = hcar(here1568);
  GLuint index = (GLuint)getint(harg1569);
  here1568 = hcdr(here1568);
  yeah* harg1570 = hcar(here1568);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1570);
  here1568 = hcdr(here1568);
  A(isnil(here1568));
  glVertexAttrib4dv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4d(yeah* arg1571) {
  yeah* here1572 = arg1571;
  yeah* harg1573 = hcar(here1572);
  GLuint index = (GLuint)getint(harg1573);
  here1572 = hcdr(here1572);
  yeah* harg1574 = hcar(here1572);
  GLdouble x = (GLdouble)getfloatcvt(harg1574);
  here1572 = hcdr(here1572);
  yeah* harg1575 = hcar(here1572);
  GLdouble y = (GLdouble)getfloatcvt(harg1575);
  here1572 = hcdr(here1572);
  yeah* harg1576 = hcar(here1572);
  GLdouble z = (GLdouble)getfloatcvt(harg1576);
  here1572 = hcdr(here1572);
  yeah* harg1577 = hcar(here1572);
  GLdouble w = (GLdouble)getfloatcvt(harg1577);
  here1572 = hcdr(here1572);
  A(isnil(here1572));
  glVertexAttrib4d(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4bv(yeah* arg1578) {
  yeah* here1579 = arg1578;
  yeah* harg1580 = hcar(here1579);
  GLuint index = (GLuint)getint(harg1580);
  here1579 = hcdr(here1579);
  yeah* harg1581 = hcar(here1579);
  const GLbyte* v = (const GLbyte*)opaqueval(harg1581);
  here1579 = hcdr(here1579);
  A(isnil(here1579));
  glVertexAttrib4bv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Nusv(yeah* arg1582) {
  yeah* here1583 = arg1582;
  yeah* harg1584 = hcar(here1583);
  GLuint index = (GLuint)getint(harg1584);
  here1583 = hcdr(here1583);
  yeah* harg1585 = hcar(here1583);
  const GLushort* v = (const GLushort*)opaqueval(harg1585);
  here1583 = hcdr(here1583);
  A(isnil(here1583));
  glVertexAttrib4Nusv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Nuiv(yeah* arg1586) {
  yeah* here1587 = arg1586;
  yeah* harg1588 = hcar(here1587);
  GLuint index = (GLuint)getint(harg1588);
  here1587 = hcdr(here1587);
  yeah* harg1589 = hcar(here1587);
  const GLuint* v = (const GLuint*)opaqueval(harg1589);
  here1587 = hcdr(here1587);
  A(isnil(here1587));
  glVertexAttrib4Nuiv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Nubv(yeah* arg1590) {
  yeah* here1591 = arg1590;
  yeah* harg1592 = hcar(here1591);
  GLuint index = (GLuint)getint(harg1592);
  here1591 = hcdr(here1591);
  yeah* harg1593 = hcar(here1591);
  const GLubyte* v = (const GLubyte*)opaqueval(harg1593);
  here1591 = hcdr(here1591);
  A(isnil(here1591));
  glVertexAttrib4Nubv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Nub(yeah* arg1594) {
  yeah* here1595 = arg1594;
  yeah* harg1596 = hcar(here1595);
  GLuint index = (GLuint)getint(harg1596);
  here1595 = hcdr(here1595);
  yeah* harg1597 = hcar(here1595);
  int x = (int)getint(harg1597);
  here1595 = hcdr(here1595);
  yeah* harg1598 = hcar(here1595);
  int y = (int)getint(harg1598);
  here1595 = hcdr(here1595);
  yeah* harg1599 = hcar(here1595);
  int z = (int)getint(harg1599);
  here1595 = hcdr(here1595);
  yeah* harg1600 = hcar(here1595);
  int w = (int)getint(harg1600);
  here1595 = hcdr(here1595);
  A(isnil(here1595));
  glVertexAttrib4Nub(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4Nsv(yeah* arg1601) {
  yeah* here1602 = arg1601;
  yeah* harg1603 = hcar(here1602);
  GLuint index = (GLuint)getint(harg1603);
  here1602 = hcdr(here1602);
  yeah* harg1604 = hcar(here1602);
  const GLshort* v = (const GLshort*)opaqueval(harg1604);
  here1602 = hcdr(here1602);
  A(isnil(here1602));
  glVertexAttrib4Nsv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Niv(yeah* arg1605) {
  yeah* here1606 = arg1605;
  yeah* harg1607 = hcar(here1606);
  GLuint index = (GLuint)getint(harg1607);
  here1606 = hcdr(here1606);
  yeah* harg1608 = hcar(here1606);
  const GLint* v = (const GLint*)opaqueval(harg1608);
  here1606 = hcdr(here1606);
  A(isnil(here1606));
  glVertexAttrib4Niv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4Nbv(yeah* arg1609) {
  yeah* here1610 = arg1609;
  yeah* harg1611 = hcar(here1610);
  GLuint index = (GLuint)getint(harg1611);
  here1610 = hcdr(here1610);
  yeah* harg1612 = hcar(here1610);
  const GLbyte* v = (const GLbyte*)opaqueval(harg1612);
  here1610 = hcdr(here1610);
  A(isnil(here1610));
  glVertexAttrib4Nbv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3sv(yeah* arg1613) {
  yeah* here1614 = arg1613;
  yeah* harg1615 = hcar(here1614);
  GLuint index = (GLuint)getint(harg1615);
  here1614 = hcdr(here1614);
  yeah* harg1616 = hcar(here1614);
  const GLshort* v = (const GLshort*)opaqueval(harg1616);
  here1614 = hcdr(here1614);
  A(isnil(here1614));
  glVertexAttrib3sv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3s(yeah* arg1617) {
  yeah* here1618 = arg1617;
  yeah* harg1619 = hcar(here1618);
  GLuint index = (GLuint)getint(harg1619);
  here1618 = hcdr(here1618);
  yeah* harg1620 = hcar(here1618);
  int x = (int)getint(harg1620);
  here1618 = hcdr(here1618);
  yeah* harg1621 = hcar(here1618);
  int y = (int)getint(harg1621);
  here1618 = hcdr(here1618);
  yeah* harg1622 = hcar(here1618);
  int z = (int)getint(harg1622);
  here1618 = hcdr(here1618);
  A(isnil(here1618));
  glVertexAttrib3s(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib3fv(yeah* arg1623) {
  yeah* here1624 = arg1623;
  yeah* harg1625 = hcar(here1624);
  GLuint index = (GLuint)getint(harg1625);
  here1624 = hcdr(here1624);
  yeah* harg1626 = hcar(here1624);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1626);
  here1624 = hcdr(here1624);
  A(isnil(here1624));
  glVertexAttrib3fv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3f(yeah* arg1627) {
  yeah* here1628 = arg1627;
  yeah* harg1629 = hcar(here1628);
  GLuint index = (GLuint)getint(harg1629);
  here1628 = hcdr(here1628);
  yeah* harg1630 = hcar(here1628);
  GLfloat x = (GLfloat)getfloatcvt(harg1630);
  here1628 = hcdr(here1628);
  yeah* harg1631 = hcar(here1628);
  GLfloat y = (GLfloat)getfloatcvt(harg1631);
  here1628 = hcdr(here1628);
  yeah* harg1632 = hcar(here1628);
  GLfloat z = (GLfloat)getfloatcvt(harg1632);
  here1628 = hcdr(here1628);
  A(isnil(here1628));
  glVertexAttrib3f(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib3dv(yeah* arg1633) {
  yeah* here1634 = arg1633;
  yeah* harg1635 = hcar(here1634);
  GLuint index = (GLuint)getint(harg1635);
  here1634 = hcdr(here1634);
  yeah* harg1636 = hcar(here1634);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1636);
  here1634 = hcdr(here1634);
  A(isnil(here1634));
  glVertexAttrib3dv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3d(yeah* arg1637) {
  yeah* here1638 = arg1637;
  yeah* harg1639 = hcar(here1638);
  GLuint index = (GLuint)getint(harg1639);
  here1638 = hcdr(here1638);
  yeah* harg1640 = hcar(here1638);
  GLdouble x = (GLdouble)getfloatcvt(harg1640);
  here1638 = hcdr(here1638);
  yeah* harg1641 = hcar(here1638);
  GLdouble y = (GLdouble)getfloatcvt(harg1641);
  here1638 = hcdr(here1638);
  yeah* harg1642 = hcar(here1638);
  GLdouble z = (GLdouble)getfloatcvt(harg1642);
  here1638 = hcdr(here1638);
  A(isnil(here1638));
  glVertexAttrib3d(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib2sv(yeah* arg1643) {
  yeah* here1644 = arg1643;
  yeah* harg1645 = hcar(here1644);
  GLuint index = (GLuint)getint(harg1645);
  here1644 = hcdr(here1644);
  yeah* harg1646 = hcar(here1644);
  const GLshort* v = (const GLshort*)opaqueval(harg1646);
  here1644 = hcdr(here1644);
  A(isnil(here1644));
  glVertexAttrib2sv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2s(yeah* arg1647) {
  yeah* here1648 = arg1647;
  yeah* harg1649 = hcar(here1648);
  GLuint index = (GLuint)getint(harg1649);
  here1648 = hcdr(here1648);
  yeah* harg1650 = hcar(here1648);
  int x = (int)getint(harg1650);
  here1648 = hcdr(here1648);
  yeah* harg1651 = hcar(here1648);
  int y = (int)getint(harg1651);
  here1648 = hcdr(here1648);
  A(isnil(here1648));
  glVertexAttrib2s(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib2fv(yeah* arg1652) {
  yeah* here1653 = arg1652;
  yeah* harg1654 = hcar(here1653);
  GLuint index = (GLuint)getint(harg1654);
  here1653 = hcdr(here1653);
  yeah* harg1655 = hcar(here1653);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1655);
  here1653 = hcdr(here1653);
  A(isnil(here1653));
  glVertexAttrib2fv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2f(yeah* arg1656) {
  yeah* here1657 = arg1656;
  yeah* harg1658 = hcar(here1657);
  GLuint index = (GLuint)getint(harg1658);
  here1657 = hcdr(here1657);
  yeah* harg1659 = hcar(here1657);
  GLfloat x = (GLfloat)getfloatcvt(harg1659);
  here1657 = hcdr(here1657);
  yeah* harg1660 = hcar(here1657);
  GLfloat y = (GLfloat)getfloatcvt(harg1660);
  here1657 = hcdr(here1657);
  A(isnil(here1657));
  glVertexAttrib2f(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib2dv(yeah* arg1661) {
  yeah* here1662 = arg1661;
  yeah* harg1663 = hcar(here1662);
  GLuint index = (GLuint)getint(harg1663);
  here1662 = hcdr(here1662);
  yeah* harg1664 = hcar(here1662);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1664);
  here1662 = hcdr(here1662);
  A(isnil(here1662));
  glVertexAttrib2dv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2d(yeah* arg1665) {
  yeah* here1666 = arg1665;
  yeah* harg1667 = hcar(here1666);
  GLuint index = (GLuint)getint(harg1667);
  here1666 = hcdr(here1666);
  yeah* harg1668 = hcar(here1666);
  GLdouble x = (GLdouble)getfloatcvt(harg1668);
  here1666 = hcdr(here1666);
  yeah* harg1669 = hcar(here1666);
  GLdouble y = (GLdouble)getfloatcvt(harg1669);
  here1666 = hcdr(here1666);
  A(isnil(here1666));
  glVertexAttrib2d(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib1sv(yeah* arg1670) {
  yeah* here1671 = arg1670;
  yeah* harg1672 = hcar(here1671);
  GLuint index = (GLuint)getint(harg1672);
  here1671 = hcdr(here1671);
  yeah* harg1673 = hcar(here1671);
  const GLshort* v = (const GLshort*)opaqueval(harg1673);
  here1671 = hcdr(here1671);
  A(isnil(here1671));
  glVertexAttrib1sv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1s(yeah* arg1674) {
  yeah* here1675 = arg1674;
  yeah* harg1676 = hcar(here1675);
  GLuint index = (GLuint)getint(harg1676);
  here1675 = hcdr(here1675);
  yeah* harg1677 = hcar(here1675);
  int x = (int)getint(harg1677);
  here1675 = hcdr(here1675);
  A(isnil(here1675));
  glVertexAttrib1s(index, x);
  return Nil;
}
yeah* foop_glVertexAttrib1fv(yeah* arg1678) {
  yeah* here1679 = arg1678;
  yeah* harg1680 = hcar(here1679);
  GLuint index = (GLuint)getint(harg1680);
  here1679 = hcdr(here1679);
  yeah* harg1681 = hcar(here1679);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1681);
  here1679 = hcdr(here1679);
  A(isnil(here1679));
  glVertexAttrib1fv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1f(yeah* arg1682) {
  yeah* here1683 = arg1682;
  yeah* harg1684 = hcar(here1683);
  GLuint index = (GLuint)getint(harg1684);
  here1683 = hcdr(here1683);
  yeah* harg1685 = hcar(here1683);
  GLfloat x = (GLfloat)getfloatcvt(harg1685);
  here1683 = hcdr(here1683);
  A(isnil(here1683));
  glVertexAttrib1f(index, x);
  return Nil;
}
yeah* foop_glVertexAttrib1dv(yeah* arg1686) {
  yeah* here1687 = arg1686;
  yeah* harg1688 = hcar(here1687);
  GLuint index = (GLuint)getint(harg1688);
  here1687 = hcdr(here1687);
  yeah* harg1689 = hcar(here1687);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1689);
  here1687 = hcdr(here1687);
  A(isnil(here1687));
  glVertexAttrib1dv(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1d(yeah* arg1690) {
  yeah* here1691 = arg1690;
  yeah* harg1692 = hcar(here1691);
  GLuint index = (GLuint)getint(harg1692);
  here1691 = hcdr(here1691);
  yeah* harg1693 = hcar(here1691);
  GLdouble x = (GLdouble)getfloatcvt(harg1693);
  here1691 = hcdr(here1691);
  A(isnil(here1691));
  glVertexAttrib1d(index, x);
  return Nil;
}
yeah* foop_glDrawBuffers(yeah* arg1694) {
  yeah* here1695 = arg1694;
  yeah* harg1696 = hcar(here1695);
  GLsizei n = (GLsizei)getint(harg1696);
  here1695 = hcdr(here1695);
  yeah* harg1697 = hcar(here1695);
  const GLenum* bufs = (const GLenum*)opaqueval(harg1697);
  here1695 = hcdr(here1695);
  A(isnil(here1695));
  glDrawBuffers(n, bufs);
  return Nil;
}
yeah* foop_glGetBufferPointerv(yeah* arg1698) {
  yeah* here1699 = arg1698;
  yeah* harg1700 = hcar(here1699);
  GLenum target = (GLenum)getint(harg1700);
  here1699 = hcdr(here1699);
  yeah* harg1701 = hcar(here1699);
  GLenum pname = (GLenum)getint(harg1701);
  here1699 = hcdr(here1699);
  yeah* harg1702 = hcar(here1699);
  GLvoid** params = (GLvoid**)opaqueval(harg1702);
  here1699 = hcdr(here1699);
  A(isnil(here1699));
  glGetBufferPointerv(target, pname, params);
  return Nil;
}
yeah* foop_glGetBufferParameteriv(yeah* arg1703) {
  yeah* here1704 = arg1703;
  yeah* harg1705 = hcar(here1704);
  GLenum target = (GLenum)getint(harg1705);
  here1704 = hcdr(here1704);
  yeah* harg1706 = hcar(here1704);
  GLenum pname = (GLenum)getint(harg1706);
  here1704 = hcdr(here1704);
  yeah* harg1707 = hcar(here1704);
  GLint* params = (GLint*)opaqueval(harg1707);
  here1704 = hcdr(here1704);
  A(isnil(here1704));
  glGetBufferParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glUnmapBuffer(yeah* arg1708) {
  yeah* here1709 = arg1708;
  yeah* harg1710 = hcar(here1709);
  GLenum target = (GLenum)getint(harg1710);
  here1709 = hcdr(here1709);
  A(isnil(here1709));
  GLboolean ret1711 = glUnmapBuffer(target);
  return integer((int)ret1711);
}
yeah* foop_glMapBuffer(yeah* arg1712) {
  yeah* here1713 = arg1712;
  yeah* harg1714 = hcar(here1713);
  GLenum target = (GLenum)getint(harg1714);
  here1713 = hcdr(here1713);
  yeah* harg1715 = hcar(here1713);
  GLenum access = (GLenum)getint(harg1715);
  here1713 = hcdr(here1713);
  A(isnil(here1713));
  GLvoid* ret1716 = glMapBuffer(target, access);
  return opaque((void*)ret1716);
}
yeah* foop_glGetBufferSubData(yeah* arg1717) {
  yeah* here1718 = arg1717;
  yeah* harg1719 = hcar(here1718);
  GLenum target = (GLenum)getint(harg1719);
  here1718 = hcdr(here1718);
  yeah* harg1720 = hcar(here1718);
  GLintptr offset = (GLintptr)opaqueval(harg1720);
  here1718 = hcdr(here1718);
  yeah* harg1721 = hcar(here1718);
  GLsizeiptr size = (GLsizeiptr)opaqueval(harg1721);
  here1718 = hcdr(here1718);
  yeah* harg1722 = hcar(here1718);
  GLvoid* data = (GLvoid*)opaqueval(harg1722);
  here1718 = hcdr(here1718);
  A(isnil(here1718));
  glGetBufferSubData(target, offset, size, data);
  return Nil;
}
yeah* foop_glBufferSubData(yeah* arg1723) {
  yeah* here1724 = arg1723;
  yeah* harg1725 = hcar(here1724);
  GLenum target = (GLenum)getint(harg1725);
  here1724 = hcdr(here1724);
  yeah* harg1726 = hcar(here1724);
  GLintptr offset = (GLintptr)opaqueval(harg1726);
  here1724 = hcdr(here1724);
  yeah* harg1727 = hcar(here1724);
  GLsizeiptr size = (GLsizeiptr)opaqueval(harg1727);
  here1724 = hcdr(here1724);
  yeah* harg1728 = hcar(here1724);
  const GLvoid* data = (const GLvoid*)opaqueval(harg1728);
  here1724 = hcdr(here1724);
  A(isnil(here1724));
  glBufferSubData(target, offset, size, data);
  return Nil;
}
yeah* foop_glBufferData(yeah* arg1729) {
  yeah* here1730 = arg1729;
  yeah* harg1731 = hcar(here1730);
  GLenum target = (GLenum)getint(harg1731);
  here1730 = hcdr(here1730);
  yeah* harg1732 = hcar(here1730);
  GLsizeiptr size = (GLsizeiptr)opaqueval(harg1732);
  here1730 = hcdr(here1730);
  yeah* harg1733 = hcar(here1730);
  const GLvoid* data = (const GLvoid*)opaqueval(harg1733);
  here1730 = hcdr(here1730);
  yeah* harg1734 = hcar(here1730);
  GLenum usage = (GLenum)getint(harg1734);
  here1730 = hcdr(here1730);
  A(isnil(here1730));
  glBufferData(target, size, data, usage);
  return Nil;
}
yeah* foop_glIsBuffer(yeah* arg1735) {
  yeah* here1736 = arg1735;
  yeah* harg1737 = hcar(here1736);
  GLuint buffer = (GLuint)getint(harg1737);
  here1736 = hcdr(here1736);
  A(isnil(here1736));
  GLboolean ret1738 = glIsBuffer(buffer);
  return integer((int)ret1738);
}
yeah* foop_glGenBuffers(yeah* arg1739) {
  yeah* here1740 = arg1739;
  yeah* harg1741 = hcar(here1740);
  GLsizei n = (GLsizei)getint(harg1741);
  here1740 = hcdr(here1740);
  yeah* harg1742 = hcar(here1740);
  GLuint* buffers = (GLuint*)opaqueval(harg1742);
  here1740 = hcdr(here1740);
  A(isnil(here1740));
  glGenBuffers(n, buffers);
  return Nil;
}
yeah* foop_glDeleteBuffers(yeah* arg1743) {
  yeah* here1744 = arg1743;
  yeah* harg1745 = hcar(here1744);
  GLsizei n = (GLsizei)getint(harg1745);
  here1744 = hcdr(here1744);
  yeah* harg1746 = hcar(here1744);
  const GLuint* buffers = (const GLuint*)opaqueval(harg1746);
  here1744 = hcdr(here1744);
  A(isnil(here1744));
  glDeleteBuffers(n, buffers);
  return Nil;
}
yeah* foop_glBindBuffer(yeah* arg1747) {
  yeah* here1748 = arg1747;
  yeah* harg1749 = hcar(here1748);
  GLenum target = (GLenum)getint(harg1749);
  here1748 = hcdr(here1748);
  yeah* harg1750 = hcar(here1748);
  GLuint buffer = (GLuint)getint(harg1750);
  here1748 = hcdr(here1748);
  A(isnil(here1748));
  glBindBuffer(target, buffer);
  return Nil;
}
yeah* foop_glGetQueryObjectuiv(yeah* arg1751) {
  yeah* here1752 = arg1751;
  yeah* harg1753 = hcar(here1752);
  GLuint id = (GLuint)getint(harg1753);
  here1752 = hcdr(here1752);
  yeah* harg1754 = hcar(here1752);
  GLenum pname = (GLenum)getint(harg1754);
  here1752 = hcdr(here1752);
  yeah* harg1755 = hcar(here1752);
  GLuint* params = (GLuint*)opaqueval(harg1755);
  here1752 = hcdr(here1752);
  A(isnil(here1752));
  glGetQueryObjectuiv(id, pname, params);
  return Nil;
}
yeah* foop_glGetQueryObjectiv(yeah* arg1756) {
  yeah* here1757 = arg1756;
  yeah* harg1758 = hcar(here1757);
  GLuint id = (GLuint)getint(harg1758);
  here1757 = hcdr(here1757);
  yeah* harg1759 = hcar(here1757);
  GLenum pname = (GLenum)getint(harg1759);
  here1757 = hcdr(here1757);
  yeah* harg1760 = hcar(here1757);
  GLint* params = (GLint*)opaqueval(harg1760);
  here1757 = hcdr(here1757);
  A(isnil(here1757));
  glGetQueryObjectiv(id, pname, params);
  return Nil;
}
yeah* foop_glGetQueryiv(yeah* arg1761) {
  yeah* here1762 = arg1761;
  yeah* harg1763 = hcar(here1762);
  GLenum target = (GLenum)getint(harg1763);
  here1762 = hcdr(here1762);
  yeah* harg1764 = hcar(here1762);
  GLenum pname = (GLenum)getint(harg1764);
  here1762 = hcdr(here1762);
  yeah* harg1765 = hcar(here1762);
  GLint* params = (GLint*)opaqueval(harg1765);
  here1762 = hcdr(here1762);
  A(isnil(here1762));
  glGetQueryiv(target, pname, params);
  return Nil;
}
yeah* foop_glEndQuery(yeah* arg1766) {
  yeah* here1767 = arg1766;
  yeah* harg1768 = hcar(here1767);
  GLenum target = (GLenum)getint(harg1768);
  here1767 = hcdr(here1767);
  A(isnil(here1767));
  glEndQuery(target);
  return Nil;
}
yeah* foop_glBeginQuery(yeah* arg1769) {
  yeah* here1770 = arg1769;
  yeah* harg1771 = hcar(here1770);
  GLenum target = (GLenum)getint(harg1771);
  here1770 = hcdr(here1770);
  yeah* harg1772 = hcar(here1770);
  GLuint id = (GLuint)getint(harg1772);
  here1770 = hcdr(here1770);
  A(isnil(here1770));
  glBeginQuery(target, id);
  return Nil;
}
yeah* foop_glIsQuery(yeah* arg1773) {
  yeah* here1774 = arg1773;
  yeah* harg1775 = hcar(here1774);
  GLuint id = (GLuint)getint(harg1775);
  here1774 = hcdr(here1774);
  A(isnil(here1774));
  GLboolean ret1776 = glIsQuery(id);
  return integer((int)ret1776);
}
yeah* foop_glDeleteQueries(yeah* arg1777) {
  yeah* here1778 = arg1777;
  yeah* harg1779 = hcar(here1778);
  GLsizei n = (GLsizei)getint(harg1779);
  here1778 = hcdr(here1778);
  yeah* harg1780 = hcar(here1778);
  const GLuint* ids = (const GLuint*)opaqueval(harg1780);
  here1778 = hcdr(here1778);
  A(isnil(here1778));
  glDeleteQueries(n, ids);
  return Nil;
}
yeah* foop_glGenQueries(yeah* arg1781) {
  yeah* here1782 = arg1781;
  yeah* harg1783 = hcar(here1782);
  GLsizei n = (GLsizei)getint(harg1783);
  here1782 = hcdr(here1782);
  yeah* harg1784 = hcar(here1782);
  GLuint* ids = (GLuint*)opaqueval(harg1784);
  here1782 = hcdr(here1782);
  A(isnil(here1782));
  glGenQueries(n, ids);
  return Nil;
}
yeah* foop_glWindowPos3sv(yeah* arg1785) {
  yeah* here1786 = arg1785;
  yeah* harg1787 = hcar(here1786);
  const GLshort* v = (const GLshort*)opaqueval(harg1787);
  here1786 = hcdr(here1786);
  A(isnil(here1786));
  glWindowPos3sv(v);
  return Nil;
}
yeah* foop_glWindowPos3s(yeah* arg1788) {
  yeah* here1789 = arg1788;
  yeah* harg1790 = hcar(here1789);
  int x = (int)getint(harg1790);
  here1789 = hcdr(here1789);
  yeah* harg1791 = hcar(here1789);
  int y = (int)getint(harg1791);
  here1789 = hcdr(here1789);
  yeah* harg1792 = hcar(here1789);
  int z = (int)getint(harg1792);
  here1789 = hcdr(here1789);
  A(isnil(here1789));
  glWindowPos3s(x, y, z);
  return Nil;
}
yeah* foop_glWindowPos3iv(yeah* arg1793) {
  yeah* here1794 = arg1793;
  yeah* harg1795 = hcar(here1794);
  const GLint* v = (const GLint*)opaqueval(harg1795);
  here1794 = hcdr(here1794);
  A(isnil(here1794));
  glWindowPos3iv(v);
  return Nil;
}
yeah* foop_glWindowPos3i(yeah* arg1796) {
  yeah* here1797 = arg1796;
  yeah* harg1798 = hcar(here1797);
  GLint x = (GLint)getint(harg1798);
  here1797 = hcdr(here1797);
  yeah* harg1799 = hcar(here1797);
  GLint y = (GLint)getint(harg1799);
  here1797 = hcdr(here1797);
  yeah* harg1800 = hcar(here1797);
  GLint z = (GLint)getint(harg1800);
  here1797 = hcdr(here1797);
  A(isnil(here1797));
  glWindowPos3i(x, y, z);
  return Nil;
}
yeah* foop_glWindowPos3fv(yeah* arg1801) {
  yeah* here1802 = arg1801;
  yeah* harg1803 = hcar(here1802);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1803);
  here1802 = hcdr(here1802);
  A(isnil(here1802));
  glWindowPos3fv(v);
  return Nil;
}
yeah* foop_glWindowPos3f(yeah* arg1804) {
  yeah* here1805 = arg1804;
  yeah* harg1806 = hcar(here1805);
  GLfloat x = (GLfloat)getfloatcvt(harg1806);
  here1805 = hcdr(here1805);
  yeah* harg1807 = hcar(here1805);
  GLfloat y = (GLfloat)getfloatcvt(harg1807);
  here1805 = hcdr(here1805);
  yeah* harg1808 = hcar(here1805);
  GLfloat z = (GLfloat)getfloatcvt(harg1808);
  here1805 = hcdr(here1805);
  A(isnil(here1805));
  glWindowPos3f(x, y, z);
  return Nil;
}
yeah* foop_glWindowPos3dv(yeah* arg1809) {
  yeah* here1810 = arg1809;
  yeah* harg1811 = hcar(here1810);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1811);
  here1810 = hcdr(here1810);
  A(isnil(here1810));
  glWindowPos3dv(v);
  return Nil;
}
yeah* foop_glWindowPos3d(yeah* arg1812) {
  yeah* here1813 = arg1812;
  yeah* harg1814 = hcar(here1813);
  GLdouble x = (GLdouble)getfloatcvt(harg1814);
  here1813 = hcdr(here1813);
  yeah* harg1815 = hcar(here1813);
  GLdouble y = (GLdouble)getfloatcvt(harg1815);
  here1813 = hcdr(here1813);
  yeah* harg1816 = hcar(here1813);
  GLdouble z = (GLdouble)getfloatcvt(harg1816);
  here1813 = hcdr(here1813);
  A(isnil(here1813));
  glWindowPos3d(x, y, z);
  return Nil;
}
yeah* foop_glWindowPos2sv(yeah* arg1817) {
  yeah* here1818 = arg1817;
  yeah* harg1819 = hcar(here1818);
  const GLshort* v = (const GLshort*)opaqueval(harg1819);
  here1818 = hcdr(here1818);
  A(isnil(here1818));
  glWindowPos2sv(v);
  return Nil;
}
yeah* foop_glWindowPos2s(yeah* arg1820) {
  yeah* here1821 = arg1820;
  yeah* harg1822 = hcar(here1821);
  int x = (int)getint(harg1822);
  here1821 = hcdr(here1821);
  yeah* harg1823 = hcar(here1821);
  int y = (int)getint(harg1823);
  here1821 = hcdr(here1821);
  A(isnil(here1821));
  glWindowPos2s(x, y);
  return Nil;
}
yeah* foop_glWindowPos2iv(yeah* arg1824) {
  yeah* here1825 = arg1824;
  yeah* harg1826 = hcar(here1825);
  const GLint* v = (const GLint*)opaqueval(harg1826);
  here1825 = hcdr(here1825);
  A(isnil(here1825));
  glWindowPos2iv(v);
  return Nil;
}
yeah* foop_glWindowPos2i(yeah* arg1827) {
  yeah* here1828 = arg1827;
  yeah* harg1829 = hcar(here1828);
  GLint x = (GLint)getint(harg1829);
  here1828 = hcdr(here1828);
  yeah* harg1830 = hcar(here1828);
  GLint y = (GLint)getint(harg1830);
  here1828 = hcdr(here1828);
  A(isnil(here1828));
  glWindowPos2i(x, y);
  return Nil;
}
yeah* foop_glWindowPos2fv(yeah* arg1831) {
  yeah* here1832 = arg1831;
  yeah* harg1833 = hcar(here1832);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1833);
  here1832 = hcdr(here1832);
  A(isnil(here1832));
  glWindowPos2fv(v);
  return Nil;
}
yeah* foop_glWindowPos2f(yeah* arg1834) {
  yeah* here1835 = arg1834;
  yeah* harg1836 = hcar(here1835);
  GLfloat x = (GLfloat)getfloatcvt(harg1836);
  here1835 = hcdr(here1835);
  yeah* harg1837 = hcar(here1835);
  GLfloat y = (GLfloat)getfloatcvt(harg1837);
  here1835 = hcdr(here1835);
  A(isnil(here1835));
  glWindowPos2f(x, y);
  return Nil;
}
yeah* foop_glWindowPos2dv(yeah* arg1838) {
  yeah* here1839 = arg1838;
  yeah* harg1840 = hcar(here1839);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1840);
  here1839 = hcdr(here1839);
  A(isnil(here1839));
  glWindowPos2dv(v);
  return Nil;
}
yeah* foop_glWindowPos2d(yeah* arg1841) {
  yeah* here1842 = arg1841;
  yeah* harg1843 = hcar(here1842);
  GLdouble x = (GLdouble)getfloatcvt(harg1843);
  here1842 = hcdr(here1842);
  yeah* harg1844 = hcar(here1842);
  GLdouble y = (GLdouble)getfloatcvt(harg1844);
  here1842 = hcdr(here1842);
  A(isnil(here1842));
  glWindowPos2d(x, y);
  return Nil;
}
yeah* foop_glMultiDrawElements(yeah* arg1845) {
  yeah* here1846 = arg1845;
  yeah* harg1847 = hcar(here1846);
  GLenum mode = (GLenum)getint(harg1847);
  here1846 = hcdr(here1846);
  yeah* harg1848 = hcar(here1846);
  const GLsizei* count = (const GLsizei*)opaqueval(harg1848);
  here1846 = hcdr(here1846);
  yeah* harg1849 = hcar(here1846);
  GLenum type = (GLenum)getint(harg1849);
  here1846 = hcdr(here1846);
  yeah* harg1850 = hcar(here1846);
  const GLvoid** indices = (const GLvoid**)opaqueval(harg1850);
  here1846 = hcdr(here1846);
  yeah* harg1851 = hcar(here1846);
  GLsizei primcount = (GLsizei)getint(harg1851);
  here1846 = hcdr(here1846);
  A(isnil(here1846));
  glMultiDrawElements(mode, count, type, indices, primcount);
  return Nil;
}
yeah* foop_glMultiDrawArrays(yeah* arg1852) {
  yeah* here1853 = arg1852;
  yeah* harg1854 = hcar(here1853);
  GLenum mode = (GLenum)getint(harg1854);
  here1853 = hcdr(here1853);
  yeah* harg1855 = hcar(here1853);
  const GLint* first = (const GLint*)opaqueval(harg1855);
  here1853 = hcdr(here1853);
  yeah* harg1856 = hcar(here1853);
  const GLsizei* count = (const GLsizei*)opaqueval(harg1856);
  here1853 = hcdr(here1853);
  yeah* harg1857 = hcar(here1853);
  GLsizei primcount = (GLsizei)getint(harg1857);
  here1853 = hcdr(here1853);
  A(isnil(here1853));
  glMultiDrawArrays(mode, first, count, primcount);
  return Nil;
}
yeah* foop_glBlendFuncSeparate(yeah* arg1858) {
  yeah* here1859 = arg1858;
  yeah* harg1860 = hcar(here1859);
  GLenum srcRGB = (GLenum)getint(harg1860);
  here1859 = hcdr(here1859);
  yeah* harg1861 = hcar(here1859);
  GLenum dstRGB = (GLenum)getint(harg1861);
  here1859 = hcdr(here1859);
  yeah* harg1862 = hcar(here1859);
  GLenum srcAlpha = (GLenum)getint(harg1862);
  here1859 = hcdr(here1859);
  yeah* harg1863 = hcar(here1859);
  GLenum dstAlpha = (GLenum)getint(harg1863);
  here1859 = hcdr(here1859);
  A(isnil(here1859));
  glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
  return Nil;
}
yeah* foop_glPointParameteriv(yeah* arg1864) {
  yeah* here1865 = arg1864;
  yeah* harg1866 = hcar(here1865);
  GLenum pname = (GLenum)getint(harg1866);
  here1865 = hcdr(here1865);
  yeah* harg1867 = hcar(here1865);
  const GLint* params = (const GLint*)opaqueval(harg1867);
  here1865 = hcdr(here1865);
  A(isnil(here1865));
  glPointParameteriv(pname, params);
  return Nil;
}
yeah* foop_glPointParameteri(yeah* arg1868) {
  yeah* here1869 = arg1868;
  yeah* harg1870 = hcar(here1869);
  GLenum pname = (GLenum)getint(harg1870);
  here1869 = hcdr(here1869);
  yeah* harg1871 = hcar(here1869);
  GLint param = (GLint)getint(harg1871);
  here1869 = hcdr(here1869);
  A(isnil(here1869));
  glPointParameteri(pname, param);
  return Nil;
}
yeah* foop_glPointParameterfv(yeah* arg1872) {
  yeah* here1873 = arg1872;
  yeah* harg1874 = hcar(here1873);
  GLenum pname = (GLenum)getint(harg1874);
  here1873 = hcdr(here1873);
  yeah* harg1875 = hcar(here1873);
  const GLfloat* params = (const GLfloat*)opaqueval(harg1875);
  here1873 = hcdr(here1873);
  A(isnil(here1873));
  glPointParameterfv(pname, params);
  return Nil;
}
yeah* foop_glPointParameterf(yeah* arg1876) {
  yeah* here1877 = arg1876;
  yeah* harg1878 = hcar(here1877);
  GLenum pname = (GLenum)getint(harg1878);
  here1877 = hcdr(here1877);
  yeah* harg1879 = hcar(here1877);
  GLfloat param = (GLfloat)getfloatcvt(harg1879);
  here1877 = hcdr(here1877);
  A(isnil(here1877));
  glPointParameterf(pname, param);
  return Nil;
}
yeah* foop_glSecondaryColorPointer(yeah* arg1880) {
  yeah* here1881 = arg1880;
  yeah* harg1882 = hcar(here1881);
  GLint size = (GLint)getint(harg1882);
  here1881 = hcdr(here1881);
  yeah* harg1883 = hcar(here1881);
  GLenum type = (GLenum)getint(harg1883);
  here1881 = hcdr(here1881);
  yeah* harg1884 = hcar(here1881);
  GLsizei stride = (GLsizei)getint(harg1884);
  here1881 = hcdr(here1881);
  yeah* harg1885 = hcar(here1881);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg1885);
  here1881 = hcdr(here1881);
  A(isnil(here1881));
  glSecondaryColorPointer(size, type, stride, pointer);
  return Nil;
}
yeah* foop_glSecondaryColor3usv(yeah* arg1886) {
  yeah* here1887 = arg1886;
  yeah* harg1888 = hcar(here1887);
  const GLushort* v = (const GLushort*)opaqueval(harg1888);
  here1887 = hcdr(here1887);
  A(isnil(here1887));
  glSecondaryColor3usv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3us(yeah* arg1889) {
  yeah* here1890 = arg1889;
  yeah* harg1891 = hcar(here1890);
  int red = (int)getint(harg1891);
  here1890 = hcdr(here1890);
  yeah* harg1892 = hcar(here1890);
  int green = (int)getint(harg1892);
  here1890 = hcdr(here1890);
  yeah* harg1893 = hcar(here1890);
  int blue = (int)getint(harg1893);
  here1890 = hcdr(here1890);
  A(isnil(here1890));
  glSecondaryColor3us(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3uiv(yeah* arg1894) {
  yeah* here1895 = arg1894;
  yeah* harg1896 = hcar(here1895);
  const GLuint* v = (const GLuint*)opaqueval(harg1896);
  here1895 = hcdr(here1895);
  A(isnil(here1895));
  glSecondaryColor3uiv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3ui(yeah* arg1897) {
  yeah* here1898 = arg1897;
  yeah* harg1899 = hcar(here1898);
  GLuint red = (GLuint)getint(harg1899);
  here1898 = hcdr(here1898);
  yeah* harg1900 = hcar(here1898);
  GLuint green = (GLuint)getint(harg1900);
  here1898 = hcdr(here1898);
  yeah* harg1901 = hcar(here1898);
  GLuint blue = (GLuint)getint(harg1901);
  here1898 = hcdr(here1898);
  A(isnil(here1898));
  glSecondaryColor3ui(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3ubv(yeah* arg1902) {
  yeah* here1903 = arg1902;
  yeah* harg1904 = hcar(here1903);
  const GLubyte* v = (const GLubyte*)opaqueval(harg1904);
  here1903 = hcdr(here1903);
  A(isnil(here1903));
  glSecondaryColor3ubv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3ub(yeah* arg1905) {
  yeah* here1906 = arg1905;
  yeah* harg1907 = hcar(here1906);
  int red = (int)getint(harg1907);
  here1906 = hcdr(here1906);
  yeah* harg1908 = hcar(here1906);
  int green = (int)getint(harg1908);
  here1906 = hcdr(here1906);
  yeah* harg1909 = hcar(here1906);
  int blue = (int)getint(harg1909);
  here1906 = hcdr(here1906);
  A(isnil(here1906));
  glSecondaryColor3ub(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3sv(yeah* arg1910) {
  yeah* here1911 = arg1910;
  yeah* harg1912 = hcar(here1911);
  const GLshort* v = (const GLshort*)opaqueval(harg1912);
  here1911 = hcdr(here1911);
  A(isnil(here1911));
  glSecondaryColor3sv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3s(yeah* arg1913) {
  yeah* here1914 = arg1913;
  yeah* harg1915 = hcar(here1914);
  int red = (int)getint(harg1915);
  here1914 = hcdr(here1914);
  yeah* harg1916 = hcar(here1914);
  int green = (int)getint(harg1916);
  here1914 = hcdr(here1914);
  yeah* harg1917 = hcar(here1914);
  int blue = (int)getint(harg1917);
  here1914 = hcdr(here1914);
  A(isnil(here1914));
  glSecondaryColor3s(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3iv(yeah* arg1918) {
  yeah* here1919 = arg1918;
  yeah* harg1920 = hcar(here1919);
  const GLint* v = (const GLint*)opaqueval(harg1920);
  here1919 = hcdr(here1919);
  A(isnil(here1919));
  glSecondaryColor3iv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3i(yeah* arg1921) {
  yeah* here1922 = arg1921;
  yeah* harg1923 = hcar(here1922);
  GLint red = (GLint)getint(harg1923);
  here1922 = hcdr(here1922);
  yeah* harg1924 = hcar(here1922);
  GLint green = (GLint)getint(harg1924);
  here1922 = hcdr(here1922);
  yeah* harg1925 = hcar(here1922);
  GLint blue = (GLint)getint(harg1925);
  here1922 = hcdr(here1922);
  A(isnil(here1922));
  glSecondaryColor3i(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3fv(yeah* arg1926) {
  yeah* here1927 = arg1926;
  yeah* harg1928 = hcar(here1927);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1928);
  here1927 = hcdr(here1927);
  A(isnil(here1927));
  glSecondaryColor3fv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3f(yeah* arg1929) {
  yeah* here1930 = arg1929;
  yeah* harg1931 = hcar(here1930);
  GLfloat red = (GLfloat)getfloatcvt(harg1931);
  here1930 = hcdr(here1930);
  yeah* harg1932 = hcar(here1930);
  GLfloat green = (GLfloat)getfloatcvt(harg1932);
  here1930 = hcdr(here1930);
  yeah* harg1933 = hcar(here1930);
  GLfloat blue = (GLfloat)getfloatcvt(harg1933);
  here1930 = hcdr(here1930);
  A(isnil(here1930));
  glSecondaryColor3f(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3dv(yeah* arg1934) {
  yeah* here1935 = arg1934;
  yeah* harg1936 = hcar(here1935);
  const GLdouble* v = (const GLdouble*)opaqueval(harg1936);
  here1935 = hcdr(here1935);
  A(isnil(here1935));
  glSecondaryColor3dv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3d(yeah* arg1937) {
  yeah* here1938 = arg1937;
  yeah* harg1939 = hcar(here1938);
  GLdouble red = (GLdouble)getfloatcvt(harg1939);
  here1938 = hcdr(here1938);
  yeah* harg1940 = hcar(here1938);
  GLdouble green = (GLdouble)getfloatcvt(harg1940);
  here1938 = hcdr(here1938);
  yeah* harg1941 = hcar(here1938);
  GLdouble blue = (GLdouble)getfloatcvt(harg1941);
  here1938 = hcdr(here1938);
  A(isnil(here1938));
  glSecondaryColor3d(red, green, blue);
  return Nil;
}
yeah* foop_glSecondaryColor3bv(yeah* arg1942) {
  yeah* here1943 = arg1942;
  yeah* harg1944 = hcar(here1943);
  const GLbyte* v = (const GLbyte*)opaqueval(harg1944);
  here1943 = hcdr(here1943);
  A(isnil(here1943));
  glSecondaryColor3bv(v);
  return Nil;
}
yeah* foop_glSecondaryColor3b(yeah* arg1945) {
  yeah* here1946 = arg1945;
  yeah* harg1947 = hcar(here1946);
  int red = (int)getint(harg1947);
  here1946 = hcdr(here1946);
  yeah* harg1948 = hcar(here1946);
  int green = (int)getint(harg1948);
  here1946 = hcdr(here1946);
  yeah* harg1949 = hcar(here1946);
  int blue = (int)getint(harg1949);
  here1946 = hcdr(here1946);
  A(isnil(here1946));
  glSecondaryColor3b(red, green, blue);
  return Nil;
}
yeah* foop_glFogCoordPointer(yeah* arg1950) {
  yeah* here1951 = arg1950;
  yeah* harg1952 = hcar(here1951);
  GLenum type = (GLenum)getint(harg1952);
  here1951 = hcdr(here1951);
  yeah* harg1953 = hcar(here1951);
  GLsizei stride = (GLsizei)getint(harg1953);
  here1951 = hcdr(here1951);
  yeah* harg1954 = hcar(here1951);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg1954);
  here1951 = hcdr(here1951);
  A(isnil(here1951));
  glFogCoordPointer(type, stride, pointer);
  return Nil;
}
yeah* foop_glFogCoorddv(yeah* arg1955) {
  yeah* here1956 = arg1955;
  yeah* harg1957 = hcar(here1956);
  const GLdouble* coord = (const GLdouble*)opaqueval(harg1957);
  here1956 = hcdr(here1956);
  A(isnil(here1956));
  glFogCoorddv(coord);
  return Nil;
}
yeah* foop_glFogCoordd(yeah* arg1958) {
  yeah* here1959 = arg1958;
  yeah* harg1960 = hcar(here1959);
  GLdouble coord = (GLdouble)getfloatcvt(harg1960);
  here1959 = hcdr(here1959);
  A(isnil(here1959));
  glFogCoordd(coord);
  return Nil;
}
yeah* foop_glFogCoordfv(yeah* arg1961) {
  yeah* here1962 = arg1961;
  yeah* harg1963 = hcar(here1962);
  const GLfloat* coord = (const GLfloat*)opaqueval(harg1963);
  here1962 = hcdr(here1962);
  A(isnil(here1962));
  glFogCoordfv(coord);
  return Nil;
}
yeah* foop_glFogCoordf(yeah* arg1964) {
  yeah* here1965 = arg1964;
  yeah* harg1966 = hcar(here1965);
  GLfloat coord = (GLfloat)getfloatcvt(harg1966);
  here1965 = hcdr(here1965);
  A(isnil(here1965));
  glFogCoordf(coord);
  return Nil;
}
yeah* foop_glMultiTexCoord4sv(yeah* arg1967) {
  yeah* here1968 = arg1967;
  yeah* harg1969 = hcar(here1968);
  GLenum target = (GLenum)getint(harg1969);
  here1968 = hcdr(here1968);
  yeah* harg1970 = hcar(here1968);
  const GLshort* v = (const GLshort*)opaqueval(harg1970);
  here1968 = hcdr(here1968);
  A(isnil(here1968));
  glMultiTexCoord4sv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord4s(yeah* arg1971) {
  yeah* here1972 = arg1971;
  yeah* harg1973 = hcar(here1972);
  GLenum target = (GLenum)getint(harg1973);
  here1972 = hcdr(here1972);
  yeah* harg1974 = hcar(here1972);
  int s = (int)getint(harg1974);
  here1972 = hcdr(here1972);
  yeah* harg1975 = hcar(here1972);
  int t = (int)getint(harg1975);
  here1972 = hcdr(here1972);
  yeah* harg1976 = hcar(here1972);
  int r = (int)getint(harg1976);
  here1972 = hcdr(here1972);
  yeah* harg1977 = hcar(here1972);
  int q = (int)getint(harg1977);
  here1972 = hcdr(here1972);
  A(isnil(here1972));
  glMultiTexCoord4s(target, s, t, r, q);
  return Nil;
}
yeah* foop_glMultiTexCoord4iv(yeah* arg1978) {
  yeah* here1979 = arg1978;
  yeah* harg1980 = hcar(here1979);
  GLenum target = (GLenum)getint(harg1980);
  here1979 = hcdr(here1979);
  yeah* harg1981 = hcar(here1979);
  const GLint* v = (const GLint*)opaqueval(harg1981);
  here1979 = hcdr(here1979);
  A(isnil(here1979));
  glMultiTexCoord4iv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord4i(yeah* arg1982) {
  yeah* here1983 = arg1982;
  yeah* harg1984 = hcar(here1983);
  GLenum target = (GLenum)getint(harg1984);
  here1983 = hcdr(here1983);
  yeah* harg1985 = hcar(here1983);
  GLint anonp85 = (GLint)getint(harg1985);
  here1983 = hcdr(here1983);
  yeah* harg1986 = hcar(here1983);
  GLint s = (GLint)getint(harg1986);
  here1983 = hcdr(here1983);
  yeah* harg1987 = hcar(here1983);
  GLint t = (GLint)getint(harg1987);
  here1983 = hcdr(here1983);
  yeah* harg1988 = hcar(here1983);
  GLint r = (GLint)getint(harg1988);
  here1983 = hcdr(here1983);
  A(isnil(here1983));
  glMultiTexCoord4i(target, anonp85, s, t, r);
  return Nil;
}
yeah* foop_glMultiTexCoord4fv(yeah* arg1989) {
  yeah* here1990 = arg1989;
  yeah* harg1991 = hcar(here1990);
  GLenum target = (GLenum)getint(harg1991);
  here1990 = hcdr(here1990);
  yeah* harg1992 = hcar(here1990);
  const GLfloat* v = (const GLfloat*)opaqueval(harg1992);
  here1990 = hcdr(here1990);
  A(isnil(here1990));
  glMultiTexCoord4fv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord4f(yeah* arg1993) {
  yeah* here1994 = arg1993;
  yeah* harg1995 = hcar(here1994);
  GLenum target = (GLenum)getint(harg1995);
  here1994 = hcdr(here1994);
  yeah* harg1996 = hcar(here1994);
  GLfloat s = (GLfloat)getfloatcvt(harg1996);
  here1994 = hcdr(here1994);
  yeah* harg1997 = hcar(here1994);
  GLfloat t = (GLfloat)getfloatcvt(harg1997);
  here1994 = hcdr(here1994);
  yeah* harg1998 = hcar(here1994);
  GLfloat r = (GLfloat)getfloatcvt(harg1998);
  here1994 = hcdr(here1994);
  yeah* harg1999 = hcar(here1994);
  GLfloat q = (GLfloat)getfloatcvt(harg1999);
  here1994 = hcdr(here1994);
  A(isnil(here1994));
  glMultiTexCoord4f(target, s, t, r, q);
  return Nil;
}
yeah* foop_glMultiTexCoord4dv(yeah* arg2000) {
  yeah* here2001 = arg2000;
  yeah* harg2002 = hcar(here2001);
  GLenum target = (GLenum)getint(harg2002);
  here2001 = hcdr(here2001);
  yeah* harg2003 = hcar(here2001);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2003);
  here2001 = hcdr(here2001);
  A(isnil(here2001));
  glMultiTexCoord4dv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord4d(yeah* arg2004) {
  yeah* here2005 = arg2004;
  yeah* harg2006 = hcar(here2005);
  GLenum target = (GLenum)getint(harg2006);
  here2005 = hcdr(here2005);
  yeah* harg2007 = hcar(here2005);
  GLdouble s = (GLdouble)getfloatcvt(harg2007);
  here2005 = hcdr(here2005);
  yeah* harg2008 = hcar(here2005);
  GLdouble t = (GLdouble)getfloatcvt(harg2008);
  here2005 = hcdr(here2005);
  yeah* harg2009 = hcar(here2005);
  GLdouble r = (GLdouble)getfloatcvt(harg2009);
  here2005 = hcdr(here2005);
  yeah* harg2010 = hcar(here2005);
  GLdouble q = (GLdouble)getfloatcvt(harg2010);
  here2005 = hcdr(here2005);
  A(isnil(here2005));
  glMultiTexCoord4d(target, s, t, r, q);
  return Nil;
}
yeah* foop_glMultiTexCoord3sv(yeah* arg2011) {
  yeah* here2012 = arg2011;
  yeah* harg2013 = hcar(here2012);
  GLenum target = (GLenum)getint(harg2013);
  here2012 = hcdr(here2012);
  yeah* harg2014 = hcar(here2012);
  const GLshort* v = (const GLshort*)opaqueval(harg2014);
  here2012 = hcdr(here2012);
  A(isnil(here2012));
  glMultiTexCoord3sv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord3s(yeah* arg2015) {
  yeah* here2016 = arg2015;
  yeah* harg2017 = hcar(here2016);
  GLenum target = (GLenum)getint(harg2017);
  here2016 = hcdr(here2016);
  yeah* harg2018 = hcar(here2016);
  int s = (int)getint(harg2018);
  here2016 = hcdr(here2016);
  yeah* harg2019 = hcar(here2016);
  int t = (int)getint(harg2019);
  here2016 = hcdr(here2016);
  yeah* harg2020 = hcar(here2016);
  int r = (int)getint(harg2020);
  here2016 = hcdr(here2016);
  A(isnil(here2016));
  glMultiTexCoord3s(target, s, t, r);
  return Nil;
}
yeah* foop_glMultiTexCoord3iv(yeah* arg2021) {
  yeah* here2022 = arg2021;
  yeah* harg2023 = hcar(here2022);
  GLenum target = (GLenum)getint(harg2023);
  here2022 = hcdr(here2022);
  yeah* harg2024 = hcar(here2022);
  const GLint* v = (const GLint*)opaqueval(harg2024);
  here2022 = hcdr(here2022);
  A(isnil(here2022));
  glMultiTexCoord3iv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord3i(yeah* arg2025) {
  yeah* here2026 = arg2025;
  yeah* harg2027 = hcar(here2026);
  GLenum target = (GLenum)getint(harg2027);
  here2026 = hcdr(here2026);
  yeah* harg2028 = hcar(here2026);
  GLint s = (GLint)getint(harg2028);
  here2026 = hcdr(here2026);
  yeah* harg2029 = hcar(here2026);
  GLint t = (GLint)getint(harg2029);
  here2026 = hcdr(here2026);
  yeah* harg2030 = hcar(here2026);
  GLint r = (GLint)getint(harg2030);
  here2026 = hcdr(here2026);
  A(isnil(here2026));
  glMultiTexCoord3i(target, s, t, r);
  return Nil;
}
yeah* foop_glMultiTexCoord3fv(yeah* arg2031) {
  yeah* here2032 = arg2031;
  yeah* harg2033 = hcar(here2032);
  GLenum target = (GLenum)getint(harg2033);
  here2032 = hcdr(here2032);
  yeah* harg2034 = hcar(here2032);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2034);
  here2032 = hcdr(here2032);
  A(isnil(here2032));
  glMultiTexCoord3fv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord3f(yeah* arg2035) {
  yeah* here2036 = arg2035;
  yeah* harg2037 = hcar(here2036);
  GLenum target = (GLenum)getint(harg2037);
  here2036 = hcdr(here2036);
  yeah* harg2038 = hcar(here2036);
  GLfloat s = (GLfloat)getfloatcvt(harg2038);
  here2036 = hcdr(here2036);
  yeah* harg2039 = hcar(here2036);
  GLfloat t = (GLfloat)getfloatcvt(harg2039);
  here2036 = hcdr(here2036);
  yeah* harg2040 = hcar(here2036);
  GLfloat r = (GLfloat)getfloatcvt(harg2040);
  here2036 = hcdr(here2036);
  A(isnil(here2036));
  glMultiTexCoord3f(target, s, t, r);
  return Nil;
}
yeah* foop_glMultiTexCoord3dv(yeah* arg2041) {
  yeah* here2042 = arg2041;
  yeah* harg2043 = hcar(here2042);
  GLenum target = (GLenum)getint(harg2043);
  here2042 = hcdr(here2042);
  yeah* harg2044 = hcar(here2042);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2044);
  here2042 = hcdr(here2042);
  A(isnil(here2042));
  glMultiTexCoord3dv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord3d(yeah* arg2045) {
  yeah* here2046 = arg2045;
  yeah* harg2047 = hcar(here2046);
  GLenum target = (GLenum)getint(harg2047);
  here2046 = hcdr(here2046);
  yeah* harg2048 = hcar(here2046);
  GLdouble s = (GLdouble)getfloatcvt(harg2048);
  here2046 = hcdr(here2046);
  yeah* harg2049 = hcar(here2046);
  GLdouble t = (GLdouble)getfloatcvt(harg2049);
  here2046 = hcdr(here2046);
  yeah* harg2050 = hcar(here2046);
  GLdouble r = (GLdouble)getfloatcvt(harg2050);
  here2046 = hcdr(here2046);
  A(isnil(here2046));
  glMultiTexCoord3d(target, s, t, r);
  return Nil;
}
yeah* foop_glMultiTexCoord2sv(yeah* arg2051) {
  yeah* here2052 = arg2051;
  yeah* harg2053 = hcar(here2052);
  GLenum target = (GLenum)getint(harg2053);
  here2052 = hcdr(here2052);
  yeah* harg2054 = hcar(here2052);
  const GLshort* v = (const GLshort*)opaqueval(harg2054);
  here2052 = hcdr(here2052);
  A(isnil(here2052));
  glMultiTexCoord2sv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord2s(yeah* arg2055) {
  yeah* here2056 = arg2055;
  yeah* harg2057 = hcar(here2056);
  GLenum target = (GLenum)getint(harg2057);
  here2056 = hcdr(here2056);
  yeah* harg2058 = hcar(here2056);
  int s = (int)getint(harg2058);
  here2056 = hcdr(here2056);
  yeah* harg2059 = hcar(here2056);
  int t = (int)getint(harg2059);
  here2056 = hcdr(here2056);
  A(isnil(here2056));
  glMultiTexCoord2s(target, s, t);
  return Nil;
}
yeah* foop_glMultiTexCoord2iv(yeah* arg2060) {
  yeah* here2061 = arg2060;
  yeah* harg2062 = hcar(here2061);
  GLenum target = (GLenum)getint(harg2062);
  here2061 = hcdr(here2061);
  yeah* harg2063 = hcar(here2061);
  const GLint* v = (const GLint*)opaqueval(harg2063);
  here2061 = hcdr(here2061);
  A(isnil(here2061));
  glMultiTexCoord2iv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord2i(yeah* arg2064) {
  yeah* here2065 = arg2064;
  yeah* harg2066 = hcar(here2065);
  GLenum target = (GLenum)getint(harg2066);
  here2065 = hcdr(here2065);
  yeah* harg2067 = hcar(here2065);
  GLint s = (GLint)getint(harg2067);
  here2065 = hcdr(here2065);
  yeah* harg2068 = hcar(here2065);
  GLint t = (GLint)getint(harg2068);
  here2065 = hcdr(here2065);
  A(isnil(here2065));
  glMultiTexCoord2i(target, s, t);
  return Nil;
}
yeah* foop_glMultiTexCoord2fv(yeah* arg2069) {
  yeah* here2070 = arg2069;
  yeah* harg2071 = hcar(here2070);
  GLenum target = (GLenum)getint(harg2071);
  here2070 = hcdr(here2070);
  yeah* harg2072 = hcar(here2070);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2072);
  here2070 = hcdr(here2070);
  A(isnil(here2070));
  glMultiTexCoord2fv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord2f(yeah* arg2073) {
  yeah* here2074 = arg2073;
  yeah* harg2075 = hcar(here2074);
  GLenum target = (GLenum)getint(harg2075);
  here2074 = hcdr(here2074);
  yeah* harg2076 = hcar(here2074);
  GLfloat s = (GLfloat)getfloatcvt(harg2076);
  here2074 = hcdr(here2074);
  yeah* harg2077 = hcar(here2074);
  GLfloat t = (GLfloat)getfloatcvt(harg2077);
  here2074 = hcdr(here2074);
  A(isnil(here2074));
  glMultiTexCoord2f(target, s, t);
  return Nil;
}
yeah* foop_glMultiTexCoord2dv(yeah* arg2078) {
  yeah* here2079 = arg2078;
  yeah* harg2080 = hcar(here2079);
  GLenum target = (GLenum)getint(harg2080);
  here2079 = hcdr(here2079);
  yeah* harg2081 = hcar(here2079);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2081);
  here2079 = hcdr(here2079);
  A(isnil(here2079));
  glMultiTexCoord2dv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord2d(yeah* arg2082) {
  yeah* here2083 = arg2082;
  yeah* harg2084 = hcar(here2083);
  GLenum target = (GLenum)getint(harg2084);
  here2083 = hcdr(here2083);
  yeah* harg2085 = hcar(here2083);
  GLdouble s = (GLdouble)getfloatcvt(harg2085);
  here2083 = hcdr(here2083);
  yeah* harg2086 = hcar(here2083);
  GLdouble t = (GLdouble)getfloatcvt(harg2086);
  here2083 = hcdr(here2083);
  A(isnil(here2083));
  glMultiTexCoord2d(target, s, t);
  return Nil;
}
yeah* foop_glMultiTexCoord1sv(yeah* arg2087) {
  yeah* here2088 = arg2087;
  yeah* harg2089 = hcar(here2088);
  GLenum target = (GLenum)getint(harg2089);
  here2088 = hcdr(here2088);
  yeah* harg2090 = hcar(here2088);
  const GLshort* v = (const GLshort*)opaqueval(harg2090);
  here2088 = hcdr(here2088);
  A(isnil(here2088));
  glMultiTexCoord1sv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord1s(yeah* arg2091) {
  yeah* here2092 = arg2091;
  yeah* harg2093 = hcar(here2092);
  GLenum target = (GLenum)getint(harg2093);
  here2092 = hcdr(here2092);
  yeah* harg2094 = hcar(here2092);
  int s = (int)getint(harg2094);
  here2092 = hcdr(here2092);
  A(isnil(here2092));
  glMultiTexCoord1s(target, s);
  return Nil;
}
yeah* foop_glMultiTexCoord1iv(yeah* arg2095) {
  yeah* here2096 = arg2095;
  yeah* harg2097 = hcar(here2096);
  GLenum target = (GLenum)getint(harg2097);
  here2096 = hcdr(here2096);
  yeah* harg2098 = hcar(here2096);
  const GLint* v = (const GLint*)opaqueval(harg2098);
  here2096 = hcdr(here2096);
  A(isnil(here2096));
  glMultiTexCoord1iv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord1i(yeah* arg2099) {
  yeah* here2100 = arg2099;
  yeah* harg2101 = hcar(here2100);
  GLenum target = (GLenum)getint(harg2101);
  here2100 = hcdr(here2100);
  yeah* harg2102 = hcar(here2100);
  GLint s = (GLint)getint(harg2102);
  here2100 = hcdr(here2100);
  A(isnil(here2100));
  glMultiTexCoord1i(target, s);
  return Nil;
}
yeah* foop_glMultiTexCoord1fv(yeah* arg2103) {
  yeah* here2104 = arg2103;
  yeah* harg2105 = hcar(here2104);
  GLenum target = (GLenum)getint(harg2105);
  here2104 = hcdr(here2104);
  yeah* harg2106 = hcar(here2104);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2106);
  here2104 = hcdr(here2104);
  A(isnil(here2104));
  glMultiTexCoord1fv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord1f(yeah* arg2107) {
  yeah* here2108 = arg2107;
  yeah* harg2109 = hcar(here2108);
  GLenum target = (GLenum)getint(harg2109);
  here2108 = hcdr(here2108);
  yeah* harg2110 = hcar(here2108);
  GLfloat s = (GLfloat)getfloatcvt(harg2110);
  here2108 = hcdr(here2108);
  A(isnil(here2108));
  glMultiTexCoord1f(target, s);
  return Nil;
}
yeah* foop_glMultiTexCoord1dv(yeah* arg2111) {
  yeah* here2112 = arg2111;
  yeah* harg2113 = hcar(here2112);
  GLenum target = (GLenum)getint(harg2113);
  here2112 = hcdr(here2112);
  yeah* harg2114 = hcar(here2112);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2114);
  here2112 = hcdr(here2112);
  A(isnil(here2112));
  glMultiTexCoord1dv(target, v);
  return Nil;
}
yeah* foop_glMultiTexCoord1d(yeah* arg2115) {
  yeah* here2116 = arg2115;
  yeah* harg2117 = hcar(here2116);
  GLenum target = (GLenum)getint(harg2117);
  here2116 = hcdr(here2116);
  yeah* harg2118 = hcar(here2116);
  GLdouble s = (GLdouble)getfloatcvt(harg2118);
  here2116 = hcdr(here2116);
  A(isnil(here2116));
  glMultiTexCoord1d(target, s);
  return Nil;
}
yeah* foop_glClientActiveTexture(yeah* arg2119) {
  yeah* here2120 = arg2119;
  yeah* harg2121 = hcar(here2120);
  GLenum texture = (GLenum)getint(harg2121);
  here2120 = hcdr(here2120);
  A(isnil(here2120));
  glClientActiveTexture(texture);
  return Nil;
}
yeah* foop_glActiveTexture(yeah* arg2122) {
  yeah* here2123 = arg2122;
  yeah* harg2124 = hcar(here2123);
  GLenum texture = (GLenum)getint(harg2124);
  here2123 = hcdr(here2123);
  A(isnil(here2123));
  glActiveTexture(texture);
  return Nil;
}
yeah* foop_glGetCompressedTexImage(yeah* arg2125) {
  yeah* here2126 = arg2125;
  yeah* harg2127 = hcar(here2126);
  GLenum target = (GLenum)getint(harg2127);
  here2126 = hcdr(here2126);
  yeah* harg2128 = hcar(here2126);
  GLint lod = (GLint)getint(harg2128);
  here2126 = hcdr(here2126);
  yeah* harg2129 = hcar(here2126);
  GLvoid* img = (GLvoid*)opaqueval(harg2129);
  here2126 = hcdr(here2126);
  A(isnil(here2126));
  glGetCompressedTexImage(target, lod, img);
  return Nil;
}
yeah* foop_glCompressedTexSubImage1D(yeah* arg2130) {
  yeah* here2131 = arg2130;
  yeah* harg2132 = hcar(here2131);
  GLenum target = (GLenum)getint(harg2132);
  here2131 = hcdr(here2131);
  yeah* harg2133 = hcar(here2131);
  GLint level = (GLint)getint(harg2133);
  here2131 = hcdr(here2131);
  yeah* harg2134 = hcar(here2131);
  GLint xoffset = (GLint)getint(harg2134);
  here2131 = hcdr(here2131);
  yeah* harg2135 = hcar(here2131);
  GLsizei width = (GLsizei)getint(harg2135);
  here2131 = hcdr(here2131);
  yeah* harg2136 = hcar(here2131);
  GLenum format = (GLenum)getint(harg2136);
  here2131 = hcdr(here2131);
  yeah* harg2137 = hcar(here2131);
  GLsizei imageSize = (GLsizei)getint(harg2137);
  here2131 = hcdr(here2131);
  yeah* harg2138 = hcar(here2131);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2138);
  here2131 = hcdr(here2131);
  A(isnil(here2131));
  glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
  return Nil;
}
yeah* foop_glCompressedTexSubImage2D(yeah* arg2139) {
  yeah* here2140 = arg2139;
  yeah* harg2141 = hcar(here2140);
  GLenum target = (GLenum)getint(harg2141);
  here2140 = hcdr(here2140);
  yeah* harg2142 = hcar(here2140);
  GLint level = (GLint)getint(harg2142);
  here2140 = hcdr(here2140);
  yeah* harg2143 = hcar(here2140);
  GLint xoffset = (GLint)getint(harg2143);
  here2140 = hcdr(here2140);
  yeah* harg2144 = hcar(here2140);
  GLint yoffset = (GLint)getint(harg2144);
  here2140 = hcdr(here2140);
  yeah* harg2145 = hcar(here2140);
  GLsizei width = (GLsizei)getint(harg2145);
  here2140 = hcdr(here2140);
  yeah* harg2146 = hcar(here2140);
  GLsizei height = (GLsizei)getint(harg2146);
  here2140 = hcdr(here2140);
  yeah* harg2147 = hcar(here2140);
  GLenum format = (GLenum)getint(harg2147);
  here2140 = hcdr(here2140);
  yeah* harg2148 = hcar(here2140);
  GLsizei imageSize = (GLsizei)getint(harg2148);
  here2140 = hcdr(here2140);
  yeah* harg2149 = hcar(here2140);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2149);
  here2140 = hcdr(here2140);
  A(isnil(here2140));
  glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
  return Nil;
}
yeah* foop_glCompressedTexSubImage3D(yeah* arg2150) {
  yeah* here2151 = arg2150;
  yeah* harg2152 = hcar(here2151);
  GLenum target = (GLenum)getint(harg2152);
  here2151 = hcdr(here2151);
  yeah* harg2153 = hcar(here2151);
  GLint level = (GLint)getint(harg2153);
  here2151 = hcdr(here2151);
  yeah* harg2154 = hcar(here2151);
  GLint xoffset = (GLint)getint(harg2154);
  here2151 = hcdr(here2151);
  yeah* harg2155 = hcar(here2151);
  GLint yoffset = (GLint)getint(harg2155);
  here2151 = hcdr(here2151);
  yeah* harg2156 = hcar(here2151);
  GLint zoffset = (GLint)getint(harg2156);
  here2151 = hcdr(here2151);
  yeah* harg2157 = hcar(here2151);
  GLsizei width = (GLsizei)getint(harg2157);
  here2151 = hcdr(here2151);
  yeah* harg2158 = hcar(here2151);
  GLsizei height = (GLsizei)getint(harg2158);
  here2151 = hcdr(here2151);
  yeah* harg2159 = hcar(here2151);
  GLsizei depth = (GLsizei)getint(harg2159);
  here2151 = hcdr(here2151);
  yeah* harg2160 = hcar(here2151);
  GLenum format = (GLenum)getint(harg2160);
  here2151 = hcdr(here2151);
  yeah* harg2161 = hcar(here2151);
  GLsizei imageSize = (GLsizei)getint(harg2161);
  here2151 = hcdr(here2151);
  yeah* harg2162 = hcar(here2151);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2162);
  here2151 = hcdr(here2151);
  A(isnil(here2151));
  glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
  return Nil;
}
yeah* foop_glCompressedTexImage1D(yeah* arg2163) {
  yeah* here2164 = arg2163;
  yeah* harg2165 = hcar(here2164);
  GLenum target = (GLenum)getint(harg2165);
  here2164 = hcdr(here2164);
  yeah* harg2166 = hcar(here2164);
  GLint level = (GLint)getint(harg2166);
  here2164 = hcdr(here2164);
  yeah* harg2167 = hcar(here2164);
  GLenum internalformat = (GLenum)getint(harg2167);
  here2164 = hcdr(here2164);
  yeah* harg2168 = hcar(here2164);
  GLsizei width = (GLsizei)getint(harg2168);
  here2164 = hcdr(here2164);
  yeah* harg2169 = hcar(here2164);
  GLint border = (GLint)getint(harg2169);
  here2164 = hcdr(here2164);
  yeah* harg2170 = hcar(here2164);
  GLsizei imageSize = (GLsizei)getint(harg2170);
  here2164 = hcdr(here2164);
  yeah* harg2171 = hcar(here2164);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2171);
  here2164 = hcdr(here2164);
  A(isnil(here2164));
  glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
  return Nil;
}
yeah* foop_glCompressedTexImage2D(yeah* arg2172) {
  yeah* here2173 = arg2172;
  yeah* harg2174 = hcar(here2173);
  GLenum target = (GLenum)getint(harg2174);
  here2173 = hcdr(here2173);
  yeah* harg2175 = hcar(here2173);
  GLint level = (GLint)getint(harg2175);
  here2173 = hcdr(here2173);
  yeah* harg2176 = hcar(here2173);
  GLenum internalformat = (GLenum)getint(harg2176);
  here2173 = hcdr(here2173);
  yeah* harg2177 = hcar(here2173);
  GLsizei width = (GLsizei)getint(harg2177);
  here2173 = hcdr(here2173);
  yeah* harg2178 = hcar(here2173);
  GLsizei height = (GLsizei)getint(harg2178);
  here2173 = hcdr(here2173);
  yeah* harg2179 = hcar(here2173);
  GLint border = (GLint)getint(harg2179);
  here2173 = hcdr(here2173);
  yeah* harg2180 = hcar(here2173);
  GLsizei imageSize = (GLsizei)getint(harg2180);
  here2173 = hcdr(here2173);
  yeah* harg2181 = hcar(here2173);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2181);
  here2173 = hcdr(here2173);
  A(isnil(here2173));
  glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
  return Nil;
}
yeah* foop_glCompressedTexImage3D(yeah* arg2182) {
  yeah* here2183 = arg2182;
  yeah* harg2184 = hcar(here2183);
  GLenum target = (GLenum)getint(harg2184);
  here2183 = hcdr(here2183);
  yeah* harg2185 = hcar(here2183);
  GLint level = (GLint)getint(harg2185);
  here2183 = hcdr(here2183);
  yeah* harg2186 = hcar(here2183);
  GLenum internalformat = (GLenum)getint(harg2186);
  here2183 = hcdr(here2183);
  yeah* harg2187 = hcar(here2183);
  GLsizei width = (GLsizei)getint(harg2187);
  here2183 = hcdr(here2183);
  yeah* harg2188 = hcar(here2183);
  GLsizei height = (GLsizei)getint(harg2188);
  here2183 = hcdr(here2183);
  yeah* harg2189 = hcar(here2183);
  GLsizei depth = (GLsizei)getint(harg2189);
  here2183 = hcdr(here2183);
  yeah* harg2190 = hcar(here2183);
  GLint border = (GLint)getint(harg2190);
  here2183 = hcdr(here2183);
  yeah* harg2191 = hcar(here2183);
  GLsizei imageSize = (GLsizei)getint(harg2191);
  here2183 = hcdr(here2183);
  yeah* harg2192 = hcar(here2183);
  const GLvoid* data = (const GLvoid*)opaqueval(harg2192);
  here2183 = hcdr(here2183);
  A(isnil(here2183));
  glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
  return Nil;
}
yeah* foop_glMultTransposeMatrixd(yeah* arg2193) {
  yeah* here2194 = arg2193;
  yeah* harg2195 = hcar(here2194);
  const GLdouble* m = (const GLdouble*)opaqueval(harg2195);
  here2194 = hcdr(here2194);
  A(isnil(here2194));
  glMultTransposeMatrixd(m);
  return Nil;
}
yeah* foop_glMultTransposeMatrixf(yeah* arg2196) {
  yeah* here2197 = arg2196;
  yeah* harg2198 = hcar(here2197);
  const GLfloat* m = (const GLfloat*)opaqueval(harg2198);
  here2197 = hcdr(here2197);
  A(isnil(here2197));
  glMultTransposeMatrixf(m);
  return Nil;
}
yeah* foop_glLoadTransposeMatrixd(yeah* arg2199) {
  yeah* here2200 = arg2199;
  yeah* harg2201 = hcar(here2200);
  const GLdouble* m = (const GLdouble*)opaqueval(harg2201);
  here2200 = hcdr(here2200);
  A(isnil(here2200));
  glLoadTransposeMatrixd(m);
  return Nil;
}
yeah* foop_glLoadTransposeMatrixf(yeah* arg2202) {
  yeah* here2203 = arg2202;
  yeah* harg2204 = hcar(here2203);
  const GLfloat* m = (const GLfloat*)opaqueval(harg2204);
  here2203 = hcdr(here2203);
  A(isnil(here2203));
  glLoadTransposeMatrixf(m);
  return Nil;
}
yeah* foop_glSamplePass(yeah* arg2205) {
  yeah* here2206 = arg2205;
  yeah* harg2207 = hcar(here2206);
  GLenum pass = (GLenum)getint(harg2207);
  here2206 = hcdr(here2206);
  A(isnil(here2206));
  glSamplePass(pass);
  return Nil;
}
yeah* foop_glSampleCoverage(yeah* arg2208) {
  yeah* here2209 = arg2208;
  yeah* harg2210 = hcar(here2209);
  GLclampf value = (GLclampf)getfloatcvt(harg2210);
  here2209 = hcdr(here2209);
  yeah* harg2211 = hcar(here2209);
  int invert = (int)getint(harg2211);
  here2209 = hcdr(here2209);
  A(isnil(here2209));
  glSampleCoverage(value, invert);
  return Nil;
}
yeah* foop_glViewport(yeah* arg2212) {
  yeah* here2213 = arg2212;
  yeah* harg2214 = hcar(here2213);
  GLint x = (GLint)getint(harg2214);
  here2213 = hcdr(here2213);
  yeah* harg2215 = hcar(here2213);
  GLint y = (GLint)getint(harg2215);
  here2213 = hcdr(here2213);
  yeah* harg2216 = hcar(here2213);
  GLsizei width = (GLsizei)getint(harg2216);
  here2213 = hcdr(here2213);
  yeah* harg2217 = hcar(here2213);
  GLsizei height = (GLsizei)getint(harg2217);
  here2213 = hcdr(here2213);
  A(isnil(here2213));
  glViewport(x, y, width, height);
  return Nil;
}
yeah* foop_glVertexPointer(yeah* arg2218) {
  yeah* here2219 = arg2218;
  yeah* harg2220 = hcar(here2219);
  GLint size = (GLint)getint(harg2220);
  here2219 = hcdr(here2219);
  yeah* harg2221 = hcar(here2219);
  GLenum type = (GLenum)getint(harg2221);
  here2219 = hcdr(here2219);
  yeah* harg2222 = hcar(here2219);
  GLsizei stride = (GLsizei)getint(harg2222);
  here2219 = hcdr(here2219);
  yeah* harg2223 = hcar(here2219);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg2223);
  here2219 = hcdr(here2219);
  A(isnil(here2219));
  glVertexPointer(size, type, stride, pointer);
  return Nil;
}
yeah* foop_glVertex4sv(yeah* arg2224) {
  yeah* here2225 = arg2224;
  yeah* harg2226 = hcar(here2225);
  const GLshort* v = (const GLshort*)opaqueval(harg2226);
  here2225 = hcdr(here2225);
  A(isnil(here2225));
  glVertex4sv(v);
  return Nil;
}
yeah* foop_glVertex4s(yeah* arg2227) {
  yeah* here2228 = arg2227;
  yeah* harg2229 = hcar(here2228);
  int x = (int)getint(harg2229);
  here2228 = hcdr(here2228);
  yeah* harg2230 = hcar(here2228);
  int y = (int)getint(harg2230);
  here2228 = hcdr(here2228);
  yeah* harg2231 = hcar(here2228);
  int z = (int)getint(harg2231);
  here2228 = hcdr(here2228);
  yeah* harg2232 = hcar(here2228);
  int w = (int)getint(harg2232);
  here2228 = hcdr(here2228);
  A(isnil(here2228));
  glVertex4s(x, y, z, w);
  return Nil;
}
yeah* foop_glVertex4iv(yeah* arg2233) {
  yeah* here2234 = arg2233;
  yeah* harg2235 = hcar(here2234);
  const GLint* v = (const GLint*)opaqueval(harg2235);
  here2234 = hcdr(here2234);
  A(isnil(here2234));
  glVertex4iv(v);
  return Nil;
}
yeah* foop_glVertex4i(yeah* arg2236) {
  yeah* here2237 = arg2236;
  yeah* harg2238 = hcar(here2237);
  GLint x = (GLint)getint(harg2238);
  here2237 = hcdr(here2237);
  yeah* harg2239 = hcar(here2237);
  GLint y = (GLint)getint(harg2239);
  here2237 = hcdr(here2237);
  yeah* harg2240 = hcar(here2237);
  GLint z = (GLint)getint(harg2240);
  here2237 = hcdr(here2237);
  yeah* harg2241 = hcar(here2237);
  GLint w = (GLint)getint(harg2241);
  here2237 = hcdr(here2237);
  A(isnil(here2237));
  glVertex4i(x, y, z, w);
  return Nil;
}
yeah* foop_glVertex4fv(yeah* arg2242) {
  yeah* here2243 = arg2242;
  yeah* harg2244 = hcar(here2243);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2244);
  here2243 = hcdr(here2243);
  A(isnil(here2243));
  glVertex4fv(v);
  return Nil;
}
yeah* foop_glVertex4f(yeah* arg2245) {
  yeah* here2246 = arg2245;
  yeah* harg2247 = hcar(here2246);
  GLfloat x = (GLfloat)getfloatcvt(harg2247);
  here2246 = hcdr(here2246);
  yeah* harg2248 = hcar(here2246);
  GLfloat y = (GLfloat)getfloatcvt(harg2248);
  here2246 = hcdr(here2246);
  yeah* harg2249 = hcar(here2246);
  GLfloat z = (GLfloat)getfloatcvt(harg2249);
  here2246 = hcdr(here2246);
  yeah* harg2250 = hcar(here2246);
  GLfloat w = (GLfloat)getfloatcvt(harg2250);
  here2246 = hcdr(here2246);
  A(isnil(here2246));
  glVertex4f(x, y, z, w);
  return Nil;
}
yeah* foop_glVertex4dv(yeah* arg2251) {
  yeah* here2252 = arg2251;
  yeah* harg2253 = hcar(here2252);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2253);
  here2252 = hcdr(here2252);
  A(isnil(here2252));
  glVertex4dv(v);
  return Nil;
}
yeah* foop_glVertex4d(yeah* arg2254) {
  yeah* here2255 = arg2254;
  yeah* harg2256 = hcar(here2255);
  GLdouble x = (GLdouble)getfloatcvt(harg2256);
  here2255 = hcdr(here2255);
  yeah* harg2257 = hcar(here2255);
  GLdouble y = (GLdouble)getfloatcvt(harg2257);
  here2255 = hcdr(here2255);
  yeah* harg2258 = hcar(here2255);
  GLdouble z = (GLdouble)getfloatcvt(harg2258);
  here2255 = hcdr(here2255);
  yeah* harg2259 = hcar(here2255);
  GLdouble w = (GLdouble)getfloatcvt(harg2259);
  here2255 = hcdr(here2255);
  A(isnil(here2255));
  glVertex4d(x, y, z, w);
  return Nil;
}
yeah* foop_glVertex3sv(yeah* arg2260) {
  yeah* here2261 = arg2260;
  yeah* harg2262 = hcar(here2261);
  const GLshort* v = (const GLshort*)opaqueval(harg2262);
  here2261 = hcdr(here2261);
  A(isnil(here2261));
  glVertex3sv(v);
  return Nil;
}
yeah* foop_glVertex3s(yeah* arg2263) {
  yeah* here2264 = arg2263;
  yeah* harg2265 = hcar(here2264);
  int x = (int)getint(harg2265);
  here2264 = hcdr(here2264);
  yeah* harg2266 = hcar(here2264);
  int y = (int)getint(harg2266);
  here2264 = hcdr(here2264);
  yeah* harg2267 = hcar(here2264);
  int z = (int)getint(harg2267);
  here2264 = hcdr(here2264);
  A(isnil(here2264));
  glVertex3s(x, y, z);
  return Nil;
}
yeah* foop_glVertex3iv(yeah* arg2268) {
  yeah* here2269 = arg2268;
  yeah* harg2270 = hcar(here2269);
  const GLint* v = (const GLint*)opaqueval(harg2270);
  here2269 = hcdr(here2269);
  A(isnil(here2269));
  glVertex3iv(v);
  return Nil;
}
yeah* foop_glVertex3i(yeah* arg2271) {
  yeah* here2272 = arg2271;
  yeah* harg2273 = hcar(here2272);
  GLint x = (GLint)getint(harg2273);
  here2272 = hcdr(here2272);
  yeah* harg2274 = hcar(here2272);
  GLint y = (GLint)getint(harg2274);
  here2272 = hcdr(here2272);
  yeah* harg2275 = hcar(here2272);
  GLint z = (GLint)getint(harg2275);
  here2272 = hcdr(here2272);
  A(isnil(here2272));
  glVertex3i(x, y, z);
  return Nil;
}
yeah* foop_glVertex3fv(yeah* arg2276) {
  yeah* here2277 = arg2276;
  yeah* harg2278 = hcar(here2277);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2278);
  here2277 = hcdr(here2277);
  A(isnil(here2277));
  glVertex3fv(v);
  return Nil;
}
yeah* foop_glVertex3f(yeah* arg2279) {
  yeah* here2280 = arg2279;
  yeah* harg2281 = hcar(here2280);
  GLfloat x = (GLfloat)getfloatcvt(harg2281);
  here2280 = hcdr(here2280);
  yeah* harg2282 = hcar(here2280);
  GLfloat y = (GLfloat)getfloatcvt(harg2282);
  here2280 = hcdr(here2280);
  yeah* harg2283 = hcar(here2280);
  GLfloat z = (GLfloat)getfloatcvt(harg2283);
  here2280 = hcdr(here2280);
  A(isnil(here2280));
  glVertex3f(x, y, z);
  return Nil;
}
yeah* foop_glVertex3dv(yeah* arg2284) {
  yeah* here2285 = arg2284;
  yeah* harg2286 = hcar(here2285);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2286);
  here2285 = hcdr(here2285);
  A(isnil(here2285));
  glVertex3dv(v);
  return Nil;
}
yeah* foop_glVertex3d(yeah* arg2287) {
  yeah* here2288 = arg2287;
  yeah* harg2289 = hcar(here2288);
  GLdouble x = (GLdouble)getfloatcvt(harg2289);
  here2288 = hcdr(here2288);
  yeah* harg2290 = hcar(here2288);
  GLdouble y = (GLdouble)getfloatcvt(harg2290);
  here2288 = hcdr(here2288);
  yeah* harg2291 = hcar(here2288);
  GLdouble z = (GLdouble)getfloatcvt(harg2291);
  here2288 = hcdr(here2288);
  A(isnil(here2288));
  glVertex3d(x, y, z);
  return Nil;
}
yeah* foop_glVertex2sv(yeah* arg2292) {
  yeah* here2293 = arg2292;
  yeah* harg2294 = hcar(here2293);
  const GLshort* v = (const GLshort*)opaqueval(harg2294);
  here2293 = hcdr(here2293);
  A(isnil(here2293));
  glVertex2sv(v);
  return Nil;
}
yeah* foop_glVertex2s(yeah* arg2295) {
  yeah* here2296 = arg2295;
  yeah* harg2297 = hcar(here2296);
  int x = (int)getint(harg2297);
  here2296 = hcdr(here2296);
  yeah* harg2298 = hcar(here2296);
  int y = (int)getint(harg2298);
  here2296 = hcdr(here2296);
  A(isnil(here2296));
  glVertex2s(x, y);
  return Nil;
}
yeah* foop_glVertex2iv(yeah* arg2299) {
  yeah* here2300 = arg2299;
  yeah* harg2301 = hcar(here2300);
  const GLint* v = (const GLint*)opaqueval(harg2301);
  here2300 = hcdr(here2300);
  A(isnil(here2300));
  glVertex2iv(v);
  return Nil;
}
yeah* foop_glVertex2i(yeah* arg2302) {
  yeah* here2303 = arg2302;
  yeah* harg2304 = hcar(here2303);
  GLint x = (GLint)getint(harg2304);
  here2303 = hcdr(here2303);
  yeah* harg2305 = hcar(here2303);
  GLint y = (GLint)getint(harg2305);
  here2303 = hcdr(here2303);
  A(isnil(here2303));
  glVertex2i(x, y);
  return Nil;
}
yeah* foop_glVertex2fv(yeah* arg2306) {
  yeah* here2307 = arg2306;
  yeah* harg2308 = hcar(here2307);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2308);
  here2307 = hcdr(here2307);
  A(isnil(here2307));
  glVertex2fv(v);
  return Nil;
}
yeah* foop_glVertex2f(yeah* arg2309) {
  yeah* here2310 = arg2309;
  yeah* harg2311 = hcar(here2310);
  GLfloat x = (GLfloat)getfloatcvt(harg2311);
  here2310 = hcdr(here2310);
  yeah* harg2312 = hcar(here2310);
  GLfloat y = (GLfloat)getfloatcvt(harg2312);
  here2310 = hcdr(here2310);
  A(isnil(here2310));
  glVertex2f(x, y);
  return Nil;
}
yeah* foop_glVertex2dv(yeah* arg2313) {
  yeah* here2314 = arg2313;
  yeah* harg2315 = hcar(here2314);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2315);
  here2314 = hcdr(here2314);
  A(isnil(here2314));
  glVertex2dv(v);
  return Nil;
}
yeah* foop_glVertex2d(yeah* arg2316) {
  yeah* here2317 = arg2316;
  yeah* harg2318 = hcar(here2317);
  GLdouble x = (GLdouble)getfloatcvt(harg2318);
  here2317 = hcdr(here2317);
  yeah* harg2319 = hcar(here2317);
  GLdouble y = (GLdouble)getfloatcvt(harg2319);
  here2317 = hcdr(here2317);
  A(isnil(here2317));
  glVertex2d(x, y);
  return Nil;
}
yeah* foop_glTranslatef(yeah* arg2320) {
  yeah* here2321 = arg2320;
  yeah* harg2322 = hcar(here2321);
  GLfloat x = (GLfloat)getfloatcvt(harg2322);
  here2321 = hcdr(here2321);
  yeah* harg2323 = hcar(here2321);
  GLfloat y = (GLfloat)getfloatcvt(harg2323);
  here2321 = hcdr(here2321);
  yeah* harg2324 = hcar(here2321);
  GLfloat z = (GLfloat)getfloatcvt(harg2324);
  here2321 = hcdr(here2321);
  A(isnil(here2321));
  glTranslatef(x, y, z);
  return Nil;
}
yeah* foop_glTranslated(yeah* arg2325) {
  yeah* here2326 = arg2325;
  yeah* harg2327 = hcar(here2326);
  GLdouble x = (GLdouble)getfloatcvt(harg2327);
  here2326 = hcdr(here2326);
  yeah* harg2328 = hcar(here2326);
  GLdouble y = (GLdouble)getfloatcvt(harg2328);
  here2326 = hcdr(here2326);
  yeah* harg2329 = hcar(here2326);
  GLdouble z = (GLdouble)getfloatcvt(harg2329);
  here2326 = hcdr(here2326);
  A(isnil(here2326));
  glTranslated(x, y, z);
  return Nil;
}
yeah* foop_glTexSubImage3D(yeah* arg2330) {
  yeah* here2331 = arg2330;
  yeah* harg2332 = hcar(here2331);
  GLenum target = (GLenum)getint(harg2332);
  here2331 = hcdr(here2331);
  yeah* harg2333 = hcar(here2331);
  GLint level = (GLint)getint(harg2333);
  here2331 = hcdr(here2331);
  yeah* harg2334 = hcar(here2331);
  GLint xoffset = (GLint)getint(harg2334);
  here2331 = hcdr(here2331);
  yeah* harg2335 = hcar(here2331);
  GLint yoffset = (GLint)getint(harg2335);
  here2331 = hcdr(here2331);
  yeah* harg2336 = hcar(here2331);
  GLint zoffset = (GLint)getint(harg2336);
  here2331 = hcdr(here2331);
  yeah* harg2337 = hcar(here2331);
  GLsizei width = (GLsizei)getint(harg2337);
  here2331 = hcdr(here2331);
  yeah* harg2338 = hcar(here2331);
  GLsizei height = (GLsizei)getint(harg2338);
  here2331 = hcdr(here2331);
  yeah* harg2339 = hcar(here2331);
  GLsizei depth = (GLsizei)getint(harg2339);
  here2331 = hcdr(here2331);
  yeah* harg2340 = hcar(here2331);
  GLenum format = (GLenum)getint(harg2340);
  here2331 = hcdr(here2331);
  yeah* harg2341 = hcar(here2331);
  GLenum type = (GLenum)getint(harg2341);
  here2331 = hcdr(here2331);
  yeah* harg2342 = hcar(here2331);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2342);
  here2331 = hcdr(here2331);
  A(isnil(here2331));
  glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
  return Nil;
}
yeah* foop_glTexSubImage2D(yeah* arg2343) {
  yeah* here2344 = arg2343;
  yeah* harg2345 = hcar(here2344);
  GLenum target = (GLenum)getint(harg2345);
  here2344 = hcdr(here2344);
  yeah* harg2346 = hcar(here2344);
  GLint level = (GLint)getint(harg2346);
  here2344 = hcdr(here2344);
  yeah* harg2347 = hcar(here2344);
  GLint xoffset = (GLint)getint(harg2347);
  here2344 = hcdr(here2344);
  yeah* harg2348 = hcar(here2344);
  GLint yoffset = (GLint)getint(harg2348);
  here2344 = hcdr(here2344);
  yeah* harg2349 = hcar(here2344);
  GLsizei width = (GLsizei)getint(harg2349);
  here2344 = hcdr(here2344);
  yeah* harg2350 = hcar(here2344);
  GLsizei height = (GLsizei)getint(harg2350);
  here2344 = hcdr(here2344);
  yeah* harg2351 = hcar(here2344);
  GLenum format = (GLenum)getint(harg2351);
  here2344 = hcdr(here2344);
  yeah* harg2352 = hcar(here2344);
  GLenum type = (GLenum)getint(harg2352);
  here2344 = hcdr(here2344);
  yeah* harg2353 = hcar(here2344);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2353);
  here2344 = hcdr(here2344);
  A(isnil(here2344));
  glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
  return Nil;
}
yeah* foop_glTexSubImage1D(yeah* arg2354) {
  yeah* here2355 = arg2354;
  yeah* harg2356 = hcar(here2355);
  GLenum target = (GLenum)getint(harg2356);
  here2355 = hcdr(here2355);
  yeah* harg2357 = hcar(here2355);
  GLint level = (GLint)getint(harg2357);
  here2355 = hcdr(here2355);
  yeah* harg2358 = hcar(here2355);
  GLint xoffset = (GLint)getint(harg2358);
  here2355 = hcdr(here2355);
  yeah* harg2359 = hcar(here2355);
  GLsizei width = (GLsizei)getint(harg2359);
  here2355 = hcdr(here2355);
  yeah* harg2360 = hcar(here2355);
  GLenum format = (GLenum)getint(harg2360);
  here2355 = hcdr(here2355);
  yeah* harg2361 = hcar(here2355);
  GLenum type = (GLenum)getint(harg2361);
  here2355 = hcdr(here2355);
  yeah* harg2362 = hcar(here2355);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2362);
  here2355 = hcdr(here2355);
  A(isnil(here2355));
  glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
  return Nil;
}
yeah* foop_glTexParameteriv(yeah* arg2363) {
  yeah* here2364 = arg2363;
  yeah* harg2365 = hcar(here2364);
  GLenum target = (GLenum)getint(harg2365);
  here2364 = hcdr(here2364);
  yeah* harg2366 = hcar(here2364);
  GLenum pname = (GLenum)getint(harg2366);
  here2364 = hcdr(here2364);
  yeah* harg2367 = hcar(here2364);
  const GLint* params = (const GLint*)opaqueval(harg2367);
  here2364 = hcdr(here2364);
  A(isnil(here2364));
  glTexParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glTexParameteri(yeah* arg2368) {
  yeah* here2369 = arg2368;
  yeah* harg2370 = hcar(here2369);
  GLenum target = (GLenum)getint(harg2370);
  here2369 = hcdr(here2369);
  yeah* harg2371 = hcar(here2369);
  GLenum pname = (GLenum)getint(harg2371);
  here2369 = hcdr(here2369);
  yeah* harg2372 = hcar(here2369);
  GLint param = (GLint)getint(harg2372);
  here2369 = hcdr(here2369);
  A(isnil(here2369));
  glTexParameteri(target, pname, param);
  return Nil;
}
yeah* foop_glTexParameterfv(yeah* arg2373) {
  yeah* here2374 = arg2373;
  yeah* harg2375 = hcar(here2374);
  GLenum target = (GLenum)getint(harg2375);
  here2374 = hcdr(here2374);
  yeah* harg2376 = hcar(here2374);
  GLenum pname = (GLenum)getint(harg2376);
  here2374 = hcdr(here2374);
  yeah* harg2377 = hcar(here2374);
  const GLfloat* params = (const GLfloat*)opaqueval(harg2377);
  here2374 = hcdr(here2374);
  A(isnil(here2374));
  glTexParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glTexParameterf(yeah* arg2378) {
  yeah* here2379 = arg2378;
  yeah* harg2380 = hcar(here2379);
  GLenum target = (GLenum)getint(harg2380);
  here2379 = hcdr(here2379);
  yeah* harg2381 = hcar(here2379);
  GLenum pname = (GLenum)getint(harg2381);
  here2379 = hcdr(here2379);
  yeah* harg2382 = hcar(here2379);
  GLfloat param = (GLfloat)getfloatcvt(harg2382);
  here2379 = hcdr(here2379);
  A(isnil(here2379));
  glTexParameterf(target, pname, param);
  return Nil;
}
yeah* foop_glTexImage3D(yeah* arg2383) {
  yeah* here2384 = arg2383;
  yeah* harg2385 = hcar(here2384);
  GLenum target = (GLenum)getint(harg2385);
  here2384 = hcdr(here2384);
  yeah* harg2386 = hcar(here2384);
  GLint level = (GLint)getint(harg2386);
  here2384 = hcdr(here2384);
  yeah* harg2387 = hcar(here2384);
  GLenum internalformat = (GLenum)getint(harg2387);
  here2384 = hcdr(here2384);
  yeah* harg2388 = hcar(here2384);
  GLsizei width = (GLsizei)getint(harg2388);
  here2384 = hcdr(here2384);
  yeah* harg2389 = hcar(here2384);
  GLsizei height = (GLsizei)getint(harg2389);
  here2384 = hcdr(here2384);
  yeah* harg2390 = hcar(here2384);
  GLsizei depth = (GLsizei)getint(harg2390);
  here2384 = hcdr(here2384);
  yeah* harg2391 = hcar(here2384);
  GLint border = (GLint)getint(harg2391);
  here2384 = hcdr(here2384);
  yeah* harg2392 = hcar(here2384);
  GLenum format = (GLenum)getint(harg2392);
  here2384 = hcdr(here2384);
  yeah* harg2393 = hcar(here2384);
  GLenum type = (GLenum)getint(harg2393);
  here2384 = hcdr(here2384);
  yeah* harg2394 = hcar(here2384);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2394);
  here2384 = hcdr(here2384);
  A(isnil(here2384));
  glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
  return Nil;
}
yeah* foop_glTexImage2D(yeah* arg2395) {
  yeah* here2396 = arg2395;
  yeah* harg2397 = hcar(here2396);
  GLenum target = (GLenum)getint(harg2397);
  here2396 = hcdr(here2396);
  yeah* harg2398 = hcar(here2396);
  GLint level = (GLint)getint(harg2398);
  here2396 = hcdr(here2396);
  yeah* harg2399 = hcar(here2396);
  GLenum internalformat = (GLenum)getint(harg2399);
  here2396 = hcdr(here2396);
  yeah* harg2400 = hcar(here2396);
  GLsizei width = (GLsizei)getint(harg2400);
  here2396 = hcdr(here2396);
  yeah* harg2401 = hcar(here2396);
  GLsizei height = (GLsizei)getint(harg2401);
  here2396 = hcdr(here2396);
  yeah* harg2402 = hcar(here2396);
  GLint border = (GLint)getint(harg2402);
  here2396 = hcdr(here2396);
  yeah* harg2403 = hcar(here2396);
  GLenum format = (GLenum)getint(harg2403);
  here2396 = hcdr(here2396);
  yeah* harg2404 = hcar(here2396);
  GLenum type = (GLenum)getint(harg2404);
  here2396 = hcdr(here2396);
  yeah* harg2405 = hcar(here2396);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2405);
  here2396 = hcdr(here2396);
  A(isnil(here2396));
  glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
  return Nil;
}
yeah* foop_glTexImage1D(yeah* arg2406) {
  yeah* here2407 = arg2406;
  yeah* harg2408 = hcar(here2407);
  GLenum target = (GLenum)getint(harg2408);
  here2407 = hcdr(here2407);
  yeah* harg2409 = hcar(here2407);
  GLint level = (GLint)getint(harg2409);
  here2407 = hcdr(here2407);
  yeah* harg2410 = hcar(here2407);
  GLenum internalformat = (GLenum)getint(harg2410);
  here2407 = hcdr(here2407);
  yeah* harg2411 = hcar(here2407);
  GLsizei width = (GLsizei)getint(harg2411);
  here2407 = hcdr(here2407);
  yeah* harg2412 = hcar(here2407);
  GLint border = (GLint)getint(harg2412);
  here2407 = hcdr(here2407);
  yeah* harg2413 = hcar(here2407);
  GLenum format = (GLenum)getint(harg2413);
  here2407 = hcdr(here2407);
  yeah* harg2414 = hcar(here2407);
  GLenum type = (GLenum)getint(harg2414);
  here2407 = hcdr(here2407);
  yeah* harg2415 = hcar(here2407);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg2415);
  here2407 = hcdr(here2407);
  A(isnil(here2407));
  glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
  return Nil;
}
yeah* foop_glTexGeniv(yeah* arg2416) {
  yeah* here2417 = arg2416;
  yeah* harg2418 = hcar(here2417);
  GLenum coord = (GLenum)getint(harg2418);
  here2417 = hcdr(here2417);
  yeah* harg2419 = hcar(here2417);
  GLenum pname = (GLenum)getint(harg2419);
  here2417 = hcdr(here2417);
  yeah* harg2420 = hcar(here2417);
  const GLint* params = (const GLint*)opaqueval(harg2420);
  here2417 = hcdr(here2417);
  A(isnil(here2417));
  glTexGeniv(coord, pname, params);
  return Nil;
}
yeah* foop_glTexGeni(yeah* arg2421) {
  yeah* here2422 = arg2421;
  yeah* harg2423 = hcar(here2422);
  GLenum coord = (GLenum)getint(harg2423);
  here2422 = hcdr(here2422);
  yeah* harg2424 = hcar(here2422);
  GLenum pname = (GLenum)getint(harg2424);
  here2422 = hcdr(here2422);
  yeah* harg2425 = hcar(here2422);
  GLint param = (GLint)getint(harg2425);
  here2422 = hcdr(here2422);
  A(isnil(here2422));
  glTexGeni(coord, pname, param);
  return Nil;
}
yeah* foop_glTexGenfv(yeah* arg2426) {
  yeah* here2427 = arg2426;
  yeah* harg2428 = hcar(here2427);
  GLenum coord = (GLenum)getint(harg2428);
  here2427 = hcdr(here2427);
  yeah* harg2429 = hcar(here2427);
  GLenum pname = (GLenum)getint(harg2429);
  here2427 = hcdr(here2427);
  yeah* harg2430 = hcar(here2427);
  const GLfloat* params = (const GLfloat*)opaqueval(harg2430);
  here2427 = hcdr(here2427);
  A(isnil(here2427));
  glTexGenfv(coord, pname, params);
  return Nil;
}
yeah* foop_glTexGenf(yeah* arg2431) {
  yeah* here2432 = arg2431;
  yeah* harg2433 = hcar(here2432);
  GLenum coord = (GLenum)getint(harg2433);
  here2432 = hcdr(here2432);
  yeah* harg2434 = hcar(here2432);
  GLenum pname = (GLenum)getint(harg2434);
  here2432 = hcdr(here2432);
  yeah* harg2435 = hcar(here2432);
  GLfloat param = (GLfloat)getfloatcvt(harg2435);
  here2432 = hcdr(here2432);
  A(isnil(here2432));
  glTexGenf(coord, pname, param);
  return Nil;
}
yeah* foop_glTexGendv(yeah* arg2436) {
  yeah* here2437 = arg2436;
  yeah* harg2438 = hcar(here2437);
  GLenum coord = (GLenum)getint(harg2438);
  here2437 = hcdr(here2437);
  yeah* harg2439 = hcar(here2437);
  GLenum pname = (GLenum)getint(harg2439);
  here2437 = hcdr(here2437);
  yeah* harg2440 = hcar(here2437);
  const GLdouble* params = (const GLdouble*)opaqueval(harg2440);
  here2437 = hcdr(here2437);
  A(isnil(here2437));
  glTexGendv(coord, pname, params);
  return Nil;
}
yeah* foop_glTexGend(yeah* arg2441) {
  yeah* here2442 = arg2441;
  yeah* harg2443 = hcar(here2442);
  GLenum coord = (GLenum)getint(harg2443);
  here2442 = hcdr(here2442);
  yeah* harg2444 = hcar(here2442);
  GLenum pname = (GLenum)getint(harg2444);
  here2442 = hcdr(here2442);
  yeah* harg2445 = hcar(here2442);
  GLdouble param = (GLdouble)getfloatcvt(harg2445);
  here2442 = hcdr(here2442);
  A(isnil(here2442));
  glTexGend(coord, pname, param);
  return Nil;
}
yeah* foop_glTexEnviv(yeah* arg2446) {
  yeah* here2447 = arg2446;
  yeah* harg2448 = hcar(here2447);
  GLenum target = (GLenum)getint(harg2448);
  here2447 = hcdr(here2447);
  yeah* harg2449 = hcar(here2447);
  GLenum pname = (GLenum)getint(harg2449);
  here2447 = hcdr(here2447);
  yeah* harg2450 = hcar(here2447);
  const GLint* params = (const GLint*)opaqueval(harg2450);
  here2447 = hcdr(here2447);
  A(isnil(here2447));
  glTexEnviv(target, pname, params);
  return Nil;
}
yeah* foop_glTexEnvi(yeah* arg2451) {
  yeah* here2452 = arg2451;
  yeah* harg2453 = hcar(here2452);
  GLenum target = (GLenum)getint(harg2453);
  here2452 = hcdr(here2452);
  yeah* harg2454 = hcar(here2452);
  GLenum pname = (GLenum)getint(harg2454);
  here2452 = hcdr(here2452);
  yeah* harg2455 = hcar(here2452);
  GLint param = (GLint)getint(harg2455);
  here2452 = hcdr(here2452);
  A(isnil(here2452));
  glTexEnvi(target, pname, param);
  return Nil;
}
yeah* foop_glTexEnvfv(yeah* arg2456) {
  yeah* here2457 = arg2456;
  yeah* harg2458 = hcar(here2457);
  GLenum target = (GLenum)getint(harg2458);
  here2457 = hcdr(here2457);
  yeah* harg2459 = hcar(here2457);
  GLenum pname = (GLenum)getint(harg2459);
  here2457 = hcdr(here2457);
  yeah* harg2460 = hcar(here2457);
  const GLfloat* params = (const GLfloat*)opaqueval(harg2460);
  here2457 = hcdr(here2457);
  A(isnil(here2457));
  glTexEnvfv(target, pname, params);
  return Nil;
}
yeah* foop_glTexEnvf(yeah* arg2461) {
  yeah* here2462 = arg2461;
  yeah* harg2463 = hcar(here2462);
  GLenum target = (GLenum)getint(harg2463);
  here2462 = hcdr(here2462);
  yeah* harg2464 = hcar(here2462);
  GLenum pname = (GLenum)getint(harg2464);
  here2462 = hcdr(here2462);
  yeah* harg2465 = hcar(here2462);
  GLfloat param = (GLfloat)getfloatcvt(harg2465);
  here2462 = hcdr(here2462);
  A(isnil(here2462));
  glTexEnvf(target, pname, param);
  return Nil;
}
yeah* foop_glTexCoordPointer(yeah* arg2466) {
  yeah* here2467 = arg2466;
  yeah* harg2468 = hcar(here2467);
  GLint size = (GLint)getint(harg2468);
  here2467 = hcdr(here2467);
  yeah* harg2469 = hcar(here2467);
  GLenum type = (GLenum)getint(harg2469);
  here2467 = hcdr(here2467);
  yeah* harg2470 = hcar(here2467);
  GLsizei stride = (GLsizei)getint(harg2470);
  here2467 = hcdr(here2467);
  yeah* harg2471 = hcar(here2467);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg2471);
  here2467 = hcdr(here2467);
  A(isnil(here2467));
  glTexCoordPointer(size, type, stride, pointer);
  return Nil;
}
yeah* foop_glTexCoord4sv(yeah* arg2472) {
  yeah* here2473 = arg2472;
  yeah* harg2474 = hcar(here2473);
  const GLshort* v = (const GLshort*)opaqueval(harg2474);
  here2473 = hcdr(here2473);
  A(isnil(here2473));
  glTexCoord4sv(v);
  return Nil;
}
yeah* foop_glTexCoord4s(yeah* arg2475) {
  yeah* here2476 = arg2475;
  yeah* harg2477 = hcar(here2476);
  int s = (int)getint(harg2477);
  here2476 = hcdr(here2476);
  yeah* harg2478 = hcar(here2476);
  int t = (int)getint(harg2478);
  here2476 = hcdr(here2476);
  yeah* harg2479 = hcar(here2476);
  int r = (int)getint(harg2479);
  here2476 = hcdr(here2476);
  yeah* harg2480 = hcar(here2476);
  int q = (int)getint(harg2480);
  here2476 = hcdr(here2476);
  A(isnil(here2476));
  glTexCoord4s(s, t, r, q);
  return Nil;
}
yeah* foop_glTexCoord4iv(yeah* arg2481) {
  yeah* here2482 = arg2481;
  yeah* harg2483 = hcar(here2482);
  const GLint* v = (const GLint*)opaqueval(harg2483);
  here2482 = hcdr(here2482);
  A(isnil(here2482));
  glTexCoord4iv(v);
  return Nil;
}
yeah* foop_glTexCoord4i(yeah* arg2484) {
  yeah* here2485 = arg2484;
  yeah* harg2486 = hcar(here2485);
  GLint s = (GLint)getint(harg2486);
  here2485 = hcdr(here2485);
  yeah* harg2487 = hcar(here2485);
  GLint t = (GLint)getint(harg2487);
  here2485 = hcdr(here2485);
  yeah* harg2488 = hcar(here2485);
  GLint r = (GLint)getint(harg2488);
  here2485 = hcdr(here2485);
  yeah* harg2489 = hcar(here2485);
  GLint q = (GLint)getint(harg2489);
  here2485 = hcdr(here2485);
  A(isnil(here2485));
  glTexCoord4i(s, t, r, q);
  return Nil;
}
yeah* foop_glTexCoord4fv(yeah* arg2490) {
  yeah* here2491 = arg2490;
  yeah* harg2492 = hcar(here2491);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2492);
  here2491 = hcdr(here2491);
  A(isnil(here2491));
  glTexCoord4fv(v);
  return Nil;
}
yeah* foop_glTexCoord4f(yeah* arg2493) {
  yeah* here2494 = arg2493;
  yeah* harg2495 = hcar(here2494);
  GLfloat s = (GLfloat)getfloatcvt(harg2495);
  here2494 = hcdr(here2494);
  yeah* harg2496 = hcar(here2494);
  GLfloat t = (GLfloat)getfloatcvt(harg2496);
  here2494 = hcdr(here2494);
  yeah* harg2497 = hcar(here2494);
  GLfloat r = (GLfloat)getfloatcvt(harg2497);
  here2494 = hcdr(here2494);
  yeah* harg2498 = hcar(here2494);
  GLfloat q = (GLfloat)getfloatcvt(harg2498);
  here2494 = hcdr(here2494);
  A(isnil(here2494));
  glTexCoord4f(s, t, r, q);
  return Nil;
}
yeah* foop_glTexCoord4dv(yeah* arg2499) {
  yeah* here2500 = arg2499;
  yeah* harg2501 = hcar(here2500);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2501);
  here2500 = hcdr(here2500);
  A(isnil(here2500));
  glTexCoord4dv(v);
  return Nil;
}
yeah* foop_glTexCoord4d(yeah* arg2502) {
  yeah* here2503 = arg2502;
  yeah* harg2504 = hcar(here2503);
  GLdouble s = (GLdouble)getfloatcvt(harg2504);
  here2503 = hcdr(here2503);
  yeah* harg2505 = hcar(here2503);
  GLdouble t = (GLdouble)getfloatcvt(harg2505);
  here2503 = hcdr(here2503);
  yeah* harg2506 = hcar(here2503);
  GLdouble r = (GLdouble)getfloatcvt(harg2506);
  here2503 = hcdr(here2503);
  yeah* harg2507 = hcar(here2503);
  GLdouble q = (GLdouble)getfloatcvt(harg2507);
  here2503 = hcdr(here2503);
  A(isnil(here2503));
  glTexCoord4d(s, t, r, q);
  return Nil;
}
yeah* foop_glTexCoord3sv(yeah* arg2508) {
  yeah* here2509 = arg2508;
  yeah* harg2510 = hcar(here2509);
  const GLshort* v = (const GLshort*)opaqueval(harg2510);
  here2509 = hcdr(here2509);
  A(isnil(here2509));
  glTexCoord3sv(v);
  return Nil;
}
yeah* foop_glTexCoord3s(yeah* arg2511) {
  yeah* here2512 = arg2511;
  yeah* harg2513 = hcar(here2512);
  int s = (int)getint(harg2513);
  here2512 = hcdr(here2512);
  yeah* harg2514 = hcar(here2512);
  int t = (int)getint(harg2514);
  here2512 = hcdr(here2512);
  yeah* harg2515 = hcar(here2512);
  int r = (int)getint(harg2515);
  here2512 = hcdr(here2512);
  A(isnil(here2512));
  glTexCoord3s(s, t, r);
  return Nil;
}
yeah* foop_glTexCoord3iv(yeah* arg2516) {
  yeah* here2517 = arg2516;
  yeah* harg2518 = hcar(here2517);
  const GLint* v = (const GLint*)opaqueval(harg2518);
  here2517 = hcdr(here2517);
  A(isnil(here2517));
  glTexCoord3iv(v);
  return Nil;
}
yeah* foop_glTexCoord3i(yeah* arg2519) {
  yeah* here2520 = arg2519;
  yeah* harg2521 = hcar(here2520);
  GLint s = (GLint)getint(harg2521);
  here2520 = hcdr(here2520);
  yeah* harg2522 = hcar(here2520);
  GLint t = (GLint)getint(harg2522);
  here2520 = hcdr(here2520);
  yeah* harg2523 = hcar(here2520);
  GLint r = (GLint)getint(harg2523);
  here2520 = hcdr(here2520);
  A(isnil(here2520));
  glTexCoord3i(s, t, r);
  return Nil;
}
yeah* foop_glTexCoord3fv(yeah* arg2524) {
  yeah* here2525 = arg2524;
  yeah* harg2526 = hcar(here2525);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2526);
  here2525 = hcdr(here2525);
  A(isnil(here2525));
  glTexCoord3fv(v);
  return Nil;
}
yeah* foop_glTexCoord3f(yeah* arg2527) {
  yeah* here2528 = arg2527;
  yeah* harg2529 = hcar(here2528);
  GLfloat s = (GLfloat)getfloatcvt(harg2529);
  here2528 = hcdr(here2528);
  yeah* harg2530 = hcar(here2528);
  GLfloat t = (GLfloat)getfloatcvt(harg2530);
  here2528 = hcdr(here2528);
  yeah* harg2531 = hcar(here2528);
  GLfloat r = (GLfloat)getfloatcvt(harg2531);
  here2528 = hcdr(here2528);
  A(isnil(here2528));
  glTexCoord3f(s, t, r);
  return Nil;
}
yeah* foop_glTexCoord3dv(yeah* arg2532) {
  yeah* here2533 = arg2532;
  yeah* harg2534 = hcar(here2533);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2534);
  here2533 = hcdr(here2533);
  A(isnil(here2533));
  glTexCoord3dv(v);
  return Nil;
}
yeah* foop_glTexCoord3d(yeah* arg2535) {
  yeah* here2536 = arg2535;
  yeah* harg2537 = hcar(here2536);
  GLdouble s = (GLdouble)getfloatcvt(harg2537);
  here2536 = hcdr(here2536);
  yeah* harg2538 = hcar(here2536);
  GLdouble t = (GLdouble)getfloatcvt(harg2538);
  here2536 = hcdr(here2536);
  yeah* harg2539 = hcar(here2536);
  GLdouble r = (GLdouble)getfloatcvt(harg2539);
  here2536 = hcdr(here2536);
  A(isnil(here2536));
  glTexCoord3d(s, t, r);
  return Nil;
}
yeah* foop_glTexCoord2sv(yeah* arg2540) {
  yeah* here2541 = arg2540;
  yeah* harg2542 = hcar(here2541);
  const GLshort* v = (const GLshort*)opaqueval(harg2542);
  here2541 = hcdr(here2541);
  A(isnil(here2541));
  glTexCoord2sv(v);
  return Nil;
}
yeah* foop_glTexCoord2s(yeah* arg2543) {
  yeah* here2544 = arg2543;
  yeah* harg2545 = hcar(here2544);
  int s = (int)getint(harg2545);
  here2544 = hcdr(here2544);
  yeah* harg2546 = hcar(here2544);
  int t = (int)getint(harg2546);
  here2544 = hcdr(here2544);
  A(isnil(here2544));
  glTexCoord2s(s, t);
  return Nil;
}
yeah* foop_glTexCoord2iv(yeah* arg2547) {
  yeah* here2548 = arg2547;
  yeah* harg2549 = hcar(here2548);
  const GLint* v = (const GLint*)opaqueval(harg2549);
  here2548 = hcdr(here2548);
  A(isnil(here2548));
  glTexCoord2iv(v);
  return Nil;
}
yeah* foop_glTexCoord2i(yeah* arg2550) {
  yeah* here2551 = arg2550;
  yeah* harg2552 = hcar(here2551);
  GLint s = (GLint)getint(harg2552);
  here2551 = hcdr(here2551);
  yeah* harg2553 = hcar(here2551);
  GLint t = (GLint)getint(harg2553);
  here2551 = hcdr(here2551);
  A(isnil(here2551));
  glTexCoord2i(s, t);
  return Nil;
}
yeah* foop_glTexCoord2fv(yeah* arg2554) {
  yeah* here2555 = arg2554;
  yeah* harg2556 = hcar(here2555);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2556);
  here2555 = hcdr(here2555);
  A(isnil(here2555));
  glTexCoord2fv(v);
  return Nil;
}
yeah* foop_glTexCoord2f(yeah* arg2557) {
  yeah* here2558 = arg2557;
  yeah* harg2559 = hcar(here2558);
  GLfloat s = (GLfloat)getfloatcvt(harg2559);
  here2558 = hcdr(here2558);
  yeah* harg2560 = hcar(here2558);
  GLfloat t = (GLfloat)getfloatcvt(harg2560);
  here2558 = hcdr(here2558);
  A(isnil(here2558));
  glTexCoord2f(s, t);
  return Nil;
}
yeah* foop_glTexCoord2dv(yeah* arg2561) {
  yeah* here2562 = arg2561;
  yeah* harg2563 = hcar(here2562);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2563);
  here2562 = hcdr(here2562);
  A(isnil(here2562));
  glTexCoord2dv(v);
  return Nil;
}
yeah* foop_glTexCoord2d(yeah* arg2564) {
  yeah* here2565 = arg2564;
  yeah* harg2566 = hcar(here2565);
  GLdouble s = (GLdouble)getfloatcvt(harg2566);
  here2565 = hcdr(here2565);
  yeah* harg2567 = hcar(here2565);
  GLdouble t = (GLdouble)getfloatcvt(harg2567);
  here2565 = hcdr(here2565);
  A(isnil(here2565));
  glTexCoord2d(s, t);
  return Nil;
}
yeah* foop_glTexCoord1sv(yeah* arg2568) {
  yeah* here2569 = arg2568;
  yeah* harg2570 = hcar(here2569);
  const GLshort* v = (const GLshort*)opaqueval(harg2570);
  here2569 = hcdr(here2569);
  A(isnil(here2569));
  glTexCoord1sv(v);
  return Nil;
}
yeah* foop_glTexCoord1s(yeah* arg2571) {
  yeah* here2572 = arg2571;
  yeah* harg2573 = hcar(here2572);
  int s = (int)getint(harg2573);
  here2572 = hcdr(here2572);
  A(isnil(here2572));
  glTexCoord1s(s);
  return Nil;
}
yeah* foop_glTexCoord1iv(yeah* arg2574) {
  yeah* here2575 = arg2574;
  yeah* harg2576 = hcar(here2575);
  const GLint* v = (const GLint*)opaqueval(harg2576);
  here2575 = hcdr(here2575);
  A(isnil(here2575));
  glTexCoord1iv(v);
  return Nil;
}
yeah* foop_glTexCoord1i(yeah* arg2577) {
  yeah* here2578 = arg2577;
  yeah* harg2579 = hcar(here2578);
  GLint s = (GLint)getint(harg2579);
  here2578 = hcdr(here2578);
  A(isnil(here2578));
  glTexCoord1i(s);
  return Nil;
}
yeah* foop_glTexCoord1fv(yeah* arg2580) {
  yeah* here2581 = arg2580;
  yeah* harg2582 = hcar(here2581);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2582);
  here2581 = hcdr(here2581);
  A(isnil(here2581));
  glTexCoord1fv(v);
  return Nil;
}
yeah* foop_glTexCoord1f(yeah* arg2583) {
  yeah* here2584 = arg2583;
  yeah* harg2585 = hcar(here2584);
  GLfloat s = (GLfloat)getfloatcvt(harg2585);
  here2584 = hcdr(here2584);
  A(isnil(here2584));
  glTexCoord1f(s);
  return Nil;
}
yeah* foop_glTexCoord1dv(yeah* arg2586) {
  yeah* here2587 = arg2586;
  yeah* harg2588 = hcar(here2587);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2588);
  here2587 = hcdr(here2587);
  A(isnil(here2587));
  glTexCoord1dv(v);
  return Nil;
}
yeah* foop_glTexCoord1d(yeah* arg2589) {
  yeah* here2590 = arg2589;
  yeah* harg2591 = hcar(here2590);
  GLdouble s = (GLdouble)getfloatcvt(harg2591);
  here2590 = hcdr(here2590);
  A(isnil(here2590));
  glTexCoord1d(s);
  return Nil;
}
yeah* foop_glStencilOp(yeah* arg2592) {
  yeah* here2593 = arg2592;
  yeah* harg2594 = hcar(here2593);
  GLenum fail = (GLenum)getint(harg2594);
  here2593 = hcdr(here2593);
  yeah* harg2595 = hcar(here2593);
  GLenum zfail = (GLenum)getint(harg2595);
  here2593 = hcdr(here2593);
  yeah* harg2596 = hcar(here2593);
  GLenum zpass = (GLenum)getint(harg2596);
  here2593 = hcdr(here2593);
  A(isnil(here2593));
  glStencilOp(fail, zfail, zpass);
  return Nil;
}
yeah* foop_glStencilMask(yeah* arg2597) {
  yeah* here2598 = arg2597;
  yeah* harg2599 = hcar(here2598);
  GLuint mask = (GLuint)getint(harg2599);
  here2598 = hcdr(here2598);
  A(isnil(here2598));
  glStencilMask(mask);
  return Nil;
}
yeah* foop_glStencilFunc(yeah* arg2600) {
  yeah* here2601 = arg2600;
  yeah* harg2602 = hcar(here2601);
  GLenum func = (GLenum)getint(harg2602);
  here2601 = hcdr(here2601);
  yeah* harg2603 = hcar(here2601);
  GLint ref = (GLint)getint(harg2603);
  here2601 = hcdr(here2601);
  yeah* harg2604 = hcar(here2601);
  GLuint mask = (GLuint)getint(harg2604);
  here2601 = hcdr(here2601);
  A(isnil(here2601));
  glStencilFunc(func, ref, mask);
  return Nil;
}
yeah* foop_glShadeModel(yeah* arg2605) {
  yeah* here2606 = arg2605;
  yeah* harg2607 = hcar(here2606);
  GLenum mode = (GLenum)getint(harg2607);
  here2606 = hcdr(here2606);
  A(isnil(here2606));
  glShadeModel(mode);
  return Nil;
}
yeah* foop_glSeparableFilter2D(yeah* arg2608) {
  yeah* here2609 = arg2608;
  yeah* harg2610 = hcar(here2609);
  GLenum target = (GLenum)getint(harg2610);
  here2609 = hcdr(here2609);
  yeah* harg2611 = hcar(here2609);
  GLenum internalformat = (GLenum)getint(harg2611);
  here2609 = hcdr(here2609);
  yeah* harg2612 = hcar(here2609);
  GLsizei width = (GLsizei)getint(harg2612);
  here2609 = hcdr(here2609);
  yeah* harg2613 = hcar(here2609);
  GLsizei height = (GLsizei)getint(harg2613);
  here2609 = hcdr(here2609);
  yeah* harg2614 = hcar(here2609);
  GLenum format = (GLenum)getint(harg2614);
  here2609 = hcdr(here2609);
  yeah* harg2615 = hcar(here2609);
  GLenum type = (GLenum)getint(harg2615);
  here2609 = hcdr(here2609);
  yeah* harg2616 = hcar(here2609);
  const GLvoid* row = (const GLvoid*)opaqueval(harg2616);
  here2609 = hcdr(here2609);
  yeah* harg2617 = hcar(here2609);
  const GLvoid* column = (const GLvoid*)opaqueval(harg2617);
  here2609 = hcdr(here2609);
  A(isnil(here2609));
  glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
  return Nil;
}
yeah* foop_glSelectBuffer(yeah* arg2618) {
  yeah* here2619 = arg2618;
  yeah* harg2620 = hcar(here2619);
  GLsizei size = (GLsizei)getint(harg2620);
  here2619 = hcdr(here2619);
  yeah* harg2621 = hcar(here2619);
  GLuint* buffer = (GLuint*)opaqueval(harg2621);
  here2619 = hcdr(here2619);
  A(isnil(here2619));
  glSelectBuffer(size, buffer);
  return Nil;
}
yeah* foop_glScissor(yeah* arg2622) {
  yeah* here2623 = arg2622;
  yeah* harg2624 = hcar(here2623);
  GLint x = (GLint)getint(harg2624);
  here2623 = hcdr(here2623);
  yeah* harg2625 = hcar(here2623);
  GLint y = (GLint)getint(harg2625);
  here2623 = hcdr(here2623);
  yeah* harg2626 = hcar(here2623);
  GLsizei width = (GLsizei)getint(harg2626);
  here2623 = hcdr(here2623);
  yeah* harg2627 = hcar(here2623);
  GLsizei height = (GLsizei)getint(harg2627);
  here2623 = hcdr(here2623);
  A(isnil(here2623));
  glScissor(x, y, width, height);
  return Nil;
}
yeah* foop_glScalef(yeah* arg2628) {
  yeah* here2629 = arg2628;
  yeah* harg2630 = hcar(here2629);
  GLfloat x = (GLfloat)getfloatcvt(harg2630);
  here2629 = hcdr(here2629);
  yeah* harg2631 = hcar(here2629);
  GLfloat y = (GLfloat)getfloatcvt(harg2631);
  here2629 = hcdr(here2629);
  yeah* harg2632 = hcar(here2629);
  GLfloat z = (GLfloat)getfloatcvt(harg2632);
  here2629 = hcdr(here2629);
  A(isnil(here2629));
  glScalef(x, y, z);
  return Nil;
}
yeah* foop_glScaled(yeah* arg2633) {
  yeah* here2634 = arg2633;
  yeah* harg2635 = hcar(here2634);
  GLdouble x = (GLdouble)getfloatcvt(harg2635);
  here2634 = hcdr(here2634);
  yeah* harg2636 = hcar(here2634);
  GLdouble y = (GLdouble)getfloatcvt(harg2636);
  here2634 = hcdr(here2634);
  yeah* harg2637 = hcar(here2634);
  GLdouble z = (GLdouble)getfloatcvt(harg2637);
  here2634 = hcdr(here2634);
  A(isnil(here2634));
  glScaled(x, y, z);
  return Nil;
}
yeah* foop_glRotatef(yeah* arg2638) {
  yeah* here2639 = arg2638;
  yeah* harg2640 = hcar(here2639);
  GLfloat angle = (GLfloat)getfloatcvt(harg2640);
  here2639 = hcdr(here2639);
  yeah* harg2641 = hcar(here2639);
  GLfloat x = (GLfloat)getfloatcvt(harg2641);
  here2639 = hcdr(here2639);
  yeah* harg2642 = hcar(here2639);
  GLfloat y = (GLfloat)getfloatcvt(harg2642);
  here2639 = hcdr(here2639);
  yeah* harg2643 = hcar(here2639);
  GLfloat z = (GLfloat)getfloatcvt(harg2643);
  here2639 = hcdr(here2639);
  A(isnil(here2639));
  glRotatef(angle, x, y, z);
  return Nil;
}
yeah* foop_glRotated(yeah* arg2644) {
  yeah* here2645 = arg2644;
  yeah* harg2646 = hcar(here2645);
  GLdouble angle = (GLdouble)getfloatcvt(harg2646);
  here2645 = hcdr(here2645);
  yeah* harg2647 = hcar(here2645);
  GLdouble x = (GLdouble)getfloatcvt(harg2647);
  here2645 = hcdr(here2645);
  yeah* harg2648 = hcar(here2645);
  GLdouble y = (GLdouble)getfloatcvt(harg2648);
  here2645 = hcdr(here2645);
  yeah* harg2649 = hcar(here2645);
  GLdouble z = (GLdouble)getfloatcvt(harg2649);
  here2645 = hcdr(here2645);
  A(isnil(here2645));
  glRotated(angle, x, y, z);
  return Nil;
}
yeah* foop_glResetMinmax(yeah* arg2650) {
  yeah* here2651 = arg2650;
  yeah* harg2652 = hcar(here2651);
  GLenum target = (GLenum)getint(harg2652);
  here2651 = hcdr(here2651);
  A(isnil(here2651));
  glResetMinmax(target);
  return Nil;
}
yeah* foop_glResetHistogram(yeah* arg2653) {
  yeah* here2654 = arg2653;
  yeah* harg2655 = hcar(here2654);
  GLenum target = (GLenum)getint(harg2655);
  here2654 = hcdr(here2654);
  A(isnil(here2654));
  glResetHistogram(target);
  return Nil;
}
yeah* foop_glRenderMode(yeah* arg2656) {
  yeah* here2657 = arg2656;
  yeah* harg2658 = hcar(here2657);
  GLenum mode = (GLenum)getint(harg2658);
  here2657 = hcdr(here2657);
  A(isnil(here2657));
  GLint ret2659 = glRenderMode(mode);
  return integer((int)ret2659);
}
yeah* foop_glRectsv(yeah* arg2660) {
  yeah* here2661 = arg2660;
  yeah* harg2662 = hcar(here2661);
  const GLshort* v1 = (const GLshort*)opaqueval(harg2662);
  here2661 = hcdr(here2661);
  yeah* harg2663 = hcar(here2661);
  const GLshort* v2 = (const GLshort*)opaqueval(harg2663);
  here2661 = hcdr(here2661);
  A(isnil(here2661));
  glRectsv(v1, v2);
  return Nil;
}
yeah* foop_glRects(yeah* arg2664) {
  yeah* here2665 = arg2664;
  yeah* harg2666 = hcar(here2665);
  int x1 = (int)getint(harg2666);
  here2665 = hcdr(here2665);
  yeah* harg2667 = hcar(here2665);
  int y1 = (int)getint(harg2667);
  here2665 = hcdr(here2665);
  yeah* harg2668 = hcar(here2665);
  int x2 = (int)getint(harg2668);
  here2665 = hcdr(here2665);
  yeah* harg2669 = hcar(here2665);
  int y2 = (int)getint(harg2669);
  here2665 = hcdr(here2665);
  A(isnil(here2665));
  glRects(x1, y1, x2, y2);
  return Nil;
}
yeah* foop_glRectiv(yeah* arg2670) {
  yeah* here2671 = arg2670;
  yeah* harg2672 = hcar(here2671);
  const GLint* v1 = (const GLint*)opaqueval(harg2672);
  here2671 = hcdr(here2671);
  yeah* harg2673 = hcar(here2671);
  const GLint* v2 = (const GLint*)opaqueval(harg2673);
  here2671 = hcdr(here2671);
  A(isnil(here2671));
  glRectiv(v1, v2);
  return Nil;
}
yeah* foop_glRecti(yeah* arg2674) {
  yeah* here2675 = arg2674;
  yeah* harg2676 = hcar(here2675);
  GLint x1 = (GLint)getint(harg2676);
  here2675 = hcdr(here2675);
  yeah* harg2677 = hcar(here2675);
  GLint y1 = (GLint)getint(harg2677);
  here2675 = hcdr(here2675);
  yeah* harg2678 = hcar(here2675);
  GLint x2 = (GLint)getint(harg2678);
  here2675 = hcdr(here2675);
  yeah* harg2679 = hcar(here2675);
  GLint y2 = (GLint)getint(harg2679);
  here2675 = hcdr(here2675);
  A(isnil(here2675));
  glRecti(x1, y1, x2, y2);
  return Nil;
}
yeah* foop_glRectfv(yeah* arg2680) {
  yeah* here2681 = arg2680;
  yeah* harg2682 = hcar(here2681);
  const GLfloat* v1 = (const GLfloat*)opaqueval(harg2682);
  here2681 = hcdr(here2681);
  yeah* harg2683 = hcar(here2681);
  const GLfloat* v2 = (const GLfloat*)opaqueval(harg2683);
  here2681 = hcdr(here2681);
  A(isnil(here2681));
  glRectfv(v1, v2);
  return Nil;
}
yeah* foop_glRectf(yeah* arg2684) {
  yeah* here2685 = arg2684;
  yeah* harg2686 = hcar(here2685);
  GLfloat x1 = (GLfloat)getfloatcvt(harg2686);
  here2685 = hcdr(here2685);
  yeah* harg2687 = hcar(here2685);
  GLfloat y1 = (GLfloat)getfloatcvt(harg2687);
  here2685 = hcdr(here2685);
  yeah* harg2688 = hcar(here2685);
  GLfloat x2 = (GLfloat)getfloatcvt(harg2688);
  here2685 = hcdr(here2685);
  yeah* harg2689 = hcar(here2685);
  GLfloat y2 = (GLfloat)getfloatcvt(harg2689);
  here2685 = hcdr(here2685);
  A(isnil(here2685));
  glRectf(x1, y1, x2, y2);
  return Nil;
}
yeah* foop_glRectdv(yeah* arg2690) {
  yeah* here2691 = arg2690;
  yeah* harg2692 = hcar(here2691);
  const GLdouble* v1 = (const GLdouble*)opaqueval(harg2692);
  here2691 = hcdr(here2691);
  yeah* harg2693 = hcar(here2691);
  const GLdouble* v2 = (const GLdouble*)opaqueval(harg2693);
  here2691 = hcdr(here2691);
  A(isnil(here2691));
  glRectdv(v1, v2);
  return Nil;
}
yeah* foop_glRectd(yeah* arg2694) {
  yeah* here2695 = arg2694;
  yeah* harg2696 = hcar(here2695);
  GLdouble x1 = (GLdouble)getfloatcvt(harg2696);
  here2695 = hcdr(here2695);
  yeah* harg2697 = hcar(here2695);
  GLdouble y1 = (GLdouble)getfloatcvt(harg2697);
  here2695 = hcdr(here2695);
  yeah* harg2698 = hcar(here2695);
  GLdouble x2 = (GLdouble)getfloatcvt(harg2698);
  here2695 = hcdr(here2695);
  yeah* harg2699 = hcar(here2695);
  GLdouble y2 = (GLdouble)getfloatcvt(harg2699);
  here2695 = hcdr(here2695);
  A(isnil(here2695));
  glRectd(x1, y1, x2, y2);
  return Nil;
}
yeah* foop_glReadPixels(yeah* arg2700) {
  yeah* here2701 = arg2700;
  yeah* harg2702 = hcar(here2701);
  GLint x = (GLint)getint(harg2702);
  here2701 = hcdr(here2701);
  yeah* harg2703 = hcar(here2701);
  GLint y = (GLint)getint(harg2703);
  here2701 = hcdr(here2701);
  yeah* harg2704 = hcar(here2701);
  GLsizei width = (GLsizei)getint(harg2704);
  here2701 = hcdr(here2701);
  yeah* harg2705 = hcar(here2701);
  GLsizei height = (GLsizei)getint(harg2705);
  here2701 = hcdr(here2701);
  yeah* harg2706 = hcar(here2701);
  GLenum format = (GLenum)getint(harg2706);
  here2701 = hcdr(here2701);
  yeah* harg2707 = hcar(here2701);
  GLenum type = (GLenum)getint(harg2707);
  here2701 = hcdr(here2701);
  yeah* harg2708 = hcar(here2701);
  GLvoid* pixels = (GLvoid*)opaqueval(harg2708);
  here2701 = hcdr(here2701);
  A(isnil(here2701));
  glReadPixels(x, y, width, height, format, type, pixels);
  return Nil;
}
yeah* foop_glReadBuffer(yeah* arg2709) {
  yeah* here2710 = arg2709;
  yeah* harg2711 = hcar(here2710);
  GLenum mode = (GLenum)getint(harg2711);
  here2710 = hcdr(here2710);
  A(isnil(here2710));
  glReadBuffer(mode);
  return Nil;
}
yeah* foop_glRasterPos4sv(yeah* arg2712) {
  yeah* here2713 = arg2712;
  yeah* harg2714 = hcar(here2713);
  const GLshort* v = (const GLshort*)opaqueval(harg2714);
  here2713 = hcdr(here2713);
  A(isnil(here2713));
  glRasterPos4sv(v);
  return Nil;
}
yeah* foop_glRasterPos4s(yeah* arg2715) {
  yeah* here2716 = arg2715;
  yeah* harg2717 = hcar(here2716);
  int x = (int)getint(harg2717);
  here2716 = hcdr(here2716);
  yeah* harg2718 = hcar(here2716);
  int y = (int)getint(harg2718);
  here2716 = hcdr(here2716);
  yeah* harg2719 = hcar(here2716);
  int z = (int)getint(harg2719);
  here2716 = hcdr(here2716);
  yeah* harg2720 = hcar(here2716);
  int w = (int)getint(harg2720);
  here2716 = hcdr(here2716);
  A(isnil(here2716));
  glRasterPos4s(x, y, z, w);
  return Nil;
}
yeah* foop_glRasterPos4iv(yeah* arg2721) {
  yeah* here2722 = arg2721;
  yeah* harg2723 = hcar(here2722);
  const GLint* v = (const GLint*)opaqueval(harg2723);
  here2722 = hcdr(here2722);
  A(isnil(here2722));
  glRasterPos4iv(v);
  return Nil;
}
yeah* foop_glRasterPos4i(yeah* arg2724) {
  yeah* here2725 = arg2724;
  yeah* harg2726 = hcar(here2725);
  GLint x = (GLint)getint(harg2726);
  here2725 = hcdr(here2725);
  yeah* harg2727 = hcar(here2725);
  GLint y = (GLint)getint(harg2727);
  here2725 = hcdr(here2725);
  yeah* harg2728 = hcar(here2725);
  GLint z = (GLint)getint(harg2728);
  here2725 = hcdr(here2725);
  yeah* harg2729 = hcar(here2725);
  GLint w = (GLint)getint(harg2729);
  here2725 = hcdr(here2725);
  A(isnil(here2725));
  glRasterPos4i(x, y, z, w);
  return Nil;
}
yeah* foop_glRasterPos4fv(yeah* arg2730) {
  yeah* here2731 = arg2730;
  yeah* harg2732 = hcar(here2731);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2732);
  here2731 = hcdr(here2731);
  A(isnil(here2731));
  glRasterPos4fv(v);
  return Nil;
}
yeah* foop_glRasterPos4f(yeah* arg2733) {
  yeah* here2734 = arg2733;
  yeah* harg2735 = hcar(here2734);
  GLfloat x = (GLfloat)getfloatcvt(harg2735);
  here2734 = hcdr(here2734);
  yeah* harg2736 = hcar(here2734);
  GLfloat y = (GLfloat)getfloatcvt(harg2736);
  here2734 = hcdr(here2734);
  yeah* harg2737 = hcar(here2734);
  GLfloat z = (GLfloat)getfloatcvt(harg2737);
  here2734 = hcdr(here2734);
  yeah* harg2738 = hcar(here2734);
  GLfloat w = (GLfloat)getfloatcvt(harg2738);
  here2734 = hcdr(here2734);
  A(isnil(here2734));
  glRasterPos4f(x, y, z, w);
  return Nil;
}
yeah* foop_glRasterPos4dv(yeah* arg2739) {
  yeah* here2740 = arg2739;
  yeah* harg2741 = hcar(here2740);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2741);
  here2740 = hcdr(here2740);
  A(isnil(here2740));
  glRasterPos4dv(v);
  return Nil;
}
yeah* foop_glRasterPos4d(yeah* arg2742) {
  yeah* here2743 = arg2742;
  yeah* harg2744 = hcar(here2743);
  GLdouble x = (GLdouble)getfloatcvt(harg2744);
  here2743 = hcdr(here2743);
  yeah* harg2745 = hcar(here2743);
  GLdouble y = (GLdouble)getfloatcvt(harg2745);
  here2743 = hcdr(here2743);
  yeah* harg2746 = hcar(here2743);
  GLdouble z = (GLdouble)getfloatcvt(harg2746);
  here2743 = hcdr(here2743);
  yeah* harg2747 = hcar(here2743);
  GLdouble w = (GLdouble)getfloatcvt(harg2747);
  here2743 = hcdr(here2743);
  A(isnil(here2743));
  glRasterPos4d(x, y, z, w);
  return Nil;
}
yeah* foop_glRasterPos3sv(yeah* arg2748) {
  yeah* here2749 = arg2748;
  yeah* harg2750 = hcar(here2749);
  const GLshort* v = (const GLshort*)opaqueval(harg2750);
  here2749 = hcdr(here2749);
  A(isnil(here2749));
  glRasterPos3sv(v);
  return Nil;
}
yeah* foop_glRasterPos3s(yeah* arg2751) {
  yeah* here2752 = arg2751;
  yeah* harg2753 = hcar(here2752);
  int x = (int)getint(harg2753);
  here2752 = hcdr(here2752);
  yeah* harg2754 = hcar(here2752);
  int y = (int)getint(harg2754);
  here2752 = hcdr(here2752);
  yeah* harg2755 = hcar(here2752);
  int z = (int)getint(harg2755);
  here2752 = hcdr(here2752);
  A(isnil(here2752));
  glRasterPos3s(x, y, z);
  return Nil;
}
yeah* foop_glRasterPos3iv(yeah* arg2756) {
  yeah* here2757 = arg2756;
  yeah* harg2758 = hcar(here2757);
  const GLint* v = (const GLint*)opaqueval(harg2758);
  here2757 = hcdr(here2757);
  A(isnil(here2757));
  glRasterPos3iv(v);
  return Nil;
}
yeah* foop_glRasterPos3i(yeah* arg2759) {
  yeah* here2760 = arg2759;
  yeah* harg2761 = hcar(here2760);
  GLint x = (GLint)getint(harg2761);
  here2760 = hcdr(here2760);
  yeah* harg2762 = hcar(here2760);
  GLint y = (GLint)getint(harg2762);
  here2760 = hcdr(here2760);
  yeah* harg2763 = hcar(here2760);
  GLint z = (GLint)getint(harg2763);
  here2760 = hcdr(here2760);
  A(isnil(here2760));
  glRasterPos3i(x, y, z);
  return Nil;
}
yeah* foop_glRasterPos3fv(yeah* arg2764) {
  yeah* here2765 = arg2764;
  yeah* harg2766 = hcar(here2765);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2766);
  here2765 = hcdr(here2765);
  A(isnil(here2765));
  glRasterPos3fv(v);
  return Nil;
}
yeah* foop_glRasterPos3f(yeah* arg2767) {
  yeah* here2768 = arg2767;
  yeah* harg2769 = hcar(here2768);
  GLfloat x = (GLfloat)getfloatcvt(harg2769);
  here2768 = hcdr(here2768);
  yeah* harg2770 = hcar(here2768);
  GLfloat y = (GLfloat)getfloatcvt(harg2770);
  here2768 = hcdr(here2768);
  yeah* harg2771 = hcar(here2768);
  GLfloat z = (GLfloat)getfloatcvt(harg2771);
  here2768 = hcdr(here2768);
  A(isnil(here2768));
  glRasterPos3f(x, y, z);
  return Nil;
}
yeah* foop_glRasterPos3dv(yeah* arg2772) {
  yeah* here2773 = arg2772;
  yeah* harg2774 = hcar(here2773);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2774);
  here2773 = hcdr(here2773);
  A(isnil(here2773));
  glRasterPos3dv(v);
  return Nil;
}
yeah* foop_glRasterPos3d(yeah* arg2775) {
  yeah* here2776 = arg2775;
  yeah* harg2777 = hcar(here2776);
  GLdouble x = (GLdouble)getfloatcvt(harg2777);
  here2776 = hcdr(here2776);
  yeah* harg2778 = hcar(here2776);
  GLdouble y = (GLdouble)getfloatcvt(harg2778);
  here2776 = hcdr(here2776);
  yeah* harg2779 = hcar(here2776);
  GLdouble z = (GLdouble)getfloatcvt(harg2779);
  here2776 = hcdr(here2776);
  A(isnil(here2776));
  glRasterPos3d(x, y, z);
  return Nil;
}
yeah* foop_glRasterPos2sv(yeah* arg2780) {
  yeah* here2781 = arg2780;
  yeah* harg2782 = hcar(here2781);
  const GLshort* v = (const GLshort*)opaqueval(harg2782);
  here2781 = hcdr(here2781);
  A(isnil(here2781));
  glRasterPos2sv(v);
  return Nil;
}
yeah* foop_glRasterPos2s(yeah* arg2783) {
  yeah* here2784 = arg2783;
  yeah* harg2785 = hcar(here2784);
  int x = (int)getint(harg2785);
  here2784 = hcdr(here2784);
  yeah* harg2786 = hcar(here2784);
  int y = (int)getint(harg2786);
  here2784 = hcdr(here2784);
  A(isnil(here2784));
  glRasterPos2s(x, y);
  return Nil;
}
yeah* foop_glRasterPos2iv(yeah* arg2787) {
  yeah* here2788 = arg2787;
  yeah* harg2789 = hcar(here2788);
  const GLint* v = (const GLint*)opaqueval(harg2789);
  here2788 = hcdr(here2788);
  A(isnil(here2788));
  glRasterPos2iv(v);
  return Nil;
}
yeah* foop_glRasterPos2i(yeah* arg2790) {
  yeah* here2791 = arg2790;
  yeah* harg2792 = hcar(here2791);
  GLint x = (GLint)getint(harg2792);
  here2791 = hcdr(here2791);
  yeah* harg2793 = hcar(here2791);
  GLint y = (GLint)getint(harg2793);
  here2791 = hcdr(here2791);
  A(isnil(here2791));
  glRasterPos2i(x, y);
  return Nil;
}
yeah* foop_glRasterPos2fv(yeah* arg2794) {
  yeah* here2795 = arg2794;
  yeah* harg2796 = hcar(here2795);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2796);
  here2795 = hcdr(here2795);
  A(isnil(here2795));
  glRasterPos2fv(v);
  return Nil;
}
yeah* foop_glRasterPos2f(yeah* arg2797) {
  yeah* here2798 = arg2797;
  yeah* harg2799 = hcar(here2798);
  GLfloat x = (GLfloat)getfloatcvt(harg2799);
  here2798 = hcdr(here2798);
  yeah* harg2800 = hcar(here2798);
  GLfloat y = (GLfloat)getfloatcvt(harg2800);
  here2798 = hcdr(here2798);
  A(isnil(here2798));
  glRasterPos2f(x, y);
  return Nil;
}
yeah* foop_glRasterPos2dv(yeah* arg2801) {
  yeah* here2802 = arg2801;
  yeah* harg2803 = hcar(here2802);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2803);
  here2802 = hcdr(here2802);
  A(isnil(here2802));
  glRasterPos2dv(v);
  return Nil;
}
yeah* foop_glRasterPos2d(yeah* arg2804) {
  yeah* here2805 = arg2804;
  yeah* harg2806 = hcar(here2805);
  GLdouble x = (GLdouble)getfloatcvt(harg2806);
  here2805 = hcdr(here2805);
  yeah* harg2807 = hcar(here2805);
  GLdouble y = (GLdouble)getfloatcvt(harg2807);
  here2805 = hcdr(here2805);
  A(isnil(here2805));
  glRasterPos2d(x, y);
  return Nil;
}
yeah* foop_glPushName(yeah* arg2808) {
  yeah* here2809 = arg2808;
  yeah* harg2810 = hcar(here2809);
  GLuint name = (GLuint)getint(harg2810);
  here2809 = hcdr(here2809);
  A(isnil(here2809));
  glPushName(name);
  return Nil;
}
yeah* foop_glPushMatrix(yeah* arg2811) {
  yeah* here2812 = arg2811;
  A(isnil(here2812));
  glPushMatrix();
  return Nil;
}
yeah* foop_glPushClientAttrib(yeah* arg2813) {
  yeah* here2814 = arg2813;
  yeah* harg2815 = hcar(here2814);
  GLbitfield mask = (GLbitfield)getint(harg2815);
  here2814 = hcdr(here2814);
  A(isnil(here2814));
  glPushClientAttrib(mask);
  return Nil;
}
yeah* foop_glPushAttrib(yeah* arg2816) {
  yeah* here2817 = arg2816;
  yeah* harg2818 = hcar(here2817);
  GLbitfield mask = (GLbitfield)getint(harg2818);
  here2817 = hcdr(here2817);
  A(isnil(here2817));
  glPushAttrib(mask);
  return Nil;
}
yeah* foop_glPrioritizeTextures(yeah* arg2819) {
  yeah* here2820 = arg2819;
  yeah* harg2821 = hcar(here2820);
  GLsizei n = (GLsizei)getint(harg2821);
  here2820 = hcdr(here2820);
  yeah* harg2822 = hcar(here2820);
  const GLuint* textures = (const GLuint*)opaqueval(harg2822);
  here2820 = hcdr(here2820);
  yeah* harg2823 = hcar(here2820);
  const GLclampf* priorities = (const GLclampf*)opaqueval(harg2823);
  here2820 = hcdr(here2820);
  A(isnil(here2820));
  glPrioritizeTextures(n, textures, priorities);
  return Nil;
}
yeah* foop_glPopName(yeah* arg2824) {
  yeah* here2825 = arg2824;
  A(isnil(here2825));
  glPopName();
  return Nil;
}
yeah* foop_glPopMatrix(yeah* arg2826) {
  yeah* here2827 = arg2826;
  A(isnil(here2827));
  glPopMatrix();
  return Nil;
}
yeah* foop_glPopClientAttrib(yeah* arg2828) {
  yeah* here2829 = arg2828;
  A(isnil(here2829));
  glPopClientAttrib();
  return Nil;
}
yeah* foop_glPopAttrib(yeah* arg2830) {
  yeah* here2831 = arg2830;
  A(isnil(here2831));
  glPopAttrib();
  return Nil;
}
yeah* foop_glPolygonStipple(yeah* arg2832) {
  yeah* here2833 = arg2832;
  yeah* harg2834 = hcar(here2833);
  const GLubyte* mask = (const GLubyte*)opaqueval(harg2834);
  here2833 = hcdr(here2833);
  A(isnil(here2833));
  glPolygonStipple(mask);
  return Nil;
}
yeah* foop_glPolygonOffset(yeah* arg2835) {
  yeah* here2836 = arg2835;
  yeah* harg2837 = hcar(here2836);
  GLfloat factor = (GLfloat)getfloatcvt(harg2837);
  here2836 = hcdr(here2836);
  yeah* harg2838 = hcar(here2836);
  GLfloat units = (GLfloat)getfloatcvt(harg2838);
  here2836 = hcdr(here2836);
  A(isnil(here2836));
  glPolygonOffset(factor, units);
  return Nil;
}
yeah* foop_glPolygonMode(yeah* arg2839) {
  yeah* here2840 = arg2839;
  yeah* harg2841 = hcar(here2840);
  GLenum face = (GLenum)getint(harg2841);
  here2840 = hcdr(here2840);
  yeah* harg2842 = hcar(here2840);
  GLenum mode = (GLenum)getint(harg2842);
  here2840 = hcdr(here2840);
  A(isnil(here2840));
  glPolygonMode(face, mode);
  return Nil;
}
yeah* foop_glPointSize(yeah* arg2843) {
  yeah* here2844 = arg2843;
  yeah* harg2845 = hcar(here2844);
  GLfloat size = (GLfloat)getfloatcvt(harg2845);
  here2844 = hcdr(here2844);
  A(isnil(here2844));
  glPointSize(size);
  return Nil;
}
yeah* foop_glPixelZoom(yeah* arg2846) {
  yeah* here2847 = arg2846;
  yeah* harg2848 = hcar(here2847);
  GLfloat xfactor = (GLfloat)getfloatcvt(harg2848);
  here2847 = hcdr(here2847);
  yeah* harg2849 = hcar(here2847);
  GLfloat yfactor = (GLfloat)getfloatcvt(harg2849);
  here2847 = hcdr(here2847);
  A(isnil(here2847));
  glPixelZoom(xfactor, yfactor);
  return Nil;
}
yeah* foop_glPixelTransferi(yeah* arg2850) {
  yeah* here2851 = arg2850;
  yeah* harg2852 = hcar(here2851);
  GLenum pname = (GLenum)getint(harg2852);
  here2851 = hcdr(here2851);
  yeah* harg2853 = hcar(here2851);
  GLint param = (GLint)getint(harg2853);
  here2851 = hcdr(here2851);
  A(isnil(here2851));
  glPixelTransferi(pname, param);
  return Nil;
}
yeah* foop_glPixelTransferf(yeah* arg2854) {
  yeah* here2855 = arg2854;
  yeah* harg2856 = hcar(here2855);
  GLenum pname = (GLenum)getint(harg2856);
  here2855 = hcdr(here2855);
  yeah* harg2857 = hcar(here2855);
  GLfloat param = (GLfloat)getfloatcvt(harg2857);
  here2855 = hcdr(here2855);
  A(isnil(here2855));
  glPixelTransferf(pname, param);
  return Nil;
}
yeah* foop_glPixelStorei(yeah* arg2858) {
  yeah* here2859 = arg2858;
  yeah* harg2860 = hcar(here2859);
  GLenum pname = (GLenum)getint(harg2860);
  here2859 = hcdr(here2859);
  yeah* harg2861 = hcar(here2859);
  GLint param = (GLint)getint(harg2861);
  here2859 = hcdr(here2859);
  A(isnil(here2859));
  glPixelStorei(pname, param);
  return Nil;
}
yeah* foop_glPixelStoref(yeah* arg2862) {
  yeah* here2863 = arg2862;
  yeah* harg2864 = hcar(here2863);
  GLenum pname = (GLenum)getint(harg2864);
  here2863 = hcdr(here2863);
  yeah* harg2865 = hcar(here2863);
  GLfloat param = (GLfloat)getfloatcvt(harg2865);
  here2863 = hcdr(here2863);
  A(isnil(here2863));
  glPixelStoref(pname, param);
  return Nil;
}
yeah* foop_glPixelMapusv(yeah* arg2866) {
  yeah* here2867 = arg2866;
  yeah* harg2868 = hcar(here2867);
  GLenum map = (GLenum)getint(harg2868);
  here2867 = hcdr(here2867);
  yeah* harg2869 = hcar(here2867);
  GLint mapsize = (GLint)getint(harg2869);
  here2867 = hcdr(here2867);
  yeah* harg2870 = hcar(here2867);
  const GLushort* values = (const GLushort*)opaqueval(harg2870);
  here2867 = hcdr(here2867);
  A(isnil(here2867));
  glPixelMapusv(map, mapsize, values);
  return Nil;
}
yeah* foop_glPixelMapuiv(yeah* arg2871) {
  yeah* here2872 = arg2871;
  yeah* harg2873 = hcar(here2872);
  GLenum map = (GLenum)getint(harg2873);
  here2872 = hcdr(here2872);
  yeah* harg2874 = hcar(here2872);
  GLint mapsize = (GLint)getint(harg2874);
  here2872 = hcdr(here2872);
  yeah* harg2875 = hcar(here2872);
  const GLuint* values = (const GLuint*)opaqueval(harg2875);
  here2872 = hcdr(here2872);
  A(isnil(here2872));
  glPixelMapuiv(map, mapsize, values);
  return Nil;
}
yeah* foop_glPixelMapfv(yeah* arg2876) {
  yeah* here2877 = arg2876;
  yeah* harg2878 = hcar(here2877);
  GLenum map = (GLenum)getint(harg2878);
  here2877 = hcdr(here2877);
  yeah* harg2879 = hcar(here2877);
  GLint mapsize = (GLint)getint(harg2879);
  here2877 = hcdr(here2877);
  yeah* harg2880 = hcar(here2877);
  const GLfloat* values = (const GLfloat*)opaqueval(harg2880);
  here2877 = hcdr(here2877);
  A(isnil(here2877));
  glPixelMapfv(map, mapsize, values);
  return Nil;
}
yeah* foop_glPassThrough(yeah* arg2881) {
  yeah* here2882 = arg2881;
  yeah* harg2883 = hcar(here2882);
  GLfloat token = (GLfloat)getfloatcvt(harg2883);
  here2882 = hcdr(here2882);
  A(isnil(here2882));
  glPassThrough(token);
  return Nil;
}
yeah* foop_glOrtho(yeah* arg2884) {
  yeah* here2885 = arg2884;
  yeah* harg2886 = hcar(here2885);
  GLdouble left = (GLdouble)getfloatcvt(harg2886);
  here2885 = hcdr(here2885);
  yeah* harg2887 = hcar(here2885);
  GLdouble right = (GLdouble)getfloatcvt(harg2887);
  here2885 = hcdr(here2885);
  yeah* harg2888 = hcar(here2885);
  GLdouble bottom = (GLdouble)getfloatcvt(harg2888);
  here2885 = hcdr(here2885);
  yeah* harg2889 = hcar(here2885);
  GLdouble top = (GLdouble)getfloatcvt(harg2889);
  here2885 = hcdr(here2885);
  yeah* harg2890 = hcar(here2885);
  GLdouble zNear = (GLdouble)getfloatcvt(harg2890);
  here2885 = hcdr(here2885);
  yeah* harg2891 = hcar(here2885);
  GLdouble zFar = (GLdouble)getfloatcvt(harg2891);
  here2885 = hcdr(here2885);
  A(isnil(here2885));
  glOrtho(left, right, bottom, top, zNear, zFar);
  return Nil;
}
yeah* foop_glNormalPointer(yeah* arg2892) {
  yeah* here2893 = arg2892;
  yeah* harg2894 = hcar(here2893);
  GLenum type = (GLenum)getint(harg2894);
  here2893 = hcdr(here2893);
  yeah* harg2895 = hcar(here2893);
  GLsizei stride = (GLsizei)getint(harg2895);
  here2893 = hcdr(here2893);
  yeah* harg2896 = hcar(here2893);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg2896);
  here2893 = hcdr(here2893);
  A(isnil(here2893));
  glNormalPointer(type, stride, pointer);
  return Nil;
}
yeah* foop_glNormal3sv(yeah* arg2897) {
  yeah* here2898 = arg2897;
  yeah* harg2899 = hcar(here2898);
  const GLshort* v = (const GLshort*)opaqueval(harg2899);
  here2898 = hcdr(here2898);
  A(isnil(here2898));
  glNormal3sv(v);
  return Nil;
}
yeah* foop_glNormal3s(yeah* arg2900) {
  yeah* here2901 = arg2900;
  yeah* harg2902 = hcar(here2901);
  int nx = (int)getint(harg2902);
  here2901 = hcdr(here2901);
  yeah* harg2903 = hcar(here2901);
  int ny = (int)getint(harg2903);
  here2901 = hcdr(here2901);
  yeah* harg2904 = hcar(here2901);
  int nz = (int)getint(harg2904);
  here2901 = hcdr(here2901);
  A(isnil(here2901));
  glNormal3s(nx, ny, nz);
  return Nil;
}
yeah* foop_glNormal3iv(yeah* arg2905) {
  yeah* here2906 = arg2905;
  yeah* harg2907 = hcar(here2906);
  const GLint* v = (const GLint*)opaqueval(harg2907);
  here2906 = hcdr(here2906);
  A(isnil(here2906));
  glNormal3iv(v);
  return Nil;
}
yeah* foop_glNormal3i(yeah* arg2908) {
  yeah* here2909 = arg2908;
  yeah* harg2910 = hcar(here2909);
  GLint nx = (GLint)getint(harg2910);
  here2909 = hcdr(here2909);
  yeah* harg2911 = hcar(here2909);
  GLint ny = (GLint)getint(harg2911);
  here2909 = hcdr(here2909);
  yeah* harg2912 = hcar(here2909);
  GLint nz = (GLint)getint(harg2912);
  here2909 = hcdr(here2909);
  A(isnil(here2909));
  glNormal3i(nx, ny, nz);
  return Nil;
}
yeah* foop_glNormal3fv(yeah* arg2913) {
  yeah* here2914 = arg2913;
  yeah* harg2915 = hcar(here2914);
  const GLfloat* v = (const GLfloat*)opaqueval(harg2915);
  here2914 = hcdr(here2914);
  A(isnil(here2914));
  glNormal3fv(v);
  return Nil;
}
yeah* foop_glNormal3f(yeah* arg2916) {
  yeah* here2917 = arg2916;
  yeah* harg2918 = hcar(here2917);
  GLfloat nx = (GLfloat)getfloatcvt(harg2918);
  here2917 = hcdr(here2917);
  yeah* harg2919 = hcar(here2917);
  GLfloat ny = (GLfloat)getfloatcvt(harg2919);
  here2917 = hcdr(here2917);
  yeah* harg2920 = hcar(here2917);
  GLfloat nz = (GLfloat)getfloatcvt(harg2920);
  here2917 = hcdr(here2917);
  A(isnil(here2917));
  glNormal3f(nx, ny, nz);
  return Nil;
}
yeah* foop_glNormal3dv(yeah* arg2921) {
  yeah* here2922 = arg2921;
  yeah* harg2923 = hcar(here2922);
  const GLdouble* v = (const GLdouble*)opaqueval(harg2923);
  here2922 = hcdr(here2922);
  A(isnil(here2922));
  glNormal3dv(v);
  return Nil;
}
yeah* foop_glNormal3d(yeah* arg2924) {
  yeah* here2925 = arg2924;
  yeah* harg2926 = hcar(here2925);
  GLdouble nx = (GLdouble)getfloatcvt(harg2926);
  here2925 = hcdr(here2925);
  yeah* harg2927 = hcar(here2925);
  GLdouble ny = (GLdouble)getfloatcvt(harg2927);
  here2925 = hcdr(here2925);
  yeah* harg2928 = hcar(here2925);
  GLdouble nz = (GLdouble)getfloatcvt(harg2928);
  here2925 = hcdr(here2925);
  A(isnil(here2925));
  glNormal3d(nx, ny, nz);
  return Nil;
}
yeah* foop_glNormal3bv(yeah* arg2929) {
  yeah* here2930 = arg2929;
  yeah* harg2931 = hcar(here2930);
  const GLbyte* v = (const GLbyte*)opaqueval(harg2931);
  here2930 = hcdr(here2930);
  A(isnil(here2930));
  glNormal3bv(v);
  return Nil;
}
yeah* foop_glNormal3b(yeah* arg2932) {
  yeah* here2933 = arg2932;
  yeah* harg2934 = hcar(here2933);
  int nx = (int)getint(harg2934);
  here2933 = hcdr(here2933);
  yeah* harg2935 = hcar(here2933);
  int ny = (int)getint(harg2935);
  here2933 = hcdr(here2933);
  yeah* harg2936 = hcar(here2933);
  int nz = (int)getint(harg2936);
  here2933 = hcdr(here2933);
  A(isnil(here2933));
  glNormal3b(nx, ny, nz);
  return Nil;
}
yeah* foop_glNewList(yeah* arg2937) {
  yeah* here2938 = arg2937;
  yeah* harg2939 = hcar(here2938);
  GLuint list = (GLuint)getint(harg2939);
  here2938 = hcdr(here2938);
  yeah* harg2940 = hcar(here2938);
  GLenum mode = (GLenum)getint(harg2940);
  here2938 = hcdr(here2938);
  A(isnil(here2938));
  glNewList(list, mode);
  return Nil;
}
yeah* foop_glMultMatrixf(yeah* arg2941) {
  yeah* here2942 = arg2941;
  yeah* harg2943 = hcar(here2942);
  const GLfloat* m = (const GLfloat*)opaqueval(harg2943);
  here2942 = hcdr(here2942);
  A(isnil(here2942));
  glMultMatrixf(m);
  return Nil;
}
yeah* foop_glMultMatrixd(yeah* arg2944) {
  yeah* here2945 = arg2944;
  yeah* harg2946 = hcar(here2945);
  const GLdouble* m = (const GLdouble*)opaqueval(harg2946);
  here2945 = hcdr(here2945);
  A(isnil(here2945));
  glMultMatrixd(m);
  return Nil;
}
yeah* foop_glMinmax(yeah* arg2947) {
  yeah* here2948 = arg2947;
  yeah* harg2949 = hcar(here2948);
  GLenum target = (GLenum)getint(harg2949);
  here2948 = hcdr(here2948);
  yeah* harg2950 = hcar(here2948);
  GLenum internalformat = (GLenum)getint(harg2950);
  here2948 = hcdr(here2948);
  yeah* harg2951 = hcar(here2948);
  int sink = (int)getint(harg2951);
  here2948 = hcdr(here2948);
  A(isnil(here2948));
  glMinmax(target, internalformat, sink);
  return Nil;
}
yeah* foop_glMatrixMode(yeah* arg2952) {
  yeah* here2953 = arg2952;
  yeah* harg2954 = hcar(here2953);
  GLenum mode = (GLenum)getint(harg2954);
  here2953 = hcdr(here2953);
  A(isnil(here2953));
  glMatrixMode(mode);
  return Nil;
}
yeah* foop_glMaterialiv(yeah* arg2955) {
  yeah* here2956 = arg2955;
  yeah* harg2957 = hcar(here2956);
  GLenum face = (GLenum)getint(harg2957);
  here2956 = hcdr(here2956);
  yeah* harg2958 = hcar(here2956);
  GLenum pname = (GLenum)getint(harg2958);
  here2956 = hcdr(here2956);
  yeah* harg2959 = hcar(here2956);
  const GLint* params = (const GLint*)opaqueval(harg2959);
  here2956 = hcdr(here2956);
  A(isnil(here2956));
  glMaterialiv(face, pname, params);
  return Nil;
}
yeah* foop_glMateriali(yeah* arg2960) {
  yeah* here2961 = arg2960;
  yeah* harg2962 = hcar(here2961);
  GLenum face = (GLenum)getint(harg2962);
  here2961 = hcdr(here2961);
  yeah* harg2963 = hcar(here2961);
  GLenum pname = (GLenum)getint(harg2963);
  here2961 = hcdr(here2961);
  yeah* harg2964 = hcar(here2961);
  GLint param = (GLint)getint(harg2964);
  here2961 = hcdr(here2961);
  A(isnil(here2961));
  glMateriali(face, pname, param);
  return Nil;
}
yeah* foop_glMaterialfv(yeah* arg2965) {
  yeah* here2966 = arg2965;
  yeah* harg2967 = hcar(here2966);
  GLenum face = (GLenum)getint(harg2967);
  here2966 = hcdr(here2966);
  yeah* harg2968 = hcar(here2966);
  GLenum pname = (GLenum)getint(harg2968);
  here2966 = hcdr(here2966);
  yeah* harg2969 = hcar(here2966);
  const GLfloat* params = (const GLfloat*)opaqueval(harg2969);
  here2966 = hcdr(here2966);
  A(isnil(here2966));
  glMaterialfv(face, pname, params);
  return Nil;
}
yeah* foop_glMaterialf(yeah* arg2970) {
  yeah* here2971 = arg2970;
  yeah* harg2972 = hcar(here2971);
  GLenum face = (GLenum)getint(harg2972);
  here2971 = hcdr(here2971);
  yeah* harg2973 = hcar(here2971);
  GLenum pname = (GLenum)getint(harg2973);
  here2971 = hcdr(here2971);
  yeah* harg2974 = hcar(here2971);
  GLfloat param = (GLfloat)getfloatcvt(harg2974);
  here2971 = hcdr(here2971);
  A(isnil(here2971));
  glMaterialf(face, pname, param);
  return Nil;
}
yeah* foop_glMapGrid2f(yeah* arg2975) {
  yeah* here2976 = arg2975;
  yeah* harg2977 = hcar(here2976);
  GLint un = (GLint)getint(harg2977);
  here2976 = hcdr(here2976);
  yeah* harg2978 = hcar(here2976);
  GLfloat u1 = (GLfloat)getfloatcvt(harg2978);
  here2976 = hcdr(here2976);
  yeah* harg2979 = hcar(here2976);
  GLfloat u2 = (GLfloat)getfloatcvt(harg2979);
  here2976 = hcdr(here2976);
  yeah* harg2980 = hcar(here2976);
  GLint vn = (GLint)getint(harg2980);
  here2976 = hcdr(here2976);
  yeah* harg2981 = hcar(here2976);
  GLfloat v1 = (GLfloat)getfloatcvt(harg2981);
  here2976 = hcdr(here2976);
  yeah* harg2982 = hcar(here2976);
  GLfloat v2 = (GLfloat)getfloatcvt(harg2982);
  here2976 = hcdr(here2976);
  A(isnil(here2976));
  glMapGrid2f(un, u1, u2, vn, v1, v2);
  return Nil;
}
yeah* foop_glMapGrid2d(yeah* arg2983) {
  yeah* here2984 = arg2983;
  yeah* harg2985 = hcar(here2984);
  GLint un = (GLint)getint(harg2985);
  here2984 = hcdr(here2984);
  yeah* harg2986 = hcar(here2984);
  GLdouble u1 = (GLdouble)getfloatcvt(harg2986);
  here2984 = hcdr(here2984);
  yeah* harg2987 = hcar(here2984);
  GLdouble u2 = (GLdouble)getfloatcvt(harg2987);
  here2984 = hcdr(here2984);
  yeah* harg2988 = hcar(here2984);
  GLint vn = (GLint)getint(harg2988);
  here2984 = hcdr(here2984);
  yeah* harg2989 = hcar(here2984);
  GLdouble v1 = (GLdouble)getfloatcvt(harg2989);
  here2984 = hcdr(here2984);
  yeah* harg2990 = hcar(here2984);
  GLdouble v2 = (GLdouble)getfloatcvt(harg2990);
  here2984 = hcdr(here2984);
  A(isnil(here2984));
  glMapGrid2d(un, u1, u2, vn, v1, v2);
  return Nil;
}
yeah* foop_glMapGrid1f(yeah* arg2991) {
  yeah* here2992 = arg2991;
  yeah* harg2993 = hcar(here2992);
  GLint un = (GLint)getint(harg2993);
  here2992 = hcdr(here2992);
  yeah* harg2994 = hcar(here2992);
  GLfloat u1 = (GLfloat)getfloatcvt(harg2994);
  here2992 = hcdr(here2992);
  yeah* harg2995 = hcar(here2992);
  GLfloat u2 = (GLfloat)getfloatcvt(harg2995);
  here2992 = hcdr(here2992);
  A(isnil(here2992));
  glMapGrid1f(un, u1, u2);
  return Nil;
}
yeah* foop_glMapGrid1d(yeah* arg2996) {
  yeah* here2997 = arg2996;
  yeah* harg2998 = hcar(here2997);
  GLint un = (GLint)getint(harg2998);
  here2997 = hcdr(here2997);
  yeah* harg2999 = hcar(here2997);
  GLdouble u1 = (GLdouble)getfloatcvt(harg2999);
  here2997 = hcdr(here2997);
  yeah* harg3000 = hcar(here2997);
  GLdouble u2 = (GLdouble)getfloatcvt(harg3000);
  here2997 = hcdr(here2997);
  A(isnil(here2997));
  glMapGrid1d(un, u1, u2);
  return Nil;
}
yeah* foop_glMap2f(yeah* arg3001) {
  yeah* here3002 = arg3001;
  yeah* harg3003 = hcar(here3002);
  GLenum target = (GLenum)getint(harg3003);
  here3002 = hcdr(here3002);
  yeah* harg3004 = hcar(here3002);
  GLfloat u1 = (GLfloat)getfloatcvt(harg3004);
  here3002 = hcdr(here3002);
  yeah* harg3005 = hcar(here3002);
  GLfloat u2 = (GLfloat)getfloatcvt(harg3005);
  here3002 = hcdr(here3002);
  yeah* harg3006 = hcar(here3002);
  GLint ustride = (GLint)getint(harg3006);
  here3002 = hcdr(here3002);
  yeah* harg3007 = hcar(here3002);
  GLint uorder = (GLint)getint(harg3007);
  here3002 = hcdr(here3002);
  yeah* harg3008 = hcar(here3002);
  GLfloat v1 = (GLfloat)getfloatcvt(harg3008);
  here3002 = hcdr(here3002);
  yeah* harg3009 = hcar(here3002);
  GLfloat v2 = (GLfloat)getfloatcvt(harg3009);
  here3002 = hcdr(here3002);
  yeah* harg3010 = hcar(here3002);
  GLint vstride = (GLint)getint(harg3010);
  here3002 = hcdr(here3002);
  yeah* harg3011 = hcar(here3002);
  GLint vorder = (GLint)getint(harg3011);
  here3002 = hcdr(here3002);
  yeah* harg3012 = hcar(here3002);
  const GLfloat* points = (const GLfloat*)opaqueval(harg3012);
  here3002 = hcdr(here3002);
  A(isnil(here3002));
  glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
  return Nil;
}
yeah* foop_glMap2d(yeah* arg3013) {
  yeah* here3014 = arg3013;
  yeah* harg3015 = hcar(here3014);
  GLenum target = (GLenum)getint(harg3015);
  here3014 = hcdr(here3014);
  yeah* harg3016 = hcar(here3014);
  GLdouble u1 = (GLdouble)getfloatcvt(harg3016);
  here3014 = hcdr(here3014);
  yeah* harg3017 = hcar(here3014);
  GLdouble u2 = (GLdouble)getfloatcvt(harg3017);
  here3014 = hcdr(here3014);
  yeah* harg3018 = hcar(here3014);
  GLint ustride = (GLint)getint(harg3018);
  here3014 = hcdr(here3014);
  yeah* harg3019 = hcar(here3014);
  GLint uorder = (GLint)getint(harg3019);
  here3014 = hcdr(here3014);
  yeah* harg3020 = hcar(here3014);
  GLdouble v1 = (GLdouble)getfloatcvt(harg3020);
  here3014 = hcdr(here3014);
  yeah* harg3021 = hcar(here3014);
  GLdouble v2 = (GLdouble)getfloatcvt(harg3021);
  here3014 = hcdr(here3014);
  yeah* harg3022 = hcar(here3014);
  GLint vstride = (GLint)getint(harg3022);
  here3014 = hcdr(here3014);
  yeah* harg3023 = hcar(here3014);
  GLint vorder = (GLint)getint(harg3023);
  here3014 = hcdr(here3014);
  yeah* harg3024 = hcar(here3014);
  const GLdouble* points = (const GLdouble*)opaqueval(harg3024);
  here3014 = hcdr(here3014);
  A(isnil(here3014));
  glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
  return Nil;
}
yeah* foop_glMap1f(yeah* arg3025) {
  yeah* here3026 = arg3025;
  yeah* harg3027 = hcar(here3026);
  GLenum target = (GLenum)getint(harg3027);
  here3026 = hcdr(here3026);
  yeah* harg3028 = hcar(here3026);
  GLfloat u1 = (GLfloat)getfloatcvt(harg3028);
  here3026 = hcdr(here3026);
  yeah* harg3029 = hcar(here3026);
  GLfloat u2 = (GLfloat)getfloatcvt(harg3029);
  here3026 = hcdr(here3026);
  yeah* harg3030 = hcar(here3026);
  GLint stride = (GLint)getint(harg3030);
  here3026 = hcdr(here3026);
  yeah* harg3031 = hcar(here3026);
  GLint order = (GLint)getint(harg3031);
  here3026 = hcdr(here3026);
  yeah* harg3032 = hcar(here3026);
  const GLfloat* points = (const GLfloat*)opaqueval(harg3032);
  here3026 = hcdr(here3026);
  A(isnil(here3026));
  glMap1f(target, u1, u2, stride, order, points);
  return Nil;
}
yeah* foop_glMap1d(yeah* arg3033) {
  yeah* here3034 = arg3033;
  yeah* harg3035 = hcar(here3034);
  GLenum target = (GLenum)getint(harg3035);
  here3034 = hcdr(here3034);
  yeah* harg3036 = hcar(here3034);
  GLdouble u1 = (GLdouble)getfloatcvt(harg3036);
  here3034 = hcdr(here3034);
  yeah* harg3037 = hcar(here3034);
  GLdouble u2 = (GLdouble)getfloatcvt(harg3037);
  here3034 = hcdr(here3034);
  yeah* harg3038 = hcar(here3034);
  GLint stride = (GLint)getint(harg3038);
  here3034 = hcdr(here3034);
  yeah* harg3039 = hcar(here3034);
  GLint order = (GLint)getint(harg3039);
  here3034 = hcdr(here3034);
  yeah* harg3040 = hcar(here3034);
  const GLdouble* points = (const GLdouble*)opaqueval(harg3040);
  here3034 = hcdr(here3034);
  A(isnil(here3034));
  glMap1d(target, u1, u2, stride, order, points);
  return Nil;
}
yeah* foop_glLogicOp(yeah* arg3041) {
  yeah* here3042 = arg3041;
  yeah* harg3043 = hcar(here3042);
  GLenum opcode = (GLenum)getint(harg3043);
  here3042 = hcdr(here3042);
  A(isnil(here3042));
  glLogicOp(opcode);
  return Nil;
}
yeah* foop_glLoadName(yeah* arg3044) {
  yeah* here3045 = arg3044;
  yeah* harg3046 = hcar(here3045);
  GLuint name = (GLuint)getint(harg3046);
  here3045 = hcdr(here3045);
  A(isnil(here3045));
  glLoadName(name);
  return Nil;
}
yeah* foop_glLoadMatrixf(yeah* arg3047) {
  yeah* here3048 = arg3047;
  yeah* harg3049 = hcar(here3048);
  const GLfloat* m = (const GLfloat*)opaqueval(harg3049);
  here3048 = hcdr(here3048);
  A(isnil(here3048));
  glLoadMatrixf(m);
  return Nil;
}
yeah* foop_glLoadMatrixd(yeah* arg3050) {
  yeah* here3051 = arg3050;
  yeah* harg3052 = hcar(here3051);
  const GLdouble* m = (const GLdouble*)opaqueval(harg3052);
  here3051 = hcdr(here3051);
  A(isnil(here3051));
  glLoadMatrixd(m);
  return Nil;
}
yeah* foop_glLoadIdentity(yeah* arg3053) {
  yeah* here3054 = arg3053;
  A(isnil(here3054));
  glLoadIdentity();
  return Nil;
}
yeah* foop_glListBase(yeah* arg3055) {
  yeah* here3056 = arg3055;
  yeah* harg3057 = hcar(here3056);
  GLuint base = (GLuint)getint(harg3057);
  here3056 = hcdr(here3056);
  A(isnil(here3056));
  glListBase(base);
  return Nil;
}
yeah* foop_glLineWidth(yeah* arg3058) {
  yeah* here3059 = arg3058;
  yeah* harg3060 = hcar(here3059);
  GLfloat width = (GLfloat)getfloatcvt(harg3060);
  here3059 = hcdr(here3059);
  A(isnil(here3059));
  glLineWidth(width);
  return Nil;
}
yeah* foop_glLineStipple(yeah* arg3061) {
  yeah* here3062 = arg3061;
  yeah* harg3063 = hcar(here3062);
  GLint factor = (GLint)getint(harg3063);
  here3062 = hcdr(here3062);
  yeah* harg3064 = hcar(here3062);
  int pattern = (int)getint(harg3064);
  here3062 = hcdr(here3062);
  A(isnil(here3062));
  glLineStipple(factor, pattern);
  return Nil;
}
yeah* foop_glLightiv(yeah* arg3065) {
  yeah* here3066 = arg3065;
  yeah* harg3067 = hcar(here3066);
  GLenum light = (GLenum)getint(harg3067);
  here3066 = hcdr(here3066);
  yeah* harg3068 = hcar(here3066);
  GLenum pname = (GLenum)getint(harg3068);
  here3066 = hcdr(here3066);
  yeah* harg3069 = hcar(here3066);
  const GLint* params = (const GLint*)opaqueval(harg3069);
  here3066 = hcdr(here3066);
  A(isnil(here3066));
  glLightiv(light, pname, params);
  return Nil;
}
yeah* foop_glLighti(yeah* arg3070) {
  yeah* here3071 = arg3070;
  yeah* harg3072 = hcar(here3071);
  GLenum light = (GLenum)getint(harg3072);
  here3071 = hcdr(here3071);
  yeah* harg3073 = hcar(here3071);
  GLenum pname = (GLenum)getint(harg3073);
  here3071 = hcdr(here3071);
  yeah* harg3074 = hcar(here3071);
  GLint param = (GLint)getint(harg3074);
  here3071 = hcdr(here3071);
  A(isnil(here3071));
  glLighti(light, pname, param);
  return Nil;
}
yeah* foop_glLightfv(yeah* arg3075) {
  yeah* here3076 = arg3075;
  yeah* harg3077 = hcar(here3076);
  GLenum light = (GLenum)getint(harg3077);
  here3076 = hcdr(here3076);
  yeah* harg3078 = hcar(here3076);
  GLenum pname = (GLenum)getint(harg3078);
  here3076 = hcdr(here3076);
  yeah* harg3079 = hcar(here3076);
  const GLfloat* params = (const GLfloat*)opaqueval(harg3079);
  here3076 = hcdr(here3076);
  A(isnil(here3076));
  glLightfv(light, pname, params);
  return Nil;
}
yeah* foop_glLightf(yeah* arg3080) {
  yeah* here3081 = arg3080;
  yeah* harg3082 = hcar(here3081);
  GLenum light = (GLenum)getint(harg3082);
  here3081 = hcdr(here3081);
  yeah* harg3083 = hcar(here3081);
  GLenum pname = (GLenum)getint(harg3083);
  here3081 = hcdr(here3081);
  yeah* harg3084 = hcar(here3081);
  GLfloat param = (GLfloat)getfloatcvt(harg3084);
  here3081 = hcdr(here3081);
  A(isnil(here3081));
  glLightf(light, pname, param);
  return Nil;
}
yeah* foop_glLightModeliv(yeah* arg3085) {
  yeah* here3086 = arg3085;
  yeah* harg3087 = hcar(here3086);
  GLenum pname = (GLenum)getint(harg3087);
  here3086 = hcdr(here3086);
  yeah* harg3088 = hcar(here3086);
  const GLint* params = (const GLint*)opaqueval(harg3088);
  here3086 = hcdr(here3086);
  A(isnil(here3086));
  glLightModeliv(pname, params);
  return Nil;
}
yeah* foop_glLightModeli(yeah* arg3089) {
  yeah* here3090 = arg3089;
  yeah* harg3091 = hcar(here3090);
  GLenum pname = (GLenum)getint(harg3091);
  here3090 = hcdr(here3090);
  yeah* harg3092 = hcar(here3090);
  GLint param = (GLint)getint(harg3092);
  here3090 = hcdr(here3090);
  A(isnil(here3090));
  glLightModeli(pname, param);
  return Nil;
}
yeah* foop_glLightModelfv(yeah* arg3093) {
  yeah* here3094 = arg3093;
  yeah* harg3095 = hcar(here3094);
  GLenum pname = (GLenum)getint(harg3095);
  here3094 = hcdr(here3094);
  yeah* harg3096 = hcar(here3094);
  const GLfloat* params = (const GLfloat*)opaqueval(harg3096);
  here3094 = hcdr(here3094);
  A(isnil(here3094));
  glLightModelfv(pname, params);
  return Nil;
}
yeah* foop_glLightModelf(yeah* arg3097) {
  yeah* here3098 = arg3097;
  yeah* harg3099 = hcar(here3098);
  GLenum pname = (GLenum)getint(harg3099);
  here3098 = hcdr(here3098);
  yeah* harg3100 = hcar(here3098);
  GLfloat param = (GLfloat)getfloatcvt(harg3100);
  here3098 = hcdr(here3098);
  A(isnil(here3098));
  glLightModelf(pname, param);
  return Nil;
}
yeah* foop_glIsTexture(yeah* arg3101) {
  yeah* here3102 = arg3101;
  yeah* harg3103 = hcar(here3102);
  GLuint texture = (GLuint)getint(harg3103);
  here3102 = hcdr(here3102);
  A(isnil(here3102));
  GLboolean ret3104 = glIsTexture(texture);
  return integer((int)ret3104);
}
yeah* foop_glIsList(yeah* arg3105) {
  yeah* here3106 = arg3105;
  yeah* harg3107 = hcar(here3106);
  GLuint list = (GLuint)getint(harg3107);
  here3106 = hcdr(here3106);
  A(isnil(here3106));
  GLboolean ret3108 = glIsList(list);
  return integer((int)ret3108);
}
yeah* foop_glIsEnabled(yeah* arg3109) {
  yeah* here3110 = arg3109;
  yeah* harg3111 = hcar(here3110);
  GLenum cap = (GLenum)getint(harg3111);
  here3110 = hcdr(here3110);
  A(isnil(here3110));
  GLboolean ret3112 = glIsEnabled(cap);
  return integer((int)ret3112);
}
yeah* foop_glInterleavedArrays(yeah* arg3113) {
  yeah* here3114 = arg3113;
  yeah* harg3115 = hcar(here3114);
  GLenum format = (GLenum)getint(harg3115);
  here3114 = hcdr(here3114);
  yeah* harg3116 = hcar(here3114);
  GLsizei stride = (GLsizei)getint(harg3116);
  here3114 = hcdr(here3114);
  yeah* harg3117 = hcar(here3114);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg3117);
  here3114 = hcdr(here3114);
  A(isnil(here3114));
  glInterleavedArrays(format, stride, pointer);
  return Nil;
}
yeah* foop_glInitNames(yeah* arg3118) {
  yeah* here3119 = arg3118;
  A(isnil(here3119));
  glInitNames();
  return Nil;
}
yeah* foop_glIndexubv(yeah* arg3120) {
  yeah* here3121 = arg3120;
  yeah* harg3122 = hcar(here3121);
  const GLubyte* c = (const GLubyte*)opaqueval(harg3122);
  here3121 = hcdr(here3121);
  A(isnil(here3121));
  glIndexubv(c);
  return Nil;
}
yeah* foop_glIndexub(yeah* arg3123) {
  yeah* here3124 = arg3123;
  yeah* harg3125 = hcar(here3124);
  int c = (int)getint(harg3125);
  here3124 = hcdr(here3124);
  A(isnil(here3124));
  glIndexub(c);
  return Nil;
}
yeah* foop_glIndexsv(yeah* arg3126) {
  yeah* here3127 = arg3126;
  yeah* harg3128 = hcar(here3127);
  const GLshort* c = (const GLshort*)opaqueval(harg3128);
  here3127 = hcdr(here3127);
  A(isnil(here3127));
  glIndexsv(c);
  return Nil;
}
yeah* foop_glIndexs(yeah* arg3129) {
  yeah* here3130 = arg3129;
  yeah* harg3131 = hcar(here3130);
  int c = (int)getint(harg3131);
  here3130 = hcdr(here3130);
  A(isnil(here3130));
  glIndexs(c);
  return Nil;
}
yeah* foop_glIndexiv(yeah* arg3132) {
  yeah* here3133 = arg3132;
  yeah* harg3134 = hcar(here3133);
  const GLint* c = (const GLint*)opaqueval(harg3134);
  here3133 = hcdr(here3133);
  A(isnil(here3133));
  glIndexiv(c);
  return Nil;
}
yeah* foop_glIndexi(yeah* arg3135) {
  yeah* here3136 = arg3135;
  yeah* harg3137 = hcar(here3136);
  GLint c = (GLint)getint(harg3137);
  here3136 = hcdr(here3136);
  A(isnil(here3136));
  glIndexi(c);
  return Nil;
}
yeah* foop_glIndexfv(yeah* arg3138) {
  yeah* here3139 = arg3138;
  yeah* harg3140 = hcar(here3139);
  const GLfloat* c = (const GLfloat*)opaqueval(harg3140);
  here3139 = hcdr(here3139);
  A(isnil(here3139));
  glIndexfv(c);
  return Nil;
}
yeah* foop_glIndexf(yeah* arg3141) {
  yeah* here3142 = arg3141;
  yeah* harg3143 = hcar(here3142);
  GLfloat c = (GLfloat)getfloatcvt(harg3143);
  here3142 = hcdr(here3142);
  A(isnil(here3142));
  glIndexf(c);
  return Nil;
}
yeah* foop_glIndexdv(yeah* arg3144) {
  yeah* here3145 = arg3144;
  yeah* harg3146 = hcar(here3145);
  const GLdouble* c = (const GLdouble*)opaqueval(harg3146);
  here3145 = hcdr(here3145);
  A(isnil(here3145));
  glIndexdv(c);
  return Nil;
}
yeah* foop_glIndexd(yeah* arg3147) {
  yeah* here3148 = arg3147;
  yeah* harg3149 = hcar(here3148);
  GLdouble c = (GLdouble)getfloatcvt(harg3149);
  here3148 = hcdr(here3148);
  A(isnil(here3148));
  glIndexd(c);
  return Nil;
}
yeah* foop_glIndexPointer(yeah* arg3150) {
  yeah* here3151 = arg3150;
  yeah* harg3152 = hcar(here3151);
  GLenum type = (GLenum)getint(harg3152);
  here3151 = hcdr(here3151);
  yeah* harg3153 = hcar(here3151);
  GLsizei stride = (GLsizei)getint(harg3153);
  here3151 = hcdr(here3151);
  yeah* harg3154 = hcar(here3151);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg3154);
  here3151 = hcdr(here3151);
  A(isnil(here3151));
  glIndexPointer(type, stride, pointer);
  return Nil;
}
yeah* foop_glIndexMask(yeah* arg3155) {
  yeah* here3156 = arg3155;
  yeah* harg3157 = hcar(here3156);
  GLuint mask = (GLuint)getint(harg3157);
  here3156 = hcdr(here3156);
  A(isnil(here3156));
  glIndexMask(mask);
  return Nil;
}
yeah* foop_glHistogram(yeah* arg3158) {
  yeah* here3159 = arg3158;
  yeah* harg3160 = hcar(here3159);
  GLenum target = (GLenum)getint(harg3160);
  here3159 = hcdr(here3159);
  yeah* harg3161 = hcar(here3159);
  GLsizei width = (GLsizei)getint(harg3161);
  here3159 = hcdr(here3159);
  yeah* harg3162 = hcar(here3159);
  GLenum internalformat = (GLenum)getint(harg3162);
  here3159 = hcdr(here3159);
  yeah* harg3163 = hcar(here3159);
  int sink = (int)getint(harg3163);
  here3159 = hcdr(here3159);
  A(isnil(here3159));
  glHistogram(target, width, internalformat, sink);
  return Nil;
}
yeah* foop_glHint(yeah* arg3164) {
  yeah* here3165 = arg3164;
  yeah* harg3166 = hcar(here3165);
  GLenum target = (GLenum)getint(harg3166);
  here3165 = hcdr(here3165);
  yeah* harg3167 = hcar(here3165);
  GLenum mode = (GLenum)getint(harg3167);
  here3165 = hcdr(here3165);
  A(isnil(here3165));
  glHint(target, mode);
  return Nil;
}
yeah* foop_glGetTexParameteriv(yeah* arg3168) {
  yeah* here3169 = arg3168;
  yeah* harg3170 = hcar(here3169);
  GLenum target = (GLenum)getint(harg3170);
  here3169 = hcdr(here3169);
  yeah* harg3171 = hcar(here3169);
  GLenum pname = (GLenum)getint(harg3171);
  here3169 = hcdr(here3169);
  yeah* harg3172 = hcar(here3169);
  GLint* params = (GLint*)opaqueval(harg3172);
  here3169 = hcdr(here3169);
  A(isnil(here3169));
  glGetTexParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glGetTexParameterfv(yeah* arg3173) {
  yeah* here3174 = arg3173;
  yeah* harg3175 = hcar(here3174);
  GLenum target = (GLenum)getint(harg3175);
  here3174 = hcdr(here3174);
  yeah* harg3176 = hcar(here3174);
  GLenum pname = (GLenum)getint(harg3176);
  here3174 = hcdr(here3174);
  yeah* harg3177 = hcar(here3174);
  GLfloat* params = (GLfloat*)opaqueval(harg3177);
  here3174 = hcdr(here3174);
  A(isnil(here3174));
  glGetTexParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetTexLevelParameteriv(yeah* arg3178) {
  yeah* here3179 = arg3178;
  yeah* harg3180 = hcar(here3179);
  GLenum target = (GLenum)getint(harg3180);
  here3179 = hcdr(here3179);
  yeah* harg3181 = hcar(here3179);
  GLint level = (GLint)getint(harg3181);
  here3179 = hcdr(here3179);
  yeah* harg3182 = hcar(here3179);
  GLenum pname = (GLenum)getint(harg3182);
  here3179 = hcdr(here3179);
  yeah* harg3183 = hcar(here3179);
  GLint* params = (GLint*)opaqueval(harg3183);
  here3179 = hcdr(here3179);
  A(isnil(here3179));
  glGetTexLevelParameteriv(target, level, pname, params);
  return Nil;
}
yeah* foop_glGetTexLevelParameterfv(yeah* arg3184) {
  yeah* here3185 = arg3184;
  yeah* harg3186 = hcar(here3185);
  GLenum target = (GLenum)getint(harg3186);
  here3185 = hcdr(here3185);
  yeah* harg3187 = hcar(here3185);
  GLint level = (GLint)getint(harg3187);
  here3185 = hcdr(here3185);
  yeah* harg3188 = hcar(here3185);
  GLenum pname = (GLenum)getint(harg3188);
  here3185 = hcdr(here3185);
  yeah* harg3189 = hcar(here3185);
  GLfloat* params = (GLfloat*)opaqueval(harg3189);
  here3185 = hcdr(here3185);
  A(isnil(here3185));
  glGetTexLevelParameterfv(target, level, pname, params);
  return Nil;
}
yeah* foop_glGetTexImage(yeah* arg3190) {
  yeah* here3191 = arg3190;
  yeah* harg3192 = hcar(here3191);
  GLenum target = (GLenum)getint(harg3192);
  here3191 = hcdr(here3191);
  yeah* harg3193 = hcar(here3191);
  GLint level = (GLint)getint(harg3193);
  here3191 = hcdr(here3191);
  yeah* harg3194 = hcar(here3191);
  GLenum format = (GLenum)getint(harg3194);
  here3191 = hcdr(here3191);
  yeah* harg3195 = hcar(here3191);
  GLenum type = (GLenum)getint(harg3195);
  here3191 = hcdr(here3191);
  yeah* harg3196 = hcar(here3191);
  GLvoid* pixels = (GLvoid*)opaqueval(harg3196);
  here3191 = hcdr(here3191);
  A(isnil(here3191));
  glGetTexImage(target, level, format, type, pixels);
  return Nil;
}
yeah* foop_glGetTexGeniv(yeah* arg3197) {
  yeah* here3198 = arg3197;
  yeah* harg3199 = hcar(here3198);
  GLenum coord = (GLenum)getint(harg3199);
  here3198 = hcdr(here3198);
  yeah* harg3200 = hcar(here3198);
  GLenum pname = (GLenum)getint(harg3200);
  here3198 = hcdr(here3198);
  yeah* harg3201 = hcar(here3198);
  GLint* params = (GLint*)opaqueval(harg3201);
  here3198 = hcdr(here3198);
  A(isnil(here3198));
  glGetTexGeniv(coord, pname, params);
  return Nil;
}
yeah* foop_glGetTexGenfv(yeah* arg3202) {
  yeah* here3203 = arg3202;
  yeah* harg3204 = hcar(here3203);
  GLenum coord = (GLenum)getint(harg3204);
  here3203 = hcdr(here3203);
  yeah* harg3205 = hcar(here3203);
  GLenum pname = (GLenum)getint(harg3205);
  here3203 = hcdr(here3203);
  yeah* harg3206 = hcar(here3203);
  GLfloat* params = (GLfloat*)opaqueval(harg3206);
  here3203 = hcdr(here3203);
  A(isnil(here3203));
  glGetTexGenfv(coord, pname, params);
  return Nil;
}
yeah* foop_glGetTexGendv(yeah* arg3207) {
  yeah* here3208 = arg3207;
  yeah* harg3209 = hcar(here3208);
  GLenum coord = (GLenum)getint(harg3209);
  here3208 = hcdr(here3208);
  yeah* harg3210 = hcar(here3208);
  GLenum pname = (GLenum)getint(harg3210);
  here3208 = hcdr(here3208);
  yeah* harg3211 = hcar(here3208);
  GLdouble* params = (GLdouble*)opaqueval(harg3211);
  here3208 = hcdr(here3208);
  A(isnil(here3208));
  glGetTexGendv(coord, pname, params);
  return Nil;
}
yeah* foop_glGetTexEnviv(yeah* arg3212) {
  yeah* here3213 = arg3212;
  yeah* harg3214 = hcar(here3213);
  GLenum target = (GLenum)getint(harg3214);
  here3213 = hcdr(here3213);
  yeah* harg3215 = hcar(here3213);
  GLenum pname = (GLenum)getint(harg3215);
  here3213 = hcdr(here3213);
  yeah* harg3216 = hcar(here3213);
  GLint* params = (GLint*)opaqueval(harg3216);
  here3213 = hcdr(here3213);
  A(isnil(here3213));
  glGetTexEnviv(target, pname, params);
  return Nil;
}
yeah* foop_glGetTexEnvfv(yeah* arg3217) {
  yeah* here3218 = arg3217;
  yeah* harg3219 = hcar(here3218);
  GLenum target = (GLenum)getint(harg3219);
  here3218 = hcdr(here3218);
  yeah* harg3220 = hcar(here3218);
  GLenum pname = (GLenum)getint(harg3220);
  here3218 = hcdr(here3218);
  yeah* harg3221 = hcar(here3218);
  GLfloat* params = (GLfloat*)opaqueval(harg3221);
  here3218 = hcdr(here3218);
  A(isnil(here3218));
  glGetTexEnvfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetString(yeah* arg3222) {
  yeah* here3223 = arg3222;
  yeah* harg3224 = hcar(here3223);
  GLenum name = (GLenum)getint(harg3224);
  here3223 = hcdr(here3223);
  A(isnil(here3223));
  const GLubyte* ret3225 = glGetString(name);
  return opaque((void*)ret3225);
}
yeah* foop_glGetSeparableFilter(yeah* arg3226) {
  yeah* here3227 = arg3226;
  yeah* harg3228 = hcar(here3227);
  GLenum target = (GLenum)getint(harg3228);
  here3227 = hcdr(here3227);
  yeah* harg3229 = hcar(here3227);
  GLenum format = (GLenum)getint(harg3229);
  here3227 = hcdr(here3227);
  yeah* harg3230 = hcar(here3227);
  GLenum type = (GLenum)getint(harg3230);
  here3227 = hcdr(here3227);
  yeah* harg3231 = hcar(here3227);
  GLvoid* row = (GLvoid*)opaqueval(harg3231);
  here3227 = hcdr(here3227);
  yeah* harg3232 = hcar(here3227);
  GLvoid* column = (GLvoid*)opaqueval(harg3232);
  here3227 = hcdr(here3227);
  yeah* harg3233 = hcar(here3227);
  GLvoid* span = (GLvoid*)opaqueval(harg3233);
  here3227 = hcdr(here3227);
  A(isnil(here3227));
  glGetSeparableFilter(target, format, type, row, column, span);
  return Nil;
}
yeah* foop_glGetPolygonStipple(yeah* arg3234) {
  yeah* here3235 = arg3234;
  yeah* harg3236 = hcar(here3235);
  GLubyte* mask = (GLubyte*)opaqueval(harg3236);
  here3235 = hcdr(here3235);
  A(isnil(here3235));
  glGetPolygonStipple(mask);
  return Nil;
}
yeah* foop_glGetPointerv(yeah* arg3237) {
  yeah* here3238 = arg3237;
  yeah* harg3239 = hcar(here3238);
  GLenum pname = (GLenum)getint(harg3239);
  here3238 = hcdr(here3238);
  yeah* harg3240 = hcar(here3238);
  GLvoid** params = (GLvoid**)opaqueval(harg3240);
  here3238 = hcdr(here3238);
  A(isnil(here3238));
  glGetPointerv(pname, params);
  return Nil;
}
yeah* foop_glGetPixelMapusv(yeah* arg3241) {
  yeah* here3242 = arg3241;
  yeah* harg3243 = hcar(here3242);
  GLenum map = (GLenum)getint(harg3243);
  here3242 = hcdr(here3242);
  yeah* harg3244 = hcar(here3242);
  GLushort* values = (GLushort*)opaqueval(harg3244);
  here3242 = hcdr(here3242);
  A(isnil(here3242));
  glGetPixelMapusv(map, values);
  return Nil;
}
yeah* foop_glGetPixelMapuiv(yeah* arg3245) {
  yeah* here3246 = arg3245;
  yeah* harg3247 = hcar(here3246);
  GLenum map = (GLenum)getint(harg3247);
  here3246 = hcdr(here3246);
  yeah* harg3248 = hcar(here3246);
  GLuint* values = (GLuint*)opaqueval(harg3248);
  here3246 = hcdr(here3246);
  A(isnil(here3246));
  glGetPixelMapuiv(map, values);
  return Nil;
}
yeah* foop_glGetPixelMapfv(yeah* arg3249) {
  yeah* here3250 = arg3249;
  yeah* harg3251 = hcar(here3250);
  GLenum map = (GLenum)getint(harg3251);
  here3250 = hcdr(here3250);
  yeah* harg3252 = hcar(here3250);
  GLfloat* values = (GLfloat*)opaqueval(harg3252);
  here3250 = hcdr(here3250);
  A(isnil(here3250));
  glGetPixelMapfv(map, values);
  return Nil;
}
yeah* foop_glGetMinmaxParameteriv(yeah* arg3253) {
  yeah* here3254 = arg3253;
  yeah* harg3255 = hcar(here3254);
  GLenum target = (GLenum)getint(harg3255);
  here3254 = hcdr(here3254);
  yeah* harg3256 = hcar(here3254);
  GLenum pname = (GLenum)getint(harg3256);
  here3254 = hcdr(here3254);
  yeah* harg3257 = hcar(here3254);
  GLint* params = (GLint*)opaqueval(harg3257);
  here3254 = hcdr(here3254);
  A(isnil(here3254));
  glGetMinmaxParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glGetMinmaxParameterfv(yeah* arg3258) {
  yeah* here3259 = arg3258;
  yeah* harg3260 = hcar(here3259);
  GLenum target = (GLenum)getint(harg3260);
  here3259 = hcdr(here3259);
  yeah* harg3261 = hcar(here3259);
  GLenum pname = (GLenum)getint(harg3261);
  here3259 = hcdr(here3259);
  yeah* harg3262 = hcar(here3259);
  GLfloat* params = (GLfloat*)opaqueval(harg3262);
  here3259 = hcdr(here3259);
  A(isnil(here3259));
  glGetMinmaxParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetMinmax(yeah* arg3263) {
  yeah* here3264 = arg3263;
  yeah* harg3265 = hcar(here3264);
  GLenum target = (GLenum)getint(harg3265);
  here3264 = hcdr(here3264);
  yeah* harg3266 = hcar(here3264);
  int reset = (int)getint(harg3266);
  here3264 = hcdr(here3264);
  yeah* harg3267 = hcar(here3264);
  GLenum format = (GLenum)getint(harg3267);
  here3264 = hcdr(here3264);
  yeah* harg3268 = hcar(here3264);
  GLenum type = (GLenum)getint(harg3268);
  here3264 = hcdr(here3264);
  yeah* harg3269 = hcar(here3264);
  GLvoid* values = (GLvoid*)opaqueval(harg3269);
  here3264 = hcdr(here3264);
  A(isnil(here3264));
  glGetMinmax(target, reset, format, type, values);
  return Nil;
}
yeah* foop_glGetMaterialiv(yeah* arg3270) {
  yeah* here3271 = arg3270;
  yeah* harg3272 = hcar(here3271);
  GLenum face = (GLenum)getint(harg3272);
  here3271 = hcdr(here3271);
  yeah* harg3273 = hcar(here3271);
  GLenum pname = (GLenum)getint(harg3273);
  here3271 = hcdr(here3271);
  yeah* harg3274 = hcar(here3271);
  GLint* params = (GLint*)opaqueval(harg3274);
  here3271 = hcdr(here3271);
  A(isnil(here3271));
  glGetMaterialiv(face, pname, params);
  return Nil;
}
yeah* foop_glGetMaterialfv(yeah* arg3275) {
  yeah* here3276 = arg3275;
  yeah* harg3277 = hcar(here3276);
  GLenum face = (GLenum)getint(harg3277);
  here3276 = hcdr(here3276);
  yeah* harg3278 = hcar(here3276);
  GLenum pname = (GLenum)getint(harg3278);
  here3276 = hcdr(here3276);
  yeah* harg3279 = hcar(here3276);
  GLfloat* params = (GLfloat*)opaqueval(harg3279);
  here3276 = hcdr(here3276);
  A(isnil(here3276));
  glGetMaterialfv(face, pname, params);
  return Nil;
}
yeah* foop_glGetMapiv(yeah* arg3280) {
  yeah* here3281 = arg3280;
  yeah* harg3282 = hcar(here3281);
  GLenum target = (GLenum)getint(harg3282);
  here3281 = hcdr(here3281);
  yeah* harg3283 = hcar(here3281);
  GLenum query = (GLenum)getint(harg3283);
  here3281 = hcdr(here3281);
  yeah* harg3284 = hcar(here3281);
  GLint* v = (GLint*)opaqueval(harg3284);
  here3281 = hcdr(here3281);
  A(isnil(here3281));
  glGetMapiv(target, query, v);
  return Nil;
}
yeah* foop_glGetMapfv(yeah* arg3285) {
  yeah* here3286 = arg3285;
  yeah* harg3287 = hcar(here3286);
  GLenum target = (GLenum)getint(harg3287);
  here3286 = hcdr(here3286);
  yeah* harg3288 = hcar(here3286);
  GLenum query = (GLenum)getint(harg3288);
  here3286 = hcdr(here3286);
  yeah* harg3289 = hcar(here3286);
  GLfloat* v = (GLfloat*)opaqueval(harg3289);
  here3286 = hcdr(here3286);
  A(isnil(here3286));
  glGetMapfv(target, query, v);
  return Nil;
}
yeah* foop_glGetMapdv(yeah* arg3290) {
  yeah* here3291 = arg3290;
  yeah* harg3292 = hcar(here3291);
  GLenum target = (GLenum)getint(harg3292);
  here3291 = hcdr(here3291);
  yeah* harg3293 = hcar(here3291);
  GLenum query = (GLenum)getint(harg3293);
  here3291 = hcdr(here3291);
  yeah* harg3294 = hcar(here3291);
  GLdouble* v = (GLdouble*)opaqueval(harg3294);
  here3291 = hcdr(here3291);
  A(isnil(here3291));
  glGetMapdv(target, query, v);
  return Nil;
}
yeah* foop_glGetLightiv(yeah* arg3295) {
  yeah* here3296 = arg3295;
  yeah* harg3297 = hcar(here3296);
  GLenum light = (GLenum)getint(harg3297);
  here3296 = hcdr(here3296);
  yeah* harg3298 = hcar(here3296);
  GLenum pname = (GLenum)getint(harg3298);
  here3296 = hcdr(here3296);
  yeah* harg3299 = hcar(here3296);
  GLint* params = (GLint*)opaqueval(harg3299);
  here3296 = hcdr(here3296);
  A(isnil(here3296));
  glGetLightiv(light, pname, params);
  return Nil;
}
yeah* foop_glGetLightfv(yeah* arg3300) {
  yeah* here3301 = arg3300;
  yeah* harg3302 = hcar(here3301);
  GLenum light = (GLenum)getint(harg3302);
  here3301 = hcdr(here3301);
  yeah* harg3303 = hcar(here3301);
  GLenum pname = (GLenum)getint(harg3303);
  here3301 = hcdr(here3301);
  yeah* harg3304 = hcar(here3301);
  GLfloat* params = (GLfloat*)opaqueval(harg3304);
  here3301 = hcdr(here3301);
  A(isnil(here3301));
  glGetLightfv(light, pname, params);
  return Nil;
}
yeah* foop_glGetIntegerv(yeah* arg3305) {
  yeah* here3306 = arg3305;
  yeah* harg3307 = hcar(here3306);
  GLenum pname = (GLenum)getint(harg3307);
  here3306 = hcdr(here3306);
  yeah* harg3308 = hcar(here3306);
  GLint* params = (GLint*)opaqueval(harg3308);
  here3306 = hcdr(here3306);
  A(isnil(here3306));
  glGetIntegerv(pname, params);
  return Nil;
}
yeah* foop_glGetHistogramParameteriv(yeah* arg3309) {
  yeah* here3310 = arg3309;
  yeah* harg3311 = hcar(here3310);
  GLenum target = (GLenum)getint(harg3311);
  here3310 = hcdr(here3310);
  yeah* harg3312 = hcar(here3310);
  GLenum pname = (GLenum)getint(harg3312);
  here3310 = hcdr(here3310);
  yeah* harg3313 = hcar(here3310);
  GLint* params = (GLint*)opaqueval(harg3313);
  here3310 = hcdr(here3310);
  A(isnil(here3310));
  glGetHistogramParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glGetHistogramParameterfv(yeah* arg3314) {
  yeah* here3315 = arg3314;
  yeah* harg3316 = hcar(here3315);
  GLenum target = (GLenum)getint(harg3316);
  here3315 = hcdr(here3315);
  yeah* harg3317 = hcar(here3315);
  GLenum pname = (GLenum)getint(harg3317);
  here3315 = hcdr(here3315);
  yeah* harg3318 = hcar(here3315);
  GLfloat* params = (GLfloat*)opaqueval(harg3318);
  here3315 = hcdr(here3315);
  A(isnil(here3315));
  glGetHistogramParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetHistogram(yeah* arg3319) {
  yeah* here3320 = arg3319;
  yeah* harg3321 = hcar(here3320);
  GLenum target = (GLenum)getint(harg3321);
  here3320 = hcdr(here3320);
  yeah* harg3322 = hcar(here3320);
  int reset = (int)getint(harg3322);
  here3320 = hcdr(here3320);
  yeah* harg3323 = hcar(here3320);
  GLenum format = (GLenum)getint(harg3323);
  here3320 = hcdr(here3320);
  yeah* harg3324 = hcar(here3320);
  GLenum type = (GLenum)getint(harg3324);
  here3320 = hcdr(here3320);
  yeah* harg3325 = hcar(here3320);
  GLvoid* values = (GLvoid*)opaqueval(harg3325);
  here3320 = hcdr(here3320);
  A(isnil(here3320));
  glGetHistogram(target, reset, format, type, values);
  return Nil;
}
yeah* foop_glGetFloatv(yeah* arg3326) {
  yeah* here3327 = arg3326;
  yeah* harg3328 = hcar(here3327);
  GLenum pname = (GLenum)getint(harg3328);
  here3327 = hcdr(here3327);
  yeah* harg3329 = hcar(here3327);
  GLfloat* params = (GLfloat*)opaqueval(harg3329);
  here3327 = hcdr(here3327);
  A(isnil(here3327));
  glGetFloatv(pname, params);
  return Nil;
}
yeah* foop_glGetError(yeah* arg3330) {
  yeah* here3331 = arg3330;
  A(isnil(here3331));
  GLenum ret3332 = glGetError();
  return integer((int)ret3332);
}
yeah* foop_glGetDoublev(yeah* arg3333) {
  yeah* here3334 = arg3333;
  yeah* harg3335 = hcar(here3334);
  GLenum pname = (GLenum)getint(harg3335);
  here3334 = hcdr(here3334);
  yeah* harg3336 = hcar(here3334);
  GLdouble* params = (GLdouble*)opaqueval(harg3336);
  here3334 = hcdr(here3334);
  A(isnil(here3334));
  glGetDoublev(pname, params);
  return Nil;
}
yeah* foop_glGetConvolutionParameteriv(yeah* arg3337) {
  yeah* here3338 = arg3337;
  yeah* harg3339 = hcar(here3338);
  GLenum target = (GLenum)getint(harg3339);
  here3338 = hcdr(here3338);
  yeah* harg3340 = hcar(here3338);
  GLenum pname = (GLenum)getint(harg3340);
  here3338 = hcdr(here3338);
  yeah* harg3341 = hcar(here3338);
  GLint* params = (GLint*)opaqueval(harg3341);
  here3338 = hcdr(here3338);
  A(isnil(here3338));
  glGetConvolutionParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glGetConvolutionParameterfv(yeah* arg3342) {
  yeah* here3343 = arg3342;
  yeah* harg3344 = hcar(here3343);
  GLenum target = (GLenum)getint(harg3344);
  here3343 = hcdr(here3343);
  yeah* harg3345 = hcar(here3343);
  GLenum pname = (GLenum)getint(harg3345);
  here3343 = hcdr(here3343);
  yeah* harg3346 = hcar(here3343);
  GLfloat* params = (GLfloat*)opaqueval(harg3346);
  here3343 = hcdr(here3343);
  A(isnil(here3343));
  glGetConvolutionParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetConvolutionFilter(yeah* arg3347) {
  yeah* here3348 = arg3347;
  yeah* harg3349 = hcar(here3348);
  GLenum target = (GLenum)getint(harg3349);
  here3348 = hcdr(here3348);
  yeah* harg3350 = hcar(here3348);
  GLenum format = (GLenum)getint(harg3350);
  here3348 = hcdr(here3348);
  yeah* harg3351 = hcar(here3348);
  GLenum type = (GLenum)getint(harg3351);
  here3348 = hcdr(here3348);
  yeah* harg3352 = hcar(here3348);
  GLvoid* image = (GLvoid*)opaqueval(harg3352);
  here3348 = hcdr(here3348);
  A(isnil(here3348));
  glGetConvolutionFilter(target, format, type, image);
  return Nil;
}
yeah* foop_glGetColorTableParameteriv(yeah* arg3353) {
  yeah* here3354 = arg3353;
  yeah* harg3355 = hcar(here3354);
  GLenum target = (GLenum)getint(harg3355);
  here3354 = hcdr(here3354);
  yeah* harg3356 = hcar(here3354);
  GLenum pname = (GLenum)getint(harg3356);
  here3354 = hcdr(here3354);
  yeah* harg3357 = hcar(here3354);
  GLint* params = (GLint*)opaqueval(harg3357);
  here3354 = hcdr(here3354);
  A(isnil(here3354));
  glGetColorTableParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glGetColorTableParameterfv(yeah* arg3358) {
  yeah* here3359 = arg3358;
  yeah* harg3360 = hcar(here3359);
  GLenum target = (GLenum)getint(harg3360);
  here3359 = hcdr(here3359);
  yeah* harg3361 = hcar(here3359);
  GLenum pname = (GLenum)getint(harg3361);
  here3359 = hcdr(here3359);
  yeah* harg3362 = hcar(here3359);
  GLfloat* params = (GLfloat*)opaqueval(harg3362);
  here3359 = hcdr(here3359);
  A(isnil(here3359));
  glGetColorTableParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glGetColorTable(yeah* arg3363) {
  yeah* here3364 = arg3363;
  yeah* harg3365 = hcar(here3364);
  GLenum target = (GLenum)getint(harg3365);
  here3364 = hcdr(here3364);
  yeah* harg3366 = hcar(here3364);
  GLenum format = (GLenum)getint(harg3366);
  here3364 = hcdr(here3364);
  yeah* harg3367 = hcar(here3364);
  GLenum type = (GLenum)getint(harg3367);
  here3364 = hcdr(here3364);
  yeah* harg3368 = hcar(here3364);
  GLvoid* table = (GLvoid*)opaqueval(harg3368);
  here3364 = hcdr(here3364);
  A(isnil(here3364));
  glGetColorTable(target, format, type, table);
  return Nil;
}
yeah* foop_glGetClipPlane(yeah* arg3369) {
  yeah* here3370 = arg3369;
  yeah* harg3371 = hcar(here3370);
  GLenum plane = (GLenum)getint(harg3371);
  here3370 = hcdr(here3370);
  yeah* harg3372 = hcar(here3370);
  GLdouble* equation = (GLdouble*)opaqueval(harg3372);
  here3370 = hcdr(here3370);
  A(isnil(here3370));
  glGetClipPlane(plane, equation);
  return Nil;
}
yeah* foop_glGetBooleanv(yeah* arg3373) {
  yeah* here3374 = arg3373;
  yeah* harg3375 = hcar(here3374);
  GLenum pname = (GLenum)getint(harg3375);
  here3374 = hcdr(here3374);
  yeah* harg3376 = hcar(here3374);
  GLboolean* params = (GLboolean*)opaqueval(harg3376);
  here3374 = hcdr(here3374);
  A(isnil(here3374));
  glGetBooleanv(pname, params);
  return Nil;
}
yeah* foop_glGenTextures(yeah* arg3377) {
  yeah* here3378 = arg3377;
  yeah* harg3379 = hcar(here3378);
  GLsizei n = (GLsizei)getint(harg3379);
  here3378 = hcdr(here3378);
  yeah* harg3380 = hcar(here3378);
  GLuint* textures = (GLuint*)opaqueval(harg3380);
  here3378 = hcdr(here3378);
  A(isnil(here3378));
  glGenTextures(n, textures);
  return Nil;
}
yeah* foop_glGenLists(yeah* arg3381) {
  yeah* here3382 = arg3381;
  yeah* harg3383 = hcar(here3382);
  GLsizei range = (GLsizei)getint(harg3383);
  here3382 = hcdr(here3382);
  A(isnil(here3382));
  GLuint ret3384 = glGenLists(range);
  return integer((int)ret3384);
}
yeah* foop_glFrustum(yeah* arg3385) {
  yeah* here3386 = arg3385;
  yeah* harg3387 = hcar(here3386);
  GLdouble left = (GLdouble)getfloatcvt(harg3387);
  here3386 = hcdr(here3386);
  yeah* harg3388 = hcar(here3386);
  GLdouble right = (GLdouble)getfloatcvt(harg3388);
  here3386 = hcdr(here3386);
  yeah* harg3389 = hcar(here3386);
  GLdouble bottom = (GLdouble)getfloatcvt(harg3389);
  here3386 = hcdr(here3386);
  yeah* harg3390 = hcar(here3386);
  GLdouble top = (GLdouble)getfloatcvt(harg3390);
  here3386 = hcdr(here3386);
  yeah* harg3391 = hcar(here3386);
  GLdouble zNear = (GLdouble)getfloatcvt(harg3391);
  here3386 = hcdr(here3386);
  yeah* harg3392 = hcar(here3386);
  GLdouble zFar = (GLdouble)getfloatcvt(harg3392);
  here3386 = hcdr(here3386);
  A(isnil(here3386));
  glFrustum(left, right, bottom, top, zNear, zFar);
  return Nil;
}
yeah* foop_glFrontFace(yeah* arg3393) {
  yeah* here3394 = arg3393;
  yeah* harg3395 = hcar(here3394);
  GLenum mode = (GLenum)getint(harg3395);
  here3394 = hcdr(here3394);
  A(isnil(here3394));
  glFrontFace(mode);
  return Nil;
}
yeah* foop_glFogiv(yeah* arg3396) {
  yeah* here3397 = arg3396;
  yeah* harg3398 = hcar(here3397);
  GLenum pname = (GLenum)getint(harg3398);
  here3397 = hcdr(here3397);
  yeah* harg3399 = hcar(here3397);
  const GLint* params = (const GLint*)opaqueval(harg3399);
  here3397 = hcdr(here3397);
  A(isnil(here3397));
  glFogiv(pname, params);
  return Nil;
}
yeah* foop_glFogi(yeah* arg3400) {
  yeah* here3401 = arg3400;
  yeah* harg3402 = hcar(here3401);
  GLenum pname = (GLenum)getint(harg3402);
  here3401 = hcdr(here3401);
  yeah* harg3403 = hcar(here3401);
  GLint param = (GLint)getint(harg3403);
  here3401 = hcdr(here3401);
  A(isnil(here3401));
  glFogi(pname, param);
  return Nil;
}
yeah* foop_glFogfv(yeah* arg3404) {
  yeah* here3405 = arg3404;
  yeah* harg3406 = hcar(here3405);
  GLenum pname = (GLenum)getint(harg3406);
  here3405 = hcdr(here3405);
  yeah* harg3407 = hcar(here3405);
  const GLfloat* params = (const GLfloat*)opaqueval(harg3407);
  here3405 = hcdr(here3405);
  A(isnil(here3405));
  glFogfv(pname, params);
  return Nil;
}
yeah* foop_glFogf(yeah* arg3408) {
  yeah* here3409 = arg3408;
  yeah* harg3410 = hcar(here3409);
  GLenum pname = (GLenum)getint(harg3410);
  here3409 = hcdr(here3409);
  yeah* harg3411 = hcar(here3409);
  GLfloat param = (GLfloat)getfloatcvt(harg3411);
  here3409 = hcdr(here3409);
  A(isnil(here3409));
  glFogf(pname, param);
  return Nil;
}
yeah* foop_glFlush(yeah* arg3412) {
  yeah* here3413 = arg3412;
  A(isnil(here3413));
  glFlush();
  return Nil;
}
yeah* foop_glFinish(yeah* arg3414) {
  yeah* here3415 = arg3414;
  A(isnil(here3415));
  glFinish();
  return Nil;
}
yeah* foop_glFeedbackBuffer(yeah* arg3416) {
  yeah* here3417 = arg3416;
  yeah* harg3418 = hcar(here3417);
  GLsizei size = (GLsizei)getint(harg3418);
  here3417 = hcdr(here3417);
  yeah* harg3419 = hcar(here3417);
  GLenum type = (GLenum)getint(harg3419);
  here3417 = hcdr(here3417);
  yeah* harg3420 = hcar(here3417);
  GLfloat* buffer = (GLfloat*)opaqueval(harg3420);
  here3417 = hcdr(here3417);
  A(isnil(here3417));
  glFeedbackBuffer(size, type, buffer);
  return Nil;
}
yeah* foop_glEvalPoint2(yeah* arg3421) {
  yeah* here3422 = arg3421;
  yeah* harg3423 = hcar(here3422);
  GLint i = (GLint)getint(harg3423);
  here3422 = hcdr(here3422);
  yeah* harg3424 = hcar(here3422);
  GLint j = (GLint)getint(harg3424);
  here3422 = hcdr(here3422);
  A(isnil(here3422));
  glEvalPoint2(i, j);
  return Nil;
}
yeah* foop_glEvalPoint1(yeah* arg3425) {
  yeah* here3426 = arg3425;
  yeah* harg3427 = hcar(here3426);
  GLint i = (GLint)getint(harg3427);
  here3426 = hcdr(here3426);
  A(isnil(here3426));
  glEvalPoint1(i);
  return Nil;
}
yeah* foop_glEvalMesh2(yeah* arg3428) {
  yeah* here3429 = arg3428;
  yeah* harg3430 = hcar(here3429);
  GLenum mode = (GLenum)getint(harg3430);
  here3429 = hcdr(here3429);
  yeah* harg3431 = hcar(here3429);
  GLint i1 = (GLint)getint(harg3431);
  here3429 = hcdr(here3429);
  yeah* harg3432 = hcar(here3429);
  GLint i2 = (GLint)getint(harg3432);
  here3429 = hcdr(here3429);
  yeah* harg3433 = hcar(here3429);
  GLint j1 = (GLint)getint(harg3433);
  here3429 = hcdr(here3429);
  yeah* harg3434 = hcar(here3429);
  GLint j2 = (GLint)getint(harg3434);
  here3429 = hcdr(here3429);
  A(isnil(here3429));
  glEvalMesh2(mode, i1, i2, j1, j2);
  return Nil;
}
yeah* foop_glEvalMesh1(yeah* arg3435) {
  yeah* here3436 = arg3435;
  yeah* harg3437 = hcar(here3436);
  GLenum mode = (GLenum)getint(harg3437);
  here3436 = hcdr(here3436);
  yeah* harg3438 = hcar(here3436);
  GLint i1 = (GLint)getint(harg3438);
  here3436 = hcdr(here3436);
  yeah* harg3439 = hcar(here3436);
  GLint i2 = (GLint)getint(harg3439);
  here3436 = hcdr(here3436);
  A(isnil(here3436));
  glEvalMesh1(mode, i1, i2);
  return Nil;
}
yeah* foop_glEvalCoord2fv(yeah* arg3440) {
  yeah* here3441 = arg3440;
  yeah* harg3442 = hcar(here3441);
  const GLfloat* u = (const GLfloat*)opaqueval(harg3442);
  here3441 = hcdr(here3441);
  A(isnil(here3441));
  glEvalCoord2fv(u);
  return Nil;
}
yeah* foop_glEvalCoord2f(yeah* arg3443) {
  yeah* here3444 = arg3443;
  yeah* harg3445 = hcar(here3444);
  GLfloat u = (GLfloat)getfloatcvt(harg3445);
  here3444 = hcdr(here3444);
  yeah* harg3446 = hcar(here3444);
  GLfloat v = (GLfloat)getfloatcvt(harg3446);
  here3444 = hcdr(here3444);
  A(isnil(here3444));
  glEvalCoord2f(u, v);
  return Nil;
}
yeah* foop_glEvalCoord2dv(yeah* arg3447) {
  yeah* here3448 = arg3447;
  yeah* harg3449 = hcar(here3448);
  const GLdouble* u = (const GLdouble*)opaqueval(harg3449);
  here3448 = hcdr(here3448);
  A(isnil(here3448));
  glEvalCoord2dv(u);
  return Nil;
}
yeah* foop_glEvalCoord2d(yeah* arg3450) {
  yeah* here3451 = arg3450;
  yeah* harg3452 = hcar(here3451);
  GLdouble u = (GLdouble)getfloatcvt(harg3452);
  here3451 = hcdr(here3451);
  yeah* harg3453 = hcar(here3451);
  GLdouble v = (GLdouble)getfloatcvt(harg3453);
  here3451 = hcdr(here3451);
  A(isnil(here3451));
  glEvalCoord2d(u, v);
  return Nil;
}
yeah* foop_glEvalCoord1fv(yeah* arg3454) {
  yeah* here3455 = arg3454;
  yeah* harg3456 = hcar(here3455);
  const GLfloat* u = (const GLfloat*)opaqueval(harg3456);
  here3455 = hcdr(here3455);
  A(isnil(here3455));
  glEvalCoord1fv(u);
  return Nil;
}
yeah* foop_glEvalCoord1f(yeah* arg3457) {
  yeah* here3458 = arg3457;
  yeah* harg3459 = hcar(here3458);
  GLfloat u = (GLfloat)getfloatcvt(harg3459);
  here3458 = hcdr(here3458);
  A(isnil(here3458));
  glEvalCoord1f(u);
  return Nil;
}
yeah* foop_glEvalCoord1dv(yeah* arg3460) {
  yeah* here3461 = arg3460;
  yeah* harg3462 = hcar(here3461);
  const GLdouble* u = (const GLdouble*)opaqueval(harg3462);
  here3461 = hcdr(here3461);
  A(isnil(here3461));
  glEvalCoord1dv(u);
  return Nil;
}
yeah* foop_glEvalCoord1d(yeah* arg3463) {
  yeah* here3464 = arg3463;
  yeah* harg3465 = hcar(here3464);
  GLdouble u = (GLdouble)getfloatcvt(harg3465);
  here3464 = hcdr(here3464);
  A(isnil(here3464));
  glEvalCoord1d(u);
  return Nil;
}
yeah* foop_glEndList(yeah* arg3466) {
  yeah* here3467 = arg3466;
  A(isnil(here3467));
  glEndList();
  return Nil;
}
yeah* foop_glEnd(yeah* arg3468) {
  yeah* here3469 = arg3468;
  A(isnil(here3469));
  glEnd();
  return Nil;
}
yeah* foop_glEnableClientState(yeah* arg3470) {
  yeah* here3471 = arg3470;
  yeah* harg3472 = hcar(here3471);
  GLenum array = (GLenum)getint(harg3472);
  here3471 = hcdr(here3471);
  A(isnil(here3471));
  glEnableClientState(array);
  return Nil;
}
yeah* foop_glEnable(yeah* arg3473) {
  yeah* here3474 = arg3473;
  yeah* harg3475 = hcar(here3474);
  GLenum cap = (GLenum)getint(harg3475);
  here3474 = hcdr(here3474);
  A(isnil(here3474));
  glEnable(cap);
  return Nil;
}
yeah* foop_glEdgeFlagv(yeah* arg3476) {
  yeah* here3477 = arg3476;
  yeah* harg3478 = hcar(here3477);
  const GLboolean* flag = (const GLboolean*)opaqueval(harg3478);
  here3477 = hcdr(here3477);
  A(isnil(here3477));
  glEdgeFlagv(flag);
  return Nil;
}
yeah* foop_glEdgeFlagPointer(yeah* arg3479) {
  yeah* here3480 = arg3479;
  yeah* harg3481 = hcar(here3480);
  GLsizei stride = (GLsizei)getint(harg3481);
  here3480 = hcdr(here3480);
  yeah* harg3482 = hcar(here3480);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg3482);
  here3480 = hcdr(here3480);
  A(isnil(here3480));
  glEdgeFlagPointer(stride, pointer);
  return Nil;
}
yeah* foop_glEdgeFlag(yeah* arg3483) {
  yeah* here3484 = arg3483;
  yeah* harg3485 = hcar(here3484);
  int flag = (int)getint(harg3485);
  here3484 = hcdr(here3484);
  A(isnil(here3484));
  glEdgeFlag(flag);
  return Nil;
}
yeah* foop_glDrawRangeElements(yeah* arg3486) {
  yeah* here3487 = arg3486;
  yeah* harg3488 = hcar(here3487);
  GLenum mode = (GLenum)getint(harg3488);
  here3487 = hcdr(here3487);
  yeah* harg3489 = hcar(here3487);
  GLuint start = (GLuint)getint(harg3489);
  here3487 = hcdr(here3487);
  yeah* harg3490 = hcar(here3487);
  GLuint end = (GLuint)getint(harg3490);
  here3487 = hcdr(here3487);
  yeah* harg3491 = hcar(here3487);
  GLsizei count = (GLsizei)getint(harg3491);
  here3487 = hcdr(here3487);
  yeah* harg3492 = hcar(here3487);
  GLenum type = (GLenum)getint(harg3492);
  here3487 = hcdr(here3487);
  yeah* harg3493 = hcar(here3487);
  const GLvoid* indices = (const GLvoid*)opaqueval(harg3493);
  here3487 = hcdr(here3487);
  A(isnil(here3487));
  glDrawRangeElements(mode, start, end, count, type, indices);
  return Nil;
}
yeah* foop_glDrawPixels(yeah* arg3494) {
  yeah* here3495 = arg3494;
  yeah* harg3496 = hcar(here3495);
  GLsizei width = (GLsizei)getint(harg3496);
  here3495 = hcdr(here3495);
  yeah* harg3497 = hcar(here3495);
  GLsizei height = (GLsizei)getint(harg3497);
  here3495 = hcdr(here3495);
  yeah* harg3498 = hcar(here3495);
  GLenum format = (GLenum)getint(harg3498);
  here3495 = hcdr(here3495);
  yeah* harg3499 = hcar(here3495);
  GLenum type = (GLenum)getint(harg3499);
  here3495 = hcdr(here3495);
  yeah* harg3500 = hcar(here3495);
  const GLvoid* pixels = (const GLvoid*)opaqueval(harg3500);
  here3495 = hcdr(here3495);
  A(isnil(here3495));
  glDrawPixels(width, height, format, type, pixels);
  return Nil;
}
yeah* foop_glDrawElements(yeah* arg3501) {
  yeah* here3502 = arg3501;
  yeah* harg3503 = hcar(here3502);
  GLenum mode = (GLenum)getint(harg3503);
  here3502 = hcdr(here3502);
  yeah* harg3504 = hcar(here3502);
  GLsizei count = (GLsizei)getint(harg3504);
  here3502 = hcdr(here3502);
  yeah* harg3505 = hcar(here3502);
  GLenum type = (GLenum)getint(harg3505);
  here3502 = hcdr(here3502);
  yeah* harg3506 = hcar(here3502);
  const GLvoid* indices = (const GLvoid*)opaqueval(harg3506);
  here3502 = hcdr(here3502);
  A(isnil(here3502));
  glDrawElements(mode, count, type, indices);
  return Nil;
}
yeah* foop_glDrawBuffer(yeah* arg3507) {
  yeah* here3508 = arg3507;
  yeah* harg3509 = hcar(here3508);
  GLenum mode = (GLenum)getint(harg3509);
  here3508 = hcdr(here3508);
  A(isnil(here3508));
  glDrawBuffer(mode);
  return Nil;
}
yeah* foop_glDrawArrays(yeah* arg3510) {
  yeah* here3511 = arg3510;
  yeah* harg3512 = hcar(here3511);
  GLenum mode = (GLenum)getint(harg3512);
  here3511 = hcdr(here3511);
  yeah* harg3513 = hcar(here3511);
  GLint first = (GLint)getint(harg3513);
  here3511 = hcdr(here3511);
  yeah* harg3514 = hcar(here3511);
  GLsizei count = (GLsizei)getint(harg3514);
  here3511 = hcdr(here3511);
  A(isnil(here3511));
  glDrawArrays(mode, first, count);
  return Nil;
}
yeah* foop_glDisableClientState(yeah* arg3515) {
  yeah* here3516 = arg3515;
  yeah* harg3517 = hcar(here3516);
  GLenum array = (GLenum)getint(harg3517);
  here3516 = hcdr(here3516);
  A(isnil(here3516));
  glDisableClientState(array);
  return Nil;
}
yeah* foop_glDisable(yeah* arg3518) {
  yeah* here3519 = arg3518;
  yeah* harg3520 = hcar(here3519);
  GLenum cap = (GLenum)getint(harg3520);
  here3519 = hcdr(here3519);
  A(isnil(here3519));
  glDisable(cap);
  return Nil;
}
yeah* foop_glDepthRange(yeah* arg3521) {
  yeah* here3522 = arg3521;
  yeah* harg3523 = hcar(here3522);
  GLclampd zNear = (GLclampd)getfloatcvt(harg3523);
  here3522 = hcdr(here3522);
  yeah* harg3524 = hcar(here3522);
  GLclampd zFar = (GLclampd)getfloatcvt(harg3524);
  here3522 = hcdr(here3522);
  A(isnil(here3522));
  glDepthRange(zNear, zFar);
  return Nil;
}
yeah* foop_glDepthMask(yeah* arg3525) {
  yeah* here3526 = arg3525;
  yeah* harg3527 = hcar(here3526);
  int flag = (int)getint(harg3527);
  here3526 = hcdr(here3526);
  A(isnil(here3526));
  glDepthMask(flag);
  return Nil;
}
yeah* foop_glDepthFunc(yeah* arg3528) {
  yeah* here3529 = arg3528;
  yeah* harg3530 = hcar(here3529);
  GLenum func = (GLenum)getint(harg3530);
  here3529 = hcdr(here3529);
  A(isnil(here3529));
  glDepthFunc(func);
  return Nil;
}
yeah* foop_glDeleteTextures(yeah* arg3531) {
  yeah* here3532 = arg3531;
  yeah* harg3533 = hcar(here3532);
  GLsizei n = (GLsizei)getint(harg3533);
  here3532 = hcdr(here3532);
  yeah* harg3534 = hcar(here3532);
  const GLuint* textures = (const GLuint*)opaqueval(harg3534);
  here3532 = hcdr(here3532);
  A(isnil(here3532));
  glDeleteTextures(n, textures);
  return Nil;
}
yeah* foop_glDeleteLists(yeah* arg3535) {
  yeah* here3536 = arg3535;
  yeah* harg3537 = hcar(here3536);
  GLuint list = (GLuint)getint(harg3537);
  here3536 = hcdr(here3536);
  yeah* harg3538 = hcar(here3536);
  GLsizei range = (GLsizei)getint(harg3538);
  here3536 = hcdr(here3536);
  A(isnil(here3536));
  glDeleteLists(list, range);
  return Nil;
}
yeah* foop_glCullFace(yeah* arg3539) {
  yeah* here3540 = arg3539;
  yeah* harg3541 = hcar(here3540);
  GLenum mode = (GLenum)getint(harg3541);
  here3540 = hcdr(here3540);
  A(isnil(here3540));
  glCullFace(mode);
  return Nil;
}
yeah* foop_glCopyTexSubImage3D(yeah* arg3542) {
  yeah* here3543 = arg3542;
  yeah* harg3544 = hcar(here3543);
  GLenum target = (GLenum)getint(harg3544);
  here3543 = hcdr(here3543);
  yeah* harg3545 = hcar(here3543);
  GLint level = (GLint)getint(harg3545);
  here3543 = hcdr(here3543);
  yeah* harg3546 = hcar(here3543);
  GLint xoffset = (GLint)getint(harg3546);
  here3543 = hcdr(here3543);
  yeah* harg3547 = hcar(here3543);
  GLint yoffset = (GLint)getint(harg3547);
  here3543 = hcdr(here3543);
  yeah* harg3548 = hcar(here3543);
  GLint zoffset = (GLint)getint(harg3548);
  here3543 = hcdr(here3543);
  yeah* harg3549 = hcar(here3543);
  GLint x = (GLint)getint(harg3549);
  here3543 = hcdr(here3543);
  yeah* harg3550 = hcar(here3543);
  GLint y = (GLint)getint(harg3550);
  here3543 = hcdr(here3543);
  yeah* harg3551 = hcar(here3543);
  GLsizei width = (GLsizei)getint(harg3551);
  here3543 = hcdr(here3543);
  yeah* harg3552 = hcar(here3543);
  GLsizei height = (GLsizei)getint(harg3552);
  here3543 = hcdr(here3543);
  A(isnil(here3543));
  glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
  return Nil;
}
yeah* foop_glCopyTexSubImage2D(yeah* arg3553) {
  yeah* here3554 = arg3553;
  yeah* harg3555 = hcar(here3554);
  GLenum target = (GLenum)getint(harg3555);
  here3554 = hcdr(here3554);
  yeah* harg3556 = hcar(here3554);
  GLint level = (GLint)getint(harg3556);
  here3554 = hcdr(here3554);
  yeah* harg3557 = hcar(here3554);
  GLint xoffset = (GLint)getint(harg3557);
  here3554 = hcdr(here3554);
  yeah* harg3558 = hcar(here3554);
  GLint yoffset = (GLint)getint(harg3558);
  here3554 = hcdr(here3554);
  yeah* harg3559 = hcar(here3554);
  GLint x = (GLint)getint(harg3559);
  here3554 = hcdr(here3554);
  yeah* harg3560 = hcar(here3554);
  GLint y = (GLint)getint(harg3560);
  here3554 = hcdr(here3554);
  yeah* harg3561 = hcar(here3554);
  GLsizei width = (GLsizei)getint(harg3561);
  here3554 = hcdr(here3554);
  yeah* harg3562 = hcar(here3554);
  GLsizei height = (GLsizei)getint(harg3562);
  here3554 = hcdr(here3554);
  A(isnil(here3554));
  glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
  return Nil;
}
yeah* foop_glCopyTexSubImage1D(yeah* arg3563) {
  yeah* here3564 = arg3563;
  yeah* harg3565 = hcar(here3564);
  GLenum target = (GLenum)getint(harg3565);
  here3564 = hcdr(here3564);
  yeah* harg3566 = hcar(here3564);
  GLint level = (GLint)getint(harg3566);
  here3564 = hcdr(here3564);
  yeah* harg3567 = hcar(here3564);
  GLint xoffset = (GLint)getint(harg3567);
  here3564 = hcdr(here3564);
  yeah* harg3568 = hcar(here3564);
  GLint x = (GLint)getint(harg3568);
  here3564 = hcdr(here3564);
  yeah* harg3569 = hcar(here3564);
  GLint y = (GLint)getint(harg3569);
  here3564 = hcdr(here3564);
  yeah* harg3570 = hcar(here3564);
  GLsizei width = (GLsizei)getint(harg3570);
  here3564 = hcdr(here3564);
  A(isnil(here3564));
  glCopyTexSubImage1D(target, level, xoffset, x, y, width);
  return Nil;
}
yeah* foop_glCopyTexImage2D(yeah* arg3571) {
  yeah* here3572 = arg3571;
  yeah* harg3573 = hcar(here3572);
  GLenum target = (GLenum)getint(harg3573);
  here3572 = hcdr(here3572);
  yeah* harg3574 = hcar(here3572);
  GLint level = (GLint)getint(harg3574);
  here3572 = hcdr(here3572);
  yeah* harg3575 = hcar(here3572);
  GLenum internalformat = (GLenum)getint(harg3575);
  here3572 = hcdr(here3572);
  yeah* harg3576 = hcar(here3572);
  GLint x = (GLint)getint(harg3576);
  here3572 = hcdr(here3572);
  yeah* harg3577 = hcar(here3572);
  GLint y = (GLint)getint(harg3577);
  here3572 = hcdr(here3572);
  yeah* harg3578 = hcar(here3572);
  GLsizei width = (GLsizei)getint(harg3578);
  here3572 = hcdr(here3572);
  yeah* harg3579 = hcar(here3572);
  GLsizei height = (GLsizei)getint(harg3579);
  here3572 = hcdr(here3572);
  yeah* harg3580 = hcar(here3572);
  GLint border = (GLint)getint(harg3580);
  here3572 = hcdr(here3572);
  A(isnil(here3572));
  glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
  return Nil;
}
yeah* foop_glCopyTexImage1D(yeah* arg3581) {
  yeah* here3582 = arg3581;
  yeah* harg3583 = hcar(here3582);
  GLenum target = (GLenum)getint(harg3583);
  here3582 = hcdr(here3582);
  yeah* harg3584 = hcar(here3582);
  GLint level = (GLint)getint(harg3584);
  here3582 = hcdr(here3582);
  yeah* harg3585 = hcar(here3582);
  GLenum internalformat = (GLenum)getint(harg3585);
  here3582 = hcdr(here3582);
  yeah* harg3586 = hcar(here3582);
  GLint x = (GLint)getint(harg3586);
  here3582 = hcdr(here3582);
  yeah* harg3587 = hcar(here3582);
  GLint y = (GLint)getint(harg3587);
  here3582 = hcdr(here3582);
  yeah* harg3588 = hcar(here3582);
  GLsizei width = (GLsizei)getint(harg3588);
  here3582 = hcdr(here3582);
  yeah* harg3589 = hcar(here3582);
  GLint border = (GLint)getint(harg3589);
  here3582 = hcdr(here3582);
  A(isnil(here3582));
  glCopyTexImage1D(target, level, internalformat, x, y, width, border);
  return Nil;
}
yeah* foop_glCopyPixels(yeah* arg3590) {
  yeah* here3591 = arg3590;
  yeah* harg3592 = hcar(here3591);
  GLint x = (GLint)getint(harg3592);
  here3591 = hcdr(here3591);
  yeah* harg3593 = hcar(here3591);
  GLint y = (GLint)getint(harg3593);
  here3591 = hcdr(here3591);
  yeah* harg3594 = hcar(here3591);
  GLsizei width = (GLsizei)getint(harg3594);
  here3591 = hcdr(here3591);
  yeah* harg3595 = hcar(here3591);
  GLsizei height = (GLsizei)getint(harg3595);
  here3591 = hcdr(here3591);
  yeah* harg3596 = hcar(here3591);
  GLenum type = (GLenum)getint(harg3596);
  here3591 = hcdr(here3591);
  A(isnil(here3591));
  glCopyPixels(x, y, width, height, type);
  return Nil;
}
yeah* foop_glCopyConvolutionFilter2D(yeah* arg3597) {
  yeah* here3598 = arg3597;
  yeah* harg3599 = hcar(here3598);
  GLenum target = (GLenum)getint(harg3599);
  here3598 = hcdr(here3598);
  yeah* harg3600 = hcar(here3598);
  GLenum internalformat = (GLenum)getint(harg3600);
  here3598 = hcdr(here3598);
  yeah* harg3601 = hcar(here3598);
  GLint x = (GLint)getint(harg3601);
  here3598 = hcdr(here3598);
  yeah* harg3602 = hcar(here3598);
  GLint y = (GLint)getint(harg3602);
  here3598 = hcdr(here3598);
  yeah* harg3603 = hcar(here3598);
  GLsizei width = (GLsizei)getint(harg3603);
  here3598 = hcdr(here3598);
  yeah* harg3604 = hcar(here3598);
  GLsizei height = (GLsizei)getint(harg3604);
  here3598 = hcdr(here3598);
  A(isnil(here3598));
  glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
  return Nil;
}
yeah* foop_glCopyConvolutionFilter1D(yeah* arg3605) {
  yeah* here3606 = arg3605;
  yeah* harg3607 = hcar(here3606);
  GLenum target = (GLenum)getint(harg3607);
  here3606 = hcdr(here3606);
  yeah* harg3608 = hcar(here3606);
  GLenum internalformat = (GLenum)getint(harg3608);
  here3606 = hcdr(here3606);
  yeah* harg3609 = hcar(here3606);
  GLint x = (GLint)getint(harg3609);
  here3606 = hcdr(here3606);
  yeah* harg3610 = hcar(here3606);
  GLint y = (GLint)getint(harg3610);
  here3606 = hcdr(here3606);
  yeah* harg3611 = hcar(here3606);
  GLsizei width = (GLsizei)getint(harg3611);
  here3606 = hcdr(here3606);
  A(isnil(here3606));
  glCopyConvolutionFilter1D(target, internalformat, x, y, width);
  return Nil;
}
yeah* foop_glCopyColorTable(yeah* arg3612) {
  yeah* here3613 = arg3612;
  yeah* harg3614 = hcar(here3613);
  GLenum target = (GLenum)getint(harg3614);
  here3613 = hcdr(here3613);
  yeah* harg3615 = hcar(here3613);
  GLenum internalformat = (GLenum)getint(harg3615);
  here3613 = hcdr(here3613);
  yeah* harg3616 = hcar(here3613);
  GLint x = (GLint)getint(harg3616);
  here3613 = hcdr(here3613);
  yeah* harg3617 = hcar(here3613);
  GLint y = (GLint)getint(harg3617);
  here3613 = hcdr(here3613);
  yeah* harg3618 = hcar(here3613);
  GLsizei width = (GLsizei)getint(harg3618);
  here3613 = hcdr(here3613);
  A(isnil(here3613));
  glCopyColorTable(target, internalformat, x, y, width);
  return Nil;
}
yeah* foop_glCopyColorSubTable(yeah* arg3619) {
  yeah* here3620 = arg3619;
  yeah* harg3621 = hcar(here3620);
  GLenum target = (GLenum)getint(harg3621);
  here3620 = hcdr(here3620);
  yeah* harg3622 = hcar(here3620);
  GLsizei start = (GLsizei)getint(harg3622);
  here3620 = hcdr(here3620);
  yeah* harg3623 = hcar(here3620);
  GLint x = (GLint)getint(harg3623);
  here3620 = hcdr(here3620);
  yeah* harg3624 = hcar(here3620);
  GLint y = (GLint)getint(harg3624);
  here3620 = hcdr(here3620);
  yeah* harg3625 = hcar(here3620);
  GLsizei width = (GLsizei)getint(harg3625);
  here3620 = hcdr(here3620);
  A(isnil(here3620));
  glCopyColorSubTable(target, start, x, y, width);
  return Nil;
}
yeah* foop_glConvolutionParameteriv(yeah* arg3626) {
  yeah* here3627 = arg3626;
  yeah* harg3628 = hcar(here3627);
  GLenum target = (GLenum)getint(harg3628);
  here3627 = hcdr(here3627);
  yeah* harg3629 = hcar(here3627);
  GLenum pname = (GLenum)getint(harg3629);
  here3627 = hcdr(here3627);
  yeah* harg3630 = hcar(here3627);
  const GLint* params = (const GLint*)opaqueval(harg3630);
  here3627 = hcdr(here3627);
  A(isnil(here3627));
  glConvolutionParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glConvolutionParameteri(yeah* arg3631) {
  yeah* here3632 = arg3631;
  yeah* harg3633 = hcar(here3632);
  GLenum target = (GLenum)getint(harg3633);
  here3632 = hcdr(here3632);
  yeah* harg3634 = hcar(here3632);
  GLenum pname = (GLenum)getint(harg3634);
  here3632 = hcdr(here3632);
  yeah* harg3635 = hcar(here3632);
  GLint params = (GLint)getint(harg3635);
  here3632 = hcdr(here3632);
  A(isnil(here3632));
  glConvolutionParameteri(target, pname, params);
  return Nil;
}
yeah* foop_glConvolutionParameterfv(yeah* arg3636) {
  yeah* here3637 = arg3636;
  yeah* harg3638 = hcar(here3637);
  GLenum target = (GLenum)getint(harg3638);
  here3637 = hcdr(here3637);
  yeah* harg3639 = hcar(here3637);
  GLenum pname = (GLenum)getint(harg3639);
  here3637 = hcdr(here3637);
  yeah* harg3640 = hcar(here3637);
  const GLfloat* params = (const GLfloat*)opaqueval(harg3640);
  here3637 = hcdr(here3637);
  A(isnil(here3637));
  glConvolutionParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glConvolutionParameterf(yeah* arg3641) {
  yeah* here3642 = arg3641;
  yeah* harg3643 = hcar(here3642);
  GLenum target = (GLenum)getint(harg3643);
  here3642 = hcdr(here3642);
  yeah* harg3644 = hcar(here3642);
  GLenum pname = (GLenum)getint(harg3644);
  here3642 = hcdr(here3642);
  yeah* harg3645 = hcar(here3642);
  GLfloat params = (GLfloat)getfloatcvt(harg3645);
  here3642 = hcdr(here3642);
  A(isnil(here3642));
  glConvolutionParameterf(target, pname, params);
  return Nil;
}
yeah* foop_glConvolutionFilter2D(yeah* arg3646) {
  yeah* here3647 = arg3646;
  yeah* harg3648 = hcar(here3647);
  GLenum target = (GLenum)getint(harg3648);
  here3647 = hcdr(here3647);
  yeah* harg3649 = hcar(here3647);
  GLenum internalformat = (GLenum)getint(harg3649);
  here3647 = hcdr(here3647);
  yeah* harg3650 = hcar(here3647);
  GLsizei width = (GLsizei)getint(harg3650);
  here3647 = hcdr(here3647);
  yeah* harg3651 = hcar(here3647);
  GLsizei height = (GLsizei)getint(harg3651);
  here3647 = hcdr(here3647);
  yeah* harg3652 = hcar(here3647);
  GLenum format = (GLenum)getint(harg3652);
  here3647 = hcdr(here3647);
  yeah* harg3653 = hcar(here3647);
  GLenum type = (GLenum)getint(harg3653);
  here3647 = hcdr(here3647);
  yeah* harg3654 = hcar(here3647);
  const GLvoid* image = (const GLvoid*)opaqueval(harg3654);
  here3647 = hcdr(here3647);
  A(isnil(here3647));
  glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
  return Nil;
}
yeah* foop_glConvolutionFilter1D(yeah* arg3655) {
  yeah* here3656 = arg3655;
  yeah* harg3657 = hcar(here3656);
  GLenum target = (GLenum)getint(harg3657);
  here3656 = hcdr(here3656);
  yeah* harg3658 = hcar(here3656);
  GLenum internalformat = (GLenum)getint(harg3658);
  here3656 = hcdr(here3656);
  yeah* harg3659 = hcar(here3656);
  GLsizei width = (GLsizei)getint(harg3659);
  here3656 = hcdr(here3656);
  yeah* harg3660 = hcar(here3656);
  GLenum format = (GLenum)getint(harg3660);
  here3656 = hcdr(here3656);
  yeah* harg3661 = hcar(here3656);
  GLenum type = (GLenum)getint(harg3661);
  here3656 = hcdr(here3656);
  yeah* harg3662 = hcar(here3656);
  const GLvoid* image = (const GLvoid*)opaqueval(harg3662);
  here3656 = hcdr(here3656);
  A(isnil(here3656));
  glConvolutionFilter1D(target, internalformat, width, format, type, image);
  return Nil;
}
yeah* foop_glColorTableParameteriv(yeah* arg3663) {
  yeah* here3664 = arg3663;
  yeah* harg3665 = hcar(here3664);
  GLenum target = (GLenum)getint(harg3665);
  here3664 = hcdr(here3664);
  yeah* harg3666 = hcar(here3664);
  GLenum pname = (GLenum)getint(harg3666);
  here3664 = hcdr(here3664);
  yeah* harg3667 = hcar(here3664);
  const GLint* params = (const GLint*)opaqueval(harg3667);
  here3664 = hcdr(here3664);
  A(isnil(here3664));
  glColorTableParameteriv(target, pname, params);
  return Nil;
}
yeah* foop_glColorTableParameterfv(yeah* arg3668) {
  yeah* here3669 = arg3668;
  yeah* harg3670 = hcar(here3669);
  GLenum target = (GLenum)getint(harg3670);
  here3669 = hcdr(here3669);
  yeah* harg3671 = hcar(here3669);
  GLenum pname = (GLenum)getint(harg3671);
  here3669 = hcdr(here3669);
  yeah* harg3672 = hcar(here3669);
  const GLfloat* params = (const GLfloat*)opaqueval(harg3672);
  here3669 = hcdr(here3669);
  A(isnil(here3669));
  glColorTableParameterfv(target, pname, params);
  return Nil;
}
yeah* foop_glColorTable(yeah* arg3673) {
  yeah* here3674 = arg3673;
  yeah* harg3675 = hcar(here3674);
  GLenum target = (GLenum)getint(harg3675);
  here3674 = hcdr(here3674);
  yeah* harg3676 = hcar(here3674);
  GLenum internalformat = (GLenum)getint(harg3676);
  here3674 = hcdr(here3674);
  yeah* harg3677 = hcar(here3674);
  GLsizei width = (GLsizei)getint(harg3677);
  here3674 = hcdr(here3674);
  yeah* harg3678 = hcar(here3674);
  GLenum format = (GLenum)getint(harg3678);
  here3674 = hcdr(here3674);
  yeah* harg3679 = hcar(here3674);
  GLenum type = (GLenum)getint(harg3679);
  here3674 = hcdr(here3674);
  yeah* harg3680 = hcar(here3674);
  const GLvoid* table = (const GLvoid*)opaqueval(harg3680);
  here3674 = hcdr(here3674);
  A(isnil(here3674));
  glColorTable(target, internalformat, width, format, type, table);
  return Nil;
}
yeah* foop_glColorSubTable(yeah* arg3681) {
  yeah* here3682 = arg3681;
  yeah* harg3683 = hcar(here3682);
  GLenum target = (GLenum)getint(harg3683);
  here3682 = hcdr(here3682);
  yeah* harg3684 = hcar(here3682);
  GLsizei start = (GLsizei)getint(harg3684);
  here3682 = hcdr(here3682);
  yeah* harg3685 = hcar(here3682);
  GLsizei count = (GLsizei)getint(harg3685);
  here3682 = hcdr(here3682);
  yeah* harg3686 = hcar(here3682);
  GLenum format = (GLenum)getint(harg3686);
  here3682 = hcdr(here3682);
  yeah* harg3687 = hcar(here3682);
  GLenum type = (GLenum)getint(harg3687);
  here3682 = hcdr(here3682);
  yeah* harg3688 = hcar(here3682);
  const GLvoid* data = (const GLvoid*)opaqueval(harg3688);
  here3682 = hcdr(here3682);
  A(isnil(here3682));
  glColorSubTable(target, start, count, format, type, data);
  return Nil;
}
yeah* foop_glColorPointer(yeah* arg3689) {
  yeah* here3690 = arg3689;
  yeah* harg3691 = hcar(here3690);
  GLint size = (GLint)getint(harg3691);
  here3690 = hcdr(here3690);
  yeah* harg3692 = hcar(here3690);
  GLenum type = (GLenum)getint(harg3692);
  here3690 = hcdr(here3690);
  yeah* harg3693 = hcar(here3690);
  GLsizei stride = (GLsizei)getint(harg3693);
  here3690 = hcdr(here3690);
  yeah* harg3694 = hcar(here3690);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg3694);
  here3690 = hcdr(here3690);
  A(isnil(here3690));
  glColorPointer(size, type, stride, pointer);
  return Nil;
}
yeah* foop_glColorMaterial(yeah* arg3695) {
  yeah* here3696 = arg3695;
  yeah* harg3697 = hcar(here3696);
  GLenum face = (GLenum)getint(harg3697);
  here3696 = hcdr(here3696);
  yeah* harg3698 = hcar(here3696);
  GLenum mode = (GLenum)getint(harg3698);
  here3696 = hcdr(here3696);
  A(isnil(here3696));
  glColorMaterial(face, mode);
  return Nil;
}
yeah* foop_glColorMask(yeah* arg3699) {
  yeah* here3700 = arg3699;
  yeah* harg3701 = hcar(here3700);
  int red = (int)getint(harg3701);
  here3700 = hcdr(here3700);
  yeah* harg3702 = hcar(here3700);
  int green = (int)getint(harg3702);
  here3700 = hcdr(here3700);
  yeah* harg3703 = hcar(here3700);
  int blue = (int)getint(harg3703);
  here3700 = hcdr(here3700);
  yeah* harg3704 = hcar(here3700);
  int alpha = (int)getint(harg3704);
  here3700 = hcdr(here3700);
  A(isnil(here3700));
  glColorMask(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4usv(yeah* arg3705) {
  yeah* here3706 = arg3705;
  yeah* harg3707 = hcar(here3706);
  const GLushort* v = (const GLushort*)opaqueval(harg3707);
  here3706 = hcdr(here3706);
  A(isnil(here3706));
  glColor4usv(v);
  return Nil;
}
yeah* foop_glColor4us(yeah* arg3708) {
  yeah* here3709 = arg3708;
  yeah* harg3710 = hcar(here3709);
  int red = (int)getint(harg3710);
  here3709 = hcdr(here3709);
  yeah* harg3711 = hcar(here3709);
  int green = (int)getint(harg3711);
  here3709 = hcdr(here3709);
  yeah* harg3712 = hcar(here3709);
  int blue = (int)getint(harg3712);
  here3709 = hcdr(here3709);
  yeah* harg3713 = hcar(here3709);
  int alpha = (int)getint(harg3713);
  here3709 = hcdr(here3709);
  A(isnil(here3709));
  glColor4us(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4uiv(yeah* arg3714) {
  yeah* here3715 = arg3714;
  yeah* harg3716 = hcar(here3715);
  const GLuint* v = (const GLuint*)opaqueval(harg3716);
  here3715 = hcdr(here3715);
  A(isnil(here3715));
  glColor4uiv(v);
  return Nil;
}
yeah* foop_glColor4ui(yeah* arg3717) {
  yeah* here3718 = arg3717;
  yeah* harg3719 = hcar(here3718);
  GLuint red = (GLuint)getint(harg3719);
  here3718 = hcdr(here3718);
  yeah* harg3720 = hcar(here3718);
  GLuint green = (GLuint)getint(harg3720);
  here3718 = hcdr(here3718);
  yeah* harg3721 = hcar(here3718);
  GLuint blue = (GLuint)getint(harg3721);
  here3718 = hcdr(here3718);
  yeah* harg3722 = hcar(here3718);
  GLuint alpha = (GLuint)getint(harg3722);
  here3718 = hcdr(here3718);
  A(isnil(here3718));
  glColor4ui(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4ubv(yeah* arg3723) {
  yeah* here3724 = arg3723;
  yeah* harg3725 = hcar(here3724);
  const GLubyte* v = (const GLubyte*)opaqueval(harg3725);
  here3724 = hcdr(here3724);
  A(isnil(here3724));
  glColor4ubv(v);
  return Nil;
}
yeah* foop_glColor4ub(yeah* arg3726) {
  yeah* here3727 = arg3726;
  yeah* harg3728 = hcar(here3727);
  int red = (int)getint(harg3728);
  here3727 = hcdr(here3727);
  yeah* harg3729 = hcar(here3727);
  int green = (int)getint(harg3729);
  here3727 = hcdr(here3727);
  yeah* harg3730 = hcar(here3727);
  int blue = (int)getint(harg3730);
  here3727 = hcdr(here3727);
  yeah* harg3731 = hcar(here3727);
  int alpha = (int)getint(harg3731);
  here3727 = hcdr(here3727);
  A(isnil(here3727));
  glColor4ub(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4sv(yeah* arg3732) {
  yeah* here3733 = arg3732;
  yeah* harg3734 = hcar(here3733);
  const GLshort* v = (const GLshort*)opaqueval(harg3734);
  here3733 = hcdr(here3733);
  A(isnil(here3733));
  glColor4sv(v);
  return Nil;
}
yeah* foop_glColor4s(yeah* arg3735) {
  yeah* here3736 = arg3735;
  yeah* harg3737 = hcar(here3736);
  int red = (int)getint(harg3737);
  here3736 = hcdr(here3736);
  yeah* harg3738 = hcar(here3736);
  int green = (int)getint(harg3738);
  here3736 = hcdr(here3736);
  yeah* harg3739 = hcar(here3736);
  int blue = (int)getint(harg3739);
  here3736 = hcdr(here3736);
  yeah* harg3740 = hcar(here3736);
  int alpha = (int)getint(harg3740);
  here3736 = hcdr(here3736);
  A(isnil(here3736));
  glColor4s(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4iv(yeah* arg3741) {
  yeah* here3742 = arg3741;
  yeah* harg3743 = hcar(here3742);
  const GLint* v = (const GLint*)opaqueval(harg3743);
  here3742 = hcdr(here3742);
  A(isnil(here3742));
  glColor4iv(v);
  return Nil;
}
yeah* foop_glColor4i(yeah* arg3744) {
  yeah* here3745 = arg3744;
  yeah* harg3746 = hcar(here3745);
  GLint red = (GLint)getint(harg3746);
  here3745 = hcdr(here3745);
  yeah* harg3747 = hcar(here3745);
  GLint green = (GLint)getint(harg3747);
  here3745 = hcdr(here3745);
  yeah* harg3748 = hcar(here3745);
  GLint blue = (GLint)getint(harg3748);
  here3745 = hcdr(here3745);
  yeah* harg3749 = hcar(here3745);
  GLint alpha = (GLint)getint(harg3749);
  here3745 = hcdr(here3745);
  A(isnil(here3745));
  glColor4i(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4fv(yeah* arg3750) {
  yeah* here3751 = arg3750;
  yeah* harg3752 = hcar(here3751);
  const GLfloat* v = (const GLfloat*)opaqueval(harg3752);
  here3751 = hcdr(here3751);
  A(isnil(here3751));
  glColor4fv(v);
  return Nil;
}
yeah* foop_glColor4f(yeah* arg3753) {
  yeah* here3754 = arg3753;
  yeah* harg3755 = hcar(here3754);
  GLfloat red = (GLfloat)getfloatcvt(harg3755);
  here3754 = hcdr(here3754);
  yeah* harg3756 = hcar(here3754);
  GLfloat green = (GLfloat)getfloatcvt(harg3756);
  here3754 = hcdr(here3754);
  yeah* harg3757 = hcar(here3754);
  GLfloat blue = (GLfloat)getfloatcvt(harg3757);
  here3754 = hcdr(here3754);
  yeah* harg3758 = hcar(here3754);
  GLfloat alpha = (GLfloat)getfloatcvt(harg3758);
  here3754 = hcdr(here3754);
  A(isnil(here3754));
  glColor4f(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4dv(yeah* arg3759) {
  yeah* here3760 = arg3759;
  yeah* harg3761 = hcar(here3760);
  const GLdouble* v = (const GLdouble*)opaqueval(harg3761);
  here3760 = hcdr(here3760);
  A(isnil(here3760));
  glColor4dv(v);
  return Nil;
}
yeah* foop_glColor4d(yeah* arg3762) {
  yeah* here3763 = arg3762;
  yeah* harg3764 = hcar(here3763);
  GLdouble red = (GLdouble)getfloatcvt(harg3764);
  here3763 = hcdr(here3763);
  yeah* harg3765 = hcar(here3763);
  GLdouble green = (GLdouble)getfloatcvt(harg3765);
  here3763 = hcdr(here3763);
  yeah* harg3766 = hcar(here3763);
  GLdouble blue = (GLdouble)getfloatcvt(harg3766);
  here3763 = hcdr(here3763);
  yeah* harg3767 = hcar(here3763);
  GLdouble alpha = (GLdouble)getfloatcvt(harg3767);
  here3763 = hcdr(here3763);
  A(isnil(here3763));
  glColor4d(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor4bv(yeah* arg3768) {
  yeah* here3769 = arg3768;
  yeah* harg3770 = hcar(here3769);
  const GLbyte* v = (const GLbyte*)opaqueval(harg3770);
  here3769 = hcdr(here3769);
  A(isnil(here3769));
  glColor4bv(v);
  return Nil;
}
yeah* foop_glColor4b(yeah* arg3771) {
  yeah* here3772 = arg3771;
  yeah* harg3773 = hcar(here3772);
  int red = (int)getint(harg3773);
  here3772 = hcdr(here3772);
  yeah* harg3774 = hcar(here3772);
  int green = (int)getint(harg3774);
  here3772 = hcdr(here3772);
  yeah* harg3775 = hcar(here3772);
  int blue = (int)getint(harg3775);
  here3772 = hcdr(here3772);
  yeah* harg3776 = hcar(here3772);
  int alpha = (int)getint(harg3776);
  here3772 = hcdr(here3772);
  A(isnil(here3772));
  glColor4b(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glColor3usv(yeah* arg3777) {
  yeah* here3778 = arg3777;
  yeah* harg3779 = hcar(here3778);
  const GLushort* v = (const GLushort*)opaqueval(harg3779);
  here3778 = hcdr(here3778);
  A(isnil(here3778));
  glColor3usv(v);
  return Nil;
}
yeah* foop_glColor3us(yeah* arg3780) {
  yeah* here3781 = arg3780;
  yeah* harg3782 = hcar(here3781);
  int red = (int)getint(harg3782);
  here3781 = hcdr(here3781);
  yeah* harg3783 = hcar(here3781);
  int green = (int)getint(harg3783);
  here3781 = hcdr(here3781);
  yeah* harg3784 = hcar(here3781);
  int blue = (int)getint(harg3784);
  here3781 = hcdr(here3781);
  A(isnil(here3781));
  glColor3us(red, green, blue);
  return Nil;
}
yeah* foop_glColor3uiv(yeah* arg3785) {
  yeah* here3786 = arg3785;
  yeah* harg3787 = hcar(here3786);
  const GLuint* v = (const GLuint*)opaqueval(harg3787);
  here3786 = hcdr(here3786);
  A(isnil(here3786));
  glColor3uiv(v);
  return Nil;
}
yeah* foop_glColor3ui(yeah* arg3788) {
  yeah* here3789 = arg3788;
  yeah* harg3790 = hcar(here3789);
  GLuint red = (GLuint)getint(harg3790);
  here3789 = hcdr(here3789);
  yeah* harg3791 = hcar(here3789);
  GLuint green = (GLuint)getint(harg3791);
  here3789 = hcdr(here3789);
  yeah* harg3792 = hcar(here3789);
  GLuint blue = (GLuint)getint(harg3792);
  here3789 = hcdr(here3789);
  A(isnil(here3789));
  glColor3ui(red, green, blue);
  return Nil;
}
yeah* foop_glColor3ubv(yeah* arg3793) {
  yeah* here3794 = arg3793;
  yeah* harg3795 = hcar(here3794);
  const GLubyte* v = (const GLubyte*)opaqueval(harg3795);
  here3794 = hcdr(here3794);
  A(isnil(here3794));
  glColor3ubv(v);
  return Nil;
}
yeah* foop_glColor3ub(yeah* arg3796) {
  yeah* here3797 = arg3796;
  yeah* harg3798 = hcar(here3797);
  int red = (int)getint(harg3798);
  here3797 = hcdr(here3797);
  yeah* harg3799 = hcar(here3797);
  int green = (int)getint(harg3799);
  here3797 = hcdr(here3797);
  yeah* harg3800 = hcar(here3797);
  int blue = (int)getint(harg3800);
  here3797 = hcdr(here3797);
  A(isnil(here3797));
  glColor3ub(red, green, blue);
  return Nil;
}
yeah* foop_glColor3sv(yeah* arg3801) {
  yeah* here3802 = arg3801;
  yeah* harg3803 = hcar(here3802);
  const GLshort* v = (const GLshort*)opaqueval(harg3803);
  here3802 = hcdr(here3802);
  A(isnil(here3802));
  glColor3sv(v);
  return Nil;
}
yeah* foop_glColor3s(yeah* arg3804) {
  yeah* here3805 = arg3804;
  yeah* harg3806 = hcar(here3805);
  int red = (int)getint(harg3806);
  here3805 = hcdr(here3805);
  yeah* harg3807 = hcar(here3805);
  int green = (int)getint(harg3807);
  here3805 = hcdr(here3805);
  yeah* harg3808 = hcar(here3805);
  int blue = (int)getint(harg3808);
  here3805 = hcdr(here3805);
  A(isnil(here3805));
  glColor3s(red, green, blue);
  return Nil;
}
yeah* foop_glColor3iv(yeah* arg3809) {
  yeah* here3810 = arg3809;
  yeah* harg3811 = hcar(here3810);
  const GLint* v = (const GLint*)opaqueval(harg3811);
  here3810 = hcdr(here3810);
  A(isnil(here3810));
  glColor3iv(v);
  return Nil;
}
yeah* foop_glColor3i(yeah* arg3812) {
  yeah* here3813 = arg3812;
  yeah* harg3814 = hcar(here3813);
  GLint red = (GLint)getint(harg3814);
  here3813 = hcdr(here3813);
  yeah* harg3815 = hcar(here3813);
  GLint green = (GLint)getint(harg3815);
  here3813 = hcdr(here3813);
  yeah* harg3816 = hcar(here3813);
  GLint blue = (GLint)getint(harg3816);
  here3813 = hcdr(here3813);
  A(isnil(here3813));
  glColor3i(red, green, blue);
  return Nil;
}
yeah* foop_glColor3fv(yeah* arg3817) {
  yeah* here3818 = arg3817;
  yeah* harg3819 = hcar(here3818);
  const GLfloat* v = (const GLfloat*)opaqueval(harg3819);
  here3818 = hcdr(here3818);
  A(isnil(here3818));
  glColor3fv(v);
  return Nil;
}
yeah* foop_glColor3f(yeah* arg3820) {
  yeah* here3821 = arg3820;
  yeah* harg3822 = hcar(here3821);
  GLfloat red = (GLfloat)getfloatcvt(harg3822);
  here3821 = hcdr(here3821);
  yeah* harg3823 = hcar(here3821);
  GLfloat green = (GLfloat)getfloatcvt(harg3823);
  here3821 = hcdr(here3821);
  yeah* harg3824 = hcar(here3821);
  GLfloat blue = (GLfloat)getfloatcvt(harg3824);
  here3821 = hcdr(here3821);
  A(isnil(here3821));
  glColor3f(red, green, blue);
  return Nil;
}
yeah* foop_glColor3dv(yeah* arg3825) {
  yeah* here3826 = arg3825;
  yeah* harg3827 = hcar(here3826);
  const GLdouble* v = (const GLdouble*)opaqueval(harg3827);
  here3826 = hcdr(here3826);
  A(isnil(here3826));
  glColor3dv(v);
  return Nil;
}
yeah* foop_glColor3d(yeah* arg3828) {
  yeah* here3829 = arg3828;
  yeah* harg3830 = hcar(here3829);
  GLdouble red = (GLdouble)getfloatcvt(harg3830);
  here3829 = hcdr(here3829);
  yeah* harg3831 = hcar(here3829);
  GLdouble green = (GLdouble)getfloatcvt(harg3831);
  here3829 = hcdr(here3829);
  yeah* harg3832 = hcar(here3829);
  GLdouble blue = (GLdouble)getfloatcvt(harg3832);
  here3829 = hcdr(here3829);
  A(isnil(here3829));
  glColor3d(red, green, blue);
  return Nil;
}
yeah* foop_glColor3bv(yeah* arg3833) {
  yeah* here3834 = arg3833;
  yeah* harg3835 = hcar(here3834);
  const GLbyte* v = (const GLbyte*)opaqueval(harg3835);
  here3834 = hcdr(here3834);
  A(isnil(here3834));
  glColor3bv(v);
  return Nil;
}
yeah* foop_glColor3b(yeah* arg3836) {
  yeah* here3837 = arg3836;
  yeah* harg3838 = hcar(here3837);
  int red = (int)getint(harg3838);
  here3837 = hcdr(here3837);
  yeah* harg3839 = hcar(here3837);
  int green = (int)getint(harg3839);
  here3837 = hcdr(here3837);
  yeah* harg3840 = hcar(here3837);
  int blue = (int)getint(harg3840);
  here3837 = hcdr(here3837);
  A(isnil(here3837));
  glColor3b(red, green, blue);
  return Nil;
}
yeah* foop_glClipPlane(yeah* arg3841) {
  yeah* here3842 = arg3841;
  yeah* harg3843 = hcar(here3842);
  GLenum plane = (GLenum)getint(harg3843);
  here3842 = hcdr(here3842);
  yeah* harg3844 = hcar(here3842);
  const GLdouble* equation = (const GLdouble*)opaqueval(harg3844);
  here3842 = hcdr(here3842);
  A(isnil(here3842));
  glClipPlane(plane, equation);
  return Nil;
}
yeah* foop_glClearStencil(yeah* arg3845) {
  yeah* here3846 = arg3845;
  yeah* harg3847 = hcar(here3846);
  GLint s = (GLint)getint(harg3847);
  here3846 = hcdr(here3846);
  A(isnil(here3846));
  glClearStencil(s);
  return Nil;
}
yeah* foop_glClearIndex(yeah* arg3848) {
  yeah* here3849 = arg3848;
  yeah* harg3850 = hcar(here3849);
  GLfloat c = (GLfloat)getfloatcvt(harg3850);
  here3849 = hcdr(here3849);
  A(isnil(here3849));
  glClearIndex(c);
  return Nil;
}
yeah* foop_glClearDepth(yeah* arg3851) {
  yeah* here3852 = arg3851;
  yeah* harg3853 = hcar(here3852);
  GLclampd depth = (GLclampd)getfloatcvt(harg3853);
  here3852 = hcdr(here3852);
  A(isnil(here3852));
  glClearDepth(depth);
  return Nil;
}
yeah* foop_glClearColor(yeah* arg3854) {
  yeah* here3855 = arg3854;
  yeah* harg3856 = hcar(here3855);
  GLclampf red = (GLclampf)getfloatcvt(harg3856);
  here3855 = hcdr(here3855);
  yeah* harg3857 = hcar(here3855);
  GLclampf green = (GLclampf)getfloatcvt(harg3857);
  here3855 = hcdr(here3855);
  yeah* harg3858 = hcar(here3855);
  GLclampf blue = (GLclampf)getfloatcvt(harg3858);
  here3855 = hcdr(here3855);
  yeah* harg3859 = hcar(here3855);
  GLclampf alpha = (GLclampf)getfloatcvt(harg3859);
  here3855 = hcdr(here3855);
  A(isnil(here3855));
  glClearColor(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glClearAccum(yeah* arg3860) {
  yeah* here3861 = arg3860;
  yeah* harg3862 = hcar(here3861);
  GLfloat red = (GLfloat)getfloatcvt(harg3862);
  here3861 = hcdr(here3861);
  yeah* harg3863 = hcar(here3861);
  GLfloat green = (GLfloat)getfloatcvt(harg3863);
  here3861 = hcdr(here3861);
  yeah* harg3864 = hcar(here3861);
  GLfloat blue = (GLfloat)getfloatcvt(harg3864);
  here3861 = hcdr(here3861);
  yeah* harg3865 = hcar(here3861);
  GLfloat alpha = (GLfloat)getfloatcvt(harg3865);
  here3861 = hcdr(here3861);
  A(isnil(here3861));
  glClearAccum(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glClear(yeah* arg3866) {
  yeah* here3867 = arg3866;
  yeah* harg3868 = hcar(here3867);
  GLbitfield mask = (GLbitfield)getint(harg3868);
  here3867 = hcdr(here3867);
  A(isnil(here3867));
  glClear(mask);
  return Nil;
}
yeah* foop_glCallLists(yeah* arg3869) {
  yeah* here3870 = arg3869;
  yeah* harg3871 = hcar(here3870);
  GLsizei n = (GLsizei)getint(harg3871);
  here3870 = hcdr(here3870);
  yeah* harg3872 = hcar(here3870);
  GLenum type = (GLenum)getint(harg3872);
  here3870 = hcdr(here3870);
  yeah* harg3873 = hcar(here3870);
  const GLvoid* lists = (const GLvoid*)opaqueval(harg3873);
  here3870 = hcdr(here3870);
  A(isnil(here3870));
  glCallLists(n, type, lists);
  return Nil;
}
yeah* foop_glCallList(yeah* arg3874) {
  yeah* here3875 = arg3874;
  yeah* harg3876 = hcar(here3875);
  GLuint list = (GLuint)getint(harg3876);
  here3875 = hcdr(here3875);
  A(isnil(here3875));
  glCallList(list);
  return Nil;
}
yeah* foop_glBlendFunc(yeah* arg3877) {
  yeah* here3878 = arg3877;
  yeah* harg3879 = hcar(here3878);
  GLenum sfactor = (GLenum)getint(harg3879);
  here3878 = hcdr(here3878);
  yeah* harg3880 = hcar(here3878);
  GLenum dfactor = (GLenum)getint(harg3880);
  here3878 = hcdr(here3878);
  A(isnil(here3878));
  glBlendFunc(sfactor, dfactor);
  return Nil;
}
yeah* foop_glBlendEquationSeparate(yeah* arg3881) {
  yeah* here3882 = arg3881;
  yeah* harg3883 = hcar(here3882);
  GLenum modeRGB = (GLenum)getint(harg3883);
  here3882 = hcdr(here3882);
  yeah* harg3884 = hcar(here3882);
  GLenum modeAlpha = (GLenum)getint(harg3884);
  here3882 = hcdr(here3882);
  A(isnil(here3882));
  glBlendEquationSeparate(modeRGB, modeAlpha);
  return Nil;
}
yeah* foop_glBlendEquation(yeah* arg3885) {
  yeah* here3886 = arg3885;
  yeah* harg3887 = hcar(here3886);
  GLenum mode = (GLenum)getint(harg3887);
  here3886 = hcdr(here3886);
  A(isnil(here3886));
  glBlendEquation(mode);
  return Nil;
}
yeah* foop_glBlendColor(yeah* arg3888) {
  yeah* here3889 = arg3888;
  yeah* harg3890 = hcar(here3889);
  GLclampf red = (GLclampf)getfloatcvt(harg3890);
  here3889 = hcdr(here3889);
  yeah* harg3891 = hcar(here3889);
  GLclampf green = (GLclampf)getfloatcvt(harg3891);
  here3889 = hcdr(here3889);
  yeah* harg3892 = hcar(here3889);
  GLclampf blue = (GLclampf)getfloatcvt(harg3892);
  here3889 = hcdr(here3889);
  yeah* harg3893 = hcar(here3889);
  GLclampf alpha = (GLclampf)getfloatcvt(harg3893);
  here3889 = hcdr(here3889);
  A(isnil(here3889));
  glBlendColor(red, green, blue, alpha);
  return Nil;
}
yeah* foop_glBitmap(yeah* arg3894) {
  yeah* here3895 = arg3894;
  yeah* harg3896 = hcar(here3895);
  GLsizei width = (GLsizei)getint(harg3896);
  here3895 = hcdr(here3895);
  yeah* harg3897 = hcar(here3895);
  GLsizei height = (GLsizei)getint(harg3897);
  here3895 = hcdr(here3895);
  yeah* harg3898 = hcar(here3895);
  GLfloat xorig = (GLfloat)getfloatcvt(harg3898);
  here3895 = hcdr(here3895);
  yeah* harg3899 = hcar(here3895);
  GLfloat yorig = (GLfloat)getfloatcvt(harg3899);
  here3895 = hcdr(here3895);
  yeah* harg3900 = hcar(here3895);
  GLfloat xmove = (GLfloat)getfloatcvt(harg3900);
  here3895 = hcdr(here3895);
  yeah* harg3901 = hcar(here3895);
  GLfloat ymove = (GLfloat)getfloatcvt(harg3901);
  here3895 = hcdr(here3895);
  yeah* harg3902 = hcar(here3895);
  const GLubyte* bitmap = (const GLubyte*)opaqueval(harg3902);
  here3895 = hcdr(here3895);
  A(isnil(here3895));
  glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
  return Nil;
}
yeah* foop_glBindTexture(yeah* arg3903) {
  yeah* here3904 = arg3903;
  yeah* harg3905 = hcar(here3904);
  GLenum target = (GLenum)getint(harg3905);
  here3904 = hcdr(here3904);
  yeah* harg3906 = hcar(here3904);
  GLuint texture = (GLuint)getint(harg3906);
  here3904 = hcdr(here3904);
  A(isnil(here3904));
  glBindTexture(target, texture);
  return Nil;
}
yeah* foop_glBegin(yeah* arg3907) {
  yeah* here3908 = arg3907;
  yeah* harg3909 = hcar(here3908);
  GLenum mode = (GLenum)getint(harg3909);
  here3908 = hcdr(here3908);
  A(isnil(here3908));
  glBegin(mode);
  return Nil;
}
yeah* foop_glArrayElement(yeah* arg3910) {
  yeah* here3911 = arg3910;
  yeah* harg3912 = hcar(here3911);
  GLint i = (GLint)getint(harg3912);
  here3911 = hcdr(here3911);
  A(isnil(here3911));
  glArrayElement(i);
  return Nil;
}
yeah* foop_glAreTexturesResident(yeah* arg3913) {
  yeah* here3914 = arg3913;
  yeah* harg3915 = hcar(here3914);
  GLsizei n = (GLsizei)getint(harg3915);
  here3914 = hcdr(here3914);
  yeah* harg3916 = hcar(here3914);
  const GLuint* textures = (const GLuint*)opaqueval(harg3916);
  here3914 = hcdr(here3914);
  yeah* harg3917 = hcar(here3914);
  GLboolean* residences = (GLboolean*)opaqueval(harg3917);
  here3914 = hcdr(here3914);
  A(isnil(here3914));
  GLboolean ret3918 = glAreTexturesResident(n, textures, residences);
  return integer((int)ret3918);
}
yeah* foop_glAlphaFunc(yeah* arg3919) {
  yeah* here3920 = arg3919;
  yeah* harg3921 = hcar(here3920);
  GLenum func = (GLenum)getint(harg3921);
  here3920 = hcdr(here3920);
  yeah* harg3922 = hcar(here3920);
  GLclampf ref = (GLclampf)getfloatcvt(harg3922);
  here3920 = hcdr(here3920);
  A(isnil(here3920));
  glAlphaFunc(func, ref);
  return Nil;
}
yeah* foop_glAccum(yeah* arg3923) {
  yeah* here3924 = arg3923;
  yeah* harg3925 = hcar(here3924);
  GLenum op = (GLenum)getint(harg3925);
  here3924 = hcdr(here3924);
  yeah* harg3926 = hcar(here3924);
  GLfloat value = (GLfloat)getfloatcvt(harg3926);
  here3924 = hcdr(here3924);
  A(isnil(here3924));
  glAccum(op, value);
  return Nil;
}
yeah* foop_glPointParameterivNV(yeah* arg3927) {
  yeah* here3928 = arg3927;
  yeah* harg3929 = hcar(here3928);
  GLenum pname = (GLenum)getint(harg3929);
  here3928 = hcdr(here3928);
  yeah* harg3930 = hcar(here3928);
  const GLint* params = (const GLint*)opaqueval(harg3930);
  here3928 = hcdr(here3928);
  A(isnil(here3928));
  glPointParameterivNV(pname, params);
  return Nil;
}
yeah* foop_glPointParameteriNV(yeah* arg3931) {
  yeah* here3932 = arg3931;
  yeah* harg3933 = hcar(here3932);
  GLenum pname = (GLenum)getint(harg3933);
  here3932 = hcdr(here3932);
  yeah* harg3934 = hcar(here3932);
  GLint param = (GLint)getint(harg3934);
  here3932 = hcdr(here3932);
  A(isnil(here3932));
  glPointParameteriNV(pname, param);
  return Nil;
}
yeah* foop_glGetCombinerStageParameterfvNV(yeah* arg3935) {
  yeah* here3936 = arg3935;
  yeah* harg3937 = hcar(here3936);
  GLenum anonp86 = (GLenum)getint(harg3937);
  here3936 = hcdr(here3936);
  yeah* harg3938 = hcar(here3936);
  GLenum anonp87 = (GLenum)getint(harg3938);
  here3936 = hcdr(here3936);
  yeah* harg3939 = hcar(here3936);
  GLfloat* anonp88 = (GLfloat*)opaqueval(harg3939);
  here3936 = hcdr(here3936);
  A(isnil(here3936));
  glGetCombinerStageParameterfvNV(anonp86, anonp87, anonp88);
  return Nil;
}
yeah* foop_glCombinerStageParameterfvNV(yeah* arg3940) {
  yeah* here3941 = arg3940;
  yeah* harg3942 = hcar(here3941);
  GLenum anonp89 = (GLenum)getint(harg3942);
  here3941 = hcdr(here3941);
  yeah* harg3943 = hcar(here3941);
  GLenum anonp90 = (GLenum)getint(harg3943);
  here3941 = hcdr(here3941);
  yeah* harg3944 = hcar(here3941);
  const GLfloat* anonp91 = (const GLfloat*)opaqueval(harg3944);
  here3941 = hcdr(here3941);
  A(isnil(here3941));
  glCombinerStageParameterfvNV(anonp89, anonp90, anonp91);
  return Nil;
}
yeah* foop_glGetFinalCombinerInputParameterivNV(yeah* arg3945) {
  yeah* here3946 = arg3945;
  yeah* harg3947 = hcar(here3946);
  GLenum anonp92 = (GLenum)getint(harg3947);
  here3946 = hcdr(here3946);
  yeah* harg3948 = hcar(here3946);
  GLenum anonp93 = (GLenum)getint(harg3948);
  here3946 = hcdr(here3946);
  yeah* harg3949 = hcar(here3946);
  GLint* anonp94 = (GLint*)opaqueval(harg3949);
  here3946 = hcdr(here3946);
  A(isnil(here3946));
  glGetFinalCombinerInputParameterivNV(anonp92, anonp93, anonp94);
  return Nil;
}
yeah* foop_glGetFinalCombinerInputParameterfvNV(yeah* arg3950) {
  yeah* here3951 = arg3950;
  yeah* harg3952 = hcar(here3951);
  GLenum anonp95 = (GLenum)getint(harg3952);
  here3951 = hcdr(here3951);
  yeah* harg3953 = hcar(here3951);
  GLenum anonp96 = (GLenum)getint(harg3953);
  here3951 = hcdr(here3951);
  yeah* harg3954 = hcar(here3951);
  GLfloat* anonp97 = (GLfloat*)opaqueval(harg3954);
  here3951 = hcdr(here3951);
  A(isnil(here3951));
  glGetFinalCombinerInputParameterfvNV(anonp95, anonp96, anonp97);
  return Nil;
}
yeah* foop_glGetCombinerOutputParameterivNV(yeah* arg3955) {
  yeah* here3956 = arg3955;
  yeah* harg3957 = hcar(here3956);
  GLenum anonp98 = (GLenum)getint(harg3957);
  here3956 = hcdr(here3956);
  yeah* harg3958 = hcar(here3956);
  GLenum anonp99 = (GLenum)getint(harg3958);
  here3956 = hcdr(here3956);
  yeah* harg3959 = hcar(here3956);
  GLenum anonp100 = (GLenum)getint(harg3959);
  here3956 = hcdr(here3956);
  yeah* harg3960 = hcar(here3956);
  GLint* anonp101 = (GLint*)opaqueval(harg3960);
  here3956 = hcdr(here3956);
  A(isnil(here3956));
  glGetCombinerOutputParameterivNV(anonp98, anonp99, anonp100, anonp101);
  return Nil;
}
yeah* foop_glGetCombinerOutputParameterfvNV(yeah* arg3961) {
  yeah* here3962 = arg3961;
  yeah* harg3963 = hcar(here3962);
  GLenum anonp102 = (GLenum)getint(harg3963);
  here3962 = hcdr(here3962);
  yeah* harg3964 = hcar(here3962);
  GLenum anonp103 = (GLenum)getint(harg3964);
  here3962 = hcdr(here3962);
  yeah* harg3965 = hcar(here3962);
  GLenum anonp104 = (GLenum)getint(harg3965);
  here3962 = hcdr(here3962);
  yeah* harg3966 = hcar(here3962);
  GLfloat* anonp105 = (GLfloat*)opaqueval(harg3966);
  here3962 = hcdr(here3962);
  A(isnil(here3962));
  glGetCombinerOutputParameterfvNV(anonp102, anonp103, anonp104, anonp105);
  return Nil;
}
yeah* foop_glGetCombinerInputParameterivNV(yeah* arg3967) {
  yeah* here3968 = arg3967;
  yeah* harg3969 = hcar(here3968);
  GLenum anonp106 = (GLenum)getint(harg3969);
  here3968 = hcdr(here3968);
  yeah* harg3970 = hcar(here3968);
  GLenum anonp107 = (GLenum)getint(harg3970);
  here3968 = hcdr(here3968);
  yeah* harg3971 = hcar(here3968);
  GLenum anonp108 = (GLenum)getint(harg3971);
  here3968 = hcdr(here3968);
  yeah* harg3972 = hcar(here3968);
  GLenum anonp109 = (GLenum)getint(harg3972);
  here3968 = hcdr(here3968);
  yeah* harg3973 = hcar(here3968);
  GLint* anonp110 = (GLint*)opaqueval(harg3973);
  here3968 = hcdr(here3968);
  A(isnil(here3968));
  glGetCombinerInputParameterivNV(anonp106, anonp107, anonp108, anonp109, anonp110);
  return Nil;
}
yeah* foop_glGetCombinerInputParameterfvNV(yeah* arg3974) {
  yeah* here3975 = arg3974;
  yeah* harg3976 = hcar(here3975);
  GLenum anonp111 = (GLenum)getint(harg3976);
  here3975 = hcdr(here3975);
  yeah* harg3977 = hcar(here3975);
  GLenum anonp112 = (GLenum)getint(harg3977);
  here3975 = hcdr(here3975);
  yeah* harg3978 = hcar(here3975);
  GLenum anonp113 = (GLenum)getint(harg3978);
  here3975 = hcdr(here3975);
  yeah* harg3979 = hcar(here3975);
  GLenum anonp114 = (GLenum)getint(harg3979);
  here3975 = hcdr(here3975);
  yeah* harg3980 = hcar(here3975);
  GLfloat* anonp115 = (GLfloat*)opaqueval(harg3980);
  here3975 = hcdr(here3975);
  A(isnil(here3975));
  glGetCombinerInputParameterfvNV(anonp111, anonp112, anonp113, anonp114, anonp115);
  return Nil;
}
yeah* foop_glFinalCombinerInputNV(yeah* arg3981) {
  yeah* here3982 = arg3981;
  yeah* harg3983 = hcar(here3982);
  GLenum anonp116 = (GLenum)getint(harg3983);
  here3982 = hcdr(here3982);
  yeah* harg3984 = hcar(here3982);
  GLenum anonp117 = (GLenum)getint(harg3984);
  here3982 = hcdr(here3982);
  yeah* harg3985 = hcar(here3982);
  GLenum anonp118 = (GLenum)getint(harg3985);
  here3982 = hcdr(here3982);
  yeah* harg3986 = hcar(here3982);
  GLenum anonp119 = (GLenum)getint(harg3986);
  here3982 = hcdr(here3982);
  A(isnil(here3982));
  glFinalCombinerInputNV(anonp116, anonp117, anonp118, anonp119);
  return Nil;
}
yeah* foop_glCombinerOutputNV(yeah* arg3987) {
  yeah* here3988 = arg3987;
  yeah* harg3989 = hcar(here3988);
  GLenum anonp120 = (GLenum)getint(harg3989);
  here3988 = hcdr(here3988);
  yeah* harg3990 = hcar(here3988);
  GLenum anonp121 = (GLenum)getint(harg3990);
  here3988 = hcdr(here3988);
  yeah* harg3991 = hcar(here3988);
  GLenum anonp122 = (GLenum)getint(harg3991);
  here3988 = hcdr(here3988);
  yeah* harg3992 = hcar(here3988);
  GLenum anonp123 = (GLenum)getint(harg3992);
  here3988 = hcdr(here3988);
  yeah* harg3993 = hcar(here3988);
  GLenum anonp124 = (GLenum)getint(harg3993);
  here3988 = hcdr(here3988);
  yeah* harg3994 = hcar(here3988);
  GLenum anonp125 = (GLenum)getint(harg3994);
  here3988 = hcdr(here3988);
  yeah* harg3995 = hcar(here3988);
  GLenum anonp126 = (GLenum)getint(harg3995);
  here3988 = hcdr(here3988);
  yeah* harg3996 = hcar(here3988);
  int anonp127 = (int)getint(harg3996);
  here3988 = hcdr(here3988);
  yeah* harg3997 = hcar(here3988);
  int anonp128 = (int)getint(harg3997);
  here3988 = hcdr(here3988);
  yeah* harg3998 = hcar(here3988);
  int anonp129 = (int)getint(harg3998);
  here3988 = hcdr(here3988);
  A(isnil(here3988));
  glCombinerOutputNV(anonp120, anonp121, anonp122, anonp123, anonp124, anonp125, anonp126, anonp127, anonp128, anonp129);
  return Nil;
}
yeah* foop_glCombinerInputNV(yeah* arg3999) {
  yeah* here4000 = arg3999;
  yeah* harg4001 = hcar(here4000);
  GLenum anonp130 = (GLenum)getint(harg4001);
  here4000 = hcdr(here4000);
  yeah* harg4002 = hcar(here4000);
  GLenum anonp131 = (GLenum)getint(harg4002);
  here4000 = hcdr(here4000);
  yeah* harg4003 = hcar(here4000);
  GLenum anonp132 = (GLenum)getint(harg4003);
  here4000 = hcdr(here4000);
  yeah* harg4004 = hcar(here4000);
  GLenum anonp133 = (GLenum)getint(harg4004);
  here4000 = hcdr(here4000);
  yeah* harg4005 = hcar(here4000);
  GLenum anonp134 = (GLenum)getint(harg4005);
  here4000 = hcdr(here4000);
  yeah* harg4006 = hcar(here4000);
  GLenum anonp135 = (GLenum)getint(harg4006);
  here4000 = hcdr(here4000);
  A(isnil(here4000));
  glCombinerInputNV(anonp130, anonp131, anonp132, anonp133, anonp134, anonp135);
  return Nil;
}
yeah* foop_glCombinerParameteriNV(yeah* arg4007) {
  yeah* here4008 = arg4007;
  yeah* harg4009 = hcar(here4008);
  GLenum anonp136 = (GLenum)getint(harg4009);
  here4008 = hcdr(here4008);
  yeah* harg4010 = hcar(here4008);
  GLint anonp137 = (GLint)getint(harg4010);
  here4008 = hcdr(here4008);
  A(isnil(here4008));
  glCombinerParameteriNV(anonp136, anonp137);
  return Nil;
}
yeah* foop_glCombinerParameterivNV(yeah* arg4011) {
  yeah* here4012 = arg4011;
  yeah* harg4013 = hcar(here4012);
  GLenum anonp138 = (GLenum)getint(harg4013);
  here4012 = hcdr(here4012);
  yeah* harg4014 = hcar(here4012);
  const GLint* anonp139 = (const GLint*)opaqueval(harg4014);
  here4012 = hcdr(here4012);
  A(isnil(here4012));
  glCombinerParameterivNV(anonp138, anonp139);
  return Nil;
}
yeah* foop_glCombinerParameterfNV(yeah* arg4015) {
  yeah* here4016 = arg4015;
  yeah* harg4017 = hcar(here4016);
  GLenum anonp140 = (GLenum)getint(harg4017);
  here4016 = hcdr(here4016);
  yeah* harg4018 = hcar(here4016);
  GLfloat anonp141 = (GLfloat)getfloatcvt(harg4018);
  here4016 = hcdr(here4016);
  A(isnil(here4016));
  glCombinerParameterfNV(anonp140, anonp141);
  return Nil;
}
yeah* foop_glCombinerParameterfvNV(yeah* arg4019) {
  yeah* here4020 = arg4019;
  yeah* harg4021 = hcar(here4020);
  GLenum anonp142 = (GLenum)getint(harg4021);
  here4020 = hcdr(here4020);
  yeah* harg4022 = hcar(here4020);
  const GLfloat* anonp143 = (const GLfloat*)opaqueval(harg4022);
  here4020 = hcdr(here4020);
  A(isnil(here4020));
  glCombinerParameterfvNV(anonp142, anonp143);
  return Nil;
}
yeah* foop_glPNTrianglesfATIX(yeah* arg4023) {
  yeah* here4024 = arg4023;
  yeah* harg4025 = hcar(here4024);
  GLenum pname = (GLenum)getint(harg4025);
  here4024 = hcdr(here4024);
  yeah* harg4026 = hcar(here4024);
  GLfloat param = (GLfloat)getfloatcvt(harg4026);
  here4024 = hcdr(here4024);
  A(isnil(here4024));
  glPNTrianglesfATIX(pname, param);
  return Nil;
}
yeah* foop_glPNTrianglesiATIX(yeah* arg4027) {
  yeah* here4028 = arg4027;
  yeah* harg4029 = hcar(here4028);
  GLenum pname = (GLenum)getint(harg4029);
  here4028 = hcdr(here4028);
  yeah* harg4030 = hcar(here4028);
  GLint param = (GLint)getint(harg4030);
  here4028 = hcdr(here4028);
  A(isnil(here4028));
  glPNTrianglesiATIX(pname, param);
  return Nil;
}
yeah* foop_glStencilFuncSeparateATI(yeah* arg4031) {
  yeah* here4032 = arg4031;
  yeah* harg4033 = hcar(here4032);
  GLenum frontfunc = (GLenum)getint(harg4033);
  here4032 = hcdr(here4032);
  yeah* harg4034 = hcar(here4032);
  GLenum backfunc = (GLenum)getint(harg4034);
  here4032 = hcdr(here4032);
  yeah* harg4035 = hcar(here4032);
  GLint ref = (GLint)getint(harg4035);
  here4032 = hcdr(here4032);
  yeah* harg4036 = hcar(here4032);
  GLuint mask = (GLuint)getint(harg4036);
  here4032 = hcdr(here4032);
  A(isnil(here4032));
  glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
  return Nil;
}
yeah* foop_glStencilOpSeparateATI(yeah* arg4037) {
  yeah* here4038 = arg4037;
  yeah* harg4039 = hcar(here4038);
  GLenum face = (GLenum)getint(harg4039);
  here4038 = hcdr(here4038);
  yeah* harg4040 = hcar(here4038);
  GLenum sfail = (GLenum)getint(harg4040);
  here4038 = hcdr(here4038);
  yeah* harg4041 = hcar(here4038);
  GLenum dpfail = (GLenum)getint(harg4041);
  here4038 = hcdr(here4038);
  yeah* harg4042 = hcar(here4038);
  GLenum dppass = (GLenum)getint(harg4042);
  here4038 = hcdr(here4038);
  A(isnil(here4038));
  glStencilOpSeparateATI(face, sfail, dpfail, dppass);
  return Nil;
}
yeah* foop_glBlendEquationSeparateATI(yeah* arg4043) {
  yeah* here4044 = arg4043;
  yeah* harg4045 = hcar(here4044);
  GLenum equationRGB = (GLenum)getint(harg4045);
  here4044 = hcdr(here4044);
  yeah* harg4046 = hcar(here4044);
  GLenum equationAlpha = (GLenum)getint(harg4046);
  here4044 = hcdr(here4044);
  A(isnil(here4044));
  glBlendEquationSeparateATI(equationRGB, equationAlpha);
  return Nil;
}
yeah* foop_glPNTrianglesfATI(yeah* arg4047) {
  yeah* here4048 = arg4047;
  yeah* harg4049 = hcar(here4048);
  GLenum pname = (GLenum)getint(harg4049);
  here4048 = hcdr(here4048);
  yeah* harg4050 = hcar(here4048);
  GLfloat param = (GLfloat)getfloatcvt(harg4050);
  here4048 = hcdr(here4048);
  A(isnil(here4048));
  glPNTrianglesfATI(pname, param);
  return Nil;
}
yeah* foop_glPNTrianglesiATI(yeah* arg4051) {
  yeah* here4052 = arg4051;
  yeah* harg4053 = hcar(here4052);
  GLenum pname = (GLenum)getint(harg4053);
  here4052 = hcdr(here4052);
  yeah* harg4054 = hcar(here4052);
  GLint param = (GLint)getint(harg4054);
  here4052 = hcdr(here4052);
  A(isnil(here4052));
  glPNTrianglesiATI(pname, param);
  return Nil;
}
yeah* foop_glGetObjectParameterivAPPLE(yeah* arg4055) {
  yeah* here4056 = arg4055;
  yeah* harg4057 = hcar(here4056);
  GLenum objectType = (GLenum)getint(harg4057);
  here4056 = hcdr(here4056);
  yeah* harg4058 = hcar(here4056);
  GLuint name = (GLuint)getint(harg4058);
  here4056 = hcdr(here4056);
  yeah* harg4059 = hcar(here4056);
  GLenum pname = (GLenum)getint(harg4059);
  here4056 = hcdr(here4056);
  yeah* harg4060 = hcar(here4056);
  GLint* params = (GLint*)opaqueval(harg4060);
  here4056 = hcdr(here4056);
  A(isnil(here4056));
  glGetObjectParameterivAPPLE(objectType, name, pname, params);
  return Nil;
}
yeah* foop_glObjectUnpurgeableAPPLE(yeah* arg4061) {
  yeah* here4062 = arg4061;
  yeah* harg4063 = hcar(here4062);
  GLenum objectType = (GLenum)getint(harg4063);
  here4062 = hcdr(here4062);
  yeah* harg4064 = hcar(here4062);
  GLuint name = (GLuint)getint(harg4064);
  here4062 = hcdr(here4062);
  yeah* harg4065 = hcar(here4062);
  GLenum option = (GLenum)getint(harg4065);
  here4062 = hcdr(here4062);
  A(isnil(here4062));
  GLenum ret4066 = glObjectUnpurgeableAPPLE(objectType, name, option);
  return integer((int)ret4066);
}
yeah* foop_glObjectPurgeableAPPLE(yeah* arg4067) {
  yeah* here4068 = arg4067;
  yeah* harg4069 = hcar(here4068);
  GLenum objectType = (GLenum)getint(harg4069);
  here4068 = hcdr(here4068);
  yeah* harg4070 = hcar(here4068);
  GLuint name = (GLuint)getint(harg4070);
  here4068 = hcdr(here4068);
  yeah* harg4071 = hcar(here4068);
  GLenum option = (GLenum)getint(harg4071);
  here4068 = hcdr(here4068);
  A(isnil(here4068));
  GLenum ret4072 = glObjectPurgeableAPPLE(objectType, name, option);
  return integer((int)ret4072);
}
yeah* foop_glFlushMappedBufferRangeAPPLE(yeah* arg4073) {
  yeah* here4074 = arg4073;
  yeah* harg4075 = hcar(here4074);
  GLenum target = (GLenum)getint(harg4075);
  here4074 = hcdr(here4074);
  yeah* harg4076 = hcar(here4074);
  GLintptr offset = (GLintptr)opaqueval(harg4076);
  here4074 = hcdr(here4074);
  yeah* harg4077 = hcar(here4074);
  GLsizeiptr size = (GLsizeiptr)opaqueval(harg4077);
  here4074 = hcdr(here4074);
  A(isnil(here4074));
  glFlushMappedBufferRangeAPPLE(target, offset, size);
  return Nil;
}
yeah* foop_glBufferParameteriAPPLE(yeah* arg4078) {
  yeah* here4079 = arg4078;
  yeah* harg4080 = hcar(here4079);
  GLenum target = (GLenum)getint(harg4080);
  here4079 = hcdr(here4079);
  yeah* harg4081 = hcar(here4079);
  GLenum pname = (GLenum)getint(harg4081);
  here4079 = hcdr(here4079);
  yeah* harg4082 = hcar(here4079);
  GLint param = (GLint)getint(harg4082);
  here4079 = hcdr(here4079);
  A(isnil(here4079));
  glBufferParameteriAPPLE(target, pname, param);
  return Nil;
}
yeah* foop_glMapVertexAttrib2fAPPLE(yeah* arg4083) {
  yeah* here4084 = arg4083;
  yeah* harg4085 = hcar(here4084);
  GLuint index = (GLuint)getint(harg4085);
  here4084 = hcdr(here4084);
  yeah* harg4086 = hcar(here4084);
  GLuint size = (GLuint)getint(harg4086);
  here4084 = hcdr(here4084);
  yeah* harg4087 = hcar(here4084);
  GLfloat u1 = (GLfloat)getfloatcvt(harg4087);
  here4084 = hcdr(here4084);
  yeah* harg4088 = hcar(here4084);
  GLfloat u2 = (GLfloat)getfloatcvt(harg4088);
  here4084 = hcdr(here4084);
  yeah* harg4089 = hcar(here4084);
  GLint ustride = (GLint)getint(harg4089);
  here4084 = hcdr(here4084);
  yeah* harg4090 = hcar(here4084);
  GLint uorder = (GLint)getint(harg4090);
  here4084 = hcdr(here4084);
  yeah* harg4091 = hcar(here4084);
  GLfloat v1 = (GLfloat)getfloatcvt(harg4091);
  here4084 = hcdr(here4084);
  yeah* harg4092 = hcar(here4084);
  GLfloat v2 = (GLfloat)getfloatcvt(harg4092);
  here4084 = hcdr(here4084);
  yeah* harg4093 = hcar(here4084);
  GLint vstride = (GLint)getint(harg4093);
  here4084 = hcdr(here4084);
  yeah* harg4094 = hcar(here4084);
  GLint vorder = (GLint)getint(harg4094);
  here4084 = hcdr(here4084);
  yeah* harg4095 = hcar(here4084);
  const GLfloat* points = (const GLfloat*)opaqueval(harg4095);
  here4084 = hcdr(here4084);
  A(isnil(here4084));
  glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
  return Nil;
}
yeah* foop_glMapVertexAttrib2dAPPLE(yeah* arg4096) {
  yeah* here4097 = arg4096;
  yeah* harg4098 = hcar(here4097);
  GLuint index = (GLuint)getint(harg4098);
  here4097 = hcdr(here4097);
  yeah* harg4099 = hcar(here4097);
  GLuint size = (GLuint)getint(harg4099);
  here4097 = hcdr(here4097);
  yeah* harg4100 = hcar(here4097);
  GLdouble u1 = (GLdouble)getfloatcvt(harg4100);
  here4097 = hcdr(here4097);
  yeah* harg4101 = hcar(here4097);
  GLdouble u2 = (GLdouble)getfloatcvt(harg4101);
  here4097 = hcdr(here4097);
  yeah* harg4102 = hcar(here4097);
  GLint ustride = (GLint)getint(harg4102);
  here4097 = hcdr(here4097);
  yeah* harg4103 = hcar(here4097);
  GLint uorder = (GLint)getint(harg4103);
  here4097 = hcdr(here4097);
  yeah* harg4104 = hcar(here4097);
  GLdouble v1 = (GLdouble)getfloatcvt(harg4104);
  here4097 = hcdr(here4097);
  yeah* harg4105 = hcar(here4097);
  GLdouble v2 = (GLdouble)getfloatcvt(harg4105);
  here4097 = hcdr(here4097);
  yeah* harg4106 = hcar(here4097);
  GLint vstride = (GLint)getint(harg4106);
  here4097 = hcdr(here4097);
  yeah* harg4107 = hcar(here4097);
  GLint vorder = (GLint)getint(harg4107);
  here4097 = hcdr(here4097);
  yeah* harg4108 = hcar(here4097);
  const GLdouble* points = (const GLdouble*)opaqueval(harg4108);
  here4097 = hcdr(here4097);
  A(isnil(here4097));
  glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
  return Nil;
}
yeah* foop_glMapVertexAttrib1fAPPLE(yeah* arg4109) {
  yeah* here4110 = arg4109;
  yeah* harg4111 = hcar(here4110);
  GLuint index = (GLuint)getint(harg4111);
  here4110 = hcdr(here4110);
  yeah* harg4112 = hcar(here4110);
  GLuint size = (GLuint)getint(harg4112);
  here4110 = hcdr(here4110);
  yeah* harg4113 = hcar(here4110);
  GLfloat u1 = (GLfloat)getfloatcvt(harg4113);
  here4110 = hcdr(here4110);
  yeah* harg4114 = hcar(here4110);
  GLfloat u2 = (GLfloat)getfloatcvt(harg4114);
  here4110 = hcdr(here4110);
  yeah* harg4115 = hcar(here4110);
  GLint stride = (GLint)getint(harg4115);
  here4110 = hcdr(here4110);
  yeah* harg4116 = hcar(here4110);
  GLint order = (GLint)getint(harg4116);
  here4110 = hcdr(here4110);
  yeah* harg4117 = hcar(here4110);
  const GLfloat* points = (const GLfloat*)opaqueval(harg4117);
  here4110 = hcdr(here4110);
  A(isnil(here4110));
  glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
  return Nil;
}
yeah* foop_glMapVertexAttrib1dAPPLE(yeah* arg4118) {
  yeah* here4119 = arg4118;
  yeah* harg4120 = hcar(here4119);
  GLuint index = (GLuint)getint(harg4120);
  here4119 = hcdr(here4119);
  yeah* harg4121 = hcar(here4119);
  GLuint size = (GLuint)getint(harg4121);
  here4119 = hcdr(here4119);
  yeah* harg4122 = hcar(here4119);
  GLdouble u1 = (GLdouble)getfloatcvt(harg4122);
  here4119 = hcdr(here4119);
  yeah* harg4123 = hcar(here4119);
  GLdouble u2 = (GLdouble)getfloatcvt(harg4123);
  here4119 = hcdr(here4119);
  yeah* harg4124 = hcar(here4119);
  GLint stride = (GLint)getint(harg4124);
  here4119 = hcdr(here4119);
  yeah* harg4125 = hcar(here4119);
  GLint order = (GLint)getint(harg4125);
  here4119 = hcdr(here4119);
  yeah* harg4126 = hcar(here4119);
  const GLdouble* points = (const GLdouble*)opaqueval(harg4126);
  here4119 = hcdr(here4119);
  A(isnil(here4119));
  glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
  return Nil;
}
yeah* foop_glIsVertexAttribEnabledAPPLE(yeah* arg4127) {
  yeah* here4128 = arg4127;
  yeah* harg4129 = hcar(here4128);
  GLuint index = (GLuint)getint(harg4129);
  here4128 = hcdr(here4128);
  yeah* harg4130 = hcar(here4128);
  GLenum pname = (GLenum)getint(harg4130);
  here4128 = hcdr(here4128);
  A(isnil(here4128));
  GLboolean ret4131 = glIsVertexAttribEnabledAPPLE(index, pname);
  return integer((int)ret4131);
}
yeah* foop_glDisableVertexAttribAPPLE(yeah* arg4132) {
  yeah* here4133 = arg4132;
  yeah* harg4134 = hcar(here4133);
  GLuint index = (GLuint)getint(harg4134);
  here4133 = hcdr(here4133);
  yeah* harg4135 = hcar(here4133);
  GLenum pname = (GLenum)getint(harg4135);
  here4133 = hcdr(here4133);
  A(isnil(here4133));
  glDisableVertexAttribAPPLE(index, pname);
  return Nil;
}
yeah* foop_glEnableVertexAttribAPPLE(yeah* arg4136) {
  yeah* here4137 = arg4136;
  yeah* harg4138 = hcar(here4137);
  GLuint index = (GLuint)getint(harg4138);
  here4137 = hcdr(here4137);
  yeah* harg4139 = hcar(here4137);
  GLenum pname = (GLenum)getint(harg4139);
  here4137 = hcdr(here4137);
  A(isnil(here4137));
  glEnableVertexAttribAPPLE(index, pname);
  return Nil;
}
yeah* foop_glSwapAPPLE(yeah* arg4140) {
  yeah* here4141 = arg4140;
  A(isnil(here4141));
  glSwapAPPLE();
  return Nil;
}
yeah* foop_glFinishRenderAPPLE(yeah* arg4142) {
  yeah* here4143 = arg4142;
  A(isnil(here4143));
  glFinishRenderAPPLE();
  return Nil;
}
yeah* foop_glFlushRenderAPPLE(yeah* arg4144) {
  yeah* here4145 = arg4144;
  A(isnil(here4145));
  glFlushRenderAPPLE();
  return Nil;
}
yeah* foop_glMultiDrawRangeElementArrayAPPLE(yeah* arg4146) {
  yeah* here4147 = arg4146;
  yeah* harg4148 = hcar(here4147);
  GLenum mode = (GLenum)getint(harg4148);
  here4147 = hcdr(here4147);
  yeah* harg4149 = hcar(here4147);
  GLuint start = (GLuint)getint(harg4149);
  here4147 = hcdr(here4147);
  yeah* harg4150 = hcar(here4147);
  GLuint end = (GLuint)getint(harg4150);
  here4147 = hcdr(here4147);
  yeah* harg4151 = hcar(here4147);
  const GLint* first = (const GLint*)opaqueval(harg4151);
  here4147 = hcdr(here4147);
  yeah* harg4152 = hcar(here4147);
  const GLsizei* count = (const GLsizei*)opaqueval(harg4152);
  here4147 = hcdr(here4147);
  yeah* harg4153 = hcar(here4147);
  GLsizei primcount = (GLsizei)getint(harg4153);
  here4147 = hcdr(here4147);
  A(isnil(here4147));
  glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
  return Nil;
}
yeah* foop_glMultiDrawElementArrayAPPLE(yeah* arg4154) {
  yeah* here4155 = arg4154;
  yeah* harg4156 = hcar(here4155);
  GLenum mode = (GLenum)getint(harg4156);
  here4155 = hcdr(here4155);
  yeah* harg4157 = hcar(here4155);
  const GLint* first = (const GLint*)opaqueval(harg4157);
  here4155 = hcdr(here4155);
  yeah* harg4158 = hcar(here4155);
  const GLsizei* count = (const GLsizei*)opaqueval(harg4158);
  here4155 = hcdr(here4155);
  yeah* harg4159 = hcar(here4155);
  GLsizei primcount = (GLsizei)getint(harg4159);
  here4155 = hcdr(here4155);
  A(isnil(here4155));
  glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
  return Nil;
}
yeah* foop_glDrawRangeElementArrayAPPLE(yeah* arg4160) {
  yeah* here4161 = arg4160;
  yeah* harg4162 = hcar(here4161);
  GLenum mode = (GLenum)getint(harg4162);
  here4161 = hcdr(here4161);
  yeah* harg4163 = hcar(here4161);
  GLuint start = (GLuint)getint(harg4163);
  here4161 = hcdr(here4161);
  yeah* harg4164 = hcar(here4161);
  GLuint end = (GLuint)getint(harg4164);
  here4161 = hcdr(here4161);
  yeah* harg4165 = hcar(here4161);
  GLint first = (GLint)getint(harg4165);
  here4161 = hcdr(here4161);
  yeah* harg4166 = hcar(here4161);
  GLsizei count = (GLsizei)getint(harg4166);
  here4161 = hcdr(here4161);
  A(isnil(here4161));
  glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
  return Nil;
}
yeah* foop_glDrawElementArrayAPPLE(yeah* arg4167) {
  yeah* here4168 = arg4167;
  yeah* harg4169 = hcar(here4168);
  GLenum mode = (GLenum)getint(harg4169);
  here4168 = hcdr(here4168);
  yeah* harg4170 = hcar(here4168);
  GLint first = (GLint)getint(harg4170);
  here4168 = hcdr(here4168);
  yeah* harg4171 = hcar(here4168);
  GLsizei count = (GLsizei)getint(harg4171);
  here4168 = hcdr(here4168);
  A(isnil(here4168));
  glDrawElementArrayAPPLE(mode, first, count);
  return Nil;
}
yeah* foop_glElementPointerAPPLE(yeah* arg4172) {
  yeah* here4173 = arg4172;
  yeah* harg4174 = hcar(here4173);
  GLenum type = (GLenum)getint(harg4174);
  here4173 = hcdr(here4173);
  yeah* harg4175 = hcar(here4173);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg4175);
  here4173 = hcdr(here4173);
  A(isnil(here4173));
  glElementPointerAPPLE(type, pointer);
  return Nil;
}
yeah* foop_glFinishObjectAPPLE(yeah* arg4176) {
  yeah* here4177 = arg4176;
  yeah* harg4178 = hcar(here4177);
  GLenum object = (GLenum)getint(harg4178);
  here4177 = hcdr(here4177);
  yeah* harg4179 = hcar(here4177);
  GLuint name = (GLuint)getint(harg4179);
  here4177 = hcdr(here4177);
  A(isnil(here4177));
  glFinishObjectAPPLE(object, name);
  return Nil;
}
yeah* foop_glTestObjectAPPLE(yeah* arg4180) {
  yeah* here4181 = arg4180;
  yeah* harg4182 = hcar(here4181);
  GLenum object = (GLenum)getint(harg4182);
  here4181 = hcdr(here4181);
  yeah* harg4183 = hcar(here4181);
  GLuint name = (GLuint)getint(harg4183);
  here4181 = hcdr(here4181);
  A(isnil(here4181));
  GLboolean ret4184 = glTestObjectAPPLE(object, name);
  return integer((int)ret4184);
}
yeah* foop_glFinishFenceAPPLE(yeah* arg4185) {
  yeah* here4186 = arg4185;
  yeah* harg4187 = hcar(here4186);
  GLuint fence = (GLuint)getint(harg4187);
  here4186 = hcdr(here4186);
  A(isnil(here4186));
  glFinishFenceAPPLE(fence);
  return Nil;
}
yeah* foop_glTestFenceAPPLE(yeah* arg4188) {
  yeah* here4189 = arg4188;
  yeah* harg4190 = hcar(here4189);
  GLuint fence = (GLuint)getint(harg4190);
  here4189 = hcdr(here4189);
  A(isnil(here4189));
  GLboolean ret4191 = glTestFenceAPPLE(fence);
  return integer((int)ret4191);
}
yeah* foop_glIsFenceAPPLE(yeah* arg4192) {
  yeah* here4193 = arg4192;
  yeah* harg4194 = hcar(here4193);
  GLuint fence = (GLuint)getint(harg4194);
  here4193 = hcdr(here4193);
  A(isnil(here4193));
  GLboolean ret4195 = glIsFenceAPPLE(fence);
  return integer((int)ret4195);
}
yeah* foop_glSetFenceAPPLE(yeah* arg4196) {
  yeah* here4197 = arg4196;
  yeah* harg4198 = hcar(here4197);
  GLuint fence = (GLuint)getint(harg4198);
  here4197 = hcdr(here4197);
  A(isnil(here4197));
  glSetFenceAPPLE(fence);
  return Nil;
}
yeah* foop_glDeleteFencesAPPLE(yeah* arg4199) {
  yeah* here4200 = arg4199;
  yeah* harg4201 = hcar(here4200);
  GLsizei n = (GLsizei)getint(harg4201);
  here4200 = hcdr(here4200);
  yeah* harg4202 = hcar(here4200);
  const GLuint* fences = (const GLuint*)opaqueval(harg4202);
  here4200 = hcdr(here4200);
  A(isnil(here4200));
  glDeleteFencesAPPLE(n, fences);
  return Nil;
}
yeah* foop_glGenFencesAPPLE(yeah* arg4203) {
  yeah* here4204 = arg4203;
  yeah* harg4205 = hcar(here4204);
  GLsizei n = (GLsizei)getint(harg4205);
  here4204 = hcdr(here4204);
  yeah* harg4206 = hcar(here4204);
  GLuint* fences = (GLuint*)opaqueval(harg4206);
  here4204 = hcdr(here4204);
  A(isnil(here4204));
  glGenFencesAPPLE(n, fences);
  return Nil;
}
yeah* foop_glIsVertexArrayAPPLE(yeah* arg4207) {
  yeah* here4208 = arg4207;
  yeah* harg4209 = hcar(here4208);
  GLuint id = (GLuint)getint(harg4209);
  here4208 = hcdr(here4208);
  A(isnil(here4208));
  GLboolean ret4210 = glIsVertexArrayAPPLE(id);
  return integer((int)ret4210);
}
yeah* foop_glGenVertexArraysAPPLE(yeah* arg4211) {
  yeah* here4212 = arg4211;
  yeah* harg4213 = hcar(here4212);
  GLsizei n = (GLsizei)getint(harg4213);
  here4212 = hcdr(here4212);
  yeah* harg4214 = hcar(here4212);
  GLuint* ids = (GLuint*)opaqueval(harg4214);
  here4212 = hcdr(here4212);
  A(isnil(here4212));
  glGenVertexArraysAPPLE(n, ids);
  return Nil;
}
yeah* foop_glDeleteVertexArraysAPPLE(yeah* arg4215) {
  yeah* here4216 = arg4215;
  yeah* harg4217 = hcar(here4216);
  GLsizei n = (GLsizei)getint(harg4217);
  here4216 = hcdr(here4216);
  yeah* harg4218 = hcar(here4216);
  const GLuint* ids = (const GLuint*)opaqueval(harg4218);
  here4216 = hcdr(here4216);
  A(isnil(here4216));
  glDeleteVertexArraysAPPLE(n, ids);
  return Nil;
}
yeah* foop_glBindVertexArrayAPPLE(yeah* arg4219) {
  yeah* here4220 = arg4219;
  yeah* harg4221 = hcar(here4220);
  GLuint id = (GLuint)getint(harg4221);
  here4220 = hcdr(here4220);
  A(isnil(here4220));
  glBindVertexArrayAPPLE(id);
  return Nil;
}
yeah* foop_glVertexArrayParameteriAPPLE(yeah* arg4222) {
  yeah* here4223 = arg4222;
  yeah* harg4224 = hcar(here4223);
  GLenum pname = (GLenum)getint(harg4224);
  here4223 = hcdr(here4223);
  yeah* harg4225 = hcar(here4223);
  GLint param = (GLint)getint(harg4225);
  here4223 = hcdr(here4223);
  A(isnil(here4223));
  glVertexArrayParameteriAPPLE(pname, param);
  return Nil;
}
yeah* foop_glFlushVertexArrayRangeAPPLE(yeah* arg4226) {
  yeah* here4227 = arg4226;
  yeah* harg4228 = hcar(here4227);
  GLsizei length = (GLsizei)getint(harg4228);
  here4227 = hcdr(here4227);
  yeah* harg4229 = hcar(here4227);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg4229);
  here4227 = hcdr(here4227);
  A(isnil(here4227));
  glFlushVertexArrayRangeAPPLE(length, pointer);
  return Nil;
}
yeah* foop_glVertexArrayRangeAPPLE(yeah* arg4230) {
  yeah* here4231 = arg4230;
  yeah* harg4232 = hcar(here4231);
  GLsizei length = (GLsizei)getint(harg4232);
  here4231 = hcdr(here4231);
  yeah* harg4233 = hcar(here4231);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg4233);
  here4231 = hcdr(here4231);
  A(isnil(here4231));
  glVertexArrayRangeAPPLE(length, pointer);
  return Nil;
}
yeah* foop_glGetTexParameterPointervAPPLE(yeah* arg4234) {
  yeah* here4235 = arg4234;
  yeah* harg4236 = hcar(here4235);
  GLenum target = (GLenum)getint(harg4236);
  here4235 = hcdr(here4235);
  yeah* harg4237 = hcar(here4235);
  GLenum pname = (GLenum)getint(harg4237);
  here4235 = hcdr(here4235);
  yeah* harg4238 = hcar(here4235);
  GLvoid** params = (GLvoid**)opaqueval(harg4238);
  here4235 = hcdr(here4235);
  A(isnil(here4235));
  glGetTexParameterPointervAPPLE(target, pname, params);
  return Nil;
}
yeah* foop_glTextureRangeAPPLE(yeah* arg4239) {
  yeah* here4240 = arg4239;
  yeah* harg4241 = hcar(here4240);
  GLenum target = (GLenum)getint(harg4241);
  here4240 = hcdr(here4240);
  yeah* harg4242 = hcar(here4240);
  GLsizei length = (GLsizei)getint(harg4242);
  here4240 = hcdr(here4240);
  yeah* harg4243 = hcar(here4240);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg4243);
  here4240 = hcdr(here4240);
  A(isnil(here4240));
  glTextureRangeAPPLE(target, length, pointer);
  return Nil;
}
yeah* foop_glFramebufferRenderbufferEXT(yeah* arg4244) {
  yeah* here4245 = arg4244;
  yeah* harg4246 = hcar(here4245);
  GLenum target = (GLenum)getint(harg4246);
  here4245 = hcdr(here4245);
  yeah* harg4247 = hcar(here4245);
  GLenum attachment = (GLenum)getint(harg4247);
  here4245 = hcdr(here4245);
  yeah* harg4248 = hcar(here4245);
  GLenum renderbuffertarget = (GLenum)getint(harg4248);
  here4245 = hcdr(here4245);
  yeah* harg4249 = hcar(here4245);
  GLuint renderbuffer = (GLuint)getint(harg4249);
  here4245 = hcdr(here4245);
  A(isnil(here4245));
  glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
  return Nil;
}
yeah* foop_glFramebufferTexture2DEXT(yeah* arg4250) {
  yeah* here4251 = arg4250;
  yeah* harg4252 = hcar(here4251);
  GLenum target = (GLenum)getint(harg4252);
  here4251 = hcdr(here4251);
  yeah* harg4253 = hcar(here4251);
  GLenum attachment = (GLenum)getint(harg4253);
  here4251 = hcdr(here4251);
  yeah* harg4254 = hcar(here4251);
  GLenum textarget = (GLenum)getint(harg4254);
  here4251 = hcdr(here4251);
  yeah* harg4255 = hcar(here4251);
  GLuint texture = (GLuint)getint(harg4255);
  here4251 = hcdr(here4251);
  yeah* harg4256 = hcar(here4251);
  GLint level = (GLint)getint(harg4256);
  here4251 = hcdr(here4251);
  A(isnil(here4251));
  glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
  return Nil;
}
yeah* foop_glCheckFramebufferStatusEXT(yeah* arg4257) {
  yeah* here4258 = arg4257;
  yeah* harg4259 = hcar(here4258);
  GLenum target = (GLenum)getint(harg4259);
  here4258 = hcdr(here4258);
  A(isnil(here4258));
  GLenum ret4260 = glCheckFramebufferStatusEXT(target);
  return integer((int)ret4260);
}
yeah* foop_glGenFramebuffersEXT(yeah* arg4261) {
  yeah* here4262 = arg4261;
  yeah* harg4263 = hcar(here4262);
  GLsizei n = (GLsizei)getint(harg4263);
  here4262 = hcdr(here4262);
  yeah* harg4264 = hcar(here4262);
  GLuint* framebuffers = (GLuint*)opaqueval(harg4264);
  here4262 = hcdr(here4262);
  A(isnil(here4262));
  glGenFramebuffersEXT(n, framebuffers);
  return Nil;
}
yeah* foop_glDeleteFramebuffersEXT(yeah* arg4265) {
  yeah* here4266 = arg4265;
  yeah* harg4267 = hcar(here4266);
  GLsizei n = (GLsizei)getint(harg4267);
  here4266 = hcdr(here4266);
  yeah* harg4268 = hcar(here4266);
  const GLuint* framebuffers = (const GLuint*)opaqueval(harg4268);
  here4266 = hcdr(here4266);
  A(isnil(here4266));
  glDeleteFramebuffersEXT(n, framebuffers);
  return Nil;
}
yeah* foop_glBindFramebufferEXT(yeah* arg4269) {
  yeah* here4270 = arg4269;
  yeah* harg4271 = hcar(here4270);
  GLenum target = (GLenum)getint(harg4271);
  here4270 = hcdr(here4270);
  yeah* harg4272 = hcar(here4270);
  GLuint framebuffer = (GLuint)getint(harg4272);
  here4270 = hcdr(here4270);
  A(isnil(here4270));
  glBindFramebufferEXT(target, framebuffer);
  return Nil;
}
yeah* foop_glRenderbufferStorageEXT(yeah* arg4273) {
  yeah* here4274 = arg4273;
  yeah* harg4275 = hcar(here4274);
  GLenum target = (GLenum)getint(harg4275);
  here4274 = hcdr(here4274);
  yeah* harg4276 = hcar(here4274);
  GLenum internalformat = (GLenum)getint(harg4276);
  here4274 = hcdr(here4274);
  yeah* harg4277 = hcar(here4274);
  GLsizei width = (GLsizei)getint(harg4277);
  here4274 = hcdr(here4274);
  yeah* harg4278 = hcar(here4274);
  GLsizei height = (GLsizei)getint(harg4278);
  here4274 = hcdr(here4274);
  A(isnil(here4274));
  glRenderbufferStorageEXT(target, internalformat, width, height);
  return Nil;
}
yeah* foop_glGenRenderbuffersEXT(yeah* arg4279) {
  yeah* here4280 = arg4279;
  yeah* harg4281 = hcar(here4280);
  GLsizei n = (GLsizei)getint(harg4281);
  here4280 = hcdr(here4280);
  yeah* harg4282 = hcar(here4280);
  GLuint* renderbuffers = (GLuint*)opaqueval(harg4282);
  here4280 = hcdr(here4280);
  A(isnil(here4280));
  glGenRenderbuffersEXT(n, renderbuffers);
  return Nil;
}
yeah* foop_glDeleteRenderbuffersEXT(yeah* arg4283) {
  yeah* here4284 = arg4283;
  yeah* harg4285 = hcar(here4284);
  GLsizei n = (GLsizei)getint(harg4285);
  here4284 = hcdr(here4284);
  yeah* harg4286 = hcar(here4284);
  const GLuint* renderbuffers = (const GLuint*)opaqueval(harg4286);
  here4284 = hcdr(here4284);
  A(isnil(here4284));
  glDeleteRenderbuffersEXT(n, renderbuffers);
  return Nil;
}
yeah* foop_glBindRenderbufferEXT(yeah* arg4287) {
  yeah* here4288 = arg4287;
  yeah* harg4289 = hcar(here4288);
  GLenum target = (GLenum)getint(harg4289);
  here4288 = hcdr(here4288);
  yeah* harg4290 = hcar(here4288);
  GLuint renderbuffer = (GLuint)getint(harg4290);
  here4288 = hcdr(here4288);
  A(isnil(here4288));
  glBindRenderbufferEXT(target, renderbuffer);
  return Nil;
}
yeah* foop_glDrawBuffersARB(yeah* arg4291) {
  yeah* here4292 = arg4291;
  yeah* harg4293 = hcar(here4292);
  GLsizei n = (GLsizei)getint(harg4293);
  here4292 = hcdr(here4292);
  yeah* harg4294 = hcar(here4292);
  const GLenum* bufs = (const GLenum*)opaqueval(harg4294);
  here4292 = hcdr(here4292);
  A(isnil(here4292));
  glDrawBuffersARB(n, bufs);
  return Nil;
}
yeah* foop_glGetBufferPointervARB(yeah* arg4295) {
  yeah* here4296 = arg4295;
  yeah* harg4297 = hcar(here4296);
  GLenum target = (GLenum)getint(harg4297);
  here4296 = hcdr(here4296);
  yeah* harg4298 = hcar(here4296);
  GLenum pname = (GLenum)getint(harg4298);
  here4296 = hcdr(here4296);
  yeah* harg4299 = hcar(here4296);
  GLvoid** params = (GLvoid**)opaqueval(harg4299);
  here4296 = hcdr(here4296);
  A(isnil(here4296));
  glGetBufferPointervARB(target, pname, params);
  return Nil;
}
yeah* foop_glGetBufferParameterivARB(yeah* arg4300) {
  yeah* here4301 = arg4300;
  yeah* harg4302 = hcar(here4301);
  GLenum target = (GLenum)getint(harg4302);
  here4301 = hcdr(here4301);
  yeah* harg4303 = hcar(here4301);
  GLenum pname = (GLenum)getint(harg4303);
  here4301 = hcdr(here4301);
  yeah* harg4304 = hcar(here4301);
  GLint* params = (GLint*)opaqueval(harg4304);
  here4301 = hcdr(here4301);
  A(isnil(here4301));
  glGetBufferParameterivARB(target, pname, params);
  return Nil;
}
yeah* foop_glUnmapBufferARB(yeah* arg4305) {
  yeah* here4306 = arg4305;
  yeah* harg4307 = hcar(here4306);
  GLenum target = (GLenum)getint(harg4307);
  here4306 = hcdr(here4306);
  A(isnil(here4306));
  GLboolean ret4308 = glUnmapBufferARB(target);
  return integer((int)ret4308);
}
yeah* foop_glMapBufferARB(yeah* arg4309) {
  yeah* here4310 = arg4309;
  yeah* harg4311 = hcar(here4310);
  GLenum target = (GLenum)getint(harg4311);
  here4310 = hcdr(here4310);
  yeah* harg4312 = hcar(here4310);
  GLenum access = (GLenum)getint(harg4312);
  here4310 = hcdr(here4310);
  A(isnil(here4310));
  GLvoid* ret4313 = glMapBufferARB(target, access);
  return opaque((void*)ret4313);
}
yeah* foop_glGetBufferSubDataARB(yeah* arg4314) {
  yeah* here4315 = arg4314;
  yeah* harg4316 = hcar(here4315);
  GLenum target = (GLenum)getint(harg4316);
  here4315 = hcdr(here4315);
  yeah* harg4317 = hcar(here4315);
  GLintptrARB offset = (GLintptrARB)opaqueval(harg4317);
  here4315 = hcdr(here4315);
  yeah* harg4318 = hcar(here4315);
  GLsizeiptrARB size = (GLsizeiptrARB)opaqueval(harg4318);
  here4315 = hcdr(here4315);
  yeah* harg4319 = hcar(here4315);
  GLvoid* data = (GLvoid*)opaqueval(harg4319);
  here4315 = hcdr(here4315);
  A(isnil(here4315));
  glGetBufferSubDataARB(target, offset, size, data);
  return Nil;
}
yeah* foop_glBufferSubDataARB(yeah* arg4320) {
  yeah* here4321 = arg4320;
  yeah* harg4322 = hcar(here4321);
  GLenum target = (GLenum)getint(harg4322);
  here4321 = hcdr(here4321);
  yeah* harg4323 = hcar(here4321);
  GLintptrARB offset = (GLintptrARB)opaqueval(harg4323);
  here4321 = hcdr(here4321);
  yeah* harg4324 = hcar(here4321);
  GLsizeiptrARB size = (GLsizeiptrARB)opaqueval(harg4324);
  here4321 = hcdr(here4321);
  yeah* harg4325 = hcar(here4321);
  const GLvoid* data = (const GLvoid*)opaqueval(harg4325);
  here4321 = hcdr(here4321);
  A(isnil(here4321));
  glBufferSubDataARB(target, offset, size, data);
  return Nil;
}
yeah* foop_glBufferDataARB(yeah* arg4326) {
  yeah* here4327 = arg4326;
  yeah* harg4328 = hcar(here4327);
  GLenum target = (GLenum)getint(harg4328);
  here4327 = hcdr(here4327);
  yeah* harg4329 = hcar(here4327);
  GLsizeiptrARB size = (GLsizeiptrARB)opaqueval(harg4329);
  here4327 = hcdr(here4327);
  yeah* harg4330 = hcar(here4327);
  const GLvoid* data = (const GLvoid*)opaqueval(harg4330);
  here4327 = hcdr(here4327);
  yeah* harg4331 = hcar(here4327);
  GLenum usage = (GLenum)getint(harg4331);
  here4327 = hcdr(here4327);
  A(isnil(here4327));
  glBufferDataARB(target, size, data, usage);
  return Nil;
}
yeah* foop_glIsBufferARB(yeah* arg4332) {
  yeah* here4333 = arg4332;
  yeah* harg4334 = hcar(here4333);
  GLuint buffer = (GLuint)getint(harg4334);
  here4333 = hcdr(here4333);
  A(isnil(here4333));
  GLboolean ret4335 = glIsBufferARB(buffer);
  return integer((int)ret4335);
}
yeah* foop_glGenBuffersARB(yeah* arg4336) {
  yeah* here4337 = arg4336;
  yeah* harg4338 = hcar(here4337);
  GLsizei n = (GLsizei)getint(harg4338);
  here4337 = hcdr(here4337);
  yeah* harg4339 = hcar(here4337);
  GLuint* buffers = (GLuint*)opaqueval(harg4339);
  here4337 = hcdr(here4337);
  A(isnil(here4337));
  glGenBuffersARB(n, buffers);
  return Nil;
}
yeah* foop_glDeleteBuffersARB(yeah* arg4340) {
  yeah* here4341 = arg4340;
  yeah* harg4342 = hcar(here4341);
  GLsizei n = (GLsizei)getint(harg4342);
  here4341 = hcdr(here4341);
  yeah* harg4343 = hcar(here4341);
  const GLuint* buffers = (const GLuint*)opaqueval(harg4343);
  here4341 = hcdr(here4341);
  A(isnil(here4341));
  glDeleteBuffersARB(n, buffers);
  return Nil;
}
yeah* foop_glBindBufferARB(yeah* arg4344) {
  yeah* here4345 = arg4344;
  yeah* harg4346 = hcar(here4345);
  GLenum target = (GLenum)getint(harg4346);
  here4345 = hcdr(here4345);
  yeah* harg4347 = hcar(here4345);
  GLuint buffer = (GLuint)getint(harg4347);
  here4345 = hcdr(here4345);
  A(isnil(here4345));
  glBindBufferARB(target, buffer);
  return Nil;
}
yeah* foop_glGetAttribLocationARB(yeah* arg4348) {
  yeah* here4349 = arg4348;
  yeah* harg4350 = hcar(here4349);
  void* programObj = (void*)opaqueval(harg4350);
  here4349 = hcdr(here4349);
  yeah* harg4351 = hcar(here4349);
  const GLcharARB* name = (const GLcharARB*)opaqueval(harg4351);
  here4349 = hcdr(here4349);
  A(isnil(here4349));
  GLint ret4352 = glGetAttribLocationARB(programObj, name);
  return integer((int)ret4352);
}
yeah* foop_glGetActiveAttribARB(yeah* arg4353) {
  yeah* here4354 = arg4353;
  yeah* harg4355 = hcar(here4354);
  void* programObj = (void*)opaqueval(harg4355);
  here4354 = hcdr(here4354);
  yeah* harg4356 = hcar(here4354);
  GLuint index = (GLuint)getint(harg4356);
  here4354 = hcdr(here4354);
  yeah* harg4357 = hcar(here4354);
  GLsizei maxLength = (GLsizei)getint(harg4357);
  here4354 = hcdr(here4354);
  yeah* harg4358 = hcar(here4354);
  GLsizei* length = (GLsizei*)opaqueval(harg4358);
  here4354 = hcdr(here4354);
  yeah* harg4359 = hcar(here4354);
  GLint* size = (GLint*)opaqueval(harg4359);
  here4354 = hcdr(here4354);
  yeah* harg4360 = hcar(here4354);
  GLenum* type = (GLenum*)opaqueval(harg4360);
  here4354 = hcdr(here4354);
  yeah* harg4361 = hcar(here4354);
  GLcharARB* name = (GLcharARB*)opaqueval(harg4361);
  here4354 = hcdr(here4354);
  A(isnil(here4354));
  glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
  return Nil;
}
yeah* foop_glBindAttribLocationARB(yeah* arg4362) {
  yeah* here4363 = arg4362;
  yeah* harg4364 = hcar(here4363);
  void* programObj = (void*)opaqueval(harg4364);
  here4363 = hcdr(here4363);
  yeah* harg4365 = hcar(here4363);
  GLuint index = (GLuint)getint(harg4365);
  here4363 = hcdr(here4363);
  yeah* harg4366 = hcar(here4363);
  const GLcharARB* name = (const GLcharARB*)opaqueval(harg4366);
  here4363 = hcdr(here4363);
  A(isnil(here4363));
  glBindAttribLocationARB(programObj, index, name);
  return Nil;
}
yeah* foop_glGetShaderSourceARB(yeah* arg4367) {
  yeah* here4368 = arg4367;
  yeah* harg4369 = hcar(here4368);
  void* obj = (void*)opaqueval(harg4369);
  here4368 = hcdr(here4368);
  yeah* harg4370 = hcar(here4368);
  GLsizei maxLength = (GLsizei)getint(harg4370);
  here4368 = hcdr(here4368);
  yeah* harg4371 = hcar(here4368);
  GLsizei* length = (GLsizei*)opaqueval(harg4371);
  here4368 = hcdr(here4368);
  yeah* harg4372 = hcar(here4368);
  GLcharARB* source = (GLcharARB*)opaqueval(harg4372);
  here4368 = hcdr(here4368);
  A(isnil(here4368));
  glGetShaderSourceARB(obj, maxLength, length, source);
  return Nil;
}
yeah* foop_glGetUniformivARB(yeah* arg4373) {
  yeah* here4374 = arg4373;
  yeah* harg4375 = hcar(here4374);
  void* programObj = (void*)opaqueval(harg4375);
  here4374 = hcdr(here4374);
  yeah* harg4376 = hcar(here4374);
  GLint location = (GLint)getint(harg4376);
  here4374 = hcdr(here4374);
  yeah* harg4377 = hcar(here4374);
  GLint* params = (GLint*)opaqueval(harg4377);
  here4374 = hcdr(here4374);
  A(isnil(here4374));
  glGetUniformivARB(programObj, location, params);
  return Nil;
}
yeah* foop_glGetUniformfvARB(yeah* arg4378) {
  yeah* here4379 = arg4378;
  yeah* harg4380 = hcar(here4379);
  void* programObj = (void*)opaqueval(harg4380);
  here4379 = hcdr(here4379);
  yeah* harg4381 = hcar(here4379);
  GLint location = (GLint)getint(harg4381);
  here4379 = hcdr(here4379);
  yeah* harg4382 = hcar(here4379);
  GLfloat* params = (GLfloat*)opaqueval(harg4382);
  here4379 = hcdr(here4379);
  A(isnil(here4379));
  glGetUniformfvARB(programObj, location, params);
  return Nil;
}
yeah* foop_glGetActiveUniformARB(yeah* arg4383) {
  yeah* here4384 = arg4383;
  yeah* harg4385 = hcar(here4384);
  void* programObj = (void*)opaqueval(harg4385);
  here4384 = hcdr(here4384);
  yeah* harg4386 = hcar(here4384);
  GLuint index = (GLuint)getint(harg4386);
  here4384 = hcdr(here4384);
  yeah* harg4387 = hcar(here4384);
  GLsizei maxLength = (GLsizei)getint(harg4387);
  here4384 = hcdr(here4384);
  yeah* harg4388 = hcar(here4384);
  GLsizei* length = (GLsizei*)opaqueval(harg4388);
  here4384 = hcdr(here4384);
  yeah* harg4389 = hcar(here4384);
  GLint* size = (GLint*)opaqueval(harg4389);
  here4384 = hcdr(here4384);
  yeah* harg4390 = hcar(here4384);
  GLenum* type = (GLenum*)opaqueval(harg4390);
  here4384 = hcdr(here4384);
  yeah* harg4391 = hcar(here4384);
  GLcharARB* name = (GLcharARB*)opaqueval(harg4391);
  here4384 = hcdr(here4384);
  A(isnil(here4384));
  glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
  return Nil;
}
yeah* foop_glGetUniformLocationARB(yeah* arg4392) {
  yeah* here4393 = arg4392;
  yeah* harg4394 = hcar(here4393);
  void* programObj = (void*)opaqueval(harg4394);
  here4393 = hcdr(here4393);
  yeah* harg4395 = hcar(here4393);
  const GLcharARB* name = (const GLcharARB*)opaqueval(harg4395);
  here4393 = hcdr(here4393);
  A(isnil(here4393));
  GLint ret4396 = glGetUniformLocationARB(programObj, name);
  return integer((int)ret4396);
}
yeah* foop_glGetAttachedObjectsARB(yeah* arg4397) {
  yeah* here4398 = arg4397;
  yeah* harg4399 = hcar(here4398);
  void* containerObj = (void*)opaqueval(harg4399);
  here4398 = hcdr(here4398);
  yeah* harg4400 = hcar(here4398);
  GLsizei maxCount = (GLsizei)getint(harg4400);
  here4398 = hcdr(here4398);
  yeah* harg4401 = hcar(here4398);
  GLsizei* count = (GLsizei*)opaqueval(harg4401);
  here4398 = hcdr(here4398);
  yeah* harg4402 = hcar(here4398);
  void** obj = (void**)opaqueval(harg4402);
  here4398 = hcdr(here4398);
  A(isnil(here4398));
  glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
  return Nil;
}
yeah* foop_glGetInfoLogARB(yeah* arg4403) {
  yeah* here4404 = arg4403;
  yeah* harg4405 = hcar(here4404);
  void* obj = (void*)opaqueval(harg4405);
  here4404 = hcdr(here4404);
  yeah* harg4406 = hcar(here4404);
  GLsizei maxLength = (GLsizei)getint(harg4406);
  here4404 = hcdr(here4404);
  yeah* harg4407 = hcar(here4404);
  GLsizei* length = (GLsizei*)opaqueval(harg4407);
  here4404 = hcdr(here4404);
  yeah* harg4408 = hcar(here4404);
  GLcharARB* infoLog = (GLcharARB*)opaqueval(harg4408);
  here4404 = hcdr(here4404);
  A(isnil(here4404));
  glGetInfoLogARB(obj, maxLength, length, infoLog);
  return Nil;
}
yeah* foop_glGetObjectParameterivARB(yeah* arg4409) {
  yeah* here4410 = arg4409;
  yeah* harg4411 = hcar(here4410);
  void* obj = (void*)opaqueval(harg4411);
  here4410 = hcdr(here4410);
  yeah* harg4412 = hcar(here4410);
  GLenum pname = (GLenum)getint(harg4412);
  here4410 = hcdr(here4410);
  yeah* harg4413 = hcar(here4410);
  GLint* params = (GLint*)opaqueval(harg4413);
  here4410 = hcdr(here4410);
  A(isnil(here4410));
  glGetObjectParameterivARB(obj, pname, params);
  return Nil;
}
yeah* foop_glGetObjectParameterfvARB(yeah* arg4414) {
  yeah* here4415 = arg4414;
  yeah* harg4416 = hcar(here4415);
  void* obj = (void*)opaqueval(harg4416);
  here4415 = hcdr(here4415);
  yeah* harg4417 = hcar(here4415);
  GLenum pname = (GLenum)getint(harg4417);
  here4415 = hcdr(here4415);
  yeah* harg4418 = hcar(here4415);
  GLfloat* params = (GLfloat*)opaqueval(harg4418);
  here4415 = hcdr(here4415);
  A(isnil(here4415));
  glGetObjectParameterfvARB(obj, pname, params);
  return Nil;
}
yeah* foop_glUniformMatrix4fvARB(yeah* arg4419) {
  yeah* here4420 = arg4419;
  yeah* harg4421 = hcar(here4420);
  GLint location = (GLint)getint(harg4421);
  here4420 = hcdr(here4420);
  yeah* harg4422 = hcar(here4420);
  GLsizei count = (GLsizei)getint(harg4422);
  here4420 = hcdr(here4420);
  yeah* harg4423 = hcar(here4420);
  int transpose = (int)getint(harg4423);
  here4420 = hcdr(here4420);
  yeah* harg4424 = hcar(here4420);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4424);
  here4420 = hcdr(here4420);
  A(isnil(here4420));
  glUniformMatrix4fvARB(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix3fvARB(yeah* arg4425) {
  yeah* here4426 = arg4425;
  yeah* harg4427 = hcar(here4426);
  GLint location = (GLint)getint(harg4427);
  here4426 = hcdr(here4426);
  yeah* harg4428 = hcar(here4426);
  GLsizei count = (GLsizei)getint(harg4428);
  here4426 = hcdr(here4426);
  yeah* harg4429 = hcar(here4426);
  int transpose = (int)getint(harg4429);
  here4426 = hcdr(here4426);
  yeah* harg4430 = hcar(here4426);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4430);
  here4426 = hcdr(here4426);
  A(isnil(here4426));
  glUniformMatrix3fvARB(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniformMatrix2fvARB(yeah* arg4431) {
  yeah* here4432 = arg4431;
  yeah* harg4433 = hcar(here4432);
  GLint location = (GLint)getint(harg4433);
  here4432 = hcdr(here4432);
  yeah* harg4434 = hcar(here4432);
  GLsizei count = (GLsizei)getint(harg4434);
  here4432 = hcdr(here4432);
  yeah* harg4435 = hcar(here4432);
  int transpose = (int)getint(harg4435);
  here4432 = hcdr(here4432);
  yeah* harg4436 = hcar(here4432);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4436);
  here4432 = hcdr(here4432);
  A(isnil(here4432));
  glUniformMatrix2fvARB(location, count, transpose, value);
  return Nil;
}
yeah* foop_glUniform4ivARB(yeah* arg4437) {
  yeah* here4438 = arg4437;
  yeah* harg4439 = hcar(here4438);
  GLint location = (GLint)getint(harg4439);
  here4438 = hcdr(here4438);
  yeah* harg4440 = hcar(here4438);
  GLsizei count = (GLsizei)getint(harg4440);
  here4438 = hcdr(here4438);
  yeah* harg4441 = hcar(here4438);
  const GLint* value = (const GLint*)opaqueval(harg4441);
  here4438 = hcdr(here4438);
  A(isnil(here4438));
  glUniform4ivARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform3ivARB(yeah* arg4442) {
  yeah* here4443 = arg4442;
  yeah* harg4444 = hcar(here4443);
  GLint location = (GLint)getint(harg4444);
  here4443 = hcdr(here4443);
  yeah* harg4445 = hcar(here4443);
  GLsizei count = (GLsizei)getint(harg4445);
  here4443 = hcdr(here4443);
  yeah* harg4446 = hcar(here4443);
  const GLint* value = (const GLint*)opaqueval(harg4446);
  here4443 = hcdr(here4443);
  A(isnil(here4443));
  glUniform3ivARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform2ivARB(yeah* arg4447) {
  yeah* here4448 = arg4447;
  yeah* harg4449 = hcar(here4448);
  GLint location = (GLint)getint(harg4449);
  here4448 = hcdr(here4448);
  yeah* harg4450 = hcar(here4448);
  GLsizei count = (GLsizei)getint(harg4450);
  here4448 = hcdr(here4448);
  yeah* harg4451 = hcar(here4448);
  const GLint* value = (const GLint*)opaqueval(harg4451);
  here4448 = hcdr(here4448);
  A(isnil(here4448));
  glUniform2ivARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform1ivARB(yeah* arg4452) {
  yeah* here4453 = arg4452;
  yeah* harg4454 = hcar(here4453);
  GLint location = (GLint)getint(harg4454);
  here4453 = hcdr(here4453);
  yeah* harg4455 = hcar(here4453);
  GLsizei count = (GLsizei)getint(harg4455);
  here4453 = hcdr(here4453);
  yeah* harg4456 = hcar(here4453);
  const GLint* value = (const GLint*)opaqueval(harg4456);
  here4453 = hcdr(here4453);
  A(isnil(here4453));
  glUniform1ivARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform4fvARB(yeah* arg4457) {
  yeah* here4458 = arg4457;
  yeah* harg4459 = hcar(here4458);
  GLint location = (GLint)getint(harg4459);
  here4458 = hcdr(here4458);
  yeah* harg4460 = hcar(here4458);
  GLsizei count = (GLsizei)getint(harg4460);
  here4458 = hcdr(here4458);
  yeah* harg4461 = hcar(here4458);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4461);
  here4458 = hcdr(here4458);
  A(isnil(here4458));
  glUniform4fvARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform3fvARB(yeah* arg4462) {
  yeah* here4463 = arg4462;
  yeah* harg4464 = hcar(here4463);
  GLint location = (GLint)getint(harg4464);
  here4463 = hcdr(here4463);
  yeah* harg4465 = hcar(here4463);
  GLsizei count = (GLsizei)getint(harg4465);
  here4463 = hcdr(here4463);
  yeah* harg4466 = hcar(here4463);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4466);
  here4463 = hcdr(here4463);
  A(isnil(here4463));
  glUniform3fvARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform2fvARB(yeah* arg4467) {
  yeah* here4468 = arg4467;
  yeah* harg4469 = hcar(here4468);
  GLint location = (GLint)getint(harg4469);
  here4468 = hcdr(here4468);
  yeah* harg4470 = hcar(here4468);
  GLsizei count = (GLsizei)getint(harg4470);
  here4468 = hcdr(here4468);
  yeah* harg4471 = hcar(here4468);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4471);
  here4468 = hcdr(here4468);
  A(isnil(here4468));
  glUniform2fvARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform1fvARB(yeah* arg4472) {
  yeah* here4473 = arg4472;
  yeah* harg4474 = hcar(here4473);
  GLint location = (GLint)getint(harg4474);
  here4473 = hcdr(here4473);
  yeah* harg4475 = hcar(here4473);
  GLsizei count = (GLsizei)getint(harg4475);
  here4473 = hcdr(here4473);
  yeah* harg4476 = hcar(here4473);
  const GLfloat* value = (const GLfloat*)opaqueval(harg4476);
  here4473 = hcdr(here4473);
  A(isnil(here4473));
  glUniform1fvARB(location, count, value);
  return Nil;
}
yeah* foop_glUniform4iARB(yeah* arg4477) {
  yeah* here4478 = arg4477;
  yeah* harg4479 = hcar(here4478);
  GLint location = (GLint)getint(harg4479);
  here4478 = hcdr(here4478);
  yeah* harg4480 = hcar(here4478);
  GLint v0 = (GLint)getint(harg4480);
  here4478 = hcdr(here4478);
  yeah* harg4481 = hcar(here4478);
  GLint v1 = (GLint)getint(harg4481);
  here4478 = hcdr(here4478);
  yeah* harg4482 = hcar(here4478);
  GLint v2 = (GLint)getint(harg4482);
  here4478 = hcdr(here4478);
  yeah* harg4483 = hcar(here4478);
  GLint v3 = (GLint)getint(harg4483);
  here4478 = hcdr(here4478);
  A(isnil(here4478));
  glUniform4iARB(location, v0, v1, v2, v3);
  return Nil;
}
yeah* foop_glUniform3iARB(yeah* arg4484) {
  yeah* here4485 = arg4484;
  yeah* harg4486 = hcar(here4485);
  GLint location = (GLint)getint(harg4486);
  here4485 = hcdr(here4485);
  yeah* harg4487 = hcar(here4485);
  GLint v0 = (GLint)getint(harg4487);
  here4485 = hcdr(here4485);
  yeah* harg4488 = hcar(here4485);
  GLint v1 = (GLint)getint(harg4488);
  here4485 = hcdr(here4485);
  yeah* harg4489 = hcar(here4485);
  GLint v2 = (GLint)getint(harg4489);
  here4485 = hcdr(here4485);
  A(isnil(here4485));
  glUniform3iARB(location, v0, v1, v2);
  return Nil;
}
yeah* foop_glUniform2iARB(yeah* arg4490) {
  yeah* here4491 = arg4490;
  yeah* harg4492 = hcar(here4491);
  GLint location = (GLint)getint(harg4492);
  here4491 = hcdr(here4491);
  yeah* harg4493 = hcar(here4491);
  GLint v0 = (GLint)getint(harg4493);
  here4491 = hcdr(here4491);
  yeah* harg4494 = hcar(here4491);
  GLint v1 = (GLint)getint(harg4494);
  here4491 = hcdr(here4491);
  A(isnil(here4491));
  glUniform2iARB(location, v0, v1);
  return Nil;
}
yeah* foop_glUniform1iARB(yeah* arg4495) {
  yeah* here4496 = arg4495;
  yeah* harg4497 = hcar(here4496);
  GLint location = (GLint)getint(harg4497);
  here4496 = hcdr(here4496);
  yeah* harg4498 = hcar(here4496);
  GLint v0 = (GLint)getint(harg4498);
  here4496 = hcdr(here4496);
  A(isnil(here4496));
  glUniform1iARB(location, v0);
  return Nil;
}
yeah* foop_glUniform4fARB(yeah* arg4499) {
  yeah* here4500 = arg4499;
  yeah* harg4501 = hcar(here4500);
  GLint location = (GLint)getint(harg4501);
  here4500 = hcdr(here4500);
  yeah* harg4502 = hcar(here4500);
  GLfloat v0 = (GLfloat)getfloatcvt(harg4502);
  here4500 = hcdr(here4500);
  yeah* harg4503 = hcar(here4500);
  GLfloat v1 = (GLfloat)getfloatcvt(harg4503);
  here4500 = hcdr(here4500);
  yeah* harg4504 = hcar(here4500);
  GLfloat v2 = (GLfloat)getfloatcvt(harg4504);
  here4500 = hcdr(here4500);
  yeah* harg4505 = hcar(here4500);
  GLfloat v3 = (GLfloat)getfloatcvt(harg4505);
  here4500 = hcdr(here4500);
  A(isnil(here4500));
  glUniform4fARB(location, v0, v1, v2, v3);
  return Nil;
}
yeah* foop_glUniform3fARB(yeah* arg4506) {
  yeah* here4507 = arg4506;
  yeah* harg4508 = hcar(here4507);
  GLint location = (GLint)getint(harg4508);
  here4507 = hcdr(here4507);
  yeah* harg4509 = hcar(here4507);
  GLfloat v0 = (GLfloat)getfloatcvt(harg4509);
  here4507 = hcdr(here4507);
  yeah* harg4510 = hcar(here4507);
  GLfloat v1 = (GLfloat)getfloatcvt(harg4510);
  here4507 = hcdr(here4507);
  yeah* harg4511 = hcar(here4507);
  GLfloat v2 = (GLfloat)getfloatcvt(harg4511);
  here4507 = hcdr(here4507);
  A(isnil(here4507));
  glUniform3fARB(location, v0, v1, v2);
  return Nil;
}
yeah* foop_glUniform2fARB(yeah* arg4512) {
  yeah* here4513 = arg4512;
  yeah* harg4514 = hcar(here4513);
  GLint location = (GLint)getint(harg4514);
  here4513 = hcdr(here4513);
  yeah* harg4515 = hcar(here4513);
  GLfloat v0 = (GLfloat)getfloatcvt(harg4515);
  here4513 = hcdr(here4513);
  yeah* harg4516 = hcar(here4513);
  GLfloat v1 = (GLfloat)getfloatcvt(harg4516);
  here4513 = hcdr(here4513);
  A(isnil(here4513));
  glUniform2fARB(location, v0, v1);
  return Nil;
}
yeah* foop_glUniform1fARB(yeah* arg4517) {
  yeah* here4518 = arg4517;
  yeah* harg4519 = hcar(here4518);
  GLint location = (GLint)getint(harg4519);
  here4518 = hcdr(here4518);
  yeah* harg4520 = hcar(here4518);
  GLfloat v0 = (GLfloat)getfloatcvt(harg4520);
  here4518 = hcdr(here4518);
  A(isnil(here4518));
  glUniform1fARB(location, v0);
  return Nil;
}
yeah* foop_glValidateProgramARB(yeah* arg4521) {
  yeah* here4522 = arg4521;
  yeah* harg4523 = hcar(here4522);
  void* programObj = (void*)opaqueval(harg4523);
  here4522 = hcdr(here4522);
  A(isnil(here4522));
  glValidateProgramARB(programObj);
  return Nil;
}
yeah* foop_glUseProgramObjectARB(yeah* arg4524) {
  yeah* here4525 = arg4524;
  yeah* harg4526 = hcar(here4525);
  void* programObj = (void*)opaqueval(harg4526);
  here4525 = hcdr(here4525);
  A(isnil(here4525));
  glUseProgramObjectARB(programObj);
  return Nil;
}
yeah* foop_glLinkProgramARB(yeah* arg4527) {
  yeah* here4528 = arg4527;
  yeah* harg4529 = hcar(here4528);
  void* programObj = (void*)opaqueval(harg4529);
  here4528 = hcdr(here4528);
  A(isnil(here4528));
  glLinkProgramARB(programObj);
  return Nil;
}
yeah* foop_glAttachObjectARB(yeah* arg4530) {
  yeah* here4531 = arg4530;
  yeah* harg4532 = hcar(here4531);
  void* containerObj = (void*)opaqueval(harg4532);
  here4531 = hcdr(here4531);
  yeah* harg4533 = hcar(here4531);
  void* obj = (void*)opaqueval(harg4533);
  here4531 = hcdr(here4531);
  A(isnil(here4531));
  glAttachObjectARB(containerObj, obj);
  return Nil;
}
yeah* foop_glCreateProgramObjectARB(yeah* arg4534) {
  yeah* here4535 = arg4534;
  A(isnil(here4535));
  void* ret4536 = glCreateProgramObjectARB();
  return opaque((void*)ret4536);
}
yeah* foop_glCompileShaderARB(yeah* arg4537) {
  yeah* here4538 = arg4537;
  yeah* harg4539 = hcar(here4538);
  void* shaderObj = (void*)opaqueval(harg4539);
  here4538 = hcdr(here4538);
  A(isnil(here4538));
  glCompileShaderARB(shaderObj);
  return Nil;
}
yeah* foop_glShaderSourceARB(yeah* arg4540) {
  yeah* here4541 = arg4540;
  yeah* harg4542 = hcar(here4541);
  void* shaderObj = (void*)opaqueval(harg4542);
  here4541 = hcdr(here4541);
  yeah* harg4543 = hcar(here4541);
  GLsizei count = (GLsizei)getint(harg4543);
  here4541 = hcdr(here4541);
  yeah* harg4544 = hcar(here4541);
  const GLcharARB** string = (const GLcharARB**)opaqueval(harg4544);
  here4541 = hcdr(here4541);
  yeah* harg4545 = hcar(here4541);
  const GLint* length = (const GLint*)opaqueval(harg4545);
  here4541 = hcdr(here4541);
  A(isnil(here4541));
  glShaderSourceARB(shaderObj, count, string, length);
  return Nil;
}
yeah* foop_glCreateShaderObjectARB(yeah* arg4546) {
  yeah* here4547 = arg4546;
  yeah* harg4548 = hcar(here4547);
  GLenum shaderType = (GLenum)getint(harg4548);
  here4547 = hcdr(here4547);
  A(isnil(here4547));
  void* ret4549 = glCreateShaderObjectARB(shaderType);
  return opaque((void*)ret4549);
}
yeah* foop_glDetachObjectARB(yeah* arg4550) {
  yeah* here4551 = arg4550;
  yeah* harg4552 = hcar(here4551);
  void* containerObj = (void*)opaqueval(harg4552);
  here4551 = hcdr(here4551);
  yeah* harg4553 = hcar(here4551);
  void* attachedObj = (void*)opaqueval(harg4553);
  here4551 = hcdr(here4551);
  A(isnil(here4551));
  glDetachObjectARB(containerObj, attachedObj);
  return Nil;
}
yeah* foop_glGetHandleARB(yeah* arg4554) {
  yeah* here4555 = arg4554;
  yeah* harg4556 = hcar(here4555);
  GLenum pname = (GLenum)getint(harg4556);
  here4555 = hcdr(here4555);
  A(isnil(here4555));
  void* ret4557 = glGetHandleARB(pname);
  return opaque((void*)ret4557);
}
yeah* foop_glDeleteObjectARB(yeah* arg4558) {
  yeah* here4559 = arg4558;
  yeah* harg4560 = hcar(here4559);
  void* obj = (void*)opaqueval(harg4560);
  here4559 = hcdr(here4559);
  A(isnil(here4559));
  glDeleteObjectARB(obj);
  return Nil;
}
yeah* foop_glGetVertexAttribivARB(yeah* arg4561) {
  yeah* here4562 = arg4561;
  yeah* harg4563 = hcar(here4562);
  GLuint index = (GLuint)getint(harg4563);
  here4562 = hcdr(here4562);
  yeah* harg4564 = hcar(here4562);
  GLenum pname = (GLenum)getint(harg4564);
  here4562 = hcdr(here4562);
  yeah* harg4565 = hcar(here4562);
  GLint* params = (GLint*)opaqueval(harg4565);
  here4562 = hcdr(here4562);
  A(isnil(here4562));
  glGetVertexAttribivARB(index, pname, params);
  return Nil;
}
yeah* foop_glGetVertexAttribfvARB(yeah* arg4566) {
  yeah* here4567 = arg4566;
  yeah* harg4568 = hcar(here4567);
  GLuint index = (GLuint)getint(harg4568);
  here4567 = hcdr(here4567);
  yeah* harg4569 = hcar(here4567);
  GLenum pname = (GLenum)getint(harg4569);
  here4567 = hcdr(here4567);
  yeah* harg4570 = hcar(here4567);
  GLfloat* params = (GLfloat*)opaqueval(harg4570);
  here4567 = hcdr(here4567);
  A(isnil(here4567));
  glGetVertexAttribfvARB(index, pname, params);
  return Nil;
}
yeah* foop_glGetVertexAttribdvARB(yeah* arg4571) {
  yeah* here4572 = arg4571;
  yeah* harg4573 = hcar(here4572);
  GLuint index = (GLuint)getint(harg4573);
  here4572 = hcdr(here4572);
  yeah* harg4574 = hcar(here4572);
  GLenum pname = (GLenum)getint(harg4574);
  here4572 = hcdr(here4572);
  yeah* harg4575 = hcar(here4572);
  GLdouble* params = (GLdouble*)opaqueval(harg4575);
  here4572 = hcdr(here4572);
  A(isnil(here4572));
  glGetVertexAttribdvARB(index, pname, params);
  return Nil;
}
yeah* foop_glGetVertexAttribPointervARB(yeah* arg4576) {
  yeah* here4577 = arg4576;
  yeah* harg4578 = hcar(here4577);
  GLuint index = (GLuint)getint(harg4578);
  here4577 = hcdr(here4577);
  yeah* harg4579 = hcar(here4577);
  GLenum pname = (GLenum)getint(harg4579);
  here4577 = hcdr(here4577);
  yeah* harg4580 = hcar(here4577);
  GLvoid** pointer = (GLvoid**)opaqueval(harg4580);
  here4577 = hcdr(here4577);
  A(isnil(here4577));
  glGetVertexAttribPointervARB(index, pname, pointer);
  return Nil;
}
yeah* foop_glEnableVertexAttribArrayARB(yeah* arg4581) {
  yeah* here4582 = arg4581;
  yeah* harg4583 = hcar(here4582);
  GLuint index = (GLuint)getint(harg4583);
  here4582 = hcdr(here4582);
  A(isnil(here4582));
  glEnableVertexAttribArrayARB(index);
  return Nil;
}
yeah* foop_glDisableVertexAttribArrayARB(yeah* arg4584) {
  yeah* here4585 = arg4584;
  yeah* harg4586 = hcar(here4585);
  GLuint index = (GLuint)getint(harg4586);
  here4585 = hcdr(here4585);
  A(isnil(here4585));
  glDisableVertexAttribArrayARB(index);
  return Nil;
}
yeah* foop_glVertexAttribPointerARB(yeah* arg4587) {
  yeah* here4588 = arg4587;
  yeah* harg4589 = hcar(here4588);
  GLuint index = (GLuint)getint(harg4589);
  here4588 = hcdr(here4588);
  yeah* harg4590 = hcar(here4588);
  GLint size = (GLint)getint(harg4590);
  here4588 = hcdr(here4588);
  yeah* harg4591 = hcar(here4588);
  GLenum type = (GLenum)getint(harg4591);
  here4588 = hcdr(here4588);
  yeah* harg4592 = hcar(here4588);
  int normalized = (int)getint(harg4592);
  here4588 = hcdr(here4588);
  yeah* harg4593 = hcar(here4588);
  GLsizei stride = (GLsizei)getint(harg4593);
  here4588 = hcdr(here4588);
  yeah* harg4594 = hcar(here4588);
  const GLvoid* pointer = (const GLvoid*)opaqueval(harg4594);
  here4588 = hcdr(here4588);
  A(isnil(here4588));
  glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
  return Nil;
}
yeah* foop_glVertexAttrib4usvARB(yeah* arg4595) {
  yeah* here4596 = arg4595;
  yeah* harg4597 = hcar(here4596);
  GLuint index = (GLuint)getint(harg4597);
  here4596 = hcdr(here4596);
  yeah* harg4598 = hcar(here4596);
  const GLushort* v = (const GLushort*)opaqueval(harg4598);
  here4596 = hcdr(here4596);
  A(isnil(here4596));
  glVertexAttrib4usvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4uivARB(yeah* arg4599) {
  yeah* here4600 = arg4599;
  yeah* harg4601 = hcar(here4600);
  GLuint index = (GLuint)getint(harg4601);
  here4600 = hcdr(here4600);
  yeah* harg4602 = hcar(here4600);
  const GLuint* v = (const GLuint*)opaqueval(harg4602);
  here4600 = hcdr(here4600);
  A(isnil(here4600));
  glVertexAttrib4uivARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4ubvARB(yeah* arg4603) {
  yeah* here4604 = arg4603;
  yeah* harg4605 = hcar(here4604);
  GLuint index = (GLuint)getint(harg4605);
  here4604 = hcdr(here4604);
  yeah* harg4606 = hcar(here4604);
  const GLubyte* v = (const GLubyte*)opaqueval(harg4606);
  here4604 = hcdr(here4604);
  A(isnil(here4604));
  glVertexAttrib4ubvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4svARB(yeah* arg4607) {
  yeah* here4608 = arg4607;
  yeah* harg4609 = hcar(here4608);
  GLuint index = (GLuint)getint(harg4609);
  here4608 = hcdr(here4608);
  yeah* harg4610 = hcar(here4608);
  const GLshort* v = (const GLshort*)opaqueval(harg4610);
  here4608 = hcdr(here4608);
  A(isnil(here4608));
  glVertexAttrib4svARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4sARB(yeah* arg4611) {
  yeah* here4612 = arg4611;
  yeah* harg4613 = hcar(here4612);
  GLuint index = (GLuint)getint(harg4613);
  here4612 = hcdr(here4612);
  yeah* harg4614 = hcar(here4612);
  int x = (int)getint(harg4614);
  here4612 = hcdr(here4612);
  yeah* harg4615 = hcar(here4612);
  int y = (int)getint(harg4615);
  here4612 = hcdr(here4612);
  yeah* harg4616 = hcar(here4612);
  int z = (int)getint(harg4616);
  here4612 = hcdr(here4612);
  yeah* harg4617 = hcar(here4612);
  int w = (int)getint(harg4617);
  here4612 = hcdr(here4612);
  A(isnil(here4612));
  glVertexAttrib4sARB(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4ivARB(yeah* arg4618) {
  yeah* here4619 = arg4618;
  yeah* harg4620 = hcar(here4619);
  GLuint index = (GLuint)getint(harg4620);
  here4619 = hcdr(here4619);
  yeah* harg4621 = hcar(here4619);
  const GLint* v = (const GLint*)opaqueval(harg4621);
  here4619 = hcdr(here4619);
  A(isnil(here4619));
  glVertexAttrib4ivARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4fvARB(yeah* arg4622) {
  yeah* here4623 = arg4622;
  yeah* harg4624 = hcar(here4623);
  GLuint index = (GLuint)getint(harg4624);
  here4623 = hcdr(here4623);
  yeah* harg4625 = hcar(here4623);
  const GLfloat* v = (const GLfloat*)opaqueval(harg4625);
  here4623 = hcdr(here4623);
  A(isnil(here4623));
  glVertexAttrib4fvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4fARB(yeah* arg4626) {
  yeah* here4627 = arg4626;
  yeah* harg4628 = hcar(here4627);
  GLuint index = (GLuint)getint(harg4628);
  here4627 = hcdr(here4627);
  yeah* harg4629 = hcar(here4627);
  GLfloat x = (GLfloat)getfloatcvt(harg4629);
  here4627 = hcdr(here4627);
  yeah* harg4630 = hcar(here4627);
  GLfloat y = (GLfloat)getfloatcvt(harg4630);
  here4627 = hcdr(here4627);
  yeah* harg4631 = hcar(here4627);
  GLfloat z = (GLfloat)getfloatcvt(harg4631);
  here4627 = hcdr(here4627);
  yeah* harg4632 = hcar(here4627);
  GLfloat w = (GLfloat)getfloatcvt(harg4632);
  here4627 = hcdr(here4627);
  A(isnil(here4627));
  glVertexAttrib4fARB(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4dvARB(yeah* arg4633) {
  yeah* here4634 = arg4633;
  yeah* harg4635 = hcar(here4634);
  GLuint index = (GLuint)getint(harg4635);
  here4634 = hcdr(here4634);
  yeah* harg4636 = hcar(here4634);
  const GLdouble* v = (const GLdouble*)opaqueval(harg4636);
  here4634 = hcdr(here4634);
  A(isnil(here4634));
  glVertexAttrib4dvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4dARB(yeah* arg4637) {
  yeah* here4638 = arg4637;
  yeah* harg4639 = hcar(here4638);
  GLuint index = (GLuint)getint(harg4639);
  here4638 = hcdr(here4638);
  yeah* harg4640 = hcar(here4638);
  GLdouble x = (GLdouble)getfloatcvt(harg4640);
  here4638 = hcdr(here4638);
  yeah* harg4641 = hcar(here4638);
  GLdouble y = (GLdouble)getfloatcvt(harg4641);
  here4638 = hcdr(here4638);
  yeah* harg4642 = hcar(here4638);
  GLdouble z = (GLdouble)getfloatcvt(harg4642);
  here4638 = hcdr(here4638);
  yeah* harg4643 = hcar(here4638);
  GLdouble w = (GLdouble)getfloatcvt(harg4643);
  here4638 = hcdr(here4638);
  A(isnil(here4638));
  glVertexAttrib4dARB(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4bvARB(yeah* arg4644) {
  yeah* here4645 = arg4644;
  yeah* harg4646 = hcar(here4645);
  GLuint index = (GLuint)getint(harg4646);
  here4645 = hcdr(here4645);
  yeah* harg4647 = hcar(here4645);
  const GLbyte* v = (const GLbyte*)opaqueval(harg4647);
  here4645 = hcdr(here4645);
  A(isnil(here4645));
  glVertexAttrib4bvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NusvARB(yeah* arg4648) {
  yeah* here4649 = arg4648;
  yeah* harg4650 = hcar(here4649);
  GLuint index = (GLuint)getint(harg4650);
  here4649 = hcdr(here4649);
  yeah* harg4651 = hcar(here4649);
  const GLushort* v = (const GLushort*)opaqueval(harg4651);
  here4649 = hcdr(here4649);
  A(isnil(here4649));
  glVertexAttrib4NusvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NuivARB(yeah* arg4652) {
  yeah* here4653 = arg4652;
  yeah* harg4654 = hcar(here4653);
  GLuint index = (GLuint)getint(harg4654);
  here4653 = hcdr(here4653);
  yeah* harg4655 = hcar(here4653);
  const GLuint* v = (const GLuint*)opaqueval(harg4655);
  here4653 = hcdr(here4653);
  A(isnil(here4653));
  glVertexAttrib4NuivARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NubvARB(yeah* arg4656) {
  yeah* here4657 = arg4656;
  yeah* harg4658 = hcar(here4657);
  GLuint index = (GLuint)getint(harg4658);
  here4657 = hcdr(here4657);
  yeah* harg4659 = hcar(here4657);
  const GLubyte* v = (const GLubyte*)opaqueval(harg4659);
  here4657 = hcdr(here4657);
  A(isnil(here4657));
  glVertexAttrib4NubvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NubARB(yeah* arg4660) {
  yeah* here4661 = arg4660;
  yeah* harg4662 = hcar(here4661);
  GLuint index = (GLuint)getint(harg4662);
  here4661 = hcdr(here4661);
  yeah* harg4663 = hcar(here4661);
  int x = (int)getint(harg4663);
  here4661 = hcdr(here4661);
  yeah* harg4664 = hcar(here4661);
  int y = (int)getint(harg4664);
  here4661 = hcdr(here4661);
  yeah* harg4665 = hcar(here4661);
  int z = (int)getint(harg4665);
  here4661 = hcdr(here4661);
  yeah* harg4666 = hcar(here4661);
  int w = (int)getint(harg4666);
  here4661 = hcdr(here4661);
  A(isnil(here4661));
  glVertexAttrib4NubARB(index, x, y, z, w);
  return Nil;
}
yeah* foop_glVertexAttrib4NsvARB(yeah* arg4667) {
  yeah* here4668 = arg4667;
  yeah* harg4669 = hcar(here4668);
  GLuint index = (GLuint)getint(harg4669);
  here4668 = hcdr(here4668);
  yeah* harg4670 = hcar(here4668);
  const GLshort* v = (const GLshort*)opaqueval(harg4670);
  here4668 = hcdr(here4668);
  A(isnil(here4668));
  glVertexAttrib4NsvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NivARB(yeah* arg4671) {
  yeah* here4672 = arg4671;
  yeah* harg4673 = hcar(here4672);
  GLuint index = (GLuint)getint(harg4673);
  here4672 = hcdr(here4672);
  yeah* harg4674 = hcar(here4672);
  const GLint* v = (const GLint*)opaqueval(harg4674);
  here4672 = hcdr(here4672);
  A(isnil(here4672));
  glVertexAttrib4NivARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib4NbvARB(yeah* arg4675) {
  yeah* here4676 = arg4675;
  yeah* harg4677 = hcar(here4676);
  GLuint index = (GLuint)getint(harg4677);
  here4676 = hcdr(here4676);
  yeah* harg4678 = hcar(here4676);
  const GLbyte* v = (const GLbyte*)opaqueval(harg4678);
  here4676 = hcdr(here4676);
  A(isnil(here4676));
  glVertexAttrib4NbvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3svARB(yeah* arg4679) {
  yeah* here4680 = arg4679;
  yeah* harg4681 = hcar(here4680);
  GLuint index = (GLuint)getint(harg4681);
  here4680 = hcdr(here4680);
  yeah* harg4682 = hcar(here4680);
  const GLshort* v = (const GLshort*)opaqueval(harg4682);
  here4680 = hcdr(here4680);
  A(isnil(here4680));
  glVertexAttrib3svARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3sARB(yeah* arg4683) {
  yeah* here4684 = arg4683;
  yeah* harg4685 = hcar(here4684);
  GLuint index = (GLuint)getint(harg4685);
  here4684 = hcdr(here4684);
  yeah* harg4686 = hcar(here4684);
  int x = (int)getint(harg4686);
  here4684 = hcdr(here4684);
  yeah* harg4687 = hcar(here4684);
  int y = (int)getint(harg4687);
  here4684 = hcdr(here4684);
  yeah* harg4688 = hcar(here4684);
  int z = (int)getint(harg4688);
  here4684 = hcdr(here4684);
  A(isnil(here4684));
  glVertexAttrib3sARB(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib3fvARB(yeah* arg4689) {
  yeah* here4690 = arg4689;
  yeah* harg4691 = hcar(here4690);
  GLuint index = (GLuint)getint(harg4691);
  here4690 = hcdr(here4690);
  yeah* harg4692 = hcar(here4690);
  const GLfloat* v = (const GLfloat*)opaqueval(harg4692);
  here4690 = hcdr(here4690);
  A(isnil(here4690));
  glVertexAttrib3fvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3fARB(yeah* arg4693) {
  yeah* here4694 = arg4693;
  yeah* harg4695 = hcar(here4694);
  GLuint index = (GLuint)getint(harg4695);
  here4694 = hcdr(here4694);
  yeah* harg4696 = hcar(here4694);
  GLfloat x = (GLfloat)getfloatcvt(harg4696);
  here4694 = hcdr(here4694);
  yeah* harg4697 = hcar(here4694);
  GLfloat y = (GLfloat)getfloatcvt(harg4697);
  here4694 = hcdr(here4694);
  yeah* harg4698 = hcar(here4694);
  GLfloat z = (GLfloat)getfloatcvt(harg4698);
  here4694 = hcdr(here4694);
  A(isnil(here4694));
  glVertexAttrib3fARB(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib3dvARB(yeah* arg4699) {
  yeah* here4700 = arg4699;
  yeah* harg4701 = hcar(here4700);
  GLuint index = (GLuint)getint(harg4701);
  here4700 = hcdr(here4700);
  yeah* harg4702 = hcar(here4700);
  const GLdouble* v = (const GLdouble*)opaqueval(harg4702);
  here4700 = hcdr(here4700);
  A(isnil(here4700));
  glVertexAttrib3dvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib3dARB(yeah* arg4703) {
  yeah* here4704 = arg4703;
  yeah* harg4705 = hcar(here4704);
  GLuint index = (GLuint)getint(harg4705);
  here4704 = hcdr(here4704);
  yeah* harg4706 = hcar(here4704);
  GLdouble x = (GLdouble)getfloatcvt(harg4706);
  here4704 = hcdr(here4704);
  yeah* harg4707 = hcar(here4704);
  GLdouble y = (GLdouble)getfloatcvt(harg4707);
  here4704 = hcdr(here4704);
  yeah* harg4708 = hcar(here4704);
  GLdouble z = (GLdouble)getfloatcvt(harg4708);
  here4704 = hcdr(here4704);
  A(isnil(here4704));
  glVertexAttrib3dARB(index, x, y, z);
  return Nil;
}
yeah* foop_glVertexAttrib2svARB(yeah* arg4709) {
  yeah* here4710 = arg4709;
  yeah* harg4711 = hcar(here4710);
  GLuint index = (GLuint)getint(harg4711);
  here4710 = hcdr(here4710);
  yeah* harg4712 = hcar(here4710);
  const GLshort* v = (const GLshort*)opaqueval(harg4712);
  here4710 = hcdr(here4710);
  A(isnil(here4710));
  glVertexAttrib2svARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2sARB(yeah* arg4713) {
  yeah* here4714 = arg4713;
  yeah* harg4715 = hcar(here4714);
  GLuint index = (GLuint)getint(harg4715);
  here4714 = hcdr(here4714);
  yeah* harg4716 = hcar(here4714);
  int x = (int)getint(harg4716);
  here4714 = hcdr(here4714);
  yeah* harg4717 = hcar(here4714);
  int y = (int)getint(harg4717);
  here4714 = hcdr(here4714);
  A(isnil(here4714));
  glVertexAttrib2sARB(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib2fvARB(yeah* arg4718) {
  yeah* here4719 = arg4718;
  yeah* harg4720 = hcar(here4719);
  GLuint index = (GLuint)getint(harg4720);
  here4719 = hcdr(here4719);
  yeah* harg4721 = hcar(here4719);
  const GLfloat* v = (const GLfloat*)opaqueval(harg4721);
  here4719 = hcdr(here4719);
  A(isnil(here4719));
  glVertexAttrib2fvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2fARB(yeah* arg4722) {
  yeah* here4723 = arg4722;
  yeah* harg4724 = hcar(here4723);
  GLuint index = (GLuint)getint(harg4724);
  here4723 = hcdr(here4723);
  yeah* harg4725 = hcar(here4723);
  GLfloat x = (GLfloat)getfloatcvt(harg4725);
  here4723 = hcdr(here4723);
  yeah* harg4726 = hcar(here4723);
  GLfloat y = (GLfloat)getfloatcvt(harg4726);
  here4723 = hcdr(here4723);
  A(isnil(here4723));
  glVertexAttrib2fARB(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib2dvARB(yeah* arg4727) {
  yeah* here4728 = arg4727;
  yeah* harg4729 = hcar(here4728);
  GLuint index = (GLuint)getint(harg4729);
  here4728 = hcdr(here4728);
  yeah* harg4730 = hcar(here4728);
  const GLdouble* v = (const GLdouble*)opaqueval(harg4730);
  here4728 = hcdr(here4728);
  A(isnil(here4728));
  glVertexAttrib2dvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib2dARB(yeah* arg4731) {
  yeah* here4732 = arg4731;
  yeah* harg4733 = hcar(here4732);
  GLuint index = (GLuint)getint(harg4733);
  here4732 = hcdr(here4732);
  yeah* harg4734 = hcar(here4732);
  GLdouble x = (GLdouble)getfloatcvt(harg4734);
  here4732 = hcdr(here4732);
  yeah* harg4735 = hcar(here4732);
  GLdouble y = (GLdouble)getfloatcvt(harg4735);
  here4732 = hcdr(here4732);
  A(isnil(here4732));
  glVertexAttrib2dARB(index, x, y);
  return Nil;
}
yeah* foop_glVertexAttrib1svARB(yeah* arg4736) {
  yeah* here4737 = arg4736;
  yeah* harg4738 = hcar(here4737);
  GLuint index = (GLuint)getint(harg4738);
  here4737 = hcdr(here4737);
  yeah* harg4739 = hcar(here4737);
  const GLshort* v = (const GLshort*)opaqueval(harg4739);
  here4737 = hcdr(here4737);
  A(isnil(here4737));
  glVertexAttrib1svARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1sARB(yeah* arg4740) {
  yeah* here4741 = arg4740;
  yeah* harg4742 = hcar(here4741);
  GLuint index = (GLuint)getint(harg4742);
  here4741 = hcdr(here4741);
  yeah* harg4743 = hcar(here4741);
  int x = (int)getint(harg4743);
  here4741 = hcdr(here4741);
  A(isnil(here4741));
  glVertexAttrib1sARB(index, x);
  return Nil;
}
yeah* foop_glVertexAttrib1fvARB(yeah* arg4744) {
  yeah* here4745 = arg4744;
  yeah* harg4746 = hcar(here4745);
  GLuint index = (GLuint)getint(harg4746);
  here4745 = hcdr(here4745);
  yeah* harg4747 = hcar(here4745);
  const GLfloat* v = (const GLfloat*)opaqueval(harg4747);
  here4745 = hcdr(here4745);
  A(isnil(here4745));
  glVertexAttrib1fvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1fARB(yeah* arg4748) {
  yeah* here4749 = arg4748;
  yeah* harg4750 = hcar(here4749);
  GLuint index = (GLuint)getint(harg4750);
  here4749 = hcdr(here4749);
  yeah* harg4751 = hcar(here4749);
  GLfloat x = (GLfloat)getfloatcvt(harg4751);
  here4749 = hcdr(here4749);
  A(isnil(here4749));
  glVertexAttrib1fARB(index, x);
  return Nil;
}
yeah* foop_glVertexAttrib1dvARB(yeah* arg4752) {
  yeah* here4753 = arg4752;
  yeah* harg4754 = hcar(here4753);
  GLuint index = (GLuint)getint(harg4754);
  here4753 = hcdr(here4753);
  yeah* harg4755 = hcar(here4753);
  const GLdouble* v = (const GLdouble*)opaqueval(harg4755);
  here4753 = hcdr(here4753);
  A(isnil(here4753));
  glVertexAttrib1dvARB(index, v);
  return Nil;
}
yeah* foop_glVertexAttrib1dARB(yeah* arg4756) {
  yeah* here4757 = arg4756;
  yeah* harg4758 = hcar(here4757);
  GLuint index = (GLuint)getint(harg4758);
  here4757 = hcdr(here4757);
  yeah* harg4759 = hcar(here4757);
  GLdouble x = (GLdouble)getfloatcvt(harg4759);
  here4757 = hcdr(here4757);
  A(isnil(here4757));
  glVertexAttrib1dARB(index, x);
  return Nil;
}
yeah* foop_glGetProgramivARB(yeah* arg4760) {
  yeah* here4761 = arg4760;
  yeah* harg4762 = hcar(here4761);
  GLenum target = (GLenum)getint(harg4762);
  here4761 = hcdr(here4761);
  yeah* harg4763 = hcar(here4761);
  GLenum pname = (GLenum)getint(harg4763);
  here4761 = hcdr(here4761);
  yeah* harg4764 = hcar(here4761);
  GLint* params = (GLint*)opaqueval(harg4764);
  here4761 = hcdr(here4761);
  A(isnil(here4761));
  glGetProgramivARB(target, pname, params);
  return Nil;
}
yeah* foop_glGetProgramStringARB(yeah* arg4765) {
  yeah* here4766 = arg4765;
  yeah* harg4767 = hcar(here4766);
  GLenum target = (GLenum)getint(harg4767);
  here4766 = hcdr(here4766);
  yeah* harg4768 = hcar(here4766);
  GLenum pname = (GLenum)getint(harg4768);
  here4766 = hcdr(here4766);
  yeah* harg4769 = hcar(here4766);
  GLvoid* string = (GLvoid*)opaqueval(harg4769);
  here4766 = hcdr(here4766);
  A(isnil(here4766));
  glGetProgramStringARB(target, pname, string);
  return Nil;
}
yeah* foop_glProgramStringARB(yeah* arg4770) {
  yeah* here4771 = arg4770;
  yeah* harg4772 = hcar(here4771);
  GLenum target = (GLenum)getint(harg4772);
  here4771 = hcdr(here4771);
  yeah* harg4773 = hcar(here4771);
  GLenum format = (GLenum)getint(harg4773);
  here4771 = hcdr(here4771);
  yeah* harg4774 = hcar(here4771);
  GLsizei len = (GLsizei)getint(harg4774);
  here4771 = hcdr(here4771);
  yeah* harg4775 = hcar(here4771);
  const GLvoid* string = (const GLvoid*)opaqueval(harg4775);
  here4771 = hcdr(here4771);
  A(isnil(here4771));
  glProgramStringARB(target, format, len, string);
  return Nil;
}
yeah* foop_glGetProgramLocalParameterfvARB(yeah* arg4776) {
  yeah* here4777 = arg4776;
  yeah* harg4778 = hcar(here4777);
  GLenum target = (GLenum)getint(harg4778);
  here4777 = hcdr(here4777);
  yeah* harg4779 = hcar(here4777);
  GLuint index = (GLuint)getint(harg4779);
  here4777 = hcdr(here4777);
  yeah* harg4780 = hcar(here4777);
  GLfloat* params = (GLfloat*)opaqueval(harg4780);
  here4777 = hcdr(here4777);
  A(isnil(here4777));
  glGetProgramLocalParameterfvARB(target, index, params);
  return Nil;
}
yeah* foop_glGetProgramLocalParameterdvARB(yeah* arg4781) {
  yeah* here4782 = arg4781;
  yeah* harg4783 = hcar(here4782);
  GLenum target = (GLenum)getint(harg4783);
  here4782 = hcdr(here4782);
  yeah* harg4784 = hcar(here4782);
  GLuint index = (GLuint)getint(harg4784);
  here4782 = hcdr(here4782);
  yeah* harg4785 = hcar(here4782);
  GLdouble* params = (GLdouble*)opaqueval(harg4785);
  here4782 = hcdr(here4782);
  A(isnil(here4782));
  glGetProgramLocalParameterdvARB(target, index, params);
  return Nil;
}
yeah* foop_glGetProgramEnvParameterfvARB(yeah* arg4786) {
  yeah* here4787 = arg4786;
  yeah* harg4788 = hcar(here4787);
  GLenum target = (GLenum)getint(harg4788);
  here4787 = hcdr(here4787);
  yeah* harg4789 = hcar(here4787);
  GLuint index = (GLuint)getint(harg4789);
  here4787 = hcdr(here4787);
  yeah* harg4790 = hcar(here4787);
  GLfloat* params = (GLfloat*)opaqueval(harg4790);
  here4787 = hcdr(here4787);
  A(isnil(here4787));
  glGetProgramEnvParameterfvARB(target, index, params);
  return Nil;
}
yeah* foop_glGetProgramEnvParameterdvARB(yeah* arg4791) {
  yeah* here4792 = arg4791;
  yeah* harg4793 = hcar(here4792);
  GLenum target = (GLenum)getint(harg4793);
  here4792 = hcdr(here4792);
  yeah* harg4794 = hcar(here4792);
  GLuint index = (GLuint)getint(harg4794);
  here4792 = hcdr(here4792);
  yeah* harg4795 = hcar(here4792);
  GLdouble* params = (GLdouble*)opaqueval(harg4795);
  here4792 = hcdr(here4792);
  A(isnil(here4792));
  glGetProgramEnvParameterdvARB(target, index, params);
  return Nil;
}
yeah* foop_glProgramLocalParameter4fvARB(yeah* arg4796) {
  yeah* here4797 = arg4796;
  yeah* harg4798 = hcar(here4797);
  GLenum target = (GLenum)getint(harg4798);
  here4797 = hcdr(here4797);
  yeah* harg4799 = hcar(here4797);
  GLuint index = (GLuint)getint(harg4799);
  here4797 = hcdr(here4797);
  yeah* harg4800 = hcar(here4797);
  const GLfloat* params = (const GLfloat*)opaqueval(harg4800);
  here4797 = hcdr(here4797);
  A(isnil(here4797));
  glProgramLocalParameter4fvARB(target, index, params);
  return Nil;
}
yeah* foop_glProgramLocalParameter4fARB(yeah* arg4801) {
  yeah* here4802 = arg4801;
  yeah* harg4803 = hcar(here4802);
  GLenum target = (GLenum)getint(harg4803);
  here4802 = hcdr(here4802);
  yeah* harg4804 = hcar(here4802);
  GLuint index = (GLuint)getint(harg4804);
  here4802 = hcdr(here4802);
  yeah* harg4805 = hcar(here4802);
  GLfloat x = (GLfloat)getfloatcvt(harg4805);
  here4802 = hcdr(here4802);
  yeah* harg4806 = hcar(here4802);
  GLfloat y = (GLfloat)getfloatcvt(harg4806);
  here4802 = hcdr(here4802);
  yeah* harg4807 = hcar(here4802);
  GLfloat z = (GLfloat)getfloatcvt(harg4807);
  here4802 = hcdr(here4802);
  yeah* harg4808 = hcar(here4802);
  GLfloat w = (GLfloat)getfloatcvt(harg4808);
  here4802 = hcdr(here4802);
  A(isnil(here4802));
  glProgramLocalParameter4fARB(target, index, x, y, z, w);
  return Nil;
}
yeah* foop_glProgramLocalParameter4dvARB(yeah* arg4809) {
  yeah* here4810 = arg4809;
  yeah* harg4811 = hcar(here4810);
  GLenum target = (GLenum)getint(harg4811);
  here4810 = hcdr(here4810);
  yeah* harg4812 = hcar(here4810);
  GLuint index = (GLuint)getint(harg4812);
  here4810 = hcdr(here4810);
  yeah* harg4813 = hcar(here4810);
  const GLdouble* params = (const GLdouble*)opaqueval(harg4813);
  here4810 = hcdr(here4810);
  A(isnil(here4810));
  glProgramLocalParameter4dvARB(target, index, params);
  return Nil;
}
yeah* foop_glProgramLocalParameter4dARB(yeah* arg4814) {
  yeah* here4815 = arg4814;
  yeah* harg4816 = hcar(here4815);
  GLenum target = (GLenum)getint(harg4816);
  here4815 = hcdr(here4815);
  yeah* harg4817 = hcar(here4815);
  GLuint index = (GLuint)getint(harg4817);
  here4815 = hcdr(here4815);
  yeah* harg4818 = hcar(here4815);
  GLdouble x = (GLdouble)getfloatcvt(harg4818);
  here4815 = hcdr(here4815);
  yeah* harg4819 = hcar(here4815);
  GLdouble y = (GLdouble)getfloatcvt(harg4819);
  here4815 = hcdr(here4815);
  yeah* harg4820 = hcar(here4815);
  GLdouble z = (GLdouble)getfloatcvt(harg4820);
  here4815 = hcdr(here4815);
  yeah* harg4821 = hcar(here4815);
  GLdouble w = (GLdouble)getfloatcvt(harg4821);
  here4815 = hcdr(here4815);
  A(isnil(here4815));
  glProgramLocalParameter4dARB(target, index, x, y, z, w);
  return Nil;
}
yeah* foop_glProgramEnvParameter4fvARB(yeah* arg4822) {
  yeah* here4823 = arg4822;
  yeah* harg4824 = hcar(here4823);
  GLenum target = (GLenum)getint(harg4824);
  here4823 = hcdr(here4823);
  yeah* harg4825 = hcar(here4823);
  GLuint index = (GLuint)getint(harg4825);
  here4823 = hcdr(here4823);
  yeah* harg4826 = hcar(here4823);
  const GLfloat* params = (const GLfloat*)opaqueval(harg4826);
  here4823 = hcdr(here4823);
  A(isnil(here4823));
  glProgramEnvParameter4fvARB(target, index, params);
  return Nil;
}
yeah* foop_glProgramEnvParameter4fARB(yeah* arg4827) {
  yeah* here4828 = arg4827;
  yeah* harg4829 = hcar(here4828);
  GLenum target = (GLenum)getint(harg4829);
  here4828 = hcdr(here4828);
  yeah* harg4830 = hcar(here4828);
  GLuint index = (GLuint)getint(harg4830);
  here4828 = hcdr(here4828);
  yeah* harg4831 = hcar(here4828);
  GLfloat x = (GLfloat)getfloatcvt(harg4831);
  here4828 = hcdr(here4828);
  yeah* harg4832 = hcar(here4828);
  GLfloat y = (GLfloat)getfloatcvt(harg4832);
  here4828 = hcdr(here4828);
  yeah* harg4833 = hcar(here4828);
  GLfloat z = (GLfloat)getfloatcvt(harg4833);
  here4828 = hcdr(here4828);
  yeah* harg4834 = hcar(here4828);
  GLfloat w = (GLfloat)getfloatcvt(harg4834);
  here4828 = hcdr(here4828);
  A(isnil(here4828));
  glProgramEnvParameter4fARB(target, index, x, y, z, w);
  return Nil;
}
yeah* foop_glProgramEnvParameter4dvARB(yeah* arg4835) {
  yeah* here4836 = arg4835;
  yeah* harg4837 = hcar(here4836);
  GLenum target = (GLenum)getint(harg4837);
  here4836 = hcdr(here4836);
  yeah* harg4838 = hcar(here4836);
  GLuint index = (GLuint)getint(harg4838);
  here4836 = hcdr(here4836);
  yeah* harg4839 = hcar(here4836);
  const GLdouble* params = (const GLdouble*)opaqueval(harg4839);
  here4836 = hcdr(here4836);
  A(isnil(here4836));
  glProgramEnvParameter4dvARB(target, index, params);
  return Nil;
}
yeah* foop_glProgramEnvParameter4dARB(yeah* arg4840) {
  yeah* here4841 = arg4840;
  yeah* harg4842 = hcar(here4841);
  GLenum target = (GLenum)getint(harg4842);
  here4841 = hcdr(here4841);
  yeah* harg4843 = hcar(here4841);
  GLuint index = (GLuint)getint(harg4843);
  here4841 = hcdr(here4841);
  yeah* harg4844 = hcar(here4841);
  GLdouble x = (GLdouble)getfloatcvt(harg4844);
  here4841 = hcdr(here4841);
  yeah* harg4845 = hcar(here4841);
  GLdouble y = (GLdouble)getfloatcvt(harg4845);
  here4841 = hcdr(here4841);
  yeah* harg4846 = hcar(here4841);
  GLdouble z = (GLdouble)getfloatcvt(harg4846);
  here4841 = hcdr(here4841);
  yeah* harg4847 = hcar(here4841);
  GLdouble w = (GLdouble)getfloatcvt(harg4847);
  here4841 = hcdr(here4841);
  A(isnil(here4841));
  glProgramEnvParameter4dARB(target, index, x, y, z, w);
  return Nil;
}
yeah* foop_glIsProgramARB(yeah* arg4848) {
  yeah* here4849 = arg4848;
  yeah* harg4850 = hcar(here4849);
  GLuint program = (GLuint)getint(harg4850);
  here4849 = hcdr(here4849);
  A(isnil(here4849));
  GLboolean ret4851 = glIsProgramARB(program);
  return integer((int)ret4851);
}
yeah* foop_glGenProgramsARB(yeah* arg4852) {
  yeah* here4853 = arg4852;
  yeah* harg4854 = hcar(here4853);
  GLsizei n = (GLsizei)getint(harg4854);
  here4853 = hcdr(here4853);
  yeah* harg4855 = hcar(here4853);
  GLuint* programs = (GLuint*)opaqueval(harg4855);
  here4853 = hcdr(here4853);
  A(isnil(here4853));
  glGenProgramsARB(n, programs);
  return Nil;
}
yeah* foop_glDeleteProgramsARB(yeah* arg4856) {
  yeah* here4857 = arg4856;
  yeah* harg4858 = hcar(here4857);
  GLsizei n = (GLsizei)getint(harg4858);
  here4857 = hcdr(here4857);
  yeah* harg4859 = hcar(here4857);
  const GLuint* programs = (const GLuint*)opaqueval(harg4859);
  here4857 = hcdr(here4857);
  A(isnil(here4857));
  glDeleteProgramsARB(n, programs);
  return Nil;
}
yeah* foop_glBindProgramARB(yeah* arg4860) {
  yeah* here4861 = arg4860;
  yeah* harg4862 = hcar(here4861);
  GLenum target = (GLenum)getint(harg4862);
  here4861 = hcdr(here4861);
  yeah* harg4863 = hcar(here4861);
  GLuint program = (GLuint)getint(harg4863);
  here4861 = hcdr(here4861);
  A(isnil(here4861));
  glBindProgramARB(target, program);
  return Nil;
}
yeah* foop_glPointParameterfvARB(yeah* arg4864) {
  yeah* here4865 = arg4864;
  yeah* harg4866 = hcar(here4865);
  GLenum pname = (GLenum)getint(harg4866);
  here4865 = hcdr(here4865);
  yeah* harg4867 = hcar(here4865);
  const GLfloat* params = (const GLfloat*)opaqueval(harg4867);
  here4865 = hcdr(here4865);
  A(isnil(here4865));
  glPointParameterfvARB(pname, params);
  return Nil;
}
yeah* foop_glPointParameterfARB(yeah* arg4868) {
  yeah* here4869 = arg4868;
  yeah* harg4870 = hcar(here4869);
  GLenum pname = (GLenum)getint(harg4870);
  here4869 = hcdr(here4869);
  yeah* harg4871 = hcar(here4869);
  GLfloat param = (GLfloat)getfloatcvt(harg4871);
  here4869 = hcdr(here4869);
  A(isnil(here4869));
  glPointParameterfARB(pname, param);
  return Nil;
}
yeah* foop_glGetQueryObjectuivARB(yeah* arg4872) {
  yeah* here4873 = arg4872;
  yeah* harg4874 = hcar(here4873);
  GLuint id = (GLuint)getint(harg4874);
  here4873 = hcdr(here4873);
  yeah* harg4875 = hcar(here4873);
  GLenum pname = (GLenum)getint(harg4875);
  here4873 = hcdr(here4873);
  yeah* harg4876 = hcar(here4873);
  GLuint* params = (GLuint*)opaqueval(harg4876);
  here4873 = hcdr(here4873);
  A(isnil(here4873));
  glGetQueryObjectuivARB(id, pname, params);
  return Nil;
}
yeah* foop_glGetQueryObjectivARB(yeah* arg4877) {
  yeah* here4878 = arg4877;
  yeah* harg4879 = hcar(here4878);
  GLuint id = (GLuint)getint(harg4879);
  here4878 = hcdr(here4878);
  yeah* harg4880 = hcar(here4878);
  GLenum pname = (GLenum)getint(harg4880);
  here4878 = hcdr(here4878);
  yeah* harg4881 = hcar(here4878);
  GLint* params = (GLint*)opaqueval(harg4881);
  here4878 = hcdr(here4878);
  A(isnil(here4878));
  glGetQueryObjectivARB(id, pname, params);
  return Nil;
}
yeah* foop_glGetQueryivARB(yeah* arg4882) {
  yeah* here4883 = arg4882;
  yeah* harg4884 = hcar(here4883);
  GLenum target = (GLenum)getint(harg4884);
  here4883 = hcdr(here4883);
  yeah* harg4885 = hcar(here4883);
  GLenum pname = (GLenum)getint(harg4885);
  here4883 = hcdr(here4883);
  yeah* harg4886 = hcar(here4883);
  GLint* params = (GLint*)opaqueval(harg4886);
  here4883 = hcdr(here4883);
  A(isnil(here4883));
  glGetQueryivARB(target, pname, params);
  return Nil;
}
yeah* foop_glEndQueryARB(yeah* arg4887) {
  yeah* here4888 = arg4887;
  yeah* harg4889 = hcar(here4888);
  GLenum target = (GLenum)getint(harg4889);
  here4888 = hcdr(here4888);
  A(isnil(here4888));
  glEndQueryARB(target);
  return Nil;
}
yeah* foop_glBeginQueryARB(yeah* arg4890) {
  yeah* here4891 = arg4890;
  yeah* harg4892 = hcar(here4891);
  GLenum target = (GLenum)getint(harg4892);
  here4891 = hcdr(here4891);
  yeah* harg4893 = hcar(here4891);
  GLuint id = (GLuint)getint(harg4893);
  here4891 = hcdr(here4891);
  A(isnil(here4891));
  glBeginQueryARB(target, id);
  return Nil;
}
yeah* foop_glIsQueryARB(yeah* arg4894) {
  yeah* here4895 = arg4894;
  yeah* harg4896 = hcar(here4895);
  GLuint id = (GLuint)getint(harg4896);
  here4895 = hcdr(here4895);
  A(isnil(here4895));
  GLboolean ret4897 = glIsQueryARB(id);
  return integer((int)ret4897);
}
yeah* foop_glDeleteQueriesARB(yeah* arg4898) {
  yeah* here4899 = arg4898;
  yeah* harg4900 = hcar(here4899);
  GLsizei n = (GLsizei)getint(harg4900);
  here4899 = hcdr(here4899);
  yeah* harg4901 = hcar(here4899);
  const GLuint* ids = (const GLuint*)opaqueval(harg4901);
  here4899 = hcdr(here4899);
  A(isnil(here4899));
  glDeleteQueriesARB(n, ids);
  return Nil;
}
yeah* foop_glGenQueriesARB(yeah* arg4902) {
  yeah* here4903 = arg4902;
  yeah* harg4904 = hcar(here4903);
  GLsizei n = (GLsizei)getint(harg4904);
  here4903 = hcdr(here4903);
  yeah* harg4905 = hcar(here4903);
  GLuint* ids = (GLuint*)opaqueval(harg4905);
  here4903 = hcdr(here4903);
  A(isnil(here4903));
  glGenQueriesARB(n, ids);
  return Nil;
}
yeah* foop_glWindowPos3svARB(yeah* arg4906) {
  yeah* here4907 = arg4906;
  yeah* harg4908 = hcar(here4907);
  const GLshort* anonp235 = (const GLshort*)opaqueval(harg4908);
  here4907 = hcdr(here4907);
  A(isnil(here4907));
  glWindowPos3svARB(anonp235);
  return Nil;
}
yeah* foop_glWindowPos3sARB(yeah* arg4909) {
  yeah* here4910 = arg4909;
  yeah* harg4911 = hcar(here4910);
  int anonp236 = (int)getint(harg4911);
  here4910 = hcdr(here4910);
  yeah* harg4912 = hcar(here4910);
  int anonp237 = (int)getint(harg4912);
  here4910 = hcdr(here4910);
  yeah* harg4913 = hcar(here4910);
  int anonp238 = (int)getint(harg4913);
  here4910 = hcdr(here4910);
  A(isnil(here4910));
  glWindowPos3sARB(anonp236, anonp237, anonp238);
  return Nil;
}
yeah* foop_glWindowPos3ivARB(yeah* arg4914) {
  yeah* here4915 = arg4914;
  yeah* harg4916 = hcar(here4915);
  const GLint* anonp239 = (const GLint*)opaqueval(harg4916);
  here4915 = hcdr(here4915);
  A(isnil(here4915));
  glWindowPos3ivARB(anonp239);
  return Nil;
}
yeah* foop_glWindowPos3iARB(yeah* arg4917) {
  yeah* here4918 = arg4917;
  yeah* harg4919 = hcar(here4918);
  GLint anonp240 = (GLint)getint(harg4919);
  here4918 = hcdr(here4918);
  yeah* harg4920 = hcar(here4918);
  GLint anonp241 = (GLint)getint(harg4920);
  here4918 = hcdr(here4918);
  yeah* harg4921 = hcar(here4918);
  GLint anonp242 = (GLint)getint(harg4921);
  here4918 = hcdr(here4918);
  A(isnil(here4918));
  glWindowPos3iARB(anonp240, anonp241, anonp242);
  return Nil;
}
yeah* foop_glWindowPos3fvARB(yeah* arg4922) {
  yeah* here4923 = arg4922;
  yeah* harg4924 = hcar(here4923);
  const GLfloat* anonp243 = (const GLfloat*)opaqueval(harg4924);
  here4923 = hcdr(here4923);
  A(isnil(here4923));
  glWindowPos3fvARB(anonp243);
  return Nil;
}
yeah* foop_glWindowPos3fARB(yeah* arg4925) {
  yeah* here4926 = arg4925;
  yeah* harg4927 = hcar(here4926);
  GLfloat anonp244 = (GLfloat)getfloatcvt(harg4927);
  here4926 = hcdr(here4926);
  yeah* harg4928 = hcar(here4926);
  GLfloat anonp245 = (GLfloat)getfloatcvt(harg4928);
  here4926 = hcdr(here4926);
  yeah* harg4929 = hcar(here4926);
  GLfloat anonp246 = (GLfloat)getfloatcvt(harg4929);
  here4926 = hcdr(here4926);
  A(isnil(here4926));
  glWindowPos3fARB(anonp244, anonp245, anonp246);
  return Nil;
}
yeah* foop_glWindowPos3dvARB(yeah* arg4930) {
  yeah* here4931 = arg4930;
  yeah* harg4932 = hcar(here4931);
  const GLdouble* anonp247 = (const GLdouble*)opaqueval(harg4932);
  here4931 = hcdr(here4931);
  A(isnil(here4931));
  glWindowPos3dvARB(anonp247);
  return Nil;
}
yeah* foop_glWindowPos3dARB(yeah* arg4933) {
  yeah* here4934 = arg4933;
  yeah* harg4935 = hcar(here4934);
  GLdouble anonp248 = (GLdouble)getfloatcvt(harg4935);
  here4934 = hcdr(here4934);
  yeah* harg4936 = hcar(here4934);
  GLdouble anonp249 = (GLdouble)getfloatcvt(harg4936);
  here4934 = hcdr(here4934);
  yeah* harg4937 = hcar(here4934);
  GLdouble anonp250 = (GLdouble)getfloatcvt(harg4937);
  here4934 = hcdr(here4934);
  A(isnil(here4934));
  glWindowPos3dARB(anonp248, anonp249, anonp250);
  return Nil;
}
yeah* foop_glWindowPos2svARB(yeah* arg4938) {
  yeah* here4939 = arg4938;
  yeah* harg4940 = hcar(here4939);
  const GLshort* anonp251 = (const GLshort*)opaqueval(harg4940);
  here4939 = hcdr(here4939);
  A(isnil(here4939));
  glWindowPos2svARB(anonp251);
  return Nil;
}
yeah* foop_glWindowPos2sARB(yeah* arg4941) {
  yeah* here4942 = arg4941;
  yeah* harg4943 = hcar(here4942);
  int anonp252 = (int)getint(harg4943);
  here4942 = hcdr(here4942);
  yeah* harg4944 = hcar(here4942);
  int anonp253 = (int)getint(harg4944);
  here4942 = hcdr(here4942);
  A(isnil(here4942));
  glWindowPos2sARB(anonp252, anonp253);
  return Nil;
}
yeah* foop_glWindowPos2ivARB(yeah* arg4945) {
  yeah* here4946 = arg4945;
  yeah* harg4947 = hcar(here4946);
  const GLint* anonp254 = (const GLint*)opaqueval(harg4947);
  here4946 = hcdr(here4946);
  A(isnil(here4946));
  glWindowPos2ivARB(anonp254);
  return Nil;
}
yeah* foop_glWindowPos2iARB(yeah* arg4948) {
  yeah* here4949 = arg4948;
  yeah* harg4950 = hcar(here4949);
  GLint anonp255 = (GLint)getint(harg4950);
  here4949 = hcdr(here4949);
  yeah* harg4951 = hcar(here4949);
  GLint anonp256 = (GLint)getint(harg4951);
  here4949 = hcdr(here4949);
  A(isnil(here4949));
  glWindowPos2iARB(anonp255, anonp256);
  return Nil;
}
yeah* foop_glWindowPos2fvARB(yeah* arg4952) {
  yeah* here4953 = arg4952;
  yeah* harg4954 = hcar(here4953);
  const GLfloat* anonp257 = (const GLfloat*)opaqueval(harg4954);
  here4953 = hcdr(here4953);
  A(isnil(here4953));
  glWindowPos2fvARB(anonp257);
  return Nil;
}
yeah* foop_glWindowPos2fARB(yeah* arg4955) {
  yeah* here4956 = arg4955;
  yeah* harg4957 = hcar(here4956);
  GLfloat anonp258 = (GLfloat)getfloatcvt(harg4957);
  here4956 = hcdr(here4956);
  yeah* harg4958 = hcar(here4956);
  GLfloat anonp259 = (GLfloat)getfloatcvt(harg4958);
  here4956 = hcdr(here4956);
  A(isnil(here4956));
  glWindowPos2fARB(anonp258, anonp259);
  return Nil;
}
yeah* foop_glWindowPos2dvARB(yeah* arg4959) {
  yeah* here4960 = arg4959;
  yeah* harg4961 = hcar(here4960);
  const GLdouble* anonp260 = (const GLdouble*)opaqueval(harg4961);
  here4960 = hcdr(here4960);
  A(isnil(here4960));
  glWindowPos2dvARB(anonp260);
  return Nil;
}
yeah* foop_glWindowPos2dARB(yeah* arg4962) {
  yeah* here4963 = arg4962;
  yeah* harg4964 = hcar(here4963);
  GLdouble anonp261 = (GLdouble)getfloatcvt(harg4964);
  here4963 = hcdr(here4963);
  yeah* harg4965 = hcar(here4963);
  GLdouble anonp262 = (GLdouble)getfloatcvt(harg4965);
  here4963 = hcdr(here4963);
  A(isnil(here4963));
  glWindowPos2dARB(anonp261, anonp262);
  return Nil;
}
yeah* foop_glVertexBlendARB(yeah* arg4966) {
  yeah* here4967 = arg4966;
  yeah* harg4968 = hcar(here4967);
  GLint anonp263 = (GLint)getint(harg4968);
  here4967 = hcdr(here4967);
  A(isnil(here4967));
  glVertexBlendARB(anonp263);
  return Nil;
}
yeah* foop_glWeightPointerARB(yeah* arg4969) {
  yeah* here4970 = arg4969;
  yeah* harg4971 = hcar(here4970);
  GLint anonp264 = (GLint)getint(harg4971);
  here4970 = hcdr(here4970);
  yeah* harg4972 = hcar(here4970);
  GLenum anonp265 = (GLenum)getint(harg4972);
  here4970 = hcdr(here4970);
  yeah* harg4973 = hcar(here4970);
  GLsizei anonp266 = (GLsizei)getint(harg4973);
  here4970 = hcdr(here4970);
  yeah* harg4974 = hcar(here4970);
  const GLvoid* anonp267 = (const GLvoid*)opaqueval(harg4974);
  here4970 = hcdr(here4970);
  A(isnil(here4970));
  glWeightPointerARB(anonp264, anonp265, anonp266, anonp267);
  return Nil;
}
yeah* foop_glWeightuivARB(yeah* arg4975) {
  yeah* here4976 = arg4975;
  yeah* harg4977 = hcar(here4976);
  GLint anonp268 = (GLint)getint(harg4977);
  here4976 = hcdr(here4976);
  yeah* harg4978 = hcar(here4976);
  const GLuint* anonp269 = (const GLuint*)opaqueval(harg4978);
  here4976 = hcdr(here4976);
  A(isnil(here4976));
  glWeightuivARB(anonp268, anonp269);
  return Nil;
}
yeah* foop_glWeightusvARB(yeah* arg4979) {
  yeah* here4980 = arg4979;
  yeah* harg4981 = hcar(here4980);
  GLint anonp270 = (GLint)getint(harg4981);
  here4980 = hcdr(here4980);
  yeah* harg4982 = hcar(here4980);
  const GLushort* anonp271 = (const GLushort*)opaqueval(harg4982);
  here4980 = hcdr(here4980);
  A(isnil(here4980));
  glWeightusvARB(anonp270, anonp271);
  return Nil;
}
yeah* foop_glWeightubvARB(yeah* arg4983) {
  yeah* here4984 = arg4983;
  yeah* harg4985 = hcar(here4984);
  GLint anonp272 = (GLint)getint(harg4985);
  here4984 = hcdr(here4984);
  yeah* harg4986 = hcar(here4984);
  const GLubyte* anonp273 = (const GLubyte*)opaqueval(harg4986);
  here4984 = hcdr(here4984);
  A(isnil(here4984));
  glWeightubvARB(anonp272, anonp273);
  return Nil;
}
yeah* foop_glWeightdvARB(yeah* arg4987) {
  yeah* here4988 = arg4987;
  yeah* harg4989 = hcar(here4988);
  GLint anonp274 = (GLint)getint(harg4989);
  here4988 = hcdr(here4988);
  yeah* harg4990 = hcar(here4988);
  const GLdouble* anonp275 = (const GLdouble*)opaqueval(harg4990);
  here4988 = hcdr(here4988);
  A(isnil(here4988));
  glWeightdvARB(anonp274, anonp275);
  return Nil;
}
yeah* foop_glWeightfvARB(yeah* arg4991) {
  yeah* here4992 = arg4991;
  yeah* harg4993 = hcar(here4992);
  GLint anonp276 = (GLint)getint(harg4993);
  here4992 = hcdr(here4992);
  yeah* harg4994 = hcar(here4992);
  const GLfloat* anonp277 = (const GLfloat*)opaqueval(harg4994);
  here4992 = hcdr(here4992);
  A(isnil(here4992));
  glWeightfvARB(anonp276, anonp277);
  return Nil;
}
yeah* foop_glWeightivARB(yeah* arg4995) {
  yeah* here4996 = arg4995;
  yeah* harg4997 = hcar(here4996);
  GLint anonp278 = (GLint)getint(harg4997);
  here4996 = hcdr(here4996);
  yeah* harg4998 = hcar(here4996);
  const GLint* anonp279 = (const GLint*)opaqueval(harg4998);
  here4996 = hcdr(here4996);
  A(isnil(here4996));
  glWeightivARB(anonp278, anonp279);
  return Nil;
}
yeah* foop_glWeightsvARB(yeah* arg4999) {
  yeah* here5000 = arg4999;
  yeah* harg5001 = hcar(here5000);
  GLint anonp280 = (GLint)getint(harg5001);
  here5000 = hcdr(here5000);
  yeah* harg5002 = hcar(here5000);
  const GLshort* anonp281 = (const GLshort*)opaqueval(harg5002);
  here5000 = hcdr(here5000);
  A(isnil(here5000));
  glWeightsvARB(anonp280, anonp281);
  return Nil;
}
yeah* foop_glWeightbvARB(yeah* arg5003) {
  yeah* here5004 = arg5003;
  yeah* harg5005 = hcar(here5004);
  GLint anonp282 = (GLint)getint(harg5005);
  here5004 = hcdr(here5004);
  yeah* harg5006 = hcar(here5004);
  const GLbyte* anonp283 = (const GLbyte*)opaqueval(harg5006);
  here5004 = hcdr(here5004);
  A(isnil(here5004));
  glWeightbvARB(anonp282, anonp283);
  return Nil;
}
yeah* foop_glGetCompressedTexImageARB(yeah* arg5007) {
  yeah* here5008 = arg5007;
  yeah* harg5009 = hcar(here5008);
  GLenum anonp284 = (GLenum)getint(harg5009);
  here5008 = hcdr(here5008);
  yeah* harg5010 = hcar(here5008);
  GLint anonp285 = (GLint)getint(harg5010);
  here5008 = hcdr(here5008);
  yeah* harg5011 = hcar(here5008);
  GLvoid* anonp286 = (GLvoid*)opaqueval(harg5011);
  here5008 = hcdr(here5008);
  A(isnil(here5008));
  glGetCompressedTexImageARB(anonp284, anonp285, anonp286);
  return Nil;
}
yeah* foop_glCompressedTexSubImage1DARB(yeah* arg5012) {
  yeah* here5013 = arg5012;
  yeah* harg5014 = hcar(here5013);
  GLenum anonp287 = (GLenum)getint(harg5014);
  here5013 = hcdr(here5013);
  yeah* harg5015 = hcar(here5013);
  GLint anonp288 = (GLint)getint(harg5015);
  here5013 = hcdr(here5013);
  yeah* harg5016 = hcar(here5013);
  GLint anonp289 = (GLint)getint(harg5016);
  here5013 = hcdr(here5013);
  yeah* harg5017 = hcar(here5013);
  GLsizei anonp290 = (GLsizei)getint(harg5017);
  here5013 = hcdr(here5013);
  yeah* harg5018 = hcar(here5013);
  GLenum anonp291 = (GLenum)getint(harg5018);
  here5013 = hcdr(here5013);
  yeah* harg5019 = hcar(here5013);
  GLsizei anonp292 = (GLsizei)getint(harg5019);
  here5013 = hcdr(here5013);
  yeah* harg5020 = hcar(here5013);
  const GLvoid* anonp293 = (const GLvoid*)opaqueval(harg5020);
  here5013 = hcdr(here5013);
  A(isnil(here5013));
  glCompressedTexSubImage1DARB(anonp287, anonp288, anonp289, anonp290, anonp291, anonp292, anonp293);
  return Nil;
}
yeah* foop_glCompressedTexSubImage2DARB(yeah* arg5021) {
  yeah* here5022 = arg5021;
  yeah* harg5023 = hcar(here5022);
  GLenum anonp294 = (GLenum)getint(harg5023);
  here5022 = hcdr(here5022);
  yeah* harg5024 = hcar(here5022);
  GLint anonp295 = (GLint)getint(harg5024);
  here5022 = hcdr(here5022);
  yeah* harg5025 = hcar(here5022);
  GLint anonp296 = (GLint)getint(harg5025);
  here5022 = hcdr(here5022);
  yeah* harg5026 = hcar(here5022);
  GLint anonp297 = (GLint)getint(harg5026);
  here5022 = hcdr(here5022);
  yeah* harg5027 = hcar(here5022);
  GLsizei anonp298 = (GLsizei)getint(harg5027);
  here5022 = hcdr(here5022);
  yeah* harg5028 = hcar(here5022);
  GLsizei anonp299 = (GLsizei)getint(harg5028);
  here5022 = hcdr(here5022);
  yeah* harg5029 = hcar(here5022);
  GLenum anonp300 = (GLenum)getint(harg5029);
  here5022 = hcdr(here5022);
  yeah* harg5030 = hcar(here5022);
  GLsizei anonp301 = (GLsizei)getint(harg5030);
  here5022 = hcdr(here5022);
  yeah* harg5031 = hcar(here5022);
  const GLvoid* anonp302 = (const GLvoid*)opaqueval(harg5031);
  here5022 = hcdr(here5022);
  A(isnil(here5022));
  glCompressedTexSubImage2DARB(anonp294, anonp295, anonp296, anonp297, anonp298, anonp299, anonp300, anonp301, anonp302);
  return Nil;
}
yeah* foop_glCompressedTexSubImage3DARB(yeah* arg5032) {
  yeah* here5033 = arg5032;
  yeah* harg5034 = hcar(here5033);
  GLenum anonp303 = (GLenum)getint(harg5034);
  here5033 = hcdr(here5033);
  yeah* harg5035 = hcar(here5033);
  GLint anonp304 = (GLint)getint(harg5035);
  here5033 = hcdr(here5033);
  yeah* harg5036 = hcar(here5033);
  GLint anonp305 = (GLint)getint(harg5036);
  here5033 = hcdr(here5033);
  yeah* harg5037 = hcar(here5033);
  GLint anonp306 = (GLint)getint(harg5037);
  here5033 = hcdr(here5033);
  yeah* harg5038 = hcar(here5033);
  GLint anonp307 = (GLint)getint(harg5038);
  here5033 = hcdr(here5033);
  yeah* harg5039 = hcar(here5033);
  GLsizei anonp308 = (GLsizei)getint(harg5039);
  here5033 = hcdr(here5033);
  yeah* harg5040 = hcar(here5033);
  GLsizei anonp309 = (GLsizei)getint(harg5040);
  here5033 = hcdr(here5033);
  yeah* harg5041 = hcar(here5033);
  GLsizei anonp310 = (GLsizei)getint(harg5041);
  here5033 = hcdr(here5033);
  yeah* harg5042 = hcar(here5033);
  GLenum anonp311 = (GLenum)getint(harg5042);
  here5033 = hcdr(here5033);
  yeah* harg5043 = hcar(here5033);
  GLsizei anonp312 = (GLsizei)getint(harg5043);
  here5033 = hcdr(here5033);
  yeah* harg5044 = hcar(here5033);
  const GLvoid* anonp313 = (const GLvoid*)opaqueval(harg5044);
  here5033 = hcdr(here5033);
  A(isnil(here5033));
  glCompressedTexSubImage3DARB(anonp303, anonp304, anonp305, anonp306, anonp307, anonp308, anonp309, anonp310, anonp311, anonp312, anonp313);
  return Nil;
}
yeah* foop_glCompressedTexImage1DARB(yeah* arg5045) {
  yeah* here5046 = arg5045;
  yeah* harg5047 = hcar(here5046);
  GLenum anonp314 = (GLenum)getint(harg5047);
  here5046 = hcdr(here5046);
  yeah* harg5048 = hcar(here5046);
  GLint anonp315 = (GLint)getint(harg5048);
  here5046 = hcdr(here5046);
  yeah* harg5049 = hcar(here5046);
  GLenum anonp316 = (GLenum)getint(harg5049);
  here5046 = hcdr(here5046);
  yeah* harg5050 = hcar(here5046);
  GLsizei anonp317 = (GLsizei)getint(harg5050);
  here5046 = hcdr(here5046);
  yeah* harg5051 = hcar(here5046);
  GLint anonp318 = (GLint)getint(harg5051);
  here5046 = hcdr(here5046);
  yeah* harg5052 = hcar(here5046);
  GLsizei anonp319 = (GLsizei)getint(harg5052);
  here5046 = hcdr(here5046);
  yeah* harg5053 = hcar(here5046);
  const GLvoid* anonp320 = (const GLvoid*)opaqueval(harg5053);
  here5046 = hcdr(here5046);
  A(isnil(here5046));
  glCompressedTexImage1DARB(anonp314, anonp315, anonp316, anonp317, anonp318, anonp319, anonp320);
  return Nil;
}
yeah* foop_glCompressedTexImage2DARB(yeah* arg5054) {
  yeah* here5055 = arg5054;
  yeah* harg5056 = hcar(here5055);
  GLenum anonp321 = (GLenum)getint(harg5056);
  here5055 = hcdr(here5055);
  yeah* harg5057 = hcar(here5055);
  GLint anonp322 = (GLint)getint(harg5057);
  here5055 = hcdr(here5055);
  yeah* harg5058 = hcar(here5055);
  GLenum anonp323 = (GLenum)getint(harg5058);
  here5055 = hcdr(here5055);
  yeah* harg5059 = hcar(here5055);
  GLsizei anonp324 = (GLsizei)getint(harg5059);
  here5055 = hcdr(here5055);
  yeah* harg5060 = hcar(here5055);
  GLsizei anonp325 = (GLsizei)getint(harg5060);
  here5055 = hcdr(here5055);
  yeah* harg5061 = hcar(here5055);
  GLint anonp326 = (GLint)getint(harg5061);
  here5055 = hcdr(here5055);
  yeah* harg5062 = hcar(here5055);
  GLsizei anonp327 = (GLsizei)getint(harg5062);
  here5055 = hcdr(here5055);
  yeah* harg5063 = hcar(here5055);
  const GLvoid* anonp328 = (const GLvoid*)opaqueval(harg5063);
  here5055 = hcdr(here5055);
  A(isnil(here5055));
  glCompressedTexImage2DARB(anonp321, anonp322, anonp323, anonp324, anonp325, anonp326, anonp327, anonp328);
  return Nil;
}
yeah* foop_glCompressedTexImage3DARB(yeah* arg5064) {
  yeah* here5065 = arg5064;
  yeah* harg5066 = hcar(here5065);
  GLenum anonp329 = (GLenum)getint(harg5066);
  here5065 = hcdr(here5065);
  yeah* harg5067 = hcar(here5065);
  GLint anonp330 = (GLint)getint(harg5067);
  here5065 = hcdr(here5065);
  yeah* harg5068 = hcar(here5065);
  GLenum anonp331 = (GLenum)getint(harg5068);
  here5065 = hcdr(here5065);
  yeah* harg5069 = hcar(here5065);
  GLsizei anonp332 = (GLsizei)getint(harg5069);
  here5065 = hcdr(here5065);
  yeah* harg5070 = hcar(here5065);
  GLsizei anonp333 = (GLsizei)getint(harg5070);
  here5065 = hcdr(here5065);
  yeah* harg5071 = hcar(here5065);
  GLsizei anonp334 = (GLsizei)getint(harg5071);
  here5065 = hcdr(here5065);
  yeah* harg5072 = hcar(here5065);
  GLint anonp335 = (GLint)getint(harg5072);
  here5065 = hcdr(here5065);
  yeah* harg5073 = hcar(here5065);
  GLsizei anonp336 = (GLsizei)getint(harg5073);
  here5065 = hcdr(here5065);
  yeah* harg5074 = hcar(here5065);
  const GLvoid* anonp337 = (const GLvoid*)opaqueval(harg5074);
  here5065 = hcdr(here5065);
  A(isnil(here5065));
  glCompressedTexImage3DARB(anonp329, anonp330, anonp331, anonp332, anonp333, anonp334, anonp335, anonp336, anonp337);
  return Nil;
}
yeah* foop_glSamplePassARB(yeah* arg5075) {
  yeah* here5076 = arg5075;
  yeah* harg5077 = hcar(here5076);
  GLenum anonp338 = (GLenum)getint(harg5077);
  here5076 = hcdr(here5076);
  A(isnil(here5076));
  glSamplePassARB(anonp338);
  return Nil;
}
yeah* foop_glSampleCoverageARB(yeah* arg5078) {
  yeah* here5079 = arg5078;
  yeah* harg5080 = hcar(here5079);
  GLclampf anonp339 = (GLclampf)getfloatcvt(harg5080);
  here5079 = hcdr(here5079);
  yeah* harg5081 = hcar(here5079);
  int anonp340 = (int)getint(harg5081);
  here5079 = hcdr(here5079);
  A(isnil(here5079));
  glSampleCoverageARB(anonp339, anonp340);
  return Nil;
}
yeah* foop_glMultTransposeMatrixdARB(yeah* arg5082) {
  yeah* here5083 = arg5082;
  yeah* harg5084 = hcar(here5083);
  const GLdouble* anonp341 = (const GLdouble*)opaqueval(harg5084);
  here5083 = hcdr(here5083);
  A(isnil(here5083));
  glMultTransposeMatrixdARB(anonp341);
  return Nil;
}
yeah* foop_glMultTransposeMatrixfARB(yeah* arg5085) {
  yeah* here5086 = arg5085;
  yeah* harg5087 = hcar(here5086);
  const GLfloat* anonp342 = (const GLfloat*)opaqueval(harg5087);
  here5086 = hcdr(here5086);
  A(isnil(here5086));
  glMultTransposeMatrixfARB(anonp342);
  return Nil;
}
yeah* foop_glLoadTransposeMatrixdARB(yeah* arg5088) {
  yeah* here5089 = arg5088;
  yeah* harg5090 = hcar(here5089);
  const GLdouble* anonp343 = (const GLdouble*)opaqueval(harg5090);
  here5089 = hcdr(here5089);
  A(isnil(here5089));
  glLoadTransposeMatrixdARB(anonp343);
  return Nil;
}
yeah* foop_glLoadTransposeMatrixfARB(yeah* arg5091) {
  yeah* here5092 = arg5091;
  yeah* harg5093 = hcar(here5092);
  const GLfloat* anonp344 = (const GLfloat*)opaqueval(harg5093);
  here5092 = hcdr(here5092);
  A(isnil(here5092));
  glLoadTransposeMatrixfARB(anonp344);
  return Nil;
}
yeah* foop_glMultiTexCoord4svARB(yeah* arg5094) {
  yeah* here5095 = arg5094;
  yeah* harg5096 = hcar(here5095);
  GLenum anonp345 = (GLenum)getint(harg5096);
  here5095 = hcdr(here5095);
  yeah* harg5097 = hcar(here5095);
  const GLshort* anonp346 = (const GLshort*)opaqueval(harg5097);
  here5095 = hcdr(here5095);
  A(isnil(here5095));
  glMultiTexCoord4svARB(anonp345, anonp346);
  return Nil;
}
yeah* foop_glMultiTexCoord4sARB(yeah* arg5098) {
  yeah* here5099 = arg5098;
  yeah* harg5100 = hcar(here5099);
  GLenum anonp347 = (GLenum)getint(harg5100);
  here5099 = hcdr(here5099);
  yeah* harg5101 = hcar(here5099);
  int anonp348 = (int)getint(harg5101);
  here5099 = hcdr(here5099);
  yeah* harg5102 = hcar(here5099);
  int anonp349 = (int)getint(harg5102);
  here5099 = hcdr(here5099);
  yeah* harg5103 = hcar(here5099);
  int anonp350 = (int)getint(harg5103);
  here5099 = hcdr(here5099);
  yeah* harg5104 = hcar(here5099);
  int anonp351 = (int)getint(harg5104);
  here5099 = hcdr(here5099);
  A(isnil(here5099));
  glMultiTexCoord4sARB(anonp347, anonp348, anonp349, anonp350, anonp351);
  return Nil;
}
yeah* foop_glMultiTexCoord4ivARB(yeah* arg5105) {
  yeah* here5106 = arg5105;
  yeah* harg5107 = hcar(here5106);
  GLenum anonp352 = (GLenum)getint(harg5107);
  here5106 = hcdr(here5106);
  yeah* harg5108 = hcar(here5106);
  const GLint* anonp353 = (const GLint*)opaqueval(harg5108);
  here5106 = hcdr(here5106);
  A(isnil(here5106));
  glMultiTexCoord4ivARB(anonp352, anonp353);
  return Nil;
}
yeah* foop_glMultiTexCoord4iARB(yeah* arg5109) {
  yeah* here5110 = arg5109;
  yeah* harg5111 = hcar(here5110);
  GLenum anonp354 = (GLenum)getint(harg5111);
  here5110 = hcdr(here5110);
  yeah* harg5112 = hcar(here5110);
  GLint anonp355 = (GLint)getint(harg5112);
  here5110 = hcdr(here5110);
  yeah* harg5113 = hcar(here5110);
  GLint anonp356 = (GLint)getint(harg5113);
  here5110 = hcdr(here5110);
  yeah* harg5114 = hcar(here5110);
  GLint anonp357 = (GLint)getint(harg5114);
  here5110 = hcdr(here5110);
  yeah* harg5115 = hcar(here5110);
  GLint anonp358 = (GLint)getint(harg5115);
  here5110 = hcdr(here5110);
  A(isnil(here5110));
  glMultiTexCoord4iARB(anonp354, anonp355, anonp356, anonp357, anonp358);
  return Nil;
}
yeah* foop_glMultiTexCoord4fvARB(yeah* arg5116) {
  yeah* here5117 = arg5116;
  yeah* harg5118 = hcar(here5117);
  GLenum anonp359 = (GLenum)getint(harg5118);
  here5117 = hcdr(here5117);
  yeah* harg5119 = hcar(here5117);
  const GLfloat* anonp360 = (const GLfloat*)opaqueval(harg5119);
  here5117 = hcdr(here5117);
  A(isnil(here5117));
  glMultiTexCoord4fvARB(anonp359, anonp360);
  return Nil;
}
yeah* foop_glMultiTexCoord4fARB(yeah* arg5120) {
  yeah* here5121 = arg5120;
  yeah* harg5122 = hcar(here5121);
  GLenum anonp361 = (GLenum)getint(harg5122);
  here5121 = hcdr(here5121);
  yeah* harg5123 = hcar(here5121);
  GLfloat anonp362 = (GLfloat)getfloatcvt(harg5123);
  here5121 = hcdr(here5121);
  yeah* harg5124 = hcar(here5121);
  GLfloat anonp363 = (GLfloat)getfloatcvt(harg5124);
  here5121 = hcdr(here5121);
  yeah* harg5125 = hcar(here5121);
  GLfloat anonp364 = (GLfloat)getfloatcvt(harg5125);
  here5121 = hcdr(here5121);
  yeah* harg5126 = hcar(here5121);
  GLfloat anonp365 = (GLfloat)getfloatcvt(harg5126);
  here5121 = hcdr(here5121);
  A(isnil(here5121));
  glMultiTexCoord4fARB(anonp361, anonp362, anonp363, anonp364, anonp365);
  return Nil;
}
yeah* foop_glMultiTexCoord4dvARB(yeah* arg5127) {
  yeah* here5128 = arg5127;
  yeah* harg5129 = hcar(here5128);
  GLenum anonp366 = (GLenum)getint(harg5129);
  here5128 = hcdr(here5128);
  yeah* harg5130 = hcar(here5128);
  const GLdouble* anonp367 = (const GLdouble*)opaqueval(harg5130);
  here5128 = hcdr(here5128);
  A(isnil(here5128));
  glMultiTexCoord4dvARB(anonp366, anonp367);
  return Nil;
}
yeah* foop_glMultiTexCoord4dARB(yeah* arg5131) {
  yeah* here5132 = arg5131;
  yeah* harg5133 = hcar(here5132);
  GLenum anonp368 = (GLenum)getint(harg5133);
  here5132 = hcdr(here5132);
  yeah* harg5134 = hcar(here5132);
  GLdouble anonp369 = (GLdouble)getfloatcvt(harg5134);
  here5132 = hcdr(here5132);
  yeah* harg5135 = hcar(here5132);
  GLdouble anonp370 = (GLdouble)getfloatcvt(harg5135);
  here5132 = hcdr(here5132);
  yeah* harg5136 = hcar(here5132);
  GLdouble anonp371 = (GLdouble)getfloatcvt(harg5136);
  here5132 = hcdr(here5132);
  yeah* harg5137 = hcar(here5132);
  GLdouble anonp372 = (GLdouble)getfloatcvt(harg5137);
  here5132 = hcdr(here5132);
  A(isnil(here5132));
  glMultiTexCoord4dARB(anonp368, anonp369, anonp370, anonp371, anonp372);
  return Nil;
}
yeah* foop_glMultiTexCoord3svARB(yeah* arg5138) {
  yeah* here5139 = arg5138;
  yeah* harg5140 = hcar(here5139);
  GLenum anonp373 = (GLenum)getint(harg5140);
  here5139 = hcdr(here5139);
  yeah* harg5141 = hcar(here5139);
  const GLshort* anonp374 = (const GLshort*)opaqueval(harg5141);
  here5139 = hcdr(here5139);
  A(isnil(here5139));
  glMultiTexCoord3svARB(anonp373, anonp374);
  return Nil;
}
yeah* foop_glMultiTexCoord3sARB(yeah* arg5142) {
  yeah* here5143 = arg5142;
  yeah* harg5144 = hcar(here5143);
  GLenum anonp375 = (GLenum)getint(harg5144);
  here5143 = hcdr(here5143);
  yeah* harg5145 = hcar(here5143);
  int anonp376 = (int)getint(harg5145);
  here5143 = hcdr(here5143);
  yeah* harg5146 = hcar(here5143);
  int anonp377 = (int)getint(harg5146);
  here5143 = hcdr(here5143);
  yeah* harg5147 = hcar(here5143);
  int anonp378 = (int)getint(harg5147);
  here5143 = hcdr(here5143);
  A(isnil(here5143));
  glMultiTexCoord3sARB(anonp375, anonp376, anonp377, anonp378);
  return Nil;
}
yeah* foop_glMultiTexCoord3ivARB(yeah* arg5148) {
  yeah* here5149 = arg5148;
  yeah* harg5150 = hcar(here5149);
  GLenum anonp379 = (GLenum)getint(harg5150);
  here5149 = hcdr(here5149);
  yeah* harg5151 = hcar(here5149);
  const GLint* anonp380 = (const GLint*)opaqueval(harg5151);
  here5149 = hcdr(here5149);
  A(isnil(here5149));
  glMultiTexCoord3ivARB(anonp379, anonp380);
  return Nil;
}
yeah* foop_glMultiTexCoord3iARB(yeah* arg5152) {
  yeah* here5153 = arg5152;
  yeah* harg5154 = hcar(here5153);
  GLenum anonp381 = (GLenum)getint(harg5154);
  here5153 = hcdr(here5153);
  yeah* harg5155 = hcar(here5153);
  GLint anonp382 = (GLint)getint(harg5155);
  here5153 = hcdr(here5153);
  yeah* harg5156 = hcar(here5153);
  GLint anonp383 = (GLint)getint(harg5156);
  here5153 = hcdr(here5153);
  yeah* harg5157 = hcar(here5153);
  GLint anonp384 = (GLint)getint(harg5157);
  here5153 = hcdr(here5153);
  A(isnil(here5153));
  glMultiTexCoord3iARB(anonp381, anonp382, anonp383, anonp384);
  return Nil;
}
yeah* foop_glMultiTexCoord3fvARB(yeah* arg5158) {
  yeah* here5159 = arg5158;
  yeah* harg5160 = hcar(here5159);
  GLenum anonp385 = (GLenum)getint(harg5160);
  here5159 = hcdr(here5159);
  yeah* harg5161 = hcar(here5159);
  const GLfloat* anonp386 = (const GLfloat*)opaqueval(harg5161);
  here5159 = hcdr(here5159);
  A(isnil(here5159));
  glMultiTexCoord3fvARB(anonp385, anonp386);
  return Nil;
}
yeah* foop_glMultiTexCoord3fARB(yeah* arg5162) {
  yeah* here5163 = arg5162;
  yeah* harg5164 = hcar(here5163);
  GLenum anonp387 = (GLenum)getint(harg5164);
  here5163 = hcdr(here5163);
  yeah* harg5165 = hcar(here5163);
  GLfloat anonp388 = (GLfloat)getfloatcvt(harg5165);
  here5163 = hcdr(here5163);
  yeah* harg5166 = hcar(here5163);
  GLfloat anonp389 = (GLfloat)getfloatcvt(harg5166);
  here5163 = hcdr(here5163);
  yeah* harg5167 = hcar(here5163);
  GLfloat anonp390 = (GLfloat)getfloatcvt(harg5167);
  here5163 = hcdr(here5163);
  A(isnil(here5163));
  glMultiTexCoord3fARB(anonp387, anonp388, anonp389, anonp390);
  return Nil;
}
yeah* foop_glMultiTexCoord3dvARB(yeah* arg5168) {
  yeah* here5169 = arg5168;
  yeah* harg5170 = hcar(here5169);
  GLenum anonp391 = (GLenum)getint(harg5170);
  here5169 = hcdr(here5169);
  yeah* harg5171 = hcar(here5169);
  const GLdouble* anonp392 = (const GLdouble*)opaqueval(harg5171);
  here5169 = hcdr(here5169);
  A(isnil(here5169));
  glMultiTexCoord3dvARB(anonp391, anonp392);
  return Nil;
}
yeah* foop_glMultiTexCoord3dARB(yeah* arg5172) {
  yeah* here5173 = arg5172;
  yeah* harg5174 = hcar(here5173);
  GLenum anonp393 = (GLenum)getint(harg5174);
  here5173 = hcdr(here5173);
  yeah* harg5175 = hcar(here5173);
  GLdouble anonp394 = (GLdouble)getfloatcvt(harg5175);
  here5173 = hcdr(here5173);
  yeah* harg5176 = hcar(here5173);
  GLdouble anonp395 = (GLdouble)getfloatcvt(harg5176);
  here5173 = hcdr(here5173);
  yeah* harg5177 = hcar(here5173);
  GLdouble anonp396 = (GLdouble)getfloatcvt(harg5177);
  here5173 = hcdr(here5173);
  A(isnil(here5173));
  glMultiTexCoord3dARB(anonp393, anonp394, anonp395, anonp396);
  return Nil;
}
yeah* foop_glMultiTexCoord2svARB(yeah* arg5178) {
  yeah* here5179 = arg5178;
  yeah* harg5180 = hcar(here5179);
  GLenum anonp397 = (GLenum)getint(harg5180);
  here5179 = hcdr(here5179);
  yeah* harg5181 = hcar(here5179);
  const GLshort* anonp398 = (const GLshort*)opaqueval(harg5181);
  here5179 = hcdr(here5179);
  A(isnil(here5179));
  glMultiTexCoord2svARB(anonp397, anonp398);
  return Nil;
}
yeah* foop_glMultiTexCoord2sARB(yeah* arg5182) {
  yeah* here5183 = arg5182;
  yeah* harg5184 = hcar(here5183);
  GLenum anonp399 = (GLenum)getint(harg5184);
  here5183 = hcdr(here5183);
  yeah* harg5185 = hcar(here5183);
  int anonp400 = (int)getint(harg5185);
  here5183 = hcdr(here5183);
  yeah* harg5186 = hcar(here5183);
  int anonp401 = (int)getint(harg5186);
  here5183 = hcdr(here5183);
  A(isnil(here5183));
  glMultiTexCoord2sARB(anonp399, anonp400, anonp401);
  return Nil;
}
yeah* foop_glMultiTexCoord2ivARB(yeah* arg5187) {
  yeah* here5188 = arg5187;
  yeah* harg5189 = hcar(here5188);
  GLenum anonp402 = (GLenum)getint(harg5189);
  here5188 = hcdr(here5188);
  yeah* harg5190 = hcar(here5188);
  const GLint* anonp403 = (const GLint*)opaqueval(harg5190);
  here5188 = hcdr(here5188);
  A(isnil(here5188));
  glMultiTexCoord2ivARB(anonp402, anonp403);
  return Nil;
}
yeah* foop_glMultiTexCoord2iARB(yeah* arg5191) {
  yeah* here5192 = arg5191;
  yeah* harg5193 = hcar(here5192);
  GLenum anonp404 = (GLenum)getint(harg5193);
  here5192 = hcdr(here5192);
  yeah* harg5194 = hcar(here5192);
  GLint anonp405 = (GLint)getint(harg5194);
  here5192 = hcdr(here5192);
  yeah* harg5195 = hcar(here5192);
  GLint anonp406 = (GLint)getint(harg5195);
  here5192 = hcdr(here5192);
  A(isnil(here5192));
  glMultiTexCoord2iARB(anonp404, anonp405, anonp406);
  return Nil;
}
yeah* foop_glMultiTexCoord2fvARB(yeah* arg5196) {
  yeah* here5197 = arg5196;
  yeah* harg5198 = hcar(here5197);
  GLenum anonp407 = (GLenum)getint(harg5198);
  here5197 = hcdr(here5197);
  yeah* harg5199 = hcar(here5197);
  const GLfloat* anonp408 = (const GLfloat*)opaqueval(harg5199);
  here5197 = hcdr(here5197);
  A(isnil(here5197));
  glMultiTexCoord2fvARB(anonp407, anonp408);
  return Nil;
}
yeah* foop_glMultiTexCoord2fARB(yeah* arg5200) {
  yeah* here5201 = arg5200;
  yeah* harg5202 = hcar(here5201);
  GLenum anonp409 = (GLenum)getint(harg5202);
  here5201 = hcdr(here5201);
  yeah* harg5203 = hcar(here5201);
  GLfloat anonp410 = (GLfloat)getfloatcvt(harg5203);
  here5201 = hcdr(here5201);
  yeah* harg5204 = hcar(here5201);
  GLfloat anonp411 = (GLfloat)getfloatcvt(harg5204);
  here5201 = hcdr(here5201);
  A(isnil(here5201));
  glMultiTexCoord2fARB(anonp409, anonp410, anonp411);
  return Nil;
}
yeah* foop_glMultiTexCoord2dvARB(yeah* arg5205) {
  yeah* here5206 = arg5205;
  yeah* harg5207 = hcar(here5206);
  GLenum anonp412 = (GLenum)getint(harg5207);
  here5206 = hcdr(here5206);
  yeah* harg5208 = hcar(here5206);
  const GLdouble* anonp413 = (const GLdouble*)opaqueval(harg5208);
  here5206 = hcdr(here5206);
  A(isnil(here5206));
  glMultiTexCoord2dvARB(anonp412, anonp413);
  return Nil;
}
yeah* foop_glMultiTexCoord2dARB(yeah* arg5209) {
  yeah* here5210 = arg5209;
  yeah* harg5211 = hcar(here5210);
  GLenum anonp414 = (GLenum)getint(harg5211);
  here5210 = hcdr(here5210);
  yeah* harg5212 = hcar(here5210);
  GLdouble anonp415 = (GLdouble)getfloatcvt(harg5212);
  here5210 = hcdr(here5210);
  yeah* harg5213 = hcar(here5210);
  GLdouble anonp416 = (GLdouble)getfloatcvt(harg5213);
  here5210 = hcdr(here5210);
  A(isnil(here5210));
  glMultiTexCoord2dARB(anonp414, anonp415, anonp416);
  return Nil;
}
yeah* foop_glMultiTexCoord1svARB(yeah* arg5214) {
  yeah* here5215 = arg5214;
  yeah* harg5216 = hcar(here5215);
  GLenum anonp417 = (GLenum)getint(harg5216);
  here5215 = hcdr(here5215);
  yeah* harg5217 = hcar(here5215);
  const GLshort* anonp418 = (const GLshort*)opaqueval(harg5217);
  here5215 = hcdr(here5215);
  A(isnil(here5215));
  glMultiTexCoord1svARB(anonp417, anonp418);
  return Nil;
}
yeah* foop_glMultiTexCoord1sARB(yeah* arg5218) {
  yeah* here5219 = arg5218;
  yeah* harg5220 = hcar(here5219);
  GLenum anonp419 = (GLenum)getint(harg5220);
  here5219 = hcdr(here5219);
  yeah* harg5221 = hcar(here5219);
  int anonp420 = (int)getint(harg5221);
  here5219 = hcdr(here5219);
  A(isnil(here5219));
  glMultiTexCoord1sARB(anonp419, anonp420);
  return Nil;
}
yeah* foop_glMultiTexCoord1ivARB(yeah* arg5222) {
  yeah* here5223 = arg5222;
  yeah* harg5224 = hcar(here5223);
  GLenum anonp421 = (GLenum)getint(harg5224);
  here5223 = hcdr(here5223);
  yeah* harg5225 = hcar(here5223);
  const GLint* anonp422 = (const GLint*)opaqueval(harg5225);
  here5223 = hcdr(here5223);
  A(isnil(here5223));
  glMultiTexCoord1ivARB(anonp421, anonp422);
  return Nil;
}
yeah* foop_glMultiTexCoord1iARB(yeah* arg5226) {
  yeah* here5227 = arg5226;
  yeah* harg5228 = hcar(here5227);
  GLenum anonp423 = (GLenum)getint(harg5228);
  here5227 = hcdr(here5227);
  yeah* harg5229 = hcar(here5227);
  GLint anonp424 = (GLint)getint(harg5229);
  here5227 = hcdr(here5227);
  A(isnil(here5227));
  glMultiTexCoord1iARB(anonp423, anonp424);
  return Nil;
}
yeah* foop_glMultiTexCoord1fvARB(yeah* arg5230) {
  yeah* here5231 = arg5230;
  yeah* harg5232 = hcar(here5231);
  GLenum anonp425 = (GLenum)getint(harg5232);
  here5231 = hcdr(here5231);
  yeah* harg5233 = hcar(here5231);
  const GLfloat* anonp426 = (const GLfloat*)opaqueval(harg5233);
  here5231 = hcdr(here5231);
  A(isnil(here5231));
  glMultiTexCoord1fvARB(anonp425, anonp426);
  return Nil;
}
yeah* foop_glMultiTexCoord1fARB(yeah* arg5234) {
  yeah* here5235 = arg5234;
  yeah* harg5236 = hcar(here5235);
  GLenum anonp427 = (GLenum)getint(harg5236);
  here5235 = hcdr(here5235);
  yeah* harg5237 = hcar(here5235);
  GLfloat anonp428 = (GLfloat)getfloatcvt(harg5237);
  here5235 = hcdr(here5235);
  A(isnil(here5235));
  glMultiTexCoord1fARB(anonp427, anonp428);
  return Nil;
}
yeah* foop_glMultiTexCoord1dvARB(yeah* arg5238) {
  yeah* here5239 = arg5238;
  yeah* harg5240 = hcar(here5239);
  GLenum anonp429 = (GLenum)getint(harg5240);
  here5239 = hcdr(here5239);
  yeah* harg5241 = hcar(here5239);
  const GLdouble* anonp430 = (const GLdouble*)opaqueval(harg5241);
  here5239 = hcdr(here5239);
  A(isnil(here5239));
  glMultiTexCoord1dvARB(anonp429, anonp430);
  return Nil;
}
yeah* foop_glMultiTexCoord1dARB(yeah* arg5242) {
  yeah* here5243 = arg5242;
  yeah* harg5244 = hcar(here5243);
  GLenum anonp431 = (GLenum)getint(harg5244);
  here5243 = hcdr(here5243);
  yeah* harg5245 = hcar(here5243);
  GLdouble anonp432 = (GLdouble)getfloatcvt(harg5245);
  here5243 = hcdr(here5243);
  A(isnil(here5243));
  glMultiTexCoord1dARB(anonp431, anonp432);
  return Nil;
}
yeah* foop_glClientActiveTextureARB(yeah* arg5246) {
  yeah* here5247 = arg5246;
  yeah* harg5248 = hcar(here5247);
  GLenum anonp433 = (GLenum)getint(harg5248);
  here5247 = hcdr(here5247);
  A(isnil(here5247));
  glClientActiveTextureARB(anonp433);
  return Nil;
}
yeah* foop_glActiveTextureARB(yeah* arg5249) {
  yeah* here5250 = arg5249;
  yeah* harg5251 = hcar(here5250);
  GLenum anonp434 = (GLenum)getint(harg5251);
  here5250 = hcdr(here5250);
  A(isnil(here5250));
  glActiveTextureARB(anonp434);
  return Nil;
}
void fbo_includer_impl_register() {
  register_command("glutGameModeGet", &foop_glutGameModeGet);
  register_command("glutLeaveGameMode", &foop_glutLeaveGameMode);
  register_command("glutEnterGameMode", &foop_glutEnterGameMode);
  register_command("glutGameModeString", &foop_glutGameModeString);
  register_command("glutForceJoystickFunc", &foop_glutForceJoystickFunc);
  register_command("glutSetKeyRepeat", &foop_glutSetKeyRepeat);
  register_command("glutIgnoreKeyRepeat", &foop_glutIgnoreKeyRepeat);
  register_command("glutReportErrors", &foop_glutReportErrors);
  register_command("glutVideoPan", &foop_glutVideoPan);
  register_command("glutVideoResize", &foop_glutVideoResize);
  register_command("glutStopVideoResizing", &foop_glutStopVideoResizing);
  register_command("glutSetupVideoResizing", &foop_glutSetupVideoResizing);
  register_command("glutVideoResizeGet", &foop_glutVideoResizeGet);
  register_command("glutSolidIcosahedron", &foop_glutSolidIcosahedron);
  register_command("glutWireIcosahedron", &foop_glutWireIcosahedron);
  register_command("glutSolidTetrahedron", &foop_glutSolidTetrahedron);
  register_command("glutWireTetrahedron", &foop_glutWireTetrahedron);
  register_command("glutSolidOctahedron", &foop_glutSolidOctahedron);
  register_command("glutWireOctahedron", &foop_glutWireOctahedron);
  register_command("glutSolidTeapot", &foop_glutSolidTeapot);
  register_command("glutWireTeapot", &foop_glutWireTeapot);
  register_command("glutSolidDodecahedron", &foop_glutSolidDodecahedron);
  register_command("glutWireDodecahedron", &foop_glutWireDodecahedron);
  register_command("glutSolidTorus", &foop_glutSolidTorus);
  register_command("glutWireTorus", &foop_glutWireTorus);
  register_command("glutSolidCube", &foop_glutSolidCube);
  register_command("glutWireCube", &foop_glutWireCube);
  register_command("glutSolidCone", &foop_glutSolidCone);
  register_command("glutWireCone", &foop_glutWireCone);
  register_command("glutSolidSphere", &foop_glutSolidSphere);
  register_command("glutWireSphere", &foop_glutWireSphere);
  register_command("glutStrokeLength", &foop_glutStrokeLength);
  register_command("glutBitmapLength", &foop_glutBitmapLength);
  register_command("glutStrokeWidth", &foop_glutStrokeWidth);
  register_command("glutStrokeCharacter", &foop_glutStrokeCharacter);
  register_command("glutBitmapWidth", &foop_glutBitmapWidth);
  register_command("glutBitmapCharacter", &foop_glutBitmapCharacter);
  register_command("glutGetProcAddress", &foop_glutGetProcAddress);
  register_command("glutLayerGet", &foop_glutLayerGet);
  register_command("glutGetModifiers", &foop_glutGetModifiers);
  register_command("glutExtensionSupported", &foop_glutExtensionSupported);
  register_command("glutDeviceGet", &foop_glutDeviceGet);
  register_command("glutGet", &foop_glutGet);
  register_command("glutCopyColormap", &foop_glutCopyColormap);
  register_command("glutGetColor", &foop_glutGetColor);
  register_command("glutSetColor", &foop_glutSetColor);
  register_command("glutJoystickFunc", &foop_glutJoystickFunc);
  register_command("glutSpecialUpFunc", &foop_glutSpecialUpFunc);
  register_command("glutKeyboardUpFunc", &foop_glutKeyboardUpFunc);
  register_command("glutWindowStatusFunc", &foop_glutWindowStatusFunc);
  register_command("glutOverlayDisplayFunc", &foop_glutOverlayDisplayFunc);
  register_command("glutMenuStatusFunc", &foop_glutMenuStatusFunc);
  register_command("glutTabletButtonFunc", &foop_glutTabletButtonFunc);
  register_command("glutTabletMotionFunc", &foop_glutTabletMotionFunc);
  register_command("glutDialsFunc", &foop_glutDialsFunc);
  register_command("glutButtonBoxFunc", &foop_glutButtonBoxFunc);
  register_command("glutSpaceballButtonFunc", &foop_glutSpaceballButtonFunc);
  register_command("glutSpaceballRotateFunc", &foop_glutSpaceballRotateFunc);
  register_command("glutSpaceballMotionFunc", &foop_glutSpaceballMotionFunc);
  register_command("glutSpecialFunc", &foop_glutSpecialFunc);
  register_command("glutMenuStateFunc", &foop_glutMenuStateFunc);
  register_command("glutTimerFunc", &foop_glutTimerFunc);
  register_command("glutIdleFunc", &foop_glutIdleFunc);
  register_command("glutVisibilityFunc", &foop_glutVisibilityFunc);
  register_command("glutEntryFunc", &foop_glutEntryFunc);
  register_command("glutPassiveMotionFunc", &foop_glutPassiveMotionFunc);
  register_command("glutMotionFunc", &foop_glutMotionFunc);
  register_command("glutMouseFunc", &foop_glutMouseFunc);
  register_command("glutKeyboardFunc", &foop_glutKeyboardFunc);
  register_command("glutReshapeFunc", &foop_glutReshapeFunc);
  register_command("glutDisplayFunc", &foop_glutDisplayFunc);
  register_command("glutDetachMenu", &foop_glutDetachMenu);
  register_command("glutAttachMenu", &foop_glutAttachMenu);
  register_command("glutRemoveMenuItem", &foop_glutRemoveMenuItem);
  register_command("glutChangeToSubMenu", &foop_glutChangeToSubMenu);
  register_command("glutChangeToMenuEntry", &foop_glutChangeToMenuEntry);
  register_command("glutAddSubMenu", &foop_glutAddSubMenu);
  register_command("glutAddMenuEntry", &foop_glutAddMenuEntry);
  register_command("glutSetMenu", &foop_glutSetMenu);
  register_command("glutGetMenu", &foop_glutGetMenu);
  register_command("glutDestroyMenu", &foop_glutDestroyMenu);
  register_command("glutCreateMenu", &foop_glutCreateMenu);
  register_command("glutHideOverlay", &foop_glutHideOverlay);
  register_command("glutShowOverlay", &foop_glutShowOverlay);
  register_command("glutPostWindowOverlayRedisplay", &foop_glutPostWindowOverlayRedisplay);
  register_command("glutPostOverlayRedisplay", &foop_glutPostOverlayRedisplay);
  register_command("glutUseLayer", &foop_glutUseLayer);
  register_command("glutRemoveOverlay", &foop_glutRemoveOverlay);
  register_command("glutEstablishOverlay", &foop_glutEstablishOverlay);
  register_command("glutCheckLoop", &foop_glutCheckLoop);
  register_command("glutWMCloseFunc", &foop_glutWMCloseFunc);
  register_command("glutSurfaceTexture", &foop_glutSurfaceTexture);
  register_command("glutWarpPointer", &foop_glutWarpPointer);
  register_command("glutSetCursor", &foop_glutSetCursor);
  register_command("glutFullScreen", &foop_glutFullScreen);
  register_command("glutHideWindow", &foop_glutHideWindow);
  register_command("glutShowWindow", &foop_glutShowWindow);
  register_command("glutIconifyWindow", &foop_glutIconifyWindow);
  register_command("glutPushWindow", &foop_glutPushWindow);
  register_command("glutPopWindow", &foop_glutPopWindow);
  register_command("glutReshapeWindow", &foop_glutReshapeWindow);
  register_command("glutPositionWindow", &foop_glutPositionWindow);
  register_command("glutSetIconTitle", &foop_glutSetIconTitle);
  register_command("glutSetWindowTitle", &foop_glutSetWindowTitle);
  register_command("glutSetWindow", &foop_glutSetWindow);
  register_command("glutGetWindow", &foop_glutGetWindow);
  register_command("glutSwapBuffers", &foop_glutSwapBuffers);
  register_command("glutPostWindowRedisplay", &foop_glutPostWindowRedisplay);
  register_command("glutPostRedisplay", &foop_glutPostRedisplay);
  register_command("glutDestroyWindow", &foop_glutDestroyWindow);
  register_command("glutCreateSubWindow", &foop_glutCreateSubWindow);
  register_command("glutCreateWindow", &foop_glutCreateWindow);
  register_command("glutMainLoop", &foop_glutMainLoop);
  register_command("glutInitWindowSize", &foop_glutInitWindowSize);
  register_command("glutInitWindowPosition", &foop_glutInitWindowPosition);
  register_command("glutInitDisplayString", &foop_glutInitDisplayString);
  register_command("glutInitDisplayMode", &foop_glutInitDisplayMode);
  register_command("glutInit", &foop_glutInit);
  register_command("gluUnProject4", &foop_gluUnProject4);
  register_command("gluUnProject", &foop_gluUnProject);
  register_command("gluTessVertex", &foop_gluTessVertex);
  register_command("gluTessProperty", &foop_gluTessProperty);
  register_command("gluTessNormal", &foop_gluTessNormal);
  register_command("gluTessEndPolygon", &foop_gluTessEndPolygon);
  register_command("gluTessEndContour", &foop_gluTessEndContour);
  register_command("gluTessCallback", &foop_gluTessCallback);
  register_command("gluTessBeginPolygon", &foop_gluTessBeginPolygon);
  register_command("gluTessBeginContour", &foop_gluTessBeginContour);
  register_command("gluSphere", &foop_gluSphere);
  register_command("gluScaleImage", &foop_gluScaleImage);
  register_command("gluQuadricTexture", &foop_gluQuadricTexture);
  register_command("gluQuadricOrientation", &foop_gluQuadricOrientation);
  register_command("gluQuadricNormals", &foop_gluQuadricNormals);
  register_command("gluQuadricDrawStyle", &foop_gluQuadricDrawStyle);
  register_command("gluQuadricCallback", &foop_gluQuadricCallback);
  register_command("gluPwlCurve", &foop_gluPwlCurve);
  register_command("gluProject", &foop_gluProject);
  register_command("gluPickMatrix", &foop_gluPickMatrix);
  register_command("gluPerspective", &foop_gluPerspective);
  register_command("gluPartialDisk", &foop_gluPartialDisk);
  register_command("gluOrtho2D", &foop_gluOrtho2D);
  register_command("gluNurbsSurface", &foop_gluNurbsSurface);
  register_command("gluNurbsProperty", &foop_gluNurbsProperty);
  register_command("gluNurbsCurve", &foop_gluNurbsCurve);
  register_command("gluNurbsCallbackData", &foop_gluNurbsCallbackData);
  register_command("gluNurbsCallback", &foop_gluNurbsCallback);
  register_command("gluNextContour", &foop_gluNextContour);
  register_command("gluNewTess", &foop_gluNewTess);
  register_command("gluNewQuadric", &foop_gluNewQuadric);
  register_command("gluNewNurbsRenderer", &foop_gluNewNurbsRenderer);
  register_command("gluLookAt", &foop_gluLookAt);
  register_command("gluLoadSamplingMatrices", &foop_gluLoadSamplingMatrices);
  register_command("gluGetTessProperty", &foop_gluGetTessProperty);
  register_command("gluGetString", &foop_gluGetString);
  register_command("gluGetNurbsProperty", &foop_gluGetNurbsProperty);
  register_command("gluErrorString", &foop_gluErrorString);
  register_command("gluEndTrim", &foop_gluEndTrim);
  register_command("gluEndSurface", &foop_gluEndSurface);
  register_command("gluEndPolygon", &foop_gluEndPolygon);
  register_command("gluEndCurve", &foop_gluEndCurve);
  register_command("gluDisk", &foop_gluDisk);
  register_command("gluDeleteTess", &foop_gluDeleteTess);
  register_command("gluDeleteQuadric", &foop_gluDeleteQuadric);
  register_command("gluDeleteNurbsRenderer", &foop_gluDeleteNurbsRenderer);
  register_command("gluCylinder", &foop_gluCylinder);
  register_command("gluCheckExtension", &foop_gluCheckExtension);
  register_command("gluBuild3DMipmaps", &foop_gluBuild3DMipmaps);
  register_command("gluBuild3DMipmapLevels", &foop_gluBuild3DMipmapLevels);
  register_command("gluBuild2DMipmaps", &foop_gluBuild2DMipmaps);
  register_command("gluBuild2DMipmapLevels", &foop_gluBuild2DMipmapLevels);
  register_command("gluBuild1DMipmaps", &foop_gluBuild1DMipmaps);
  register_command("gluBuild1DMipmapLevels", &foop_gluBuild1DMipmapLevels);
  register_command("gluBeginTrim", &foop_gluBeginTrim);
  register_command("gluBeginSurface", &foop_gluBeginSurface);
  register_command("gluBeginPolygon", &foop_gluBeginPolygon);
  register_command("gluBeginCurve", &foop_gluBeginCurve);
  register_command("_GLeeEnabled", &foop__GLeeEnabled);
  register_command("_GLeeGetExtStrGL", &foop__GLeeGetExtStrGL);
  register_command("_GLeeGetErrorString", &foop__GLeeGetErrorString);
  register_command("_GLeeForceLink", &foop__GLeeForceLink);
  register_command("_GLeeInit", &foop__GLeeInit);
  register_command("glUniformMatrix4x3fv", &foop_glUniformMatrix4x3fv);
  register_command("glUniformMatrix3x4fv", &foop_glUniformMatrix3x4fv);
  register_command("glUniformMatrix4x2fv", &foop_glUniformMatrix4x2fv);
  register_command("glUniformMatrix2x4fv", &foop_glUniformMatrix2x4fv);
  register_command("glUniformMatrix3x2fv", &foop_glUniformMatrix3x2fv);
  register_command("glUniformMatrix2x3fv", &foop_glUniformMatrix2x3fv);
  register_command("glStencilMaskSeparate", &foop_glStencilMaskSeparate);
  register_command("glStencilOpSeparate", &foop_glStencilOpSeparate);
  register_command("glStencilFuncSeparate", &foop_glStencilFuncSeparate);
  register_command("glGetAttribLocation", &foop_glGetAttribLocation);
  register_command("glGetActiveAttrib", &foop_glGetActiveAttrib);
  register_command("glBindAttribLocation", &foop_glBindAttribLocation);
  register_command("glGetShaderSource", &foop_glGetShaderSource);
  register_command("glGetUniformiv", &foop_glGetUniformiv);
  register_command("glGetUniformfv", &foop_glGetUniformfv);
  register_command("glGetActiveUniform", &foop_glGetActiveUniform);
  register_command("glGetUniformLocation", &foop_glGetUniformLocation);
  register_command("glGetProgramInfoLog", &foop_glGetProgramInfoLog);
  register_command("glGetShaderInfoLog", &foop_glGetShaderInfoLog);
  register_command("glGetAttachedShaders", &foop_glGetAttachedShaders);
  register_command("glGetProgramiv", &foop_glGetProgramiv);
  register_command("glGetShaderiv", &foop_glGetShaderiv);
  register_command("glIsProgram", &foop_glIsProgram);
  register_command("glIsShader", &foop_glIsShader);
  register_command("glUniformMatrix4fv", &foop_glUniformMatrix4fv);
  register_command("glUniformMatrix3fv", &foop_glUniformMatrix3fv);
  register_command("glUniformMatrix2fv", &foop_glUniformMatrix2fv);
  register_command("glUniform4iv", &foop_glUniform4iv);
  register_command("glUniform3iv", &foop_glUniform3iv);
  register_command("glUniform2iv", &foop_glUniform2iv);
  register_command("glUniform1iv", &foop_glUniform1iv);
  register_command("glUniform4fv", &foop_glUniform4fv);
  register_command("glUniform3fv", &foop_glUniform3fv);
  register_command("glUniform2fv", &foop_glUniform2fv);
  register_command("glUniform1fv", &foop_glUniform1fv);
  register_command("glUniform4i", &foop_glUniform4i);
  register_command("glUniform3i", &foop_glUniform3i);
  register_command("glUniform2i", &foop_glUniform2i);
  register_command("glUniform1i", &foop_glUniform1i);
  register_command("glUniform4f", &foop_glUniform4f);
  register_command("glUniform3f", &foop_glUniform3f);
  register_command("glUniform2f", &foop_glUniform2f);
  register_command("glUniform1f", &foop_glUniform1f);
  register_command("glValidateProgram", &foop_glValidateProgram);
  register_command("glDeleteProgram", &foop_glDeleteProgram);
  register_command("glUseProgram", &foop_glUseProgram);
  register_command("glLinkProgram", &foop_glLinkProgram);
  register_command("glAttachShader", &foop_glAttachShader);
  register_command("glCreateProgram", &foop_glCreateProgram);
  register_command("glCompileShader", &foop_glCompileShader);
  register_command("glShaderSource", &foop_glShaderSource);
  register_command("glCreateShader", &foop_glCreateShader);
  register_command("glDetachShader", &foop_glDetachShader);
  register_command("glDeleteShader", &foop_glDeleteShader);
  register_command("glGetVertexAttribPointerv", &foop_glGetVertexAttribPointerv);
  register_command("glGetVertexAttribiv", &foop_glGetVertexAttribiv);
  register_command("glGetVertexAttribfv", &foop_glGetVertexAttribfv);
  register_command("glGetVertexAttribdv", &foop_glGetVertexAttribdv);
  register_command("glDisableVertexAttribArray", &foop_glDisableVertexAttribArray);
  register_command("glEnableVertexAttribArray", &foop_glEnableVertexAttribArray);
  register_command("glVertexAttribPointer", &foop_glVertexAttribPointer);
  register_command("glVertexAttrib4usv", &foop_glVertexAttrib4usv);
  register_command("glVertexAttrib4uiv", &foop_glVertexAttrib4uiv);
  register_command("glVertexAttrib4ubv", &foop_glVertexAttrib4ubv);
  register_command("glVertexAttrib4sv", &foop_glVertexAttrib4sv);
  register_command("glVertexAttrib4s", &foop_glVertexAttrib4s);
  register_command("glVertexAttrib4iv", &foop_glVertexAttrib4iv);
  register_command("glVertexAttrib4fv", &foop_glVertexAttrib4fv);
  register_command("glVertexAttrib4f", &foop_glVertexAttrib4f);
  register_command("glVertexAttrib4dv", &foop_glVertexAttrib4dv);
  register_command("glVertexAttrib4d", &foop_glVertexAttrib4d);
  register_command("glVertexAttrib4bv", &foop_glVertexAttrib4bv);
  register_command("glVertexAttrib4Nusv", &foop_glVertexAttrib4Nusv);
  register_command("glVertexAttrib4Nuiv", &foop_glVertexAttrib4Nuiv);
  register_command("glVertexAttrib4Nubv", &foop_glVertexAttrib4Nubv);
  register_command("glVertexAttrib4Nub", &foop_glVertexAttrib4Nub);
  register_command("glVertexAttrib4Nsv", &foop_glVertexAttrib4Nsv);
  register_command("glVertexAttrib4Niv", &foop_glVertexAttrib4Niv);
  register_command("glVertexAttrib4Nbv", &foop_glVertexAttrib4Nbv);
  register_command("glVertexAttrib3sv", &foop_glVertexAttrib3sv);
  register_command("glVertexAttrib3s", &foop_glVertexAttrib3s);
  register_command("glVertexAttrib3fv", &foop_glVertexAttrib3fv);
  register_command("glVertexAttrib3f", &foop_glVertexAttrib3f);
  register_command("glVertexAttrib3dv", &foop_glVertexAttrib3dv);
  register_command("glVertexAttrib3d", &foop_glVertexAttrib3d);
  register_command("glVertexAttrib2sv", &foop_glVertexAttrib2sv);
  register_command("glVertexAttrib2s", &foop_glVertexAttrib2s);
  register_command("glVertexAttrib2fv", &foop_glVertexAttrib2fv);
  register_command("glVertexAttrib2f", &foop_glVertexAttrib2f);
  register_command("glVertexAttrib2dv", &foop_glVertexAttrib2dv);
  register_command("glVertexAttrib2d", &foop_glVertexAttrib2d);
  register_command("glVertexAttrib1sv", &foop_glVertexAttrib1sv);
  register_command("glVertexAttrib1s", &foop_glVertexAttrib1s);
  register_command("glVertexAttrib1fv", &foop_glVertexAttrib1fv);
  register_command("glVertexAttrib1f", &foop_glVertexAttrib1f);
  register_command("glVertexAttrib1dv", &foop_glVertexAttrib1dv);
  register_command("glVertexAttrib1d", &foop_glVertexAttrib1d);
  register_command("glDrawBuffers", &foop_glDrawBuffers);
  register_command("glGetBufferPointerv", &foop_glGetBufferPointerv);
  register_command("glGetBufferParameteriv", &foop_glGetBufferParameteriv);
  register_command("glUnmapBuffer", &foop_glUnmapBuffer);
  register_command("glMapBuffer", &foop_glMapBuffer);
  register_command("glGetBufferSubData", &foop_glGetBufferSubData);
  register_command("glBufferSubData", &foop_glBufferSubData);
  register_command("glBufferData", &foop_glBufferData);
  register_command("glIsBuffer", &foop_glIsBuffer);
  register_command("glGenBuffers", &foop_glGenBuffers);
  register_command("glDeleteBuffers", &foop_glDeleteBuffers);
  register_command("glBindBuffer", &foop_glBindBuffer);
  register_command("glGetQueryObjectuiv", &foop_glGetQueryObjectuiv);
  register_command("glGetQueryObjectiv", &foop_glGetQueryObjectiv);
  register_command("glGetQueryiv", &foop_glGetQueryiv);
  register_command("glEndQuery", &foop_glEndQuery);
  register_command("glBeginQuery", &foop_glBeginQuery);
  register_command("glIsQuery", &foop_glIsQuery);
  register_command("glDeleteQueries", &foop_glDeleteQueries);
  register_command("glGenQueries", &foop_glGenQueries);
  register_command("glWindowPos3sv", &foop_glWindowPos3sv);
  register_command("glWindowPos3s", &foop_glWindowPos3s);
  register_command("glWindowPos3iv", &foop_glWindowPos3iv);
  register_command("glWindowPos3i", &foop_glWindowPos3i);
  register_command("glWindowPos3fv", &foop_glWindowPos3fv);
  register_command("glWindowPos3f", &foop_glWindowPos3f);
  register_command("glWindowPos3dv", &foop_glWindowPos3dv);
  register_command("glWindowPos3d", &foop_glWindowPos3d);
  register_command("glWindowPos2sv", &foop_glWindowPos2sv);
  register_command("glWindowPos2s", &foop_glWindowPos2s);
  register_command("glWindowPos2iv", &foop_glWindowPos2iv);
  register_command("glWindowPos2i", &foop_glWindowPos2i);
  register_command("glWindowPos2fv", &foop_glWindowPos2fv);
  register_command("glWindowPos2f", &foop_glWindowPos2f);
  register_command("glWindowPos2dv", &foop_glWindowPos2dv);
  register_command("glWindowPos2d", &foop_glWindowPos2d);
  register_command("glMultiDrawElements", &foop_glMultiDrawElements);
  register_command("glMultiDrawArrays", &foop_glMultiDrawArrays);
  register_command("glBlendFuncSeparate", &foop_glBlendFuncSeparate);
  register_command("glPointParameteriv", &foop_glPointParameteriv);
  register_command("glPointParameteri", &foop_glPointParameteri);
  register_command("glPointParameterfv", &foop_glPointParameterfv);
  register_command("glPointParameterf", &foop_glPointParameterf);
  register_command("glSecondaryColorPointer", &foop_glSecondaryColorPointer);
  register_command("glSecondaryColor3usv", &foop_glSecondaryColor3usv);
  register_command("glSecondaryColor3us", &foop_glSecondaryColor3us);
  register_command("glSecondaryColor3uiv", &foop_glSecondaryColor3uiv);
  register_command("glSecondaryColor3ui", &foop_glSecondaryColor3ui);
  register_command("glSecondaryColor3ubv", &foop_glSecondaryColor3ubv);
  register_command("glSecondaryColor3ub", &foop_glSecondaryColor3ub);
  register_command("glSecondaryColor3sv", &foop_glSecondaryColor3sv);
  register_command("glSecondaryColor3s", &foop_glSecondaryColor3s);
  register_command("glSecondaryColor3iv", &foop_glSecondaryColor3iv);
  register_command("glSecondaryColor3i", &foop_glSecondaryColor3i);
  register_command("glSecondaryColor3fv", &foop_glSecondaryColor3fv);
  register_command("glSecondaryColor3f", &foop_glSecondaryColor3f);
  register_command("glSecondaryColor3dv", &foop_glSecondaryColor3dv);
  register_command("glSecondaryColor3d", &foop_glSecondaryColor3d);
  register_command("glSecondaryColor3bv", &foop_glSecondaryColor3bv);
  register_command("glSecondaryColor3b", &foop_glSecondaryColor3b);
  register_command("glFogCoordPointer", &foop_glFogCoordPointer);
  register_command("glFogCoorddv", &foop_glFogCoorddv);
  register_command("glFogCoordd", &foop_glFogCoordd);
  register_command("glFogCoordfv", &foop_glFogCoordfv);
  register_command("glFogCoordf", &foop_glFogCoordf);
  register_command("glMultiTexCoord4sv", &foop_glMultiTexCoord4sv);
  register_command("glMultiTexCoord4s", &foop_glMultiTexCoord4s);
  register_command("glMultiTexCoord4iv", &foop_glMultiTexCoord4iv);
  register_command("glMultiTexCoord4i", &foop_glMultiTexCoord4i);
  register_command("glMultiTexCoord4fv", &foop_glMultiTexCoord4fv);
  register_command("glMultiTexCoord4f", &foop_glMultiTexCoord4f);
  register_command("glMultiTexCoord4dv", &foop_glMultiTexCoord4dv);
  register_command("glMultiTexCoord4d", &foop_glMultiTexCoord4d);
  register_command("glMultiTexCoord3sv", &foop_glMultiTexCoord3sv);
  register_command("glMultiTexCoord3s", &foop_glMultiTexCoord3s);
  register_command("glMultiTexCoord3iv", &foop_glMultiTexCoord3iv);
  register_command("glMultiTexCoord3i", &foop_glMultiTexCoord3i);
  register_command("glMultiTexCoord3fv", &foop_glMultiTexCoord3fv);
  register_command("glMultiTexCoord3f", &foop_glMultiTexCoord3f);
  register_command("glMultiTexCoord3dv", &foop_glMultiTexCoord3dv);
  register_command("glMultiTexCoord3d", &foop_glMultiTexCoord3d);
  register_command("glMultiTexCoord2sv", &foop_glMultiTexCoord2sv);
  register_command("glMultiTexCoord2s", &foop_glMultiTexCoord2s);
  register_command("glMultiTexCoord2iv", &foop_glMultiTexCoord2iv);
  register_command("glMultiTexCoord2i", &foop_glMultiTexCoord2i);
  register_command("glMultiTexCoord2fv", &foop_glMultiTexCoord2fv);
  register_command("glMultiTexCoord2f", &foop_glMultiTexCoord2f);
  register_command("glMultiTexCoord2dv", &foop_glMultiTexCoord2dv);
  register_command("glMultiTexCoord2d", &foop_glMultiTexCoord2d);
  register_command("glMultiTexCoord1sv", &foop_glMultiTexCoord1sv);
  register_command("glMultiTexCoord1s", &foop_glMultiTexCoord1s);
  register_command("glMultiTexCoord1iv", &foop_glMultiTexCoord1iv);
  register_command("glMultiTexCoord1i", &foop_glMultiTexCoord1i);
  register_command("glMultiTexCoord1fv", &foop_glMultiTexCoord1fv);
  register_command("glMultiTexCoord1f", &foop_glMultiTexCoord1f);
  register_command("glMultiTexCoord1dv", &foop_glMultiTexCoord1dv);
  register_command("glMultiTexCoord1d", &foop_glMultiTexCoord1d);
  register_command("glClientActiveTexture", &foop_glClientActiveTexture);
  register_command("glActiveTexture", &foop_glActiveTexture);
  register_command("glGetCompressedTexImage", &foop_glGetCompressedTexImage);
  register_command("glCompressedTexSubImage1D", &foop_glCompressedTexSubImage1D);
  register_command("glCompressedTexSubImage2D", &foop_glCompressedTexSubImage2D);
  register_command("glCompressedTexSubImage3D", &foop_glCompressedTexSubImage3D);
  register_command("glCompressedTexImage1D", &foop_glCompressedTexImage1D);
  register_command("glCompressedTexImage2D", &foop_glCompressedTexImage2D);
  register_command("glCompressedTexImage3D", &foop_glCompressedTexImage3D);
  register_command("glMultTransposeMatrixd", &foop_glMultTransposeMatrixd);
  register_command("glMultTransposeMatrixf", &foop_glMultTransposeMatrixf);
  register_command("glLoadTransposeMatrixd", &foop_glLoadTransposeMatrixd);
  register_command("glLoadTransposeMatrixf", &foop_glLoadTransposeMatrixf);
  register_command("glSamplePass", &foop_glSamplePass);
  register_command("glSampleCoverage", &foop_glSampleCoverage);
  register_command("glViewport", &foop_glViewport);
  register_command("glVertexPointer", &foop_glVertexPointer);
  register_command("glVertex4sv", &foop_glVertex4sv);
  register_command("glVertex4s", &foop_glVertex4s);
  register_command("glVertex4iv", &foop_glVertex4iv);
  register_command("glVertex4i", &foop_glVertex4i);
  register_command("glVertex4fv", &foop_glVertex4fv);
  register_command("glVertex4f", &foop_glVertex4f);
  register_command("glVertex4dv", &foop_glVertex4dv);
  register_command("glVertex4d", &foop_glVertex4d);
  register_command("glVertex3sv", &foop_glVertex3sv);
  register_command("glVertex3s", &foop_glVertex3s);
  register_command("glVertex3iv", &foop_glVertex3iv);
  register_command("glVertex3i", &foop_glVertex3i);
  register_command("glVertex3fv", &foop_glVertex3fv);
  register_command("glVertex3f", &foop_glVertex3f);
  register_command("glVertex3dv", &foop_glVertex3dv);
  register_command("glVertex3d", &foop_glVertex3d);
  register_command("glVertex2sv", &foop_glVertex2sv);
  register_command("glVertex2s", &foop_glVertex2s);
  register_command("glVertex2iv", &foop_glVertex2iv);
  register_command("glVertex2i", &foop_glVertex2i);
  register_command("glVertex2fv", &foop_glVertex2fv);
  register_command("glVertex2f", &foop_glVertex2f);
  register_command("glVertex2dv", &foop_glVertex2dv);
  register_command("glVertex2d", &foop_glVertex2d);
  register_command("glTranslatef", &foop_glTranslatef);
  register_command("glTranslated", &foop_glTranslated);
  register_command("glTexSubImage3D", &foop_glTexSubImage3D);
  register_command("glTexSubImage2D", &foop_glTexSubImage2D);
  register_command("glTexSubImage1D", &foop_glTexSubImage1D);
  register_command("glTexParameteriv", &foop_glTexParameteriv);
  register_command("glTexParameteri", &foop_glTexParameteri);
  register_command("glTexParameterfv", &foop_glTexParameterfv);
  register_command("glTexParameterf", &foop_glTexParameterf);
  register_command("glTexImage3D", &foop_glTexImage3D);
  register_command("glTexImage2D", &foop_glTexImage2D);
  register_command("glTexImage1D", &foop_glTexImage1D);
  register_command("glTexGeniv", &foop_glTexGeniv);
  register_command("glTexGeni", &foop_glTexGeni);
  register_command("glTexGenfv", &foop_glTexGenfv);
  register_command("glTexGenf", &foop_glTexGenf);
  register_command("glTexGendv", &foop_glTexGendv);
  register_command("glTexGend", &foop_glTexGend);
  register_command("glTexEnviv", &foop_glTexEnviv);
  register_command("glTexEnvi", &foop_glTexEnvi);
  register_command("glTexEnvfv", &foop_glTexEnvfv);
  register_command("glTexEnvf", &foop_glTexEnvf);
  register_command("glTexCoordPointer", &foop_glTexCoordPointer);
  register_command("glTexCoord4sv", &foop_glTexCoord4sv);
  register_command("glTexCoord4s", &foop_glTexCoord4s);
  register_command("glTexCoord4iv", &foop_glTexCoord4iv);
  register_command("glTexCoord4i", &foop_glTexCoord4i);
  register_command("glTexCoord4fv", &foop_glTexCoord4fv);
  register_command("glTexCoord4f", &foop_glTexCoord4f);
  register_command("glTexCoord4dv", &foop_glTexCoord4dv);
  register_command("glTexCoord4d", &foop_glTexCoord4d);
  register_command("glTexCoord3sv", &foop_glTexCoord3sv);
  register_command("glTexCoord3s", &foop_glTexCoord3s);
  register_command("glTexCoord3iv", &foop_glTexCoord3iv);
  register_command("glTexCoord3i", &foop_glTexCoord3i);
  register_command("glTexCoord3fv", &foop_glTexCoord3fv);
  register_command("glTexCoord3f", &foop_glTexCoord3f);
  register_command("glTexCoord3dv", &foop_glTexCoord3dv);
  register_command("glTexCoord3d", &foop_glTexCoord3d);
  register_command("glTexCoord2sv", &foop_glTexCoord2sv);
  register_command("glTexCoord2s", &foop_glTexCoord2s);
  register_command("glTexCoord2iv", &foop_glTexCoord2iv);
  register_command("glTexCoord2i", &foop_glTexCoord2i);
  register_command("glTexCoord2fv", &foop_glTexCoord2fv);
  register_command("glTexCoord2f", &foop_glTexCoord2f);
  register_command("glTexCoord2dv", &foop_glTexCoord2dv);
  register_command("glTexCoord2d", &foop_glTexCoord2d);
  register_command("glTexCoord1sv", &foop_glTexCoord1sv);
  register_command("glTexCoord1s", &foop_glTexCoord1s);
  register_command("glTexCoord1iv", &foop_glTexCoord1iv);
  register_command("glTexCoord1i", &foop_glTexCoord1i);
  register_command("glTexCoord1fv", &foop_glTexCoord1fv);
  register_command("glTexCoord1f", &foop_glTexCoord1f);
  register_command("glTexCoord1dv", &foop_glTexCoord1dv);
  register_command("glTexCoord1d", &foop_glTexCoord1d);
  register_command("glStencilOp", &foop_glStencilOp);
  register_command("glStencilMask", &foop_glStencilMask);
  register_command("glStencilFunc", &foop_glStencilFunc);
  register_command("glShadeModel", &foop_glShadeModel);
  register_command("glSeparableFilter2D", &foop_glSeparableFilter2D);
  register_command("glSelectBuffer", &foop_glSelectBuffer);
  register_command("glScissor", &foop_glScissor);
  register_command("glScalef", &foop_glScalef);
  register_command("glScaled", &foop_glScaled);
  register_command("glRotatef", &foop_glRotatef);
  register_command("glRotated", &foop_glRotated);
  register_command("glResetMinmax", &foop_glResetMinmax);
  register_command("glResetHistogram", &foop_glResetHistogram);
  register_command("glRenderMode", &foop_glRenderMode);
  register_command("glRectsv", &foop_glRectsv);
  register_command("glRects", &foop_glRects);
  register_command("glRectiv", &foop_glRectiv);
  register_command("glRecti", &foop_glRecti);
  register_command("glRectfv", &foop_glRectfv);
  register_command("glRectf", &foop_glRectf);
  register_command("glRectdv", &foop_glRectdv);
  register_command("glRectd", &foop_glRectd);
  register_command("glReadPixels", &foop_glReadPixels);
  register_command("glReadBuffer", &foop_glReadBuffer);
  register_command("glRasterPos4sv", &foop_glRasterPos4sv);
  register_command("glRasterPos4s", &foop_glRasterPos4s);
  register_command("glRasterPos4iv", &foop_glRasterPos4iv);
  register_command("glRasterPos4i", &foop_glRasterPos4i);
  register_command("glRasterPos4fv", &foop_glRasterPos4fv);
  register_command("glRasterPos4f", &foop_glRasterPos4f);
  register_command("glRasterPos4dv", &foop_glRasterPos4dv);
  register_command("glRasterPos4d", &foop_glRasterPos4d);
  register_command("glRasterPos3sv", &foop_glRasterPos3sv);
  register_command("glRasterPos3s", &foop_glRasterPos3s);
  register_command("glRasterPos3iv", &foop_glRasterPos3iv);
  register_command("glRasterPos3i", &foop_glRasterPos3i);
  register_command("glRasterPos3fv", &foop_glRasterPos3fv);
  register_command("glRasterPos3f", &foop_glRasterPos3f);
  register_command("glRasterPos3dv", &foop_glRasterPos3dv);
  register_command("glRasterPos3d", &foop_glRasterPos3d);
  register_command("glRasterPos2sv", &foop_glRasterPos2sv);
  register_command("glRasterPos2s", &foop_glRasterPos2s);
  register_command("glRasterPos2iv", &foop_glRasterPos2iv);
  register_command("glRasterPos2i", &foop_glRasterPos2i);
  register_command("glRasterPos2fv", &foop_glRasterPos2fv);
  register_command("glRasterPos2f", &foop_glRasterPos2f);
  register_command("glRasterPos2dv", &foop_glRasterPos2dv);
  register_command("glRasterPos2d", &foop_glRasterPos2d);
  register_command("glPushName", &foop_glPushName);
  register_command("glPushMatrix", &foop_glPushMatrix);
  register_command("glPushClientAttrib", &foop_glPushClientAttrib);
  register_command("glPushAttrib", &foop_glPushAttrib);
  register_command("glPrioritizeTextures", &foop_glPrioritizeTextures);
  register_command("glPopName", &foop_glPopName);
  register_command("glPopMatrix", &foop_glPopMatrix);
  register_command("glPopClientAttrib", &foop_glPopClientAttrib);
  register_command("glPopAttrib", &foop_glPopAttrib);
  register_command("glPolygonStipple", &foop_glPolygonStipple);
  register_command("glPolygonOffset", &foop_glPolygonOffset);
  register_command("glPolygonMode", &foop_glPolygonMode);
  register_command("glPointSize", &foop_glPointSize);
  register_command("glPixelZoom", &foop_glPixelZoom);
  register_command("glPixelTransferi", &foop_glPixelTransferi);
  register_command("glPixelTransferf", &foop_glPixelTransferf);
  register_command("glPixelStorei", &foop_glPixelStorei);
  register_command("glPixelStoref", &foop_glPixelStoref);
  register_command("glPixelMapusv", &foop_glPixelMapusv);
  register_command("glPixelMapuiv", &foop_glPixelMapuiv);
  register_command("glPixelMapfv", &foop_glPixelMapfv);
  register_command("glPassThrough", &foop_glPassThrough);
  register_command("glOrtho", &foop_glOrtho);
  register_command("glNormalPointer", &foop_glNormalPointer);
  register_command("glNormal3sv", &foop_glNormal3sv);
  register_command("glNormal3s", &foop_glNormal3s);
  register_command("glNormal3iv", &foop_glNormal3iv);
  register_command("glNormal3i", &foop_glNormal3i);
  register_command("glNormal3fv", &foop_glNormal3fv);
  register_command("glNormal3f", &foop_glNormal3f);
  register_command("glNormal3dv", &foop_glNormal3dv);
  register_command("glNormal3d", &foop_glNormal3d);
  register_command("glNormal3bv", &foop_glNormal3bv);
  register_command("glNormal3b", &foop_glNormal3b);
  register_command("glNewList", &foop_glNewList);
  register_command("glMultMatrixf", &foop_glMultMatrixf);
  register_command("glMultMatrixd", &foop_glMultMatrixd);
  register_command("glMinmax", &foop_glMinmax);
  register_command("glMatrixMode", &foop_glMatrixMode);
  register_command("glMaterialiv", &foop_glMaterialiv);
  register_command("glMateriali", &foop_glMateriali);
  register_command("glMaterialfv", &foop_glMaterialfv);
  register_command("glMaterialf", &foop_glMaterialf);
  register_command("glMapGrid2f", &foop_glMapGrid2f);
  register_command("glMapGrid2d", &foop_glMapGrid2d);
  register_command("glMapGrid1f", &foop_glMapGrid1f);
  register_command("glMapGrid1d", &foop_glMapGrid1d);
  register_command("glMap2f", &foop_glMap2f);
  register_command("glMap2d", &foop_glMap2d);
  register_command("glMap1f", &foop_glMap1f);
  register_command("glMap1d", &foop_glMap1d);
  register_command("glLogicOp", &foop_glLogicOp);
  register_command("glLoadName", &foop_glLoadName);
  register_command("glLoadMatrixf", &foop_glLoadMatrixf);
  register_command("glLoadMatrixd", &foop_glLoadMatrixd);
  register_command("glLoadIdentity", &foop_glLoadIdentity);
  register_command("glListBase", &foop_glListBase);
  register_command("glLineWidth", &foop_glLineWidth);
  register_command("glLineStipple", &foop_glLineStipple);
  register_command("glLightiv", &foop_glLightiv);
  register_command("glLighti", &foop_glLighti);
  register_command("glLightfv", &foop_glLightfv);
  register_command("glLightf", &foop_glLightf);
  register_command("glLightModeliv", &foop_glLightModeliv);
  register_command("glLightModeli", &foop_glLightModeli);
  register_command("glLightModelfv", &foop_glLightModelfv);
  register_command("glLightModelf", &foop_glLightModelf);
  register_command("glIsTexture", &foop_glIsTexture);
  register_command("glIsList", &foop_glIsList);
  register_command("glIsEnabled", &foop_glIsEnabled);
  register_command("glInterleavedArrays", &foop_glInterleavedArrays);
  register_command("glInitNames", &foop_glInitNames);
  register_command("glIndexubv", &foop_glIndexubv);
  register_command("glIndexub", &foop_glIndexub);
  register_command("glIndexsv", &foop_glIndexsv);
  register_command("glIndexs", &foop_glIndexs);
  register_command("glIndexiv", &foop_glIndexiv);
  register_command("glIndexi", &foop_glIndexi);
  register_command("glIndexfv", &foop_glIndexfv);
  register_command("glIndexf", &foop_glIndexf);
  register_command("glIndexdv", &foop_glIndexdv);
  register_command("glIndexd", &foop_glIndexd);
  register_command("glIndexPointer", &foop_glIndexPointer);
  register_command("glIndexMask", &foop_glIndexMask);
  register_command("glHistogram", &foop_glHistogram);
  register_command("glHint", &foop_glHint);
  register_command("glGetTexParameteriv", &foop_glGetTexParameteriv);
  register_command("glGetTexParameterfv", &foop_glGetTexParameterfv);
  register_command("glGetTexLevelParameteriv", &foop_glGetTexLevelParameteriv);
  register_command("glGetTexLevelParameterfv", &foop_glGetTexLevelParameterfv);
  register_command("glGetTexImage", &foop_glGetTexImage);
  register_command("glGetTexGeniv", &foop_glGetTexGeniv);
  register_command("glGetTexGenfv", &foop_glGetTexGenfv);
  register_command("glGetTexGendv", &foop_glGetTexGendv);
  register_command("glGetTexEnviv", &foop_glGetTexEnviv);
  register_command("glGetTexEnvfv", &foop_glGetTexEnvfv);
  register_command("glGetString", &foop_glGetString);
  register_command("glGetSeparableFilter", &foop_glGetSeparableFilter);
  register_command("glGetPolygonStipple", &foop_glGetPolygonStipple);
  register_command("glGetPointerv", &foop_glGetPointerv);
  register_command("glGetPixelMapusv", &foop_glGetPixelMapusv);
  register_command("glGetPixelMapuiv", &foop_glGetPixelMapuiv);
  register_command("glGetPixelMapfv", &foop_glGetPixelMapfv);
  register_command("glGetMinmaxParameteriv", &foop_glGetMinmaxParameteriv);
  register_command("glGetMinmaxParameterfv", &foop_glGetMinmaxParameterfv);
  register_command("glGetMinmax", &foop_glGetMinmax);
  register_command("glGetMaterialiv", &foop_glGetMaterialiv);
  register_command("glGetMaterialfv", &foop_glGetMaterialfv);
  register_command("glGetMapiv", &foop_glGetMapiv);
  register_command("glGetMapfv", &foop_glGetMapfv);
  register_command("glGetMapdv", &foop_glGetMapdv);
  register_command("glGetLightiv", &foop_glGetLightiv);
  register_command("glGetLightfv", &foop_glGetLightfv);
  register_command("glGetIntegerv", &foop_glGetIntegerv);
  register_command("glGetHistogramParameteriv", &foop_glGetHistogramParameteriv);
  register_command("glGetHistogramParameterfv", &foop_glGetHistogramParameterfv);
  register_command("glGetHistogram", &foop_glGetHistogram);
  register_command("glGetFloatv", &foop_glGetFloatv);
  register_command("glGetError", &foop_glGetError);
  register_command("glGetDoublev", &foop_glGetDoublev);
  register_command("glGetConvolutionParameteriv", &foop_glGetConvolutionParameteriv);
  register_command("glGetConvolutionParameterfv", &foop_glGetConvolutionParameterfv);
  register_command("glGetConvolutionFilter", &foop_glGetConvolutionFilter);
  register_command("glGetColorTableParameteriv", &foop_glGetColorTableParameteriv);
  register_command("glGetColorTableParameterfv", &foop_glGetColorTableParameterfv);
  register_command("glGetColorTable", &foop_glGetColorTable);
  register_command("glGetClipPlane", &foop_glGetClipPlane);
  register_command("glGetBooleanv", &foop_glGetBooleanv);
  register_command("glGenTextures", &foop_glGenTextures);
  register_command("glGenLists", &foop_glGenLists);
  register_command("glFrustum", &foop_glFrustum);
  register_command("glFrontFace", &foop_glFrontFace);
  register_command("glFogiv", &foop_glFogiv);
  register_command("glFogi", &foop_glFogi);
  register_command("glFogfv", &foop_glFogfv);
  register_command("glFogf", &foop_glFogf);
  register_command("glFlush", &foop_glFlush);
  register_command("glFinish", &foop_glFinish);
  register_command("glFeedbackBuffer", &foop_glFeedbackBuffer);
  register_command("glEvalPoint2", &foop_glEvalPoint2);
  register_command("glEvalPoint1", &foop_glEvalPoint1);
  register_command("glEvalMesh2", &foop_glEvalMesh2);
  register_command("glEvalMesh1", &foop_glEvalMesh1);
  register_command("glEvalCoord2fv", &foop_glEvalCoord2fv);
  register_command("glEvalCoord2f", &foop_glEvalCoord2f);
  register_command("glEvalCoord2dv", &foop_glEvalCoord2dv);
  register_command("glEvalCoord2d", &foop_glEvalCoord2d);
  register_command("glEvalCoord1fv", &foop_glEvalCoord1fv);
  register_command("glEvalCoord1f", &foop_glEvalCoord1f);
  register_command("glEvalCoord1dv", &foop_glEvalCoord1dv);
  register_command("glEvalCoord1d", &foop_glEvalCoord1d);
  register_command("glEndList", &foop_glEndList);
  register_command("glEnd", &foop_glEnd);
  register_command("glEnableClientState", &foop_glEnableClientState);
  register_command("glEnable", &foop_glEnable);
  register_command("glEdgeFlagv", &foop_glEdgeFlagv);
  register_command("glEdgeFlagPointer", &foop_glEdgeFlagPointer);
  register_command("glEdgeFlag", &foop_glEdgeFlag);
  register_command("glDrawRangeElements", &foop_glDrawRangeElements);
  register_command("glDrawPixels", &foop_glDrawPixels);
  register_command("glDrawElements", &foop_glDrawElements);
  register_command("glDrawBuffer", &foop_glDrawBuffer);
  register_command("glDrawArrays", &foop_glDrawArrays);
  register_command("glDisableClientState", &foop_glDisableClientState);
  register_command("glDisable", &foop_glDisable);
  register_command("glDepthRange", &foop_glDepthRange);
  register_command("glDepthMask", &foop_glDepthMask);
  register_command("glDepthFunc", &foop_glDepthFunc);
  register_command("glDeleteTextures", &foop_glDeleteTextures);
  register_command("glDeleteLists", &foop_glDeleteLists);
  register_command("glCullFace", &foop_glCullFace);
  register_command("glCopyTexSubImage3D", &foop_glCopyTexSubImage3D);
  register_command("glCopyTexSubImage2D", &foop_glCopyTexSubImage2D);
  register_command("glCopyTexSubImage1D", &foop_glCopyTexSubImage1D);
  register_command("glCopyTexImage2D", &foop_glCopyTexImage2D);
  register_command("glCopyTexImage1D", &foop_glCopyTexImage1D);
  register_command("glCopyPixels", &foop_glCopyPixels);
  register_command("glCopyConvolutionFilter2D", &foop_glCopyConvolutionFilter2D);
  register_command("glCopyConvolutionFilter1D", &foop_glCopyConvolutionFilter1D);
  register_command("glCopyColorTable", &foop_glCopyColorTable);
  register_command("glCopyColorSubTable", &foop_glCopyColorSubTable);
  register_command("glConvolutionParameteriv", &foop_glConvolutionParameteriv);
  register_command("glConvolutionParameteri", &foop_glConvolutionParameteri);
  register_command("glConvolutionParameterfv", &foop_glConvolutionParameterfv);
  register_command("glConvolutionParameterf", &foop_glConvolutionParameterf);
  register_command("glConvolutionFilter2D", &foop_glConvolutionFilter2D);
  register_command("glConvolutionFilter1D", &foop_glConvolutionFilter1D);
  register_command("glColorTableParameteriv", &foop_glColorTableParameteriv);
  register_command("glColorTableParameterfv", &foop_glColorTableParameterfv);
  register_command("glColorTable", &foop_glColorTable);
  register_command("glColorSubTable", &foop_glColorSubTable);
  register_command("glColorPointer", &foop_glColorPointer);
  register_command("glColorMaterial", &foop_glColorMaterial);
  register_command("glColorMask", &foop_glColorMask);
  register_command("glColor4usv", &foop_glColor4usv);
  register_command("glColor4us", &foop_glColor4us);
  register_command("glColor4uiv", &foop_glColor4uiv);
  register_command("glColor4ui", &foop_glColor4ui);
  register_command("glColor4ubv", &foop_glColor4ubv);
  register_command("glColor4ub", &foop_glColor4ub);
  register_command("glColor4sv", &foop_glColor4sv);
  register_command("glColor4s", &foop_glColor4s);
  register_command("glColor4iv", &foop_glColor4iv);
  register_command("glColor4i", &foop_glColor4i);
  register_command("glColor4fv", &foop_glColor4fv);
  register_command("glColor4f", &foop_glColor4f);
  register_command("glColor4dv", &foop_glColor4dv);
  register_command("glColor4d", &foop_glColor4d);
  register_command("glColor4bv", &foop_glColor4bv);
  register_command("glColor4b", &foop_glColor4b);
  register_command("glColor3usv", &foop_glColor3usv);
  register_command("glColor3us", &foop_glColor3us);
  register_command("glColor3uiv", &foop_glColor3uiv);
  register_command("glColor3ui", &foop_glColor3ui);
  register_command("glColor3ubv", &foop_glColor3ubv);
  register_command("glColor3ub", &foop_glColor3ub);
  register_command("glColor3sv", &foop_glColor3sv);
  register_command("glColor3s", &foop_glColor3s);
  register_command("glColor3iv", &foop_glColor3iv);
  register_command("glColor3i", &foop_glColor3i);
  register_command("glColor3fv", &foop_glColor3fv);
  register_command("glColor3f", &foop_glColor3f);
  register_command("glColor3dv", &foop_glColor3dv);
  register_command("glColor3d", &foop_glColor3d);
  register_command("glColor3bv", &foop_glColor3bv);
  register_command("glColor3b", &foop_glColor3b);
  register_command("glClipPlane", &foop_glClipPlane);
  register_command("glClearStencil", &foop_glClearStencil);
  register_command("glClearIndex", &foop_glClearIndex);
  register_command("glClearDepth", &foop_glClearDepth);
  register_command("glClearColor", &foop_glClearColor);
  register_command("glClearAccum", &foop_glClearAccum);
  register_command("glClear", &foop_glClear);
  register_command("glCallLists", &foop_glCallLists);
  register_command("glCallList", &foop_glCallList);
  register_command("glBlendFunc", &foop_glBlendFunc);
  register_command("glBlendEquationSeparate", &foop_glBlendEquationSeparate);
  register_command("glBlendEquation", &foop_glBlendEquation);
  register_command("glBlendColor", &foop_glBlendColor);
  register_command("glBitmap", &foop_glBitmap);
  register_command("glBindTexture", &foop_glBindTexture);
  register_command("glBegin", &foop_glBegin);
  register_command("glArrayElement", &foop_glArrayElement);
  register_command("glAreTexturesResident", &foop_glAreTexturesResident);
  register_command("glAlphaFunc", &foop_glAlphaFunc);
  register_command("glAccum", &foop_glAccum);
  register_command("glPointParameterivNV", &foop_glPointParameterivNV);
  register_command("glPointParameteriNV", &foop_glPointParameteriNV);
  register_command("glGetCombinerStageParameterfvNV", &foop_glGetCombinerStageParameterfvNV);
  register_command("glCombinerStageParameterfvNV", &foop_glCombinerStageParameterfvNV);
  register_command("glGetFinalCombinerInputParameterivNV", &foop_glGetFinalCombinerInputParameterivNV);
  register_command("glGetFinalCombinerInputParameterfvNV", &foop_glGetFinalCombinerInputParameterfvNV);
  register_command("glGetCombinerOutputParameterivNV", &foop_glGetCombinerOutputParameterivNV);
  register_command("glGetCombinerOutputParameterfvNV", &foop_glGetCombinerOutputParameterfvNV);
  register_command("glGetCombinerInputParameterivNV", &foop_glGetCombinerInputParameterivNV);
  register_command("glGetCombinerInputParameterfvNV", &foop_glGetCombinerInputParameterfvNV);
  register_command("glFinalCombinerInputNV", &foop_glFinalCombinerInputNV);
  register_command("glCombinerOutputNV", &foop_glCombinerOutputNV);
  register_command("glCombinerInputNV", &foop_glCombinerInputNV);
  register_command("glCombinerParameteriNV", &foop_glCombinerParameteriNV);
  register_command("glCombinerParameterivNV", &foop_glCombinerParameterivNV);
  register_command("glCombinerParameterfNV", &foop_glCombinerParameterfNV);
  register_command("glCombinerParameterfvNV", &foop_glCombinerParameterfvNV);
  register_command("glPNTrianglesfATIX", &foop_glPNTrianglesfATIX);
  register_command("glPNTrianglesiATIX", &foop_glPNTrianglesiATIX);
  register_command("glStencilFuncSeparateATI", &foop_glStencilFuncSeparateATI);
  register_command("glStencilOpSeparateATI", &foop_glStencilOpSeparateATI);
  register_command("glBlendEquationSeparateATI", &foop_glBlendEquationSeparateATI);
  register_command("glPNTrianglesfATI", &foop_glPNTrianglesfATI);
  register_command("glPNTrianglesiATI", &foop_glPNTrianglesiATI);
  register_command("glGetObjectParameterivAPPLE", &foop_glGetObjectParameterivAPPLE);
  register_command("glObjectUnpurgeableAPPLE", &foop_glObjectUnpurgeableAPPLE);
  register_command("glObjectPurgeableAPPLE", &foop_glObjectPurgeableAPPLE);
  register_command("glFlushMappedBufferRangeAPPLE", &foop_glFlushMappedBufferRangeAPPLE);
  register_command("glBufferParameteriAPPLE", &foop_glBufferParameteriAPPLE);
  register_command("glMapVertexAttrib2fAPPLE", &foop_glMapVertexAttrib2fAPPLE);
  register_command("glMapVertexAttrib2dAPPLE", &foop_glMapVertexAttrib2dAPPLE);
  register_command("glMapVertexAttrib1fAPPLE", &foop_glMapVertexAttrib1fAPPLE);
  register_command("glMapVertexAttrib1dAPPLE", &foop_glMapVertexAttrib1dAPPLE);
  register_command("glIsVertexAttribEnabledAPPLE", &foop_glIsVertexAttribEnabledAPPLE);
  register_command("glDisableVertexAttribAPPLE", &foop_glDisableVertexAttribAPPLE);
  register_command("glEnableVertexAttribAPPLE", &foop_glEnableVertexAttribAPPLE);
  register_command("glSwapAPPLE", &foop_glSwapAPPLE);
  register_command("glFinishRenderAPPLE", &foop_glFinishRenderAPPLE);
  register_command("glFlushRenderAPPLE", &foop_glFlushRenderAPPLE);
  register_command("glMultiDrawRangeElementArrayAPPLE", &foop_glMultiDrawRangeElementArrayAPPLE);
  register_command("glMultiDrawElementArrayAPPLE", &foop_glMultiDrawElementArrayAPPLE);
  register_command("glDrawRangeElementArrayAPPLE", &foop_glDrawRangeElementArrayAPPLE);
  register_command("glDrawElementArrayAPPLE", &foop_glDrawElementArrayAPPLE);
  register_command("glElementPointerAPPLE", &foop_glElementPointerAPPLE);
  register_command("glFinishObjectAPPLE", &foop_glFinishObjectAPPLE);
  register_command("glTestObjectAPPLE", &foop_glTestObjectAPPLE);
  register_command("glFinishFenceAPPLE", &foop_glFinishFenceAPPLE);
  register_command("glTestFenceAPPLE", &foop_glTestFenceAPPLE);
  register_command("glIsFenceAPPLE", &foop_glIsFenceAPPLE);
  register_command("glSetFenceAPPLE", &foop_glSetFenceAPPLE);
  register_command("glDeleteFencesAPPLE", &foop_glDeleteFencesAPPLE);
  register_command("glGenFencesAPPLE", &foop_glGenFencesAPPLE);
  register_command("glIsVertexArrayAPPLE", &foop_glIsVertexArrayAPPLE);
  register_command("glGenVertexArraysAPPLE", &foop_glGenVertexArraysAPPLE);
  register_command("glDeleteVertexArraysAPPLE", &foop_glDeleteVertexArraysAPPLE);
  register_command("glBindVertexArrayAPPLE", &foop_glBindVertexArrayAPPLE);
  register_command("glVertexArrayParameteriAPPLE", &foop_glVertexArrayParameteriAPPLE);
  register_command("glFlushVertexArrayRangeAPPLE", &foop_glFlushVertexArrayRangeAPPLE);
  register_command("glVertexArrayRangeAPPLE", &foop_glVertexArrayRangeAPPLE);
  register_command("glGetTexParameterPointervAPPLE", &foop_glGetTexParameterPointervAPPLE);
  register_command("glTextureRangeAPPLE", &foop_glTextureRangeAPPLE);
  register_command("glFramebufferRenderbufferEXT", &foop_glFramebufferRenderbufferEXT);
  register_command("glFramebufferTexture2DEXT", &foop_glFramebufferTexture2DEXT);
  register_command("glCheckFramebufferStatusEXT", &foop_glCheckFramebufferStatusEXT);
  register_command("glGenFramebuffersEXT", &foop_glGenFramebuffersEXT);
  register_command("glDeleteFramebuffersEXT", &foop_glDeleteFramebuffersEXT);
  register_command("glBindFramebufferEXT", &foop_glBindFramebufferEXT);
  register_command("glRenderbufferStorageEXT", &foop_glRenderbufferStorageEXT);
  register_command("glGenRenderbuffersEXT", &foop_glGenRenderbuffersEXT);
  register_command("glDeleteRenderbuffersEXT", &foop_glDeleteRenderbuffersEXT);
  register_command("glBindRenderbufferEXT", &foop_glBindRenderbufferEXT);
  register_command("glDrawBuffersARB", &foop_glDrawBuffersARB);
  register_command("glGetBufferPointervARB", &foop_glGetBufferPointervARB);
  register_command("glGetBufferParameterivARB", &foop_glGetBufferParameterivARB);
  register_command("glUnmapBufferARB", &foop_glUnmapBufferARB);
  register_command("glMapBufferARB", &foop_glMapBufferARB);
  register_command("glGetBufferSubDataARB", &foop_glGetBufferSubDataARB);
  register_command("glBufferSubDataARB", &foop_glBufferSubDataARB);
  register_command("glBufferDataARB", &foop_glBufferDataARB);
  register_command("glIsBufferARB", &foop_glIsBufferARB);
  register_command("glGenBuffersARB", &foop_glGenBuffersARB);
  register_command("glDeleteBuffersARB", &foop_glDeleteBuffersARB);
  register_command("glBindBufferARB", &foop_glBindBufferARB);
  register_command("glGetAttribLocationARB", &foop_glGetAttribLocationARB);
  register_command("glGetActiveAttribARB", &foop_glGetActiveAttribARB);
  register_command("glBindAttribLocationARB", &foop_glBindAttribLocationARB);
  register_command("glGetShaderSourceARB", &foop_glGetShaderSourceARB);
  register_command("glGetUniformivARB", &foop_glGetUniformivARB);
  register_command("glGetUniformfvARB", &foop_glGetUniformfvARB);
  register_command("glGetActiveUniformARB", &foop_glGetActiveUniformARB);
  register_command("glGetUniformLocationARB", &foop_glGetUniformLocationARB);
  register_command("glGetAttachedObjectsARB", &foop_glGetAttachedObjectsARB);
  register_command("glGetInfoLogARB", &foop_glGetInfoLogARB);
  register_command("glGetObjectParameterivARB", &foop_glGetObjectParameterivARB);
  register_command("glGetObjectParameterfvARB", &foop_glGetObjectParameterfvARB);
  register_command("glUniformMatrix4fvARB", &foop_glUniformMatrix4fvARB);
  register_command("glUniformMatrix3fvARB", &foop_glUniformMatrix3fvARB);
  register_command("glUniformMatrix2fvARB", &foop_glUniformMatrix2fvARB);
  register_command("glUniform4ivARB", &foop_glUniform4ivARB);
  register_command("glUniform3ivARB", &foop_glUniform3ivARB);
  register_command("glUniform2ivARB", &foop_glUniform2ivARB);
  register_command("glUniform1ivARB", &foop_glUniform1ivARB);
  register_command("glUniform4fvARB", &foop_glUniform4fvARB);
  register_command("glUniform3fvARB", &foop_glUniform3fvARB);
  register_command("glUniform2fvARB", &foop_glUniform2fvARB);
  register_command("glUniform1fvARB", &foop_glUniform1fvARB);
  register_command("glUniform4iARB", &foop_glUniform4iARB);
  register_command("glUniform3iARB", &foop_glUniform3iARB);
  register_command("glUniform2iARB", &foop_glUniform2iARB);
  register_command("glUniform1iARB", &foop_glUniform1iARB);
  register_command("glUniform4fARB", &foop_glUniform4fARB);
  register_command("glUniform3fARB", &foop_glUniform3fARB);
  register_command("glUniform2fARB", &foop_glUniform2fARB);
  register_command("glUniform1fARB", &foop_glUniform1fARB);
  register_command("glValidateProgramARB", &foop_glValidateProgramARB);
  register_command("glUseProgramObjectARB", &foop_glUseProgramObjectARB);
  register_command("glLinkProgramARB", &foop_glLinkProgramARB);
  register_command("glAttachObjectARB", &foop_glAttachObjectARB);
  register_command("glCreateProgramObjectARB", &foop_glCreateProgramObjectARB);
  register_command("glCompileShaderARB", &foop_glCompileShaderARB);
  register_command("glShaderSourceARB", &foop_glShaderSourceARB);
  register_command("glCreateShaderObjectARB", &foop_glCreateShaderObjectARB);
  register_command("glDetachObjectARB", &foop_glDetachObjectARB);
  register_command("glGetHandleARB", &foop_glGetHandleARB);
  register_command("glDeleteObjectARB", &foop_glDeleteObjectARB);
  register_command("glGetVertexAttribivARB", &foop_glGetVertexAttribivARB);
  register_command("glGetVertexAttribfvARB", &foop_glGetVertexAttribfvARB);
  register_command("glGetVertexAttribdvARB", &foop_glGetVertexAttribdvARB);
  register_command("glGetVertexAttribPointervARB", &foop_glGetVertexAttribPointervARB);
  register_command("glEnableVertexAttribArrayARB", &foop_glEnableVertexAttribArrayARB);
  register_command("glDisableVertexAttribArrayARB", &foop_glDisableVertexAttribArrayARB);
  register_command("glVertexAttribPointerARB", &foop_glVertexAttribPointerARB);
  register_command("glVertexAttrib4usvARB", &foop_glVertexAttrib4usvARB);
  register_command("glVertexAttrib4uivARB", &foop_glVertexAttrib4uivARB);
  register_command("glVertexAttrib4ubvARB", &foop_glVertexAttrib4ubvARB);
  register_command("glVertexAttrib4svARB", &foop_glVertexAttrib4svARB);
  register_command("glVertexAttrib4sARB", &foop_glVertexAttrib4sARB);
  register_command("glVertexAttrib4ivARB", &foop_glVertexAttrib4ivARB);
  register_command("glVertexAttrib4fvARB", &foop_glVertexAttrib4fvARB);
  register_command("glVertexAttrib4fARB", &foop_glVertexAttrib4fARB);
  register_command("glVertexAttrib4dvARB", &foop_glVertexAttrib4dvARB);
  register_command("glVertexAttrib4dARB", &foop_glVertexAttrib4dARB);
  register_command("glVertexAttrib4bvARB", &foop_glVertexAttrib4bvARB);
  register_command("glVertexAttrib4NusvARB", &foop_glVertexAttrib4NusvARB);
  register_command("glVertexAttrib4NuivARB", &foop_glVertexAttrib4NuivARB);
  register_command("glVertexAttrib4NubvARB", &foop_glVertexAttrib4NubvARB);
  register_command("glVertexAttrib4NubARB", &foop_glVertexAttrib4NubARB);
  register_command("glVertexAttrib4NsvARB", &foop_glVertexAttrib4NsvARB);
  register_command("glVertexAttrib4NivARB", &foop_glVertexAttrib4NivARB);
  register_command("glVertexAttrib4NbvARB", &foop_glVertexAttrib4NbvARB);
  register_command("glVertexAttrib3svARB", &foop_glVertexAttrib3svARB);
  register_command("glVertexAttrib3sARB", &foop_glVertexAttrib3sARB);
  register_command("glVertexAttrib3fvARB", &foop_glVertexAttrib3fvARB);
  register_command("glVertexAttrib3fARB", &foop_glVertexAttrib3fARB);
  register_command("glVertexAttrib3dvARB", &foop_glVertexAttrib3dvARB);
  register_command("glVertexAttrib3dARB", &foop_glVertexAttrib3dARB);
  register_command("glVertexAttrib2svARB", &foop_glVertexAttrib2svARB);
  register_command("glVertexAttrib2sARB", &foop_glVertexAttrib2sARB);
  register_command("glVertexAttrib2fvARB", &foop_glVertexAttrib2fvARB);
  register_command("glVertexAttrib2fARB", &foop_glVertexAttrib2fARB);
  register_command("glVertexAttrib2dvARB", &foop_glVertexAttrib2dvARB);
  register_command("glVertexAttrib2dARB", &foop_glVertexAttrib2dARB);
  register_command("glVertexAttrib1svARB", &foop_glVertexAttrib1svARB);
  register_command("glVertexAttrib1sARB", &foop_glVertexAttrib1sARB);
  register_command("glVertexAttrib1fvARB", &foop_glVertexAttrib1fvARB);
  register_command("glVertexAttrib1fARB", &foop_glVertexAttrib1fARB);
  register_command("glVertexAttrib1dvARB", &foop_glVertexAttrib1dvARB);
  register_command("glVertexAttrib1dARB", &foop_glVertexAttrib1dARB);
  register_command("glGetProgramivARB", &foop_glGetProgramivARB);
  register_command("glGetProgramStringARB", &foop_glGetProgramStringARB);
  register_command("glProgramStringARB", &foop_glProgramStringARB);
  register_command("glGetProgramLocalParameterfvARB", &foop_glGetProgramLocalParameterfvARB);
  register_command("glGetProgramLocalParameterdvARB", &foop_glGetProgramLocalParameterdvARB);
  register_command("glGetProgramEnvParameterfvARB", &foop_glGetProgramEnvParameterfvARB);
  register_command("glGetProgramEnvParameterdvARB", &foop_glGetProgramEnvParameterdvARB);
  register_command("glProgramLocalParameter4fvARB", &foop_glProgramLocalParameter4fvARB);
  register_command("glProgramLocalParameter4fARB", &foop_glProgramLocalParameter4fARB);
  register_command("glProgramLocalParameter4dvARB", &foop_glProgramLocalParameter4dvARB);
  register_command("glProgramLocalParameter4dARB", &foop_glProgramLocalParameter4dARB);
  register_command("glProgramEnvParameter4fvARB", &foop_glProgramEnvParameter4fvARB);
  register_command("glProgramEnvParameter4fARB", &foop_glProgramEnvParameter4fARB);
  register_command("glProgramEnvParameter4dvARB", &foop_glProgramEnvParameter4dvARB);
  register_command("glProgramEnvParameter4dARB", &foop_glProgramEnvParameter4dARB);
  register_command("glIsProgramARB", &foop_glIsProgramARB);
  register_command("glGenProgramsARB", &foop_glGenProgramsARB);
  register_command("glDeleteProgramsARB", &foop_glDeleteProgramsARB);
  register_command("glBindProgramARB", &foop_glBindProgramARB);
  register_command("glPointParameterfvARB", &foop_glPointParameterfvARB);
  register_command("glPointParameterfARB", &foop_glPointParameterfARB);
  register_command("glGetQueryObjectuivARB", &foop_glGetQueryObjectuivARB);
  register_command("glGetQueryObjectivARB", &foop_glGetQueryObjectivARB);
  register_command("glGetQueryivARB", &foop_glGetQueryivARB);
  register_command("glEndQueryARB", &foop_glEndQueryARB);
  register_command("glBeginQueryARB", &foop_glBeginQueryARB);
  register_command("glIsQueryARB", &foop_glIsQueryARB);
  register_command("glDeleteQueriesARB", &foop_glDeleteQueriesARB);
  register_command("glGenQueriesARB", &foop_glGenQueriesARB);
  register_command("glWindowPos3svARB", &foop_glWindowPos3svARB);
  register_command("glWindowPos3sARB", &foop_glWindowPos3sARB);
  register_command("glWindowPos3ivARB", &foop_glWindowPos3ivARB);
  register_command("glWindowPos3iARB", &foop_glWindowPos3iARB);
  register_command("glWindowPos3fvARB", &foop_glWindowPos3fvARB);
  register_command("glWindowPos3fARB", &foop_glWindowPos3fARB);
  register_command("glWindowPos3dvARB", &foop_glWindowPos3dvARB);
  register_command("glWindowPos3dARB", &foop_glWindowPos3dARB);
  register_command("glWindowPos2svARB", &foop_glWindowPos2svARB);
  register_command("glWindowPos2sARB", &foop_glWindowPos2sARB);
  register_command("glWindowPos2ivARB", &foop_glWindowPos2ivARB);
  register_command("glWindowPos2iARB", &foop_glWindowPos2iARB);
  register_command("glWindowPos2fvARB", &foop_glWindowPos2fvARB);
  register_command("glWindowPos2fARB", &foop_glWindowPos2fARB);
  register_command("glWindowPos2dvARB", &foop_glWindowPos2dvARB);
  register_command("glWindowPos2dARB", &foop_glWindowPos2dARB);
  register_command("glVertexBlendARB", &foop_glVertexBlendARB);
  register_command("glWeightPointerARB", &foop_glWeightPointerARB);
  register_command("glWeightuivARB", &foop_glWeightuivARB);
  register_command("glWeightusvARB", &foop_glWeightusvARB);
  register_command("glWeightubvARB", &foop_glWeightubvARB);
  register_command("glWeightdvARB", &foop_glWeightdvARB);
  register_command("glWeightfvARB", &foop_glWeightfvARB);
  register_command("glWeightivARB", &foop_glWeightivARB);
  register_command("glWeightsvARB", &foop_glWeightsvARB);
  register_command("glWeightbvARB", &foop_glWeightbvARB);
  register_command("glGetCompressedTexImageARB", &foop_glGetCompressedTexImageARB);
  register_command("glCompressedTexSubImage1DARB", &foop_glCompressedTexSubImage1DARB);
  register_command("glCompressedTexSubImage2DARB", &foop_glCompressedTexSubImage2DARB);
  register_command("glCompressedTexSubImage3DARB", &foop_glCompressedTexSubImage3DARB);
  register_command("glCompressedTexImage1DARB", &foop_glCompressedTexImage1DARB);
  register_command("glCompressedTexImage2DARB", &foop_glCompressedTexImage2DARB);
  register_command("glCompressedTexImage3DARB", &foop_glCompressedTexImage3DARB);
  register_command("glSamplePassARB", &foop_glSamplePassARB);
  register_command("glSampleCoverageARB", &foop_glSampleCoverageARB);
  register_command("glMultTransposeMatrixdARB", &foop_glMultTransposeMatrixdARB);
  register_command("glMultTransposeMatrixfARB", &foop_glMultTransposeMatrixfARB);
  register_command("glLoadTransposeMatrixdARB", &foop_glLoadTransposeMatrixdARB);
  register_command("glLoadTransposeMatrixfARB", &foop_glLoadTransposeMatrixfARB);
  register_command("glMultiTexCoord4svARB", &foop_glMultiTexCoord4svARB);
  register_command("glMultiTexCoord4sARB", &foop_glMultiTexCoord4sARB);
  register_command("glMultiTexCoord4ivARB", &foop_glMultiTexCoord4ivARB);
  register_command("glMultiTexCoord4iARB", &foop_glMultiTexCoord4iARB);
  register_command("glMultiTexCoord4fvARB", &foop_glMultiTexCoord4fvARB);
  register_command("glMultiTexCoord4fARB", &foop_glMultiTexCoord4fARB);
  register_command("glMultiTexCoord4dvARB", &foop_glMultiTexCoord4dvARB);
  register_command("glMultiTexCoord4dARB", &foop_glMultiTexCoord4dARB);
  register_command("glMultiTexCoord3svARB", &foop_glMultiTexCoord3svARB);
  register_command("glMultiTexCoord3sARB", &foop_glMultiTexCoord3sARB);
  register_command("glMultiTexCoord3ivARB", &foop_glMultiTexCoord3ivARB);
  register_command("glMultiTexCoord3iARB", &foop_glMultiTexCoord3iARB);
  register_command("glMultiTexCoord3fvARB", &foop_glMultiTexCoord3fvARB);
  register_command("glMultiTexCoord3fARB", &foop_glMultiTexCoord3fARB);
  register_command("glMultiTexCoord3dvARB", &foop_glMultiTexCoord3dvARB);
  register_command("glMultiTexCoord3dARB", &foop_glMultiTexCoord3dARB);
  register_command("glMultiTexCoord2svARB", &foop_glMultiTexCoord2svARB);
  register_command("glMultiTexCoord2sARB", &foop_glMultiTexCoord2sARB);
  register_command("glMultiTexCoord2ivARB", &foop_glMultiTexCoord2ivARB);
  register_command("glMultiTexCoord2iARB", &foop_glMultiTexCoord2iARB);
  register_command("glMultiTexCoord2fvARB", &foop_glMultiTexCoord2fvARB);
  register_command("glMultiTexCoord2fARB", &foop_glMultiTexCoord2fARB);
  register_command("glMultiTexCoord2dvARB", &foop_glMultiTexCoord2dvARB);
  register_command("glMultiTexCoord2dARB", &foop_glMultiTexCoord2dARB);
  register_command("glMultiTexCoord1svARB", &foop_glMultiTexCoord1svARB);
  register_command("glMultiTexCoord1sARB", &foop_glMultiTexCoord1sARB);
  register_command("glMultiTexCoord1ivARB", &foop_glMultiTexCoord1ivARB);
  register_command("glMultiTexCoord1iARB", &foop_glMultiTexCoord1iARB);
  register_command("glMultiTexCoord1fvARB", &foop_glMultiTexCoord1fvARB);
  register_command("glMultiTexCoord1fARB", &foop_glMultiTexCoord1fARB);
  register_command("glMultiTexCoord1dvARB", &foop_glMultiTexCoord1dvARB);
  register_command("glMultiTexCoord1dARB", &foop_glMultiTexCoord1dARB);
  register_command("glClientActiveTextureARB", &foop_glClientActiveTextureARB);
  register_command("glActiveTextureARB", &foop_glActiveTextureARB);
}
