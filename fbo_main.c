#include "vor.h"
#include "fbo_includer.impl.h"
#include "ref.impl.h"
#include "cvt.impl.h"
extern void fbo_includer_blott();
extern void ref_blott();
extern void cvt_blott();
extern void fbo_blott();
void hen_main() {
fbo_includer_impl_register();
ref_impl_register();
cvt_impl_register();
fbo_includer_blott();
ref_blott();
cvt_blott();
fbo_blott();
}