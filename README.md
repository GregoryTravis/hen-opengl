Hen: dynamically typed, pure functional language with pattern-matching and monadic IO
====


Hen is a dynamically typed, pure functional language with pattern-matching and
monadic IO. It includes an FFI generator and examples OpenGL programs.

It uses S-expression syntax, and is implemented as a lazy lambda graph reducer.

The sample program is a port of an OpenGL sample FBO program that renders a
cube, and then maps the cube rendering onto the faces of another cube.

```
  (import
   (ffi "GLee.h")
   (ffi "<OpenGL/gl.h>")
   (ffi "<GLUT/glut.h>")
   (ffi "<OpenGL/glext.h>")
   (ffi "<OpenGL/glu.h>")
   (ffi "ref.c")
   (ffi "cvt.c")
   (link "GLee.c")
   (link "shew.impl.c")
   (framework "GLUT")
   (framework "OpenGL")
   (framework "CoreFoundation"))

  (fun (idle)
       (doo
        ;_ (shew 'idle-callback)
        _ (glutPostRedisplay)))

  (fun (reshape w h)
       (doo
        _ (shew ($ 'reshape-callback w h))
        _ (glViewport 0 0 w h)
        _ (glMatrixMode _GL_PROJECTION)
        _ (glLoadIdentity)
        wf (int-to-float w)
        hf (int-to-float h)
        _ (gluPerspective 80.0 ((/ wf) hf) 1.0 5000.0);
        _ (glMatrixMode _GL_MODELVIEW)
        _ (glLoadIdentity)))

   (fun (keyboard key x y)
       (doo
        ;; TODO exit when ESC is pressed, as follows:
        ;;       glDeleteFramebuffersEXT(1, &fbo);
        ;;       glDeleteRenderbuffersEXT(1, &depthBuffer);
        ;;       glDeleteTextures(1,&img);
        _ (shew ($ key x y))))
```

The import/ffi declarations trigger a script to generate the FFI
stubs.  I generate a C program that includes the libraries of interest:

```
  #include "GLee.h"
  #include "OpenGL/gl.h"
  #include "GLUT/glut.h"
  #include "OpenGL/glext.h"
  #include "OpenGL/glu.h"
```

I run GCC on this, but instead of compiling, I have it dump the
enormous code tree:

```
  @1      namespace_decl   name: @2       srcp: <built-in>:0      
                           dcls: @3      
  @2      identifier_node  strg: ::       lngt: 2       
  @3      function_decl    name: @4       type: @5       srcp: glut.h:617    
                           chan: @6       C              args: @7      
                           undefined      extern        
  @4      identifier_node  strg: glutGameModeGet         lngt: 15      
  @5      function_type    size: @8       algn: 8        retn: @9      
                           prms: @10     
  @6      function_decl    name: @11      type: @12      srcp: glut.h:616    
                           chan: @13      C              undefined     
                           extern        
  @7      parm_decl        name: @14      type: @15      srcp: glut.h:617    
                           argt: @15      size: @16      algn: 32      
                           used: 0       
  @8      integer_cst      type: @17      low : 8       
  @9      integer_type     name: @18      size: @16      algn: 32      
                           prec: 32       min : @19      max : @20     
  @10     tree_list        valu: @15      chan: @21     
  @11     identifier_node  strg: glutLeaveGameMode       lngt: 17      
  @12     function_type    size: @8       algn: 8        retn: @22     
                           prms: @21     
```

Which I then parse to get the types of all of the functions.  I can
then generate stub code, in my language:

```
  ;; In hen
  (fun (glutSolidTetrahedron) (Command 'glutSolidTetrahedron ($)))
```

  and on the C side:

```
  // in C
  node* foreign_glutSolidTetrahedron(node* arg498) {
    node* here499 = arg498;
    A(isnil(here499));
    glutSolidTetrahedron();
    return Nil;
  }
```

The hen stuff is translated to C, and everything is compiled together
into an exe that produces the attached screenshot.

*Note: gcc no longer supports the feature that provides this dump.*
