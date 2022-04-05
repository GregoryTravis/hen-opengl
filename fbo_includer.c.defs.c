#include <stdio.h>
#include <GLUT/glut.h>
int main() {
#ifdef GL_VERTEX_PROGRAM_TWO_SIDE
printf("GL_VERTEX_PROGRAM_TWO_SIDE %d\n", 0x8643);
#endif
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT
printf("GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT %d\n", 0x851C);
#endif
#ifdef GL_RGBA_INTEGER_EXT
printf("GL_RGBA_INTEGER_EXT %d\n", 0x8D99);
#endif
#ifdef GL_REG_31_ATI
printf("GL_REG_31_ATI %d\n", 0x8940);
#endif
#ifdef GL_UNPACK_CONSTANT_DATA_SUNX
printf("GL_UNPACK_CONSTANT_DATA_SUNX %d\n", 0x81D5);
#endif
#ifdef __GLEE_GL_EXT_pixel_buffer_object
printf("__GLEE_GL_EXT_pixel_buffer_object %d\n", 1);
#endif
#ifdef GL_ZOOM_Y
printf("GL_ZOOM_Y %d\n", 0x0D17);
#endif
#ifdef GL_EXT_compiled_vertex_array
printf("GL_EXT_compiled_vertex_array %d\n", 1);
#endif
#ifdef GL_TEXTURE_3D_EXT
printf("GL_TEXTURE_3D_EXT %d\n", 0x806F);
#endif
#ifdef GL_SOURCE4_ALPHA
printf("GL_SOURCE4_ALPHA %d\n", 0x858C);
#endif
#ifdef GL_CURRENT_TANGENT_EXT
printf("GL_CURRENT_TANGENT_EXT %d\n", 0x843B);
#endif
#ifdef __LDBL_HAS_QUIET_NAN__
printf("__LDBL_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef GL_DST_ALPHA
printf("GL_DST_ALPHA %d\n", 0x0304);
#endif
#ifdef GL_FOG_COORD_ARRAY_BUFFER_BINDING_ARB
printf("GL_FOG_COORD_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889D);
#endif
#ifdef GL_OBJECT_BUFFER_USAGE_ATI
printf("GL_OBJECT_BUFFER_USAGE_ATI %d\n", 0x8765);
#endif
#ifdef GLEE_EXT_texture_filter_anisotropic
#endif
#ifdef GL_PROXY_TEXTURE_1D_EXT
printf("GL_PROXY_TEXTURE_1D_EXT %d\n", 0x8063);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_ATIX
printf("GL_PN_TRIANGLES_NORMAL_MODE_ATIX %d\n", 0x6093);
#endif
#ifdef glIsProgramNV
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD28_EXT
printf("GL_OUTPUT_TEXTURE_COORD28_EXT %d\n", 0x87B9);
#endif
#ifdef GL_STENCIL_BACK_VALUE_MASK
printf("GL_STENCIL_BACK_VALUE_MASK %d\n", 0x8CA4);
#endif
#ifdef glBinormal3sEXT
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB2_NV
printf("GL_EVAL_VERTEX_ATTRIB2_NV %d\n", 0x86C8);
#endif
#ifdef GL_MULT
printf("GL_MULT %d\n", 0x0103);
#endif
#ifdef GL_NV_light_max_exponent
printf("GL_NV_light_max_exponent %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_coordinate_frame
printf("__GLEE_GL_EXT_coordinate_frame %d\n", 1);
#endif
#ifdef GL_POST_COLOR_MATRIX_GREEN_BIAS
printf("GL_POST_COLOR_MATRIX_GREEN_BIAS %d\n", 0x80B9);
#endif
#ifdef GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV
printf("GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV %d\n", 0x86D9);
#endif
#ifdef glVertexAttrib4hvNV
#endif
#ifdef GLU_NURBS_ERROR34
printf("GLU_NURBS_ERROR34 %d\n", 100284);
#endif
#ifdef GL_RGBA_FLOAT32_ATI
printf("GL_RGBA_FLOAT32_ATI %d\n", 0x8814);
#endif
#ifdef glEvalMapsNV
#endif
#ifdef GL_INTENSITY8UI_EXT
printf("GL_INTENSITY8UI_EXT %d\n", 0x8D7F);
#endif
#ifdef GL_INCR
printf("GL_INCR %d\n", 0x1E02);
#endif
#ifdef GLUT_BITMAP_TIMES_ROMAN_10
#endif
#ifdef GL_DOUBLE
printf("GL_DOUBLE %d\n", 0x140A);
#endif
#ifdef __GLEE_GL_IBM_cull_vertex
printf("__GLEE_GL_IBM_cull_vertex %d\n", 1);
#endif
#ifdef GL_SOURCE0_RGB_ARB
printf("GL_SOURCE0_RGB_ARB %d\n", 0x8580);
#endif
#ifdef GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV
printf("GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV %d\n", 0x870D);
#endif
#ifdef GL_INDEX_ARRAY
printf("GL_INDEX_ARRAY %d\n", 0x8077);
#endif
#ifdef glNormalStream3sATI
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_ATI
printf("GL_PN_TRIANGLES_POINT_MODE_ATI %d\n", 0x6092);
#endif
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE_ARB
printf("GL_SAMPLE_ALPHA_TO_COVERAGE_ARB %d\n", 0x809E);
#endif
#ifdef GL_VERTEX_SHADER_EXT
printf("GL_VERTEX_SHADER_EXT %d\n", 0x8780);
#endif
#ifdef GL_EMBOSS_MAP_NV
printf("GL_EMBOSS_MAP_NV %d\n", 0x855F);
#endif
#ifdef GL_SOURCE0_ALPHA_ARB
printf("GL_SOURCE0_ALPHA_ARB %d\n", 0x8588);
#endif
#ifdef GL_DRAW_BUFFER3_ATI
printf("GL_DRAW_BUFFER3_ATI %d\n", 0x8828);
#endif
#ifdef GL_LUMINANCE_ALPHA16F_ARB
printf("GL_LUMINANCE_ALPHA16F_ARB %d\n", 0x881F);
#endif
#ifdef GL_TEXTURE_STENCIL_SIZE_EXT
printf("GL_TEXTURE_STENCIL_SIZE_EXT %d\n", 0x88F1);
#endif
#ifdef glGetProgramNamedParameterdvNV
#endif
#ifdef glGlobalAlphaFactorfSUN
#endif
#ifdef GL_MATRIX2_NV
printf("GL_MATRIX2_NV %d\n", 0x8632);
#endif
#ifdef GL_RGB5_A1_EXT
printf("GL_RGB5_A1_EXT %d\n", 0x8057);
#endif
#ifdef GL_LUMINANCE16_SIGNED_SGIX
printf("GL_LUMINANCE16_SIGNED_SGIX %d\n", 0x85E9);
#endif
#ifdef glFlushRasterSGIX
#endif
#ifdef GLEE_NV_register_combiners2
#endif
#ifdef GL_UNSIGNED_BYTE_3_3_2_EXT
printf("GL_UNSIGNED_BYTE_3_3_2_EXT %d\n", 0x8032);
#endif
#ifdef GL_RGBA_S3TC
printf("GL_RGBA_S3TC %d\n", 0x83A2);
#endif
#ifdef GL_PROXY_TEXTURE_1D
printf("GL_PROXY_TEXTURE_1D %d\n", 0x8063);
#endif
#ifdef GL_ATTACHED_SHADERS
printf("GL_ATTACHED_SHADERS %d\n", 0x8B85);
#endif
#ifdef __WCHAR_TYPE__
#endif
#ifdef GL_LINEAR_SHARPEN_SGIS
printf("GL_LINEAR_SHARPEN_SGIS %d\n", 0x80AD);
#endif
#ifdef glVertexAttrib2dNV
#endif
#ifdef GL_TEXTURE_ENV0_EXT
printf("GL_TEXTURE_ENV0_EXT %d\n", 0);
#endif
#ifdef GL_N3F_V3F
printf("GL_N3F_V3F %d\n", 0x2A25);
#endif
#ifdef GL_TEXTURE_INTERNAL_FORMAT
printf("GL_TEXTURE_INTERNAL_FORMAT %d\n", 0x1003);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB0_4_NV
printf("GL_MAP1_VERTEX_ATTRIB0_4_NV %d\n", 0x8660);
#endif
#ifdef GL_MAX_PROJECTION_STACK_DEPTH
printf("GL_MAX_PROJECTION_STACK_DEPTH %d\n", 0x0D38);
#endif
#ifdef GL_SOURCE3_ALPHA_ARB
printf("GL_SOURCE3_ALPHA_ARB %d\n", 0x858B);
#endif
#ifdef GL_VERTEX_STREAM1_ATI
printf("GL_VERTEX_STREAM1_ATI %d\n", 0x876D);
#endif
#ifdef GL_EXT_multi_draw_arrays
printf("GL_EXT_multi_draw_arrays %d\n", 1);
#endif
#ifdef glIndexFuncEXT
#endif
#ifdef GL_SGIX_texture_select
printf("GL_SGIX_texture_select %d\n", 1);
#endif
#ifdef GLUT_CURSOR_DESTROY
printf("GLUT_CURSOR_DESTROY %d\n", 3);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD27_EXT
printf("GL_OUTPUT_TEXTURE_COORD27_EXT %d\n", 0x87B8);
#endif
#ifdef GL_OFFSET_HILO_TEXTURE_2D_NV
printf("GL_OFFSET_HILO_TEXTURE_2D_NV %d\n", 0x8854);
#endif
#ifdef GL_CLAMP_FRAGMENT_COLOR_ARB
printf("GL_CLAMP_FRAGMENT_COLOR_ARB %d\n", 0x891B);
#endif
#ifdef GL_ALPHA8UI_EXT
printf("GL_ALPHA8UI_EXT %d\n", 0x8D7E);
#endif
#ifdef GL_T2F_C4UB_V3F
printf("GL_T2F_C4UB_V3F %d\n", 0x2A29);
#endif
#ifdef glImageTransformParameterivHP
#endif
#ifdef glArrayElementEXT
#endif
#ifdef GL_CLIP_VOLUME_CLIPPING_HINT_EXT
printf("GL_CLIP_VOLUME_CLIPPING_HINT_EXT %d\n", 0x80F0);
#endif
#ifdef GL_EXT_texture_env
printf("GL_EXT_texture_env %d\n", 1);
#endif
#ifdef GL_UNSIGNED_INT_S8_S8_8_8_NV
printf("GL_UNSIGNED_INT_S8_S8_8_8_NV %d\n", 0x86DA);
#endif
#ifdef GL_AUX_DEPTH_STENCIL_APPLE
printf("GL_AUX_DEPTH_STENCIL_APPLE %d\n", 0x8A14);
#endif
#ifdef GL_RGBA_FLOAT16_APPLE
printf("GL_RGBA_FLOAT16_APPLE %d\n", 0x881A);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE
printf("GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE %d\n", 0x8A03);
#endif
#ifdef GL_TRANSPOSE_TEXTURE_MATRIX
printf("GL_TRANSPOSE_TEXTURE_MATRIX %d\n", 0x84E5);
#endif
#ifdef GL_NV_fragment_program
printf("GL_NV_fragment_program %d\n", 1);
#endif
#ifdef GL_COLOR_MATRIX_SGI
printf("GL_COLOR_MATRIX_SGI %d\n", 0x80B1);
#endif
#ifdef GL_PACK_SKIP_ROWS
printf("GL_PACK_SKIP_ROWS %d\n", 0x0D03);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT %d\n", 0x8CDB);
#endif
#ifdef GL_ASYNC_TEX_IMAGE_SGIX
printf("GL_ASYNC_TEX_IMAGE_SGIX %d\n", 0x835C);
#endif
#ifdef GL_TEXTURE_LOD_BIAS_R_SGIX
printf("GL_TEXTURE_LOD_BIAS_R_SGIX %d\n", 0x8190);
#endif
#ifdef GL_READ_PIXEL_DATA_RANGE_NV
printf("GL_READ_PIXEL_DATA_RANGE_NV %d\n", 0x8879);
#endif
#ifdef GL_TEXTURE_MAX_LOD
printf("GL_TEXTURE_MAX_LOD %d\n", 0x813B);
#endif
#ifdef GL_SAMPLE_ALPHA_TO_ONE_EXT
printf("GL_SAMPLE_ALPHA_TO_ONE_EXT %d\n", 0x809F);
#endif
#ifdef GL_DOT_PRODUCT_DEPTH_REPLACE_NV
printf("GL_DOT_PRODUCT_DEPTH_REPLACE_NV %d\n", 0x86ED);
#endif
#ifdef GL_CON_27_ATI
printf("GL_CON_27_ATI %d\n", 0x895C);
#endif
#ifdef glProgramParameter4dNV
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB10_4_NV
printf("GL_MAP2_VERTEX_ATTRIB10_4_NV %d\n", 0x867A);
#endif
#ifdef GL_TEXTURE_RECTANGLE_ARB
printf("GL_TEXTURE_RECTANGLE_ARB %d\n", 0x84F5);
#endif
#ifdef GL_TANGENT_ARRAY_TYPE_EXT
printf("GL_TANGENT_ARRAY_TYPE_EXT %d\n", 0x843E);
#endif
#ifdef GL_PROXY_TEXTURE_CUBE_MAP
printf("GL_PROXY_TEXTURE_CUBE_MAP %d\n", 0x851B);
#endif
#ifdef GL_TEXTURE_PRIORITY_EXT
printf("GL_TEXTURE_PRIORITY_EXT %d\n", 0x8066);
#endif
#ifdef GL_T2F_C3F_V3F
printf("GL_T2F_C3F_V3F %d\n", 0x2A2A);
#endif
#ifdef GLEE_SGIX_ycrcb_subsample
#endif
#ifdef GL_MAP2_TEXTURE_COORD_1
printf("GL_MAP2_TEXTURE_COORD_1 %d\n", 0x0DB3);
#endif
#ifdef GL_SGIX_list_priority
printf("GL_SGIX_list_priority %d\n", 1);
#endif
#ifdef GL_INT_SAMPLER_1D_ARRAY_EXT
printf("GL_INT_SAMPLER_1D_ARRAY_EXT %d\n", 0x8DCE);
#endif
#ifdef glVertexAttrib3hNV
#endif
#ifdef GL_COMBINER3_NV
printf("GL_COMBINER3_NV %d\n", 0x8553);
#endif
#ifdef glExecuteProgramNV
#endif
#ifdef GL_DSDT_MAG_VIB_NV
printf("GL_DSDT_MAG_VIB_NV %d\n", 0x86F7);
#endif
#ifdef GL_DSDT8_MAG8_NV
printf("GL_DSDT8_MAG8_NV %d\n", 0x870A);
#endif
#ifdef glColor4fNormal3fVertex3fSUN
#endif
#ifdef glVertexArrayRangeNV
#endif
#ifdef GL_STREAM_DRAW
printf("GL_STREAM_DRAW %d\n", 0x88E0);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI
printf("GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI %d\n", 0x6098);
#endif
#ifdef GL_VARIABLE_E_NV
printf("GL_VARIABLE_E_NV %d\n", 0x8527);
#endif
#ifdef __LDBL_MAX__
#endif
#ifdef glNewObjectBufferATI
#endif
#ifdef GL_SRC_ALPHA_SATURATE
printf("GL_SRC_ALPHA_SATURATE %d\n", 0x0308);
#endif
#ifdef GL_DEPTH_COMPONENT32_ARB
printf("GL_DEPTH_COMPONENT32_ARB %d\n", 0x81A7);
#endif
#ifdef GL_HALF_BIAS_NORMAL_NV
printf("GL_HALF_BIAS_NORMAL_NV %d\n", 0x853A);
#endif
#ifdef glGetVertexAttribfvNV
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD8_EXT
printf("GL_OUTPUT_TEXTURE_COORD8_EXT %d\n", 0x87A5);
#endif
#ifdef GL_PREVIOUS_EXT
printf("GL_PREVIOUS_EXT %d\n", 0x8578);
#endif
#ifdef GL_POST_TEXTURE_FILTER_SCALE_SGIX
printf("GL_POST_TEXTURE_FILTER_SCALE_SGIX %d\n", 0x817A);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_EXT
printf("GL_FOG_COORDINATE_ARRAY_EXT %d\n", 0x8457);
#endif
#ifdef GL_PRIMITIVE_RESTART_NV
printf("GL_PRIMITIVE_RESTART_NV %d\n", 0x8558);
#endif
#ifdef GL_PROGRAM_NATIVE_TEMPORARIES_ARB
printf("GL_PROGRAM_NATIVE_TEMPORARIES_ARB %d\n", 0x88A6);
#endif
#ifdef GL_CURRENT_RASTER_COLOR
printf("GL_CURRENT_RASTER_COLOR %d\n", 0x0B04);
#endif
#ifdef GL_MATRIX11_ARB
printf("GL_MATRIX11_ARB %d\n", 0x88CB);
#endif
#ifdef glCopyTexImage1DEXT
#endif
#ifdef GL_SOURCE1_ALPHA_EXT
printf("GL_SOURCE1_ALPHA_EXT %d\n", 0x8589);
#endif
#ifdef GL_PACK_CMYK_HINT_EXT
printf("GL_PACK_CMYK_HINT_EXT %d\n", 0x800E);
#endif
#ifdef GL_OPERAND2_ALPHA_EXT
printf("GL_OPERAND2_ALPHA_EXT %d\n", 0x859A);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB3_4_NV
printf("GL_MAP1_VERTEX_ATTRIB3_4_NV %d\n", 0x8663);
#endif
#ifdef GL_OBJECT_PLANE
printf("GL_OBJECT_PLANE %d\n", 0x2501);
#endif
#ifdef __GLEE_GL_SGIX_pixel_texture
printf("__GLEE_GL_SGIX_pixel_texture %d\n", 1);
#endif
#ifdef GL_VERTEX_STREAM2_ATI
printf("GL_VERTEX_STREAM2_ATI %d\n", 0x876E);
#endif
#ifdef GL_LEQUAL
printf("GL_LEQUAL %d\n", 0x0203);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT %d\n", 0x8DA7);
#endif
#ifdef GL_SGIX_fog_offset
printf("GL_SGIX_fog_offset %d\n", 1);
#endif
#ifdef GL_SOURCE0_ALPHA
printf("GL_SOURCE0_ALPHA %d\n", 0x8588);
#endif
#ifdef GL_FENCE_CONDITION_NV
printf("GL_FENCE_CONDITION_NV %d\n", 0x84F4);
#endif
#ifdef GL_CON_3_ATI
printf("GL_CON_3_ATI %d\n", 0x8944);
#endif
#ifdef GL_MAX_TEXTURE_UNITS_ARB
printf("GL_MAX_TEXTURE_UNITS_ARB %d\n", 0x84E2);
#endif
#ifdef GL_TEXTURE_WIDTH
printf("GL_TEXTURE_WIDTH %d\n", 0x1000);
#endif
#ifdef glMultiTexCoord2hNV
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX
printf("GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX %d\n", 0x8408);
#endif
#ifdef GL_XOR
printf("GL_XOR %d\n", 0x1506);
#endif
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT
printf("GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT %d\n", 0x87CB);
#endif
#ifdef GL_MODELVIEW12_ARB
printf("GL_MODELVIEW12_ARB %d\n", 0x872C);
#endif
#ifdef GL_RGB_SCALE_EXT
printf("GL_RGB_SCALE_EXT %d\n", 0x8573);
#endif
#ifdef GL_INTENSITY16_EXT
printf("GL_INTENSITY16_EXT %d\n", 0x804D);
#endif
#ifdef GL_LUMINANCE_ALPHA16I_EXT
printf("GL_LUMINANCE_ALPHA16I_EXT %d\n", 0x8D8D);
#endif
#ifdef GL_DOT_PRODUCT_NV
printf("GL_DOT_PRODUCT_NV %d\n", 0x86EC);
#endif
#ifdef GL_MAX_CONVOLUTION_WIDTH
printf("GL_MAX_CONVOLUTION_WIDTH %d\n", 0x801A);
#endif
#ifdef glWindowPos2fMESA
#endif
#ifdef GL_OP_ROUND_EXT
printf("GL_OP_ROUND_EXT %d\n", 0x8790);
#endif
#ifdef GLU_INVALID_VALUE
printf("GLU_INVALID_VALUE %d\n", 100901);
#endif
#ifdef GL_LUMINANCE_ALPHA_FLOAT32_ATI
printf("GL_LUMINANCE_ALPHA_FLOAT32_ATI %d\n", 0x8819);
#endif
#ifdef GL_IUI_N3F_V3F_EXT
printf("GL_IUI_N3F_V3F_EXT %d\n", 0x81B0);
#endif
#ifdef GL_CONST_EYE_NV
printf("GL_CONST_EYE_NV %d\n", 0x86E5);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE
printf("GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE %d\n", 0x851E);
#endif
#ifdef GL_ATI_element_array
printf("GL_ATI_element_array %d\n", 1);
#endif
#ifdef glDrawArraysEXT
#endif
#ifdef GLUT_RGB
printf("GLUT_RGB %d\n", 0);
#endif
#ifdef GL_MAP2_VERTEX_3
printf("GL_MAP2_VERTEX_3 %d\n", 0x0DB7);
#endif
#ifdef glShaderOp2EXT
#endif
#ifdef glBinormal3bvEXT
#endif
#ifdef GLEE_ARB_half_float_pixel
#endif
#ifdef glReplacementCodeuiColor3fVertex3fvSUN
#endif
#ifdef GL_CURRENT_NORMAL
printf("GL_CURRENT_NORMAL %d\n", 0x0B02);
#endif
#ifdef GL_HISTOGRAM_BLUE_SIZE
printf("GL_HISTOGRAM_BLUE_SIZE %d\n", 0x802A);
#endif
#ifdef GL_VARIANT_DATATYPE_EXT
printf("GL_VARIANT_DATATYPE_EXT %d\n", 0x87E5);
#endif
#ifdef GL_ATTRIB_STACK_DEPTH
printf("GL_ATTRIB_STACK_DEPTH %d\n", 0x0BB0);
#endif
#ifdef glVertexStream4ivATI
#endif
#ifdef GL_MODELVIEW19_ARB
printf("GL_MODELVIEW19_ARB %d\n", 0x8733);
#endif
#ifdef GL_TEXTURE_MATERIAL_PARAMETER_EXT
printf("GL_TEXTURE_MATERIAL_PARAMETER_EXT %d\n", 0x8352);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD7_EXT
printf("GL_OUTPUT_TEXTURE_COORD7_EXT %d\n", 0x87A4);
#endif
#ifdef GLEE_3DFX_multisample
#endif
#ifdef __GLEE_GL_SGIX_scalebias_hint
printf("__GLEE_GL_SGIX_scalebias_hint %d\n", 1);
#endif
#ifdef GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT
printf("GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT %d\n", 0x850E);
#endif
#ifdef GLUT_KEY_F2
printf("GLUT_KEY_F2 %d\n", 2);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_EXT
printf("GL_SECONDARY_COLOR_ARRAY_EXT %d\n", 0x845E);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT
printf("GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT %d\n", 0x8C88);
#endif
#ifdef glWindowPos3ivMESA
#endif
#ifdef GL_SHADER_TYPE
printf("GL_SHADER_TYPE %d\n", 0x8B4F);
#endif
#ifdef GL_CURRENT_BIT
printf("GL_CURRENT_BIT %d\n", 0x00000001);
#endif
#ifdef GL_ALPHA_SIGNED_SGIX
printf("GL_ALPHA_SIGNED_SGIX %d\n", 0x85E2);
#endif
#ifdef GL_SGIX_pixel_texture_bits
printf("GL_SGIX_pixel_texture_bits %d\n", 1);
#endif
#ifdef GL_NORMAL_MAP_ARB
printf("GL_NORMAL_MAP_ARB %d\n", 0x8511);
#endif
#ifdef GL_FLOAT
printf("GL_FLOAT %d\n", 0x1406);
#endif
#ifdef glTexSubImage1DEXT
#endif
#ifdef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
printf("GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT %d\n", 0x8C4F);
#endif
#ifdef GL_MULTISAMPLE_3DFX
printf("GL_MULTISAMPLE_3DFX %d\n", 0x86B2);
#endif
#ifdef GLEE_INGR_interlace_read
#endif
#ifdef GL_SOURCE3_ALPHA
printf("GL_SOURCE3_ALPHA %d\n", 0x858B);
#endif
#ifdef GLEE_SGIX_reference_plane
#endif
#ifdef GL_MATRIX7_NV
printf("GL_MATRIX7_NV %d\n", 0x8637);
#endif
#ifdef GL_FLOAT_RGB_NV
printf("GL_FLOAT_RGB_NV %d\n", 0x8882);
#endif
#ifdef GLUT_WINDOW_BLUE_SIZE
printf("GLUT_WINDOW_BLUE_SIZE %d\n", 109);
#endif
#ifdef glNormalStream3bATI
#endif
#ifdef __LDBL_DENORM_MIN__
#endif
#ifdef GL_MODELVIEW13_ARB
printf("GL_MODELVIEW13_ARB %d\n", 0x872D);
#endif
#ifdef GL_MAX_FRAGMENT_LIGHTS_SGIX
printf("GL_MAX_FRAGMENT_LIGHTS_SGIX %d\n", 0x8404);
#endif
#ifdef GL_PALETTE4_RGBA8_OES
printf("GL_PALETTE4_RGBA8_OES %d\n", 0x8B91);
#endif
#ifdef GLU_NURBS_COLOR_DATA_EXT
printf("GLU_NURBS_COLOR_DATA_EXT %d\n", 100173);
#endif
#ifdef GLUT_KEY_F10
printf("GLUT_KEY_F10 %d\n", 10);
#endif
#ifdef GLEE_NV_texgen_reflection
#endif
#ifdef GL_INT_SAMPLER_CUBE_EXT
printf("GL_INT_SAMPLER_CUBE_EXT %d\n", 0x8DCC);
#endif
#ifdef GL_EXT_stencil_clear_tag
printf("GL_EXT_stencil_clear_tag %d\n", 1);
#endif
#ifdef __FLT_RADIX__
printf("__FLT_RADIX__ %d\n", 2);
#endif
#ifdef glVertexAttribs1hvNV
#endif
#ifdef GLU_TESS_ERROR7
printf("GLU_TESS_ERROR7 %d\n", 100157);
#endif
#ifdef __GLEE_GL_ATI_map_object_buffer
printf("__GLEE_GL_ATI_map_object_buffer %d\n", 1);
#endif
#ifdef GL_SGIX_ycrcb
printf("GL_SGIX_ycrcb %d\n", 1);
#endif
#ifdef GL_4PASS_3_EXT
printf("GL_4PASS_3_EXT %d\n", 0x80A7);
#endif
#ifdef GL_IMAGE_CUBIC_WEIGHT_HP
printf("GL_IMAGE_CUBIC_WEIGHT_HP %d\n", 0x815E);
#endif
#ifdef glTexCoord3hNV
#endif
#ifdef GL_STATIC_COPY_ARB
printf("GL_STATIC_COPY_ARB %d\n", 0x88E6);
#endif
#ifdef GL_COLOR_MATRIX_STACK_DEPTH
printf("GL_COLOR_MATRIX_STACK_DEPTH %d\n", 0x80B2);
#endif
#ifdef GL_TEXTURE30
printf("GL_TEXTURE30 %d\n", 0x84DE);
#endif
#ifdef glGlobalAlphaFactoriSUN
#endif
#ifdef GLEE_INTEL_texture_scissor
#endif
#ifdef GL_EXT_framebuffer_blit
printf("GL_EXT_framebuffer_blit %d\n", 1);
#endif
#ifdef GL_INTENSITY
printf("GL_INTENSITY %d\n", 0x8049);
#endif
#ifdef GL_INDEX_LOGIC_OP
printf("GL_INDEX_LOGIC_OP %d\n", 0x0BF1);
#endif
#ifdef GL_LUMINANCE32I_EXT
printf("GL_LUMINANCE32I_EXT %d\n", 0x8D86);
#endif
#ifdef glCullParameterdvEXT
#endif
#ifdef GL_POST_COLOR_MATRIX_ALPHA_BIAS
printf("GL_POST_COLOR_MATRIX_ALPHA_BIAS %d\n", 0x80BB);
#endif
#ifdef GL_SAMPLE_BUFFERS_EXT
printf("GL_SAMPLE_BUFFERS_EXT %d\n", 0x80A8);
#endif
#ifdef GLEE_ARB_texture_compression
#endif
#ifdef GL_CURRENT_COLOR
printf("GL_CURRENT_COLOR %d\n", 0x0B00);
#endif
#ifdef GL_IGNORE_BORDER_HP
printf("GL_IGNORE_BORDER_HP %d\n", 0x8150);
#endif
#ifdef GL_QUAD_ALPHA4_SGIS
printf("GL_QUAD_ALPHA4_SGIS %d\n", 0x811E);
#endif
#ifdef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
printf("GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT %d\n", 0x8C4E);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD22_EXT
printf("GL_OUTPUT_TEXTURE_COORD22_EXT %d\n", 0x87B3);
#endif
#ifdef GL_TEXTURE_CONSTANT_DATA_SUNX
printf("GL_TEXTURE_CONSTANT_DATA_SUNX %d\n", 0x81D6);
#endif
#ifdef GLU_NURBS_ERROR16
printf("GLU_NURBS_ERROR16 %d\n", 100266);
#endif
#ifdef GL_CONSTANT_ALPHA_EXT
printf("GL_CONSTANT_ALPHA_EXT %d\n", 0x8003);
#endif
#ifdef GL_SPRITE_MODE_SGIX
printf("GL_SPRITE_MODE_SGIX %d\n", 0x8149);
#endif
#ifdef glDeleteFencesNV
#endif
#ifdef GL_NEAREST_CLIPMAP_LINEAR_SGIX
printf("GL_NEAREST_CLIPMAP_LINEAR_SGIX %d\n", 0x844E);
#endif
#ifdef GL_SAMPLER_2D_RECT_SHADOW_ARB
printf("GL_SAMPLER_2D_RECT_SHADOW_ARB %d\n", 0x8B64);
#endif
#ifdef GL_UNSIGNED_SHORT_8_8_MESA
printf("GL_UNSIGNED_SHORT_8_8_MESA %d\n", 0x85BA);
#endif
#ifdef GLEE_SGIX_blend_alpha_minmax
#endif
#ifdef GL_CLIENT_ACTIVE_TEXTURE_ARB
printf("GL_CLIENT_ACTIVE_TEXTURE_ARB %d\n", 0x84E1);
#endif
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
printf("GL_COMPRESSED_RGBA_S3TC_DXT1_EXT %d\n", 0x83F1);
#endif
#ifdef __GLEE_GL_SGIX_ir_instrument1
printf("__GLEE_GL_SGIX_ir_instrument1 %d\n", 1);
#endif
#ifdef GL_TEXTURE_ENV_COLOR
printf("GL_TEXTURE_ENV_COLOR %d\n", 0x2201);
#endif
#ifdef GL_PACK_SWAP_BYTES
printf("GL_PACK_SWAP_BYTES %d\n", 0x0D00);
#endif
#ifdef GLEE_EXT_index_texture
#endif
#ifdef GLU_TESS_WINDING_NEGATIVE
printf("GLU_TESS_WINDING_NEGATIVE %d\n", 100133);
#endif
#ifdef GL_WRITE_ONLY_ARB
printf("GL_WRITE_ONLY_ARB %d\n", 0x88B9);
#endif
#ifdef GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
printf("GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT %d\n", 0x87C8);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM
printf("GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM %d\n", 103087);
#endif
#ifdef GL_PROGRAM_ATTRIBS_ARB
printf("GL_PROGRAM_ATTRIBS_ARB %d\n", 0x88AC);
#endif
#ifdef GL_NEAREST_CLIPMAP_NEAREST_SGIX
printf("GL_NEAREST_CLIPMAP_NEAREST_SGIX %d\n", 0x844D);
#endif
#ifdef GL_ENV_ADD_EXT
printf("GL_ENV_ADD_EXT %d\n", 0);
#endif
#ifdef glMultiModeDrawElementsIBM
#endif
#ifdef GLEE_EXT_coordinate_frame
#endif
#ifdef GLU_TESS_ERROR_DATA
printf("GLU_TESS_ERROR_DATA %d\n", 100109);
#endif
#ifdef GL_VERTEX_PROGRAM_TWO_SIDE_ARB
printf("GL_VERTEX_PROGRAM_TWO_SIDE_ARB %d\n", 0x8643);
#endif
#ifdef GL_SGIS_fog_function
printf("GL_SGIS_fog_function %d\n", 1);
#endif
#ifdef GLEE_SGIX_async_pixel
#endif
#ifdef GLU_NURBS_ERROR25
printf("GLU_NURBS_ERROR25 %d\n", 100275);
#endif
#ifdef GL_3D_COLOR_TEXTURE
printf("GL_3D_COLOR_TEXTURE %d\n", 0x0603);
#endif
#ifdef GL_FRAGMENT_LIGHT4_SGIX
printf("GL_FRAGMENT_LIGHT4_SGIX %d\n", 0x8410);
#endif
#ifdef GLEE_EXT_index_array_formats
#endif
#ifdef GL_RGBA
printf("GL_RGBA %d\n", 0x1908);
#endif
#ifdef GL_TEXTURE31_ARB
printf("GL_TEXTURE31_ARB %d\n", 0x84DF);
#endif
#ifdef GL_TEXTURE_GEN_Q
printf("GL_TEXTURE_GEN_Q %d\n", 0x0C63);
#endif
#ifdef GL_MAP2_GRID_DOMAIN
printf("GL_MAP2_GRID_DOMAIN %d\n", 0x0DD2);
#endif
#ifdef __GLEE_GL_EXT_index_array_formats
printf("__GLEE_GL_EXT_index_array_formats %d\n", 1);
#endif
#ifdef GLEE_SGIS_texture_edge_clamp
#endif
#ifdef GL_CLAMP_TO_EDGE
printf("GL_CLAMP_TO_EDGE %d\n", 0x812F);
#endif
#ifdef GL_NV_texture_shader3
printf("GL_NV_texture_shader3 %d\n", 1);
#endif
#ifdef GL_POINT_TOKEN
printf("GL_POINT_TOKEN %d\n", 0x0701);
#endif
#ifdef GL_MODELVIEW0_ARB
printf("GL_MODELVIEW0_ARB %d\n", 0x1700);
#endif
#ifdef GL_SIGNED_LUMINANCE_ALPHA_NV
printf("GL_SIGNED_LUMINANCE_ALPHA_NV %d\n", 0x8703);
#endif
#ifdef glColorSubTableEXT
#endif
#ifdef GL_SOURCE5_ALPHA_ARB
printf("GL_SOURCE5_ALPHA_ARB %d\n", 0x858D);
#endif
#ifdef GL_SGIX_ir_instrument1
printf("GL_SGIX_ir_instrument1 %d\n", 1);
#endif
#ifdef GL_LIST_BASE
printf("GL_LIST_BASE %d\n", 0x0B32);
#endif
#ifdef GL_POST_CONVOLUTION_COLOR_TABLE_SGI
printf("GL_POST_CONVOLUTION_COLOR_TABLE_SGI %d\n", 0x80D1);
#endif
#ifdef glGenFencesNV
#endif
#ifdef GL_MODELVIEW26_ARB
printf("GL_MODELVIEW26_ARB %d\n", 0x873A);
#endif
#ifdef GL_DEPTH_COMPONENT16_SGIX
printf("GL_DEPTH_COMPONENT16_SGIX %d\n", 0x81A5);
#endif
#ifdef GL_MIRRORED_REPEAT
printf("GL_MIRRORED_REPEAT %d\n", 0x8370);
#endif
#ifdef __GLEE_GL_MESA_ycbcr_texture
printf("__GLEE_GL_MESA_ycbcr_texture %d\n", 1);
#endif
#ifdef GL_INTERPOLATE_ARB
printf("GL_INTERPOLATE_ARB %d\n", 0x8575);
#endif
#ifdef GL_STREAM_COPY_ARB
printf("GL_STREAM_COPY_ARB %d\n", 0x88E2);
#endif
#ifdef __GLEE_GL_NV_vertex_program2
printf("__GLEE_GL_NV_vertex_program2 %d\n", 1);
#endif
#ifdef GL_STENCIL_BACK_FAIL
printf("GL_STENCIL_BACK_FAIL %d\n", 0x8801);
#endif
#ifdef GL_SRC6_ALPHA
printf("GL_SRC6_ALPHA %d\n", 0x858E);
#endif
#ifdef GL_CULL_FRAGMENT_NV
printf("GL_CULL_FRAGMENT_NV %d\n", 0x86E7);
#endif
#ifdef GL_STENCIL_BACK_FUNC
printf("GL_STENCIL_BACK_FUNC %d\n", 0x8800);
#endif
#ifdef GL_NV_fragment_program_option
printf("GL_NV_fragment_program_option %d\n", 1);
#endif
#ifdef GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV
printf("GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV %d\n", 0x8850);
#endif
#ifdef GL_LOCAL_CONSTANT_VALUE_EXT
printf("GL_LOCAL_CONSTANT_VALUE_EXT %d\n", 0x87EC);
#endif
#ifdef GL_ALPHA32I_EXT
printf("GL_ALPHA32I_EXT %d\n", 0x8D84);
#endif
#ifdef GLEE_NV_texture_shader3
#endif
#ifdef GL_T2F_IUI_V2F_EXT
printf("GL_T2F_IUI_V2F_EXT %d\n", 0x81B1);
#endif
#ifdef GL_ALPHA8_EXT
printf("GL_ALPHA8_EXT %d\n", 0x803C);
#endif
#ifdef __LONG_LONG_MAX__
#endif
#ifdef GLU_TESS_ERROR8
printf("GLU_TESS_ERROR8 %d\n", 100158);
#endif
#ifdef GLEE_SGIS_texture_color_mask
#endif
#ifdef GL_VERSION_1_3
printf("GL_VERSION_1_3 %d\n", 1);
#endif
#ifdef GL_OBJECT_LINEAR
printf("GL_OBJECT_LINEAR %d\n", 0x2401);
#endif
#ifdef GLEE_3DFX_tbuffer
#endif
#ifdef __FLT_DENORM_MIN__
#endif
#ifdef GL_COLOR_FLOAT_APPLE
printf("GL_COLOR_FLOAT_APPLE %d\n", 0x8A0F);
#endif
#ifdef GL_HISTOGRAM_LUMINANCE_SIZE_EXT
printf("GL_HISTOGRAM_LUMINANCE_SIZE_EXT %d\n", 0x802C);
#endif
#ifdef GL_QUAD_STRIP
printf("GL_QUAD_STRIP %d\n", 0x0008);
#endif
#ifdef GL_OPERAND3_ALPHA_ARB
printf("GL_OPERAND3_ALPHA_ARB %d\n", 0x859B);
#endif
#ifdef GL_HALF_FLOAT_ARB
printf("GL_HALF_FLOAT_ARB %d\n", 0x140B);
#endif
#ifdef GLEE_ARB_draw_buffers
#endif
#ifdef GL_HISTOGRAM_LUMINANCE_SIZE
printf("GL_HISTOGRAM_LUMINANCE_SIZE %d\n", 0x802C);
#endif
#ifdef GL_COMPRESSED_SRGB_S3TC_DXT1_EXT
printf("GL_COMPRESSED_SRGB_S3TC_DXT1_EXT %d\n", 0x8C4C);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX
printf("GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX %d\n", 0x840B);
#endif
#ifdef GLEE_NV_texture_shader
#endif
#ifdef GL_EMBOSS_CONSTANT_NV
printf("GL_EMBOSS_CONSTANT_NV %d\n", 0x855E);
#endif
#ifdef GL_UNPACK_CLIENT_STORAGE_APPLE
printf("GL_UNPACK_CLIENT_STORAGE_APPLE %d\n", 0x85B2);
#endif
#ifdef GLU_NURBS_NORMAL_DATA_EXT
printf("GLU_NURBS_NORMAL_DATA_EXT %d\n", 100172);
#endif
#ifdef glGenAsyncMarkersSGIX
#endif
#ifdef glBindParameterEXT
#endif
#ifdef GL_HILO_NV
printf("GL_HILO_NV %d\n", 0x86F4);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL
printf("GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL %d\n", 0x83F8);
#endif
#ifdef GL_NV_texture_env_combine4
printf("GL_NV_texture_env_combine4 %d\n", 1);
#endif
#ifdef GLU_TESS_NEED_COMBINE_CALLBACK
printf("GLU_TESS_NEED_COMBINE_CALLBACK %d\n", 100156);
#endif
#ifdef GL_NV_register_combiners2
printf("GL_NV_register_combiners2 %d\n", 1);
#endif
#ifdef GL_MAX_ATTRIB_STACK_DEPTH
printf("GL_MAX_ATTRIB_STACK_DEPTH %d\n", 0x0D35);
#endif
#ifdef glFragmentLightModeliSGIX
#endif
#ifdef GL_FOG_OFFSET_SGIX
printf("GL_FOG_OFFSET_SGIX %d\n", 0x8198);
#endif
#ifdef GL_LUMINANCE12_EXT
printf("GL_LUMINANCE12_EXT %d\n", 0x8041);
#endif
#ifdef GL_SMOOTH
printf("GL_SMOOTH %d\n", 0x1D01);
#endif
#ifdef GL_ATTRIB_ARRAY_SIZE_NV
printf("GL_ATTRIB_ARRAY_SIZE_NV %d\n", 0x8623);
#endif
#ifdef GLEE_SGIX_ycrcb
#endif
#ifdef __GLEE_GL_OML_subsample
printf("__GLEE_GL_OML_subsample %d\n", 1);
#endif
#ifdef GL_AND
printf("GL_AND %d\n", 0x1501);
#endif
#ifdef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI
printf("GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI %d\n", 0x80D4);
#endif
#ifdef GL_FEEDBACK_BUFFER_SIZE
printf("GL_FEEDBACK_BUFFER_SIZE %d\n", 0x0DF1);
#endif
#ifdef GL_SOURCE3_RGB_NV
printf("GL_SOURCE3_RGB_NV %d\n", 0x8583);
#endif
#ifdef glGetObjectBufferivATI
#endif
#ifdef GLUT_NUM_SPACEBALL_BUTTONS
printf("GLUT_NUM_SPACEBALL_BUTTONS %d\n", 606);
#endif
#ifdef GLU_OUT_OF_MEMORY
printf("GLU_OUT_OF_MEMORY %d\n", 100902);
#endif
#ifdef GL_COMPRESSED_SRGB_ALPHA_EXT
printf("GL_COMPRESSED_SRGB_ALPHA_EXT %d\n", 0x8C49);
#endif
#ifdef GL_REG_10_ATI
printf("GL_REG_10_ATI %d\n", 0x892B);
#endif
#ifdef GL_ALPHA_MAX_SGIX
printf("GL_ALPHA_MAX_SGIX %d\n", 0x8321);
#endif
#ifdef glListParameterivSGIX
#endif
#ifdef GLU_OUTLINE_PATCH
printf("GLU_OUTLINE_PATCH %d\n", 100241);
#endif
#ifdef GL_CON_20_ATI
printf("GL_CON_20_ATI %d\n", 0x8955);
#endif
#ifdef glSampleMaskSGIS
#endif
#ifdef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI
printf("GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI %d\n", 0x80D5);
#endif
#ifdef GLEE_NV_fog_distance
#endif
#ifdef GL_SLUMINANCE_ALPHA
printf("GL_SLUMINANCE_ALPHA %d\n", 0x8C44);
#endif
#ifdef GL_PIXEL_COUNT_AVAILABLE_NV
printf("GL_PIXEL_COUNT_AVAILABLE_NV %d\n", 0x8867);
#endif
#ifdef GLEE_EXT_separate_specular_color
#endif
#ifdef glNormalStream3iATI
#endif
#ifdef GL_BUMP_TEX_UNITS_ATI
printf("GL_BUMP_TEX_UNITS_ATI %d\n", 0x8778);
#endif
#ifdef __SSE__
printf("__SSE__ %d\n", 1);
#endif
#ifdef GL_SGIX_ycrcb_subsample
printf("GL_SGIX_ycrcb_subsample %d\n", 1);
#endif
#ifdef GL_TEXTURE_COLOR_WRITEMASK_SGIS
printf("GL_TEXTURE_COLOR_WRITEMASK_SGIS %d\n", 0x81EF);
#endif
#ifdef GL_INVERSE_TRANSPOSE_NV
printf("GL_INVERSE_TRANSPOSE_NV %d\n", 0x862D);
#endif
#ifdef GL_REG_17_ATI
printf("GL_REG_17_ATI %d\n", 0x8932);
#endif
#ifdef __GLEE_GL_HP_occlusion_test
printf("__GLEE_GL_HP_occlusion_test %d\n", 1);
#endif
#ifdef GLEE_SGIX_sprite
#endif
#ifdef GL_MODULATE_SUBTRACT_ATI
printf("GL_MODULATE_SUBTRACT_ATI %d\n", 0x8746);
#endif
#ifdef GLU_VERSION_1_3
printf("GLU_VERSION_1_3 %d\n", 1);
#endif
#ifdef GL_RGB16_SIGNED_SGIX
printf("GL_RGB16_SIGNED_SGIX %d\n", 0x85E6);
#endif
#ifdef GL_BLEND_EQUATION_RGB_EXT
printf("GL_BLEND_EQUATION_RGB_EXT %d\n", 0x8009);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB %d\n", 0x8519);
#endif
#ifdef glVariantdvEXT
#endif
#ifdef glShaderOp1EXT
#endif
#ifdef GL_BITMAP_TOKEN
printf("GL_BITMAP_TOKEN %d\n", 0x0704);
#endif
#ifdef GL_ATI_vertex_attrib_array_object
printf("GL_ATI_vertex_attrib_array_object %d\n", 1);
#endif
#ifdef GLEE_NV_fragment_program2
#endif
#ifdef GL_LUMINANCE16
printf("GL_LUMINANCE16 %d\n", 0x8042);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB7_NV
printf("GL_EVAL_VERTEX_ATTRIB7_NV %d\n", 0x86CD);
#endif
#ifdef GL_PIXEL_MIN_FILTER_EXT
printf("GL_PIXEL_MIN_FILTER_EXT %d\n", 0x8332);
#endif
#ifdef GL_ARB_shader_texture_lod
printf("GL_ARB_shader_texture_lod %d\n", 1);
#endif
#ifdef GL_MAX_3D_TEXTURE_SIZE
printf("GL_MAX_3D_TEXTURE_SIZE %d\n", 0x8073);
#endif
#ifdef GL_GREEN_BIAS
printf("GL_GREEN_BIAS %d\n", 0x0D19);
#endif
#ifdef GLU_AUTO_LOAD_MATRIX
printf("GLU_AUTO_LOAD_MATRIX %d\n", 100200);
#endif
#ifdef GL_SHADOW_ATTENUATION_EXT
printf("GL_SHADOW_ATTENUATION_EXT %d\n", 0x834E);
#endif
#ifdef GL_TEXTURE_BINDING_1D
printf("GL_TEXTURE_BINDING_1D %d\n", 0x8068);
#endif
#ifdef GL_SPRITE_EYE_ALIGNED_SGIX
printf("GL_SPRITE_EYE_ALIGNED_SGIX %d\n", 0x814E);
#endif
#ifdef __GLEE_GL_EXT_convolution
printf("__GLEE_GL_EXT_convolution %d\n", 1);
#endif
#ifdef GL_DEPENDENT_AR_TEXTURE_2D_NV
printf("GL_DEPENDENT_AR_TEXTURE_2D_NV %d\n", 0x86E9);
#endif
#ifdef GL_SLUMINANCE_EXT
printf("GL_SLUMINANCE_EXT %d\n", 0x8C46);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
printf("GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB %d\n", 0x8810);
#endif
#ifdef GLU_NURBS_ERROR8
printf("GLU_NURBS_ERROR8 %d\n", 100258);
#endif
#ifdef GL_ACTIVE_ATTRIBUTES
printf("GL_ACTIVE_ATTRIBUTES %d\n", 0x8B89);
#endif
#ifdef __GLEE_GL_NV_vertex_program
printf("__GLEE_GL_NV_vertex_program %d\n", 1);
#endif
#ifdef glVertexStream2dATI
#endif
#ifdef GL_INTENSITY16F_ARB
printf("GL_INTENSITY16F_ARB %d\n", 0x881D);
#endif
#ifdef GL_CONVOLUTION_HEIGHT
printf("GL_CONVOLUTION_HEIGHT %d\n", 0x8019);
#endif
#ifdef GL_DEPTH_COMPONENT16_ARB
printf("GL_DEPTH_COMPONENT16_ARB %d\n", 0x81A5);
#endif
#ifdef GL_CON_31_ATI
printf("GL_CON_31_ATI %d\n", 0x8960);
#endif
#ifdef GL_PROGRAM_ADDRESS_REGISTERS_ARB
printf("GL_PROGRAM_ADDRESS_REGISTERS_ARB %d\n", 0x88B0);
#endif
#ifdef GLEE_ARB_color_buffer_float
#endif
#ifdef GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX
printf("GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX %d\n", 0x817B);
#endif
#ifdef glGetConvolutionParameterivEXT
#endif
#ifdef GL_SOURCE1_RGB
printf("GL_SOURCE1_RGB %d\n", 0x8581);
#endif
#ifdef glFragmentMaterialivSGIX
#endif
#ifdef GL_VERTEX_ARRAY_LIST_IBM
printf("GL_VERTEX_ARRAY_LIST_IBM %d\n", 103070);
#endif
#ifdef GL_TEXTURE19
printf("GL_TEXTURE19 %d\n", 0x84D3);
#endif
#ifdef GLEE_SUN_triangle_list
#endif
#ifdef GLUT_SINGLE
printf("GLUT_SINGLE %d\n", 0);
#endif
#ifdef GL_VERTEX_PROGRAM_POINT_SIZE
printf("GL_VERTEX_PROGRAM_POINT_SIZE %d\n", 0x8642);
#endif
#ifdef GL_CLIENT_PIXEL_STORE_BIT
printf("GL_CLIENT_PIXEL_STORE_BIT %d\n", 0x00000001);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_EXT
printf("GL_PIXEL_UNPACK_BUFFER_EXT %d\n", 0x88EC);
#endif
#ifdef GL_TRIANGLES_ADJACENCY_EXT
printf("GL_TRIANGLES_ADJACENCY_EXT %d\n", 0xC);
#endif
#ifdef GL_TEXTURE13_ARB
printf("GL_TEXTURE13_ARB %d\n", 0x84CD);
#endif
#ifdef GL_INTENSITY_FLOAT16_ATI
printf("GL_INTENSITY_FLOAT16_ATI %d\n", 0x881D);
#endif
#ifdef GL_OML_subsample
printf("GL_OML_subsample %d\n", 1);
#endif
#ifdef GL_TEXTURE26
printf("GL_TEXTURE26 %d\n", 0x84DA);
#endif
#ifdef glGetObjectBufferfvATI
#endif
#ifdef GL_INCR_WRAP
printf("GL_INCR_WRAP %d\n", 0x8507);
#endif
#ifdef GL_DOT3_RGB
printf("GL_DOT3_RGB %d\n", 0x86AE);
#endif
#ifdef GL_NEGATE_BIT_ATI
printf("GL_NEGATE_BIT_ATI %d\n", 0x00000004);
#endif
#ifdef GL_SCREEN_COORDINATES_REND
printf("GL_SCREEN_COORDINATES_REND %d\n", 0x8490);
#endif
#ifdef glGetFenceivNV
#endif
#ifdef glVertexStream4dvATI
#endif
#ifdef glVertexAttribPointerNV
#endif
#ifdef GL_COMBINE
printf("GL_COMBINE %d\n", 0x8570);
#endif
#ifdef GL_VERTEX_SHADER_VARIANTS_EXT
printf("GL_VERTEX_SHADER_VARIANTS_EXT %d\n", 0x87D0);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB %d\n", 0x8645);
#endif
#ifdef GL_TEXTURE18_ARB
printf("GL_TEXTURE18_ARB %d\n", 0x84D2);
#endif
#ifdef glTangent3fvEXT
#endif
#ifdef GL_FOG_DENSITY
printf("GL_FOG_DENSITY %d\n", 0x0B62);
#endif
#ifdef GL_TRIANGLE_MESH_SUN
printf("GL_TRIANGLE_MESH_SUN %d\n", 0x8615);
#endif
#ifdef __APPLE__
printf("__APPLE__ %d\n", 1);
#endif
#ifdef GL_OP_MOV_EXT
printf("GL_OP_MOV_EXT %d\n", 0x8799);
#endif
#ifdef GL_POINT_SPRITE_ARB
printf("GL_POINT_SPRITE_ARB %d\n", 0x8861);
#endif
#ifdef GL_C4UB_V3F
printf("GL_C4UB_V3F %d\n", 0x2A23);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB11_4_NV
printf("GL_MAP1_VERTEX_ATTRIB11_4_NV %d\n", 0x866B);
#endif
#ifdef glGetPixelTexGenParameterivSGIS
#endif
#ifdef GLUT_OVERLAY_POSSIBLE
printf("GLUT_OVERLAY_POSSIBLE %d\n", 800);
#endif
#ifdef GL_CURRENT_OCCLUSION_QUERY_ID_NV
printf("GL_CURRENT_OCCLUSION_QUERY_ID_NV %d\n", 0x8865);
#endif
#ifdef GL_ALLOW_DRAW_MEM_HINT_PGI
printf("GL_ALLOW_DRAW_MEM_HINT_PGI %d\n", 0x1A211);
#endif
#ifdef glNormalStream3dvATI
#endif
#ifdef GL_SAMPLES_PASSED
printf("GL_SAMPLES_PASSED %d\n", 0x8914);
#endif
#ifdef GL_CURRENT_QUERY_ARB
printf("GL_CURRENT_QUERY_ARB %d\n", 0x8865);
#endif
#ifdef GL_CONVOLUTION_2D
printf("GL_CONVOLUTION_2D %d\n", 0x8011);
#endif
#ifdef GLUT_WINDOW_ACCUM_RED_SIZE
printf("GLUT_WINDOW_ACCUM_RED_SIZE %d\n", 111);
#endif
#ifdef GLUT_VIDEO_RESIZE_HEIGHT
printf("GLUT_VIDEO_RESIZE_HEIGHT %d\n", 909);
#endif
#ifdef glReplacementCodePointerSUN
#endif
#ifdef GL_DRAW_BUFFER10
printf("GL_DRAW_BUFFER10 %d\n", 0x882F);
#endif
#ifdef GL_COLOR_TABLE_INTENSITY_SIZE_SGI
printf("GL_COLOR_TABLE_INTENSITY_SIZE_SGI %d\n", 0x80DF);
#endif
#ifdef __GLEE_GL_EXT_blend_logic_op
printf("__GLEE_GL_EXT_blend_logic_op %d\n", 1);
#endif
#ifdef __FLT_MAX__
#endif
#ifdef GL_STENCIL_INDEX4_EXT
printf("GL_STENCIL_INDEX4_EXT %d\n", 0x8D47);
#endif
#ifdef GL_TEXTURE_MAX_CLAMP_R_SGIX
printf("GL_TEXTURE_MAX_CLAMP_R_SGIX %d\n", 0x836B);
#endif
#ifdef GL_CND0_ATI
printf("GL_CND0_ATI %d\n", 0x896B);
#endif
#ifdef GL_INT_SAMPLER_2D_EXT
printf("GL_INT_SAMPLER_2D_EXT %d\n", 0x8DCA);
#endif
#ifdef glGetFragmentLightfvEXT
#endif
#ifdef GL_VERTEX_STREAM7_ATI
printf("GL_VERTEX_STREAM7_ATI %d\n", 0x8773);
#endif
#ifdef GL_TEXTURE_DS_SIZE_NV
printf("GL_TEXTURE_DS_SIZE_NV %d\n", 0x871D);
#endif
#ifdef GL_ARB_depth_texture
printf("GL_ARB_depth_texture %d\n", 1);
#endif
#ifdef GL_DEPTH_FUNC
printf("GL_DEPTH_FUNC %d\n", 0x0B74);
#endif
#ifdef GLU_DISPLAY_MODE
printf("GLU_DISPLAY_MODE %d\n", 100204);
#endif
#ifdef GL_WRAP_BORDER_SUN
printf("GL_WRAP_BORDER_SUN %d\n", 0x81D4);
#endif
#ifdef GL_EXP2
printf("GL_EXP2 %d\n", 0x0801);
#endif
#ifdef GL_BLEND_DST_ALPHA_EXT
printf("GL_BLEND_DST_ALPHA_EXT %d\n", 0x80CA);
#endif
#ifdef GL_MINMAX_FORMAT
printf("GL_MINMAX_FORMAT %d\n", 0x802F);
#endif
#ifdef GL_DECR_WRAP
printf("GL_DECR_WRAP %d\n", 0x8508);
#endif
#ifdef GL_LUMINANCE16_ALPHA16
printf("GL_LUMINANCE16_ALPHA16 %d\n", 0x8048);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB2_4_NV
printf("GL_MAP1_VERTEX_ATTRIB2_4_NV %d\n", 0x8662);
#endif
#ifdef GL_POST_COLOR_MATRIX_ALPHA_SCALE
printf("GL_POST_COLOR_MATRIX_ALPHA_SCALE %d\n", 0x80B7);
#endif
#ifdef GL_EXT_abgr
printf("GL_EXT_abgr %d\n", 1);
#endif
#ifdef GL_MAX_CONVOLUTION_HEIGHT
printf("GL_MAX_CONVOLUTION_HEIGHT %d\n", 0x801B);
#endif
#ifdef GL_CURRENT_VERTEX_EXT
printf("GL_CURRENT_VERTEX_EXT %d\n", 0x87E2);
#endif
#ifdef GL_EXT_separate_specular_color
printf("GL_EXT_separate_specular_color %d\n", 1);
#endif
#ifdef GL_SGIX_shadow_ambient
printf("GL_SGIX_shadow_ambient %d\n", 1);
#endif
#ifdef GL_SHININESS
printf("GL_SHININESS %d\n", 0x1601);
#endif
#ifdef GL_POLYGON_TOKEN
printf("GL_POLYGON_TOKEN %d\n", 0x0703);
#endif
#ifdef GL_CON_17_ATI
printf("GL_CON_17_ATI %d\n", 0x8952);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
printf("GL_TEXTURE_COORD_ARRAY_STRIDE %d\n", 0x808A);
#endif
#ifdef __USER_LABEL_PREFIX__
#endif
#ifdef glColor3hNV
#endif
#ifdef GL_SIGNED_HILO_NV
printf("GL_SIGNED_HILO_NV %d\n", 0x86F9);
#endif
#ifdef GL_AMBIENT_AND_DIFFUSE
printf("GL_AMBIENT_AND_DIFFUSE %d\n", 0x1602);
#endif
#ifdef GL_FRAGMENT_LIGHTING_SGIX
printf("GL_FRAGMENT_LIGHTING_SGIX %d\n", 0x8400);
#endif
#ifdef glVertexAttrib1fvNV
#endif
#ifdef GL_BACK
printf("GL_BACK %d\n", 0x0405);
#endif
#ifdef __GLEE_GL_SGIX_pixel_tiles
printf("__GLEE_GL_SGIX_pixel_tiles %d\n", 1);
#endif
#ifdef glCopyTexImage2DEXT
#endif
#ifdef GL_COPY_INVERTED
printf("GL_COPY_INVERTED %d\n", 0x150C);
#endif
#ifdef glVertexAttrib4dvNV
#endif
#ifdef glGetArrayObjectfvATI
#endif
#ifdef glSampleMaskEXT
#endif
#ifdef GL_FILTER4_SGIS
printf("GL_FILTER4_SGIS %d\n", 0x8146);
#endif
#ifdef GL_PN_TRIANGLES_ATI
printf("GL_PN_TRIANGLES_ATI %d\n", 0x6090);
#endif
#ifdef GL_RGB_SCALE
printf("GL_RGB_SCALE %d\n", 0x8573);
#endif
#ifdef GL_2PASS_1_EXT
printf("GL_2PASS_1_EXT %d\n", 0x80A3);
#endif
#ifdef GL_ARRAY_ELEMENT_LOCK_COUNT_EXT
printf("GL_ARRAY_ELEMENT_LOCK_COUNT_EXT %d\n", 0x81A9);
#endif
#ifdef GL_HISTOGRAM_SINK
printf("GL_HISTOGRAM_SINK %d\n", 0x802D);
#endif
#ifdef glIsTextureEXT
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD30_EXT
printf("GL_OUTPUT_TEXTURE_COORD30_EXT %d\n", 0x87BB);
#endif
#ifdef glDeleteVertexShaderEXT
#endif
#ifdef GL_COMPARE_R_TO_TEXTURE
printf("GL_COMPARE_R_TO_TEXTURE %d\n", 0x884E);
#endif
#ifdef GL_ALL_ATTRIB_BITS
printf("GL_ALL_ATTRIB_BITS %d\n", 0x000fffff);
#endif
#ifdef GLEE_EXT_blend_func_separate
#endif
#ifdef GLEE_ARB_vertex_blend
#endif
#ifdef GL_LINEAR_ATTENUATION
printf("GL_LINEAR_ATTENUATION %d\n", 0x1208);
#endif
#ifdef GLEE_EXT_texture_compression_s3tc
#endif
#ifdef GL_REG_16_ATI
printf("GL_REG_16_ATI %d\n", 0x8931);
#endif
#ifdef GLUT_JOYSTICK_BUTTON_B
printf("GLUT_JOYSTICK_BUTTON_B %d\n", 2);
#endif
#ifdef GL_ALPHA32UI_EXT
printf("GL_ALPHA32UI_EXT %d\n", 0x8D72);
#endif
#ifdef GL_TRACK_MATRIX_TRANSFORM_NV
printf("GL_TRACK_MATRIX_TRANSFORM_NV %d\n", 0x8649);
#endif
#ifdef GL_LIGHT4
printf("GL_LIGHT4 %d\n", 0x4004);
#endif
#ifdef GL_CONSTANT_ALPHA
printf("GL_CONSTANT_ALPHA %d\n", 0x8003);
#endif
#ifdef GL_4PASS_2_EXT
printf("GL_4PASS_2_EXT %d\n", 0x80A6);
#endif
#ifdef GL_INDEX_MODE
printf("GL_INDEX_MODE %d\n", 0x0C30);
#endif
#ifdef __GLEE_GL_SGIX_shadow
printf("__GLEE_GL_SGIX_shadow %d\n", 1);
#endif
#ifdef GLU_NURBS_NORMAL_DATA
printf("GLU_NURBS_NORMAL_DATA %d\n", 100172);
#endif
#ifdef GL_MATRIX23_ARB
printf("GL_MATRIX23_ARB %d\n", 0x88D7);
#endif
#ifdef GL_SAMPLER_1D_ARB
printf("GL_SAMPLER_1D_ARB %d\n", 0x8B5D);
#endif
#ifdef glAlphaFragmentOp2ATI
#endif
#ifdef GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI
printf("GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI %d\n", 0x80BB);
#endif
#ifdef GL_EQUIV
printf("GL_EQUIV %d\n", 0x1509);
#endif
#ifdef GLEE_SGIX_pixel_texture
#endif
#ifdef GL_EXT_stencil_wrap
printf("GL_EXT_stencil_wrap %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER5
printf("GL_DRAW_BUFFER5 %d\n", 0x882A);
#endif
#ifdef GL_PACK_ROW_LENGTH
printf("GL_PACK_ROW_LENGTH %d\n", 0x0D02);
#endif
#ifdef GL_UNSIGNED_NORMALIZED_ARB
printf("GL_UNSIGNED_NORMALIZED_ARB %d\n", 0x8C17);
#endif
#ifdef GL_SAMPLES_EXT
printf("GL_SAMPLES_EXT %d\n", 0x80A9);
#endif
#ifdef GLEE_ATI_texture_mirror_once
#endif
#ifdef GL_TEXTURE10
printf("GL_TEXTURE10 %d\n", 0x84CA);
#endif
#ifdef GL_TEXTURE7
printf("GL_TEXTURE7 %d\n", 0x84C7);
#endif
#ifdef GL_TEXTURE_STACK_DEPTH
printf("GL_TEXTURE_STACK_DEPTH %d\n", 0x0BA5);
#endif
#ifdef GL_ABGR_EXT
printf("GL_ABGR_EXT %d\n", 0x8000);
#endif
#ifdef GL_COLOR_TABLE_ALPHA_SIZE_SGI
printf("GL_COLOR_TABLE_ALPHA_SIZE_SGI %d\n", 0x80DD);
#endif
#ifdef GL_SRGB8_ALPHA8_EXT
printf("GL_SRGB8_ALPHA8_EXT %d\n", 0x8C43);
#endif
#ifdef GL_VERTEX_ARRAY_STRIDE
printf("GL_VERTEX_ARRAY_STRIDE %d\n", 0x807C);
#endif
#ifdef glReplacementCodeuiTexCoord2fVertex3fvSUN
#endif
#ifdef GL_FUNC_REVERSE_SUBTRACT
printf("GL_FUNC_REVERSE_SUBTRACT %d\n", 0x800B);
#endif
#ifdef GLUT_NUM_TABLET_BUTTONS
printf("GLUT_NUM_TABLET_BUTTONS %d\n", 609);
#endif
#ifdef GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB %d\n", 0x880B);
#endif
#ifdef GL_DEPENDENT_GB_TEXTURE_2D_NV
printf("GL_DEPENDENT_GB_TEXTURE_2D_NV %d\n", 0x86EA);
#endif
#ifdef GL_DISCARD_NV
printf("GL_DISCARD_NV %d\n", 0x8530);
#endif
#ifdef GL_CON_19_ATI
printf("GL_CON_19_ATI %d\n", 0x8954);
#endif
#ifdef GL_TEXTURE_COMPARE_SGIX
printf("GL_TEXTURE_COMPARE_SGIX %d\n", 0x819A);
#endif
#ifdef GL_SGIS_point_parameters
printf("GL_SGIS_point_parameters %d\n", 1);
#endif
#ifdef GL_MODELVIEW31_ARB
printf("GL_MODELVIEW31_ARB %d\n", 0x873F);
#endif
#ifdef GL_MIN_EXT
printf("GL_MIN_EXT %d\n", 0x8007);
#endif
#ifdef glTangentPointerEXT
#endif
#ifdef GL_EIGHTH_BIT_ATI
printf("GL_EIGHTH_BIT_ATI %d\n", 0x00000020);
#endif
#ifdef GL_ALPHA_BITS
printf("GL_ALPHA_BITS %d\n", 0x0D55);
#endif
#ifdef GL_COMPRESSED_ALPHA_ARB
printf("GL_COMPRESSED_ALPHA_ARB %d\n", 0x84E9);
#endif
#ifdef GL_PACK_SKIP_IMAGES
printf("GL_PACK_SKIP_IMAGES %d\n", 0x806B);
#endif
#ifdef GLUT_WINDOW_FORMAT_ID
printf("GLUT_WINDOW_FORMAT_ID %d\n", 123);
#endif
#ifdef GL_REG_0_ATI
printf("GL_REG_0_ATI %d\n", 0x8921);
#endif
#ifdef GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT
printf("GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT %d\n", 0x850D);
#endif
#ifdef GL_COLOR_ARRAY_BUFFER_BINDING_ARB
printf("GL_COLOR_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8898);
#endif
#ifdef GLEE_SGIX_tag_sample_buffer
#endif
#ifdef GL_MAX_DEFORMATION_ORDER_SGIX
printf("GL_MAX_DEFORMATION_ORDER_SGIX %d\n", 0x8197);
#endif
#ifdef GL_TEXTURE_NORMAL_EXT
printf("GL_TEXTURE_NORMAL_EXT %d\n", 0x85AF);
#endif
#ifdef GL_OCCLUSION_TEST_HP
printf("GL_OCCLUSION_TEST_HP %d\n", 0x8165);
#endif
#ifdef GL_FLOAT_RGBA32_NV
printf("GL_FLOAT_RGBA32_NV %d\n", 0x888B);
#endif
#ifdef __GLEE_GL_SGIX_async
printf("__GLEE_GL_SGIX_async %d\n", 1);
#endif
#ifdef GL_WEIGHT_SUM_UNITY_ARB
printf("GL_WEIGHT_SUM_UNITY_ARB %d\n", 0x86A6);
#endif
#ifdef __GLEE_GL_SGIX_resample
printf("__GLEE_GL_SGIX_resample %d\n", 1);
#endif
#ifdef glPrioritizeTexturesEXT
#endif
#ifdef GL_SGIX_resample
printf("GL_SGIX_resample %d\n", 1);
#endif
#ifdef GL_BINORMAL_ARRAY_STRIDE_EXT
printf("GL_BINORMAL_ARRAY_STRIDE_EXT %d\n", 0x8441);
#endif
#ifdef GL_CLEAR
printf("GL_CLEAR %d\n", 0x1500);
#endif
#ifdef glFragmentLightiSGIX
#endif
#ifdef GL_ARB_shader_objects
printf("GL_ARB_shader_objects %d\n", 1);
#endif
#ifdef glGetProgramParameterfvNV
#endif
#ifdef glPixelTexGenParameterivSGIS
#endif
#ifdef GL_CONVOLUTION_WIDTH
printf("GL_CONVOLUTION_WIDTH %d\n", 0x8018);
#endif
#ifdef GL_SUN_triangle_list
printf("GL_SUN_triangle_list %d\n", 1);
#endif
#ifdef GLEE_PGI_vertex_hints
#endif
#ifdef GL_MAX_CONVOLUTION_HEIGHT_EXT
printf("GL_MAX_CONVOLUTION_HEIGHT_EXT %d\n", 0x801B);
#endif
#ifdef GL_PIXEL_TILE_CACHE_SIZE_SGIX
printf("GL_PIXEL_TILE_CACHE_SIZE_SGIX %d\n", 0x8145);
#endif
#ifdef GL_STREAM_READ_ARB
printf("GL_STREAM_READ_ARB %d\n", 0x88E1);
#endif
#ifdef GL_X_EXT
printf("GL_X_EXT %d\n", 0x87D5);
#endif
#ifdef GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX
printf("GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX %d\n", 0x8178);
#endif
#ifdef GLUT_WINDOW_RED_SIZE
printf("GLUT_WINDOW_RED_SIZE %d\n", 107);
#endif
#ifdef GL_MAX_PROGRAM_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_INSTRUCTIONS_ARB %d\n", 0x88A1);
#endif
#ifdef GL_SUBPIXEL_BITS
printf("GL_SUBPIXEL_BITS %d\n", 0x0D50);
#endif
#ifdef GL_SOURCE1_RGB_EXT
printf("GL_SOURCE1_RGB_EXT %d\n", 0x8581);
#endif
#ifdef GL_SGI_depth_pass_instrument
printf("GL_SGI_depth_pass_instrument %d\n", 1);
#endif
#ifdef GL_LUMINANCE_ALPHA32UI_EXT
printf("GL_LUMINANCE_ALPHA32UI_EXT %d\n", 0x8D75);
#endif
#ifdef GL_INVERT
printf("GL_INVERT %d\n", 0x150A);
#endif
#ifdef GL_V3F
printf("GL_V3F %d\n", 0x2A21);
#endif
#ifdef glGetVariantArrayObjectivATI
#endif
#ifdef GLU_NURBS_END_DATA_EXT
printf("GLU_NURBS_END_DATA_EXT %d\n", 100175);
#endif
#ifdef GL_POST_COLOR_MATRIX_RED_BIAS
printf("GL_POST_COLOR_MATRIX_RED_BIAS %d\n", 0x80B8);
#endif
#ifdef glBinormal3ivEXT
#endif
#ifdef GL_ARB_texture_rectangle
printf("GL_ARB_texture_rectangle %d\n", 1);
#endif
#ifdef glCurrentPaletteMatrixARB
#endif
#ifdef GL_MATRIX_PALETTE_ARB
printf("GL_MATRIX_PALETTE_ARB %d\n", 0x8840);
#endif
#ifdef GL_COMBINE_RGB
printf("GL_COMBINE_RGB %d\n", 0x8571);
#endif
#ifdef glVertexWeightfvEXT
#endif
#ifdef GL_MAX_FRAGMENT_LIGHTS_EXT
printf("GL_MAX_FRAGMENT_LIGHTS_EXT %d\n", 0x8404);
#endif
#ifdef glMultiModeDrawArraysIBM
#endif
#ifdef glVertexStream1fATI
#endif
#ifdef glFogFuncSGIS
#endif
#ifdef __GLEE_GL_EXT_pixel_transform_color_table
printf("__GLEE_GL_EXT_pixel_transform_color_table %d\n", 1);
#endif
#ifdef GL_LIST_INDEX
printf("GL_LIST_INDEX %d\n", 0x0B33);
#endif
#ifdef GLU_INVALID_ENUM
printf("GLU_INVALID_ENUM %d\n", 100900);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY
printf("GL_TEXTURE_COORD_ARRAY %d\n", 0x8078);
#endif
#ifdef glSpriteParameterivSGIX
#endif
#ifdef GL_OP_MAX_EXT
printf("GL_OP_MAX_EXT %d\n", 0x878A);
#endif
#ifdef glGetFragmentMaterialivSGIX
#endif
#ifdef GL_LIGHT_ENV_MODE_EXT
printf("GL_LIGHT_ENV_MODE_EXT %d\n", 0x8407);
#endif
#ifdef __LDBL_HAS_INFINITY__
printf("__LDBL_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef GL_PIXEL_MAP_G_TO_G_SIZE
printf("GL_PIXEL_MAP_G_TO_G_SIZE %d\n", 0x0CB7);
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI
printf("GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI %d\n", 0x6095);
#endif
#ifdef glEdgeFlagPointerListIBM
#endif
#ifdef glReplacementCodeuiColor4fNormal3fVertex3fvSUN
#endif
#ifdef __GLEE_GL_SGIX_texture_coordinate_clamp
printf("__GLEE_GL_SGIX_texture_coordinate_clamp %d\n", 1);
#endif
#ifdef GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX
printf("GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX %d\n", 0x813E);
#endif
#ifdef glIsAsyncMarkerSGIX
#endif
#ifdef GL_RGBA_FLOAT_MODE_ARB
printf("GL_RGBA_FLOAT_MODE_ARB %d\n", 0x8820);
#endif
#ifdef GL_HISTOGRAM_EXT
printf("GL_HISTOGRAM_EXT %d\n", 0x8024);
#endif
#ifdef GLUT_GAME_MODE_DISPLAY_CHANGED
printf("GLUT_GAME_MODE_DISPLAY_CHANGED %d\n", 6);
#endif
#ifdef GL_DRAW_BUFFER11_ATI
printf("GL_DRAW_BUFFER11_ATI %d\n", 0x8830);
#endif
#ifdef GL_TEXTURE_MAX_LEVEL_SGIS
printf("GL_TEXTURE_MAX_LEVEL_SGIS %d\n", 0x813D);
#endif
#ifdef glTangent3ivEXT
#endif
#ifdef GL_RGBA32F_ARB
printf("GL_RGBA32F_ARB %d\n", 0x8814);
#endif
#ifdef GLU_NONE
printf("GLU_NONE %d\n", 100002);
#endif
#ifdef GL_DELETE_STATUS
printf("GL_DELETE_STATUS %d\n", 0x8B80);
#endif
#ifdef GL_TEXTURE_BINDING_2D
printf("GL_TEXTURE_BINDING_2D %d\n", 0x8069);
#endif
#ifdef GL_PRIMARY_COLOR_ARB
printf("GL_PRIMARY_COLOR_ARB %d\n", 0x8577);
#endif
#ifdef GL_PROGRAM_NATIVE_PARAMETERS_ARB
printf("GL_PROGRAM_NATIVE_PARAMETERS_ARB %d\n", 0x88AA);
#endif
#ifdef GL_FUNC_REVERSE_SUBTRACT_EXT
printf("GL_FUNC_REVERSE_SUBTRACT_EXT %d\n", 0x800B);
#endif
#ifdef GL_HISTOGRAM_BLUE_SIZE_EXT
printf("GL_HISTOGRAM_BLUE_SIZE_EXT %d\n", 0x802A);
#endif
#ifdef GL_TRANSPOSE_TEXTURE_MATRIX_ARB
printf("GL_TRANSPOSE_TEXTURE_MATRIX_ARB %d\n", 0x84E5);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB8_4_NV
printf("GL_MAP1_VERTEX_ATTRIB8_4_NV %d\n", 0x8668);
#endif
#ifdef GL_BOOL_VEC4_ARB
printf("GL_BOOL_VEC4_ARB %d\n", 0x8B59);
#endif
#ifdef GL_PHONG_WIN
printf("GL_PHONG_WIN %d\n", 0x80EA);
#endif
#ifdef GL_FORCE_BLUE_TO_ONE_NV
printf("GL_FORCE_BLUE_TO_ONE_NV %d\n", 0x8860);
#endif
#ifdef GL_INTEL_parallel_arrays
printf("GL_INTEL_parallel_arrays %d\n", 1);
#endif
#ifdef glReplacementCodeusSUN
#endif
#ifdef GL_MAX_COLOR_ATTACHMENTS_EXT
printf("GL_MAX_COLOR_ATTACHMENTS_EXT %d\n", 0x8CDF);
#endif
#ifdef glSecondaryColorPointerListIBM
#endif
#ifdef GLEE_MESA_resize_buffers
#endif
#ifdef GL_OPERAND0_ALPHA_EXT
printf("GL_OPERAND0_ALPHA_EXT %d\n", 0x8598);
#endif
#ifdef GLEE_EXT_texture_sRGB
#endif
#ifdef GL_MODELVIEW2_ARB
printf("GL_MODELVIEW2_ARB %d\n", 0x8722);
#endif
#ifdef GLEE_SGIX_ycrcba
#endif
#ifdef GL_SUN_convolution_border_modes
printf("GL_SUN_convolution_border_modes %d\n", 1);
#endif
#ifdef GL_VERSION_2_0
printf("GL_VERSION_2_0 %d\n", 1);
#endif
#ifdef glReplacementCodeubvSUN
#endif
#ifdef GL_SCISSOR_BOX
printf("GL_SCISSOR_BOX %d\n", 0x0C10);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB %d\n", 0x8518);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB2_4_NV
printf("GL_MAP2_VERTEX_ATTRIB2_4_NV %d\n", 0x8672);
#endif
#ifdef GL_RGB_EXTENDED_RANGE_SGIX
printf("GL_RGB_EXTENDED_RANGE_SGIX %d\n", 0x85EC);
#endif
#ifdef __GLEE_GL_SGIX_convolution_accuracy
printf("__GLEE_GL_SGIX_convolution_accuracy %d\n", 1);
#endif
#ifdef __GLEE_GL_SGIX_depth_pass_instrument
printf("__GLEE_GL_SGIX_depth_pass_instrument %d\n", 1);
#endif
#ifdef GL_DEPTH_BUFFER_BIT
printf("GL_DEPTH_BUFFER_BIT %d\n", 0x00000100);
#endif
#ifdef GL_INGR_blend_func_separate
printf("GL_INGR_blend_func_separate %d\n", 1);
#endif
#ifdef glVertexStream3ivATI
#endif
#ifdef __STDC_HOSTED__
printf("__STDC_HOSTED__ %d\n", 1);
#endif
#ifdef GL_MATRIX10_ARB
printf("GL_MATRIX10_ARB %d\n", 0x88CA);
#endif
#ifdef GL_SINGLE_COLOR
printf("GL_SINGLE_COLOR %d\n", 0x81F9);
#endif
#ifdef GL_LUMINANCE8I_EXT
printf("GL_LUMINANCE8I_EXT %d\n", 0x8D92);
#endif
#ifdef GLUT_GREEN
printf("GLUT_GREEN %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY15_NV
printf("GL_VERTEX_ATTRIB_ARRAY15_NV %d\n", 0x865F);
#endif
#ifdef glNormalStream3fvATI
#endif
#ifdef GL_SAMPLE_BUFFERS_3DFX
printf("GL_SAMPLE_BUFFERS_3DFX %d\n", 0x86B3);
#endif
#ifdef GL_MAP1_GRID_DOMAIN
printf("GL_MAP1_GRID_DOMAIN %d\n", 0x0DD0);
#endif
#ifdef GL_T2F_N3F_V3F
printf("GL_T2F_N3F_V3F %d\n", 0x2A2B);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_CUBE_EXT
printf("GL_UNSIGNED_INT_SAMPLER_CUBE_EXT %d\n", 0x8DD4);
#endif
#ifdef glGetInstrumentsSGIX
#endif
#ifdef GL_CULL_MODES_NV
printf("GL_CULL_MODES_NV %d\n", 0x86E0);
#endif
#ifdef GLUT_GAME_MODE_PIXEL_DEPTH
printf("GLUT_GAME_MODE_PIXEL_DEPTH %d\n", 4);
#endif
#ifdef GL_AVERAGE_EXT
printf("GL_AVERAGE_EXT %d\n", 0x8335);
#endif
#ifdef GL_DU8DV8_ATI
printf("GL_DU8DV8_ATI %d\n", 0x877A);
#endif
#ifdef GL_ARB_texture_cube_map
printf("GL_ARB_texture_cube_map %d\n", 1);
#endif
#ifdef GL_REG_30_ATI
printf("GL_REG_30_ATI %d\n", 0x893F);
#endif
#ifdef GL_MAX_TRACK_MATRICES_NV
printf("GL_MAX_TRACK_MATRICES_NV %d\n", 0x862F);
#endif
#ifdef __GLEE_GL_EXT_cull_vertex
printf("__GLEE_GL_EXT_cull_vertex %d\n", 1);
#endif
#ifdef GLUT_UP
printf("GLUT_UP %d\n", 1);
#endif
#ifdef glVertexStream1dvATI
#endif
#ifdef GL_TEXTURE_3D_BINDING_EXT
printf("GL_TEXTURE_3D_BINDING_EXT %d\n", 0x806A);
#endif
#ifdef GL_LUMINANCE4_EXT
printf("GL_LUMINANCE4_EXT %d\n", 0x803F);
#endif
#ifdef glEndSceneEXT
#endif
#ifdef GL_NV_copy_depth_to_color
printf("GL_NV_copy_depth_to_color %d\n", 1);
#endif
#ifdef GL_DYNAMIC_READ_ARB
printf("GL_DYNAMIC_READ_ARB %d\n", 0x88E9);
#endif
#ifdef GL_REPLACE_EXT
printf("GL_REPLACE_EXT %d\n", 0x8062);
#endif
#ifdef GL_SRC7_ALPHA
printf("GL_SRC7_ALPHA %d\n", 0x858F);
#endif
#ifdef glIndexPointerListIBM
#endif
#ifdef GL_TEXTURE_LOD_BIAS
printf("GL_TEXTURE_LOD_BIAS %d\n", 0x8501);
#endif
#ifdef GL_TEXTURE20_ARB
printf("GL_TEXTURE20_ARB %d\n", 0x84D4);
#endif
#ifdef GL_SATURATE_BIT_ATI
printf("GL_SATURATE_BIT_ATI %d\n", 0x00000040);
#endif
#ifdef GL_COMPILE_AND_EXECUTE
printf("GL_COMPILE_AND_EXECUTE %d\n", 0x1301);
#endif
#ifdef GL_FLOAT_R32_NV
printf("GL_FLOAT_R32_NV %d\n", 0x8885);
#endif
#ifdef GL_RGBA16_EXT
printf("GL_RGBA16_EXT %d\n", 0x805B);
#endif
#ifdef GL_RGBA_MODE
printf("GL_RGBA_MODE %d\n", 0x0C31);
#endif
#ifdef GL_APPLE_aux_depth_stencil
printf("GL_APPLE_aux_depth_stencil %d\n", 1);
#endif
#ifdef GLU_NURBS_ERROR35
printf("GLU_NURBS_ERROR35 %d\n", 100285);
#endif
#ifdef GLEE_SGIX_depth_pass_instrument
#endif
#ifdef glVertexStream2ivATI
#endif
#ifdef GL_OPERAND7_RGB_ARB
printf("GL_OPERAND7_RGB_ARB %d\n", 0x8597);
#endif
#ifdef glDisableVariantClientStateEXT
#endif
#ifdef GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT
printf("GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT %d\n", 0x8DDD);
#endif
#ifdef GL_ACCUM_CLEAR_VALUE
printf("GL_ACCUM_CLEAR_VALUE %d\n", 0x0B80);
#endif
#ifdef glGetMapControlPointsNV
#endif
#ifdef GL_READ_WRITE
printf("GL_READ_WRITE %d\n", 0x88BA);
#endif
#ifdef GL_MAX_TEXTURE_STACK_DEPTH
printf("GL_MAX_TEXTURE_STACK_DEPTH %d\n", 0x0D39);
#endif
#ifdef GLEE_OML_subsample
#endif
#ifdef GL_MAX_3D_TEXTURE_SIZE_EXT
printf("GL_MAX_3D_TEXTURE_SIZE_EXT %d\n", 0x8073);
#endif
#ifdef GL_SGIX_vertex_preclip
printf("GL_SGIX_vertex_preclip %d\n", 1);
#endif
#ifdef GL_POST_COLOR_MATRIX_BLUE_SCALE
printf("GL_POST_COLOR_MATRIX_BLUE_SCALE %d\n", 0x80B6);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB1_4_NV
printf("GL_MAP2_VERTEX_ATTRIB1_4_NV %d\n", 0x8671);
#endif
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
printf("GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT %d\n", 0x87CC);
#endif
#ifdef GLUT_CURSOR_CROSSHAIR
printf("GLUT_CURSOR_CROSSHAIR %d\n", 9);
#endif
#ifdef GL_TEXTURE_FILTER_CONTROL_EXT
printf("GL_TEXTURE_FILTER_CONTROL_EXT %d\n", 0x8500);
#endif
#ifdef glWriteMaskEXT
#endif
#ifdef __INTMAX_MAX__
#endif
#ifdef GL_COMBINER0_NV
printf("GL_COMBINER0_NV %d\n", 0x8550);
#endif
#ifdef GLUT_ELAPSED_TIME
printf("GLUT_ELAPSED_TIME %d\n", 700);
#endif
#ifdef GL_DRAW_BUFFER2_ATI
printf("GL_DRAW_BUFFER2_ATI %d\n", 0x8827);
#endif
#ifdef GL_POST_COLOR_MATRIX_GREEN_SCALE
printf("GL_POST_COLOR_MATRIX_GREEN_SCALE %d\n", 0x80B5);
#endif
#ifdef GLEE_LINK_FAIL
printf("GLEE_LINK_FAIL %d\n", 0);
#endif
#ifdef glBeginSceneEXT
#endif
#ifdef GL_SOURCE2_ALPHA
printf("GL_SOURCE2_ALPHA %d\n", 0x858A);
#endif
#ifdef GL_DRAW_FRAMEBUFFER_BINDING_EXT
printf("GL_DRAW_FRAMEBUFFER_BINDING_EXT %d\n", 0x8CA6);
#endif
#ifdef glGetHistogramParameterivEXT
#endif
#ifdef GL_SGIX_pixel_tiles
printf("GL_SGIX_pixel_tiles %d\n", 1);
#endif
#ifdef GL_MAX_CLIP_PLANES
printf("GL_MAX_CLIP_PLANES %d\n", 0x0D32);
#endif
#ifdef GL_TEXTURE8
printf("GL_TEXTURE8 %d\n", 0x84C8);
#endif
#ifdef glGetProgramParameterdvNV
#endif
#ifdef GLUT_CURSOR_NONE
printf("GLUT_CURSOR_NONE %d\n", 101);
#endif
#ifdef GL_MAX_TEXTURE_COORDS_ARB
printf("GL_MAX_TEXTURE_COORDS_ARB %d\n", 0x8871);
#endif
#ifdef GL_MATRIX5_ARB
printf("GL_MATRIX5_ARB %d\n", 0x88C5);
#endif
#ifdef GL_INDEX_MATERIAL_PARAMETER_EXT
printf("GL_INDEX_MATERIAL_PARAMETER_EXT %d\n", 0x81B9);
#endif
#ifdef GL_SRGB8_ALPHA8
printf("GL_SRGB8_ALPHA8 %d\n", 0x8C43);
#endif
#ifdef GL_R1UI_C3F_V3F_SUN
printf("GL_R1UI_C3F_V3F_SUN %d\n", 0x85C6);
#endif
#ifdef GL_SOURCE4_ALPHA_ARB
printf("GL_SOURCE4_ALPHA_ARB %d\n", 0x858C);
#endif
#ifdef GL_PIXEL_PACK_BUFFER_EXT
printf("GL_PIXEL_PACK_BUFFER_EXT %d\n", 0x88EB);
#endif
#ifdef GL_COLOR_ATTACHMENT5_EXT
printf("GL_COLOR_ATTACHMENT5_EXT %d\n", 0x8CE5);
#endif
#ifdef GL_EXT_index_texture
printf("GL_EXT_index_texture %d\n", 1);
#endif
#ifdef GL_ONE_MINUS_DST_COLOR
printf("GL_ONE_MINUS_DST_COLOR %d\n", 0x0307);
#endif
#ifdef GL_ZOOM_X
printf("GL_ZOOM_X %d\n", 0x0D16);
#endif
#ifdef GL_PIXEL_TILE_WIDTH_SGIX
printf("GL_PIXEL_TILE_WIDTH_SGIX %d\n", 0x8140);
#endif
#ifdef GLEE_NV_depth_clamp
#endif
#ifdef GL_2X_BIT_ATI
printf("GL_2X_BIT_ATI %d\n", 0x00000001);
#endif
#ifdef GL_UNPACK_IMAGE_HEIGHT_EXT
printf("GL_UNPACK_IMAGE_HEIGHT_EXT %d\n", 0x806E);
#endif
#ifdef GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV
printf("GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV %d\n", 0x8851);
#endif
#ifdef GL_POST_COLOR_MATRIX_RED_BIAS_SGI
printf("GL_POST_COLOR_MATRIX_RED_BIAS_SGI %d\n", 0x80B8);
#endif
#ifdef GL_MAX_LIGHTS
printf("GL_MAX_LIGHTS %d\n", 0x0D31);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB %d\n", 0x886A);
#endif
#ifdef __GLEE_GL_EXT_misc_attribute
printf("__GLEE_GL_EXT_misc_attribute %d\n", 1);
#endif
#ifdef GL_STACK_UNDERFLOW
printf("GL_STACK_UNDERFLOW %d\n", 0x0504);
#endif
#ifdef GL_REG_9_ATI
printf("GL_REG_9_ATI %d\n", 0x892A);
#endif
#ifdef GL_FRAMEBUFFER_EXT
printf("GL_FRAMEBUFFER_EXT %d\n", 0x8D40);
#endif
#ifdef GL_COMPRESSED_RGB
printf("GL_COMPRESSED_RGB %d\n", 0x84ED);
#endif
#ifdef GL_TEXTURE_MAX_CLAMP_S_SGIX
printf("GL_TEXTURE_MAX_CLAMP_S_SGIX %d\n", 0x8369);
#endif
#ifdef GL_SUN_global_alpha
printf("GL_SUN_global_alpha %d\n", 1);
#endif
#ifdef GL_EXT_texture_env_combine
printf("GL_EXT_texture_env_combine %d\n", 1);
#endif
#ifdef GL_COLOR_INDEX8_EXT
printf("GL_COLOR_INDEX8_EXT %d\n", 0x80E5);
#endif
#ifdef __GLEE_GL_NV_float_buffer
printf("__GLEE_GL_NV_float_buffer %d\n", 1);
#endif
#ifdef GLU_NURBS_ERROR13
printf("GLU_NURBS_ERROR13 %d\n", 100263);
#endif
#ifdef GL_DOT_PRODUCT_TEXTURE_1D_NV
printf("GL_DOT_PRODUCT_TEXTURE_1D_NV %d\n", 0x885C);
#endif
#ifdef GL_POLYGON_OFFSET_UNITS
printf("GL_POLYGON_OFFSET_UNITS %d\n", 0x2A00);
#endif
#ifdef glWindowPos2ivMESA
#endif
#ifdef GL_UNSIGNED_SHORT_5_6_5
printf("GL_UNSIGNED_SHORT_5_6_5 %d\n", 0x8363);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB12_4_NV
printf("GL_MAP1_VERTEX_ATTRIB12_4_NV %d\n", 0x866C);
#endif
#ifdef GL_ARB_vertex_buffer_object
printf("GL_ARB_vertex_buffer_object %d\n", 1);
#endif
#ifdef glUpdateObjectBufferATI
#endif
#ifdef GL_TEXTURE_BORDER
printf("GL_TEXTURE_BORDER %d\n", 0x1005);
#endif
#ifdef GL_LIGHT1
printf("GL_LIGHT1 %d\n", 0x4001);
#endif
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
printf("GL_COMPRESSED_RGBA_S3TC_DXT5_EXT %d\n", 0x83F3);
#endif
#ifdef GL_LUMINANCE12_ALPHA4
printf("GL_LUMINANCE12_ALPHA4 %d\n", 0x8046);
#endif
#ifdef GL_EXT_texture_integer
printf("GL_EXT_texture_integer %d\n", 1);
#endif
#ifdef GLEE_ATI_vertex_streams
#endif
#ifdef GL_TRANSPOSE_MODELVIEW_MATRIX
printf("GL_TRANSPOSE_MODELVIEW_MATRIX %d\n", 0x84E3);
#endif
#ifdef GL_SGIX_impact_pixel_texture
printf("GL_SGIX_impact_pixel_texture %d\n", 1);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV
printf("GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV %d\n", 0x8533);
#endif
#ifdef GL_TEXTURE20
printf("GL_TEXTURE20 %d\n", 0x84D4);
#endif
#ifdef GLU_TESS_MISSING_END_CONTOUR
printf("GLU_TESS_MISSING_END_CONTOUR %d\n", 100154);
#endif
#ifdef GL_OP_EXP_BASE_2_EXT
printf("GL_OP_EXP_BASE_2_EXT %d\n", 0x8791);
#endif
#ifdef glGetListParameterfvSGIX
#endif
#ifdef GLU_NURBS_ERROR5
printf("GLU_NURBS_ERROR5 %d\n", 100255);
#endif
#ifdef glMultiTexCoord2hvNV
#endif
#ifdef GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
printf("GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT %d\n", 0x8336);
#endif
#ifdef GL_COLOR_TABLE_FORMAT
printf("GL_COLOR_TABLE_FORMAT %d\n", 0x80D8);
#endif
#ifdef glNormalStream3dATI
#endif
#ifdef GLUT_WINDOW_NUM_CHILDREN
printf("GLUT_WINDOW_NUM_CHILDREN %d\n", 118);
#endif
#ifdef GL_COMBINE_RGB_EXT
printf("GL_COMBINE_RGB_EXT %d\n", 0x8571);
#endif
#ifdef GLU_NURBS_ERROR26
printf("GLU_NURBS_ERROR26 %d\n", 100276);
#endif
#ifdef GL_STENCIL_FAIL
printf("GL_STENCIL_FAIL %d\n", 0x0B94);
#endif
#ifdef GLU_U_STEP
printf("GLU_U_STEP %d\n", 100206);
#endif
#ifdef glGenSymbolsEXT
#endif
#ifdef GL_RGB10_A2
printf("GL_RGB10_A2 %d\n", 0x8059);
#endif
#ifdef GL_ATI_texture_env_combine3
printf("GL_ATI_texture_env_combine3 %d\n", 1);
#endif
#ifdef GL_REPEAT
printf("GL_REPEAT %d\n", 0x2901);
#endif
#ifdef GL_MAP2_COLOR_4
printf("GL_MAP2_COLOR_4 %d\n", 0x0DB0);
#endif
#ifdef glColor4ubVertex3fSUN
#endif
#ifdef GL_MAX_SPOT_EXPONENT_NV
printf("GL_MAX_SPOT_EXPONENT_NV %d\n", 0x8505);
#endif
#ifdef GL_UNSIGNED_INT_VEC2_EXT
printf("GL_UNSIGNED_INT_VEC2_EXT %d\n", 0x8DC6);
#endif
#ifdef GL_DECR
printf("GL_DECR %d\n", 0x1E03);
#endif
#ifdef GLUT_BITMAP_HELVETICA_12
#endif
#ifdef GL_3_BYTES
printf("GL_3_BYTES %d\n", 0x1408);
#endif
#ifdef __DYNAMIC__
printf("__DYNAMIC__ %d\n", 1);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_POINTER
printf("GL_EDGE_FLAG_ARRAY_POINTER %d\n", 0x8093);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER
printf("GL_TEXTURE_COORD_ARRAY_POINTER %d\n", 0x8092);
#endif
#ifdef __GLEE_GL_EXT_texture_env_dot3
printf("__GLEE_GL_EXT_texture_env_dot3 %d\n", 1);
#endif
#ifdef glVertexAttribs2hvNV
#endif
#ifdef GL_EXT_shadow_funcs
printf("GL_EXT_shadow_funcs %d\n", 1);
#endif
#ifdef GL_TEXTURE_ENV_MODE_ALPHA_EXT
printf("GL_TEXTURE_ENV_MODE_ALPHA_EXT %d\n", 0);
#endif
#ifdef GLEE_EXT_index_material
#endif
#ifdef GL_RGB8_EXT
printf("GL_RGB8_EXT %d\n", 0x8051);
#endif
#ifdef GL_PIXEL_PACK_BUFFER_BINDING_ARB
printf("GL_PIXEL_PACK_BUFFER_BINDING_ARB %d\n", 0x88ED);
#endif
#ifdef GL_SGIX_texture_multi_buffer
printf("GL_SGIX_texture_multi_buffer %d\n", 1);
#endif
#ifdef GLEE_OES_single_precision
#endif
#ifdef GL_LINE_STIPPLE_REPEAT
printf("GL_LINE_STIPPLE_REPEAT %d\n", 0x0B26);
#endif
#ifdef glVertexAttribs3svNV
#endif
#ifdef __GLEE_GL_SGIX_vertex_preclip
printf("__GLEE_GL_SGIX_vertex_preclip %d\n", 1);
#endif
#ifdef GLEE_SGIX_scalebias_hint
#endif
#ifdef GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB
printf("GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB %d\n", 0x88A2);
#endif
#ifdef GL_LINE_LOOP
printf("GL_LINE_LOOP %d\n", 0x0002);
#endif
#ifdef GL_BYTE
printf("GL_BYTE %d\n", 0x1400);
#endif
#ifdef GL_POINT_SIZE
printf("GL_POINT_SIZE %d\n", 0x0B11);
#endif
#ifdef GL_MATRIX6_NV
printf("GL_MATRIX6_NV %d\n", 0x8636);
#endif
#ifdef GL_PACK_IMAGE_BYTES_APPLE
printf("GL_PACK_IMAGE_BYTES_APPLE %d\n", 0x8A17);
#endif
#ifdef GL_BUMP_ENVMAP_ATI
printf("GL_BUMP_ENVMAP_ATI %d\n", 0x877B);
#endif
#ifdef glTagSampleBufferSGIX
#endif
#ifdef GLEE_SGIX_texture_add_env
#endif
#ifdef GL_PROXY_TEXTURE_3D
printf("GL_PROXY_TEXTURE_3D %d\n", 0x8070);
#endif
#ifdef glPointParameterfvEXT
#endif
#ifdef glTexCoord4hNV
#endif
#ifdef GL_UNSIGNED_INT_VEC3_EXT
printf("GL_UNSIGNED_INT_VEC3_EXT %d\n", 0x8DC7);
#endif
#ifdef GL_NV_vertex_array_range2
printf("GL_NV_vertex_array_range2 %d\n", 1);
#endif
#ifdef glImageTransformParameterfHP
#endif
#ifdef __GLEE_GL_GREMEDY_string_marker
printf("__GLEE_GL_GREMEDY_string_marker %d\n", 1);
#endif
#ifdef GL_ARB_texture_border_clamp
printf("GL_ARB_texture_border_clamp %d\n", 1);
#endif
#ifdef GLEE_ATI_texture_float
#endif
#ifdef GL_NV_vertex_program
printf("GL_NV_vertex_program %d\n", 1);
#endif
#ifdef GL_OBJECT_DELETE_STATUS_ARB
printf("GL_OBJECT_DELETE_STATUS_ARB %d\n", 0x8B80);
#endif
#ifdef __FLT_MANT_DIG__
printf("__FLT_MANT_DIG__ %d\n", 24);
#endif
#ifdef GL_IMAGE_TRANSLATE_X_HP
printf("GL_IMAGE_TRANSLATE_X_HP %d\n", 0x8157);
#endif
#ifdef GL_APPLE_row_bytes
printf("GL_APPLE_row_bytes %d\n", 1);
#endif
#ifdef GL_NONE
printf("GL_NONE %d\n", 0);
#endif
#ifdef __GLEE_GL_INGR_blend_func_separate
printf("__GLEE_GL_INGR_blend_func_separate %d\n", 1);
#endif
#ifdef glPointParameterfEXT
#endif
#ifdef GL_LUMINANCE_FLOAT32_ATI
printf("GL_LUMINANCE_FLOAT32_ATI %d\n", 0x8818);
#endif
#ifdef GL_EYE_LINEAR
printf("GL_EYE_LINEAR %d\n", 0x2400);
#endif
#ifdef GL_YCRCB_422_SGIX
printf("GL_YCRCB_422_SGIX %d\n", 0x81BB);
#endif
#ifdef GL_GREEN_MAX_CLAMP_INGR
printf("GL_GREEN_MAX_CLAMP_INGR %d\n", 0x8565);
#endif
#ifdef GLUT_KEY_F1
printf("GLUT_KEY_F1 %d\n", 1);
#endif
#ifdef GL_MAX_TEXTURE_LOD_BIAS
printf("GL_MAX_TEXTURE_LOD_BIAS %d\n", 0x84FD);
#endif
#ifdef GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX
printf("GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX %d\n", 0x8312);
#endif
#ifdef GL_CURRENT_QUERY
printf("GL_CURRENT_QUERY %d\n", 0x8865);
#endif
#ifdef GL_DISCARD_ATI
printf("GL_DISCARD_ATI %d\n", 0x8763);
#endif
#ifdef GL_REPLACE
printf("GL_REPLACE %d\n", 0x1E01);
#endif
#ifdef GL_OP_SET_LT_EXT
printf("GL_OP_SET_LT_EXT %d\n", 0x878D);
#endif
#ifdef GL_EXT_clip_volume_hint
printf("GL_EXT_clip_volume_hint %d\n", 1);
#endif
#ifdef GL_MAX_RENDERBUFFER_SIZE_EXT
printf("GL_MAX_RENDERBUFFER_SIZE_EXT %d\n", 0x84E8);
#endif
#ifdef GL_COLOR_ARRAY_BUFFER_BINDING
printf("GL_COLOR_ARRAY_BUFFER_BINDING %d\n", 0x8898);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY14_NV
printf("GL_VERTEX_ATTRIB_ARRAY14_NV %d\n", 0x865E);
#endif
#ifdef GL_RGB12_EXT
printf("GL_RGB12_EXT %d\n", 0x8053);
#endif
#ifdef GL_CND_ATI
printf("GL_CND_ATI %d\n", 0x896A);
#endif
#ifdef glProgramNamedParameter4dvNV
#endif
#ifdef GL_TEXTURE4_ARB
printf("GL_TEXTURE4_ARB %d\n", 0x84C4);
#endif
#ifdef GL_MATRIX31_ARB
printf("GL_MATRIX31_ARB %d\n", 0x88DF);
#endif
#ifdef GL_AMBIENT
printf("GL_AMBIENT %d\n", 0x1200);
#endif
#ifdef GLUT_DEVICE_IGNORE_KEY_REPEAT
printf("GLUT_DEVICE_IGNORE_KEY_REPEAT %d\n", 610);
#endif
#ifdef GL_CONVOLUTION_BORDER_COLOR
printf("GL_CONVOLUTION_BORDER_COLOR %d\n", 0x8154);
#endif
#ifdef GL_POST_CONVOLUTION_GREEN_BIAS_EXT
printf("GL_POST_CONVOLUTION_GREEN_BIAS_EXT %d\n", 0x8021);
#endif
#ifdef glFragmentMaterialfvSGIX
#endif
#ifdef GL_TEXTURE_COMPRESSED_ARB
printf("GL_TEXTURE_COMPRESSED_ARB %d\n", 0x86A1);
#endif
#ifdef GL_ALLOW_DRAW_WIN_HINT_PGI
printf("GL_ALLOW_DRAW_WIN_HINT_PGI %d\n", 0x1A20F);
#endif
#ifdef GLU_SMOOTH
printf("GLU_SMOOTH %d\n", 100000);
#endif
#ifdef GL_LIGHT_MODEL_COLOR_CONTROL_EXT
printf("GL_LIGHT_MODEL_COLOR_CONTROL_EXT %d\n", 0x81F8);
#endif
#ifdef GL_OBJECT_DISTANCE_TO_POINT_SGIS
printf("GL_OBJECT_DISTANCE_TO_POINT_SGIS %d\n", 0x81F1);
#endif
#ifdef GL_VERTEX_PROGRAM_TWO_SIDE_NV
printf("GL_VERTEX_PROGRAM_TWO_SIDE_NV %d\n", 0x8643);
#endif
#ifdef GL_POINT_SIZE_GRANULARITY
printf("GL_POINT_SIZE_GRANULARITY %d\n", 0x0B13);
#endif
#ifdef GL_MAP2_VERTEX_4
printf("GL_MAP2_VERTEX_4 %d\n", 0x0DB8);
#endif
#ifdef GL_POLYGON_OFFSET_BIAS_EXT
printf("GL_POLYGON_OFFSET_BIAS_EXT %d\n", 0x8039);
#endif
#ifdef GL_COLOR_ARRAY_STRIDE_EXT
printf("GL_COLOR_ARRAY_STRIDE_EXT %d\n", 0x8083);
#endif
#ifdef GL_ACCUM_RED_BITS
printf("GL_ACCUM_RED_BITS %d\n", 0x0D58);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT %d\n", 0x8CD4);
#endif
#ifdef glVertex3hvNV
#endif
#ifdef __GLEE_GL_SUN_slice_accum
printf("__GLEE_GL_SUN_slice_accum %d\n", 1);
#endif
#ifdef glTexCoord2fColor4fNormal3fVertex3fvSUN
#endif
#ifdef GL_DRAW_BUFFER12
printf("GL_DRAW_BUFFER12 %d\n", 0x8831);
#endif
#ifdef GL_LINEAR
printf("GL_LINEAR %d\n", 0x2601);
#endif
#ifdef GL_HISTOGRAM_RED_SIZE
printf("GL_HISTOGRAM_RED_SIZE %d\n", 0x8028);
#endif
#ifdef __GLEE_GL_SGIS_pixel_texture
printf("__GLEE_GL_SGIS_pixel_texture %d\n", 1);
#endif
#ifdef GLUT_KEY_F8
printf("GLUT_KEY_F8 %d\n", 8);
#endif
#ifdef GL_CON_25_ATI
printf("GL_CON_25_ATI %d\n", 0x895A);
#endif
#ifdef GL_STREAM_DRAW_ARB
printf("GL_STREAM_DRAW_ARB %d\n", 0x88E0);
#endif
#ifdef GL_PROXY_TEXTURE_CUBE_MAP_EXT
printf("GL_PROXY_TEXTURE_CUBE_MAP_EXT %d\n", 0x851B);
#endif
#ifdef GL_MAX_SHININESS_NV
printf("GL_MAX_SHININESS_NV %d\n", 0x8504);
#endif
#ifdef GL_BLEND
printf("GL_BLEND %d\n", 0x0BE2);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_LIST_IBM
printf("GL_FOG_COORDINATE_ARRAY_LIST_IBM %d\n", 103076);
#endif
#ifdef GLEE_SGIX_instruments
#endif
#ifdef glFragmentColorMaterialEXT
#endif
#ifdef GL_FOG_INDEX
printf("GL_FOG_INDEX %d\n", 0x0B61);
#endif
#ifdef GLU_TESS_BOUNDARY_ONLY
printf("GLU_TESS_BOUNDARY_ONLY %d\n", 100141);
#endif
#ifdef GL_422_AVERAGE_EXT
printf("GL_422_AVERAGE_EXT %d\n", 0x80CE);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
printf("GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING %d\n", 0x889A);
#endif
#ifdef GLEE_ATI_vertex_array_object
#endif
#ifdef GL_OPERAND7_RGB
printf("GL_OPERAND7_RGB %d\n", 0x8597);
#endif
#ifdef glGetVariantFloatvEXT
#endif
#ifdef GLEE_EXT_paletted_texture
#endif
#ifdef GL_VARIANT_ARRAY_POINTER_EXT
printf("GL_VARIANT_ARRAY_POINTER_EXT %d\n", 0x87E9);
#endif
#ifdef GL_MAX_MODELVIEW_STACK_DEPTH
printf("GL_MAX_MODELVIEW_STACK_DEPTH %d\n", 0x0D36);
#endif
#ifdef GL_OBJECT_ATTACHED_OBJECTS_ARB
printf("GL_OBJECT_ATTACHED_OBJECTS_ARB %d\n", 0x8B85);
#endif
#ifdef GL_VERTEX_ARRAY_TYPE_EXT
printf("GL_VERTEX_ARRAY_TYPE_EXT %d\n", 0x807B);
#endif
#ifdef GLU_FALSE
printf("GLU_FALSE %d\n", 0);
#endif
#ifdef GL_EXT_texture_env_add
printf("GL_EXT_texture_env_add %d\n", 1);
#endif
#ifdef GL_FOG_DISTANCE_MODE_NV
printf("GL_FOG_DISTANCE_MODE_NV %d\n", 0x855A);
#endif
#ifdef GLEE_SGIX_shadow
#endif
#ifdef GL_NOR
printf("GL_NOR %d\n", 0x1508);
#endif
#ifdef GLEE_SGIX_texture_range
#endif
#ifdef GL_PIXEL_MODE_BIT
printf("GL_PIXEL_MODE_BIT %d\n", 0x00000020);
#endif
#ifdef GL_INTENSITY4_EXT
printf("GL_INTENSITY4_EXT %d\n", 0x804A);
#endif
#ifdef GL_POST_CONVOLUTION_BLUE_SCALE
printf("GL_POST_CONVOLUTION_BLUE_SCALE %d\n", 0x801E);
#endif
#ifdef glColor4ubVertex2fSUN
#endif
#ifdef GL_VERTEX_ARRAY_POINTER_EXT
printf("GL_VERTEX_ARRAY_POINTER_EXT %d\n", 0x808E);
#endif
#ifdef GL_MINMAX_EXT
printf("GL_MINMAX_EXT %d\n", 0x802E);
#endif
#ifdef GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE
printf("GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE %d\n", 0x8520);
#endif
#ifdef GL_ACCUM
printf("GL_ACCUM %d\n", 0x0100);
#endif
#ifdef GL_SUBTRACT
printf("GL_SUBTRACT %d\n", 0x84E7);
#endif
#ifdef GL_ATI_texture_float
printf("GL_ATI_texture_float %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_texture
printf("__GLEE_GL_EXT_texture %d\n", 1);
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_ATIX
printf("GL_PN_TRIANGLES_POINT_MODE_ATIX %d\n", 0x6092);
#endif
#ifdef glMultiTexCoord4hvNV
#endif
#ifdef GL_RESCALE_NORMAL_EXT
printf("GL_RESCALE_NORMAL_EXT %d\n", 0x803A);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB
printf("GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB %d\n", 0x88AF);
#endif
#ifdef glVertexAttrib1hvNV
#endif
#ifdef GL_INDEX_ARRAY_POINTER_EXT
printf("GL_INDEX_ARRAY_POINTER_EXT %d\n", 0x8091);
#endif
#ifdef GLUT_JOYSTICK_BUTTON_A
printf("GLUT_JOYSTICK_BUTTON_A %d\n", 1);
#endif
#ifdef glVertexBlendEnvfATI
#endif
#ifdef GL_DEPTH_COMPONENT32_SGIX
printf("GL_DEPTH_COMPONENT32_SGIX %d\n", 0x81A7);
#endif
#ifdef glVertexStream3svATI
#endif
#ifdef GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB
printf("GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB %d\n", 0x88B4);
#endif
#ifdef GL_PROXY_COLOR_TABLE
printf("GL_PROXY_COLOR_TABLE %d\n", 0x80D3);
#endif
#ifdef GL_DEPTH_STENCIL_EXT
printf("GL_DEPTH_STENCIL_EXT %d\n", 0x84F9);
#endif
#ifdef GL_PIXEL_SUBSAMPLE_2424_SGIX
printf("GL_PIXEL_SUBSAMPLE_2424_SGIX %d\n", 0x85A3);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB %d\n", 0x8625);
#endif
#ifdef GL_PACK_INVERT_MESA
printf("GL_PACK_INVERT_MESA %d\n", 0x8758);
#endif
#ifdef GL_UNSIGNED_INT_VEC4_EXT
printf("GL_UNSIGNED_INT_VEC4_EXT %d\n", 0x8DC8);
#endif
#ifdef GL_NV_texture_shader
printf("GL_NV_texture_shader %d\n", 1);
#endif
#ifdef GLU_NURBS_COLOR
printf("GLU_NURBS_COLOR %d\n", 100167);
#endif
#ifdef glVertexWeightfEXT
#endif
#ifdef glFogCoordPointerListIBM
#endif
#ifdef GL_MATRIX3_NV
printf("GL_MATRIX3_NV %d\n", 0x8633);
#endif
#ifdef GLU_V_STEP
printf("GLU_V_STEP %d\n", 100207);
#endif
#ifdef GL_SPARE0_PLUS_SECONDARY_COLOR_NV
printf("GL_SPARE0_PLUS_SECONDARY_COLOR_NV %d\n", 0x8532);
#endif
#ifdef GL_TEXTURE_BLUE_SIZE_EXT
printf("GL_TEXTURE_BLUE_SIZE_EXT %d\n", 0x805E);
#endif
#ifdef GL_DSDT_MAG_INTENSITY_NV
printf("GL_DSDT_MAG_INTENSITY_NV %d\n", 0x86DC);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_1D_EXT
printf("GL_UNSIGNED_INT_SAMPLER_1D_EXT %d\n", 0x8DD1);
#endif
#ifdef GL_DSDT_NV
printf("GL_DSDT_NV %d\n", 0x86F5);
#endif
#ifdef GLEE_NV_half_float
#endif
#ifdef __GLEE_GL_NV_vertex_array_range
printf("__GLEE_GL_NV_vertex_array_range %d\n", 1);
#endif
#ifdef GL_DOUBLEBUFFER
printf("GL_DOUBLEBUFFER %d\n", 0x0C32);
#endif
#ifdef GLU_NURBS_TESSELLATOR
printf("GLU_NURBS_TESSELLATOR %d\n", 100161);
#endif
#ifdef GLU_TESS_WINDING_ABS_GEQ_TWO
printf("GLU_TESS_WINDING_ABS_GEQ_TWO %d\n", 100134);
#endif
#ifdef GL_SAMPLE_MASK_VALUE_SGIS
printf("GL_SAMPLE_MASK_VALUE_SGIS %d\n", 0x80AA);
#endif
#ifdef GL_4PASS_0_SGIS
printf("GL_4PASS_0_SGIS %d\n", 0x80A4);
#endif
#ifdef GL_T2F_V3F
printf("GL_T2F_V3F %d\n", 0x2A27);
#endif
#ifdef GL_NAME_STACK_DEPTH
printf("GL_NAME_STACK_DEPTH %d\n", 0x0D70);
#endif
#ifdef glTbufferMask3DFX
#endif
#ifdef GL_OPERAND1_ALPHA_EXT
printf("GL_OPERAND1_ALPHA_EXT %d\n", 0x8599);
#endif
#ifdef GLUT_JOYSTICK_POLL_RATE
printf("GLUT_JOYSTICK_POLL_RATE %d\n", 616);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_SIZE_EXT
printf("GL_SECONDARY_COLOR_ARRAY_SIZE_EXT %d\n", 0x845A);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING_ARB
printf("GL_PIXEL_UNPACK_BUFFER_BINDING_ARB %d\n", 0x88EF);
#endif
#ifdef glVariantfvEXT
#endif
#ifdef GL_SAMPLE_MASK_INVERT_EXT
printf("GL_SAMPLE_MASK_INVERT_EXT %d\n", 0x80AB);
#endif
#ifdef GL_CON_8_ATI
printf("GL_CON_8_ATI %d\n", 0x8949);
#endif
#ifdef GL_TEXTURE27
printf("GL_TEXTURE27 %d\n", 0x84DB);
#endif
#ifdef GL_ENV_REVERSE_BLEND_EXT
printf("GL_ENV_REVERSE_BLEND_EXT %d\n", 0);
#endif
#ifdef GLU_NURBS_BEGIN_DATA_EXT
printf("GLU_NURBS_BEGIN_DATA_EXT %d\n", 100170);
#endif
#ifdef GL_POST_CONVOLUTION_ALPHA_SCALE
printf("GL_POST_CONVOLUTION_ALPHA_SCALE %d\n", 0x801F);
#endif
#ifdef glConvolutionParameteriEXT
#endif
#ifdef GL_SUNX_constant_data
printf("GL_SUNX_constant_data %d\n", 1);
#endif
#ifdef GL_VIEWPORT
printf("GL_VIEWPORT %d\n", 0x0BA2);
#endif
#ifdef glWindowPos4ivMESA
#endif
#ifdef GLEE_EXT_depth_bounds_test
#endif
#ifdef GL_DRAW_BUFFER11
printf("GL_DRAW_BUFFER11 %d\n", 0x8830);
#endif
#ifdef glVertexAttribs1dvNV
#endif
#ifdef GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS
printf("GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS %d\n", 0x8354);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY
printf("GL_SECONDARY_COLOR_ARRAY %d\n", 0x845E);
#endif
#ifdef GL_RENDERBUFFER_BINDING_EXT
printf("GL_RENDERBUFFER_BINDING_EXT %d\n", 0x8CA7);
#endif
#ifdef GL_COMBINER_CD_DOT_PRODUCT_NV
printf("GL_COMBINER_CD_DOT_PRODUCT_NV %d\n", 0x8546);
#endif
#ifdef GL_TEXTURE_COMPONENTS
#endif
#ifdef GL_ACCUM_ALPHA_BITS
printf("GL_ACCUM_ALPHA_BITS %d\n", 0x0D5B);
#endif
#ifdef __LDBL_MIN_EXP__
#endif
#ifdef GL_IR_INSTRUMENT1_SGIX
printf("GL_IR_INSTRUMENT1_SGIX %d\n", 0x817F);
#endif
#ifdef GL_EXT_histogram
printf("GL_EXT_histogram %d\n", 1);
#endif
#ifdef GL_VERTEX_SOURCE_ATI
printf("GL_VERTEX_SOURCE_ATI %d\n", 0x8774);
#endif
#ifdef __APPLE_CC__
printf("__APPLE_CC__ %d\n", 5493);
#endif
#ifdef glVertexAttribs3hvNV
#endif
#ifdef GL_SOURCE6_RGB
printf("GL_SOURCE6_RGB %d\n", 0x8586);
#endif
#ifdef GL_COMPRESSED_RGB_FXT1_3DFX
printf("GL_COMPRESSED_RGB_FXT1_3DFX %d\n", 0x86B0);
#endif
#ifdef GL_GREEN_INTEGER_EXT
printf("GL_GREEN_INTEGER_EXT %d\n", 0x8D95);
#endif
#ifdef GL_EYE_DISTANCE_TO_LINE_SGIS
printf("GL_EYE_DISTANCE_TO_LINE_SGIS %d\n", 0x81F2);
#endif
#ifdef GL_R1UI_T2F_V3F_SUN
printf("GL_R1UI_T2F_V3F_SUN %d\n", 0x85C9);
#endif
#ifdef GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV
printf("GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV %d\n", 0x885D);
#endif
#ifdef GLU_VERSION
printf("GLU_VERSION %d\n", 100800);
#endif
#ifdef glPollAsyncSGIX
#endif
#ifdef GL_COLOR_ARRAY_SIZE_EXT
printf("GL_COLOR_ARRAY_SIZE_EXT %d\n", 0x8081);
#endif
#ifdef GLUT_VIDEO_RESIZE_X_DELTA
printf("GLUT_VIDEO_RESIZE_X_DELTA %d\n", 902);
#endif
#ifdef GL_POINT_BIT
printf("GL_POINT_BIT %d\n", 0x00000002);
#endif
#ifdef GL_POINT_SMOOTH_HINT
printf("GL_POINT_SMOOTH_HINT %d\n", 0x0C51);
#endif
#ifdef GL_STENCIL_BACK_FAIL_ATI
printf("GL_STENCIL_BACK_FAIL_ATI %d\n", 0x8801);
#endif
#ifdef glGetListParameterivSGIX
#endif
#ifdef GL_STENCIL_PASS_DEPTH_PASS
printf("GL_STENCIL_PASS_DEPTH_PASS %d\n", 0x0B96);
#endif
#ifdef GL_SUB_ATI
printf("GL_SUB_ATI %d\n", 0x8965);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY8_NV
printf("GL_VERTEX_ATTRIB_ARRAY8_NV %d\n", 0x8658);
#endif
#ifdef GL_ATI_envmap_bumpmap
printf("GL_ATI_envmap_bumpmap %d\n", 1);
#endif
#ifdef GLEE_EXT_packed_depth_stencil
#endif
#ifdef GL_VERTEX_STREAM3_ATI
printf("GL_VERTEX_STREAM3_ATI %d\n", 0x876F);
#endif
#ifdef GL_OPERAND3_RGB_ARB
printf("GL_OPERAND3_RGB_ARB %d\n", 0x8593);
#endif
#ifdef GL_PROGRAM_TEMPORARIES_ARB
printf("GL_PROGRAM_TEMPORARIES_ARB %d\n", 0x88A4);
#endif
#ifdef GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI
printf("GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI %d\n", 0x8973);
#endif
#ifdef GL_BUFFER_OBJECT_APPLE
printf("GL_BUFFER_OBJECT_APPLE %d\n", 0x85B3);
#endif
#ifdef GL_LUMINANCE_ALPHA
printf("GL_LUMINANCE_ALPHA %d\n", 0x190A);
#endif
#ifdef GL_DISTANCE_ATTENUATION_EXT
printf("GL_DISTANCE_ATTENUATION_EXT %d\n", 0x8129);
#endif
#ifdef GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS
printf("GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS %d\n", 0x809C);
#endif
#ifdef __GLEE_GL_HP_image_transform
printf("__GLEE_GL_HP_image_transform %d\n", 1);
#endif
#ifdef GL_NEGATIVE_X_EXT
printf("GL_NEGATIVE_X_EXT %d\n", 0x87D9);
#endif
#ifdef glGetLocalConstantIntegervEXT
#endif
#ifdef __DBL_DENORM_MIN__
#endif
#ifdef GL_MATRIX5_NV
printf("GL_MATRIX5_NV %d\n", 0x8635);
#endif
#ifdef GL_BGRA
printf("GL_BGRA %d\n", 0x80E1);
#endif
#ifdef GL_TYPE_RGBA_FLOAT_ATI
printf("GL_TYPE_RGBA_FLOAT_ATI %d\n", 0x8820);
#endif
#ifdef GL_PIXEL_TEX_GEN_SGIX
printf("GL_PIXEL_TEX_GEN_SGIX %d\n", 0x8139);
#endif
#ifdef GLU_BEGIN
printf("GLU_BEGIN %d\n", 100100);
#endif
#ifdef GL_CLAMP
printf("GL_CLAMP %d\n", 0x2900);
#endif
#ifdef GL_ONE_MINUS_SRC_ALPHA
printf("GL_ONE_MINUS_SRC_ALPHA %d\n", 0x0303);
#endif
#ifdef GL_ARB_draw_buffers
printf("GL_ARB_draw_buffers %d\n", 1);
#endif
#ifdef GL_BLUE
printf("GL_BLUE %d\n", 0x1905);
#endif
#ifdef GL_LUMINANCE4_ALPHA4
printf("GL_LUMINANCE4_ALPHA4 %d\n", 0x8043);
#endif
#ifdef GL_MATRIX4_NV
printf("GL_MATRIX4_NV %d\n", 0x8634);
#endif
#ifdef GL_DOT3_RGB_EXT
printf("GL_DOT3_RGB_EXT %d\n", 0x8740);
#endif
#ifdef GL_REPLACEMENT_CODE_ARRAY_SUN
printf("GL_REPLACEMENT_CODE_ARRAY_SUN %d\n", 0x85C0);
#endif
#ifdef glFragmentLightModelfEXT
#endif
#ifdef GL_MODELVIEW15_ARB
printf("GL_MODELVIEW15_ARB %d\n", 0x872F);
#endif
#ifdef GLEE_SUN_global_alpha
#endif
#ifdef GL_NV_vertex_program1_1
printf("GL_NV_vertex_program1_1 %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER4
printf("GL_DRAW_BUFFER4 %d\n", 0x8829);
#endif
#ifdef GL_OPERAND2_RGB
printf("GL_OPERAND2_RGB %d\n", 0x8592);
#endif
#ifdef GL_COLOR_ATTACHMENT1_EXT
printf("GL_COLOR_ATTACHMENT1_EXT %d\n", 0x8CE1);
#endif
#ifdef glGetVertexAttribArrayObjectivATI
#endif
#ifdef GL_NORMALIZED_RANGE_EXT
printf("GL_NORMALIZED_RANGE_EXT %d\n", 0x87E0);
#endif
#ifdef GL_ALWAYS_FAST_HINT_PGI
printf("GL_ALWAYS_FAST_HINT_PGI %d\n", 0x1A20C);
#endif
#ifdef GL_LINE_WIDTH
printf("GL_LINE_WIDTH %d\n", 0x0B21);
#endif
#ifdef glVertexStream2sATI
#endif
#ifdef GL_SLICE_ACCUM_SUN
printf("GL_SLICE_ACCUM_SUN %d\n", 0x85CC);
#endif
#ifdef glVertexAttrib4ubvNV
#endif
#ifdef GL_TEXTURE_LOD_BIAS_EXT
printf("GL_TEXTURE_LOD_BIAS_EXT %d\n", 0x8501);
#endif
#ifdef GL_TEXTURE14_ARB
printf("GL_TEXTURE14_ARB %d\n", 0x84CE);
#endif
#ifdef GL_RGB_INTEGER_EXT
printf("GL_RGB_INTEGER_EXT %d\n", 0x8D98);
#endif
#ifdef GL_APPLE_object_purgeable
printf("GL_APPLE_object_purgeable %d\n", 1);
#endif
#ifdef GL_PIXEL_MAP_R_TO_R_SIZE
printf("GL_PIXEL_MAP_R_TO_R_SIZE %d\n", 0x0CB6);
#endif
#ifdef GL_ARRAY_REV_COMPS_IN_4_BYTES_ATI
printf("GL_ARRAY_REV_COMPS_IN_4_BYTES_ATI %d\n", 0x897C);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_EXT
printf("GL_TRANSFORM_FEEDBACK_BUFFER_EXT %d\n", 0x8C8E);
#endif
#ifdef GL_T2F_C4F_N3F_V3F
printf("GL_T2F_C4F_N3F_V3F %d\n", 0x2A2C);
#endif
#ifdef GL_EYE_POINT_SGIS
printf("GL_EYE_POINT_SGIS %d\n", 0x81F4);
#endif
#ifdef GL_POLYGON_OFFSET_FILL
printf("GL_POLYGON_OFFSET_FILL %d\n", 0x8037);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Z %d\n", 0x8519);
#endif
#ifdef GLU_TESS_BEGIN_DATA
printf("GLU_TESS_BEGIN_DATA %d\n", 100106);
#endif
#ifdef GLU_NURBS_ERROR23
printf("GLU_NURBS_ERROR23 %d\n", 100273);
#endif
#ifdef GL_FOG_COLOR
printf("GL_FOG_COLOR %d\n", 0x0B66);
#endif
#ifdef GL_TEXTURE1_ARB
printf("GL_TEXTURE1_ARB %d\n", 0x84C1);
#endif
#ifdef GLEE_SGIX_shadow_ambient
#endif
#ifdef GL_NORMAL_BIT_PGI
printf("GL_NORMAL_BIT_PGI %d\n", 0x08000000);
#endif
#ifdef glTextureNormalEXT
#endif
#ifdef GL_STENCIL_BACK_REF
printf("GL_STENCIL_BACK_REF %d\n", 0x8CA3);
#endif
#ifdef __GLEE_GL_EXT_light_texture
printf("__GLEE_GL_EXT_light_texture %d\n", 1);
#endif
#ifdef glVertexAttrib4dNV
#endif
#ifdef GL_EYE_DISTANCE_TO_POINT_SGIS
printf("GL_EYE_DISTANCE_TO_POINT_SGIS %d\n", 0x81F0);
#endif
#ifdef GL_INVARIANT_VALUE_EXT
printf("GL_INVARIANT_VALUE_EXT %d\n", 0x87EA);
#endif
#ifdef GL_DYNAMIC_COPY
printf("GL_DYNAMIC_COPY %d\n", 0x88EA);
#endif
#ifdef glExtractComponentEXT
#endif
#ifdef GL_COLOR_SUM_CLAMP_NV
printf("GL_COLOR_SUM_CLAMP_NV %d\n", 0x854F);
#endif
#ifdef __GLEE_GL_NV_fence
printf("__GLEE_GL_NV_fence %d\n", 1);
#endif
#ifdef GL_COMPRESSED_TEXTURE_FORMATS
printf("GL_COMPRESSED_TEXTURE_FORMATS %d\n", 0x86A3);
#endif
#ifdef glEndFragmentShaderATI
#endif
#ifdef GL_OFFSET_TEXTURE_BIAS_NV
printf("GL_OFFSET_TEXTURE_BIAS_NV %d\n", 0x86E3);
#endif
#ifdef GLUT_BITMAP_HELVETICA_18
#endif
#ifdef GL_T4F_V4F
printf("GL_T4F_V4F %d\n", 0x2A28);
#endif
#ifdef GL_COMP_BIT_ATI
printf("GL_COMP_BIT_ATI %d\n", 0x00000002);
#endif
#ifdef GL_MESA_ycbcr_texture
printf("GL_MESA_ycbcr_texture %d\n", 1);
#endif
#ifdef GL_CLAMP_TO_BORDER
printf("GL_CLAMP_TO_BORDER %d\n", 0x812D);
#endif
#ifdef GL_WEIGHT_ARRAY_ARB
printf("GL_WEIGHT_ARRAY_ARB %d\n", 0x86AD);
#endif
#ifdef glTangent3iEXT
#endif
#ifdef GL_TEXTURE17_ARB
printf("GL_TEXTURE17_ARB %d\n", 0x84D1);
#endif
#ifdef GL_OUTPUT_COLOR1_EXT
printf("GL_OUTPUT_COLOR1_EXT %d\n", 0x879C);
#endif
#ifdef glVertexAttrib4ubNV
#endif
#ifdef GL_SELECT
printf("GL_SELECT %d\n", 0x1C02);
#endif
#ifdef GL_TEXTURE_LO_SIZE_NV
printf("GL_TEXTURE_LO_SIZE_NV %d\n", 0x871C);
#endif
#ifdef GL_TEXTURE_MAX_CLAMP_T_SGIX
printf("GL_TEXTURE_MAX_CLAMP_T_SGIX %d\n", 0x836A);
#endif
#ifdef glResetHistogramEXT
#endif
#ifdef GL_OR_INVERTED
printf("GL_OR_INVERTED %d\n", 0x150D);
#endif
#ifdef GL_TEXTURE21_ARB
printf("GL_TEXTURE21_ARB %d\n", 0x84D5);
#endif
#ifdef GL_SIGNED_RGB8_NV
printf("GL_SIGNED_RGB8_NV %d\n", 0x86FF);
#endif
#ifdef GL_LIGHTING_BIT
printf("GL_LIGHTING_BIT %d\n", 0x00000040);
#endif
#ifdef __GLEE_GL_SGIX_reference_plane
printf("__GLEE_GL_SGIX_reference_plane %d\n", 1);
#endif
#ifdef glVertexStream3dATI
#endif
#ifdef GL_TANGENT_ARRAY_STRIDE_EXT
printf("GL_TANGENT_ARRAY_STRIDE_EXT %d\n", 0x843F);
#endif
#ifdef GL_STRICT_SCISSOR_HINT_PGI
printf("GL_STRICT_SCISSOR_HINT_PGI %d\n", 0x1A218);
#endif
#ifdef GL_EXT_color_subtable
printf("GL_EXT_color_subtable %d\n", 1);
#endif
#ifdef GL_FULL_RANGE_EXT
printf("GL_FULL_RANGE_EXT %d\n", 0x87E1);
#endif
#ifdef GL_COLOR_ATTACHMENT9_EXT
printf("GL_COLOR_ATTACHMENT9_EXT %d\n", 0x8CE9);
#endif
#ifdef glColor4ubVertex3fvSUN
#endif
#ifdef GL_ALPHA8
printf("GL_ALPHA8 %d\n", 0x803C);
#endif
#ifdef GL_ASYNC_HISTOGRAM_SGIX
printf("GL_ASYNC_HISTOGRAM_SGIX %d\n", 0x832C);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB7_4_NV
printf("GL_MAP2_VERTEX_ATTRIB7_4_NV %d\n", 0x8677);
#endif
#ifdef GLEE_ATI_map_object_buffer
#endif
#ifdef GL_PIXEL_TEX_GEN_MODE_SGIX
printf("GL_PIXEL_TEX_GEN_MODE_SGIX %d\n", 0x832B);
#endif
#ifdef GL_COMPRESSED_RGBA_ARB
printf("GL_COMPRESSED_RGBA_ARB %d\n", 0x84EE);
#endif
#ifdef GLEE_ARB_texture_rectangle
#endif
#ifdef glVertexStream3iATI
#endif
#ifdef glMapControlPointsNV
#endif
#ifdef GL_UNPACK_ALIGNMENT
printf("GL_UNPACK_ALIGNMENT %d\n", 0x0CF5);
#endif
#ifdef glCopyConvolutionFilter2DEXT
#endif
#ifdef glColorPointerListIBM
#endif
#ifdef GLUT_SCREEN_WIDTH_MM
printf("GLUT_SCREEN_WIDTH_MM %d\n", 202);
#endif
#ifdef GL_UNPACK_RESAMPLE_OML
printf("GL_UNPACK_RESAMPLE_OML %d\n", 0x8985);
#endif
#ifdef GLU_NURBS_MODE
printf("GLU_NURBS_MODE %d\n", 100160);
#endif
#ifdef GL_READ_FRAMEBUFFER_EXT
printf("GL_READ_FRAMEBUFFER_EXT %d\n", 0x8CA8);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER
printf("GL_PIXEL_UNPACK_BUFFER %d\n", 0x88EC);
#endif
#ifdef GL_CON_22_ATI
printf("GL_CON_22_ATI %d\n", 0x8957);
#endif
#ifdef GL_MAX_VERTEX_VARYING_COMPONENTS_EXT
printf("GL_MAX_VERTEX_VARYING_COMPONENTS_EXT %d\n", 0x8DDE);
#endif
#ifdef GL_TANGENT_ARRAY_EXT
printf("GL_TANGENT_ARRAY_EXT %d\n", 0x8439);
#endif
#ifdef GL_CON_30_ATI
printf("GL_CON_30_ATI %d\n", 0x895F);
#endif
#ifdef GL_ALPHA_FLOAT16_ATI
printf("GL_ALPHA_FLOAT16_ATI %d\n", 0x881C);
#endif
#ifdef GL_LINE_TOKEN
printf("GL_LINE_TOKEN %d\n", 0x0702);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_ARB
printf("GL_TEXTURE_CUBE_MAP_ARB %d\n", 0x8513);
#endif
#ifdef GL_TEXTURE_1D_STACK_BINDING_MESAX
printf("GL_TEXTURE_1D_STACK_BINDING_MESAX %d\n", 0x875D);
#endif
#ifdef GL_PACK_IMAGE_HEIGHT
printf("GL_PACK_IMAGE_HEIGHT %d\n", 0x806C);
#endif
#ifdef GL_BLEND_EQUATION
printf("GL_BLEND_EQUATION %d\n", 0x8009);
#endif
#ifdef GL_OPERAND5_RGB
printf("GL_OPERAND5_RGB %d\n", 0x8595);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB3_4_NV
printf("GL_MAP2_VERTEX_ATTRIB3_4_NV %d\n", 0x8673);
#endif
#ifdef GL_PREVIOUS
printf("GL_PREVIOUS %d\n", 0x8578);
#endif
#ifdef GL_MATRIX4_ARB
printf("GL_MATRIX4_ARB %d\n", 0x88C4);
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER
printf("GL_ELEMENT_ARRAY_BUFFER %d\n", 0x8893);
#endif
#ifdef GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP
printf("GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP %d\n", 0x8163);
#endif
#ifdef GL_SAMPLE_MASK_VALUE_EXT
printf("GL_SAMPLE_MASK_VALUE_EXT %d\n", 0x80AA);
#endif
#ifdef GL_DSDT_MAG_NV
printf("GL_DSDT_MAG_NV %d\n", 0x86F6);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB4_4_NV
printf("GL_MAP2_VERTEX_ATTRIB4_4_NV %d\n", 0x8674);
#endif
#ifdef GLEE_SGIS_texture_border_clamp
#endif
#ifdef GLEE_SUN_convolution_border_modes
#endif
#ifdef GL_WIN_phong_shading
printf("GL_WIN_phong_shading %d\n", 1);
#endif
#ifdef GL_NORMAL_MAP_EXT
printf("GL_NORMAL_MAP_EXT %d\n", 0x8511);
#endif
#ifdef GL_MAX_ELEMENTS_VERTICES
printf("GL_MAX_ELEMENTS_VERTICES %d\n", 0x80E8);
#endif
#ifdef GL_SGIX_reference_plane
printf("GL_SGIX_reference_plane %d\n", 1);
#endif
#ifdef glReplacementCodeuivSUN
#endif
#ifdef GL_PACK_SUBSAMPLE_RATE_SGIX
printf("GL_PACK_SUBSAMPLE_RATE_SGIX %d\n", 0x85A0);
#endif
#ifdef GL_NV_texture_rectangle
printf("GL_NV_texture_rectangle %d\n", 1);
#endif
#ifdef GL_NEGATIVE_ONE_EXT
printf("GL_NEGATIVE_ONE_EXT %d\n", 0x87DF);
#endif
#ifdef glFragmentLightivEXT
#endif
#ifdef __GLEE_GL_SGIX_polynomial_ffd
printf("__GLEE_GL_SGIX_polynomial_ffd %d\n", 1);
#endif
#ifdef glDeformationMap3fSGIX
#endif
#ifdef GL_TEXTURE_MULTI_BUFFER_HINT_SGIX
printf("GL_TEXTURE_MULTI_BUFFER_HINT_SGIX %d\n", 0x812E);
#endif
#ifdef GL_OPERAND6_ALPHA
printf("GL_OPERAND6_ALPHA %d\n", 0x859E);
#endif
#ifdef GL_DEPTH_BITS
printf("GL_DEPTH_BITS %d\n", 0x0D56);
#endif
#ifdef GL_POST_CONVOLUTION_GREEN_SCALE_EXT
printf("GL_POST_CONVOLUTION_GREEN_SCALE_EXT %d\n", 0x801D);
#endif
#ifdef GL_POSITION
printf("GL_POSITION %d\n", 0x1203);
#endif
#ifdef GL_R1UI_V3F_SUN
printf("GL_R1UI_V3F_SUN %d\n", 0x85C4);
#endif
#ifdef __i386__
printf("__i386__ %d\n", 1);
#endif
#ifdef __GLEE_GL_HP_texture_lighting
printf("__GLEE_GL_HP_texture_lighting %d\n", 1);
#endif
#ifdef GLUT_MULTISAMPLE
printf("GLUT_MULTISAMPLE %d\n", 128);
#endif
#ifdef GL_ONE_MINUS_CONSTANT_COLOR_EXT
printf("GL_ONE_MINUS_CONSTANT_COLOR_EXT %d\n", 0x8002);
#endif
#ifdef __GLEE_GL_SGIX_pixel_texture_bits
printf("__GLEE_GL_SGIX_pixel_texture_bits %d\n", 1);
#endif
#ifdef GL_SOURCE0_ALPHA_EXT
printf("GL_SOURCE0_ALPHA_EXT %d\n", 0x8588);
#endif
#ifdef GL_TEXTURE5_ARB
printf("GL_TEXTURE5_ARB %d\n", 0x84C5);
#endif
#ifdef GL_COLOR_INDEX1_EXT
printf("GL_COLOR_INDEX1_EXT %d\n", 0x80E2);
#endif
#ifdef GL_STENCIL_TEST_TWO_SIDE_EXT
printf("GL_STENCIL_TEST_TWO_SIDE_EXT %d\n", 0x8910);
#endif
#ifdef glVertexAttrib2sNV
#endif
#ifdef GL_SAMPLE_COVERAGE
printf("GL_SAMPLE_COVERAGE %d\n", 0x80A0);
#endif
#ifdef glTexSubImage3DEXT
#endif
#ifdef __GLEE_GL_SGI_color_table
printf("__GLEE_GL_SGI_color_table %d\n", 1);
#endif
#ifdef GL_TRACK_MATRIX_NV
printf("GL_TRACK_MATRIX_NV %d\n", 0x8648);
#endif
#ifdef __GLEE_GL_MESAX_texture_stack
printf("__GLEE_GL_MESAX_texture_stack %d\n", 1);
#endif
#ifdef GL_GENERATE_MIPMAP_SGIS
printf("GL_GENERATE_MIPMAP_SGIS %d\n", 0x8191);
#endif
#ifdef GL_HISTOGRAM_GREEN_SIZE
printf("GL_HISTOGRAM_GREEN_SIZE %d\n", 0x8029);
#endif
#ifdef GL_HP_convolution_border_modes
printf("GL_HP_convolution_border_modes %d\n", 1);
#endif
#ifdef GL_VERTEX_ARRAY_STORAGE_HINT_APPLE
printf("GL_VERTEX_ARRAY_STORAGE_HINT_APPLE %d\n", 0x851F);
#endif
#ifdef GL_SIGNED_HILO16_NV
printf("GL_SIGNED_HILO16_NV %d\n", 0x86FA);
#endif
#ifdef GLUT_FULLY_RETAINED
printf("GLUT_FULLY_RETAINED %d\n", 1);
#endif
#ifdef GL_ARRAY_BUFFER_BINDING
printf("GL_ARRAY_BUFFER_BINDING %d\n", 0x8894);
#endif
#ifdef GL_FRONT_AND_BACK
printf("GL_FRONT_AND_BACK %d\n", 0x0408);
#endif
#ifdef GL_BGRA_EXT
printf("GL_BGRA_EXT %d\n", 0x80E1);
#endif
#ifdef GL_UNSIGNED_INT_10_10_10_2_EXT
printf("GL_UNSIGNED_INT_10_10_10_2_EXT %d\n", 0x8036);
#endif
#ifdef GL_CURRENT_RASTER_NORMAL_EXT
printf("GL_CURRENT_RASTER_NORMAL_EXT %d\n", 0x8406);
#endif
#ifdef __FLT_MIN_10_EXP__
#endif
#ifdef GL_VERTEX_SHADER_INVARIANTS_EXT
printf("GL_VERTEX_SHADER_INVARIANTS_EXT %d\n", 0x87D1);
#endif
#ifdef GL_ALPHA_TEST_REF
printf("GL_ALPHA_TEST_REF %d\n", 0x0BC2);
#endif
#ifdef glBinormal3fEXT
#endif
#ifdef GL_INGR_color_clamp
printf("GL_INGR_color_clamp %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_packed_pixels
printf("__GLEE_GL_EXT_packed_pixels %d\n", 1);
#endif
#ifdef GL_FRAMEBUFFER_BINDING_EXT
printf("GL_FRAMEBUFFER_BINDING_EXT %d\n", 0x8CA6);
#endif
#ifdef GL_STENCIL_CLEAR_VALUE
printf("GL_STENCIL_CLEAR_VALUE %d\n", 0x0B91);
#endif
#ifdef GL_VERTEX_ARRAY_BUFFER_BINDING_ARB
printf("GL_VERTEX_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8896);
#endif
#ifdef glTangent3dvEXT
#endif
#ifdef GL_POINT
printf("GL_POINT %d\n", 0x1B00);
#endif
#ifdef glFragmentLightfEXT
#endif
#ifdef GL_PROGRAM_POINT_SIZE_EXT
printf("GL_PROGRAM_POINT_SIZE_EXT %d\n", 0x8642);
#endif
#ifdef glGetArrayObjectivATI
#endif
#ifdef GL_DUAL_LUMINANCE12_SGIS
printf("GL_DUAL_LUMINANCE12_SGIS %d\n", 0x8116);
#endif
#ifdef GL_PROXY_TEXTURE_4D_SGIS
printf("GL_PROXY_TEXTURE_4D_SGIS %d\n", 0x8135);
#endif
#ifdef GL_APPLE_flush_render
printf("GL_APPLE_flush_render %d\n", 1);
#endif
#ifdef GLEE_SGIX_pixel_tiles
#endif
#ifdef GL_VERSION_1_1
printf("GL_VERSION_1_1 %d\n", 1);
#endif
#ifdef GLEE_ARB_point_sprite
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT %d\n", 0x851A);
#endif
#ifdef GL_CONVOLUTION_WIDTH_EXT
printf("GL_CONVOLUTION_WIDTH_EXT %d\n", 0x8018);
#endif
#ifdef GL_TEXTURE11
printf("GL_TEXTURE11 %d\n", 0x84CB);
#endif
#ifdef GL_POST_CONVOLUTION_ALPHA_BIAS_EXT
printf("GL_POST_CONVOLUTION_ALPHA_BIAS_EXT %d\n", 0x8023);
#endif
#ifdef GL_EYE_PLANE
printf("GL_EYE_PLANE %d\n", 0x2502);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_X %d\n", 0x8516);
#endif
#ifdef GL_DEPTH_BIAS
printf("GL_DEPTH_BIAS %d\n", 0x0D1F);
#endif
#ifdef GL_DRAW_PIXEL_TOKEN
printf("GL_DRAW_PIXEL_TOKEN %d\n", 0x0705);
#endif
#ifdef GL_FENCE_APPLE
printf("GL_FENCE_APPLE %d\n", 0x8A0B);
#endif
#ifdef GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI
printf("GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI %d\n", 0x80B3);
#endif
#ifdef glFragmentLightfSGIX
#endif
#ifdef GL_INDEX_ARRAY_LIST_IBM
printf("GL_INDEX_ARRAY_LIST_IBM %d\n", 103073);
#endif
#ifdef GL_CURRENT_RASTER_TEXTURE_COORDS
printf("GL_CURRENT_RASTER_TEXTURE_COORDS %d\n", 0x0B06);
#endif
#ifdef GL_RGBA_EXTENDED_RANGE_SGIX
printf("GL_RGBA_EXTENDED_RANGE_SGIX %d\n", 0x85ED);
#endif
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT
printf("GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT %d\n", 0x87CE);
#endif
#ifdef GLEE_HP_texture_lighting
#endif
#ifdef GL_PROGRAM_TARGET_NV
printf("GL_PROGRAM_TARGET_NV %d\n", 0x8646);
#endif
#ifdef GL_POST_CONVOLUTION_ALPHA_BIAS
printf("GL_POST_CONVOLUTION_ALPHA_BIAS %d\n", 0x8023);
#endif
#ifdef __GLEE_GL_SGIS_detail_texture
printf("__GLEE_GL_SGIS_detail_texture %d\n", 1);
#endif
#ifdef GL_MATRIX24_ARB
printf("GL_MATRIX24_ARB %d\n", 0x88D8);
#endif
#ifdef GL_PIXEL_TILE_GRID_DEPTH_SGIX
printf("GL_PIXEL_TILE_GRID_DEPTH_SGIX %d\n", 0x8144);
#endif
#ifdef GL_TEXTURE_BORDER_COLOR
printf("GL_TEXTURE_BORDER_COLOR %d\n", 0x1004);
#endif
#ifdef glListParameteriSGIX
#endif
#ifdef GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB
printf("GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB %d\n", 0x8B87);
#endif
#ifdef GL_ASYNC_MARKER_SGIX
printf("GL_ASYNC_MARKER_SGIX %d\n", 0x8329);
#endif
#ifdef GL_INDEX_ARRAY_EXT
printf("GL_INDEX_ARRAY_EXT %d\n", 0x8077);
#endif
#ifdef GL_STENCIL_ATTACHMENT_EXT
printf("GL_STENCIL_ATTACHMENT_EXT %d\n", 0x8D20);
#endif
#ifdef GL_MATRIX1_ARB
printf("GL_MATRIX1_ARB %d\n", 0x88C1);
#endif
#ifdef GLEE_ATI_separate_stencil
#endif
#ifdef GL_ACTIVE_STENCIL_FACE_EXT
printf("GL_ACTIVE_STENCIL_FACE_EXT %d\n", 0x8911);
#endif
#ifdef GLU_VERSION_1_2
printf("GLU_VERSION_1_2 %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER
printf("GL_DRAW_BUFFER %d\n", 0x0C01);
#endif
#ifdef GLEE_INGR_color_clamp
#endif
#ifdef GL_SIGNED_HILO8_NV
printf("GL_SIGNED_HILO8_NV %d\n", 0x885F);
#endif
#ifdef glAreTexturesResidentEXT
#endif
#ifdef GL_EMISSION
printf("GL_EMISSION %d\n", 0x1600);
#endif
#ifdef glVertexStream4sATI
#endif
#ifdef GL_MAP1_GRID_SEGMENTS
printf("GL_MAP1_GRID_SEGMENTS %d\n", 0x0DD1);
#endif
#ifdef GL_MAX_TEXTURE_LOD_BIAS_EXT
printf("GL_MAX_TEXTURE_LOD_BIAS_EXT %d\n", 0x84FD);
#endif
#ifdef GL_MAX_RECTANGLE_TEXTURE_SIZE_NV
printf("GL_MAX_RECTANGLE_TEXTURE_SIZE_NV %d\n", 0x84F8);
#endif
#ifdef GL_SOURCE4_RGB_ARB
printf("GL_SOURCE4_RGB_ARB %d\n", 0x8584);
#endif
#ifdef GL_OUTPUT_VERTEX_EXT
printf("GL_OUTPUT_VERTEX_EXT %d\n", 0x879A);
#endif
#ifdef GL_EYE_PLANE_ABSOLUTE_NV
printf("GL_EYE_PLANE_ABSOLUTE_NV %d\n", 0x855C);
#endif
#ifdef __GLEE_GL_ATI_fragment_shader
printf("__GLEE_GL_ATI_fragment_shader %d\n", 1);
#endif
#ifdef GL_2_BYTES
printf("GL_2_BYTES %d\n", 0x1407);
#endif
#ifdef GLEE_EXT_point_parameters
#endif
#ifdef GLUT_KEY_LEFT
printf("GLUT_KEY_LEFT %d\n", 100);
#endif
#ifdef GLUT_ENTERED
printf("GLUT_ENTERED %d\n", 1);
#endif
#ifdef glDrawElementArrayATI
#endif
#ifdef GL_ARB_point_parameters
printf("GL_ARB_point_parameters %d\n", 1);
#endif
#ifdef GL_FRAGMENT_LIGHT6_SGIX
printf("GL_FRAGMENT_LIGHT6_SGIX %d\n", 0x8412);
#endif
#ifdef GL_COLOR_MATRIX
printf("GL_COLOR_MATRIX %d\n", 0x80B1);
#endif
#ifdef GL_RED_SCALE
printf("GL_RED_SCALE %d\n", 0x0D14);
#endif
#ifdef GL_SPRITE_AXIAL_SGIX
printf("GL_SPRITE_AXIAL_SGIX %d\n", 0x814C);
#endif
#ifdef GL_TEXTURE_RED_SIZE
printf("GL_TEXTURE_RED_SIZE %d\n", 0x805C);
#endif
#ifdef GL_CW
printf("GL_CW %d\n", 0x0900);
#endif
#ifdef GL_ATI_texture_mirror_once
printf("GL_ATI_texture_mirror_once %d\n", 1);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER_EXT
printf("GL_TEXTURE_COORD_ARRAY_POINTER_EXT %d\n", 0x8092);
#endif
#ifdef GL_POST_CONVOLUTION_RED_SCALE_EXT
printf("GL_POST_CONVOLUTION_RED_SCALE_EXT %d\n", 0x801C);
#endif
#ifdef __GLEE_GL_EXT_multisample
printf("__GLEE_GL_EXT_multisample %d\n", 1);
#endif
#ifdef GL_FLOAT_VEC3_ARB
printf("GL_FLOAT_VEC3_ARB %d\n", 0x8B51);
#endif
#ifdef GL_CURRENT_RASTER_INDEX
printf("GL_CURRENT_RASTER_INDEX %d\n", 0x0B05);
#endif
#ifdef GL_STRICT_LIGHTING_HINT_PGI
printf("GL_STRICT_LIGHTING_HINT_PGI %d\n", 0x1A217);
#endif
#ifdef GL_RENDERBUFFER_INTERNAL_FORMAT_EXT
printf("GL_RENDERBUFFER_INTERNAL_FORMAT_EXT %d\n", 0x8D44);
#endif
#ifdef GL_MAX_VARYING_COMPONENTS_EXT
printf("GL_MAX_VARYING_COMPONENTS_EXT %d\n", 0x8B4B);
#endif
#ifdef GL_CON_18_ATI
printf("GL_CON_18_ATI %d\n", 0x8953);
#endif
#ifdef GL_TEXTURE_DEPTH_SIZE_ARB
printf("GL_TEXTURE_DEPTH_SIZE_ARB %d\n", 0x884A);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT
printf("GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT %d\n", 0x8DD7);
#endif
#ifdef GL_C4UB_V2F
printf("GL_C4UB_V2F %d\n", 0x2A22);
#endif
#ifdef glReplacementCodeuiNormal3fVertex3fvSUN
#endif
#ifdef GL_TEXCOORD2_BIT_PGI
printf("GL_TEXCOORD2_BIT_PGI %d\n", 0x20000000);
#endif
#ifdef __GLEE_GL_ARB_matrix_palette
printf("__GLEE_GL_ARB_matrix_palette %d\n", 1);
#endif
#ifdef glTexCoord2fVertex3fvSUN
#endif
#ifdef glReadInstrumentsSGIX
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB14_4_NV
printf("GL_MAP2_VERTEX_ATTRIB14_4_NV %d\n", 0x867E);
#endif
#ifdef GL_RENDERBUFFER_STENCIL_SIZE_EXT
printf("GL_RENDERBUFFER_STENCIL_SIZE_EXT %d\n", 0x8D55);
#endif
#ifdef GL_UNPACK_SKIP_IMAGES
printf("GL_UNPACK_SKIP_IMAGES %d\n", 0x806D);
#endif
#ifdef glIglooInterfaceSGIX
#endif
#ifdef GL_PIXEL_PACK_BUFFER_ARB
printf("GL_PIXEL_PACK_BUFFER_ARB %d\n", 0x88EB);
#endif
#ifdef glTexCoord2hvNV
#endif
#ifdef GL_CONVOLUTION_1D_EXT
printf("GL_CONVOLUTION_1D_EXT %d\n", 0x8010);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT %d\n", 0x8DA9);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
printf("GL_EDGE_FLAG_ARRAY_BUFFER_BINDING %d\n", 0x889B);
#endif
#ifdef GL_LOWER_LEFT
printf("GL_LOWER_LEFT %d\n", 0x8CA1);
#endif
#ifdef GL_RGB8I_EXT
printf("GL_RGB8I_EXT %d\n", 0x8D8F);
#endif
#ifdef GL_MAP_COLOR
printf("GL_MAP_COLOR %d\n", 0x0D10);
#endif
#ifdef GL_SHADE_MODEL
printf("GL_SHADE_MODEL %d\n", 0x0B54);
#endif
#ifdef GL_OPERAND3_RGB
printf("GL_OPERAND3_RGB %d\n", 0x8593);
#endif
#ifdef GL_MATRIX13_ARB
printf("GL_MATRIX13_ARB %d\n", 0x88CD);
#endif
#ifdef GL_DUAL_LUMINANCE8_SGIS
printf("GL_DUAL_LUMINANCE8_SGIS %d\n", 0x8115);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_2D_EXT
printf("GL_UNSIGNED_INT_SAMPLER_2D_EXT %d\n", 0x8DD2);
#endif
#ifdef GL_REPLACEMENT_CODE_SUN
printf("GL_REPLACEMENT_CODE_SUN %d\n", 0x81D8);
#endif
#ifdef GL_HISTOGRAM_SINK_EXT
printf("GL_HISTOGRAM_SINK_EXT %d\n", 0x802D);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT
printf("GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT %d\n", 0x840B);
#endif
#ifdef GL_MOV_ATI
printf("GL_MOV_ATI %d\n", 0x8961);
#endif
#ifdef GL_PRIMITIVES_GENERATED_EXT
printf("GL_PRIMITIVES_GENERATED_EXT %d\n", 0x8C87);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX
printf("GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX %d\n", 0x8409);
#endif
#ifdef GL_LUMINANCE8_ALPHA8
printf("GL_LUMINANCE8_ALPHA8 %d\n", 0x8045);
#endif
#ifdef GLU_NURBS_ERROR27
printf("GLU_NURBS_ERROR27 %d\n", 100277);
#endif
#ifdef GLEE_PGI_misc_hints
#endif
#ifdef GLU_NURBS_ERROR17
printf("GLU_NURBS_ERROR17 %d\n", 100267);
#endif
#ifdef GL_PROXY_TEXTURE_2D
printf("GL_PROXY_TEXTURE_2D %d\n", 0x8064);
#endif
#ifdef GL_STENCIL_INDEX1_EXT
printf("GL_STENCIL_INDEX1_EXT %d\n", 0x8D46);
#endif
#ifdef GL_CURRENT_RASTER_NORMAL_SGIX
printf("GL_CURRENT_RASTER_NORMAL_SGIX %d\n", 0x8406);
#endif
#ifdef GL_DRAW_BUFFER4_ATI
printf("GL_DRAW_BUFFER4_ATI %d\n", 0x8829);
#endif
#ifdef GLEE_EXT_texture_compression_dxt1
#endif
#ifdef GLU_TESS_ERROR
printf("GLU_TESS_ERROR %d\n", 100103);
#endif
#ifdef glDeleteAsyncMarkersSGIX
#endif
#ifdef glGetVertexAttribPointervNV
#endif
#ifdef GL_FRONT_RIGHT
printf("GL_FRONT_RIGHT %d\n", 0x0401);
#endif
#ifdef GLEE_NV_vertex_program2
#endif
#ifdef GL_ASYNC_READ_PIXELS_SGIX
printf("GL_ASYNC_READ_PIXELS_SGIX %d\n", 0x835E);
#endif
#ifdef GL_BLUE_MAX_CLAMP_INGR
printf("GL_BLUE_MAX_CLAMP_INGR %d\n", 0x8566);
#endif
#ifdef GL_MAX_PIXEL_MAP_TABLE
printf("GL_MAX_PIXEL_MAP_TABLE %d\n", 0x0D34);
#endif
#ifdef GL_VERTEX_PROGRAM_POINT_SIZE_NV
printf("GL_VERTEX_PROGRAM_POINT_SIZE_NV %d\n", 0x8642);
#endif
#ifdef GL_NORMAL_ARRAY_EXT
printf("GL_NORMAL_ARRAY_EXT %d\n", 0x8075);
#endif
#ifdef GL_WIN_specular_fog
printf("GL_WIN_specular_fog %d\n", 1);
#endif
#ifdef GL_MAX_PALETTE_MATRICES_ARB
printf("GL_MAX_PALETTE_MATRICES_ARB %d\n", 0x8842);
#endif
#ifdef GL_NV_point_sprite
printf("GL_NV_point_sprite %d\n", 1);
#endif
#ifdef glNormalStream3ivATI
#endif
#ifdef GL_FALSE
printf("GL_FALSE %d\n", 0);
#endif
#ifdef GL_SGIX_pixel_texture
printf("GL_SGIX_pixel_texture %d\n", 1);
#endif
#ifdef GL_TRANSPOSE_COLOR_MATRIX_ARB
printf("GL_TRANSPOSE_COLOR_MATRIX_ARB %d\n", 0x84E6);
#endif
#ifdef GL_SGIX_texture_lod_bias
printf("GL_SGIX_texture_lod_bias %d\n", 1);
#endif
#ifdef GLEE_APPLE_fence
#endif
#ifdef GL_INT_VEC2
printf("GL_INT_VEC2 %d\n", 0x8B53);
#endif
#ifdef GL_VERSION_1_5
printf("GL_VERSION_1_5 %d\n", 1);
#endif
#ifdef GL_SGIS_texture_select
printf("GL_SGIS_texture_select %d\n", 1);
#endif
#ifdef GL_TEXTURE_DEFORMATION_BIT_SGIX
printf("GL_TEXTURE_DEFORMATION_BIT_SGIX %d\n", 0x00000001);
#endif
#ifdef __GLEE_GL_SGIX_flush_raster
printf("__GLEE_GL_SGIX_flush_raster %d\n", 1);
#endif
#ifdef GL_3DFX_multisample
printf("GL_3DFX_multisample %d\n", 1);
#endif
#ifdef __GLEE_GL_SGIX_subsample
printf("__GLEE_GL_SGIX_subsample %d\n", 1);
#endif
#ifdef GL_SPHERE_MAP
printf("GL_SPHERE_MAP %d\n", 0x2402);
#endif
#ifdef GL_SGIX_texture_scale_bias
printf("GL_SGIX_texture_scale_bias %d\n", 1);
#endif
#ifdef GL_REPLACE_OLDEST_SUN
printf("GL_REPLACE_OLDEST_SUN %d\n", 0x0003);
#endif
#ifdef GLUT_HAS_OVERLAY
printf("GLUT_HAS_OVERLAY %d\n", 802);
#endif
#ifdef GL_MODELVIEW_PROJECTION_NV
printf("GL_MODELVIEW_PROJECTION_NV %d\n", 0x8629);
#endif
#ifdef GL_TEXTURE24_ARB
printf("GL_TEXTURE24_ARB %d\n", 0x84D8);
#endif
#ifdef GL_ACTIVE_VERTEX_UNITS_ARB
printf("GL_ACTIVE_VERTEX_UNITS_ARB %d\n", 0x86A5);
#endif
#ifdef GL_HISTOGRAM_ALPHA_SIZE
printf("GL_HISTOGRAM_ALPHA_SIZE %d\n", 0x802B);
#endif
#ifdef GL_LINE_STIPPLE_PATTERN
printf("GL_LINE_STIPPLE_PATTERN %d\n", 0x0B25);
#endif
#ifdef GLU_NURBS_ERROR10
printf("GLU_NURBS_ERROR10 %d\n", 100260);
#endif
#ifdef GLUT_API_VERSION
printf("GLUT_API_VERSION %d\n", 5);
#endif
#ifdef glPixelTexGenParameterfSGIS
#endif
#ifdef GLUT_JOYSTICK_AXES
printf("GLUT_JOYSTICK_AXES %d\n", 615);
#endif
#ifdef GL_FLOAT_VEC2
printf("GL_FLOAT_VEC2 %d\n", 0x8B50);
#endif
#ifdef APIENTRYP
#endif
#ifdef GLU_NURBS_ERROR36
printf("GLU_NURBS_ERROR36 %d\n", 100286);
#endif
#ifdef GL_CLIP_PLANE3
printf("GL_CLIP_PLANE3 %d\n", 0x3003);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD18_EXT
printf("GL_OUTPUT_TEXTURE_COORD18_EXT %d\n", 0x87AF);
#endif
#ifdef GLUT_KEY_REPEAT_OFF
printf("GLUT_KEY_REPEAT_OFF %d\n", 0);
#endif
#ifdef GLUT_STENCIL
printf("GLUT_STENCIL %d\n", 32);
#endif
#ifdef GL_SAMPLE_MASK_INVERT_SGIS
printf("GL_SAMPLE_MASK_INVERT_SGIS %d\n", 0x80AB);
#endif
#ifdef GL_GREEN_BIT_ATI
printf("GL_GREEN_BIT_ATI %d\n", 0x00000002);
#endif
#ifdef GLU_NURBS_ERROR20
printf("GLU_NURBS_ERROR20 %d\n", 100270);
#endif
#ifdef GL_MATRIX_INDEX_ARRAY_TYPE_ARB
printf("GL_MATRIX_INDEX_ARRAY_TYPE_ARB %d\n", 0x8847);
#endif
#ifdef glVertexAttrib2svNV
#endif
#ifdef glTexSubImage2DEXT
#endif
#ifdef GL_CON_21_ATI
printf("GL_CON_21_ATI %d\n", 0x8956);
#endif
#ifdef GL_ARB_texture_compression
printf("GL_ARB_texture_compression %d\n", 1);
#endif
#ifdef __GLEE_GL_ATI_element_array
printf("__GLEE_GL_ATI_element_array %d\n", 1);
#endif
#ifdef GL_TEXTURE_DEFORMATION_SGIX
printf("GL_TEXTURE_DEFORMATION_SGIX %d\n", 0x8195);
#endif
#ifdef GL_NV_vertex_program2
printf("GL_NV_vertex_program2 %d\n", 1);
#endif
#ifdef GL_MAD_ATI
printf("GL_MAD_ATI %d\n", 0x8968);
#endif
#ifdef glColorTableParameterivSGI
#endif
#ifdef glHintPGI
#endif
#ifdef GL_POST_CONVOLUTION_COLOR_TABLE
printf("GL_POST_CONVOLUTION_COLOR_TABLE %d\n", 0x80D1);
#endif
#ifdef GL_ATI_vertex_array_object
printf("GL_ATI_vertex_array_object %d\n", 1);
#endif
#ifdef GLEE_SGIS_generate_mipmap
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB %d\n", 0x8623);
#endif
#ifdef GL_INTENSITY8
printf("GL_INTENSITY8 %d\n", 0x804B);
#endif
#ifdef GL_QUAD_LUMINANCE8_SGIS
printf("GL_QUAD_LUMINANCE8_SGIS %d\n", 0x8121);
#endif
#ifdef GL_CURRENT_INDEX
printf("GL_CURRENT_INDEX %d\n", 0x0B01);
#endif
#ifdef GL_ALPHA12_EXT
printf("GL_ALPHA12_EXT %d\n", 0x803D);
#endif
#ifdef GL_SAMPLES_SGIS
printf("GL_SAMPLES_SGIS %d\n", 0x80A9);
#endif
#ifdef GL_RED_MIN_CLAMP_INGR
printf("GL_RED_MIN_CLAMP_INGR %d\n", 0x8560);
#endif
#ifdef GLUT_MIDDLE_BUTTON
printf("GLUT_MIDDLE_BUTTON %d\n", 1);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB4_NV
printf("GL_EVAL_VERTEX_ATTRIB4_NV %d\n", 0x86CA);
#endif
#ifdef GL_SCALE_BY_ONE_HALF_NV
printf("GL_SCALE_BY_ONE_HALF_NV %d\n", 0x8540);
#endif
#ifdef GL_REDUCE
printf("GL_REDUCE %d\n", 0x8016);
#endif
#ifdef GL_TEXTURE5
printf("GL_TEXTURE5 %d\n", 0x84C5);
#endif
#ifdef __FLT_EVAL_METHOD__
printf("__FLT_EVAL_METHOD__ %d\n", 0);
#endif
#ifdef GL_LINE_BIT
printf("GL_LINE_BIT %d\n", 0x00000004);
#endif
#ifdef GL_COLOR_ARRAY_STRIDE
printf("GL_COLOR_ARRAY_STRIDE %d\n", 0x8083);
#endif
#ifdef glTexCoord1hNV
#endif
#ifdef GLEE_EXT_texture_env_combine
#endif
#ifdef GL_MAX_ASYNC_TEX_IMAGE_SGIX
printf("GL_MAX_ASYNC_TEX_IMAGE_SGIX %d\n", 0x835F);
#endif
#ifdef GL_SUN_slice_accum
printf("GL_SUN_slice_accum %d\n", 1);
#endif
#ifdef GL_OBJECT_ACTIVE_ATTRIBUTES_ARB
printf("GL_OBJECT_ACTIVE_ATTRIBUTES_ARB %d\n", 0x8B89);
#endif
#ifdef GLU_NURBS_TEX_COORD_EXT
printf("GLU_NURBS_TEX_COORD_EXT %d\n", 100168);
#endif
#ifdef GL_OPERAND0_ALPHA_ARB
printf("GL_OPERAND0_ALPHA_ARB %d\n", 0x8598);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX
printf("GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX %d\n", 0x840A);
#endif
#ifdef GL_YCBCR_MESA
printf("GL_YCBCR_MESA %d\n", 0x8757);
#endif
#ifdef GL_TRUE
printf("GL_TRUE %d\n", 1);
#endif
#ifdef GL_TEXTURE_2D
printf("GL_TEXTURE_2D %d\n", 0x0DE1);
#endif
#ifdef GL_NV_register_combiners
printf("GL_NV_register_combiners %d\n", 1);
#endif
#ifdef glGetLocalConstantBooleanvEXT
#endif
#ifdef GL_SHADER_CONSISTENT_NV
printf("GL_SHADER_CONSISTENT_NV %d\n", 0x86DD);
#endif
#ifdef GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV
printf("GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV %d\n", 0x887A);
#endif
#ifdef GL_LOGIC_OP
#endif
#ifdef GL_PROXY_TEXTURE_1D_STACK_MESAX
printf("GL_PROXY_TEXTURE_1D_STACK_MESAX %d\n", 0x875B);
#endif
#ifdef GL_RGB16I_EXT
printf("GL_RGB16I_EXT %d\n", 0x8D89);
#endif
#ifdef glVertexAttribs3fvNV
#endif
#ifdef GL_MESAX_texture_stack
printf("GL_MESAX_texture_stack %d\n", 1);
#endif
#ifdef __GLEE_GL_SGIX_ycrcb_subsample
printf("__GLEE_GL_SGIX_ycrcb_subsample %d\n", 1);
#endif
#ifdef GL_POINT_SIZE_MIN_EXT
printf("GL_POINT_SIZE_MIN_EXT %d\n", 0x8126);
#endif
#ifdef __GLEE_GL_NV_pixel_data_range
printf("__GLEE_GL_NV_pixel_data_range %d\n", 1);
#endif
#ifdef GL_DOT3_RGBA_ARB
printf("GL_DOT3_RGBA_ARB %d\n", 0x86AF);
#endif
#ifdef GL_NUM_INSTRUCTIONS_TOTAL_ATI
printf("GL_NUM_INSTRUCTIONS_TOTAL_ATI %d\n", 0x8972);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE_EXT
printf("GL_TEXTURE_COORD_ARRAY_STRIDE_EXT %d\n", 0x808A);
#endif
#ifdef GLUT_KEY_F7
printf("GLUT_KEY_F7 %d\n", 7);
#endif
#ifdef GLEE_REND_screen_coordinates
#endif
#ifdef GLEE_ATI_fragment_shader
#endif
#ifdef GL_STENCIL_INDEX8_EXT
printf("GL_STENCIL_INDEX8_EXT %d\n", 0x8D48);
#endif
#ifdef GL_ELEMENT_ARRAY_TYPE_APPLE
printf("GL_ELEMENT_ARRAY_TYPE_APPLE %d\n", 0x8A0D);
#endif
#ifdef GL_MAX_ASYNC_DRAW_PIXELS_SGIX
printf("GL_MAX_ASYNC_DRAW_PIXELS_SGIX %d\n", 0x8360);
#endif
#ifdef GL_MAX_FRAMEZOOM_FACTOR_SGIX
printf("GL_MAX_FRAMEZOOM_FACTOR_SGIX %d\n", 0x818D);
#endif
#ifdef GL_LINK_STATUS
printf("GL_LINK_STATUS %d\n", 0x8B82);
#endif
#ifdef GL_TEXTURE_COLOR_TABLE_SGI
printf("GL_TEXTURE_COLOR_TABLE_SGI %d\n", 0x80BC);
#endif
#ifdef GL_MATRIX22_ARB
printf("GL_MATRIX22_ARB %d\n", 0x88D6);
#endif
#ifdef GL_VERTEX_ARRAY_SIZE
printf("GL_VERTEX_ARRAY_SIZE %d\n", 0x807A);
#endif
#ifdef __GLEE_GL_WIN_phong_shading
printf("__GLEE_GL_WIN_phong_shading %d\n", 1);
#endif
#ifdef GL_REDUCE_EXT
printf("GL_REDUCE_EXT %d\n", 0x8016);
#endif
#ifdef GL_COLOR_INDEXES
printf("GL_COLOR_INDEXES %d\n", 0x1603);
#endif
#ifdef GLUT_KEY_F9
printf("GLUT_KEY_F9 %d\n", 9);
#endif
#ifdef __DBL_MIN_EXP__
#endif
#ifdef GL_ATIX_pn_triangles
printf("GL_ATIX_pn_triangles %d\n", 1);
#endif
#ifdef GL_EXP
printf("GL_EXP %d\n", 0x0800);
#endif
#ifdef GL_POST_COLOR_MATRIX_COLOR_TABLE
printf("GL_POST_COLOR_MATRIX_COLOR_TABLE %d\n", 0x80D2);
#endif
#ifdef GLEE_EXT_subtexture
#endif
#ifdef GL_TEXTURE_STORAGE_HINT_APPLE
printf("GL_TEXTURE_STORAGE_HINT_APPLE %d\n", 0x85BC);
#endif
#ifdef GL_TEXTURE_COMPARE_FUNC_ARB
printf("GL_TEXTURE_COMPARE_FUNC_ARB %d\n", 0x884D);
#endif
#ifdef GL_ACTIVE_TEXTURE
printf("GL_ACTIVE_TEXTURE %d\n", 0x84E0);
#endif
#ifdef GL_UNSIGNED_INT
printf("GL_UNSIGNED_INT %d\n", 0x1405);
#endif
#ifdef GL_MATRIX0_ARB
printf("GL_MATRIX0_ARB %d\n", 0x88C0);
#endif
#ifdef GL_STORAGE_SHARED_APPLE
printf("GL_STORAGE_SHARED_APPLE %d\n", 0x85BF);
#endif
#ifdef GL_GEQUAL
printf("GL_GEQUAL %d\n", 0x0206);
#endif
#ifdef GL_SOURCE6_RGB_ARB
printf("GL_SOURCE6_RGB_ARB %d\n", 0x8586);
#endif
#ifdef GL_SAMPLE_ALPHA_TO_MASK_SGIS
printf("GL_SAMPLE_ALPHA_TO_MASK_SGIS %d\n", 0x809E);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE
printf("GL_TEXTURE_COORD_ARRAY_TYPE %d\n", 0x8089);
#endif
#ifdef GL_ARRAY_OBJECT_BUFFER_ATI
printf("GL_ARRAY_OBJECT_BUFFER_ATI %d\n", 0x8766);
#endif
#ifdef GL_REG_8_ATI
printf("GL_REG_8_ATI %d\n", 0x8929);
#endif
#ifdef GL_FRAGMENT_SHADER
printf("GL_FRAGMENT_SHADER %d\n", 0x8B30);
#endif
#ifdef GL_DEPTH_PASS_INSTRUMENT_SGIX
printf("GL_DEPTH_PASS_INSTRUMENT_SGIX %d\n", 0x8310);
#endif
#ifdef GL_SPOT_CUTOFF
printf("GL_SPOT_CUTOFF %d\n", 0x1206);
#endif
#ifdef GL_INVALID_ENUM
printf("GL_INVALID_ENUM %d\n", 0x0500);
#endif
#ifdef GL_TEXTURE_RECTANGLE_EXT
printf("GL_TEXTURE_RECTANGLE_EXT %d\n", 0x84F5);
#endif
#ifdef GL_FOG_COORD
printf("GL_FOG_COORD %d\n", 0x8451);
#endif
#ifdef GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI
printf("GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI %d\n", 0x80BA);
#endif
#ifdef GL_POINT_CULL_MODE_ATI
printf("GL_POINT_CULL_MODE_ATI %d\n", 0x60B3);
#endif
#ifdef glGetProgramNamedParameterfvNV
#endif
#ifdef GL_2PASS_1_SGIS
printf("GL_2PASS_1_SGIS %d\n", 0x80A3);
#endif
#ifdef GL_MATRIX14_ARB
printf("GL_MATRIX14_ARB %d\n", 0x88CE);
#endif
#ifdef __GLEE_GL_SGIX_fog_offset
printf("__GLEE_GL_SGIX_fog_offset %d\n", 1);
#endif
#ifdef GL_COLOR_MATERIAL_PARAMETER
printf("GL_COLOR_MATERIAL_PARAMETER %d\n", 0x0B56);
#endif
#ifdef GL_COLOR_MATRIX_STACK_DEPTH_SGI
printf("GL_COLOR_MATRIX_STACK_DEPTH_SGI %d\n", 0x80B2);
#endif
#ifdef GL_SGIX_async_histogram
printf("GL_SGIX_async_histogram %d\n", 1);
#endif
#ifdef GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
printf("GL_IMPLEMENTATION_COLOR_READ_TYPE_OES %d\n", 0x8B9A);
#endif
#ifdef GLEE_EXT_fog_coord
#endif
#ifdef glGlobalAlphaFactorsSUN
#endif
#ifdef GL_4PASS_2_SGIS
printf("GL_4PASS_2_SGIS %d\n", 0x80A6);
#endif
#ifdef GL_SAMPLE_MASK_SGIS
printf("GL_SAMPLE_MASK_SGIS %d\n", 0x80A0);
#endif
#ifdef GLU_TESS_EDGE_FLAG_DATA
printf("GLU_TESS_EDGE_FLAG_DATA %d\n", 100110);
#endif
#ifdef GL_STENCIL_WRITEMASK
printf("GL_STENCIL_WRITEMASK %d\n", 0x0B98);
#endif
#ifdef GLEE_SGIX_texture_scale_bias
#endif
#ifdef GL_MAX_ACTIVE_LIGHTS_EXT
printf("GL_MAX_ACTIVE_LIGHTS_EXT %d\n", 0x8405);
#endif
#ifdef GL_LOGIC_OP_MODE
printf("GL_LOGIC_OP_MODE %d\n", 0x0BF0);
#endif
#ifdef GL_EMBOSS_LIGHT_NV
printf("GL_EMBOSS_LIGHT_NV %d\n", 0x855D);
#endif
#ifdef GL_LUMINANCE_ALPHA_FLOAT16_APPLE
printf("GL_LUMINANCE_ALPHA_FLOAT16_APPLE %d\n", 0x881F);
#endif
#ifdef GL_RGB
printf("GL_RGB %d\n", 0x1907);
#endif
#ifdef GL_WIDE_LINE_HINT_PGI
printf("GL_WIDE_LINE_HINT_PGI %d\n", 0x1A222);
#endif
#ifdef GL_PN_TRIANGLES_TESSELATION_LEVEL_ATIX
printf("GL_PN_TRIANGLES_TESSELATION_LEVEL_ATIX %d\n", 0x6094);
#endif
#ifdef GL_ARRAY_OBJECT_OFFSET_ATI
printf("GL_ARRAY_OBJECT_OFFSET_ATI %d\n", 0x8767);
#endif
#ifdef GL_CLAMP_TO_EDGE_SGIS
printf("GL_CLAMP_TO_EDGE_SGIS %d\n", 0x812F);
#endif
#ifdef GL_TEXTURE_BORDER_VALUES_NV
printf("GL_TEXTURE_BORDER_VALUES_NV %d\n", 0x871A);
#endif
#ifdef GLEE_NV_float_buffer
#endif
#ifdef glGetMinmaxParameterfvEXT
#endif
#ifdef GLUT_WINDOW_DOUBLEBUFFER
printf("GLUT_WINDOW_DOUBLEBUFFER %d\n", 115);
#endif
#ifdef GLEE_ATI_envmap_bumpmap
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB14_NV
printf("GL_EVAL_VERTEX_ATTRIB14_NV %d\n", 0x86D4);
#endif
#ifdef GL_SGIX_polynomial_ffd
printf("GL_SGIX_polynomial_ffd %d\n", 1);
#endif
#ifdef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
printf("GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE %d\n", 0x80D5);
#endif
#ifdef GL_MAX_EXT
printf("GL_MAX_EXT %d\n", 0x8008);
#endif
#ifdef GL_REG_5_ATI
printf("GL_REG_5_ATI %d\n", 0x8926);
#endif
#ifdef __GLEE_GL_SGIS_texture_border_clamp
printf("__GLEE_GL_SGIS_texture_border_clamp %d\n", 1);
#endif
#ifdef GL_LIGHT6
printf("GL_LIGHT6 %d\n", 0x4006);
#endif
#ifdef glFragmentLightModelfvSGIX
#endif
#ifdef GL_MAX_DRAW_BUFFERS
printf("GL_MAX_DRAW_BUFFERS %d\n", 0x8824);
#endif
#ifdef GL_STATIC_DRAW_ARB
printf("GL_STATIC_DRAW_ARB %d\n", 0x88E4);
#endif
#ifdef GL_POST_CONVOLUTION_BLUE_BIAS
printf("GL_POST_CONVOLUTION_BLUE_BIAS %d\n", 0x8022);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE
printf("GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE %d\n", 0x8A08);
#endif
#ifdef glGetMapAttribParameterfvNV
#endif
#ifdef GL_VERTEX_PROGRAM_POINT_SIZE_ARB
printf("GL_VERTEX_PROGRAM_POINT_SIZE_ARB %d\n", 0x8642);
#endif
#ifdef GLEE_EXT_pixel_transform_color_table
#endif
#ifdef GL_POST_CONVOLUTION_RED_BIAS_EXT
printf("GL_POST_CONVOLUTION_RED_BIAS_EXT %d\n", 0x8020);
#endif
#ifdef __SSE2_MATH__
printf("__SSE2_MATH__ %d\n", 1);
#endif
#ifdef GL_STENCIL_INDEX16_EXT
printf("GL_STENCIL_INDEX16_EXT %d\n", 0x8D49);
#endif
#ifdef GL_MATRIX0_NV
printf("GL_MATRIX0_NV %d\n", 0x8630);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_POINTER_APPLE
printf("GL_VERTEX_ARRAY_RANGE_POINTER_APPLE %d\n", 0x8521);
#endif
#ifdef GL_NEGATIVE_Z_EXT
printf("GL_NEGATIVE_Z_EXT %d\n", 0x87DB);
#endif
#ifdef glIsObjectBufferATI
#endif
#ifdef glVertexStream1svATI
#endif
#ifdef __GLEE_GL_MESA_resize_buffers
printf("__GLEE_GL_MESA_resize_buffers %d\n", 1);
#endif
#ifdef GL_HI_SCALE_NV
printf("GL_HI_SCALE_NV %d\n", 0x870E);
#endif
#ifdef GLEE_EXT_framebuffer_object
#endif
#ifdef GLU_NURBS_BEGIN_EXT
printf("GLU_NURBS_BEGIN_EXT %d\n", 100164);
#endif
#ifdef GL_FRAGMENT_SHADER_ARB
printf("GL_FRAGMENT_SHADER_ARB %d\n", 0x8B30);
#endif
#ifdef GL_DRAW_BUFFER6_ARB
printf("GL_DRAW_BUFFER6_ARB %d\n", 0x882B);
#endif
#ifdef GL_RGBA16F_ARB
printf("GL_RGBA16F_ARB %d\n", 0x881A);
#endif
#ifdef GL_SRC3_ALPHA
printf("GL_SRC3_ALPHA %d\n", 0x858B);
#endif
#ifdef GL_DT_SCALE_NV
printf("GL_DT_SCALE_NV %d\n", 0x8711);
#endif
#ifdef GL_VARIANT_ARRAY_STRIDE_EXT
printf("GL_VARIANT_ARRAY_STRIDE_EXT %d\n", 0x87E6);
#endif
#ifdef glVertexStream4fATI
#endif
#ifdef GL_COMBINER_INPUT_NV
printf("GL_COMBINER_INPUT_NV %d\n", 0x8542);
#endif
#ifdef GL_MAX_VERTEX_UNITS_ARB
printf("GL_MAX_VERTEX_UNITS_ARB %d\n", 0x86A4);
#endif
#ifdef GL_REG_24_ATI
printf("GL_REG_24_ATI %d\n", 0x8939);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_STRIDE_EXT
printf("GL_FOG_COORDINATE_ARRAY_STRIDE_EXT %d\n", 0x8455);
#endif
#ifdef GL_EXT_pixel_transform_color_table
printf("GL_EXT_pixel_transform_color_table %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY5_NV
printf("GL_VERTEX_ATTRIB_ARRAY5_NV %d\n", 0x8655);
#endif
#ifdef GL_PALETTE4_RGB8_OES
printf("GL_PALETTE4_RGB8_OES %d\n", 0x8B90);
#endif
#ifdef GL_SIGNED_LUMINANCE_NV
printf("GL_SIGNED_LUMINANCE_NV %d\n", 0x8701);
#endif
#ifdef GL_EXT_vertex_array
printf("GL_EXT_vertex_array %d\n", 1);
#endif
#ifdef __GLEE_GL_PGI_vertex_hints
printf("__GLEE_GL_PGI_vertex_hints %d\n", 1);
#endif
#ifdef GL_LINE_WIDTH_RANGE
printf("GL_LINE_WIDTH_RANGE %d\n", 0x0B22);
#endif
#ifdef GLU_NURBS_ERROR1
printf("GLU_NURBS_ERROR1 %d\n", 100251);
#endif
#ifdef GL_COMBINER_BIAS_NV
printf("GL_COMBINER_BIAS_NV %d\n", 0x8549);
#endif
#ifdef glColor4hvNV
#endif
#ifdef GLU_TESS_COORD_TOO_LARGE
printf("GLU_TESS_COORD_TOO_LARGE %d\n", 100155);
#endif
#ifdef GLEE_3DFX_texture_compression_FXT1
#endif
#ifdef glBindTexGenParameterEXT
#endif
#ifdef GL_VERTEX_ARRAY_TYPE
printf("GL_VERTEX_ARRAY_TYPE %d\n", 0x807B);
#endif
#ifdef GLUT_VIDEO_RESIZE_HEIGHT_DELTA
printf("GLUT_VIDEO_RESIZE_HEIGHT_DELTA %d\n", 905);
#endif
#ifdef GLEE_SGIS_texture_lod
#endif
#ifdef glVariantbvEXT
#endif
#ifdef GL_TEXCOORD1_BIT_PGI
printf("GL_TEXCOORD1_BIT_PGI %d\n", 0x10000000);
#endif
#ifdef GL_DUAL_LUMINANCE4_SGIS
printf("GL_DUAL_LUMINANCE4_SGIS %d\n", 0x8114);
#endif
#ifdef GL_SCALE_BY_FOUR_NV
printf("GL_SCALE_BY_FOUR_NV %d\n", 0x853F);
#endif
#ifdef GL_PER_STAGE_CONSTANTS_NV
printf("GL_PER_STAGE_CONSTANTS_NV %d\n", 0x8535);
#endif
#ifdef GLUT_MENU_NOT_IN_USE
printf("GLUT_MENU_NOT_IN_USE %d\n", 0);
#endif
#ifdef GL_ATTRIB_ARRAY_POINTER_NV
printf("GL_ATTRIB_ARRAY_POINTER_NV %d\n", 0x8645);
#endif
#ifdef GL_SIGNED_LUMINANCE8_NV
printf("GL_SIGNED_LUMINANCE8_NV %d\n", 0x8702);
#endif
#ifdef GL_MAX_EVAL_ORDER
printf("GL_MAX_EVAL_ORDER %d\n", 0x0D30);
#endif
#ifdef GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT
printf("GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT %d\n", 0x8DE2);
#endif
#ifdef __FLT_HAS_INFINITY__
printf("__FLT_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef glMatrixIndexusvARB
#endif
#ifdef __DBL_MIN_10_EXP__
#endif
#ifdef GL_SCISSOR_BIT
printf("GL_SCISSOR_BIT %d\n", 0x00080000);
#endif
#ifdef __GLEE_GL_ARB_color_buffer_float
printf("__GLEE_GL_ARB_color_buffer_float %d\n", 1);
#endif
#ifdef GL_PIXEL_MAG_FILTER_EXT
printf("GL_PIXEL_MAG_FILTER_EXT %d\n", 0x8331);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Y %d\n", 0x8518);
#endif
#ifdef glBeginOcclusionQueryNV
#endif
#ifdef GL_DIFFUSE
printf("GL_DIFFUSE %d\n", 0x1201);
#endif
#ifdef __SIZE_TYPE__
#endif
#ifdef GL_MAX_CONVOLUTION_WIDTH_EXT
printf("GL_MAX_CONVOLUTION_WIDTH_EXT %d\n", 0x801A);
#endif
#ifdef GL_TEXTURE_BINDING_RECTANGLE_ARB
printf("GL_TEXTURE_BINDING_RECTANGLE_ARB %d\n", 0x84F6);
#endif
#ifdef GLEE_EXT_scene_marker
#endif
#ifdef GL_QUAD_MESH_SUN
printf("GL_QUAD_MESH_SUN %d\n", 0x8614);
#endif
#ifdef GL_BLUE_MIN_CLAMP_INGR
printf("GL_BLUE_MIN_CLAMP_INGR %d\n", 0x8562);
#endif
#ifdef GL_EVAL_TRIANGULAR_2D_NV
printf("GL_EVAL_TRIANGULAR_2D_NV %d\n", 0x86C1);
#endif
#ifdef GL_LUMINANCE_ALPHA16UI_EXT
printf("GL_LUMINANCE_ALPHA16UI_EXT %d\n", 0x8D7B);
#endif
#ifdef GL_PIXEL_MAP_I_TO_I_SIZE
printf("GL_PIXEL_MAP_I_TO_I_SIZE %d\n", 0x0CB0);
#endif
#ifdef glBindProgramNV
#endif
#ifdef glFreeObjectBufferATI
#endif
#ifdef GL_STATIC_READ_ARB
printf("GL_STATIC_READ_ARB %d\n", 0x88E5);
#endif
#ifdef GL_READ_PIXEL_DATA_RANGE_LENGTH_NV
printf("GL_READ_PIXEL_DATA_RANGE_LENGTH_NV %d\n", 0x887B);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_STRIDE
printf("GL_VERTEX_ATTRIB_ARRAY_STRIDE %d\n", 0x8624);
#endif
#ifdef GL_R
printf("GL_R %d\n", 0x2002);
#endif
#ifdef GL_COLOR_TABLE_BIAS
printf("GL_COLOR_TABLE_BIAS %d\n", 0x80D7);
#endif
#ifdef GLEE_EXT_multi_draw_arrays
#endif
#ifdef GL_TEXTURE_INDEX_SIZE_EXT
printf("GL_TEXTURE_INDEX_SIZE_EXT %d\n", 0x80ED);
#endif
#ifdef GL_STENCIL_TAG_BITS_EXT
printf("GL_STENCIL_TAG_BITS_EXT %d\n", 0x88F2);
#endif
#ifdef __GNUC__
printf("__GNUC__ %d\n", 4);
#endif
#ifdef GL_DOT_PRODUCT_TEXTURE_3D_NV
printf("GL_DOT_PRODUCT_TEXTURE_3D_NV %d\n", 0x86EF);
#endif
#ifdef GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB
printf("GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB %d\n", 0x862E);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB %d\n", 0x880E);
#endif
#ifdef glVariantArrayObjectATI
#endif
#ifdef GL_IMAGE_MIN_FILTER_HP
printf("GL_IMAGE_MIN_FILTER_HP %d\n", 0x815D);
#endif
#ifdef GL_RGB16
printf("GL_RGB16 %d\n", 0x8054);
#endif
#ifdef GL_RGBA16_SIGNED_SGIX
printf("GL_RGBA16_SIGNED_SGIX %d\n", 0x85E7);
#endif
#ifdef GL_MAX_PROGRAM_TEMPORARIES_ARB
printf("GL_MAX_PROGRAM_TEMPORARIES_ARB %d\n", 0x88A5);
#endif
#ifdef GL_ONE_MINUS_DST_ALPHA
printf("GL_ONE_MINUS_DST_ALPHA %d\n", 0x0305);
#endif
#ifdef GL_BIAS_BIT_ATI
printf("GL_BIAS_BIT_ATI %d\n", 0x00000008);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB
printf("GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889A);
#endif
#ifdef GL_MAX_ELEMENTS_INDICES_EXT
printf("GL_MAX_ELEMENTS_INDICES_EXT %d\n", 0x80E9);
#endif
#ifdef GL_DYNAMIC_DRAW_ARB
printf("GL_DYNAMIC_DRAW_ARB %d\n", 0x88E8);
#endif
#ifdef __GLEE_GL_EXT_vertex_array
printf("__GLEE_GL_EXT_vertex_array %d\n", 1);
#endif
#ifdef GL_CLIP_PLANE4
printf("GL_CLIP_PLANE4 %d\n", 0x3004);
#endif
#ifdef GL_COLOR_TABLE_SGI
printf("GL_COLOR_TABLE_SGI %d\n", 0x80D0);
#endif
#ifdef GL_PIXEL_TILE_HEIGHT_SGIX
printf("GL_PIXEL_TILE_HEIGHT_SGIX %d\n", 0x8141);
#endif
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_EXT
printf("GL_POINT_FADE_THRESHOLD_SIZE_EXT %d\n", 0x8128);
#endif
#ifdef GL_TEXTURE29_ARB
printf("GL_TEXTURE29_ARB %d\n", 0x84DD);
#endif
#ifdef GL_YCRCBA_SGIX
printf("GL_YCRCBA_SGIX %d\n", 0x8319);
#endif
#ifdef GLUT_CURSOR_HELP
printf("GLUT_CURSOR_HELP %d\n", 4);
#endif
#ifdef GL_STENCIL_VALUE_MASK
printf("GL_STENCIL_VALUE_MASK %d\n", 0x0B93);
#endif
#ifdef GL_OBJECT_LINK_STATUS_ARB
printf("GL_OBJECT_LINK_STATUS_ARB %d\n", 0x8B82);
#endif
#ifdef GLU_EXTENSIONS
printf("GLU_EXTENSIONS %d\n", 100801);
#endif
#ifdef GL_MAP2_TEXTURE_COORD_4
printf("GL_MAP2_TEXTURE_COORD_4 %d\n", 0x0DB6);
#endif
#ifdef GL_EXT_index_array_formats
printf("GL_EXT_index_array_formats %d\n", 1);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB13_4_NV
printf("GL_MAP1_VERTEX_ATTRIB13_4_NV %d\n", 0x866D);
#endif
#ifdef __LDBL_MAX_EXP__
printf("__LDBL_MAX_EXP__ %d\n", 16384);
#endif
#ifdef GL_T
printf("GL_T %d\n", 0x2001);
#endif
#ifdef GL_EXT_convolution
printf("GL_EXT_convolution %d\n", 1);
#endif
#ifdef GL_TEXTURE10_ARB
printf("GL_TEXTURE10_ARB %d\n", 0x84CA);
#endif
#ifdef GL_BOOL_VEC3
printf("GL_BOOL_VEC3 %d\n", 0x8B58);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD6_EXT
printf("GL_OUTPUT_TEXTURE_COORD6_EXT %d\n", 0x87A3);
#endif
#ifdef GLEE_EXT_framebuffer_multisample
#endif
#ifdef GL_AUX_BUFFERS
printf("GL_AUX_BUFFERS %d\n", 0x0C00);
#endif
#ifdef GLEE_EXT_framebuffer_blit
#endif
#ifdef GL_COLOR_INDEX12_EXT
printf("GL_COLOR_INDEX12_EXT %d\n", 0x80E6);
#endif
#ifdef GL_PIXEL_MAP_B_TO_B
printf("GL_PIXEL_MAP_B_TO_B %d\n", 0x0C78);
#endif
#ifdef GL_DRAW_BUFFER7
printf("GL_DRAW_BUFFER7 %d\n", 0x882C);
#endif
#ifdef GL_MIRROR_CLAMP_TO_EDGE_ATI
printf("GL_MIRROR_CLAMP_TO_EDGE_ATI %d\n", 0x8743);
#endif
#ifdef glPixelTransformParameterfEXT
#endif
#ifdef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
printf("GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT %d\n", 0x8C4D);
#endif
#ifdef GL_MAX_ACTIVE_LIGHTS_SGIX
printf("GL_MAX_ACTIVE_LIGHTS_SGIX %d\n", 0x8405);
#endif
#ifdef glCopyColorSubTableEXT
#endif
#ifdef GL_IMAGE_ROTATE_ORIGIN_Y_HP
printf("GL_IMAGE_ROTATE_ORIGIN_Y_HP %d\n", 0x815B);
#endif
#ifdef GL_OES_byte_coordinates
printf("GL_OES_byte_coordinates %d\n", 1);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB %d\n", 0x880F);
#endif
#ifdef GL_PROJECTION_STACK_DEPTH
printf("GL_PROJECTION_STACK_DEPTH %d\n", 0x0BA4);
#endif
#ifdef GLUT_GAME_MODE_ACTIVE
printf("GLUT_GAME_MODE_ACTIVE %d\n", 0);
#endif
#ifdef GL_LINEAR_SHARPEN_ALPHA_SGIS
printf("GL_LINEAR_SHARPEN_ALPHA_SGIS %d\n", 0x80AE);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB6_4_NV
printf("GL_MAP2_VERTEX_ATTRIB6_4_NV %d\n", 0x8676);
#endif
#ifdef GL_ARB_shadow_ambient
printf("GL_ARB_shadow_ambient %d\n", 1);
#endif
#ifdef glVertexAttrib1dNV
#endif
#ifdef __DBL_MANT_DIG__
printf("__DBL_MANT_DIG__ %d\n", 53);
#endif
#ifdef GL_SGIX_depth_texture
printf("GL_SGIX_depth_texture %d\n", 1);
#endif
#ifdef glMultiTexCoord3hNV
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY0_NV
printf("GL_VERTEX_ATTRIB_ARRAY0_NV %d\n", 0x8650);
#endif
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_SGIS
printf("GL_POINT_FADE_THRESHOLD_SIZE_SGIS %d\n", 0x8128);
#endif
#ifdef GL_MODELVIEW9_ARB
printf("GL_MODELVIEW9_ARB %d\n", 0x8729);
#endif
#ifdef GL_UNSIGNED_SHORT_4_4_4_4_REV
printf("GL_UNSIGNED_SHORT_4_4_4_4_REV %d\n", 0x8365);
#endif
#ifdef GL_ALWAYS_SOFT_HINT_PGI
printf("GL_ALWAYS_SOFT_HINT_PGI %d\n", 0x1A20D);
#endif
#ifdef GL_CON_24_ATI
printf("GL_CON_24_ATI %d\n", 0x8959);
#endif
#ifdef GL_OPERAND2_ALPHA_ARB
printf("GL_OPERAND2_ALPHA_ARB %d\n", 0x859A);
#endif
#ifdef GLEE_EXT_misc_attribute
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB15_4_NV
printf("GL_MAP2_VERTEX_ATTRIB15_4_NV %d\n", 0x867F);
#endif
#ifdef GL_LINE_STRIP
printf("GL_LINE_STRIP %d\n", 0x0003);
#endif
#ifdef GL_IMAGE_SCALE_X_HP
printf("GL_IMAGE_SCALE_X_HP %d\n", 0x8155);
#endif
#ifdef GL_SGIS_multisample
printf("GL_SGIS_multisample %d\n", 1);
#endif
#ifdef GLEE_SGIX_texture_multi_buffer
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING
printf("GL_ELEMENT_ARRAY_BUFFER_BINDING %d\n", 0x8895);
#endif
#ifdef GL_ARB_texture_env_dot3
printf("GL_ARB_texture_env_dot3 %d\n", 1);
#endif
#ifdef GLEE_EXT_pixel_transform
#endif
#ifdef GL_EDGE_FLAG_ARRAY
printf("GL_EDGE_FLAG_ARRAY %d\n", 0x8079);
#endif
#ifdef GL_COLOR_TABLE_LUMINANCE_SIZE_SGI
printf("GL_COLOR_TABLE_LUMINANCE_SIZE_SGI %d\n", 0x80DE);
#endif
#ifdef GL_PRIMITIVE_RESTART_INDEX_NV
printf("GL_PRIMITIVE_RESTART_INDEX_NV %d\n", 0x8559);
#endif
#ifdef GL_MATRIX8_ARB
printf("GL_MATRIX8_ARB %d\n", 0x88C8);
#endif
#ifdef glTexCoordPointervINTEL
#endif
#ifdef GLU_TESS_ERROR6
printf("GLU_TESS_ERROR6 %d\n", 100156);
#endif
#ifdef GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI
printf("GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI %d\n", 0x80B9);
#endif
#ifdef GL_LIST_PRIORITY_SGIX
printf("GL_LIST_PRIORITY_SGIX %d\n", 0x8182);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT
printf("GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT %d\n", 0x845C);
#endif
#ifdef GL_POINT_SIZE_MAX_EXT
printf("GL_POINT_SIZE_MAX_EXT %d\n", 0x8127);
#endif
#ifdef GL_CURRENT_MATRIX_STACK_DEPTH_NV
printf("GL_CURRENT_MATRIX_STACK_DEPTH_NV %d\n", 0x8640);
#endif
#ifdef GLU_SAMPLING_METHOD
printf("GLU_SAMPLING_METHOD %d\n", 100205);
#endif
#ifdef glGetMinmaxParameterivEXT
#endif
#ifdef GL_EXT_texture_mirror_clamp
printf("GL_EXT_texture_mirror_clamp %d\n", 1);
#endif
#ifdef GL_REFERENCE_PLANE_SGIX
printf("GL_REFERENCE_PLANE_SGIX %d\n", 0x817D);
#endif
#ifdef GL_COLOR_ATTACHMENT6_EXT
printf("GL_COLOR_ATTACHMENT6_EXT %d\n", 0x8CE6);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY7_NV
printf("GL_VERTEX_ATTRIB_ARRAY7_NV %d\n", 0x8657);
#endif
#ifdef GL_CONVOLUTION_2D_EXT
printf("GL_CONVOLUTION_2D_EXT %d\n", 0x8011);
#endif
#ifdef GL_T2F_IUI_N3F_V2F_EXT
printf("GL_T2F_IUI_N3F_V2F_EXT %d\n", 0x81B3);
#endif
#ifdef glVertexStream1iATI
#endif
#ifdef GLEE_EXT_compiled_vertex_array
#endif
#ifdef glMapParameterivNV
#endif
#ifdef GL_VERTEX_PROGRAM_ARB
printf("GL_VERTEX_PROGRAM_ARB %d\n", 0x8620);
#endif
#ifdef GL_UNIFORM_BUFFER_BINDING_EXT
printf("GL_UNIFORM_BUFFER_BINDING_EXT %d\n", 0x8DEF);
#endif
#ifdef GL_OML_interlace
printf("GL_OML_interlace %d\n", 1);
#endif
#ifdef GL_HISTOGRAM_WIDTH
printf("GL_HISTOGRAM_WIDTH %d\n", 0x8026);
#endif
#ifdef glMatrixIndexubvARB
#endif
#ifdef GL_GLEXT_VERSION
printf("GL_GLEXT_VERSION %d\n", 7);
#endif
#ifdef glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
#endif
#ifdef GLEE_S3_s3tc
#endif
#ifdef GL_AVERAGE_HP
printf("GL_AVERAGE_HP %d\n", 0x8160);
#endif
#ifdef GL_STENCIL_INDEX
printf("GL_STENCIL_INDEX %d\n", 0x1901);
#endif
#ifdef GL_STACK_OVERFLOW
printf("GL_STACK_OVERFLOW %d\n", 0x0503);
#endif
#ifdef GL_MATRIX16_ARB
printf("GL_MATRIX16_ARB %d\n", 0x88D0);
#endif
#ifdef GLEE_SUN_mesh_array
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_APPLE
printf("GL_VERTEX_ARRAY_RANGE_APPLE %d\n", 0x851D);
#endif
#ifdef GL_RGBA_FLOAT16_ATI
printf("GL_RGBA_FLOAT16_ATI %d\n", 0x881A);
#endif
#ifdef GLEE_ARB_fragment_program_shadow
#endif
#ifdef GLEE_APPLE_ycbcr_422
#endif
#ifdef GL_INDEX_CLEAR_VALUE
printf("GL_INDEX_CLEAR_VALUE %d\n", 0x0C20);
#endif
#ifdef i386
printf("i386 %d\n", 1);
#endif
#ifdef GL_LUMINANCE_ALPHA8I_EXT
printf("GL_LUMINANCE_ALPHA8I_EXT %d\n", 0x8D93);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD9_EXT
printf("GL_OUTPUT_TEXTURE_COORD9_EXT %d\n", 0x87A6);
#endif
#ifdef GL_BUFFER_USAGE
printf("GL_BUFFER_USAGE %d\n", 0x8765);
#endif
#ifdef GL_FRAMEZOOM_FACTOR_SGIX
printf("GL_FRAMEZOOM_FACTOR_SGIX %d\n", 0x818C);
#endif
#ifdef glTexCoord2fVertex3fSUN
#endif
#ifdef GLEE_EXT_index_func
#endif
#ifdef glReplacementCodeuiTexCoord2fVertex3fSUN
#endif
#ifdef GL_UNPACK_SKIP_IMAGES_EXT
printf("GL_UNPACK_SKIP_IMAGES_EXT %d\n", 0x806D);
#endif
#ifdef GL_DEPTH_ATTACHMENT_EXT
printf("GL_DEPTH_ATTACHMENT_EXT %d\n", 0x8D00);
#endif
#ifdef GL_RENDERBUFFER_SAMPLES_EXT
printf("GL_RENDERBUFFER_SAMPLES_EXT %d\n", 0x8CAB);
#endif
#ifdef GL_MATRIX_EXT
printf("GL_MATRIX_EXT %d\n", 0x87C0);
#endif
#ifdef GL_POST_COLOR_MATRIX_RED_SCALE
printf("GL_POST_COLOR_MATRIX_RED_SCALE %d\n", 0x80B4);
#endif
#ifdef GL_PRIMARY_COLOR_NV
printf("GL_PRIMARY_COLOR_NV %d\n", 0x852C);
#endif
#ifdef GL_OP_SET_GE_EXT
printf("GL_OP_SET_GE_EXT %d\n", 0x878C);
#endif
#ifdef GL_OBJECT_SHADER_SOURCE_LENGTH_ARB
printf("GL_OBJECT_SHADER_SOURCE_LENGTH_ARB %d\n", 0x8B88);
#endif
#ifdef glTexCoord2fColor4ubVertex3fSUN
#endif
#ifdef __SHRT_MAX__
printf("__SHRT_MAX__ %d\n", 32767);
#endif
#ifdef GLEE_EXT_fragment_lighting
#endif
#ifdef GL_MIRRORED_REPEAT_IBM
printf("GL_MIRRORED_REPEAT_IBM %d\n", 0x8370);
#endif
#ifdef GLEE_NV_vertex_program3
#endif
#ifdef GL_NORMAL_ARRAY_POINTER
printf("GL_NORMAL_ARRAY_POINTER %d\n", 0x808F);
#endif
#ifdef GLUT_VIDEO_RESIZE_POSSIBLE
printf("GLUT_VIDEO_RESIZE_POSSIBLE %d\n", 900);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_LIST_IBM
printf("GL_EDGE_FLAG_ARRAY_LIST_IBM %d\n", 103075);
#endif
#ifdef GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV
printf("GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV %d\n", 0x88F4);
#endif
#ifdef GL_GEOMETRY_DEFORMATION_SGIX
printf("GL_GEOMETRY_DEFORMATION_SGIX %d\n", 0x8194);
#endif
#ifdef GLEE_SGIX_fog_scale
#endif
#ifdef GL_COLOR_TABLE_BLUE_SIZE_SGI
printf("GL_COLOR_TABLE_BLUE_SIZE_SGI %d\n", 0x80DC);
#endif
#ifdef GL_FULL_STIPPLE_HINT_PGI
printf("GL_FULL_STIPPLE_HINT_PGI %d\n", 0x1A219);
#endif
#ifdef GL_TEXTURE0
printf("GL_TEXTURE0 %d\n", 0x84C0);
#endif
#ifdef GL_REG_7_ATI
printf("GL_REG_7_ATI %d\n", 0x8928);
#endif
#ifdef glTexImage3DEXT
#endif
#ifdef GL_MODELVIEW0_STACK_DEPTH_EXT
#endif
#ifdef GLEE_VERSION_1_5
#endif
#ifdef GL_RGBA4
printf("GL_RGBA4 %d\n", 0x8056);
#endif
#ifdef GL_MAX_4D_TEXTURE_SIZE_SGIS
printf("GL_MAX_4D_TEXTURE_SIZE_SGIS %d\n", 0x8138);
#endif
#ifdef GL_GENERATE_MIPMAP
printf("GL_GENERATE_MIPMAP %d\n", 0x8191);
#endif
#ifdef GLEE_EXT_secondary_color
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB %d\n", 0x8517);
#endif
#ifdef GL_RED_INTEGER_EXT
printf("GL_RED_INTEGER_EXT %d\n", 0x8D94);
#endif
#ifdef GL_DEPTH_STENCIL_TO_RGBA_NV
printf("GL_DEPTH_STENCIL_TO_RGBA_NV %d\n", 0x886E);
#endif
#ifdef GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI
printf("GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI %d\n", 0x80D2);
#endif
#ifdef GL_ATI_separate_stencil
printf("GL_ATI_separate_stencil %d\n", 1);
#endif
#ifdef GL_OR_REVERSE
printf("GL_OR_REVERSE %d\n", 0x150B);
#endif
#ifdef GL_EXT_geometry_shader4
printf("GL_EXT_geometry_shader4 %d\n", 1);
#endif
#ifdef glPointParameterfvSGIS
#endif
#ifdef GLEE_EXT_draw_range_elements
#endif
#ifdef GL_OBJECT_COMPILE_STATUS_ARB
printf("GL_OBJECT_COMPILE_STATUS_ARB %d\n", 0x8B81);
#endif
#ifdef GL_LUMINANCE6_ALPHA2
printf("GL_LUMINANCE6_ALPHA2 %d\n", 0x8044);
#endif
#ifdef GL_DEPTH_CLAMP_NV
printf("GL_DEPTH_CLAMP_NV %d\n", 0x864F);
#endif
#ifdef GL_SGIX_fragment_lighting
printf("GL_SGIX_fragment_lighting %d\n", 1);
#endif
#ifdef GLUT_VIDEO_RESIZE_X
printf("GLUT_VIDEO_RESIZE_X %d\n", 906);
#endif
#ifdef glBeginVertexShaderEXT
#endif
#ifdef GL_VARIANT_VALUE_EXT
printf("GL_VARIANT_VALUE_EXT %d\n", 0x87E4);
#endif
#ifdef GL_CONSTANT_ARB
printf("GL_CONSTANT_ARB %d\n", 0x8576);
#endif
#ifdef GL_FOG_COORD_ARRAY_STRIDE
printf("GL_FOG_COORD_ARRAY_STRIDE %d\n", 0x8455);
#endif
#ifdef GL_SAMPLER_2D_ARRAY_SHADOW_EXT
printf("GL_SAMPLER_2D_ARRAY_SHADOW_EXT %d\n", 0x8DC4);
#endif
#ifdef GL_RGB5_A1
printf("GL_RGB5_A1 %d\n", 0x8057);
#endif
#ifdef GL_PGI_misc_hints
printf("GL_PGI_misc_hints %d\n", 1);
#endif
#ifdef GL_VIEWPORT_BIT
printf("GL_VIEWPORT_BIT %d\n", 0x00000800);
#endif
#ifdef GL_COEFF
printf("GL_COEFF %d\n", 0x0A00);
#endif
#ifdef glMatrixIndexuivARB
#endif
#ifdef GL_CLIENT_ACTIVE_TEXTURE
printf("GL_CLIENT_ACTIVE_TEXTURE %d\n", 0x84E1);
#endif
#ifdef __GLEE_GL_3DFX_multisample
printf("__GLEE_GL_3DFX_multisample %d\n", 1);
#endif
#ifdef GL_SRGB8
printf("GL_SRGB8 %d\n", 0x8C41);
#endif
#ifdef GL_EXT_scene_marker
printf("GL_EXT_scene_marker %d\n", 1);
#endif
#ifdef GL_OP_ADD_EXT
printf("GL_OP_ADD_EXT %d\n", 0x8787);
#endif
#ifdef __FLT_MAX_EXP__
printf("__FLT_MAX_EXP__ %d\n", 128);
#endif
#ifdef GL_VERTEX_STREAM0_ATI
printf("GL_VERTEX_STREAM0_ATI %d\n", 0x876C);
#endif
#ifdef GL_LUMINANCE12_ALPHA12
printf("GL_LUMINANCE12_ALPHA12 %d\n", 0x8047);
#endif
#ifdef GL_MODELVIEW10_ARB
printf("GL_MODELVIEW10_ARB %d\n", 0x872A);
#endif
#ifdef GL_FRAGMENT_COLOR_EXT
printf("GL_FRAGMENT_COLOR_EXT %d\n", 0x834C);
#endif
#ifdef GL_COLOR_ATTACHMENT7_EXT
printf("GL_COLOR_ATTACHMENT7_EXT %d\n", 0x8CE7);
#endif
#ifdef GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN
printf("GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN %d\n", 0x85C1);
#endif
#ifdef GL_NORMAL_ARRAY
printf("GL_NORMAL_ARRAY %d\n", 0x8075);
#endif
#ifdef GLEE_SGIX_clipmap
#endif
#ifdef GL_CURRENT_RASTER_POSITION
printf("GL_CURRENT_RASTER_POSITION %d\n", 0x0B07);
#endif
#ifdef GL_BACK_NORMALS_HINT_PGI
printf("GL_BACK_NORMALS_HINT_PGI %d\n", 0x1A223);
#endif
#ifdef GL_TEXTURE3_ARB
printf("GL_TEXTURE3_ARB %d\n", 0x84C3);
#endif
#ifdef GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL
printf("GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL %d\n", 0x83F6);
#endif
#ifdef GLEE_SGIX_async
#endif
#ifdef GLEE_EXT_422_pixels
#endif
#ifdef glTexCoord2fNormal3fVertex3fvSUN
#endif
#ifdef GL_MIN_LUMINANCE_SGIS
printf("GL_MIN_LUMINANCE_SGIS %d\n", 0x85F8);
#endif
#ifdef GL_FRAGMENT_LIGHT0_EXT
printf("GL_FRAGMENT_LIGHT0_EXT %d\n", 0x840C);
#endif
#ifdef GL_ALPHA_TEST
printf("GL_ALPHA_TEST %d\n", 0x0BC0);
#endif
#ifdef GL_SGIS_texture_border_clamp
printf("GL_SGIS_texture_border_clamp %d\n", 1);
#endif
#ifdef GL_OES_compressed_paletted_texture
printf("GL_OES_compressed_paletted_texture %d\n", 1);
#endif
#ifdef GLEE_EXT_texture_env
#endif
#ifdef glWindowPos4dMESA
#endif
#ifdef GL_CLIP_FAR_HINT_PGI
printf("GL_CLIP_FAR_HINT_PGI %d\n", 0x1A221);
#endif
#ifdef __DBL_HAS_QUIET_NAN__
printf("__DBL_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef GL_TEXTURE_LUMINANCE_SIZE_EXT
printf("GL_TEXTURE_LUMINANCE_SIZE_EXT %d\n", 0x8060);
#endif
#ifdef GL_SGIS_texture4D
printf("GL_SGIS_texture4D %d\n", 1);
#endif
#ifdef GL_TEXTURE15_ARB
printf("GL_TEXTURE15_ARB %d\n", 0x84CF);
#endif
#ifdef GL_SAMPLE_BUFFERS_ARB
printf("GL_SAMPLE_BUFFERS_ARB %d\n", 0x80A8);
#endif
#ifdef GLEE_ATI_text_fragment_shader
#endif
#ifdef GL_SOURCE6_ALPHA_ARB
printf("GL_SOURCE6_ALPHA_ARB %d\n", 0x858E);
#endif
#ifdef GL_DEPTH_STENCIL_TO_BGRA_NV
printf("GL_DEPTH_STENCIL_TO_BGRA_NV %d\n", 0x886F);
#endif
#ifdef GL_VERSION_1_2
printf("GL_VERSION_1_2 %d\n", 1);
#endif
#ifdef GL_QUAD_ALPHA8_SGIS
printf("GL_QUAD_ALPHA8_SGIS %d\n", 0x811F);
#endif
#ifdef GL_FLOAT_R_NV
printf("GL_FLOAT_R_NV %d\n", 0x8880);
#endif
#ifdef GLU_FILL
printf("GLU_FILL %d\n", 100012);
#endif
#ifdef GLEE_APPLE_vertex_array_object
#endif
#ifdef GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT
printf("GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT %d\n", 0x8C76);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_STRIDE
printf("GL_SECONDARY_COLOR_ARRAY_STRIDE %d\n", 0x845C);
#endif
#ifdef GL_MATRIX17_ARB
printf("GL_MATRIX17_ARB %d\n", 0x88D1);
#endif
#ifdef GL_EXT_packed_depth_stencil
printf("GL_EXT_packed_depth_stencil %d\n", 1);
#endif
#ifdef GL_STENCIL_TEST
printf("GL_STENCIL_TEST %d\n", 0x0B90);
#endif
#ifdef GL_EXT_multisample
printf("GL_EXT_multisample %d\n", 1);
#endif
#ifdef GL_STORAGE_CACHED_APPLE
printf("GL_STORAGE_CACHED_APPLE %d\n", 0x85BE);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_ATI
printf("GL_PN_TRIANGLES_NORMAL_MODE_ATI %d\n", 0x6093);
#endif
#ifdef GL_PURGEABLE_APPLE
printf("GL_PURGEABLE_APPLE %d\n", 0x8A1D);
#endif
#ifdef GL_REG_19_ATI
printf("GL_REG_19_ATI %d\n", 0x8934);
#endif
#ifdef GL_EXT_draw_range_elements
printf("GL_EXT_draw_range_elements %d\n", 1);
#endif
#ifdef GLU_NURBS_ERROR28
printf("GLU_NURBS_ERROR28 %d\n", 100278);
#endif
#ifdef GLU_NURBS_ERROR15
printf("GLU_NURBS_ERROR15 %d\n", 100265);
#endif
#ifdef glColor3hvNV
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB
printf("GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889C);
#endif
#ifdef GLEE_EXT_stencil_clear_tag
#endif
#ifdef GLU_NURBS_ERROR18
printf("GLU_NURBS_ERROR18 %d\n", 100268);
#endif
#ifdef GL_FEEDBACK_BUFFER_TYPE
printf("GL_FEEDBACK_BUFFER_TYPE %d\n", 0x0DF2);
#endif
#ifdef GL_SAMPLE_COVERAGE_INVERT_ARB
printf("GL_SAMPLE_COVERAGE_INVERT_ARB %d\n", 0x80AB);
#endif
#ifdef GL_SRC_COLOR
printf("GL_SRC_COLOR %d\n", 0x0300);
#endif
#ifdef GL_ARB_half_float_pixel
printf("GL_ARB_half_float_pixel %d\n", 1);
#endif
#ifdef GL_RENDERBUFFER_WIDTH_EXT
printf("GL_RENDERBUFFER_WIDTH_EXT %d\n", 0x8D42);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD21_EXT
printf("GL_OUTPUT_TEXTURE_COORD21_EXT %d\n", 0x87B2);
#endif
#ifdef GLUT_BITMAP_HELVETICA_10
#endif
#ifdef GL_LIGHT3
printf("GL_LIGHT3 %d\n", 0x4003);
#endif
#ifdef GL_MAX_PROGRAM_LOOP_COUNT_NV
printf("GL_MAX_PROGRAM_LOOP_COUNT_NV %d\n", 0x88F8);
#endif
#ifdef glWindowPos4fMESA
#endif
#ifdef GL_FRONT_FACE
printf("GL_FRONT_FACE %d\n", 0x0B46);
#endif
#ifdef GL_PROGRAM_ALU_INSTRUCTIONS_ARB
printf("GL_PROGRAM_ALU_INSTRUCTIONS_ARB %d\n", 0x8805);
#endif
#ifdef GL_TEXTURE_ALPHA_SIZE_EXT
printf("GL_TEXTURE_ALPHA_SIZE_EXT %d\n", 0x805F);
#endif
#ifdef GL_NV_multisample_filter_hint
printf("GL_NV_multisample_filter_hint %d\n", 1);
#endif
#ifdef GLEE_EXT_blend_subtract
#endif
#ifdef __GLEE_GL_INGR_color_clamp
printf("__GLEE_GL_INGR_color_clamp %d\n", 1);
#endif
#ifdef GL_SHADER_OPERATION_NV
printf("GL_SHADER_OPERATION_NV %d\n", 0x86DF);
#endif
#ifdef GL_NATIVE_GRAPHICS_HANDLE_PGI
printf("GL_NATIVE_GRAPHICS_HANDLE_PGI %d\n", 0x1A202);
#endif
#ifdef GL_ONE_MINUS_CONSTANT_COLOR
printf("GL_ONE_MINUS_CONSTANT_COLOR %d\n", 0x8002);
#endif
#ifdef GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
printf("GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT %d\n", 0x8337);
#endif
#ifdef GL_COMBINE_ALPHA
printf("GL_COMBINE_ALPHA %d\n", 0x8572);
#endif
#ifdef GL_POINT_SPRITE_NV
printf("GL_POINT_SPRITE_NV %d\n", 0x8861);
#endif
#ifdef glVertexStream1fvATI
#endif
#ifdef GL_POST_CONVOLUTION_GREEN_SCALE
printf("GL_POST_CONVOLUTION_GREEN_SCALE %d\n", 0x801D);
#endif
#ifdef GL_COLOR_ATTACHMENT11_EXT
printf("GL_COLOR_ATTACHMENT11_EXT %d\n", 0x8CEB);
#endif
#ifdef GL_ACTIVE_UNIFORM_MAX_LENGTH
printf("GL_ACTIVE_UNIFORM_MAX_LENGTH %d\n", 0x8B87);
#endif
#ifdef GL_TEXTURE12_ARB
printf("GL_TEXTURE12_ARB %d\n", 0x84CC);
#endif
#ifdef GL_PROGRAM_ERROR_STRING_NV
printf("GL_PROGRAM_ERROR_STRING_NV %d\n", 0x8874);
#endif
#ifdef GL_QUAD_INTENSITY4_SGIS
printf("GL_QUAD_INTENSITY4_SGIS %d\n", 0x8122);
#endif
#ifdef GL_INTENSITY16UI_EXT
printf("GL_INTENSITY16UI_EXT %d\n", 0x8D79);
#endif
#ifdef GLEE_EXT_clip_volume_hint
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB6_NV
printf("GL_EVAL_VERTEX_ATTRIB6_NV %d\n", 0x86CC);
#endif
#ifdef GL_CON_29_ATI
printf("GL_CON_29_ATI %d\n", 0x895E);
#endif
#ifdef GL_PIXEL_COUNTER_BITS_NV
printf("GL_PIXEL_COUNTER_BITS_NV %d\n", 0x8864);
#endif
#ifdef GLUT_CURSOR_RIGHT_SIDE
printf("GLUT_CURSOR_RIGHT_SIDE %d\n", 15);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY6_NV
printf("GL_VERTEX_ATTRIB_ARRAY6_NV %d\n", 0x8656);
#endif
#ifdef __GLEE_GL_SUN_triangle_list
printf("__GLEE_GL_SUN_triangle_list %d\n", 1);
#endif
#ifdef glProgramParameter4fvNV
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB10_NV
printf("GL_EVAL_VERTEX_ATTRIB10_NV %d\n", 0x86D0);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE
printf("GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE %d\n", 0x8A02);
#endif
#ifdef __GLEE_GL_NV_copy_depth_to_color
printf("__GLEE_GL_NV_copy_depth_to_color %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_pixel_transform
printf("__GLEE_GL_EXT_pixel_transform %d\n", 1);
#endif
#ifdef glTexCoord1hvNV
#endif
#ifdef GL_DEPTH_COMPONENT
printf("GL_DEPTH_COMPONENT %d\n", 0x1902);
#endif
#ifdef GLEE_ARB_texture_env_add
#endif
#ifdef GL_REFLECTION_MAP_EXT
printf("GL_REFLECTION_MAP_EXT %d\n", 0x8512);
#endif
#ifdef GL_POLYGON_SMOOTH_HINT
printf("GL_POLYGON_SMOOTH_HINT %d\n", 0x0C53);
#endif
#ifdef GL_PROGRAM_ERROR_STRING_ARB
printf("GL_PROGRAM_ERROR_STRING_ARB %d\n", 0x8874);
#endif
#ifdef glSpriteParameteriSGIX
#endif
#ifdef GLEE_ARB_texture_env_crossbar
#endif
#ifdef GL_INDEX_WRITEMASK
printf("GL_INDEX_WRITEMASK %d\n", 0x0C21);
#endif
#ifdef GL_EXT_copy_texture
printf("GL_EXT_copy_texture %d\n", 1);
#endif
#ifdef GL_RGBA32I_EXT
printf("GL_RGBA32I_EXT %d\n", 0x8D82);
#endif
#ifdef GL_LUMINANCE16_ALPHA16_SIGNED_SGIX
printf("GL_LUMINANCE16_ALPHA16_SIGNED_SGIX %d\n", 0x85EB);
#endif
#ifdef GLUT_INIT_WINDOW_X
printf("GLUT_INIT_WINDOW_X %d\n", 500);
#endif
#ifdef GL_UNPACK_ROW_LENGTH
printf("GL_UNPACK_ROW_LENGTH %d\n", 0x0CF2);
#endif
#ifdef GL_VARIABLE_C_NV
printf("GL_VARIABLE_C_NV %d\n", 0x8525);
#endif
#ifdef GL_SIGNED_RGBA8_NV
printf("GL_SIGNED_RGBA8_NV %d\n", 0x86FC);
#endif
#ifdef glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
#endif
#ifdef GL_LINEAR_DETAIL_SGIS
printf("GL_LINEAR_DETAIL_SGIS %d\n", 0x8097);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM
printf("GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM %d\n", 103085);
#endif
#ifdef GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
printf("GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB %d\n", 0x88B2);
#endif
#ifdef GLEE_EXT_texture_object
#endif
#ifdef GL_STENCIL_FUNC
printf("GL_STENCIL_FUNC %d\n", 0x0B92);
#endif
#ifdef glVertexAttrib3dvNV
#endif
#ifdef GL_PROGRAM_STRING_NV
printf("GL_PROGRAM_STRING_NV %d\n", 0x8628);
#endif
#ifdef GL_OBJECT_INFO_LOG_LENGTH_ARB
printf("GL_OBJECT_INFO_LOG_LENGTH_ARB %d\n", 0x8B84);
#endif
#ifdef GL_NICEST
printf("GL_NICEST %d\n", 0x1102);
#endif
#ifdef GL_MODULATE_ADD_ATI
printf("GL_MODULATE_ADD_ATI %d\n", 0x8744);
#endif
#ifdef GL_COLOR_TABLE_RED_SIZE
printf("GL_COLOR_TABLE_RED_SIZE %d\n", 0x80DA);
#endif
#ifdef GL_PIXEL_GROUP_COLOR_SGIS
printf("GL_PIXEL_GROUP_COLOR_SGIS %d\n", 0x8356);
#endif
#ifdef GL_NEAREST_MIPMAP_LINEAR
printf("GL_NEAREST_MIPMAP_LINEAR %d\n", 0x2702);
#endif
#ifdef glInsertComponentEXT
#endif
#ifdef GL_SUBTRACT_ARB
printf("GL_SUBTRACT_ARB %d\n", 0x84E7);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD5_EXT
printf("GL_OUTPUT_TEXTURE_COORD5_EXT %d\n", 0x87A2);
#endif
#ifdef GL_RGBA2_EXT
printf("GL_RGBA2_EXT %d\n", 0x8055);
#endif
#ifdef glListParameterfvSGIX
#endif
#ifdef GL_FLOAT_VEC2_ARB
printf("GL_FLOAT_VEC2_ARB %d\n", 0x8B50);
#endif
#ifdef GLU_ERROR
printf("GLU_ERROR %d\n", 100103);
#endif
#ifdef glFlushPixelDataRangeNV
#endif
#ifdef GL_SRGB_EXT
printf("GL_SRGB_EXT %d\n", 0x8C40);
#endif
#ifdef GL_POST_CONVOLUTION_RED_SCALE
printf("GL_POST_CONVOLUTION_RED_SCALE %d\n", 0x801C);
#endif
#ifdef GL_COLOR_SUM
printf("GL_COLOR_SUM %d\n", 0x8458);
#endif
#ifdef GLU_VERSION_1_1
printf("GLU_VERSION_1_1 %d\n", 1);
#endif
#ifdef GL_EXT_blend_equation_separate
printf("GL_EXT_blend_equation_separate %d\n", 1);
#endif
#ifdef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT
printf("GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT %d\n", 0x8DE1);
#endif
#ifdef GL_NORMAL_ARRAY_LIST_IBM
printf("GL_NORMAL_ARRAY_LIST_IBM %d\n", 103071);
#endif
#ifdef GL_TEXTURE_COMPARE_FUNC
printf("GL_TEXTURE_COMPARE_FUNC %d\n", 0x884D);
#endif
#ifdef GL_MAX_TEXTURE_IMAGE_UNITS
printf("GL_MAX_TEXTURE_IMAGE_UNITS %d\n", 0x8872);
#endif
#ifdef GL_DEPTH_COMPONENT32
printf("GL_DEPTH_COMPONENT32 %d\n", 0x81A7);
#endif
#ifdef GLU_TESS_ERROR4
printf("GLU_TESS_ERROR4 %d\n", 100154);
#endif
#ifdef glVertexWeightPointerEXT
#endif
#ifdef GLEE_SGIS_sharpen_texture
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_ENABLED
printf("GL_VERTEX_ATTRIB_ARRAY_ENABLED %d\n", 0x8622);
#endif
#ifdef GL_EXT_index_material
printf("GL_EXT_index_material %d\n", 1);
#endif
#ifdef GLEE_NV_blend_square
#endif
#ifdef GL_INTENSITY32F_ARB
printf("GL_INTENSITY32F_ARB %d\n", 0x8817);
#endif
#ifdef GLU_NURBS_VERTEX_DATA
printf("GLU_NURBS_VERTEX_DATA %d\n", 100171);
#endif
#ifdef GL_MAX_VARYING_FLOATS
printf("GL_MAX_VARYING_FLOATS %d\n", 0x8B4B);
#endif
#ifdef GLEE_EXT_blend_minmax
#endif
#ifdef GLUT_STEREO
printf("GLUT_STEREO %d\n", 256);
#endif
#ifdef GL_INTERLACE_OML
printf("GL_INTERLACE_OML %d\n", 0x8980);
#endif
#ifdef GL_REG_11_ATI
printf("GL_REG_11_ATI %d\n", 0x892C);
#endif
#ifdef GL_FRAGMENT_DEPTH
printf("GL_FRAGMENT_DEPTH %d\n", 0x8452);
#endif
#ifdef __GLEE_GL_SGIX_async_histogram
printf("__GLEE_GL_SGIX_async_histogram %d\n", 1);
#endif
#ifdef GL_DUAL_LUMINANCE_ALPHA8_SGIS
printf("GL_DUAL_LUMINANCE_ALPHA8_SGIS %d\n", 0x811D);
#endif
#ifdef GL_INDEX_TEST_EXT
printf("GL_INDEX_TEST_EXT %d\n", 0x81B5);
#endif
#ifdef GLEE_EXT_shadow_funcs
#endif
#ifdef glColor3fVertex3fSUN
#endif
#ifdef GL_TEXTURE_PRIORITY
printf("GL_TEXTURE_PRIORITY %d\n", 0x8066);
#endif
#ifdef GL_POLYGON_OFFSET_FACTOR
printf("GL_POLYGON_OFFSET_FACTOR %d\n", 0x8038);
#endif
#ifdef glApplyTextureEXT
#endif
#ifdef GL_NV_texgen_emboss
printf("GL_NV_texgen_emboss %d\n", 1);
#endif
#ifdef __SCHAR_MAX__
printf("__SCHAR_MAX__ %d\n", 127);
#endif
#ifdef glGetVertexAttribArrayObjectfvATI
#endif
#ifdef GL_LINES_ADJACENCY_EXT
printf("GL_LINES_ADJACENCY_EXT %d\n", 0xA);
#endif
#ifdef GL_INT_SAMPLER_BUFFER_EXT
printf("GL_INT_SAMPLER_BUFFER_EXT %d\n", 0x8DD0);
#endif
#ifdef GLUT_HAS_KEYBOARD
printf("GLUT_HAS_KEYBOARD %d\n", 600);
#endif
#ifdef GL_BOOL_VEC2
printf("GL_BOOL_VEC2 %d\n", 0x8B57);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB14_4_NV
printf("GL_MAP1_VERTEX_ATTRIB14_4_NV %d\n", 0x866E);
#endif
#ifdef GL_COLOR3_BIT_PGI
printf("GL_COLOR3_BIT_PGI %d\n", 0x00010000);
#endif
#ifdef __GLEE_GL_SGIS_fog_function
printf("__GLEE_GL_SGIS_fog_function %d\n", 1);
#endif
#ifdef GLEE_EXT_multisample
#endif
#ifdef GLEE_EXT_polygon_offset
#endif
#ifdef GL_OPERAND3_ALPHA
printf("GL_OPERAND3_ALPHA %d\n", 0x859B);
#endif
#ifdef glReplacementCodeuiVertex3fSUN
#endif
#ifdef GL_IMAGE_ROTATE_ORIGIN_X_HP
printf("GL_IMAGE_ROTATE_ORIGIN_X_HP %d\n", 0x815A);
#endif
#ifdef GL_TEXTURE_RECTANGLE_NV
printf("GL_TEXTURE_RECTANGLE_NV %d\n", 0x84F5);
#endif
#ifdef GL_AND_REVERSE
printf("GL_AND_REVERSE %d\n", 0x1502);
#endif
#ifdef GL_DRAW_BUFFER1_ARB
printf("GL_DRAW_BUFFER1_ARB %d\n", 0x8826);
#endif
#ifdef GL_MODELVIEW30_ARB
printf("GL_MODELVIEW30_ARB %d\n", 0x873E);
#endif
#ifdef GL_NEAREST
printf("GL_NEAREST %d\n", 0x2600);
#endif
#ifdef GL_PERSPECTIVE_CORRECTION_HINT
printf("GL_PERSPECTIVE_CORRECTION_HINT %d\n", 0x0C50);
#endif
#ifdef GL_SOURCE5_RGB_ARB
printf("GL_SOURCE5_RGB_ARB %d\n", 0x8585);
#endif
#ifdef GLEE_OML_interlace
#endif
#ifdef GL_MULTISAMPLE_BIT_3DFX
printf("GL_MULTISAMPLE_BIT_3DFX %d\n", 0x20000000);
#endif
#ifdef GL_SGIX_async_pixel
printf("GL_SGIX_async_pixel %d\n", 1);
#endif
#ifdef GL_COLOR_TABLE_SCALE_SGI
printf("GL_COLOR_TABLE_SCALE_SGI %d\n", 0x80D6);
#endif
#ifdef glVertexAttrib1hNV
#endif
#ifdef __GLEE_GL_EXT_texture_object
printf("__GLEE_GL_EXT_texture_object %d\n", 1);
#endif
#ifdef GL_FOG_COORD_ARRAY_POINTER
printf("GL_FOG_COORD_ARRAY_POINTER %d\n", 0x8456);
#endif
#ifdef GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL
printf("GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL %d\n", 0x83F5);
#endif
#ifdef __GLEE_GL_EXT_fragment_lighting
printf("__GLEE_GL_EXT_fragment_lighting %d\n", 1);
#endif
#ifdef glSamplePatternEXT
#endif
#ifdef GL_MAX_INTENSITY_SGIS
printf("GL_MAX_INTENSITY_SGIS %d\n", 0x85FB);
#endif
#ifdef GLEE_ARB_texture_non_power_of_two
#endif
#ifdef glDepthRangefOES
#endif
#ifdef GL_DEPTH
printf("GL_DEPTH %d\n", 0x1801);
#endif
#ifdef GLEE_NV_texture_rectangle
#endif
#ifdef GL_TEXTURE_CLIPMAP_OFFSET_SGIX
printf("GL_TEXTURE_CLIPMAP_OFFSET_SGIX %d\n", 0x8173);
#endif
#ifdef GL_RASTER_POSITION_UNCLIPPED_IBM
printf("GL_RASTER_POSITION_UNCLIPPED_IBM %d\n", 0x19262);
#endif
#ifdef glEndVertexShaderEXT
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB9_4_NV
printf("GL_MAP1_VERTEX_ATTRIB9_4_NV %d\n", 0x8669);
#endif
#ifdef GLU_PATH_LENGTH
printf("GLU_PATH_LENGTH %d\n", 100215);
#endif
#ifdef GL_1PASS_EXT
printf("GL_1PASS_EXT %d\n", 0x80A1);
#endif
#ifdef GL_FLOAT_MAT2_ARB
printf("GL_FLOAT_MAT2_ARB %d\n", 0x8B5A);
#endif
#ifdef GL_APPLE_pixel_buffer
printf("GL_APPLE_pixel_buffer %d\n", 1);
#endif
#ifdef GL_RENDER
printf("GL_RENDER %d\n", 0x1C00);
#endif
#ifdef GL_EXT_blend_subtract
printf("GL_EXT_blend_subtract %d\n", 1);
#endif
#ifdef GLEE_SGIX_framezoom
#endif
#ifdef GL_DRAW_BUFFER5_ATI
printf("GL_DRAW_BUFFER5_ATI %d\n", 0x882A);
#endif
#ifdef GL_TEXTURE_POST_SPECULAR_HP
printf("GL_TEXTURE_POST_SPECULAR_HP %d\n", 0x8168);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT %d\n", 0x8CDC);
#endif
#ifdef glImageTransformParameterfvHP
#endif
#ifdef __GLEE_GL_SUNX_constant_data
printf("__GLEE_GL_SUNX_constant_data %d\n", 1);
#endif
#ifdef glVertexStream3sATI
#endif
#ifdef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT
printf("GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT %d\n", 0x8C29);
#endif
#ifdef GL_MAX_TEXTURE_COORDS
printf("GL_MAX_TEXTURE_COORDS %d\n", 0x8871);
#endif
#ifdef GL_MAT_DIFFUSE_BIT_PGI
printf("GL_MAT_DIFFUSE_BIT_PGI %d\n", 0x00400000);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT %d\n", 0x8CD3);
#endif
#ifdef GL_ALPHA_EXTENDED_RANGE_SGIX
printf("GL_ALPHA_EXTENDED_RANGE_SGIX %d\n", 0x85EE);
#endif
#ifdef GL_SAMPLER_1D_ARRAY_EXT
printf("GL_SAMPLER_1D_ARRAY_EXT %d\n", 0x8DC0);
#endif
#ifdef GLEE_OES_byte_coordinates
#endif
#ifdef GL_SHORT
printf("GL_SHORT %d\n", 0x1402);
#endif
#ifdef GL_TEXTURE_LIGHTING_MODE_HP
printf("GL_TEXTURE_LIGHTING_MODE_HP %d\n", 0x8167);
#endif
#ifdef GL_PROGRAM_ERROR_POSITION_ARB
printf("GL_PROGRAM_ERROR_POSITION_ARB %d\n", 0x864B);
#endif
#ifdef GL_OP_RECIP_SQRT_EXT
printf("GL_OP_RECIP_SQRT_EXT %d\n", 0x8795);
#endif
#ifdef GLUT_STROKE_ROMAN
#endif
#ifdef GL_SPOT_DIRECTION
printf("GL_SPOT_DIRECTION %d\n", 0x1204);
#endif
#ifdef glVertexAttribs2fvNV
#endif
#ifdef GL_INDEX_ARRAY_BUFFER_BINDING_ARB
printf("GL_INDEX_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8899);
#endif
#ifdef GL_SOURCE3_RGB
printf("GL_SOURCE3_RGB %d\n", 0x8583);
#endif
#ifdef GL_TRIANGLE_FAN
printf("GL_TRIANGLE_FAN %d\n", 0x0006);
#endif
#ifdef GL_ARB_texture_env_add
printf("GL_ARB_texture_env_add %d\n", 1);
#endif
#ifdef GLUT_INDEX
printf("GLUT_INDEX %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER7_ARB
printf("GL_DRAW_BUFFER7_ARB %d\n", 0x882C);
#endif
#ifdef glVertexAttrib4fvNV
#endif
#ifdef glVertexBlendEnviATI
#endif
#ifdef GL_POLYGON_OFFSET_FACTOR_EXT
printf("GL_POLYGON_OFFSET_FACTOR_EXT %d\n", 0x8038);
#endif
#ifdef GL_INDEX_ARRAY_POINTER
printf("GL_INDEX_ARRAY_POINTER %d\n", 0x8091);
#endif
#ifdef GL_HILO16_NV
printf("GL_HILO16_NV %d\n", 0x86F8);
#endif
#ifdef GLUT_CURSOR_LEFT_RIGHT
printf("GLUT_CURSOR_LEFT_RIGHT %d\n", 11);
#endif
#ifdef GL_CULL_VERTEX_EXT
printf("GL_CULL_VERTEX_EXT %d\n", 0x81AA);
#endif
#ifdef GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT
printf("GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT %d\n", 0x8DE3);
#endif
#ifdef GL_UNSIGNED_SHORT_8_8_APPLE
printf("GL_UNSIGNED_SHORT_8_8_APPLE %d\n", 0x85BA);
#endif
#ifdef glGenProgramsNV
#endif
#ifdef GLEE_NV_fence
#endif
#ifdef GL_RENDERBUFFER_DEPTH_SIZE_EXT
printf("GL_RENDERBUFFER_DEPTH_SIZE_EXT %d\n", 0x8D54);
#endif
#ifdef glVertexAttribs4dvNV
#endif
#ifdef GL_REG_4_ATI
printf("GL_REG_4_ATI %d\n", 0x8925);
#endif
#ifdef GL_LUMINANCE16UI_EXT
printf("GL_LUMINANCE16UI_EXT %d\n", 0x8D7A);
#endif
#ifdef GL_DRAW_BUFFER15_ATI
printf("GL_DRAW_BUFFER15_ATI %d\n", 0x8834);
#endif
#ifdef GL_RED
printf("GL_RED %d\n", 0x1903);
#endif
#ifdef GL_MAX_SAMPLES_EXT
printf("GL_MAX_SAMPLES_EXT %d\n", 0x8D57);
#endif
#ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB
printf("GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB %d\n", 0x86A0);
#endif
#ifdef GL_POINT_SPRITE
printf("GL_POINT_SPRITE %d\n", 0x8861);
#endif
#ifdef GLUT_WINDOW_X
printf("GLUT_WINDOW_X %d\n", 100);
#endif
#ifdef __LDBL_MANT_DIG__
printf("__LDBL_MANT_DIG__ %d\n", 64);
#endif
#ifdef GL_FLOAT_RGB16_NV
printf("GL_FLOAT_RGB16_NV %d\n", 0x8888);
#endif
#ifdef GLU_VERTEX
printf("GLU_VERTEX %d\n", 100101);
#endif
#ifdef GL_TRANSPOSE_PROJECTION_MATRIX_ARB
printf("GL_TRANSPOSE_PROJECTION_MATRIX_ARB %d\n", 0x84E4);
#endif
#ifdef GL_DS_BIAS_NV
printf("GL_DS_BIAS_NV %d\n", 0x8716);
#endif
#ifdef GL_COMBINER_SUM_OUTPUT_NV
printf("GL_COMBINER_SUM_OUTPUT_NV %d\n", 0x854C);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT %d\n", 0x8519);
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX
printf("GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX %d\n", 0x8402);
#endif
#ifdef GL_READ_FRAMEBUFFER_BINDING_EXT
printf("GL_READ_FRAMEBUFFER_BINDING_EXT %d\n", 0x8CAA);
#endif
#ifdef GL_INTERLACE_SGIX
printf("GL_INTERLACE_SGIX %d\n", 0x8094);
#endif
#ifdef glGlobalAlphaFactoruiSUN
#endif
#ifdef GL_LUMINANCE16F_ARB
printf("GL_LUMINANCE16F_ARB %d\n", 0x881E);
#endif
#ifdef glBinormal3dEXT
#endif
#ifdef glVertexAttribArrayObjectATI
#endif
#ifdef GL_SAMPLE_COVERAGE_VALUE
printf("GL_SAMPLE_COVERAGE_VALUE %d\n", 0x80AA);
#endif
#ifdef GLEE_EXT_texture_env_dot3
#endif
#ifdef GL_TEXTURE_ENV_SHIFT_EXT
printf("GL_TEXTURE_ENV_SHIFT_EXT %d\n", 0);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Y %d\n", 0x8517);
#endif
#ifdef GL_REFLECTION_MAP
printf("GL_REFLECTION_MAP %d\n", 0x8512);
#endif
#ifdef GLU_NURBS_ERROR37
printf("GLU_NURBS_ERROR37 %d\n", 100287);
#endif
#ifdef GL_COPY_PIXEL_TOKEN
printf("GL_COPY_PIXEL_TOKEN %d\n", 0x0706);
#endif
#ifdef glMultiTexCoord1hvNV
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY4_NV
printf("GL_VERTEX_ATTRIB_ARRAY4_NV %d\n", 0x8654);
#endif
#ifdef GL_OPERAND1_RGB_ARB
printf("GL_OPERAND1_RGB_ARB %d\n", 0x8591);
#endif
#ifdef GL_EYE_LINE_SGIS
printf("GL_EYE_LINE_SGIS %d\n", 0x81F6);
#endif
#ifdef GL_EXT_point_parameters
printf("GL_EXT_point_parameters %d\n", 1);
#endif
#ifdef GL_MAX_PROGRAM_TEXEL_OFFSET_EXT
printf("GL_MAX_PROGRAM_TEXEL_OFFSET_EXT %d\n", 0x8905);
#endif
#ifdef glListParameterfSGIX
#endif
#ifdef glMinmaxEXT
#endif
#ifdef glGenTexturesEXT
#endif
#ifdef GL_TEXTURE26_ARB
printf("GL_TEXTURE26_ARB %d\n", 0x84DA);
#endif
#ifdef GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX
printf("GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX %d\n", 0x818A);
#endif
#ifdef __GLEE_GL_EXT_color_matrix
printf("__GLEE_GL_EXT_color_matrix %d\n", 1);
#endif
#ifdef GL_SAMPLER_1D_SHADOW
printf("GL_SAMPLER_1D_SHADOW %d\n", 0x8B61);
#endif
#ifdef GL_BUMP_ROT_MATRIX_ATI
printf("GL_BUMP_ROT_MATRIX_ATI %d\n", 0x8775);
#endif
#ifdef GLUT_CURSOR_UP_DOWN
printf("GLUT_CURSOR_UP_DOWN %d\n", 10);
#endif
#ifdef glNormal3fVertex3fSUN
#endif
#ifdef glGetLocalConstantFloatvEXT
#endif
#ifdef GL_R1UI_C4UB_V3F_SUN
printf("GL_R1UI_C4UB_V3F_SUN %d\n", 0x85C5);
#endif
#ifdef glSetFragmentShaderConstantATI
#endif
#ifdef GLEE_ARB_window_pos
#endif
#ifdef GL_RGBA12_EXT
printf("GL_RGBA12_EXT %d\n", 0x805A);
#endif
#ifdef GL_MAP_STENCIL
printf("GL_MAP_STENCIL %d\n", 0x0D11);
#endif
#ifdef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
printf("GL_MAX_FRAGMENT_UNIFORM_COMPONENTS %d\n", 0x8B49);
#endif
#ifdef GL_NV_vertex_program3
printf("GL_NV_vertex_program3 %d\n", 1);
#endif
#ifdef glVertexStream4svATI
#endif
#ifdef GL_INSTRUMENT_MEASUREMENTS_SGIX
printf("GL_INSTRUMENT_MEASUREMENTS_SGIX %d\n", 0x8181);
#endif
#ifdef GL_CONVOLUTION_FORMAT_EXT
printf("GL_CONVOLUTION_FORMAT_EXT %d\n", 0x8017);
#endif
#ifdef glWindowPos4sMESA
#endif
#ifdef glTextureMaterialEXT
#endif
#ifdef GL_PIXEL_MAP_I_TO_A_SIZE
printf("GL_PIXEL_MAP_I_TO_A_SIZE %d\n", 0x0CB5);
#endif
#ifdef GL_SGIX_async
printf("GL_SGIX_async %d\n", 1);
#endif
#ifdef GL_SGIS_texture_lod
printf("GL_SGIS_texture_lod %d\n", 1);
#endif
#ifdef GL_TEXTURE6
printf("GL_TEXTURE6 %d\n", 0x84C6);
#endif
#ifdef GL_RENDERBUFFER_EXT
printf("GL_RENDERBUFFER_EXT %d\n", 0x8D41);
#endif
#ifdef GL_MAX_VIEWPORT_DIMS
printf("GL_MAX_VIEWPORT_DIMS %d\n", 0x0D3A);
#endif
#ifdef glVertexAttribs4hvNV
#endif
#ifdef GL_PIXEL_MAP_I_TO_A
printf("GL_PIXEL_MAP_I_TO_A %d\n", 0x0C75);
#endif
#ifdef GL_SELECTION_BUFFER_SIZE
printf("GL_SELECTION_BUFFER_SIZE %d\n", 0x0DF4);
#endif
#ifdef GL_RETAINED_APPLE
printf("GL_RETAINED_APPLE %d\n", 0x8A1B);
#endif
#ifdef glVertexAttrib4fNV
#endif
#ifdef GL_UNSIGNED_INT_8_8_8_8_REV
printf("GL_UNSIGNED_INT_8_8_8_8_REV %d\n", 0x8367);
#endif
#ifdef glTexSubImage4DSGIS
#endif
#ifdef GL_BUFFER_ACCESS_ARB
printf("GL_BUFFER_ACCESS_ARB %d\n", 0x88BB);
#endif
#ifdef GL_BUMP_ROT_MATRIX_SIZE_ATI
printf("GL_BUMP_ROT_MATRIX_SIZE_ATI %d\n", 0x8776);
#endif
#ifdef GL_NEGATIVE_Y_EXT
printf("GL_NEGATIVE_Y_EXT %d\n", 0x87DA);
#endif
#ifdef GL_MAP1_TEXTURE_COORD_3
printf("GL_MAP1_TEXTURE_COORD_3 %d\n", 0x0D95);
#endif
#ifdef GL_ATTENUATION_EXT
printf("GL_ATTENUATION_EXT %d\n", 0x834D);
#endif
#ifdef GL_TRIANGLE_LIST_SUN
printf("GL_TRIANGLE_LIST_SUN %d\n", 0x81D7);
#endif
#ifdef glGetConvolutionParameterfvEXT
#endif
#ifdef GL_RENDERBUFFER_BLUE_SIZE_EXT
printf("GL_RENDERBUFFER_BLUE_SIZE_EXT %d\n", 0x8D52);
#endif
#ifdef GL_ARB_shading_language_100
printf("GL_ARB_shading_language_100 %d\n", 1);
#endif
#ifdef glVertexAttribs1fvNV
#endif
#ifdef GL_TEXTURE_MIN_LOD
printf("GL_TEXTURE_MIN_LOD %d\n", 0x813A);
#endif
#ifdef GL_MAP_TESSELLATION_NV
printf("GL_MAP_TESSELLATION_NV %d\n", 0x86C2);
#endif
#ifdef GL_ATI_map_object_buffer
printf("GL_ATI_map_object_buffer %d\n", 1);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD31_EXT
printf("GL_OUTPUT_TEXTURE_COORD31_EXT %d\n", 0x87BC);
#endif
#ifdef GL_MAX_VERTEX_ATTRIBS
printf("GL_MAX_VERTEX_ATTRIBS %d\n", 0x8869);
#endif
#ifdef GLU_LINE
printf("GLU_LINE %d\n", 100011);
#endif
#ifdef GL_PACK_IMAGE_DEPTH_SGIS
printf("GL_PACK_IMAGE_DEPTH_SGIS %d\n", 0x8131);
#endif
#ifdef GL_INVERSE_NV
printf("GL_INVERSE_NV %d\n", 0x862B);
#endif
#ifdef __GLEE_GL_IBM_texture_mirrored_repeat
printf("__GLEE_GL_IBM_texture_mirrored_repeat %d\n", 1);
#endif
#ifdef __LDBL_MIN__
#endif
#ifdef GL_POINT_SMOOTH
printf("GL_POINT_SMOOTH %d\n", 0x0B10);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI
printf("GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI %d\n", 0x6097);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_POINTER
printf("GL_SECONDARY_COLOR_ARRAY_POINTER %d\n", 0x845D);
#endif
#ifdef GL_BLUE_BIT_ATI
printf("GL_BLUE_BIT_ATI %d\n", 0x00000004);
#endif
#ifdef GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB %d\n", 0x880C);
#endif
#ifdef GL_MODELVIEW29_ARB
printf("GL_MODELVIEW29_ARB %d\n", 0x873D);
#endif
#ifdef GL_REPLICATE_BORDER_HP
printf("GL_REPLICATE_BORDER_HP %d\n", 0x8153);
#endif
#ifdef GL_UNSIGNED_INT_8_8_8_8_EXT
printf("GL_UNSIGNED_INT_8_8_8_8_EXT %d\n", 0x8035);
#endif
#ifdef GL_NV_texture_shader2
printf("GL_NV_texture_shader2 %d\n", 1);
#endif
#ifdef __GLEE_GL_NV_evaluators
printf("__GLEE_GL_NV_evaluators %d\n", 1);
#endif
#ifdef GLEE_INGR_palette_buffer
#endif
#ifdef GL_TEXTURE23_ARB
printf("GL_TEXTURE23_ARB %d\n", 0x84D7);
#endif
#ifdef GL_OES_read_format
printf("GL_OES_read_format %d\n", 1);
#endif
#ifdef GLU_FLAT
printf("GLU_FLAT %d\n", 100001);
#endif
#ifdef GL_ONE
printf("GL_ONE %d\n", 1);
#endif
#ifdef GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
printf("GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT %d\n", 0x87D2);
#endif
#ifdef GL_CONSTANT_BORDER
printf("GL_CONSTANT_BORDER %d\n", 0x8151);
#endif
#ifdef GL_REG_28_ATI
printf("GL_REG_28_ATI %d\n", 0x893D);
#endif
#ifdef GL_ACCUM_BUFFER_BIT
printf("GL_ACCUM_BUFFER_BIT %d\n", 0x00000200);
#endif
#ifdef GL_QUERY_RESULT_AVAILABLE
printf("GL_QUERY_RESULT_AVAILABLE %d\n", 0x8867);
#endif
#ifdef glMultiTexCoord4hNV
#endif
#ifdef GLEE_MESA_pack_invert
#endif
#ifdef GLEE_ARB_fragment_program
#endif
#ifdef GL_CON_5_ATI
printf("GL_CON_5_ATI %d\n", 0x8946);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB4_4_NV
printf("GL_MAP1_VERTEX_ATTRIB4_4_NV %d\n", 0x8664);
#endif
#ifdef GL_TEXTURE_MAG_FILTER
printf("GL_TEXTURE_MAG_FILTER %d\n", 0x2800);
#endif
#ifdef GL_TEXTURE2_ARB
printf("GL_TEXTURE2_ARB %d\n", 0x84C2);
#endif
#ifdef GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI
printf("GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI %d\n", 0x00200000);
#endif
#ifdef GL_NUM_LOOPBACK_COMPONENTS_ATI
printf("GL_NUM_LOOPBACK_COMPONENTS_ATI %d\n", 0x8974);
#endif
#ifdef GL_NUM_FRAGMENT_CONSTANTS_ATI
printf("GL_NUM_FRAGMENT_CONSTANTS_ATI %d\n", 0x896F);
#endif
#ifdef GLU_INVALID_OPERATION
printf("GLU_INVALID_OPERATION %d\n", 100904);
#endif
#ifdef GL_SLUMINANCE
printf("GL_SLUMINANCE %d\n", 0x8C46);
#endif
#ifdef GL_SGIX_texture_range
printf("GL_SGIX_texture_range %d\n", 1);
#endif
#ifdef GL_YCRCB_444_SGIX
printf("GL_YCRCB_444_SGIX %d\n", 0x81BC);
#endif
#ifdef GL_RESCALE_NORMAL
printf("GL_RESCALE_NORMAL %d\n", 0x803A);
#endif
#ifdef GL_CON_2_ATI
printf("GL_CON_2_ATI %d\n", 0x8943);
#endif
#ifdef glLightEnviEXT
#endif
#ifdef GL_COMBINER_AB_DOT_PRODUCT_NV
printf("GL_COMBINER_AB_DOT_PRODUCT_NV %d\n", 0x8545);
#endif
#ifdef GL_OPERAND6_RGB_ARB
printf("GL_OPERAND6_RGB_ARB %d\n", 0x8596);
#endif
#ifdef GLEE_SGIS_detail_texture
#endif
#ifdef GL_BOOL_VEC2_ARB
printf("GL_BOOL_VEC2_ARB %d\n", 0x8B57);
#endif
#ifdef GL_ENV_MODULATE_EXT
printf("GL_ENV_MODULATE_EXT %d\n", 0);
#endif
#ifdef GL_INTENSITY_EXTENDED_RANGE_SGIX
printf("GL_INTENSITY_EXTENDED_RANGE_SGIX %d\n", 0x85F0);
#endif
#ifdef glColorTableSGI
#endif
#ifdef GL_SGIX_shadow
printf("GL_SGIX_shadow %d\n", 1);
#endif
#ifdef __DBL_MIN__
#endif
#ifdef GL_CLIP_PLANE5
printf("GL_CLIP_PLANE5 %d\n", 0x3005);
#endif
#ifdef GL_TEXT_FRAGMENT_SHADER_ATI
printf("GL_TEXT_FRAGMENT_SHADER_ATI %d\n", 0x8200);
#endif
#ifdef GL_LUMINANCE8
printf("GL_LUMINANCE8 %d\n", 0x8040);
#endif
#ifdef glPixelDataRangeNV
#endif
#ifdef GL_COMBINER5_NV
printf("GL_COMBINER5_NV %d\n", 0x8555);
#endif
#ifdef GL_RGB2_EXT
printf("GL_RGB2_EXT %d\n", 0x804E);
#endif
#ifdef GL_POLYGON_SMOOTH
printf("GL_POLYGON_SMOOTH %d\n", 0x0B41);
#endif
#ifdef glGetInvariantFloatvEXT
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT
printf("GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT %d\n", 0x8C7F);
#endif
#ifdef GL_COLOR_ARRAY
printf("GL_COLOR_ARRAY %d\n", 0x8076);
#endif
#ifdef GL_INVARIANT_DATATYPE_EXT
printf("GL_INVARIANT_DATATYPE_EXT %d\n", 0x87EB);
#endif
#ifdef __DBL_EPSILON__
#endif
#ifdef GLEE_EXT_vertex_array
#endif
#ifdef GL_DRAW_BUFFER6
printf("GL_DRAW_BUFFER6 %d\n", 0x882B);
#endif
#ifdef GL_SIGNED_ALPHA_NV
printf("GL_SIGNED_ALPHA_NV %d\n", 0x8705);
#endif
#ifdef GL_SAMPLER_2D_SHADOW_ARB
printf("GL_SAMPLER_2D_SHADOW_ARB %d\n", 0x8B62);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT %d\n", 0x8D56);
#endif
#ifdef GL_MAX_VERTEX_UNIFORM_COMPONENTS
printf("GL_MAX_VERTEX_UNIFORM_COMPONENTS %d\n", 0x8B4A);
#endif
#ifdef GL_OML_resample
printf("GL_OML_resample %d\n", 1);
#endif
#ifdef glVertex2hvNV
#endif
#ifdef GL_SOURCE3_ALPHA_NV
printf("GL_SOURCE3_ALPHA_NV %d\n", 0x858B);
#endif
#ifdef glTexImage4DSGIS
#endif
#ifdef GL_DEPTH_RANGE
printf("GL_DEPTH_RANGE %d\n", 0x0B70);
#endif
#ifdef GL_TEXTURE18
printf("GL_TEXTURE18 %d\n", 0x84D2);
#endif
#ifdef GL_CMYK_EXT
printf("GL_CMYK_EXT %d\n", 0x800C);
#endif
#ifdef GL_ARRAY_BUFFER_ARB
printf("GL_ARRAY_BUFFER_ARB %d\n", 0x8892);
#endif
#ifdef GL_PIXEL_MAP_B_TO_B_SIZE
printf("GL_PIXEL_MAP_B_TO_B_SIZE %d\n", 0x0CB8);
#endif
#ifdef GLU_TESS_WINDING_POSITIVE
printf("GLU_TESS_WINDING_POSITIVE %d\n", 100132);
#endif
#ifdef GLEE_APPLE_transform_hint
#endif
#ifdef GL_FRAMEBUFFER_UNSUPPORTED_EXT
printf("GL_FRAMEBUFFER_UNSUPPORTED_EXT %d\n", 0x8CDD);
#endif
#ifdef GL_APPLE_ycbcr_422
printf("GL_APPLE_ycbcr_422 %d\n", 1);
#endif
#ifdef glGenFragmentShadersATI
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY3_NV
printf("GL_VERTEX_ATTRIB_ARRAY3_NV %d\n", 0x8653);
#endif
#ifdef glGetMinmaxEXT
#endif
#ifdef glArrayObjectATI
#endif
#ifdef GL_NV_blend_square
printf("GL_NV_blend_square %d\n", 1);
#endif
#ifdef GL_MODELVIEW14_ARB
printf("GL_MODELVIEW14_ARB %d\n", 0x872E);
#endif
#ifdef glVariantsvEXT
#endif
#ifdef GL_VERSION_1_4
printf("GL_VERSION_1_4 %d\n", 1);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_COUNT_EXT
printf("GL_EDGE_FLAG_ARRAY_COUNT_EXT %d\n", 0x808D);
#endif
#ifdef glReplacementCodeuiColor4fNormal3fVertex3fSUN
#endif
#ifdef GL_ALPHA16_SIGNED_SGIX
printf("GL_ALPHA16_SIGNED_SGIX %d\n", 0x85E8);
#endif
#ifdef glWindowPos4fvMESA
#endif
#ifdef GL_COMPARE_R_TO_TEXTURE_ARB
printf("GL_COMPARE_R_TO_TEXTURE_ARB %d\n", 0x884E);
#endif
#ifdef GL_DST_COLOR
printf("GL_DST_COLOR %d\n", 0x0306);
#endif
#ifdef GL_PROXY_TEXTURE_RECTANGLE_ARB
printf("GL_PROXY_TEXTURE_RECTANGLE_ARB %d\n", 0x84F7);
#endif
#ifdef GLUT_BITMAP_9_BY_15
#endif
#ifdef glVertexAttrib2dvNV
#endif
#ifdef GL_TEXTURE_FLOAT_COMPONENTS_NV
printf("GL_TEXTURE_FLOAT_COMPONENTS_NV %d\n", 0x888C);
#endif
#ifdef glVertexAttrib3svNV
#endif
#ifdef glVariantusvEXT
#endif
#ifdef GL_LINES
printf("GL_LINES %d\n", 0x0001);
#endif
#ifdef GL_SLUMINANCE8
printf("GL_SLUMINANCE8 %d\n", 0x8C47);
#endif
#ifdef GLUT_NUM_DIALS
printf("GLUT_NUM_DIALS %d\n", 608);
#endif
#ifdef GL_PROXY_TEXTURE_COLOR_TABLE_SGI
printf("GL_PROXY_TEXTURE_COLOR_TABLE_SGI %d\n", 0x80BD);
#endif
#ifdef GL_SOURCE7_ALPHA
printf("GL_SOURCE7_ALPHA %d\n", 0x858F);
#endif
#ifdef GL_MODELVIEW_MATRIX
printf("GL_MODELVIEW_MATRIX %d\n", 0x0BA6);
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATIX
printf("GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATIX %d\n", 0x6095);
#endif
#ifdef GL_VERTEX_STATE_PROGRAM_NV
printf("GL_VERTEX_STATE_PROGRAM_NV %d\n", 0x8621);
#endif
#ifdef glGetColorTableParameterfvSGI
#endif
#ifdef GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
printf("GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB %d\n", 0x8808);
#endif
#ifdef GL_SRC5_RGB
printf("GL_SRC5_RGB %d\n", 0x8585);
#endif
#ifdef GL_LINE_STRIP_ADJACENCY_EXT
printf("GL_LINE_STRIP_ADJACENCY_EXT %d\n", 0xB);
#endif
#ifdef GLEE_EXT_histogram
#endif
#ifdef GLUT_NORMAL
printf("GLUT_NORMAL %d\n", 0);
#endif
#ifdef GL_TEXTURE
printf("GL_TEXTURE %d\n", 0x1702);
#endif
#ifdef GLU_NURBS_ERROR2
printf("GLU_NURBS_ERROR2 %d\n", 100252);
#endif
#ifdef GL_4PASS_1_EXT
printf("GL_4PASS_1_EXT %d\n", 0x80A5);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Z %d\n", 0x851A);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB
printf("GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889B);
#endif
#ifdef GL_PRESERVE_ATI
printf("GL_PRESERVE_ATI %d\n", 0x8762);
#endif
#ifdef __GNUC_GNU_INLINE__
printf("__GNUC_GNU_INLINE__ %d\n", 1);
#endif
#ifdef GL_INTENSITY16I_EXT
printf("GL_INTENSITY16I_EXT %d\n", 0x8D8B);
#endif
#ifdef GLEE_EXT_blend_equation_separate
#endif
#ifdef GL_SAMPLER_2D
printf("GL_SAMPLER_2D %d\n", 0x8B5E);
#endif
#ifdef GL_ALPHA
printf("GL_ALPHA %d\n", 0x1906);
#endif
#ifdef GL_DOT3_RGB_ARB
printf("GL_DOT3_RGB_ARB %d\n", 0x86AE);
#endif
#ifdef GLEE_SUN_vertex
#endif
#ifdef GLUT_WINDOW_CURSOR
printf("GLUT_WINDOW_CURSOR %d\n", 122);
#endif
#ifdef __GLEE_GL_ATI_draw_buffers
printf("__GLEE_GL_ATI_draw_buffers %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_scene_marker
printf("__GLEE_GL_EXT_scene_marker %d\n", 1);
#endif
#ifdef glTextureLightEXT
#endif
#ifdef GL_TEXTURE_1D
printf("GL_TEXTURE_1D %d\n", 0x0DE0);
#endif
#ifdef GL_POINT_SPRITE_R_MODE_NV
printf("GL_POINT_SPRITE_R_MODE_NV %d\n", 0x8863);
#endif
#ifdef GL_COLOR_SUM_ARB
printf("GL_COLOR_SUM_ARB %d\n", 0x8458);
#endif
#ifdef GL_POST_CONVOLUTION_RED_BIAS
printf("GL_POST_CONVOLUTION_RED_BIAS %d\n", 0x8020);
#endif
#ifdef GL_CURRENT_RASTER_SECONDARY_COLOR
printf("GL_CURRENT_RASTER_SECONDARY_COLOR %d\n", 0x845F);
#endif
#ifdef GL_PROJECTION
printf("GL_PROJECTION %d\n", 0x1701);
#endif
#ifdef GL_BLEND_EQUATION_ALPHA
printf("GL_BLEND_EQUATION_ALPHA %d\n", 0x883D);
#endif
#ifdef GLU_TESS_WINDING_NONZERO
printf("GLU_TESS_WINDING_NONZERO %d\n", 100131);
#endif
#ifdef GL_RGB32UI_EXT
printf("GL_RGB32UI_EXT %d\n", 0x8D71);
#endif
#ifdef GL_NUM_FRAGMENT_REGISTERS_ATI
printf("GL_NUM_FRAGMENT_REGISTERS_ATI %d\n", 0x896E);
#endif
#ifdef GLEE_EXT_convolution
#endif
#ifdef __GLEE_GL_SGI_texture_color_table
printf("__GLEE_GL_SGI_texture_color_table %d\n", 1);
#endif
#ifdef GLU_NURBS_ERROR30
printf("GLU_NURBS_ERROR30 %d\n", 100280);
#endif
#ifdef GLU_EDGE_FLAG
printf("GLU_EDGE_FLAG %d\n", 100104);
#endif
#ifdef GLEE_HP_occlusion_test
#endif
#ifdef glVertexStream3fATI
#endif
#ifdef GL_ARB_fragment_shader
printf("GL_ARB_fragment_shader %d\n", 1);
#endif
#ifdef GL_DETAIL_TEXTURE_MODE_SGIS
printf("GL_DETAIL_TEXTURE_MODE_SGIS %d\n", 0x809B);
#endif
#ifdef GLEE_EXT_color_subtable
#endif
#ifdef GL_TEXTURE16_ARB
printf("GL_TEXTURE16_ARB %d\n", 0x84D0);
#endif
#ifdef glBinormal3fvEXT
#endif
#ifdef GL_INTERLACE_READ_INGR
printf("GL_INTERLACE_READ_INGR %d\n", 0x8568);
#endif
#ifdef GL_OPERAND4_RGB
printf("GL_OPERAND4_RGB %d\n", 0x8594);
#endif
#ifdef GL_INDEX_MATERIAL_EXT
printf("GL_INDEX_MATERIAL_EXT %d\n", 0x81B8);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE
printf("GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE %d\n", 0x8A05);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD29_EXT
printf("GL_OUTPUT_TEXTURE_COORD29_EXT %d\n", 0x87BA);
#endif
#ifdef GLU_CCW
printf("GLU_CCW %d\n", 100121);
#endif
#ifdef __GLEE_GL_EXT_vertex_shader
printf("__GLEE_GL_EXT_vertex_shader %d\n", 1);
#endif
#ifdef GL_422_REV_AVERAGE_EXT
printf("GL_422_REV_AVERAGE_EXT %d\n", 0x80CF);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB3_NV
printf("GL_EVAL_VERTEX_ATTRIB3_NV %d\n", 0x86C9);
#endif
#ifdef GL_TEXTURE_2D_BINDING_EXT
printf("GL_TEXTURE_2D_BINDING_EXT %d\n", 0x8069);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
printf("GL_VERTEX_ATTRIB_ARRAY_NORMALIZED %d\n", 0x886A);
#endif
#ifdef GL_SPECULAR
printf("GL_SPECULAR %d\n", 0x1202);
#endif
#ifdef GLU_NURBS_VERTEX
printf("GLU_NURBS_VERTEX %d\n", 100165);
#endif
#ifdef GL_OP_FRAC_EXT
printf("GL_OP_FRAC_EXT %d\n", 0x8789);
#endif
#ifdef GL_NORMAL_MAP_NV
printf("GL_NORMAL_MAP_NV %d\n", 0x8511);
#endif
#ifdef GL_PROGRAM_FORMAT_ARB
printf("GL_PROGRAM_FORMAT_ARB %d\n", 0x8876);
#endif
#ifdef GL_DUAL_LUMINANCE_ALPHA4_SGIS
printf("GL_DUAL_LUMINANCE_ALPHA4_SGIS %d\n", 0x811C);
#endif
#ifdef GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI
printf("GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI %d\n", 0x6091);
#endif
#ifdef GL_NORMAL_ARRAY_TYPE_EXT
printf("GL_NORMAL_ARRAY_TYPE_EXT %d\n", 0x807E);
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_EXT
printf("GL_FRAGMENT_COLOR_MATERIAL_EXT %d\n", 0x8401);
#endif
#ifdef GLU_NURBS_ERROR7
printf("GLU_NURBS_ERROR7 %d\n", 100257);
#endif
#ifdef GL_RENDERBUFFER_RED_SIZE_EXT
printf("GL_RENDERBUFFER_RED_SIZE_EXT %d\n", 0x8D50);
#endif
#ifdef GL_DSDT8_NV
printf("GL_DSDT8_NV %d\n", 0x8709);
#endif
#ifdef GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV
printf("GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV %d\n", 0x8853);
#endif
#ifdef GL_FOG_COORD_ARRAY_BUFFER_BINDING
printf("GL_FOG_COORD_ARRAY_BUFFER_BINDING %d\n", 0x889D);
#endif
#ifdef GL_TEXTURE_1D_STACK_MESAX
printf("GL_TEXTURE_1D_STACK_MESAX %d\n", 0x8759);
#endif
#ifdef GL_POLYGON_MODE
printf("GL_POLYGON_MODE %d\n", 0x0B40);
#endif
#ifdef GL_NAND
printf("GL_NAND %d\n", 0x150E);
#endif
#ifdef __LONG_MAX__
#endif
#ifdef GL_NV_float_buffer
printf("GL_NV_float_buffer %d\n", 1);
#endif
#ifdef glResetMinmaxEXT
#endif
#ifdef GLU_TESS_COMBINE
printf("GLU_TESS_COMBINE %d\n", 100105);
#endif
#ifdef GL_APPLE_float_pixels
printf("GL_APPLE_float_pixels %d\n", 1);
#endif
#ifdef GL_GEOMETRY_OUTPUT_TYPE_EXT
printf("GL_GEOMETRY_OUTPUT_TYPE_EXT %d\n", 0x8DDC);
#endif
#ifdef GL_PIXEL_MAP_R_TO_R
printf("GL_PIXEL_MAP_R_TO_R %d\n", 0x0C76);
#endif
#ifdef GL_MAX_VERTEX_HINT_PGI
printf("GL_MAX_VERTEX_HINT_PGI %d\n", 0x1A22D);
#endif
#ifdef GL_TEXTURE_WRAP_Q_SGIS
printf("GL_TEXTURE_WRAP_Q_SGIS %d\n", 0x8137);
#endif
#ifdef glGetSeparableFilterEXT
#endif
#ifdef GLUT_DEPTH
printf("GLUT_DEPTH %d\n", 16);
#endif
#ifdef GL_SAMPLER_CUBE
printf("GL_SAMPLER_CUBE %d\n", 0x8B60);
#endif
#ifdef glVariantivEXT
#endif
#ifdef glVertex4hNV
#endif
#ifdef glShaderOp3EXT
#endif
#ifdef GL_MAX_BINDABLE_UNIFORM_SIZE_EXT
printf("GL_MAX_BINDABLE_UNIFORM_SIZE_EXT %d\n", 0x8DED);
#endif
#ifdef __GLEE_GL_SGIX_texture_multi_buffer
printf("__GLEE_GL_SGIX_texture_multi_buffer %d\n", 1);
#endif
#ifdef GL_REG_15_ATI
printf("GL_REG_15_ATI %d\n", 0x8930);
#endif
#ifdef GL_PIXEL_MAP_S_TO_S
printf("GL_PIXEL_MAP_S_TO_S %d\n", 0x0C71);
#endif
#ifdef GL_TEXTURE_APPLICATION_MODE_EXT
printf("GL_TEXTURE_APPLICATION_MODE_EXT %d\n", 0x834F);
#endif
#ifdef GL_BLUE_BIAS
printf("GL_BLUE_BIAS %d\n", 0x0D1B);
#endif
#ifdef glGetVariantPointervEXT
#endif
#ifdef GL_OPERAND1_ALPHA
printf("GL_OPERAND1_ALPHA %d\n", 0x8599);
#endif
#ifdef GL_COLOR_ATTACHMENT2_EXT
printf("GL_COLOR_ATTACHMENT2_EXT %d\n", 0x8CE2);
#endif
#ifdef GLEE_LINK_COMPLETE
printf("GLEE_LINK_COMPLETE %d\n", 2);
#endif
#ifdef GL_UNSIGNED_INT_2_10_10_10_REV
printf("GL_UNSIGNED_INT_2_10_10_10_REV %d\n", 0x8368);
#endif
#ifdef __GLEE_GL_ATI_vertex_array_object
printf("__GLEE_GL_ATI_vertex_array_object %d\n", 1);
#endif
#ifdef __GNUC_PATCHLEVEL__
printf("__GNUC_PATCHLEVEL__ %d\n", 1);
#endif
#ifdef glFragmentMaterialivEXT
#endif
#ifdef GLEE_IBM_texture_mirrored_repeat
#endif
#ifdef GL_SGI_color_matrix
printf("GL_SGI_color_matrix %d\n", 1);
#endif
#ifdef GLU_NURBS_END_EXT
printf("GLU_NURBS_END_EXT %d\n", 100169);
#endif
#ifdef GL_UNPACK_RESAMPLE_SGIX
printf("GL_UNPACK_RESAMPLE_SGIX %d\n", 0x842D);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM
printf("GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM %d\n", 103084);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY
printf("GL_FOG_COORDINATE_ARRAY %d\n", 0x8457);
#endif
#ifdef GL_HISTOGRAM_FORMAT
printf("GL_HISTOGRAM_FORMAT %d\n", 0x8027);
#endif
#ifdef GL_WEIGHT_ARRAY_SIZE_ARB
printf("GL_WEIGHT_ARRAY_SIZE_ARB %d\n", 0x86AB);
#endif
#ifdef GLUT_CURSOR_TOP_RIGHT_CORNER
printf("GLUT_CURSOR_TOP_RIGHT_CORNER %d\n", 17);
#endif
#ifdef GL_ALPHA16I_EXT
printf("GL_ALPHA16I_EXT %d\n", 0x8D8A);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT %d\n", 0x8CD2);
#endif
#ifdef glFrustumfOES
#endif
#ifdef GLEE_MESA_ycbcr_texture
#endif
#ifdef GLU_INCOMPATIBLE_GL_VERSION
printf("GLU_INCOMPATIBLE_GL_VERSION %d\n", 100903);
#endif
#ifdef GLU_TESS_ERROR5
printf("GLU_TESS_ERROR5 %d\n", 100155);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB
printf("GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889D);
#endif
#ifdef OBJC_NEW_PROPERTIES
printf("OBJC_NEW_PROPERTIES %d\n", 1);
#endif
#ifdef glTexCoord2fColor3fVertex3fSUN
#endif
#ifdef GL_UNPACK_IMAGE_DEPTH_SGIS
printf("GL_UNPACK_IMAGE_DEPTH_SGIS %d\n", 0x8133);
#endif
#ifdef GL_POINT_SIZE_MAX_SGIS
printf("GL_POINT_SIZE_MAX_SGIS %d\n", 0x8127);
#endif
#ifdef GL_DT_BIAS_NV
printf("GL_DT_BIAS_NV %d\n", 0x8717);
#endif
#ifdef GL_INTENSITY12
printf("GL_INTENSITY12 %d\n", 0x804C);
#endif
#ifdef GL_MATRIX29_ARB
printf("GL_MATRIX29_ARB %d\n", 0x88DD);
#endif
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA
printf("GL_COMPRESSED_LUMINANCE_ALPHA %d\n", 0x84EB);
#endif
#ifdef GLEE_NV_vertex_array_range
#endif
#ifdef GL_BLEND_DST_RGB_EXT
printf("GL_BLEND_DST_RGB_EXT %d\n", 0x80C8);
#endif
#ifdef GL_DECAL
printf("GL_DECAL %d\n", 0x2101);
#endif
#ifdef GL_QUAD_INTENSITY8_SGIS
printf("GL_QUAD_INTENSITY8_SGIS %d\n", 0x8123);
#endif
#ifdef glBinormalPointerEXT
#endif
#ifdef glGetFragmentMaterialfvSGIX
#endif
#ifdef GL_CON_15_ATI
printf("GL_CON_15_ATI %d\n", 0x8950);
#endif
#ifdef GLU_OUTLINE_POLYGON
printf("GLU_OUTLINE_POLYGON %d\n", 100240);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD4_EXT
printf("GL_OUTPUT_TEXTURE_COORD4_EXT %d\n", 0x87A1);
#endif
#ifdef GL_SAMPLER_CUBE_ARB
printf("GL_SAMPLER_CUBE_ARB %d\n", 0x8B60);
#endif
#ifdef __GLEE_GL_SGIX_depth_texture
printf("__GLEE_GL_SGIX_depth_texture %d\n", 1);
#endif
#ifdef GLUT_WINDOW_COLORMAP_SIZE
printf("GLUT_WINDOW_COLORMAP_SIZE %d\n", 119);
#endif
#ifdef __CHAR_BIT__
printf("__CHAR_BIT__ %d\n", 8);
#endif
#ifdef GL_RGB_S3TC
printf("GL_RGB_S3TC %d\n", 0x83A0);
#endif
#ifdef __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
printf("__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ %d\n", 1058);
#endif
#ifdef GL_PROXY_TEXTURE_2D_EXT
printf("GL_PROXY_TEXTURE_2D_EXT %d\n", 0x8064);
#endif
#ifdef GLEE_EXT_blend_logic_op
#endif
#ifdef glGlobalAlphaFactorusSUN
#endif
#ifdef GL_ARB_pixel_buffer_object
printf("GL_ARB_pixel_buffer_object %d\n", 1);
#endif
#ifdef GL_VERTEX_STREAM5_ATI
printf("GL_VERTEX_STREAM5_ATI %d\n", 0x8771);
#endif
#ifdef GL_SAMPLE_BUFFERS
printf("GL_SAMPLE_BUFFERS %d\n", 0x80A8);
#endif
#ifdef GL_VERTEX_ARRAY_BUFFER_BINDING
printf("GL_VERTEX_ARRAY_BUFFER_BINDING %d\n", 0x8896);
#endif
#ifdef GL_INDEX_MATERIAL_FACE_EXT
printf("GL_INDEX_MATERIAL_FACE_EXT %d\n", 0x81BA);
#endif
#ifdef GL_COMPRESSED_SRGB_EXT
printf("GL_COMPRESSED_SRGB_EXT %d\n", 0x8C48);
#endif
#ifdef GL_EXT_texture_compression_dxt1
printf("GL_EXT_texture_compression_dxt1 %d\n", 1);
#endif
#ifdef GLEE_ARB_texture_env_dot3
#endif
#ifdef GL_CON_26_ATI
printf("GL_CON_26_ATI %d\n", 0x895B);
#endif
#ifdef GL_QUERY_RESULT
printf("GL_QUERY_RESULT %d\n", 0x8866);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT %d\n", 0x8CD4);
#endif
#ifdef glNormal3fVertex3fvSUN
#endif
#ifdef GL_COMPRESSED_SLUMINANCE_ALPHA
printf("GL_COMPRESSED_SLUMINANCE_ALPHA %d\n", 0x8C4B);
#endif
#ifdef glFragmentLightfvSGIX
#endif
#ifdef GL_VALIDATE_STATUS
printf("GL_VALIDATE_STATUS %d\n", 0x8B83);
#endif
#ifdef GL_BUFFER_SERIALIZED_MODIFY_APPLE
printf("GL_BUFFER_SERIALIZED_MODIFY_APPLE %d\n", 0x8A12);
#endif
#ifdef GL_MIN_PBUFFER_VIEWPORT_DIMS_APPLE
printf("GL_MIN_PBUFFER_VIEWPORT_DIMS_APPLE %d\n", 0x8A10);
#endif
#ifdef GL_RGBA12
printf("GL_RGBA12 %d\n", 0x805A);
#endif
#ifdef GL_COLOR_INDEX4_EXT
printf("GL_COLOR_INDEX4_EXT %d\n", 0x80E4);
#endif
#ifdef __WINT_TYPE__
#endif
#ifdef GL_CUBIC_HP
printf("GL_CUBIC_HP %d\n", 0x815F);
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATIX
printf("GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATIX %d\n", 0x6096);
#endif
#ifdef GL_ATI_pn_triangles
printf("GL_ATI_pn_triangles %d\n", 1);
#endif
#ifdef GL_COMPRESSED_TEXTURE_FORMATS_ARB
printf("GL_COMPRESSED_TEXTURE_FORMATS_ARB %d\n", 0x86A3);
#endif
#ifdef GL_PIXEL_COUNT_NV
printf("GL_PIXEL_COUNT_NV %d\n", 0x8866);
#endif
#ifdef GL_COMPRESSED_INTENSITY_ARB
printf("GL_COMPRESSED_INTENSITY_ARB %d\n", 0x84EC);
#endif
#ifdef GL_TEXTURE_PRE_SPECULAR_HP
printf("GL_TEXTURE_PRE_SPECULAR_HP %d\n", 0x8169);
#endif
#ifdef glRequestResidentProgramsNV
#endif
#ifdef GL_COMBINER_SCALE_NV
printf("GL_COMBINER_SCALE_NV %d\n", 0x8548);
#endif
#ifdef GL_PALETTE8_R5_G6_B5_OES
printf("GL_PALETTE8_R5_G6_B5_OES %d\n", 0x8B97);
#endif
#ifdef GL_SELECTION_BUFFER_POINTER
printf("GL_SELECTION_BUFFER_POINTER %d\n", 0x0DF3);
#endif
#ifdef glVertexAttrib3fvNV
#endif
#ifdef glSpriteParameterfSGIX
#endif
#ifdef GL_MAX_CLIPMAP_DEPTH_SGIX
printf("GL_MAX_CLIPMAP_DEPTH_SGIX %d\n", 0x8177);
#endif
#ifdef GL_LIGHT_ENV_MODE_SGIX
printf("GL_LIGHT_ENV_MODE_SGIX %d\n", 0x8407);
#endif
#ifdef GL_STATIC_ATI
printf("GL_STATIC_ATI %d\n", 0x8760);
#endif
#ifdef GLUT_LAYER_IN_USE
printf("GLUT_LAYER_IN_USE %d\n", 801);
#endif
#ifdef GL_FLOAT_MAT4x3
printf("GL_FLOAT_MAT4x3 %d\n", 0x8B6A);
#endif
#ifdef GL_COLOR_TABLE
printf("GL_COLOR_TABLE %d\n", 0x80D0);
#endif
#ifdef GLU_END
printf("GLU_END %d\n", 100102);
#endif
#ifdef GL_STORAGE_CLIENT_APPLE
printf("GL_STORAGE_CLIENT_APPLE %d\n", 0x85B4);
#endif
#ifdef GL_POINT_SPRITE_COORD_ORIGIN
printf("GL_POINT_SPRITE_COORD_ORIGIN %d\n", 0x8CA0);
#endif
#ifdef GL_SECONDARY_INTERPOLATOR_ATI
printf("GL_SECONDARY_INTERPOLATOR_ATI %d\n", 0x896D);
#endif
#ifdef GLEE_NV_vertex_program2_option
#endif
#ifdef GL_LUMINANCE12
printf("GL_LUMINANCE12 %d\n", 0x8041);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT %d\n", 0x8CDA);
#endif
#ifdef __DBL_HAS_INFINITY__
printf("__DBL_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef GL_PROGRAM_INSTRUCTIONS_ARB
printf("GL_PROGRAM_INSTRUCTIONS_ARB %d\n", 0x88A0);
#endif
#ifdef GL_FOG_START
printf("GL_FOG_START %d\n", 0x0B63);
#endif
#ifdef GL_CON_4_ATI
printf("GL_CON_4_ATI %d\n", 0x8945);
#endif
#ifdef __GLEE_GL_REND_screen_coordinates
printf("__GLEE_GL_REND_screen_coordinates %d\n", 1);
#endif
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA
printf("GL_ONE_MINUS_CONSTANT_ALPHA %d\n", 0x8004);
#endif
#ifdef GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB
printf("GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889E);
#endif
#ifdef GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
printf("GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB %d\n", 0x8809);
#endif
#ifdef GLU_NURBS_ERROR
printf("GLU_NURBS_ERROR %d\n", 100103);
#endif
#ifdef glReplacementCodeuiColor4ubVertex3fvSUN
#endif
#ifdef GL_CLIP_PLANE0
printf("GL_CLIP_PLANE0 %d\n", 0x3000);
#endif
#ifdef GL_TEXTURE_LUMINANCE_TYPE_ARB
printf("GL_TEXTURE_LUMINANCE_TYPE_ARB %d\n", 0x8C14);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB13_4_NV
printf("GL_MAP2_VERTEX_ATTRIB13_4_NV %d\n", 0x867D);
#endif
#ifdef GL_SRC5_ALPHA
printf("GL_SRC5_ALPHA %d\n", 0x858D);
#endif
#ifdef GL_TRANSPOSE_NV
printf("GL_TRANSPOSE_NV %d\n", 0x862C);
#endif
#ifdef GL_INT_VEC3_ARB
printf("GL_INT_VEC3_ARB %d\n", 0x8B54);
#endif
#ifdef GLU_OBJECT_PARAMETRIC_ERROR
printf("GLU_OBJECT_PARAMETRIC_ERROR %d\n", 100208);
#endif
#ifdef GLEE_NV_register_combiners
#endif
#ifdef GL_VERTEX4_BIT_PGI
printf("GL_VERTEX4_BIT_PGI %d\n", 0x00000008);
#endif
#ifdef GL_MULTISAMPLE
printf("GL_MULTISAMPLE %d\n", 0x809D);
#endif
#ifdef GL_OBJECT_POINT_SGIS
printf("GL_OBJECT_POINT_SGIS %d\n", 0x81F5);
#endif
#ifdef glWindowPos2sMESA
#endif
#ifdef GLUT_NO_RECOVERY
printf("GLUT_NO_RECOVERY %d\n", 1024);
#endif
#ifdef GL_EVAL_BIT
printf("GL_EVAL_BIT %d\n", 0x00010000);
#endif
#ifdef GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT
printf("GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT %d\n", 0x87C5);
#endif
#ifdef GL_GLOBAL_ALPHA_SUN
printf("GL_GLOBAL_ALPHA_SUN %d\n", 0x81D9);
#endif
#ifdef GL_CONVOLUTION_1D
printf("GL_CONVOLUTION_1D %d\n", 0x8010);
#endif
#ifdef GLU_NURBS_ERROR22
printf("GLU_NURBS_ERROR22 %d\n", 100272);
#endif
#ifdef GL_GENERATE_MIPMAP_HINT_SGIS
printf("GL_GENERATE_MIPMAP_HINT_SGIS %d\n", 0x8192);
#endif
#ifdef GL_POST_CONVOLUTION_ALPHA_SCALE_EXT
printf("GL_POST_CONVOLUTION_ALPHA_SCALE_EXT %d\n", 0x801F);
#endif
#ifdef glFragmentLightModelivSGIX
#endif
#ifdef GL_COLOR_TABLE_BIAS_SGI
printf("GL_COLOR_TABLE_BIAS_SGI %d\n", 0x80D7);
#endif
#ifdef GL_COMPRESSED_SLUMINANCE_ALPHA_EXT
printf("GL_COMPRESSED_SLUMINANCE_ALPHA_EXT %d\n", 0x8C4B);
#endif
#ifdef GL_SOURCE7_RGB_ARB
printf("GL_SOURCE7_RGB_ARB %d\n", 0x8587);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB %d\n", 0x8624);
#endif
#ifdef GL_BGR_EXT
printf("GL_BGR_EXT %d\n", 0x80E0);
#endif
#ifdef __GLEE_GL_SGIX_texture_scale_bias
printf("__GLEE_GL_SGIX_texture_scale_bias %d\n", 1);
#endif
#ifdef __GLEE_GL_SUN_global_alpha
printf("__GLEE_GL_SUN_global_alpha %d\n", 1);
#endif
#ifdef glFlushVertexArrayRangeNV
#endif
#ifdef __GLEE_GL_OES_compressed_paletted_texture
printf("__GLEE_GL_OES_compressed_paletted_texture %d\n", 1);
#endif
#ifdef glVertexAttrib4svNV
#endif
#ifdef GL_POLYGON_STIPPLE
printf("GL_POLYGON_STIPPLE %d\n", 0x0B42);
#endif
#ifdef GLEE_EXT_texture_env_add
#endif
#ifdef GLUT_WINDOW_WIDTH
printf("GLUT_WINDOW_WIDTH %d\n", 102);
#endif
#ifdef GL_MINMAX
printf("GL_MINMAX %d\n", 0x802E);
#endif
#ifdef GL_ATI_fragment_shader
printf("GL_ATI_fragment_shader %d\n", 1);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_LENGTH_NV
printf("GL_VERTEX_ARRAY_RANGE_LENGTH_NV %d\n", 0x851E);
#endif
#ifdef GL_DUAL_ALPHA12_SGIS
printf("GL_DUAL_ALPHA12_SGIS %d\n", 0x8112);
#endif
#ifdef GL_SAMPLER_1D
printf("GL_SAMPLER_1D %d\n", 0x8B5D);
#endif
#ifdef GL_IDENTITY_NV
printf("GL_IDENTITY_NV %d\n", 0x862A);
#endif
#ifdef GL_TEXTURE_HEIGHT
printf("GL_TEXTURE_HEIGHT %d\n", 0x1001);
#endif
#ifdef GL_LIGHT_MODEL_COLOR_CONTROL
printf("GL_LIGHT_MODEL_COLOR_CONTROL %d\n", 0x81F8);
#endif
#ifdef __GLEE_GL_SGIX_tag_sample_buffer
printf("__GLEE_GL_SGIX_tag_sample_buffer %d\n", 1);
#endif
#ifdef GL_PIXEL_MAP_I_TO_I
printf("GL_PIXEL_MAP_I_TO_I %d\n", 0x0C70);
#endif
#ifdef GL_IUI_V3F_EXT
printf("GL_IUI_V3F_EXT %d\n", 0x81AE);
#endif
#ifdef GL_TEXTURE_COMPARE_MODE
printf("GL_TEXTURE_COMPARE_MODE %d\n", 0x884C);
#endif
#ifdef GL_BLEND_SRC_RGB_EXT
printf("GL_BLEND_SRC_RGB_EXT %d\n", 0x80C9);
#endif
#ifdef GL_CONVOLUTION_BORDER_MODE
printf("GL_CONVOLUTION_BORDER_MODE %d\n", 0x8013);
#endif
#ifdef GLU_NURBS_NORMAL
printf("GLU_NURBS_NORMAL %d\n", 100166);
#endif
#ifdef GLU_NURBS_VERTEX_EXT
printf("GLU_NURBS_VERTEX_EXT %d\n", 100165);
#endif
#ifdef GL_ARB_multitexture
printf("GL_ARB_multitexture %d\n", 1);
#endif
#ifdef GL_RED_MAX_CLAMP_INGR
printf("GL_RED_MAX_CLAMP_INGR %d\n", 0x8564);
#endif
#ifdef glGetHistogramParameterfvEXT
#endif
#ifdef GL_APPLE_flush_buffer_range
printf("GL_APPLE_flush_buffer_range %d\n", 1);
#endif
#ifdef GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATIX
printf("GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATIX %d\n", 0x6091);
#endif
#ifdef GL_MAX_TEXTURE_COORDS_NV
printf("GL_MAX_TEXTURE_COORDS_NV %d\n", 0x8871);
#endif
#ifdef GL_GEOMETRY_DEFORMATION_BIT_SGIX
printf("GL_GEOMETRY_DEFORMATION_BIT_SGIX %d\n", 0x00000002);
#endif
#ifdef GL_FLOAT_MAT3x4
printf("GL_FLOAT_MAT3x4 %d\n", 0x8B68);
#endif
#ifdef GL_VERTEX_ARRAY_BINDING_APPLE
printf("GL_VERTEX_ARRAY_BINDING_APPLE %d\n", 0x85B5);
#endif
#ifdef GLUT_CURSOR_TOP_LEFT_CORNER
printf("GLUT_CURSOR_TOP_LEFT_CORNER %d\n", 16);
#endif
#ifdef glDrawMeshArraysSUN
#endif
#ifdef GL_INT_VEC4
printf("GL_INT_VEC4 %d\n", 0x8B55);
#endif
#ifdef GL_PIXEL_MAP_I_TO_B
printf("GL_PIXEL_MAP_I_TO_B %d\n", 0x0C74);
#endif
#ifdef GL_ALPHA4
printf("GL_ALPHA4 %d\n", 0x803B);
#endif
#ifdef GL_DRAW_BUFFER14
printf("GL_DRAW_BUFFER14 %d\n", 0x8833);
#endif
#ifdef GLEE_EXT_stencil_wrap
#endif
#ifdef GL_RGB16UI_EXT
printf("GL_RGB16UI_EXT %d\n", 0x8D77);
#endif
#ifdef GL_TRANSPOSE_PROJECTION_MATRIX
printf("GL_TRANSPOSE_PROJECTION_MATRIX %d\n", 0x84E4);
#endif
#ifdef GL_NORMAL_ARRAY_STRIDE_EXT
printf("GL_NORMAL_ARRAY_STRIDE_EXT %d\n", 0x807F);
#endif
#ifdef glTexCoordPointerListIBM
#endif
#ifdef __INTMAX_TYPE__
#endif
#ifdef GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV
printf("GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV %d\n", 0x86F2);
#endif
#ifdef GL_ZERO
printf("GL_ZERO %d\n", 0);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT %d\n", 0x8DA8);
#endif
#ifdef GL_TRANSPOSE_MODELVIEW_MATRIX_ARB
printf("GL_TRANSPOSE_MODELVIEW_MATRIX_ARB %d\n", 0x84E3);
#endif
#ifdef GL_HINT_BIT
printf("GL_HINT_BIT %d\n", 0x00008000);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB8_NV
printf("GL_EVAL_VERTEX_ATTRIB8_NV %d\n", 0x86CE);
#endif
#ifdef GL_SAMPLE_COVERAGE_VALUE_ARB
printf("GL_SAMPLE_COVERAGE_VALUE_ARB %d\n", 0x80AA);
#endif
#ifdef glTangent3bvEXT
#endif
#ifdef GLU_NURBS_BEGIN
printf("GLU_NURBS_BEGIN %d\n", 100164);
#endif
#ifdef GL_TEXTURE_GREEN_SIZE
printf("GL_TEXTURE_GREEN_SIZE %d\n", 0x805D);
#endif
#ifdef GLEE_VERSION_1_3
#endif
#ifdef glMatrixIndexPointerARB
#endif
#ifdef GL_SMOOTH_LINE_WIDTH_RANGE
printf("GL_SMOOTH_LINE_WIDTH_RANGE %d\n", 0x0B22);
#endif
#ifdef GL_TEXTURE8_ARB
printf("GL_TEXTURE8_ARB %d\n", 0x84C8);
#endif
#ifdef GL_CULL_FACE_MODE
printf("GL_CULL_FACE_MODE %d\n", 0x0B45);
#endif
#ifdef __FLT_DIG__
printf("__FLT_DIG__ %d\n", 6);
#endif
#ifdef GL_LERP_ATI
printf("GL_LERP_ATI %d\n", 0x8969);
#endif
#ifdef GL_GEOMETRY_SHADER_EXT
printf("GL_GEOMETRY_SHADER_EXT %d\n", 0x8DD9);
#endif
#ifdef GL_DRAW_BUFFER8
printf("GL_DRAW_BUFFER8 %d\n", 0x882D);
#endif
#ifdef GL_RETURN
printf("GL_RETURN %d\n", 0x0102);
#endif
#ifdef GL_INTENSITY4
printf("GL_INTENSITY4 %d\n", 0x804A);
#endif
#ifdef glFragmentColorMaterialSGIX
#endif
#ifdef GLEE_FfdMaskSGIX
#endif
#ifdef GL_OPERAND7_ALPHA_ARB
printf("GL_OPERAND7_ALPHA_ARB %d\n", 0x859F);
#endif
#ifdef GL_BGR_INTEGER_EXT
printf("GL_BGR_INTEGER_EXT %d\n", 0x8D9A);
#endif
#ifdef GL_MIN_WEIGHTED_ATI
printf("GL_MIN_WEIGHTED_ATI %d\n", 0x877D);
#endif
#ifdef GL_NORMAL_ARRAY_COUNT_EXT
printf("GL_NORMAL_ARRAY_COUNT_EXT %d\n", 0x8080);
#endif
#ifdef GL_COMBINER4_NV
printf("GL_COMBINER4_NV %d\n", 0x8554);
#endif
#ifdef glColorPointervINTEL
#endif
#ifdef glGetProgramStringNV
#endif
#ifdef GLUT_CURSOR_SPRAY
printf("GLUT_CURSOR_SPRAY %d\n", 6);
#endif
#ifdef GL_PIXEL_TILE_CACHE_INCREMENT_SGIX
printf("GL_PIXEL_TILE_CACHE_INCREMENT_SGIX %d\n", 0x813F);
#endif
#ifdef GL_4_BYTES
printf("GL_4_BYTES %d\n", 0x1409);
#endif
#ifdef __GLEE_GL_3DFX_texture_compression_FXT1
printf("__GLEE_GL_3DFX_texture_compression_FXT1 %d\n", 1);
#endif
#ifdef __CONSTANT_CFSTRINGS__
printf("__CONSTANT_CFSTRINGS__ %d\n", 1);
#endif
#ifdef GL_TEXTURE_4D_SGIS
printf("GL_TEXTURE_4D_SGIS %d\n", 0x8134);
#endif
#ifdef GLEE_WIN_specular_fog
#endif
#ifdef GL_MODELVIEW17_ARB
printf("GL_MODELVIEW17_ARB %d\n", 0x8731);
#endif
#ifdef glVertexWeighthvNV
#endif
#ifdef GL_TEXTURE_LEQUAL_R_SGIX
printf("GL_TEXTURE_LEQUAL_R_SGIX %d\n", 0x819C);
#endif
#ifdef GL_SGIS_detail_texture
printf("GL_SGIS_detail_texture %d\n", 1);
#endif
#ifdef GL_STENCIL_REF
printf("GL_STENCIL_REF %d\n", 0x0B97);
#endif
#ifdef glMultiTexCoord1hNV
#endif
#ifdef GL_CONVOLUTION_FILTER_BIAS_EXT
printf("GL_CONVOLUTION_FILTER_BIAS_EXT %d\n", 0x8015);
#endif
#ifdef GL_CONSTANT_EXT
printf("GL_CONSTANT_EXT %d\n", 0x8576);
#endif
#ifdef GL_MIRROR_CLAMP_TO_BORDER_EXT
printf("GL_MIRROR_CLAMP_TO_BORDER_EXT %d\n", 0x8912);
#endif
#ifdef GL_UNPACK_SKIP_PIXELS
printf("GL_UNPACK_SKIP_PIXELS %d\n", 0x0CF4);
#endif
#ifdef GL_UNIFORM_BUFFER_EXT
printf("GL_UNIFORM_BUFFER_EXT %d\n", 0x8DEE);
#endif
#ifdef __GLEE_GL_PGI_misc_hints
printf("__GLEE_GL_PGI_misc_hints %d\n", 1);
#endif
#ifdef GL_SAMPLER_1D_ARRAY_SHADOW_EXT
printf("GL_SAMPLER_1D_ARRAY_SHADOW_EXT %d\n", 0x8DC3);
#endif
#ifdef GL_RED_BIT_ATI
printf("GL_RED_BIT_ATI %d\n", 0x00000001);
#endif
#ifdef __GLEE_GL_SGIX_async_pixel
printf("__GLEE_GL_SGIX_async_pixel %d\n", 1);
#endif
#ifdef GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX
printf("GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX %d\n", 0x85F1);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD16_EXT
printf("GL_OUTPUT_TEXTURE_COORD16_EXT %d\n", 0x87AD);
#endif
#ifdef GL_MAP2_TANGENT_EXT
printf("GL_MAP2_TANGENT_EXT %d\n", 0x8445);
#endif
#ifdef GL_UPPER_LEFT
printf("GL_UPPER_LEFT %d\n", 0x8CA2);
#endif
#ifdef GL_STORAGE_PRIVATE_APPLE
printf("GL_STORAGE_PRIVATE_APPLE %d\n", 0x85BD);
#endif
#ifdef GL_TRANSFORM_HINT_APPLE
printf("GL_TRANSFORM_HINT_APPLE %d\n", 0x85B1);
#endif
#ifdef GL_ELEMENT_ARRAY_POINTER_APPLE
printf("GL_ELEMENT_ARRAY_POINTER_APPLE %d\n", 0x8A0E);
#endif
#ifdef GL_EVAL_2D_NV
printf("GL_EVAL_2D_NV %d\n", 0x86C0);
#endif
#ifdef GL_RGBA4_EXT
printf("GL_RGBA4_EXT %d\n", 0x8056);
#endif
#ifdef glVertexAttrib2hvNV
#endif
#ifdef GLUT_OWNS_JOYSTICK
printf("GLUT_OWNS_JOYSTICK %d\n", 613);
#endif
#ifdef GL_SIGNED_RGB_NV
printf("GL_SIGNED_RGB_NV %d\n", 0x86FE);
#endif
#ifdef GL_VERTEX_DATA_HINT_PGI
printf("GL_VERTEX_DATA_HINT_PGI %d\n", 0x1A22A);
#endif
#ifdef glGlobalAlphaFactorubSUN
#endif
#ifdef GLUT_SCREEN_HEIGHT_MM
printf("GLUT_SCREEN_HEIGHT_MM %d\n", 203);
#endif
#ifdef GL_MAP1_TEXTURE_COORD_4
printf("GL_MAP1_TEXTURE_COORD_4 %d\n", 0x0D96);
#endif
#ifdef glGetSharpenTexFuncSGIS
#endif
#ifdef GL_SGIX_blend_alpha_minmax
printf("GL_SGIX_blend_alpha_minmax %d\n", 1);
#endif
#ifdef GL_ATI_pixel_format_float
printf("GL_ATI_pixel_format_float %d\n", 1);
#endif
#ifdef glStartInstrumentsSGIX
#endif
#ifdef GL_EXTENSIONS
printf("GL_EXTENSIONS %d\n", 0x1F03);
#endif
#ifdef GL_S3_s3tc
printf("GL_S3_s3tc %d\n", 1);
#endif
#ifdef GL_W_EXT
printf("GL_W_EXT %d\n", 0x87D8);
#endif
#ifdef glProgramNamedParameter4fvNV
#endif
#ifdef GL_RGB_SIGNED_SGIX
printf("GL_RGB_SIGNED_SGIX %d\n", 0x85E0);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB8_4_NV
printf("GL_MAP2_VERTEX_ATTRIB8_4_NV %d\n", 0x8678);
#endif
#ifdef GL_S
printf("GL_S %d\n", 0x2000);
#endif
#ifdef GL_TEXTURE16
printf("GL_TEXTURE16 %d\n", 0x84D0);
#endif
#ifdef GL_BUFFER_SIZE
printf("GL_BUFFER_SIZE %d\n", 0x8764);
#endif
#ifdef glWindowPos2fvMESA
#endif
#ifdef GL_MODELVIEW1_STACK_DEPTH_EXT
printf("GL_MODELVIEW1_STACK_DEPTH_EXT %d\n", 0x8502);
#endif
#ifdef GLU_MAP1_TRIM_2
printf("GLU_MAP1_TRIM_2 %d\n", 100210);
#endif
#ifdef glPixelTexGenParameterfvSGIS
#endif
#ifdef GL_VERTEX_SHADER_INSTRUCTIONS_EXT
printf("GL_VERTEX_SHADER_INSTRUCTIONS_EXT %d\n", 0x87CF);
#endif
#ifdef GL_TRANSPOSE_COLOR_MATRIX
printf("GL_TRANSPOSE_COLOR_MATRIX %d\n", 0x84E6);
#endif
#ifdef GL_INTENSITY32UI_EXT
printf("GL_INTENSITY32UI_EXT %d\n", 0x8D73);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB11_NV
printf("GL_EVAL_VERTEX_ATTRIB11_NV %d\n", 0x86D1);
#endif
#ifdef GL_INDEX_ARRAY_TYPE
printf("GL_INDEX_ARRAY_TYPE %d\n", 0x8085);
#endif
#ifdef GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI
printf("GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI %d\n", 0x8802);
#endif
#ifdef GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX
printf("GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX %d\n", 0x8174);
#endif
#ifdef glFragmentLightModeliEXT
#endif
#ifdef GL_MAP1_TANGENT_EXT
printf("GL_MAP1_TANGENT_EXT %d\n", 0x8444);
#endif
#ifdef GL_SAMPLER_2D_RECT_ARB
printf("GL_SAMPLER_2D_RECT_ARB %d\n", 0x8B63);
#endif
#ifdef __GLEE_GL_SGIX_calligraphic_fragment
printf("__GLEE_GL_SGIX_calligraphic_fragment %d\n", 1);
#endif
#ifdef GL_CONVOLUTION_FORMAT
printf("GL_CONVOLUTION_FORMAT %d\n", 0x8017);
#endif
#ifdef glSharpenTexFuncSGIS
#endif
#ifdef GL_REPLACE_MIDDLE_SUN
printf("GL_REPLACE_MIDDLE_SUN %d\n", 0x0002);
#endif
#ifdef GL_COLOR_TABLE_WIDTH_SGI
printf("GL_COLOR_TABLE_WIDTH_SGI %d\n", 0x80D9);
#endif
#ifdef GL_OP_INDEX_EXT
printf("GL_OP_INDEX_EXT %d\n", 0x8782);
#endif
#ifdef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB
printf("GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB %d\n", 0x8B4D);
#endif
#ifdef GL_SGIX_fog_scale
printf("GL_SGIX_fog_scale %d\n", 1);
#endif
#ifdef GL_TEXTURE_UNSIGNED_REMAP_MODE_NV
printf("GL_TEXTURE_UNSIGNED_REMAP_MODE_NV %d\n", 0x888F);
#endif
#ifdef glVertexStream3dvATI
#endif
#ifdef glDrawBuffersATI
#endif
#ifdef GL_CULL_VERTEX_OBJECT_POSITION_EXT
printf("GL_CULL_VERTEX_OBJECT_POSITION_EXT %d\n", 0x81AC);
#endif
#ifdef glVertexStream2dvATI
#endif
#ifdef GLEE_EXT_copy_texture
#endif
#ifdef GLEE_EXT_texture3D
#endif
#ifdef GL_FEEDBACK_BUFFER_POINTER
printf("GL_FEEDBACK_BUFFER_POINTER %d\n", 0x0DF0);
#endif
#ifdef GL_OPERAND3_RGB_NV
printf("GL_OPERAND3_RGB_NV %d\n", 0x8593);
#endif
#ifdef GLEE_OES_read_format
#endif
#ifdef GL_TEXTURE14
printf("GL_TEXTURE14 %d\n", 0x84CE);
#endif
#ifdef GL_TEXCOORD3_BIT_PGI
printf("GL_TEXCOORD3_BIT_PGI %d\n", 0x40000000);
#endif
#ifdef GL_COLOR_ARRAY_POINTER_EXT
printf("GL_COLOR_ARRAY_POINTER_EXT %d\n", 0x8090);
#endif
#ifdef GL_ENV_COPY_EXT
printf("GL_ENV_COPY_EXT %d\n", 0);
#endif
#ifdef GL_IBM_multimode_draw_arrays
printf("GL_IBM_multimode_draw_arrays %d\n", 1);
#endif
#ifdef GL_CURRENT_RASTER_DISTANCE
printf("GL_CURRENT_RASTER_DISTANCE %d\n", 0x0B09);
#endif
#ifdef glPixelTransformParameterivEXT
#endif
#ifdef GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX
printf("GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX %d\n", 0x8175);
#endif
#ifdef GL_LUMINANCE6_ALPHA2_EXT
printf("GL_LUMINANCE6_ALPHA2_EXT %d\n", 0x8044);
#endif
#ifdef GLEE_SGIS_texture_filter4
#endif
#ifdef GL_MATRIX27_ARB
printf("GL_MATRIX27_ARB %d\n", 0x88DB);
#endif
#ifdef GL_LUMINANCE_ALPHA_SIGNED_SGIX
printf("GL_LUMINANCE_ALPHA_SIGNED_SGIX %d\n", 0x85E5);
#endif
#ifdef GL_MODELVIEW1_EXT
printf("GL_MODELVIEW1_EXT %d\n", 0x850A);
#endif
#ifdef GL_COLOR_TABLE_LUMINANCE_SIZE
printf("GL_COLOR_TABLE_LUMINANCE_SIZE %d\n", 0x80DE);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT %d\n", 0x8CD0);
#endif
#ifdef GL_MAX_GENERAL_COMBINERS_NV
printf("GL_MAX_GENERAL_COMBINERS_NV %d\n", 0x854D);
#endif
#ifdef GL_LINE_RESET_TOKEN
printf("GL_LINE_RESET_TOKEN %d\n", 0x0707);
#endif
#ifdef GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV
printf("GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV %d\n", 0x8852);
#endif
#ifdef glPixelTransformParameteriEXT
#endif
#ifdef glGetDetailTexFuncSGIS
#endif
#ifdef GL_COLOR_INDEX2_EXT
printf("GL_COLOR_INDEX2_EXT %d\n", 0x80E3);
#endif
#ifdef GLEE_EXTERN
#endif
#ifdef __GLEE_GL_SGIS_multisample
printf("__GLEE_GL_SGIS_multisample %d\n", 1);
#endif
#ifdef GL_SGIX_clipmap
printf("GL_SGIX_clipmap %d\n", 1);
#endif
#ifdef GLUT_LEFT_BUTTON
printf("GLUT_LEFT_BUTTON %d\n", 0);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY13_NV
printf("GL_VERTEX_ATTRIB_ARRAY13_NV %d\n", 0x865D);
#endif
#ifdef GL_FRAGMENT_LIGHT7_SGIX
printf("GL_FRAGMENT_LIGHT7_SGIX %d\n", 0x8413);
#endif
#ifdef GL_INTENSITY32I_EXT
printf("GL_INTENSITY32I_EXT %d\n", 0x8D85);
#endif
#ifdef GL_HALF_BIAS_NEGATE_NV
printf("GL_HALF_BIAS_NEGATE_NV %d\n", 0x853B);
#endif
#ifdef GLU_TESS_VERTEX_DATA
printf("GLU_TESS_VERTEX_DATA %d\n", 100107);
#endif
#ifdef __GLEE_GL_SGIX_ycrcba
printf("__GLEE_GL_SGIX_ycrcba %d\n", 1);
#endif
#ifdef __FLT_MIN_EXP__
#endif
#ifdef glColorTableParameterfvSGI
#endif
#ifdef GL_STATIC_VERTEX_ARRAY_IBM
printf("GL_STATIC_VERTEX_ARRAY_IBM %d\n", 103061);
#endif
#ifdef glTexCoord4hvNV
#endif
#ifdef GL_SIGNED_NEGATE_NV
printf("GL_SIGNED_NEGATE_NV %d\n", 0x853D);
#endif
#ifdef GL_INT_SAMPLER_3D_EXT
printf("GL_INT_SAMPLER_3D_EXT %d\n", 0x8DCB);
#endif
#ifdef GL_POST_CONVOLUTION_BLUE_SCALE_EXT
printf("GL_POST_CONVOLUTION_BLUE_SCALE_EXT %d\n", 0x801E);
#endif
#ifdef GL_LINEAR_MIPMAP_LINEAR
printf("GL_LINEAR_MIPMAP_LINEAR %d\n", 0x2703);
#endif
#ifdef GL_TEXTURE9_ARB
printf("GL_TEXTURE9_ARB %d\n", 0x84C9);
#endif
#ifdef GL_RESAMPLE_ZERO_FILL_OML
printf("GL_RESAMPLE_ZERO_FILL_OML %d\n", 0x8987);
#endif
#ifdef GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT
printf("GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT %d\n", 0x84F8);
#endif
#ifdef GL_SCISSOR_TEST
printf("GL_SCISSOR_TEST %d\n", 0x0C11);
#endif
#ifdef GL_PROGRAM_FORMAT_ASCII_ARB
printf("GL_PROGRAM_FORMAT_ASCII_ARB %d\n", 0x8875);
#endif
#ifdef GL_SOURCE2_ALPHA_ARB
printf("GL_SOURCE2_ALPHA_ARB %d\n", 0x858A);
#endif
#ifdef GL_COLOR_TABLE_GREEN_SIZE
printf("GL_COLOR_TABLE_GREEN_SIZE %d\n", 0x80DB);
#endif
#ifdef glGetMapParameterfvNV
#endif
#ifdef GL_INTENSITY16_EXTENDED_RANGE_SGIX
printf("GL_INTENSITY16_EXTENDED_RANGE_SGIX %d\n", 0x85F6);
#endif
#ifdef glMultiTexCoord3hvNV
#endif
#ifdef GL_MAP_ATTRIB_U_ORDER_NV
printf("GL_MAP_ATTRIB_U_ORDER_NV %d\n", 0x86C3);
#endif
#ifdef GL_DRAW_BUFFER15
printf("GL_DRAW_BUFFER15 %d\n", 0x8834);
#endif
#ifdef glTexCoord4fColor4fNormal3fVertex4fSUN
#endif
#ifdef GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT
printf("GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT %d\n", 0x8510);
#endif
#ifdef GL_FLOAT_CLEAR_COLOR_VALUE_NV
printf("GL_FLOAT_CLEAR_COLOR_VALUE_NV %d\n", 0x888D);
#endif
#ifdef GL_IMAGE_MAG_FILTER_HP
printf("GL_IMAGE_MAG_FILTER_HP %d\n", 0x815C);
#endif
#ifdef GLEE_EXT_texture_mirror_clamp
#endif
#ifdef GL_COMBINER2_NV
printf("GL_COMBINER2_NV %d\n", 0x8552);
#endif
#ifdef GL_QUERY_RESULT_AVAILABLE_ARB
printf("GL_QUERY_RESULT_AVAILABLE_ARB %d\n", 0x8867);
#endif
#ifdef __GLEE_GL_EXT_polygon_offset
printf("__GLEE_GL_EXT_polygon_offset %d\n", 1);
#endif
#ifdef GL_HALF_BIT_ATI
printf("GL_HALF_BIT_ATI %d\n", 0x00000008);
#endif
#ifdef GL_ARB_texture_env_combine
printf("GL_ARB_texture_env_combine %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER13_ATI
printf("GL_DRAW_BUFFER13_ATI %d\n", 0x8832);
#endif
#ifdef GL_PROGRAM_ERROR_POSITION_NV
printf("GL_PROGRAM_ERROR_POSITION_NV %d\n", 0x864B);
#endif
#ifdef GL_UNSIGNED_INT_10_10_10_2
printf("GL_UNSIGNED_INT_10_10_10_2 %d\n", 0x8036);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB15_NV
printf("GL_EVAL_VERTEX_ATTRIB15_NV %d\n", 0x86D5);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB5_4_NV
printf("GL_MAP1_VERTEX_ATTRIB5_4_NV %d\n", 0x8665);
#endif
#ifdef GL_GEOMETRY_VERTICES_OUT_EXT
printf("GL_GEOMETRY_VERTICES_OUT_EXT %d\n", 0x8DDA);
#endif
#ifdef GL_EXT_gpu_shader4
printf("GL_EXT_gpu_shader4 %d\n", 1);
#endif
#ifdef GL_MATRIX7_ARB
printf("GL_MATRIX7_ARB %d\n", 0x88C7);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_LIST_IBM
printf("GL_TEXTURE_COORD_ARRAY_LIST_IBM %d\n", 103074);
#endif
#ifdef GL_DECR_WRAP_EXT
printf("GL_DECR_WRAP_EXT %d\n", 0x8508);
#endif
#ifdef glWindowPos3sMESA
#endif
#ifdef GLUT_NUM_BUTTON_BOX_BUTTONS
printf("GLUT_NUM_BUTTON_BOX_BUTTONS %d\n", 607);
#endif
#ifdef GL_MAX_FOG_FUNC_POINTS_SGIS
printf("GL_MAX_FOG_FUNC_POINTS_SGIS %d\n", 0x812C);
#endif
#ifdef GL_SCALAR_EXT
printf("GL_SCALAR_EXT %d\n", 0x87BE);
#endif
#ifdef GLUT_CURSOR_TEXT
printf("GLUT_CURSOR_TEXT %d\n", 8);
#endif
#ifdef GL_ONE_EXT
printf("GL_ONE_EXT %d\n", 0x87DE);
#endif
#ifdef GLEE_ARB_shadow_ambient
#endif
#ifdef GL_OPERAND0_RGB_EXT
printf("GL_OPERAND0_RGB_EXT %d\n", 0x8590);
#endif
#ifdef GL_SAMPLES_ARB
printf("GL_SAMPLES_ARB %d\n", 0x80A9);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD2_EXT
printf("GL_OUTPUT_TEXTURE_COORD2_EXT %d\n", 0x879F);
#endif
#ifdef GLUT_VIDEO_RESIZE_IN_USE
printf("GLUT_VIDEO_RESIZE_IN_USE %d\n", 901);
#endif
#ifdef GL_DRAW_BUFFER1
printf("GL_DRAW_BUFFER1 %d\n", 0x8826);
#endif
#ifdef GL_DEPTH_COMPONENT24
printf("GL_DEPTH_COMPONENT24 %d\n", 0x81A6);
#endif
#ifdef GL_C3F_V3F
printf("GL_C3F_V3F %d\n", 0x2A24);
#endif
#ifdef GL_MODELVIEW27_ARB
printf("GL_MODELVIEW27_ARB %d\n", 0x873B);
#endif
#ifdef GL_3D
printf("GL_3D %d\n", 0x0601);
#endif
#ifdef GL_LIGHT0
printf("GL_LIGHT0 %d\n", 0x4000);
#endif
#ifdef GL_TEXTURE_WRAP_T
printf("GL_TEXTURE_WRAP_T %d\n", 0x2803);
#endif
#ifdef GL_R1UI_C4F_N3F_V3F_SUN
printf("GL_R1UI_C4F_N3F_V3F_SUN %d\n", 0x85C8);
#endif
#ifdef GL_TRIANGLE_STRIP_ADJACENCY_EXT
printf("GL_TRIANGLE_STRIP_ADJACENCY_EXT %d\n", 0xD);
#endif
#ifdef GL_TEXTURE28_ARB
printf("GL_TEXTURE28_ARB %d\n", 0x84DC);
#endif
#ifdef GL_DEPTH_BOUNDS_EXT
printf("GL_DEPTH_BOUNDS_EXT %d\n", 0x8891);
#endif
#ifdef GL_FEEDBACK
printf("GL_FEEDBACK %d\n", 0x1C01);
#endif
#ifdef glColorFragmentOp2ATI
#endif
#ifdef glImageTransformParameteriHP
#endif
#ifdef GL_OPERAND3_ALPHA_NV
printf("GL_OPERAND3_ALPHA_NV %d\n", 0x859B);
#endif
#ifdef GL_LIGHT_MODEL_AMBIENT
printf("GL_LIGHT_MODEL_AMBIENT %d\n", 0x0B53);
#endif
#ifdef GL_TEXTURE_ALPHA_TYPE_ARB
printf("GL_TEXTURE_ALPHA_TYPE_ARB %d\n", 0x8C13);
#endif
#ifdef GL_PIXEL_PACK_BUFFER_BINDING_EXT
printf("GL_PIXEL_PACK_BUFFER_BINDING_EXT %d\n", 0x88ED);
#endif
#ifdef GL_FUNC_SUBTRACT_EXT
printf("GL_FUNC_SUBTRACT_EXT %d\n", 0x800A);
#endif
#ifdef GL_INTENSITY16_SIGNED_SGIX
printf("GL_INTENSITY16_SIGNED_SGIX %d\n", 0x85EA);
#endif
#ifdef GL_PROXY_TEXTURE_RECTANGLE_NV
printf("GL_PROXY_TEXTURE_RECTANGLE_NV %d\n", 0x84F7);
#endif
#ifdef GLUT_INIT_DISPLAY_MODE
printf("GLUT_INIT_DISPLAY_MODE %d\n", 504);
#endif
#ifdef GL_FLOAT_RGBA16_NV
printf("GL_FLOAT_RGBA16_NV %d\n", 0x888A);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_POINTER_EXT
printf("GL_FOG_COORDINATE_ARRAY_POINTER_EXT %d\n", 0x8456);
#endif
#ifdef GL_RGB16F_ARB
printf("GL_RGB16F_ARB %d\n", 0x881B);
#endif
#ifdef GL_SOURCE2_RGB_ARB
printf("GL_SOURCE2_RGB_ARB %d\n", 0x8582);
#endif
#ifdef glWindowPos3svMESA
#endif
#ifdef glGetConvolutionFilterEXT
#endif
#ifdef GLU_NURBS_TEX_COORD_DATA_EXT
printf("GLU_NURBS_TEX_COORD_DATA_EXT %d\n", 100174);
#endif
#ifdef GL_RELEASED_APPLE
printf("GL_RELEASED_APPLE %d\n", 0x8A19);
#endif
#ifdef glGlobalAlphaFactorbSUN
#endif
#ifdef glPixelTexGenParameteriSGIS
#endif
#ifdef GLEE_ATI_pn_triangles
#endif
#ifdef __WCHAR_MAX__
printf("__WCHAR_MAX__ %d\n", 2147483647);
#endif
#ifdef GL_COLOR_TABLE_RED_SIZE_SGI
printf("GL_COLOR_TABLE_RED_SIZE_SGI %d\n", 0x80DA);
#endif
#ifdef GL_NV_vertex_array_range
printf("GL_NV_vertex_array_range %d\n", 1);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD3_EXT
printf("GL_OUTPUT_TEXTURE_COORD3_EXT %d\n", 0x87A0);
#endif
#ifdef GL_VERTEX_STREAM6_ATI
printf("GL_VERTEX_STREAM6_ATI %d\n", 0x8772);
#endif
#ifdef GL_GREATER
printf("GL_GREATER %d\n", 0x0204);
#endif
#ifdef glGetHistogramEXT
#endif
#ifdef GLUT_ALPHA
printf("GLUT_ALPHA %d\n", 8);
#endif
#ifdef __GLEE_GL_SGIX_instruments
printf("__GLEE_GL_SGIX_instruments %d\n", 1);
#endif
#ifdef glConvolutionFilter1DEXT
#endif
#ifdef GLU_OUTSIDE
printf("GLU_OUTSIDE %d\n", 100020);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB6_4_NV
printf("GL_MAP1_VERTEX_ATTRIB6_4_NV %d\n", 0x8666);
#endif
#ifdef GLU_TESS_END
printf("GLU_TESS_END %d\n", 100102);
#endif
#ifdef GLEE_VERSION_2_0
#endif
#ifdef GL_SGIX_sprite
printf("GL_SGIX_sprite %d\n", 1);
#endif
#ifdef GL_RED_BIAS
printf("GL_RED_BIAS %d\n", 0x0D15);
#endif
#ifdef GL_STENCIL_PASS_DEPTH_FAIL
printf("GL_STENCIL_PASS_DEPTH_FAIL %d\n", 0x0B95);
#endif
#ifdef glInstrumentsBufferSGIX
#endif
#ifdef GL_TEXTURE19_ARB
printf("GL_TEXTURE19_ARB %d\n", 0x84D3);
#endif
#ifdef GL_EXT_vertex_shader
printf("GL_EXT_vertex_shader %d\n", 1);
#endif
#ifdef GLEE_SGIS_point_parameters
#endif
#ifdef GL_POST_CONVOLUTION_BLUE_BIAS_EXT
printf("GL_POST_CONVOLUTION_BLUE_BIAS_EXT %d\n", 0x8022);
#endif
#ifdef GLU_NURBS_ERROR12
printf("GLU_NURBS_ERROR12 %d\n", 100262);
#endif
#ifdef GLEE_EXT_shared_texture_palette
#endif
#ifdef GL_BUFFER_MAPPED_ARB
printf("GL_BUFFER_MAPPED_ARB %d\n", 0x88BC);
#endif
#ifdef GL_NEGATIVE_W_EXT
printf("GL_NEGATIVE_W_EXT %d\n", 0x87DC);
#endif
#ifdef GL_NV_texgen_reflection
printf("GL_NV_texgen_reflection %d\n", 1);
#endif
#ifdef GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT
printf("GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT %d\n", 0x8DE4);
#endif
#ifdef GL_VERTEX_ARRAY_LIST_STRIDE_IBM
printf("GL_VERTEX_ARRAY_LIST_STRIDE_IBM %d\n", 103080);
#endif
#ifdef __GLEE_GL_SGIS_texture_select
printf("__GLEE_GL_SGIS_texture_select %d\n", 1);
#endif
#ifdef GL_RENDER_MODE
printf("GL_RENDER_MODE %d\n", 0x0C40);
#endif
#ifdef GL_WEIGHT_ARRAY_STRIDE_ARB
printf("GL_WEIGHT_ARRAY_STRIDE_ARB %d\n", 0x86AA);
#endif
#ifdef GL_LOCAL_CONSTANT_DATATYPE_EXT
printf("GL_LOCAL_CONSTANT_DATATYPE_EXT %d\n", 0x87ED);
#endif
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT
printf("GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT %d\n", 0x87CA);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB
printf("GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB %d\n", 0x88A7);
#endif
#ifdef GL_MAP1_BINORMAL_EXT
printf("GL_MAP1_BINORMAL_EXT %d\n", 0x8446);
#endif
#ifdef GL_RGBA2
printf("GL_RGBA2 %d\n", 0x8055);
#endif
#ifdef GL_SGIS_texture_color_mask
printf("GL_SGIS_texture_color_mask %d\n", 1);
#endif
#ifdef GL_TEXTURE3
printf("GL_TEXTURE3 %d\n", 0x84C3);
#endif
#ifdef GL_EXT_paletted_texture
printf("GL_EXT_paletted_texture %d\n", 1);
#endif
#ifdef GL_INTERLACE_READ_OML
printf("GL_INTERLACE_READ_OML %d\n", 0x8981);
#endif
#ifdef GL_ALPHA16_EXT
printf("GL_ALPHA16_EXT %d\n", 0x803E);
#endif
#ifdef GLUT_PARTIALLY_RETAINED
printf("GLUT_PARTIALLY_RETAINED %d\n", 2);
#endif
#ifdef __GLEE_GL_SGIX_ycrcb
printf("__GLEE_GL_SGIX_ycrcb %d\n", 1);
#endif
#ifdef GL_LUMINANCE_FLOAT16_ATI
printf("GL_LUMINANCE_FLOAT16_ATI %d\n", 0x881E);
#endif
#ifdef GL_DISTANCE_ATTENUATION_SGIS
printf("GL_DISTANCE_ATTENUATION_SGIS %d\n", 0x8129);
#endif
#ifdef GLUT_WINDOW_ACCUM_GREEN_SIZE
printf("GLUT_WINDOW_ACCUM_GREEN_SIZE %d\n", 112);
#endif
#ifdef GL_TEXTURE_4D_BINDING_SGIS
printf("GL_TEXTURE_4D_BINDING_SGIS %d\n", 0x814F);
#endif
#ifdef GL_MAX_PROGRAM_ATTRIBS_ARB
printf("GL_MAX_PROGRAM_ATTRIBS_ARB %d\n", 0x88AD);
#endif
#ifdef GL_OP_NEGATE_EXT
printf("GL_OP_NEGATE_EXT %d\n", 0x8783);
#endif
#ifdef glSetFenceNV
#endif
#ifdef __GLEE_GL_SGIX_blend_alpha_minmax
printf("__GLEE_GL_SGIX_blend_alpha_minmax %d\n", 1);
#endif
#ifdef GL_REFLECTION_MAP_NV
printf("GL_REFLECTION_MAP_NV %d\n", 0x8512);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD1_EXT
printf("GL_OUTPUT_TEXTURE_COORD1_EXT %d\n", 0x879E);
#endif
#ifdef GL_RGB_FLOAT16_ATI
printf("GL_RGB_FLOAT16_ATI %d\n", 0x881B);
#endif
#ifdef GL_SAMPLES_PASSED_ARB
printf("GL_SAMPLES_PASSED_ARB %d\n", 0x8914);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_TYPE
printf("GL_VERTEX_ATTRIB_ARRAY_TYPE %d\n", 0x8625);
#endif
#ifdef GL_FILL
printf("GL_FILL %d\n", 0x1B02);
#endif
#ifdef glGenOcclusionQueriesNV
#endif
#ifdef GL_COMPRESSED_INTENSITY
printf("GL_COMPRESSED_INTENSITY %d\n", 0x84EC);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE
printf("GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE %d\n", 0x8A04);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB5_NV
printf("GL_EVAL_VERTEX_ATTRIB5_NV %d\n", 0x86CB);
#endif
#ifdef GL_INT_SAMPLER_2D_ARRAY_EXT
printf("GL_INT_SAMPLER_2D_ARRAY_EXT %d\n", 0x8DCF);
#endif
#ifdef GL_RGB4_EXT
printf("GL_RGB4_EXT %d\n", 0x804F);
#endif
#ifdef glVertexPointerEXT
#endif
#ifdef GL_MODELVIEW18_ARB
printf("GL_MODELVIEW18_ARB %d\n", 0x8732);
#endif
#ifdef GL_TEXTURE_MINIMIZE_STORAGE_APPLE
printf("GL_TEXTURE_MINIMIZE_STORAGE_APPLE %d\n", 0x85B6);
#endif
#ifdef GLUT_VISIBLE
printf("GLUT_VISIBLE %d\n", 1);
#endif
#ifdef GL_COLOR_ATTACHMENT14_EXT
printf("GL_COLOR_ATTACHMENT14_EXT %d\n", 0x8CEE);
#endif
#ifdef GL_SAMPLE_ALPHA_TO_ONE
printf("GL_SAMPLE_ALPHA_TO_ONE %d\n", 0x809F);
#endif
#ifdef GLEE_ARB_depth_texture
#endif
#ifdef GLEE_SGIX_interlace
#endif
#ifdef GL_INTERPOLATE
printf("GL_INTERPOLATE %d\n", 0x8575);
#endif
#ifdef GL_DOT3_ATI
printf("GL_DOT3_ATI %d\n", 0x8966);
#endif
#ifdef GL_FOG_MODE
printf("GL_FOG_MODE %d\n", 0x0B65);
#endif
#ifdef GL_ENV_REPLACE_EXT
printf("GL_ENV_REPLACE_EXT %d\n", 0);
#endif
#ifdef GL_MAP2_BINORMAL_EXT
printf("GL_MAP2_BINORMAL_EXT %d\n", 0x8447);
#endif
#ifdef GL_FORMAT_SUBSAMPLE_24_24_OML
printf("GL_FORMAT_SUBSAMPLE_24_24_OML %d\n", 0x8982);
#endif
#ifdef GLU_NURBS_ERROR29
printf("GLU_NURBS_ERROR29 %d\n", 100279);
#endif
#ifdef __FINITE_MATH_ONLY__
printf("__FINITE_MATH_ONLY__ %d\n", 0);
#endif
#ifdef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT
printf("GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT %d\n", 0x8C8B);
#endif
#ifdef glBinormal3svEXT
#endif
#ifdef GL_SOURCE1_ALPHA_ARB
printf("GL_SOURCE1_ALPHA_ARB %d\n", 0x8589);
#endif
#ifdef GL_TEXTURE_RED_SIZE_EXT
printf("GL_TEXTURE_RED_SIZE_EXT %d\n", 0x805C);
#endif
#ifdef GL_MAP1_NORMAL
printf("GL_MAP1_NORMAL %d\n", 0x0D92);
#endif
#ifdef GL_AUX3
printf("GL_AUX3 %d\n", 0x040C);
#endif
#ifdef GLUT_CURSOR_RIGHT_ARROW
printf("GLUT_CURSOR_RIGHT_ARROW %d\n", 0);
#endif
#ifdef GLU_TESS_WINDING_RULE
printf("GLU_TESS_WINDING_RULE %d\n", 100140);
#endif
#ifdef GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI
printf("GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI %d\n", 0x8835);
#endif
#ifdef GL_FRAGMENT_PROGRAM_ARB
printf("GL_FRAGMENT_PROGRAM_ARB %d\n", 0x8804);
#endif
#ifdef GL_CURRENT_MATRIX_STACK_DEPTH_ARB
printf("GL_CURRENT_MATRIX_STACK_DEPTH_ARB %d\n", 0x8640);
#endif
#ifdef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
printf("GL_COMPRESSED_RGB_S3TC_DXT1_EXT %d\n", 0x83F0);
#endif
#ifdef GLEE_IBM_rasterpos_clip
#endif
#ifdef GL_CURRENT_WEIGHT_ARB
printf("GL_CURRENT_WEIGHT_ARB %d\n", 0x86A8);
#endif
#ifdef GL_STREAM_COPY
printf("GL_STREAM_COPY %d\n", 0x88E2);
#endif
#ifdef glVertexStream1ivATI
#endif
#ifdef GL_CON_6_ATI
printf("GL_CON_6_ATI %d\n", 0x8947);
#endif
#ifdef GLUT_LUMINANCE
printf("GLUT_LUMINANCE %d\n", 512);
#endif
#ifdef GL_VARIANT_EXT
printf("GL_VARIANT_EXT %d\n", 0x87C1);
#endif
#ifdef GL_BUMP_NUM_TEX_UNITS_ATI
printf("GL_BUMP_NUM_TEX_UNITS_ATI %d\n", 0x8777);
#endif
#ifdef glNormalPointerListIBM
#endif
#ifdef GL_DEPENDENT_RGB_TEXTURE_3D_NV
printf("GL_DEPENDENT_RGB_TEXTURE_3D_NV %d\n", 0x8859);
#endif
#ifdef GL_ALPHA_FLOAT32_ATI
printf("GL_ALPHA_FLOAT32_ATI %d\n", 0x8816);
#endif
#ifdef GL_ALPHA_MIN_SGIX
printf("GL_ALPHA_MIN_SGIX %d\n", 0x8320);
#endif
#ifdef GLEE_SGIX_async_histogram
#endif
#ifdef GL_MAX_ELEMENTS_VERTICES_EXT
printf("GL_MAX_ELEMENTS_VERTICES_EXT %d\n", 0x80E8);
#endif
#ifdef GL_PROGRAM_RESIDENT_NV
printf("GL_PROGRAM_RESIDENT_NV %d\n", 0x8647);
#endif
#ifdef glClampColorARB
#endif
#ifdef GL_ACTIVE_TEXTURE_ARB
printf("GL_ACTIVE_TEXTURE_ARB %d\n", 0x84E0);
#endif
#ifdef GL_SRC0_RGB
printf("GL_SRC0_RGB %d\n", 0x8580);
#endif
#ifdef GL_ARB_transpose_matrix
printf("GL_ARB_transpose_matrix %d\n", 1);
#endif
#ifdef GL_BLEND_SRC_RGB
printf("GL_BLEND_SRC_RGB %d\n", 0x80C9);
#endif
#ifdef glIndexMaterialEXT
#endif
#ifdef GL_TEXTURE7_ARB
printf("GL_TEXTURE7_ARB %d\n", 0x84C7);
#endif
#ifdef GL_BLUE_SCALE
printf("GL_BLUE_SCALE %d\n", 0x0D1A);
#endif
#ifdef GL_DEPTH_SCALE
printf("GL_DEPTH_SCALE %d\n", 0x0D1E);
#endif
#ifdef GL_TEXTURE24
printf("GL_TEXTURE24 %d\n", 0x84D8);
#endif
#ifdef glGetTexBumpParameterivATI
#endif
#ifdef GL_RGBA16_EXTENDED_RANGE_SGIX
printf("GL_RGBA16_EXTENDED_RANGE_SGIX %d\n", 0x85F3);
#endif
#ifdef glVertexAttribs1svNV
#endif
#ifdef GLUT_WINDOW_ACCUM_BLUE_SIZE
printf("GLUT_WINDOW_ACCUM_BLUE_SIZE %d\n", 113);
#endif
#ifdef GLUT_FULLY_COVERED
printf("GLUT_FULLY_COVERED %d\n", 3);
#endif
#ifdef GL_RESAMPLE_REPLICATE_SGIX
printf("GL_RESAMPLE_REPLICATE_SGIX %d\n", 0x842E);
#endif
#ifdef GL_SGIX_texture_add_env
printf("GL_SGIX_texture_add_env %d\n", 1);
#endif
#ifdef GL_MAX_DRAW_BUFFERS_ATI
printf("GL_MAX_DRAW_BUFFERS_ATI %d\n", 0x8824);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD25_EXT
printf("GL_OUTPUT_TEXTURE_COORD25_EXT %d\n", 0x87B6);
#endif
#ifdef GL_COMBINER1_NV
printf("GL_COMBINER1_NV %d\n", 0x8551);
#endif
#ifdef glReferencePlaneSGIX
#endif
#ifdef GLEE_ARB_vertex_program
#endif
#ifdef GL_EXT_blend_color
printf("GL_EXT_blend_color %d\n", 1);
#endif
#ifdef GL_NV_texture_expand_normal
printf("GL_NV_texture_expand_normal %d\n", 1);
#endif
#ifdef GL_MULTISAMPLE_EXT
printf("GL_MULTISAMPLE_EXT %d\n", 0x809D);
#endif
#ifdef GL_RENDERBUFFER_ALPHA_SIZE_EXT
printf("GL_RENDERBUFFER_ALPHA_SIZE_EXT %d\n", 0x8D53);
#endif
#ifdef GL_TRIANGLES
printf("GL_TRIANGLES %d\n", 0x0004);
#endif
#ifdef GL_EYE_RADIAL_NV
printf("GL_EYE_RADIAL_NV %d\n", 0x855B);
#endif
#ifdef GL_MAX
printf("GL_MAX %d\n", 0x8008);
#endif
#ifdef GL_LUMINANCE12_ALPHA4_EXT
printf("GL_LUMINANCE12_ALPHA4_EXT %d\n", 0x8046);
#endif
#ifdef __GLEE_GL_SGIX_clipmap
printf("__GLEE_GL_SGIX_clipmap %d\n", 1);
#endif
#ifdef GL_POLYGON_OFFSET_POINT
printf("GL_POLYGON_OFFSET_POINT %d\n", 0x2A01);
#endif
#ifdef GL_MAP1_COLOR_4
printf("GL_MAP1_COLOR_4 %d\n", 0x0D90);
#endif
#ifdef GL_MIRROR_CLAMP_EXT
printf("GL_MIRROR_CLAMP_EXT %d\n", 0x8742);
#endif
#ifdef GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI
printf("GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI %d\n", 0x80B5);
#endif
#ifdef __GLEE_GL_IBM_vertex_array_lists
printf("__GLEE_GL_IBM_vertex_array_lists %d\n", 1);
#endif
#ifdef GLEE_NV_vertex_array_range2
#endif
#ifdef GL_MAP1_TEXTURE_COORD_1
printf("GL_MAP1_TEXTURE_COORD_1 %d\n", 0x0D93);
#endif
#ifdef glConvolutionParameterfEXT
#endif
#ifdef GL_AUX1
printf("GL_AUX1 %d\n", 0x040A);
#endif
#ifdef glNormalStream3fATI
#endif
#ifdef GLU_TESS_TOLERANCE
printf("GLU_TESS_TOLERANCE %d\n", 100142);
#endif
#ifdef GL_FORMAT_SUBSAMPLE_244_244_OML
printf("GL_FORMAT_SUBSAMPLE_244_244_OML %d\n", 0x8983);
#endif
#ifdef GL_MODELVIEW1_ARB
printf("GL_MODELVIEW1_ARB %d\n", 0x850A);
#endif
#ifdef GL_HP_image_transform
printf("GL_HP_image_transform %d\n", 1);
#endif
#ifdef GLEE_ARB_pixel_buffer_object
#endif
#ifdef GL_SGIX_depth_pass_instrument
printf("GL_SGIX_depth_pass_instrument %d\n", 1);
#endif
#ifdef GL_MINMAX_FORMAT_EXT
printf("GL_MINMAX_FORMAT_EXT %d\n", 0x802F);
#endif
#ifdef GL_EXT_texture_rectangle
printf("GL_EXT_texture_rectangle %d\n", 1);
#endif
#ifdef GLEE_WIN_phong_shading
#endif
#ifdef GL_WEIGHT_ARRAY_BUFFER_BINDING
printf("GL_WEIGHT_ARRAY_BUFFER_BINDING %d\n", 0x889E);
#endif
#ifdef __i386
printf("__i386 %d\n", 1);
#endif
#ifdef glGetVariantArrayObjectfvATI
#endif
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_ARB
printf("GL_POINT_FADE_THRESHOLD_SIZE_ARB %d\n", 0x8128);
#endif
#ifdef GL_QUAD_LUMINANCE4_SGIS
printf("GL_QUAD_LUMINANCE4_SGIS %d\n", 0x8120);
#endif
#ifdef GL_CON_12_ATI
printf("GL_CON_12_ATI %d\n", 0x894D);
#endif
#ifdef GLUT_CURSOR_BOTTOM_SIDE
printf("GLUT_CURSOR_BOTTOM_SIDE %d\n", 13);
#endif
#ifdef glGetColorTableSGI
#endif
#ifdef glGetVertexAttribdvNV
#endif
#ifdef GL_EXT_texture_compression_s3tc
printf("GL_EXT_texture_compression_s3tc %d\n", 1);
#endif
#ifdef GL_FLOAT_R16_NV
printf("GL_FLOAT_R16_NV %d\n", 0x8884);
#endif
#ifdef GL_ARRAY_BUFFER
printf("GL_ARRAY_BUFFER %d\n", 0x8892);
#endif
#ifdef GL_MUL_ATI
printf("GL_MUL_ATI %d\n", 0x8964);
#endif
#ifdef GLEE_ARB_shader_objects
#endif
#ifdef GLUT_KEY_F6
printf("GLUT_KEY_F6 %d\n", 6);
#endif
#ifdef GL_TEXTURE27_ARB
printf("GL_TEXTURE27_ARB %d\n", 0x84DB);
#endif
#ifdef GLEE_ARB_texture_float
#endif
#ifdef GL_TEXTURE_GEN_R
printf("GL_TEXTURE_GEN_R %d\n", 0x0C62);
#endif
#ifdef GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX
printf("GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX %d\n", 0x8188);
#endif
#ifdef GL_WRITE_PIXEL_DATA_RANGE_NV
printf("GL_WRITE_PIXEL_DATA_RANGE_NV %d\n", 0x8878);
#endif
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE
printf("GL_MAX_CUBE_MAP_TEXTURE_SIZE %d\n", 0x851C);
#endif
#ifdef glSeparableFilter2DEXT
#endif
#ifdef GL_NORMAL_ARRAY_BUFFER_BINDING
printf("GL_NORMAL_ARRAY_BUFFER_BINDING %d\n", 0x8897);
#endif
#ifdef GL_PIXEL_SUBSAMPLE_4242_SGIX
printf("GL_PIXEL_SUBSAMPLE_4242_SGIX %d\n", 0x85A4);
#endif
#ifdef GLUT_WINDOW_Y
printf("GLUT_WINDOW_Y %d\n", 101);
#endif
#ifdef GL_COORD_REPLACE_NV
printf("GL_COORD_REPLACE_NV %d\n", 0x8862);
#endif
#ifdef GL_BACK_LEFT
printf("GL_BACK_LEFT %d\n", 0x0402);
#endif
#ifdef glFragmentMaterialiSGIX
#endif
#ifdef GLU_INSIDE
printf("GLU_INSIDE %d\n", 100021);
#endif
#ifdef GLUT_INIT_WINDOW_WIDTH
printf("GLUT_INIT_WINDOW_WIDTH %d\n", 502);
#endif
#ifdef GL_ACCUM_BLUE_BITS
printf("GL_ACCUM_BLUE_BITS %d\n", 0x0D5A);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT
printf("GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT %d\n", 0x8C84);
#endif
#ifdef GL_RGB10_EXT
printf("GL_RGB10_EXT %d\n", 0x8052);
#endif
#ifdef GL_COLOR_TABLE_WIDTH
printf("GL_COLOR_TABLE_WIDTH %d\n", 0x80D9);
#endif
#ifdef GL_CON_7_ATI
printf("GL_CON_7_ATI %d\n", 0x8948);
#endif
#ifdef GLUT_KEY_REPEAT_DEFAULT
printf("GLUT_KEY_REPEAT_DEFAULT %d\n", 2);
#endif
#ifdef GL_GREEN
printf("GL_GREEN %d\n", 0x1904);
#endif
#ifdef GLU_TESS_ERROR3
printf("GLU_TESS_ERROR3 %d\n", 100153);
#endif
#ifdef GLUT_NUM_MOUSE_BUTTONS
printf("GLUT_NUM_MOUSE_BUTTONS %d\n", 605);
#endif
#ifdef GL_OPERAND1_RGB
printf("GL_OPERAND1_RGB %d\n", 0x8591);
#endif
#ifdef __UINTMAX_TYPE__
#endif
#ifdef GLEE_SGIS_pixel_texture
#endif
#ifdef GL_PIXEL_MAP_I_TO_B_SIZE
printf("GL_PIXEL_MAP_I_TO_B_SIZE %d\n", 0x0CB4);
#endif
#ifdef GL_TEXTURE22_ARB
printf("GL_TEXTURE22_ARB %d\n", 0x84D6);
#endif
#ifdef GL_DRAW_BUFFER8_ARB
printf("GL_DRAW_BUFFER8_ARB %d\n", 0x882D);
#endif
#ifdef GLEE_ARB_occlusion_query
#endif
#ifdef GL_MAX_TEXTURE_SIZE
printf("GL_MAX_TEXTURE_SIZE %d\n", 0x0D33);
#endif
#ifdef GLUT_STROKE_MONO_ROMAN
#endif
#ifdef GL_PIXEL_TEX_GEN_Q_ROUND_SGIX
printf("GL_PIXEL_TEX_GEN_Q_ROUND_SGIX %d\n", 0x8185);
#endif
#ifdef GL_NV_packed_depth_stencil
printf("GL_NV_packed_depth_stencil %d\n", 1);
#endif
#ifdef GL_REG_25_ATI
printf("GL_REG_25_ATI %d\n", 0x893A);
#endif
#ifdef GL_CLAMP_TO_BORDER_ARB
printf("GL_CLAMP_TO_BORDER_ARB %d\n", 0x812D);
#endif
#ifdef GL_DEPTH_BOUNDS_TEST_EXT
printf("GL_DEPTH_BOUNDS_TEST_EXT %d\n", 0x8890);
#endif
#ifdef GL_MODELVIEW4_ARB
printf("GL_MODELVIEW4_ARB %d\n", 0x8724);
#endif
#ifdef GL_OP_SUB_EXT
printf("GL_OP_SUB_EXT %d\n", 0x8796);
#endif
#ifdef GL_INTENSITY8I_EXT
printf("GL_INTENSITY8I_EXT %d\n", 0x8D91);
#endif
#ifdef GL_MAT_AMBIENT_BIT_PGI
printf("GL_MAT_AMBIENT_BIT_PGI %d\n", 0x00100000);
#endif
#ifdef GL_3D_COLOR
printf("GL_3D_COLOR %d\n", 0x0602);
#endif
#ifdef GL_IMAGE_TRANSLATE_Y_HP
printf("GL_IMAGE_TRANSLATE_Y_HP %d\n", 0x8158);
#endif
#ifdef glTestFenceNV
#endif
#ifdef GLEE_APPLE_client_storage
#endif
#ifdef GL_FRAGMENT_LIGHT1_SGIX
printf("GL_FRAGMENT_LIGHT1_SGIX %d\n", 0x840D);
#endif
#ifdef GL_MATRIX20_ARB
printf("GL_MATRIX20_ARB %d\n", 0x88D4);
#endif
#ifdef glVertexAttrib2fvNV
#endif
#ifdef GL_EXT_secondary_color
printf("GL_EXT_secondary_color %d\n", 1);
#endif
#ifdef GL_OPERAND5_RGB_ARB
printf("GL_OPERAND5_RGB_ARB %d\n", 0x8595);
#endif
#ifdef GL_INDEX_SHIFT
printf("GL_INDEX_SHIFT %d\n", 0x0D12);
#endif
#ifdef GL_DRAW_BUFFER8_ATI
printf("GL_DRAW_BUFFER8_ATI %d\n", 0x882D);
#endif
#ifdef glVertexStream2svATI
#endif
#ifdef GL_SAMPLER_BUFFER_EXT
printf("GL_SAMPLER_BUFFER_EXT %d\n", 0x8DC2);
#endif
#ifdef glFinishAsyncSGIX
#endif
#ifdef GL_ALLOW_DRAW_OBJ_HINT_PGI
printf("GL_ALLOW_DRAW_OBJ_HINT_PGI %d\n", 0x1A20E);
#endif
#ifdef GL_DUDV_ATI
printf("GL_DUDV_ATI %d\n", 0x8779);
#endif
#ifdef GL_LUMINANCE4_ALPHA4_EXT
printf("GL_LUMINANCE4_ALPHA4_EXT %d\n", 0x8043);
#endif
#ifdef GL_CURRENT_VERTEX_ATTRIB_ARB
printf("GL_CURRENT_VERTEX_ATTRIB_ARB %d\n", 0x8626);
#endif
#ifdef GLU_CW
printf("GLU_CW %d\n", 100120);
#endif
#ifdef GL_FfdMaskSGIX
printf("GL_FfdMaskSGIX %d\n", 1);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_3D_EXT
printf("GL_UNSIGNED_INT_SAMPLER_3D_EXT %d\n", 0x8DD3);
#endif
#ifdef GL_SAMPLE_BUFFERS_SGIS
printf("GL_SAMPLE_BUFFERS_SGIS %d\n", 0x80A8);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB1_4_NV
printf("GL_MAP1_VERTEX_ATTRIB1_4_NV %d\n", 0x8661);
#endif
#ifdef GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB
printf("GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB %d\n", 0x8B8A);
#endif
#ifdef GL_REG_22_ATI
printf("GL_REG_22_ATI %d\n", 0x8937);
#endif
#ifdef GLU_NURBS_ERROR31
printf("GLU_NURBS_ERROR31 %d\n", 100281);
#endif
#ifdef __GLEE_GL_NV_texture_env_combine4
printf("__GLEE_GL_NV_texture_env_combine4 %d\n", 1);
#endif
#ifdef GL_ALPHA_MAX_CLAMP_INGR
printf("GL_ALPHA_MAX_CLAMP_INGR %d\n", 0x8567);
#endif
#ifdef GL_NO_ERROR
printf("GL_NO_ERROR %d\n", 0);
#endif
#ifdef __GLEE_GL_NV_half_float
printf("__GLEE_GL_NV_half_float %d\n", 1);
#endif
#ifdef GL_BLUE_BITS
printf("GL_BLUE_BITS %d\n", 0x0D54);
#endif
#ifdef GL_COORD_REPLACE
printf("GL_COORD_REPLACE %d\n", 0x8862);
#endif
#ifdef GL_SLUMINANCE_ALPHA_EXT
printf("GL_SLUMINANCE_ALPHA_EXT %d\n", 0x8C44);
#endif
#ifdef GL_MAX_ASYNC_HISTOGRAM_SGIX
printf("GL_MAX_ASYNC_HISTOGRAM_SGIX %d\n", 0x832D);
#endif
#ifdef GL_FRAMEBUFFER_COMPLETE_EXT
printf("GL_FRAMEBUFFER_COMPLETE_EXT %d\n", 0x8CD5);
#endif
#ifdef GL_SMOOTH_POINT_SIZE_GRANULARITY
printf("GL_SMOOTH_POINT_SIZE_GRANULARITY %d\n", 0x0B13);
#endif
#ifdef GL_3DFX_texture_compression_FXT1
printf("GL_3DFX_texture_compression_FXT1 %d\n", 1);
#endif
#ifdef glGetInvariantIntegervEXT
#endif
#ifdef GL_MAP1_VERTEX_3
printf("GL_MAP1_VERTEX_3 %d\n", 0x0D97);
#endif
#ifdef GLUT_NORMAL_DAMAGED
printf("GLUT_NORMAL_DAMAGED %d\n", 804);
#endif
#ifdef glNormalStream3bvATI
#endif
#ifdef __GLEE_GL_SGIS_texture_color_mask
printf("__GLEE_GL_SGIS_texture_color_mask %d\n", 1);
#endif
#ifdef GL_BGRA_INTEGER_EXT
printf("GL_BGRA_INTEGER_EXT %d\n", 0x8D9B);
#endif
#ifdef GL_DEFORMATIONS_MASK_SGIX
printf("GL_DEFORMATIONS_MASK_SGIX %d\n", 0x8196);
#endif
#ifdef GLEE_EXT_texture
#endif
#ifdef GL_DRAW_BUFFER10_ARB
printf("GL_DRAW_BUFFER10_ARB %d\n", 0x882F);
#endif
#ifdef GL_VARIABLE_B_NV
printf("GL_VARIABLE_B_NV %d\n", 0x8524);
#endif
#ifdef glDeleteFragmentShaderATI
#endif
#ifdef GL_MATRIX_INDEX_ARRAY_ARB
printf("GL_MATRIX_INDEX_ARRAY_ARB %d\n", 0x8844);
#endif
#ifdef GL_DEPTH_TEXTURE_MODE
printf("GL_DEPTH_TEXTURE_MODE %d\n", 0x884B);
#endif
#ifdef GL_OPERAND4_ALPHA_ARB
printf("GL_OPERAND4_ALPHA_ARB %d\n", 0x859C);
#endif
#ifdef glLoadProgramNV
#endif
#ifdef GL_TEXTURE_MATRIX
printf("GL_TEXTURE_MATRIX %d\n", 0x0BA8);
#endif
#ifdef __GLEE_GL_SGIX_shadow_ambient
printf("__GLEE_GL_SGIX_shadow_ambient %d\n", 1);
#endif
#ifdef GL_LUMINANCE_ALPHA32F_ARB
printf("GL_LUMINANCE_ALPHA32F_ARB %d\n", 0x8819);
#endif
#ifdef GL_ARRAY_ELEMENT_LOCK_FIRST_EXT
printf("GL_ARRAY_ELEMENT_LOCK_FIRST_EXT %d\n", 0x81A8);
#endif
#ifdef GL_ATI_vertex_streams
printf("GL_ATI_vertex_streams %d\n", 1);
#endif
#ifdef glTexCoordPointerEXT
#endif
#ifdef GL_4PASS_3_SGIS
printf("GL_4PASS_3_SGIS %d\n", 0x80A7);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_EXT
printf("GL_TEXTURE_COORD_ARRAY_EXT %d\n", 0x8078);
#endif
#ifdef GL_NV_primitive_restart
printf("GL_NV_primitive_restart %d\n", 1);
#endif
#ifdef GL_EXT_light_texture
printf("GL_EXT_light_texture %d\n", 1);
#endif
#ifdef GL_MATRIX15_ARB
printf("GL_MATRIX15_ARB %d\n", 0x88CF);
#endif
#ifdef GL_MIN_INTENSITY_SGIS
printf("GL_MIN_INTENSITY_SGIS %d\n", 0x85FA);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY9_NV
printf("GL_VERTEX_ATTRIB_ARRAY9_NV %d\n", 0x8659);
#endif
#ifdef GL_UNPACK_ROW_BYTES_APPLE
printf("GL_UNPACK_ROW_BYTES_APPLE %d\n", 0x8A16);
#endif
#ifdef GL_POLYGON_BIT
printf("GL_POLYGON_BIT %d\n", 0x00000008);
#endif
#ifdef __GLEE_GL_OES_read_format
printf("__GLEE_GL_OES_read_format %d\n", 1);
#endif
#ifdef glBinormal3iEXT
#endif
#ifdef GL_PROGRAM_TEX_INDIRECTIONS_ARB
printf("GL_PROGRAM_TEX_INDIRECTIONS_ARB %d\n", 0x8807);
#endif
#ifdef GLU_NURBS_ERROR19
printf("GLU_NURBS_ERROR19 %d\n", 100269);
#endif
#ifdef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT
printf("GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT %d\n", 0x8CD1);
#endif
#ifdef GL_SAMPLE_COVERAGE_INVERT
printf("GL_SAMPLE_COVERAGE_INVERT %d\n", 0x80AB);
#endif
#ifdef GLEE_SGIX_pixel_texture_bits
#endif
#ifdef GL_422_REV_EXT
printf("GL_422_REV_EXT %d\n", 0x80CD);
#endif
#ifdef GL_TEXTURE_DEPTH_SIZE
printf("GL_TEXTURE_DEPTH_SIZE %d\n", 0x884A);
#endif
#ifdef GL_TEXTURE_GEN_MODE
printf("GL_TEXTURE_GEN_MODE %d\n", 0x2500);
#endif
#ifdef glVertexStream1sATI
#endif
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE
printf("GL_SAMPLE_ALPHA_TO_COVERAGE %d\n", 0x809E);
#endif
#ifdef glIndexPointerEXT
#endif
#ifdef glGetTexFilterFuncSGIS
#endif
#ifdef GL_TEXTURE_ENV_MODE
printf("GL_TEXTURE_ENV_MODE %d\n", 0x2200);
#endif
#ifdef GLEE_NV_light_max_exponent
#endif
#ifdef GL_DUAL_ALPHA4_SGIS
printf("GL_DUAL_ALPHA4_SGIS %d\n", 0x8110);
#endif
#ifdef GL_TEXTURE_RESIDENT
printf("GL_TEXTURE_RESIDENT %d\n", 0x8067);
#endif
#ifdef GL_T2F_IUI_N3F_V3F_EXT
printf("GL_T2F_IUI_N3F_V3F_EXT %d\n", 0x81B4);
#endif
#ifdef GL_4D_COLOR_TEXTURE
printf("GL_4D_COLOR_TEXTURE %d\n", 0x0604);
#endif
#ifdef GLUT_DOWN
printf("GLUT_DOWN %d\n", 0);
#endif
#ifdef __GLEE_GL_S3_s3tc
printf("__GLEE_GL_S3_s3tc %d\n", 1);
#endif
#ifdef GL_BIAS_BY_NEGATIVE_ONE_HALF_NV
printf("GL_BIAS_BY_NEGATIVE_ONE_HALF_NV %d\n", 0x8541);
#endif
#ifdef GLEE_EXT_color_matrix
#endif
#ifdef glSpriteParameterfvSGIX
#endif
#ifdef GL_CURRENT_FOG_COORDINATE
printf("GL_CURRENT_FOG_COORDINATE %d\n", 0x8453);
#endif
#ifdef GL_IUI_V2F_EXT
printf("GL_IUI_V2F_EXT %d\n", 0x81AD);
#endif
#ifdef GL_SRC0_ALPHA
printf("GL_SRC0_ALPHA %d\n", 0x8588);
#endif
#ifdef GL_SHADER_OBJECT_ARB
printf("GL_SHADER_OBJECT_ARB %d\n", 0x8B48);
#endif
#ifdef GL_MAT_COLOR_INDEXES_BIT_PGI
printf("GL_MAT_COLOR_INDEXES_BIT_PGI %d\n", 0x01000000);
#endif
#ifdef GLUT_WINDOW_STENCIL_SIZE
printf("GLUT_WINDOW_STENCIL_SIZE %d\n", 105);
#endif
#ifdef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB
printf("GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB %d\n", 0x8B4C);
#endif
#ifdef GL_ALLOW_DRAW_FRG_HINT_PGI
printf("GL_ALLOW_DRAW_FRG_HINT_PGI %d\n", 0x1A210);
#endif
#ifdef GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB
printf("GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB %d\n", 0x8B8B);
#endif
#ifdef GL_FRONT_LEFT
printf("GL_FRONT_LEFT %d\n", 0x0400);
#endif
#ifdef GL_COLOR_ATTACHMENT15_EXT
printf("GL_COLOR_ATTACHMENT15_EXT %d\n", 0x8CEF);
#endif
#ifdef GL_MAT_EMISSION_BIT_PGI
printf("GL_MAT_EMISSION_BIT_PGI %d\n", 0x00800000);
#endif
#ifdef GL_PALETTE8_RGBA8_OES
printf("GL_PALETTE8_RGBA8_OES %d\n", 0x8B96);
#endif
#ifdef GL_C4F_N3F_V3F
printf("GL_C4F_N3F_V3F %d\n", 0x2A26);
#endif
#ifdef GLUT_DOUBLE
printf("GLUT_DOUBLE %d\n", 2);
#endif
#ifdef GL_INDEX_ARRAY_TYPE_EXT
printf("GL_INDEX_ARRAY_TYPE_EXT %d\n", 0x8085);
#endif
#ifdef GLEE_SGIX_impact_pixel_texture
#endif
#ifdef GL_SAMPLE_ALPHA_TO_MASK_EXT
printf("GL_SAMPLE_ALPHA_TO_MASK_EXT %d\n", 0x809E);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB0_4_NV
printf("GL_MAP2_VERTEX_ATTRIB0_4_NV %d\n", 0x8670);
#endif
#ifdef GL_PIXEL_MAP_G_TO_G
printf("GL_PIXEL_MAP_G_TO_G %d\n", 0x0C77);
#endif
#ifdef GL_BGR
printf("GL_BGR %d\n", 0x80E0);
#endif
#ifdef GLU_TESS_ERROR2
printf("GLU_TESS_ERROR2 %d\n", 100152);
#endif
#ifdef GL_RESAMPLE_REPLICATE_OML
printf("GL_RESAMPLE_REPLICATE_OML %d\n", 0x8986);
#endif
#ifdef GL_MATRIX1_NV
printf("GL_MATRIX1_NV %d\n", 0x8631);
#endif
#ifdef GL_DOT_PRODUCT_TEXTURE_2D_NV
printf("GL_DOT_PRODUCT_TEXTURE_2D_NV %d\n", 0x86EE);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD17_EXT
printf("GL_OUTPUT_TEXTURE_COORD17_EXT %d\n", 0x87AE);
#endif
#ifdef GL_SINGLE_COLOR_EXT
printf("GL_SINGLE_COLOR_EXT %d\n", 0x81F9);
#endif
#ifdef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
printf("GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS %d\n", 0x8B4C);
#endif
#ifdef __GLEE_GL_INGR_palette_buffer
printf("__GLEE_GL_INGR_palette_buffer %d\n", 1);
#endif
#ifdef glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
#endif
#ifdef GL_PIXEL_CUBIC_WEIGHT_EXT
printf("GL_PIXEL_CUBIC_WEIGHT_EXT %d\n", 0x8333);
#endif
#ifdef GLEE_OML_resample
#endif
#ifdef GL_SRC1_ALPHA
printf("GL_SRC1_ALPHA %d\n", 0x8589);
#endif
#ifdef glLoadIdentityDeformationMapSGIX
#endif
#ifdef GL_COMBINER6_NV
printf("GL_COMBINER6_NV %d\n", 0x8556);
#endif
#ifdef GLEE_EXT_texture_perturb_normal
#endif
#ifdef GL_MAT_SPECULAR_BIT_PGI
printf("GL_MAT_SPECULAR_BIT_PGI %d\n", 0x04000000);
#endif
#ifdef GL_GREEN_MIN_CLAMP_INGR
printf("GL_GREEN_MIN_CLAMP_INGR %d\n", 0x8561);
#endif
#ifdef __GLEE_GL_EXT_subtexture
printf("__GLEE_GL_EXT_subtexture %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER11_ARB
printf("GL_DRAW_BUFFER11_ARB %d\n", 0x8830);
#endif
#ifdef GL_VERTEX23_BIT_PGI
printf("GL_VERTEX23_BIT_PGI %d\n", 0x00000004);
#endif
#ifdef GL_APPLE_vertex_program_evaluators
printf("GL_APPLE_vertex_program_evaluators %d\n", 1);
#endif
#ifdef GL_POINT_SIZE_MIN_ARB
printf("GL_POINT_SIZE_MIN_ARB %d\n", 0x8126);
#endif
#ifdef GL_VERTEX_SHADER
printf("GL_VERTEX_SHADER %d\n", 0x8B31);
#endif
#ifdef GL_FRAGMENT_LIGHT3_SGIX
printf("GL_FRAGMENT_LIGHT3_SGIX %d\n", 0x840F);
#endif
#ifdef GL_ENV_REVERSE_SUBTRACT_EXT
printf("GL_ENV_REVERSE_SUBTRACT_EXT %d\n", 0);
#endif
#ifdef GLEE_IBM_vertex_array_lists
#endif
#ifdef GL_MODELVIEW0_MATRIX_EXT
#endif
#ifdef GL_UNSIGNED_INT_8_8_8_8
printf("GL_UNSIGNED_INT_8_8_8_8 %d\n", 0x8035);
#endif
#ifdef GLU_NURBS_ERROR9
printf("GLU_NURBS_ERROR9 %d\n", 100259);
#endif
#ifdef GL_READ_WRITE_ARB
printf("GL_READ_WRITE_ARB %d\n", 0x88BA);
#endif
#ifdef glGetPointervEXT
#endif
#ifdef GL_MODELVIEW1_MATRIX_EXT
printf("GL_MODELVIEW1_MATRIX_EXT %d\n", 0x8506);
#endif
#ifdef GL_SGIX_scalebias_hint
printf("GL_SGIX_scalebias_hint %d\n", 1);
#endif
#ifdef GLEE_LINK_PARTIAL
printf("GLEE_LINK_PARTIAL %d\n", 1);
#endif
#ifdef GL_SOURCE1_ALPHA
printf("GL_SOURCE1_ALPHA %d\n", 0x8589);
#endif
#ifdef GL_MULTISAMPLE_FILTER_HINT_NV
printf("GL_MULTISAMPLE_FILTER_HINT_NV %d\n", 0x8534);
#endif
#ifdef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
printf("GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS %d\n", 0x8B4D);
#endif
#ifdef GL_INTENSITY_FLOAT16_APPLE
printf("GL_INTENSITY_FLOAT16_APPLE %d\n", 0x881D);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_LIST_IBM
printf("GL_SECONDARY_COLOR_ARRAY_LIST_IBM %d\n", 103077);
#endif
#ifdef GL_BITMAP
printf("GL_BITMAP %d\n", 0x1A00);
#endif
#ifdef GL_ALPHA_TEST_FUNC
printf("GL_ALPHA_TEST_FUNC %d\n", 0x0BC1);
#endif
#ifdef GLEE_IBM_multimode_draw_arrays
#endif
#ifdef GL_OPERAND2_RGB_EXT
printf("GL_OPERAND2_RGB_EXT %d\n", 0x8592);
#endif
#ifdef GL_MAX_PROGRAM_PARAMETERS_ARB
printf("GL_MAX_PROGRAM_PARAMETERS_ARB %d\n", 0x88A9);
#endif
#ifdef GL_LIST_BIT
printf("GL_LIST_BIT %d\n", 0x00020000);
#endif
#ifdef GL_SAMPLER_3D_ARB
printf("GL_SAMPLER_3D_ARB %d\n", 0x8B5F);
#endif
#ifdef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB
printf("GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB %d\n", 0x8B49);
#endif
#ifdef GL_CONVOLUTION_FILTER_SCALE
printf("GL_CONVOLUTION_FILTER_SCALE %d\n", 0x8014);
#endif
#ifdef glColor4ubVertex2fvSUN
#endif
#ifdef GL_SRC_ALPHA
printf("GL_SRC_ALPHA %d\n", 0x0302);
#endif
#ifdef __GLEE_GL_EXT_histogram
printf("__GLEE_GL_EXT_histogram %d\n", 1);
#endif
#ifdef GL_WEIGHT_ARRAY_POINTER_ARB
printf("GL_WEIGHT_ARRAY_POINTER_ARB %d\n", 0x86AC);
#endif
#ifdef glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
#endif
#ifdef GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI
printf("GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI %d\n", 0x1A203);
#endif
#ifdef GL_MAP2_TEXTURE_COORD_2
printf("GL_MAP2_TEXTURE_COORD_2 %d\n", 0x0DB4);
#endif
#ifdef GLUT_WINDOW_BUFFER_SIZE
printf("GLUT_WINDOW_BUFFER_SIZE %d\n", 104);
#endif
#ifdef GLU_NURBS_END_DATA
printf("GLU_NURBS_END_DATA %d\n", 100175);
#endif
#ifdef GL_MAX_COLOR_MATRIX_STACK_DEPTH
printf("GL_MAX_COLOR_MATRIX_STACK_DEPTH %d\n", 0x80B3);
#endif
#ifdef GLUT_KEY_PAGE_DOWN
printf("GLUT_KEY_PAGE_DOWN %d\n", 105);
#endif
#ifdef glReplacementCodeuiColor3fVertex3fSUN
#endif
#ifdef GL_STENCIL_BACK_FUNC_ATI
printf("GL_STENCIL_BACK_FUNC_ATI %d\n", 0x8800);
#endif
#ifdef __GLEE_GL_SGIS_texture_filter4
printf("__GLEE_GL_SGIS_texture_filter4 %d\n", 1);
#endif
#ifdef GL_RGBA_INTEGER_MODE_EXT
printf("GL_RGBA_INTEGER_MODE_EXT %d\n", 0x8D9E);
#endif
#ifdef __GLEE_GL_SGIX_fog_scale
printf("__GLEE_GL_SGIX_fog_scale %d\n", 1);
#endif
#ifdef GL_PALETTE8_RGBA4_OES
printf("GL_PALETTE8_RGBA4_OES %d\n", 0x8B98);
#endif
#ifdef GL_BUFFER_USAGE_ARB
printf("GL_BUFFER_USAGE_ARB %d\n", 0x8765);
#endif
#ifdef GL_CURRENT_BINORMAL_EXT
printf("GL_CURRENT_BINORMAL_EXT %d\n", 0x843C);
#endif
#ifdef GL_PACK_LSB_FIRST
printf("GL_PACK_LSB_FIRST %d\n", 0x0D01);
#endif
#ifdef GL_RGBA_SIGNED_SGIX
printf("GL_RGBA_SIGNED_SGIX %d\n", 0x85E1);
#endif
#ifdef __GLEE_GL_INGR_interlace_read
printf("__GLEE_GL_INGR_interlace_read %d\n", 1);
#endif
#ifdef GL_CONSTANT_COLOR_EXT
printf("GL_CONSTANT_COLOR_EXT %d\n", 0x8001);
#endif
#ifdef GL_FLOAT_MAT4x2
printf("GL_FLOAT_MAT4x2 %d\n", 0x8B69);
#endif
#ifdef __GLEE_GL_OES_byte_coordinates
printf("__GLEE_GL_OES_byte_coordinates %d\n", 1);
#endif
#ifdef GL_LIGHT_MODEL_LOCAL_VIEWER
printf("GL_LIGHT_MODEL_LOCAL_VIEWER %d\n", 0x0B51);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING
printf("GL_PIXEL_UNPACK_BUFFER_BINDING %d\n", 0x88EF);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT %d\n", 0x8515);
#endif
#ifdef GL_LINEAR_DETAIL_COLOR_SGIS
printf("GL_LINEAR_DETAIL_COLOR_SGIS %d\n", 0x8099);
#endif
#ifdef GL_SPRITE_TRANSLATION_SGIX
printf("GL_SPRITE_TRANSLATION_SGIX %d\n", 0x814B);
#endif
#ifdef GL_MIN_PROGRAM_TEXEL_OFFSET_EXT
printf("GL_MIN_PROGRAM_TEXEL_OFFSET_EXT %d\n", 0x8904);
#endif
#ifdef GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN
printf("GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN %d\n", 0x85C2);
#endif
#ifdef GL_MESA_pack_invert
printf("GL_MESA_pack_invert %d\n", 1);
#endif
#ifdef GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV
printf("GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV %d\n", 0x8520);
#endif
#ifdef GL_HISTOGRAM_ALPHA_SIZE_EXT
printf("GL_HISTOGRAM_ALPHA_SIZE_EXT %d\n", 0x802B);
#endif
#ifdef GL_SGIX_tag_sample_buffer
printf("GL_SGIX_tag_sample_buffer %d\n", 1);
#endif
#ifdef GL_MODELVIEW25_ARB
printf("GL_MODELVIEW25_ARB %d\n", 0x8739);
#endif
#ifdef GL_CONSERVE_MEMORY_HINT_PGI
printf("GL_CONSERVE_MEMORY_HINT_PGI %d\n", 0x1A1FD);
#endif
#ifdef glFragmentMaterialfEXT
#endif
#ifdef GL_HISTOGRAM
printf("GL_HISTOGRAM %d\n", 0x8024);
#endif
#ifdef GLUT_CURSOR_CYCLE
printf("GLUT_CURSOR_CYCLE %d\n", 5);
#endif
#ifdef GL_COPY
printf("GL_COPY %d\n", 0x1503);
#endif
#ifdef GL_CULL_FACE
printf("GL_CULL_FACE %d\n", 0x0B44);
#endif
#ifdef GL_SEPARATE_SPECULAR_COLOR_EXT
printf("GL_SEPARATE_SPECULAR_COLOR_EXT %d\n", 0x81FA);
#endif
#ifdef GL_HISTOGRAM_GREEN_SIZE_EXT
printf("GL_HISTOGRAM_GREEN_SIZE_EXT %d\n", 0x8029);
#endif
#ifdef GL_APPLE_vertex_array_range
printf("GL_APPLE_vertex_array_range %d\n", 1);
#endif
#ifdef GL_INDEX_BIT_PGI
printf("GL_INDEX_BIT_PGI %d\n", 0x00080000);
#endif
#ifdef GL_BOOL
printf("GL_BOOL %d\n", 0x8B56);
#endif
#ifdef GL_ATI_texture_compression_3dc
printf("GL_ATI_texture_compression_3dc %d\n", 1);
#endif
#ifdef GLEE_OES_compressed_paletted_texture
#endif
#ifdef __DBL_DIG__
printf("__DBL_DIG__ %d\n", 15);
#endif
#ifdef glFragmentMaterialfSGIX
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD11_EXT
printf("GL_OUTPUT_TEXTURE_COORD11_EXT %d\n", 0x87A8);
#endif
#ifdef GL_INVALID_OPERATION
printf("GL_INVALID_OPERATION %d\n", 0x0502);
#endif
#ifdef GL_PIXEL_MAP_S_TO_S_SIZE
printf("GL_PIXEL_MAP_S_TO_S_SIZE %d\n", 0x0CB1);
#endif
#ifdef GL_FLOAT_MAT3_ARB
printf("GL_FLOAT_MAT3_ARB %d\n", 0x8B5B);
#endif
#ifdef GL_ALPHA_MIN_CLAMP_INGR
printf("GL_ALPHA_MIN_CLAMP_INGR %d\n", 0x8563);
#endif
#ifdef GLUT_CURSOR_LEFT_SIDE
printf("GLUT_CURSOR_LEFT_SIDE %d\n", 14);
#endif
#ifdef GL_SET
printf("GL_SET %d\n", 0x150F);
#endif
#ifdef GL_LINE_SMOOTH
printf("GL_LINE_SMOOTH %d\n", 0x0B20);
#endif
#ifdef GL_TEXTURE_GREEN_SIZE_EXT
printf("GL_TEXTURE_GREEN_SIZE_EXT %d\n", 0x805D);
#endif
#ifdef GL_LUMINANCE16_ALPHA16_EXT
printf("GL_LUMINANCE16_ALPHA16_EXT %d\n", 0x8048);
#endif
#ifdef GL_VIBRANCE_SCALE_NV
printf("GL_VIBRANCE_SCALE_NV %d\n", 0x8713);
#endif
#ifdef GL_MAX_PROGRAM_IF_DEPTH_NV
printf("GL_MAX_PROGRAM_IF_DEPTH_NV %d\n", 0x88F6);
#endif
#ifdef GL_SLUMINANCE8_ALPHA8_EXT
printf("GL_SLUMINANCE8_ALPHA8_EXT %d\n", 0x8C45);
#endif
#ifdef glGetProgramivNV
#endif
#ifdef glEndOcclusionQueryNV
#endif
#ifdef glReplacementCodeuiColor4ubVertex3fSUN
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE_EXT
printf("GL_TEXTURE_COORD_ARRAY_SIZE_EXT %d\n", 0x8088);
#endif
#ifdef GL_REG_23_ATI
printf("GL_REG_23_ATI %d\n", 0x8938);
#endif
#ifdef glVertexWeighthNV
#endif
#ifdef __GLEE_GL_SGIS_texture4D
printf("__GLEE_GL_SGIS_texture4D %d\n", 1);
#endif
#ifdef GL_CONVOLUTION_BORDER_COLOR_HP
printf("GL_CONVOLUTION_BORDER_COLOR_HP %d\n", 0x8154);
#endif
#ifdef GL_SUN_vertex
printf("GL_SUN_vertex %d\n", 1);
#endif
#ifdef GL_DUAL_LUMINANCE16_SGIS
printf("GL_DUAL_LUMINANCE16_SGIS %d\n", 0x8117);
#endif
#ifdef GL_CURRENT_MATRIX_INDEX_ARB
printf("GL_CURRENT_MATRIX_INDEX_ARB %d\n", 0x8845);
#endif
#ifdef GL_TEXCOORD4_BIT_PGI
printf("GL_TEXCOORD4_BIT_PGI %d\n", 0x80000000);
#endif
#ifdef GL_LINE_STIPPLE
printf("GL_LINE_STIPPLE %d\n", 0x0B24);
#endif
#ifdef GL_PROXY_HISTOGRAM_EXT
printf("GL_PROXY_HISTOGRAM_EXT %d\n", 0x8025);
#endif
#ifdef glTexCoord4fVertex4fvSUN
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT %d\n", 0x8516);
#endif
#ifdef GL_CLIENT_ATTRIB_STACK_DEPTH
printf("GL_CLIENT_ATTRIB_STACK_DEPTH %d\n", 0x0BB1);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB10_4_NV
printf("GL_MAP1_VERTEX_ATTRIB10_4_NV %d\n", 0x866A);
#endif
#ifdef glVertex3hNV
#endif
#ifdef GL_LUMINANCE8_ALPHA8_EXT
printf("GL_LUMINANCE8_ALPHA8_EXT %d\n", 0x8045);
#endif
#ifdef GLUT_KEY_DOWN
printf("GLUT_KEY_DOWN %d\n", 103);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
printf("GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING %d\n", 0x889D);
#endif
#ifdef GL_MAX_TEXTURE_IMAGE_UNITS_ARB
printf("GL_MAX_TEXTURE_IMAGE_UNITS_ARB %d\n", 0x8872);
#endif
#ifdef GLU_OBJECT_PATH_LENGTH
printf("GLU_OBJECT_PATH_LENGTH %d\n", 100209);
#endif
#ifdef GL_LUMINANCE_ALPHA32I_EXT
printf("GL_LUMINANCE_ALPHA32I_EXT %d\n", 0x8D87);
#endif
#ifdef GL_IUI_N3F_V2F_EXT
printf("GL_IUI_N3F_V2F_EXT %d\n", 0x81AF);
#endif
#ifdef GL_CONSTANT
printf("GL_CONSTANT %d\n", 0x8576);
#endif
#ifdef GL_FOG_COORD_SRC
printf("GL_FOG_COORD_SRC %d\n", 0x8450);
#endif
#ifdef __GLEE_GL_NV_texture_rectangle
printf("__GLEE_GL_NV_texture_rectangle %d\n", 1);
#endif
#ifdef GL_VERTEX_ARRAY_STRIDE_EXT
printf("GL_VERTEX_ARRAY_STRIDE_EXT %d\n", 0x807C);
#endif
#ifdef GL_STATIC_DRAW
printf("GL_STATIC_DRAW %d\n", 0x88E4);
#endif
#ifdef glBinormal3bEXT
#endif
#ifdef GL_PIXEL_MAP_I_TO_R_SIZE
printf("GL_PIXEL_MAP_I_TO_R_SIZE %d\n", 0x0CB2);
#endif
#ifdef GL_LUMINANCE_SIGNED_SGIX
printf("GL_LUMINANCE_SIGNED_SGIX %d\n", 0x85E3);
#endif
#ifdef GL_DRAW_BUFFER0_ARB
printf("GL_DRAW_BUFFER0_ARB %d\n", 0x8825);
#endif
#ifdef GL_ARB_vertex_shader
printf("GL_ARB_vertex_shader %d\n", 1);
#endif
#ifdef GL_EVAL_FRACTIONAL_TESSELLATION_NV
printf("GL_EVAL_FRACTIONAL_TESSELLATION_NV %d\n", 0x86C5);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE
printf("GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE %d\n", 0x8A09);
#endif
#ifdef GL_FASTEST
printf("GL_FASTEST %d\n", 0x1101);
#endif
#ifdef GLEE_EXT_pixel_buffer_object
#endif
#ifdef GL_VENDOR
printf("GL_VENDOR %d\n", 0x1F00);
#endif
#ifdef GL_INVALID_VALUE
printf("GL_INVALID_VALUE %d\n", 0x0501);
#endif
#ifdef glVertexStream4fvATI
#endif
#ifdef GLEE_SGI_texture_color_table
#endif
#ifdef GLU_DOMAIN_DISTANCE
printf("GLU_DOMAIN_DISTANCE %d\n", 100217);
#endif
#ifdef GL_DOT2_ADD_ATI
printf("GL_DOT2_ADD_ATI %d\n", 0x896C);
#endif
#ifdef GL_EDGE_FLAG_ARRAY_EXT
printf("GL_EDGE_FLAG_ARRAY_EXT %d\n", 0x8079);
#endif
#ifdef GL_SGIX_convolution_accuracy
printf("GL_SGIX_convolution_accuracy %d\n", 1);
#endif
#ifdef GL_TEXTURE_BASE_LEVEL_SGIS
printf("GL_TEXTURE_BASE_LEVEL_SGIS %d\n", 0x813C);
#endif
#ifdef GL_RGB8
printf("GL_RGB8 %d\n", 0x8051);
#endif
#ifdef glClearDepthfOES
#endif
#ifdef GL_ALIASED_POINT_SIZE_RANGE
printf("GL_ALIASED_POINT_SIZE_RANGE %d\n", 0x846D);
#endif
#ifdef GL_SRGB
printf("GL_SRGB %d\n", 0x8C40);
#endif
#ifdef glUnmapObjectBufferATI
#endif
#ifdef GL_GENERATE_MIPMAP_HINT
printf("GL_GENERATE_MIPMAP_HINT %d\n", 0x8192);
#endif
#ifdef GL_FOG_COORD_ARRAY_TYPE
printf("GL_FOG_COORD_ARRAY_TYPE %d\n", 0x8454);
#endif
#ifdef GL_ARB_texture_non_power_of_two
printf("GL_ARB_texture_non_power_of_two %d\n", 1);
#endif
#ifdef GL_RIGHT
printf("GL_RIGHT %d\n", 0x0407);
#endif
#ifdef GL_PROJECTION_MATRIX
printf("GL_PROJECTION_MATRIX %d\n", 0x0BA7);
#endif
#ifdef GL_EXT_fog_coord
printf("GL_EXT_fog_coord %d\n", 1);
#endif
#ifdef glVertexAttribs4svNV
#endif
#ifdef GL_SAMPLER_2D_ARRAY_EXT
printf("GL_SAMPLER_2D_ARRAY_EXT %d\n", 0x8DC1);
#endif
#ifdef GL_EXT_texture_cube_map
printf("GL_EXT_texture_cube_map %d\n", 1);
#endif
#ifdef GLU_TESS_MISSING_BEGIN_POLYGON
printf("GLU_TESS_MISSING_BEGIN_POLYGON %d\n", 100151);
#endif
#ifdef GL_REG_1_ATI
printf("GL_REG_1_ATI %d\n", 0x8922);
#endif
#ifdef GLEE_HP_image_transform
#endif
#ifdef GL_EXT_texture_object
printf("GL_EXT_texture_object %d\n", 1);
#endif
#ifdef GL_MODELVIEW20_ARB
printf("GL_MODELVIEW20_ARB %d\n", 0x8734);
#endif
#ifdef GLUT_ACCUM
printf("GLUT_ACCUM %d\n", 4);
#endif
#ifdef GL_LINE_SMOOTH_HINT
printf("GL_LINE_SMOOTH_HINT %d\n", 0x0C52);
#endif
#ifdef GL_INDEX_ARRAY_BUFFER_BINDING
printf("GL_INDEX_ARRAY_BUFFER_BINDING %d\n", 0x8899);
#endif
#ifdef GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI
printf("GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI %d\n", 0x6096);
#endif
#ifdef GL_YCRCB_SGIX
printf("GL_YCRCB_SGIX %d\n", 0x8318);
#endif
#ifdef GL_DRAW_BUFFER0
printf("GL_DRAW_BUFFER0 %d\n", 0x8825);
#endif
#ifdef glGetVariantBooleanvEXT
#endif
#ifdef GL_TEXTURE_MAX_ANISOTROPY_EXT
printf("GL_TEXTURE_MAX_ANISOTROPY_EXT %d\n", 0x84FE);
#endif
#ifdef GL_TEXTURE_COMPRESSION_HINT_ARB
printf("GL_TEXTURE_COMPRESSION_HINT_ARB %d\n", 0x84EF);
#endif
#ifdef GL_ZERO_EXT
printf("GL_ZERO_EXT %d\n", 0x87DD);
#endif
#ifdef GL_INVALID_FRAMEBUFFER_OPERATION_EXT
printf("GL_INVALID_FRAMEBUFFER_OPERATION_EXT %d\n", 0x0506);
#endif
#ifdef glFinishFenceNV
#endif
#ifdef GL_TEXTURE_TOO_LARGE_EXT
printf("GL_TEXTURE_TOO_LARGE_EXT %d\n", 0x8065);
#endif
#ifdef GL_LINEAR_DETAIL_ALPHA_SGIS
printf("GL_LINEAR_DETAIL_ALPHA_SGIS %d\n", 0x8098);
#endif
#ifdef GLUT_ACTIVE_SHIFT
printf("GLUT_ACTIVE_SHIFT %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE
printf("GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE %d\n", 0x8A07);
#endif
#ifdef GL_OFFSET_TEXTURE_MATRIX_NV
printf("GL_OFFSET_TEXTURE_MATRIX_NV %d\n", 0x86E1);
#endif
#ifdef GL_DUAL_INTENSITY16_SGIS
printf("GL_DUAL_INTENSITY16_SGIS %d\n", 0x811B);
#endif
#ifdef GL_CONSTANT_COLOR
printf("GL_CONSTANT_COLOR %d\n", 0x8001);
#endif
#ifdef GLU_SAMPLING_TOLERANCE
printf("GLU_SAMPLING_TOLERANCE %d\n", 100203);
#endif
#ifdef glFogCoordhvNV
#endif
#ifdef GL_MODULATE_SIGNED_ADD_ATI
printf("GL_MODULATE_SIGNED_ADD_ATI %d\n", 0x8745);
#endif
#ifdef GL_SUN_mesh_array
printf("GL_SUN_mesh_array %d\n", 1);
#endif
#ifdef GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB
printf("GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB %d\n", 0x8841);
#endif
#ifdef GL_FRAGMENT_LIGHT0_SGIX
printf("GL_FRAGMENT_LIGHT0_SGIX %d\n", 0x840C);
#endif
#ifdef GL_OFFSET_TEXTURE_2D_NV
printf("GL_OFFSET_TEXTURE_2D_NV %d\n", 0x86E8);
#endif
#ifdef GLUT_KEY_PAGE_UP
printf("GLUT_KEY_PAGE_UP %d\n", 104);
#endif
#ifdef GL_LUMINANCE8UI_EXT
printf("GL_LUMINANCE8UI_EXT %d\n", 0x8D80);
#endif
#ifdef glProgramNamedParameter4fNV
#endif
#ifdef GL_DRAW_BUFFER13_ARB
printf("GL_DRAW_BUFFER13_ARB %d\n", 0x8832);
#endif
#ifdef GLUT_WINDOW_HEIGHT
printf("GLUT_WINDOW_HEIGHT %d\n", 103);
#endif
#ifdef GL_UNSIGNED_SHORT_4_4_4_4_EXT
printf("GL_UNSIGNED_SHORT_4_4_4_4_EXT %d\n", 0x8033);
#endif
#ifdef GL_MODELVIEW6_ARB
printf("GL_MODELVIEW6_ARB %d\n", 0x8726);
#endif
#ifdef GL_MAP1_INDEX
printf("GL_MAP1_INDEX %d\n", 0x0D91);
#endif
#ifdef GL_COMPRESSED_SRGB_ALPHA
printf("GL_COMPRESSED_SRGB_ALPHA %d\n", 0x8C49);
#endif
#ifdef glCopyColorTableSGI
#endif
#ifdef GL_RGBA8UI_EXT
printf("GL_RGBA8UI_EXT %d\n", 0x8D7C);
#endif
#ifdef GLEE_NV_fragment_program
#endif
#ifdef GL_TEXTURE17
printf("GL_TEXTURE17 %d\n", 0x84D1);
#endif
#ifdef GL_DUAL_ALPHA8_SGIS
printf("GL_DUAL_ALPHA8_SGIS %d\n", 0x8111);
#endif
#ifdef GLEE_ATI_texture_env_combine3
#endif
#ifdef GL_CONVOLUTION_FILTER_SCALE_EXT
printf("GL_CONVOLUTION_FILTER_SCALE_EXT %d\n", 0x8014);
#endif
#ifdef GLU_UNKNOWN
printf("GLU_UNKNOWN %d\n", 100124);
#endif
#ifdef GL_SRC7_RGB
printf("GL_SRC7_RGB %d\n", 0x8587);
#endif
#ifdef GLEE_GREMEDY_string_marker
#endif
#ifdef GLU_NURBS_VERTEX_DATA_EXT
printf("GLU_NURBS_VERTEX_DATA_EXT %d\n", 100171);
#endif
#ifdef GL_NEVER
printf("GL_NEVER %d\n", 0x0200);
#endif
#ifdef GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV
printf("GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV %d\n", 0x8857);
#endif
#ifdef glTexFilterFuncSGIS
#endif
#ifdef __GLEE_GL_SGI_depth_pass_instrument
printf("__GLEE_GL_SGI_depth_pass_instrument %d\n", 1);
#endif
#ifdef GL_VARIABLE_A_NV
printf("GL_VARIABLE_A_NV %d\n", 0x8523);
#endif
#ifdef __GLEE_GL_NV_texgen_emboss
printf("__GLEE_GL_NV_texgen_emboss %d\n", 1);
#endif
#ifdef GL_SMOOTH_LINE_WIDTH_GRANULARITY
printf("GL_SMOOTH_LINE_WIDTH_GRANULARITY %d\n", 0x0B23);
#endif
#ifdef GL_MULTISAMPLE_BIT_EXT
printf("GL_MULTISAMPLE_BIT_EXT %d\n", 0x20000000);
#endif
#ifdef GL_EXT_packed_pixels
printf("GL_EXT_packed_pixels %d\n", 1);
#endif
#ifdef glTexCoord4fColor4fNormal3fVertex4fvSUN
#endif
#ifdef GLUT_GAME_MODE_HEIGHT
printf("GLUT_GAME_MODE_HEIGHT %d\n", 3);
#endif
#ifdef GL_MAP_ATTRIB_V_ORDER_NV
printf("GL_MAP_ATTRIB_V_ORDER_NV %d\n", 0x86C4);
#endif
#ifdef GLEE_SGIX_list_priority
#endif
#ifdef GL_TEXTURE_DT_SIZE_NV
printf("GL_TEXTURE_DT_SIZE_NV %d\n", 0x871E);
#endif
#ifdef glReplacementCodeuiNormal3fVertex3fSUN
#endif
#ifdef GL_EXT_pixel_buffer_object
printf("GL_EXT_pixel_buffer_object %d\n", 1);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB9_NV
printf("GL_EVAL_VERTEX_ATTRIB9_NV %d\n", 0x86CF);
#endif
#ifdef __MACH__
printf("__MACH__ %d\n", 1);
#endif
#ifdef GL_OFFSET_TEXTURE_RECTANGLE_NV
printf("GL_OFFSET_TEXTURE_RECTANGLE_NV %d\n", 0x864C);
#endif
#ifdef GLU_TESS_COMBINE_DATA
printf("GLU_TESS_COMBINE_DATA %d\n", 100111);
#endif
#ifdef GL_CON_23_ATI
printf("GL_CON_23_ATI %d\n", 0x8958);
#endif
#ifdef GL_DRAW_BUFFER4_ARB
printf("GL_DRAW_BUFFER4_ARB %d\n", 0x8829);
#endif
#ifdef GL_TEXTURE_ALPHA_SIZE
printf("GL_TEXTURE_ALPHA_SIZE %d\n", 0x805F);
#endif
#ifdef __GLEE_GL_EXT_texture_cube_map
printf("__GLEE_GL_EXT_texture_cube_map %d\n", 1);
#endif
#ifdef GL_SGIS_texture_filter4
printf("GL_SGIS_texture_filter4 %d\n", 1);
#endif
#ifdef GL_SGIX_interlace
printf("GL_SGIX_interlace %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER15_ARB
printf("GL_DRAW_BUFFER15_ARB %d\n", 0x8834);
#endif
#ifdef GLUT_SCREEN_HEIGHT
printf("GLUT_SCREEN_HEIGHT %d\n", 201);
#endif
#ifdef GL_INDEX_TEST_FUNC_EXT
printf("GL_INDEX_TEST_FUNC_EXT %d\n", 0x81B6);
#endif
#ifdef GL_VERTEX_PRECLIP_SGIX
printf("GL_VERTEX_PRECLIP_SGIX %d\n", 0x83EE);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT %d\n", 0x8517);
#endif
#ifdef GL_BOOL_VEC4
printf("GL_BOOL_VEC4 %d\n", 0x8B59);
#endif
#ifdef GL_SOURCE3_RGB_ARB
printf("GL_SOURCE3_RGB_ARB %d\n", 0x8583);
#endif
#ifdef GL_LUMINANCE12_ALPHA12_EXT
printf("GL_LUMINANCE12_ALPHA12_EXT %d\n", 0x8047);
#endif
#ifdef GL_VERSION
printf("GL_VERSION %d\n", 0x1F02);
#endif
#ifdef __GLEE_GL_SGIX_impact_pixel_texture
printf("__GLEE_GL_SGIX_impact_pixel_texture %d\n", 1);
#endif
#ifdef GL_REG_21_ATI
printf("GL_REG_21_ATI %d\n", 0x8936);
#endif
#ifdef GL_MODELVIEW0_EXT
#endif
#ifdef GL_FRAGMENT_LIGHT5_SGIX
printf("GL_FRAGMENT_LIGHT5_SGIX %d\n", 0x8411);
#endif
#ifdef GL_QUAD_TEXTURE_SELECT_SGIS
printf("GL_QUAD_TEXTURE_SELECT_SGIS %d\n", 0x8125);
#endif
#ifdef glSampleMapATI
#endif
#ifdef GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV
printf("GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV %d\n", 0x864D);
#endif
#ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS
printf("GL_NUM_COMPRESSED_TEXTURE_FORMATS %d\n", 0x86A2);
#endif
#ifdef GL_MAX_DRAW_BUFFERS_ARB
printf("GL_MAX_DRAW_BUFFERS_ARB %d\n", 0x8824);
#endif
#ifdef glVertexPointerListIBM
#endif
#ifdef __GLEE_GL_MESA_pack_invert
printf("__GLEE_GL_MESA_pack_invert %d\n", 1);
#endif
#ifdef GL_CONVOLUTION_FILTER_BIAS
printf("GL_CONVOLUTION_FILTER_BIAS %d\n", 0x8015);
#endif
#ifdef GLUT_WINDOW_GREEN_SIZE
printf("GLUT_WINDOW_GREEN_SIZE %d\n", 108);
#endif
#ifdef GL_LUMINANCE_ALPHA8UI_EXT
printf("GL_LUMINANCE_ALPHA8UI_EXT %d\n", 0x8D81);
#endif
#ifdef GL_TEXTURE_2D_STACK_MESAX
printf("GL_TEXTURE_2D_STACK_MESAX %d\n", 0x875A);
#endif
#ifdef __GLEE_GL_SGIS_sharpen_texture
printf("__GLEE_GL_SGIS_sharpen_texture %d\n", 1);
#endif
#ifdef GLEE_NV_texgen_emboss
#endif
#ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
printf("GL_TEXTURE_COMPRESSED_IMAGE_SIZE %d\n", 0x86A0);
#endif
#ifdef GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV
printf("GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV %d\n", 0x885A);
#endif
#ifdef GL_COMBINER_CD_OUTPUT_NV
printf("GL_COMBINER_CD_OUTPUT_NV %d\n", 0x854B);
#endif
#ifdef GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN
printf("GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN %d\n", 0x85C3);
#endif
#ifdef GLU_TESS_MISSING_END_POLYGON
printf("GLU_TESS_MISSING_END_POLYGON %d\n", 100153);
#endif
#ifdef GLUT_VIDEO_RESIZE_WIDTH_DELTA
printf("GLUT_VIDEO_RESIZE_WIDTH_DELTA %d\n", 904);
#endif
#ifdef GL_TEXTURE_RANGE_LENGTH_APPLE
printf("GL_TEXTURE_RANGE_LENGTH_APPLE %d\n", 0x85B7);
#endif
#ifdef glVertexAttribs2dvNV
#endif
#ifdef GL_ALPHA16F_ARB
printf("GL_ALPHA16F_ARB %d\n", 0x881C);
#endif
#ifdef glGetTrackMatrixivNV
#endif
#ifdef GL_QUERY_COUNTER_BITS
printf("GL_QUERY_COUNTER_BITS %d\n", 0x8864);
#endif
#ifdef GL_TEXTURE_GREEN_TYPE_ARB
printf("GL_TEXTURE_GREEN_TYPE_ARB %d\n", 0x8C11);
#endif
#ifdef GLUT_LEFT
printf("GLUT_LEFT %d\n", 0);
#endif
#ifdef GL_MATERIAL_SIDE_HINT_PGI
printf("GL_MATERIAL_SIDE_HINT_PGI %d\n", 0x1A22C);
#endif
#ifdef glHistogramEXT
#endif
#ifdef GL_VERTEX_ARRAY
printf("GL_VERTEX_ARRAY %d\n", 0x8074);
#endif
#ifdef GL_TEXTURE15
printf("GL_TEXTURE15 %d\n", 0x84CF);
#endif
#ifdef GL_CLIP_PLANE2
printf("GL_CLIP_PLANE2 %d\n", 0x3002);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATIX
printf("GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATIX %d\n", 0x6097);
#endif
#ifdef GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV
printf("GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV %d\n", 0x86F0);
#endif
#ifdef GL_WEIGHT_ARRAY_TYPE_ARB
printf("GL_WEIGHT_ARRAY_TYPE_ARB %d\n", 0x86A9);
#endif
#ifdef GL_INDEX_ARRAY_STRIDE_EXT
printf("GL_INDEX_ARRAY_STRIDE_EXT %d\n", 0x8086);
#endif
#ifdef GL_ATI_array_rev_comps_in_4_bytes
printf("GL_ATI_array_rev_comps_in_4_bytes %d\n", 1);
#endif
#ifdef GL_FUNC_ADD
printf("GL_FUNC_ADD %d\n", 0x8006);
#endif
#ifdef GLUT_JOYSTICK_BUTTON_D
printf("GLUT_JOYSTICK_BUTTON_D %d\n", 8);
#endif
#ifdef GL_HI_BIAS_NV
printf("GL_HI_BIAS_NV %d\n", 0x8714);
#endif
#ifdef GL_OP_MUL_EXT
printf("GL_OP_MUL_EXT %d\n", 0x8786);
#endif
#ifdef GL_INT_VEC3
printf("GL_INT_VEC3 %d\n", 0x8B54);
#endif
#ifdef GL_SOURCE7_RGB
printf("GL_SOURCE7_RGB %d\n", 0x8587);
#endif
#ifdef GL_COLOR_ATTACHMENT10_EXT
printf("GL_COLOR_ATTACHMENT10_EXT %d\n", 0x8CEA);
#endif
#ifdef GL_INTENSITY_EXT
printf("GL_INTENSITY_EXT %d\n", 0x8049);
#endif
#ifdef GL_SAMPLER_1D_SHADOW_ARB
printf("GL_SAMPLER_1D_SHADOW_ARB %d\n", 0x8B61);
#endif
#ifdef GL_STENCIL_BUFFER_BIT
printf("GL_STENCIL_BUFFER_BIT %d\n", 0x00000400);
#endif
#ifdef glVariantPointerEXT
#endif
#ifdef GL_HISTOGRAM_FORMAT_EXT
printf("GL_HISTOGRAM_FORMAT_EXT %d\n", 0x8027);
#endif
#ifdef GL_PACK_ALIGNMENT
printf("GL_PACK_ALIGNMENT %d\n", 0x0D05);
#endif
#ifdef glFragmentMaterialiEXT
#endif
#ifdef glGetPixelTexGenParameterfvSGIS
#endif
#ifdef glGetTexBumpParameterfvATI
#endif
#ifdef GL_LUMINANCE_INTEGER_EXT
printf("GL_LUMINANCE_INTEGER_EXT %d\n", 0x8D9C);
#endif
#ifdef GL_EXT_texture_lod_bias
printf("GL_EXT_texture_lod_bias %d\n", 1);
#endif
#ifdef GL_SAMPLE_PATTERN_EXT
printf("GL_SAMPLE_PATTERN_EXT %d\n", 0x80AC);
#endif
#ifdef glDeleteTexturesEXT
#endif
#ifdef GLEE_NV_texture_env_combine4
#endif
#ifdef glTexCoord2fNormal3fVertex3fSUN
#endif
#ifdef GL_MIRROR_CLAMP_ATI
printf("GL_MIRROR_CLAMP_ATI %d\n", 0x8742);
#endif
#ifdef GL_COLOR_ARRAY_COUNT_EXT
printf("GL_COLOR_ARRAY_COUNT_EXT %d\n", 0x8084);
#endif
#ifdef GLEE_ATI_pixel_format_float
#endif
#ifdef GL_MATRIX25_ARB
printf("GL_MATRIX25_ARB %d\n", 0x88D9);
#endif
#ifdef glPassTexCoordATI
#endif
#ifdef GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB
printf("GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB %d\n", 0x88B1);
#endif
#ifdef GLEE_SGIS_fog_function
#endif
#ifdef GL_NORMAL_ARRAY_POINTER_EXT
printf("GL_NORMAL_ARRAY_POINTER_EXT %d\n", 0x808F);
#endif
#ifdef GLU_NURBS_TESSELLATOR_EXT
printf("GLU_NURBS_TESSELLATOR_EXT %d\n", 100161);
#endif
#ifdef GL_IMAGE_TRANSFORM_2D_HP
printf("GL_IMAGE_TRANSFORM_2D_HP %d\n", 0x8161);
#endif
#ifdef GLEE_SGIX_resample
#endif
#ifdef glTexCoord3hvNV
#endif
#ifdef GL_SEPARATE_ATTRIBS_EXT
printf("GL_SEPARATE_ATTRIBS_EXT %d\n", 0x8C8D);
#endif
#ifdef GLEE_NV_occlusion_query
#endif
#ifdef __GLEE_GL_SGIX_framezoom
printf("__GLEE_GL_SGIX_framezoom %d\n", 1);
#endif
#ifdef GL_ATI_draw_buffers
printf("GL_ATI_draw_buffers %d\n", 1);
#endif
#ifdef GLEE_SGIS_texture_select
#endif
#ifdef GL_UNSIGNED_INVERT_NV
printf("GL_UNSIGNED_INVERT_NV %d\n", 0x8537);
#endif
#ifdef GL_UNPACK_SWAP_BYTES
printf("GL_UNPACK_SWAP_BYTES %d\n", 0x0CF0);
#endif
#ifdef GL_OPERAND7_ALPHA
printf("GL_OPERAND7_ALPHA %d\n", 0x859F);
#endif
#ifdef GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV
printf("GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV %d\n", 0x887C);
#endif
#ifdef GL_NUM_INSTRUCTIONS_PER_PASS_ATI
printf("GL_NUM_INSTRUCTIONS_PER_PASS_ATI %d\n", 0x8971);
#endif
#ifdef glWindowPos2dvMESA
#endif
#ifdef GL_SGIX_subsample
printf("GL_SGIX_subsample %d\n", 1);
#endif
#ifdef GL_OPERAND2_RGB_ARB
printf("GL_OPERAND2_RGB_ARB %d\n", 0x8592);
#endif
#ifdef GLUT_INIT_WINDOW_Y
printf("GLUT_INIT_WINDOW_Y %d\n", 501);
#endif
#ifdef GL_VERTEX_CONSISTENT_HINT_PGI
printf("GL_VERTEX_CONSISTENT_HINT_PGI %d\n", 0x1A22B);
#endif
#ifdef __LDBL_MIN_10_EXP__
#endif
#ifdef GLUT_RED
printf("GLUT_RED %d\n", 0);
#endif
#ifdef GL_MAP1_TEXTURE_COORD_2
printf("GL_MAP1_TEXTURE_COORD_2 %d\n", 0x0D94);
#endif
#ifdef glGetFragmentLightfvSGIX
#endif
#ifdef GL_TEXTURE_COMPRESSED
printf("GL_TEXTURE_COMPRESSED %d\n", 0x86A1);
#endif
#ifdef glFragmentLightfvEXT
#endif
#ifdef GLEE_SGIX_ir_instrument1
#endif
#ifdef __GXX_ABI_VERSION
printf("__GXX_ABI_VERSION %d\n", 1002);
#endif
#ifdef GL_MATRIX_INDEX_ARRAY_STRIDE_ARB
printf("GL_MATRIX_INDEX_ARRAY_STRIDE_ARB %d\n", 0x8848);
#endif
#ifdef GL_REG_26_ATI
printf("GL_REG_26_ATI %d\n", 0x893B);
#endif
#ifdef GL_TEXTURE_MAG_SIZE_NV
printf("GL_TEXTURE_MAG_SIZE_NV %d\n", 0x871F);
#endif
#ifdef GL_PACK_ROW_BYTES_APPLE
printf("GL_PACK_ROW_BYTES_APPLE %d\n", 0x8A15);
#endif
#ifdef GL_EXT_stencil_two_side
printf("GL_EXT_stencil_two_side %d\n", 1);
#endif
#ifdef GL_VERTEX_STREAM4_ATI
printf("GL_VERTEX_STREAM4_ATI %d\n", 0x8770);
#endif
#ifdef GL_NORMALIZE
printf("GL_NORMALIZE %d\n", 0x0BA1);
#endif
#ifdef GL_ADD_SIGNED_ARB
printf("GL_ADD_SIGNED_ARB %d\n", 0x8574);
#endif
#ifdef GL_OPERAND1_ALPHA_ARB
printf("GL_OPERAND1_ALPHA_ARB %d\n", 0x8599);
#endif
#ifdef GL_COLOR_ATTACHMENT4_EXT
printf("GL_COLOR_ATTACHMENT4_EXT %d\n", 0x8CE4);
#endif
#ifdef GL_OPERAND1_RGB_EXT
printf("GL_OPERAND1_RGB_EXT %d\n", 0x8591);
#endif
#ifdef GLUT_GAME_MODE_WIDTH
printf("GLUT_GAME_MODE_WIDTH %d\n", 2);
#endif
#ifdef GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV
printf("GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV %d\n", 0x864E);
#endif
#ifdef glCullParameterfvEXT
#endif
#ifdef GL_RGBA8
printf("GL_RGBA8 %d\n", 0x8058);
#endif
#ifdef GLEE_NV_vertex_program1_1
#endif
#ifdef GLUT_HIDDEN
printf("GLUT_HIDDEN %d\n", 0);
#endif
#ifdef GL_REND_screen_coordinates
printf("GL_REND_screen_coordinates %d\n", 1);
#endif
#ifdef GL_ATI_blend_weighted_minmax
printf("GL_ATI_blend_weighted_minmax %d\n", 1);
#endif
#ifdef GL_COLOR_TABLE_GREEN_SIZE_SGI
printf("GL_COLOR_TABLE_GREEN_SIZE_SGI %d\n", 0x80DB);
#endif
#ifdef GL_TEXTURE25
printf("GL_TEXTURE25 %d\n", 0x84D9);
#endif
#ifdef GL_PACK_RESAMPLE_OML
printf("GL_PACK_RESAMPLE_OML %d\n", 0x8984);
#endif
#ifdef GL_FRAMEZOOM_SGIX
printf("GL_FRAMEZOOM_SGIX %d\n", 0x818B);
#endif
#ifdef glColorPointerEXT
#endif
#ifdef glIsOcclusionQueryNV
#endif
#ifdef glBindTextureEXT
#endif
#ifdef GLEE_ARB_shading_language_100
#endif
#ifdef GL_UNPACK_SUBSAMPLE_RATE_SGIX
printf("GL_UNPACK_SUBSAMPLE_RATE_SGIX %d\n", 0x85A1);
#endif
#ifdef GL_ATI_point_cull_mode
printf("GL_ATI_point_cull_mode %d\n", 1);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_TYPE_EXT
printf("GL_FOG_COORDINATE_ARRAY_TYPE_EXT %d\n", 0x8454);
#endif
#ifdef glGenVertexShadersEXT
#endif
#ifdef GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX
printf("GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX %d\n", 0x8189);
#endif
#ifdef GL_FRAGMENT_LIGHTING_EXT
printf("GL_FRAGMENT_LIGHTING_EXT %d\n", 0x8400);
#endif
#ifdef glColor4fNormal3fVertex3fvSUN
#endif
#ifdef GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI
printf("GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI %d\n", 0x6094);
#endif
#ifdef GL_SGIS_generate_mipmap
printf("GL_SGIS_generate_mipmap %d\n", 1);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT
printf("GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT %d\n", 0x8DD8);
#endif
#ifdef GL_AND_INVERTED
printf("GL_AND_INVERTED %d\n", 0x1504);
#endif
#ifdef GL_LUMINANCE16I_EXT
printf("GL_LUMINANCE16I_EXT %d\n", 0x8D8C);
#endif
#ifdef GL_FLAT
printf("GL_FLAT %d\n", 0x1D00);
#endif
#ifdef GL_SOURCE2_RGB
printf("GL_SOURCE2_RGB %d\n", 0x8582);
#endif
#ifdef GL_DRAW_BUFFER2_ARB
printf("GL_DRAW_BUFFER2_ARB %d\n", 0x8827);
#endif
#ifdef GLEE_EXT_packed_pixels
#endif
#ifdef glIsVariantEnabledEXT
#endif
#ifdef GL_MAT_SHININESS_BIT_PGI
printf("GL_MAT_SHININESS_BIT_PGI %d\n", 0x02000000);
#endif
#ifdef glGetImageTransformParameterfvHP
#endif
#ifdef glMapObjectBufferATI
#endif
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE_EXT
printf("GL_EDGE_FLAG_ARRAY_STRIDE_EXT %d\n", 0x808C);
#endif
#ifdef GLEE_EXT_vertex_weighting
#endif
#ifdef GL_SWIZZLE_STRQ_DQ_ATI
printf("GL_SWIZZLE_STRQ_DQ_ATI %d\n", 0x897B);
#endif
#ifdef GL_LINEAR_MIPMAP_NEAREST
printf("GL_LINEAR_MIPMAP_NEAREST %d\n", 0x2701);
#endif
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA_EXT
printf("GL_ONE_MINUS_CONSTANT_ALPHA_EXT %d\n", 0x8004);
#endif
#ifdef GL_COLOR_LOGIC_OP
printf("GL_COLOR_LOGIC_OP %d\n", 0x0BF2);
#endif
#ifdef GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS
printf("GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS %d\n", 0x8355);
#endif
#ifdef GL_LIGHT5
printf("GL_LIGHT5 %d\n", 0x4005);
#endif
#ifdef GL_TRIANGLE_STRIP
printf("GL_TRIANGLE_STRIP %d\n", 0x0005);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD23_EXT
printf("GL_OUTPUT_TEXTURE_COORD23_EXT %d\n", 0x87B4);
#endif
#ifdef GL_TEXTURE4
printf("GL_TEXTURE4 %d\n", 0x84C4);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY11_NV
printf("GL_VERTEX_ATTRIB_ARRAY11_NV %d\n", 0x865B);
#endif
#ifdef glTexCoord4fVertex4fSUN
#endif
#ifdef GLUT_RIGHT_BUTTON
printf("GLUT_RIGHT_BUTTON %d\n", 2);
#endif
#ifdef GL_RENDERER
printf("GL_RENDERER %d\n", 0x1F01);
#endif
#ifdef GLEE_ATI_vertex_attrib_array_object
#endif
#ifdef GL_SRC1_RGB
printf("GL_SRC1_RGB %d\n", 0x8581);
#endif
#ifdef __GLEE_GL_SUN_mesh_array
printf("__GLEE_GL_SUN_mesh_array %d\n", 1);
#endif
#ifdef GL_ELEMENT_ARRAY_APPLE
printf("GL_ELEMENT_ARRAY_APPLE %d\n", 0x8A0C);
#endif
#ifdef GL_SGIS_sharpen_texture
printf("GL_SGIS_sharpen_texture %d\n", 1);
#endif
#ifdef GL_COMBINE_EXT
printf("GL_COMBINE_EXT %d\n", 0x8570);
#endif
#ifdef glTangent3fEXT
#endif
#ifdef GL_OPERAND4_ALPHA
printf("GL_OPERAND4_ALPHA %d\n", 0x859C);
#endif
#ifdef GL_STRICT_DEPTHFUNC_HINT_PGI
printf("GL_STRICT_DEPTHFUNC_HINT_PGI %d\n", 0x1A216);
#endif
#ifdef __GLEE_GL_EXT_cmyka
printf("__GLEE_GL_EXT_cmyka %d\n", 1);
#endif
#ifdef GL_UNSIGNED_SHORT_5_6_5_REV
printf("GL_UNSIGNED_SHORT_5_6_5_REV %d\n", 0x8364);
#endif
#ifdef GL_TEXTURE_MIN_FILTER
printf("GL_TEXTURE_MIN_FILTER %d\n", 0x2801);
#endif
#ifdef GL_BOOL_VEC3_ARB
printf("GL_BOOL_VEC3_ARB %d\n", 0x8B58);
#endif
#ifdef GL_INTENSITY_FLOAT32_ATI
printf("GL_INTENSITY_FLOAT32_ATI %d\n", 0x8817);
#endif
#ifdef GL_OP_DOT4_EXT
printf("GL_OP_DOT4_EXT %d\n", 0x8785);
#endif
#ifdef GL_COMBINER_AB_OUTPUT_NV
printf("GL_COMBINER_AB_OUTPUT_NV %d\n", 0x854A);
#endif
#ifdef GL_PIXEL_PACK_BUFFER_BINDING
printf("GL_PIXEL_PACK_BUFFER_BINDING %d\n", 0x88ED);
#endif
#ifdef GL_INGR_palette_buffer
printf("GL_INGR_palette_buffer %d\n", 1);
#endif
#ifdef GLUT_WINDOW_NUM_SAMPLES
printf("GLUT_WINDOW_NUM_SAMPLES %d\n", 120);
#endif
#ifdef GLEE_EXT_cmyka
#endif
#ifdef GL_COMBINE_ALPHA_ARB
printf("GL_COMBINE_ALPHA_ARB %d\n", 0x8572);
#endif
#ifdef GL_NUM_PASSES_ATI
printf("GL_NUM_PASSES_ATI %d\n", 0x8970);
#endif
#ifdef glVertexAttrib1sNV
#endif
#ifdef glPrimitiveRestartNV
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_SIZE
printf("GL_SECONDARY_COLOR_ARRAY_SIZE %d\n", 0x845A);
#endif
#ifdef glSetLocalConstantEXT
#endif
#ifdef GL_OFFSET_TEXTURE_2D_MATRIX_NV
#endif
#ifdef GL_DRAW_BUFFER5_ARB
printf("GL_DRAW_BUFFER5_ARB %d\n", 0x882A);
#endif
#ifdef GLEE_SGIX_fog_offset
#endif
#ifdef GL_MAX_VERTEX_ATTRIBS_ARB
printf("GL_MAX_VERTEX_ATTRIBS_ARB %d\n", 0x8869);
#endif
#ifdef GL_PGI_vertex_hints
printf("GL_PGI_vertex_hints %d\n", 1);
#endif
#ifdef GLEE_SGI_depth_pass_instrument
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE_EXT
printf("GL_TEXTURE_COORD_ARRAY_TYPE_EXT %d\n", 0x8089);
#endif
#ifdef glCopyTexSubImage2DEXT
#endif
#ifdef GL_INTERPOLATE_EXT
printf("GL_INTERPOLATE_EXT %d\n", 0x8575);
#endif
#ifdef GL_TEXTURE_LOD_BIAS_T_SGIX
printf("GL_TEXTURE_LOD_BIAS_T_SGIX %d\n", 0x818F);
#endif
#ifdef GL_CLIENT_VERTEX_ARRAY_BIT
printf("GL_CLIENT_VERTEX_ARRAY_BIT %d\n", 0x00000002);
#endif
#ifdef GL_COLOR_TABLE_INTENSITY_SIZE
printf("GL_COLOR_TABLE_INTENSITY_SIZE %d\n", 0x80DF);
#endif
#ifdef __INT_MAX__
printf("__INT_MAX__ %d\n", 2147483647);
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT
printf("GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT %d\n", 0x8402);
#endif
#ifdef GLEE_ARB_transpose_matrix
#endif
#ifdef GL_OPERAND5_ALPHA_ARB
printf("GL_OPERAND5_ALPHA_ARB %d\n", 0x859D);
#endif
#ifdef GL_POLYGON
printf("GL_POLYGON %d\n", 0x0009);
#endif
#ifdef GLEE_SUN_slice_accum
#endif
#ifdef GL_NEAREST_MIPMAP_NEAREST
printf("GL_NEAREST_MIPMAP_NEAREST %d\n", 0x2700);
#endif
#ifdef GL_SGIX_flush_raster
printf("GL_SGIX_flush_raster %d\n", 1);
#endif
#ifdef glGlobalAlphaFactordSUN
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT
printf("GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT %d\n", 0x8DD6);
#endif
#ifdef GLUT_KEY_UP
printf("GLUT_KEY_UP %d\n", 101);
#endif
#ifdef GL_TRANSFORM_BIT
printf("GL_TRANSFORM_BIT %d\n", 0x00001000);
#endif
#ifdef GL_POINT_SIZE_MAX
printf("GL_POINT_SIZE_MAX %d\n", 0x8127);
#endif
#ifdef __GLEE_GL_EXT_texture_perturb_normal
printf("__GLEE_GL_EXT_texture_perturb_normal %d\n", 1);
#endif
#ifdef GL_LINE
printf("GL_LINE %d\n", 0x1B01);
#endif
#ifdef GL_LINE_WIDTH_GRANULARITY
printf("GL_LINE_WIDTH_GRANULARITY %d\n", 0x0B23);
#endif
#ifdef glGetVariantIntegervEXT
#endif
#ifdef GL_EDGE_FLAG_ARRAY_POINTER_EXT
printf("GL_EDGE_FLAG_ARRAY_POINTER_EXT %d\n", 0x8093);
#endif
#ifdef GL_CONSTANT_COLOR0_NV
printf("GL_CONSTANT_COLOR0_NV %d\n", 0x852A);
#endif
#ifdef GLEE_SGIX_flush_raster
#endif
#ifdef GLEE_SGIX_texture_lod_bias
#endif
#ifdef GL_IBM_static_data
printf("GL_IBM_static_data %d\n", 1);
#endif
#ifdef GL_COLOR_BUFFER_BIT
printf("GL_COLOR_BUFFER_BIT %d\n", 0x00004000);
#endif
#ifdef GLUT_CURSOR_WAIT
printf("GLUT_CURSOR_WAIT %d\n", 7);
#endif
#ifdef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT
printf("GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT %d\n", 0x8C8A);
#endif
#ifdef GL_OPERAND5_ALPHA
printf("GL_OPERAND5_ALPHA %d\n", 0x859D);
#endif
#ifdef GL_TEXTURE_1D_BINDING_EXT
printf("GL_TEXTURE_1D_BINDING_EXT %d\n", 0x8068);
#endif
#ifdef GL_MATRIX12_ARB
printf("GL_MATRIX12_ARB %d\n", 0x88CC);
#endif
#ifdef GL_PALETTE4_RGB5_A1_OES
printf("GL_PALETTE4_RGB5_A1_OES %d\n", 0x8B94);
#endif
#ifdef GL_COLOR_TABLE_SCALE
printf("GL_COLOR_TABLE_SCALE %d\n", 0x80D6);
#endif
#ifdef GL_PACK_SKIP_VOLUMES_SGIS
printf("GL_PACK_SKIP_VOLUMES_SGIS %d\n", 0x8130);
#endif
#ifdef GL_R1UI_N3F_V3F_SUN
printf("GL_R1UI_N3F_V3F_SUN %d\n", 0x85C7);
#endif
#ifdef GLEE_EXT_vertex_shader
#endif
#ifdef GL_TEXTURE_INTENSITY_TYPE_ARB
printf("GL_TEXTURE_INTENSITY_TYPE_ARB %d\n", 0x8C15);
#endif
#ifdef glFragmentLightModelfvEXT
#endif
#ifdef GL_MULTISAMPLE_BIT
printf("GL_MULTISAMPLE_BIT %d\n", 0x20000000);
#endif
#ifdef GL_NATIVE_GRAPHICS_END_HINT_PGI
printf("GL_NATIVE_GRAPHICS_END_HINT_PGI %d\n", 0x1A204);
#endif
#ifdef GL_REG_29_ATI
printf("GL_REG_29_ATI %d\n", 0x893E);
#endif
#ifdef GL_RGBA16UI_EXT
printf("GL_RGBA16UI_EXT %d\n", 0x8D76);
#endif
#ifdef GL_NORMAL_ARRAY_BUFFER_BINDING_ARB
printf("GL_NORMAL_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8897);
#endif
#ifdef GL_REG_3_ATI
printf("GL_REG_3_ATI %d\n", 0x8924);
#endif
#ifdef GL_EXT_fragment_lighting
printf("GL_EXT_fragment_lighting %d\n", 1);
#endif
#ifdef __GLEE_GL_MESA_window_pos
printf("__GLEE_GL_MESA_window_pos %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY1_NV
printf("GL_VERTEX_ATTRIB_ARRAY1_NV %d\n", 0x8651);
#endif
#ifdef GL_MAX_VERTEX_SHADER_VARIANTS_EXT
printf("GL_MAX_VERTEX_SHADER_VARIANTS_EXT %d\n", 0x87C6);
#endif
#ifdef GL_UNSIGNED_BYTE_3_3_2
printf("GL_UNSIGNED_BYTE_3_3_2 %d\n", 0x8032);
#endif
#ifdef GL_SAMPLES
printf("GL_SAMPLES %d\n", 0x80A9);
#endif
#ifdef GL_FOG_BIT
printf("GL_FOG_BIT %d\n", 0x00000080);
#endif
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI
printf("GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI %d\n", 0x8837);
#endif
#ifdef GL_SGIX_igloo_interface
printf("GL_SGIX_igloo_interface %d\n", 1);
#endif
#ifdef GL_LEFT
printf("GL_LEFT %d\n", 0x0406);
#endif
#ifdef GL_NV_fragment_program2
printf("GL_NV_fragment_program2 %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY12_NV
printf("GL_VERTEX_ATTRIB_ARRAY12_NV %d\n", 0x865C);
#endif
#ifdef GL_VERTEX_PROGRAM_NV
printf("GL_VERTEX_PROGRAM_NV %d\n", 0x8620);
#endif
#ifdef GLEE_ARB_imaging
#endif
#ifdef GL_SHADOW_AMBIENT_SGIX
printf("GL_SHADOW_AMBIENT_SGIX %d\n", 0x80BF);
#endif
#ifdef GLU_NURBS_TEXTURE_COORD
printf("GLU_NURBS_TEXTURE_COORD %d\n", 100168);
#endif
#ifdef GL_VERTEX_ARRAY_COUNT_EXT
printf("GL_VERTEX_ARRAY_COUNT_EXT %d\n", 0x807D);
#endif
#ifdef GL_PACK_SKIP_PIXELS
printf("GL_PACK_SKIP_PIXELS %d\n", 0x0D04);
#endif
#ifdef GLUT_CURSOR_TOP_SIDE
printf("GLUT_CURSOR_TOP_SIDE %d\n", 12);
#endif
#ifdef GL_ENV_BLEND_EXT
printf("GL_ENV_BLEND_EXT %d\n", 0);
#endif
#ifdef __NO_INLINE__
printf("__NO_INLINE__ %d\n", 1);
#endif
#ifdef GL_MATRIX_MODE
printf("GL_MATRIX_MODE %d\n", 0x0BA0);
#endif
#ifdef glDeformSGIX
#endif
#ifdef GL_OPERAND2_ALPHA
printf("GL_OPERAND2_ALPHA %d\n", 0x859A);
#endif
#ifdef GL_APPLE_packed_pixels
printf("GL_APPLE_packed_pixels %d\n", 1);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_POINTER
printf("GL_FOG_COORDINATE_ARRAY_POINTER %d\n", 0x8456);
#endif
#ifdef GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB
printf("GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB %d\n", 0x88B6);
#endif
#ifdef GLEE_SGIX_texture_select
#endif
#ifdef GLUT_ACTIVE_ALT
printf("GLUT_ACTIVE_ALT %d\n", 4);
#endif
#ifdef GL_PROGRAM_BINDING_ARB
printf("GL_PROGRAM_BINDING_ARB %d\n", 0x8677);
#endif
#ifdef GLEE_EXT_bgra
#endif
#ifdef GLU_NURBS_ERROR32
printf("GLU_NURBS_ERROR32 %d\n", 100282);
#endif
#ifdef GLUT_KEY_F5
printf("GLUT_KEY_F5 %d\n", 5);
#endif
#ifdef GL_COMPRESSED_SLUMINANCE
printf("GL_COMPRESSED_SLUMINANCE %d\n", 0x8C4A);
#endif
#ifdef GL_MATRIX_INDEX_ARRAY_SIZE_ARB
printf("GL_MATRIX_INDEX_ARRAY_SIZE_ARB %d\n", 0x8846);
#endif
#ifdef GL_FENCE_STATUS_NV
printf("GL_FENCE_STATUS_NV %d\n", 0x84F3);
#endif
#ifdef GL_TEXTURE_GEN_S
printf("GL_TEXTURE_GEN_S %d\n", 0x0C60);
#endif
#ifdef GL_EXT_transform_feedback
printf("GL_EXT_transform_feedback %d\n", 1);
#endif
#ifdef GL_FLOAT_MAT3x2
printf("GL_FLOAT_MAT3x2 %d\n", 0x8B67);
#endif
#ifdef GL_RGB16_EXTENDED_RANGE_SGIX
printf("GL_RGB16_EXTENDED_RANGE_SGIX %d\n", 0x85F2);
#endif
#ifdef GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
printf("GL_COMPRESSED_RGBA_S3TC_DXT3_EXT %d\n", 0x83F2);
#endif
#ifdef GL_DRAW_BUFFER6_ATI
printf("GL_DRAW_BUFFER6_ATI %d\n", 0x882B);
#endif
#ifdef GL_MATRIX26_ARB
printf("GL_MATRIX26_ARB %d\n", 0x88DA);
#endif
#ifdef GL_INT
printf("GL_INT %d\n", 0x1404);
#endif
#ifdef GL_INDEX_ARRAY_COUNT_EXT
printf("GL_INDEX_ARRAY_COUNT_EXT %d\n", 0x8087);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE
printf("GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE %d\n", 0x8A06);
#endif
#ifdef GL_MINMAX_SINK_EXT
printf("GL_MINMAX_SINK_EXT %d\n", 0x8030);
#endif
#ifdef GL_RESAMPLE_DECIMATE_SGIX
printf("GL_RESAMPLE_DECIMATE_SGIX %d\n", 0x8430);
#endif
#ifdef GLU_TESS_BEGIN
printf("GLU_TESS_BEGIN %d\n", 100100);
#endif
#ifdef glGetFragmentMaterialfvEXT
#endif
#ifdef GL_NOTEQUAL
printf("GL_NOTEQUAL %d\n", 0x0205);
#endif
#ifdef __FLT_EPSILON__
#endif
#ifdef glVertexAttrib4sNV
#endif
#ifdef GL_ARB_vertex_blend
printf("GL_ARB_vertex_blend %d\n", 1);
#endif
#ifdef GL_CLIP_PLANE1
printf("GL_CLIP_PLANE1 %d\n", 0x3001);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB7_4_NV
printf("GL_MAP1_VERTEX_ATTRIB7_4_NV %d\n", 0x8667);
#endif
#ifdef GLUT_VIDEO_RESIZE_Y_DELTA
printf("GLUT_VIDEO_RESIZE_Y_DELTA %d\n", 903);
#endif
#ifdef GL_UNSIGNED_IDENTITY_NV
printf("GL_UNSIGNED_IDENTITY_NV %d\n", 0x8536);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB %d\n", 0x8516);
#endif
#ifdef GL_INVARIANT_EXT
printf("GL_INVARIANT_EXT %d\n", 0x87C2);
#endif
#ifdef GL_SAMPLER_2D_SHADOW
printf("GL_SAMPLER_2D_SHADOW %d\n", 0x8B62);
#endif
#ifdef GL_INFO_LOG_LENGTH
printf("GL_INFO_LOG_LENGTH %d\n", 0x8B84);
#endif
#ifdef GL_MIN
printf("GL_MIN %d\n", 0x8007);
#endif
#ifdef glGetColorTableParameterivSGI
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY10_NV
printf("GL_VERTEX_ATTRIB_ARRAY10_NV %d\n", 0x865A);
#endif
#ifdef GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX
printf("GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX %d\n", 0x85F7);
#endif
#ifdef GL_MAX_PROGRAM_LOOP_DEPTH_NV
printf("GL_MAX_PROGRAM_LOOP_DEPTH_NV %d\n", 0x88F7);
#endif
#ifdef GLUT_VIDEO_RESIZE_Y
printf("GLUT_VIDEO_RESIZE_Y %d\n", 907);
#endif
#ifdef GL_MULTISAMPLE_ARB
printf("GL_MULTISAMPLE_ARB %d\n", 0x809D);
#endif
#ifdef GL_SGIS_point_line_texgen
printf("GL_SGIS_point_line_texgen %d\n", 1);
#endif
#ifdef GL_UNSIGNED_SHORT_8_8_REV_MESA
printf("GL_UNSIGNED_SHORT_8_8_REV_MESA %d\n", 0x85BB);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD14_EXT
printf("GL_OUTPUT_TEXTURE_COORD14_EXT %d\n", 0x87AB);
#endif
#ifdef GL_DYNAMIC_ATI
printf("GL_DYNAMIC_ATI %d\n", 0x8761);
#endif
#ifdef glReplacementCodeuiSUN
#endif
#ifdef GL_BUFFER_ACCESS
printf("GL_BUFFER_ACCESS %d\n", 0x88BB);
#endif
#ifdef GL_RGB_FLOAT16_APPLE
printf("GL_RGB_FLOAT16_APPLE %d\n", 0x881B);
#endif
#ifdef __MMX__
printf("__MMX__ %d\n", 1);
#endif
#ifdef glDetailTexFuncSGIS
#endif
#ifdef GL_SRGB_ALPHA_EXT
printf("GL_SRGB_ALPHA_EXT %d\n", 0x8C42);
#endif
#ifdef GL_HP_texture_lighting
printf("GL_HP_texture_lighting %d\n", 1);
#endif
#ifdef GL_INT_VEC2_ARB
printf("GL_INT_VEC2_ARB %d\n", 0x8B53);
#endif
#ifdef glVertexAttrib2fNV
#endif
#ifdef glIsFenceNV
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT %d\n", 0x8CD6);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_POINTER_NV
printf("GL_VERTEX_ARRAY_RANGE_POINTER_NV %d\n", 0x8521);
#endif
#ifdef GL_COMPRESSED_SRGB
printf("GL_COMPRESSED_SRGB %d\n", 0x8C48);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT
printf("GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT %d\n", 0x8408);
#endif
#ifdef GL_VERTEX_PRECLIP_HINT_SGIX
printf("GL_VERTEX_PRECLIP_HINT_SGIX %d\n", 0x83EF);
#endif
#ifdef GL_INTERLEAVED_ATTRIBS_EXT
printf("GL_INTERLEAVED_ATTRIBS_EXT %d\n", 0x8C8C);
#endif
#ifdef GL_STENCIL_BACK_WRITEMASK
printf("GL_STENCIL_BACK_WRITEMASK %d\n", 0x8CA5);
#endif
#ifdef GL_ALPHA16
printf("GL_ALPHA16 %d\n", 0x803E);
#endif
#ifdef GL_EQUAL
printf("GL_EQUAL %d\n", 0x0202);
#endif
#ifdef GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP
printf("GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP %d\n", 0x8162);
#endif
#ifdef GL_STENCIL_BITS
printf("GL_STENCIL_BITS %d\n", 0x0D57);
#endif
#ifdef glPointParameterfSGIS
#endif
#ifdef GL_CURRENT_SECONDARY_COLOR
printf("GL_CURRENT_SECONDARY_COLOR %d\n", 0x8459);
#endif
#ifdef GLEE_HP_convolution_border_modes
#endif
#ifdef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT
printf("GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT %d\n", 0x8DDF);
#endif
#ifdef GLUT_WINDOW_STEREO
printf("GLUT_WINDOW_STEREO %d\n", 121);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD0_EXT
printf("GL_OUTPUT_TEXTURE_COORD0_EXT %d\n", 0x879D);
#endif
#ifdef GL_SWIZZLE_STRQ_ATI
printf("GL_SWIZZLE_STRQ_ATI %d\n", 0x897A);
#endif
#ifdef GL_OPERAND4_RGB_ARB
printf("GL_OPERAND4_RGB_ARB %d\n", 0x8594);
#endif
#ifdef GL_SAMPLE_PATTERN_SGIS
printf("GL_SAMPLE_PATTERN_SGIS %d\n", 0x80AC);
#endif
#ifdef __GLEE_GL_SGIX_texture_add_env
printf("__GLEE_GL_SGIX_texture_add_env %d\n", 1);
#endif
#ifdef GL_RGBA8_EXT
printf("GL_RGBA8_EXT %d\n", 0x8058);
#endif
#ifdef GL_FLOAT_RG_NV
printf("GL_FLOAT_RG_NV %d\n", 0x8881);
#endif
#ifdef glVariantuivEXT
#endif
#ifdef GL_ARB_imaging
printf("GL_ARB_imaging %d\n", 1);
#endif
#ifdef GLEE_VERSION_1_4
#endif
#ifdef GL_TEXTURE_ENV_BIAS_SGIX
printf("GL_TEXTURE_ENV_BIAS_SGIX %d\n", 0x80BE);
#endif
#ifdef GL_FIXED_ONLY_ARB
printf("GL_FIXED_ONLY_ARB %d\n", 0x891D);
#endif
#ifdef GLEE_ARB_texture_mirrored_repeat
#endif
#ifdef GLU_NURBS_END
printf("GLU_NURBS_END %d\n", 100169);
#endif
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB
printf("GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB %d\n", 0x851C);
#endif
#ifdef GL_FOG
printf("GL_FOG %d\n", 0x0B60);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB %d\n", 0x889F);
#endif
#ifdef GL_ALPHA_BIAS
printf("GL_ALPHA_BIAS %d\n", 0x0D1D);
#endif
#ifdef GL_UNSIGNED_BYTE_2_3_3_REV
printf("GL_UNSIGNED_BYTE_2_3_3_REV %d\n", 0x8362);
#endif
#ifdef GLEE_MESA_window_pos
#endif
#ifdef GL_VERTEX_ARRAY_EXT
printf("GL_VERTEX_ARRAY_EXT %d\n", 0x8074);
#endif
#ifdef glVertexAttrib2hNV
#endif
#ifdef GL_CLAMP_VERTEX_COLOR_ARB
printf("GL_CLAMP_VERTEX_COLOR_ARB %d\n", 0x891A);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB12_4_NV
printf("GL_MAP2_VERTEX_ATTRIB12_4_NV %d\n", 0x867C);
#endif
#ifdef GL_COLOR_TABLE_BLUE_SIZE
printf("GL_COLOR_TABLE_BLUE_SIZE %d\n", 0x80DC);
#endif
#ifdef GLU_POINT
printf("GLU_POINT %d\n", 100010);
#endif
#ifdef GL_SIGNED_INTENSITY8_NV
printf("GL_SIGNED_INTENSITY8_NV %d\n", 0x8708);
#endif
#ifdef GL_8X_BIT_ATI
printf("GL_8X_BIT_ATI %d\n", 0x00000004);
#endif
#ifdef GL_REPLICATE_BORDER
printf("GL_REPLICATE_BORDER %d\n", 0x8153);
#endif
#ifdef glWindowPos2iMESA
#endif
#ifdef GLU_NURBS_ERROR33
printf("GLU_NURBS_ERROR33 %d\n", 100283);
#endif
#ifdef GL_ATI_blend_equation_separate
printf("GL_ATI_blend_equation_separate %d\n", 1);
#endif
#ifdef GL_SCALE_BY_TWO_NV
printf("GL_SCALE_BY_TWO_NV %d\n", 0x853E);
#endif
#ifdef GL_DETAIL_TEXTURE_LEVEL_SGIS
printf("GL_DETAIL_TEXTURE_LEVEL_SGIS %d\n", 0x809A);
#endif
#ifdef GL_DRAW_BUFFER3
printf("GL_DRAW_BUFFER3 %d\n", 0x8828);
#endif
#ifdef __GLEE_GL_NV_texture_compression_vtc
printf("__GLEE_GL_NV_texture_compression_vtc %d\n", 1);
#endif
#ifdef glConvolutionParameterfvEXT
#endif
#ifdef GL_LUMINANCE_FLOAT16_APPLE
printf("GL_LUMINANCE_FLOAT16_APPLE %d\n", 0x881E);
#endif
#ifdef GL_OPERAND0_RGB
printf("GL_OPERAND0_RGB %d\n", 0x8590);
#endif
#ifdef GL_COMBINE_ALPHA_EXT
printf("GL_COMBINE_ALPHA_EXT %d\n", 0x8572);
#endif
#ifdef GL_PERTURB_EXT
printf("GL_PERTURB_EXT %d\n", 0x85AE);
#endif
#ifdef GL_COLOR_CLEAR_VALUE
printf("GL_COLOR_CLEAR_VALUE %d\n", 0x0C22);
#endif
#ifdef GL_CUBIC_EXT
printf("GL_CUBIC_EXT %d\n", 0x8334);
#endif
#ifdef glPrimitiveRestartIndexNV
#endif
#ifdef GL_TEXTURE_BINDING_CUBE_MAP
printf("GL_TEXTURE_BINDING_CUBE_MAP %d\n", 0x8514);
#endif
#ifdef GL_SGIX_ycrcba
printf("GL_SGIX_ycrcba %d\n", 1);
#endif
#ifdef GLEE_ARB_point_parameters
#endif
#ifdef GLUT_XLIB_IMPLEMENTATION
printf("GLUT_XLIB_IMPLEMENTATION %d\n", 15);
#endif
#ifdef GL_TEXTURE12
printf("GL_TEXTURE12 %d\n", 0x84CC);
#endif
#ifdef GLEE_ARB_texture_cube_map
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_SGIX
printf("GL_FRAGMENT_COLOR_MATERIAL_SGIX %d\n", 0x8401);
#endif
#ifdef GL_NV_occlusion_query
printf("GL_NV_occlusion_query %d\n", 1);
#endif
#ifdef GL_COLOR_ATTACHMENT8_EXT
printf("GL_COLOR_ATTACHMENT8_EXT %d\n", 0x8CE8);
#endif
#ifdef GL_PROGRAM_LENGTH_NV
printf("GL_PROGRAM_LENGTH_NV %d\n", 0x8627);
#endif
#ifdef GL_INSTRUMENT_BUFFER_POINTER_SGIX
printf("GL_INSTRUMENT_BUFFER_POINTER_SGIX %d\n", 0x8180);
#endif
#ifdef glGetFragmentLightivSGIX
#endif
#ifdef GL_STENCIL_CLEAR_TAG_VALUE_EXT
printf("GL_STENCIL_CLEAR_TAG_VALUE_EXT %d\n", 0x88F3);
#endif
#ifdef GLU_NURBS_COLOR_EXT
printf("GLU_NURBS_COLOR_EXT %d\n", 100167);
#endif
#ifdef GL_CON_28_ATI
printf("GL_CON_28_ATI %d\n", 0x895D);
#endif
#ifdef GL_CON_16_ATI
printf("GL_CON_16_ATI %d\n", 0x8951);
#endif
#ifdef GL_TABLE_TOO_LARGE_EXT
printf("GL_TABLE_TOO_LARGE_EXT %d\n", 0x8031);
#endif
#ifdef GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX
printf("GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX %d\n", 0x8187);
#endif
#ifdef GL_MODELVIEW5_ARB
printf("GL_MODELVIEW5_ARB %d\n", 0x8725);
#endif
#ifdef GL_DRAW_BUFFER9_ATI
printf("GL_DRAW_BUFFER9_ATI %d\n", 0x882E);
#endif
#ifdef GL_BUMP_TARGET_ATI
printf("GL_BUMP_TARGET_ATI %d\n", 0x877C);
#endif
#ifdef GL_APPLE_fence
printf("GL_APPLE_fence %d\n", 1);
#endif
#ifdef GL_MULTISAMPLE_BIT_ARB
printf("GL_MULTISAMPLE_BIT_ARB %d\n", 0x20000000);
#endif
#ifdef GL_OFFSET_TEXTURE_2D_BIAS_NV
#endif
#ifdef GL_RED_BITS
printf("GL_RED_BITS %d\n", 0x0D52);
#endif
#ifdef GL_REFLECTION_MAP_ARB
printf("GL_REFLECTION_MAP_ARB %d\n", 0x8512);
#endif
#ifdef GLEE_EXT_texture_lod_bias
#endif
#ifdef GL_PREVIOUS_ARB
printf("GL_PREVIOUS_ARB %d\n", 0x8578);
#endif
#ifdef GL_NOOP
printf("GL_NOOP %d\n", 0x1505);
#endif
#ifdef glTangent3bEXT
#endif
#ifdef GL_TEXTURE_WRAP_S
printf("GL_TEXTURE_WRAP_S %d\n", 0x2802);
#endif
#ifdef GL_CON_9_ATI
printf("GL_CON_9_ATI %d\n", 0x894A);
#endif
#ifdef glWindowPos3iMESA
#endif
#ifdef glTexCoord2fColor4fNormal3fVertex3fSUN
#endif
#ifdef GLUT_KEY_HOME
printf("GLUT_KEY_HOME %d\n", 106);
#endif
#ifdef GL_SPARE1_NV
printf("GL_SPARE1_NV %d\n", 0x852F);
#endif
#ifdef GL_DRAW_BUFFER13
printf("GL_DRAW_BUFFER13 %d\n", 0x8832);
#endif
#ifdef GL_FLOAT_RG16_NV
printf("GL_FLOAT_RG16_NV %d\n", 0x8886);
#endif
#ifdef GLEE_NV_pixel_data_range
#endif
#ifdef GL_EXT_polygon_offset
printf("GL_EXT_polygon_offset %d\n", 1);
#endif
#ifdef GLEE_ATI_element_array
#endif
#ifdef glMapParameterfvNV
#endif
#ifdef GL_PIXEL_MAP_I_TO_R
printf("GL_PIXEL_MAP_I_TO_R %d\n", 0x0C72);
#endif
#ifdef GL_CULL_VERTEX_EYE_POSITION_EXT
printf("GL_CULL_VERTEX_EYE_POSITION_EXT %d\n", 0x81AB);
#endif
#ifdef GL_SPRITE_OBJECT_ALIGNED_SGIX
printf("GL_SPRITE_OBJECT_ALIGNED_SGIX %d\n", 0x814D);
#endif
#ifdef GL_DEPENDENT_HILO_TEXTURE_2D_NV
printf("GL_DEPENDENT_HILO_TEXTURE_2D_NV %d\n", 0x8858);
#endif
#ifdef GL_DOT4_ATI
printf("GL_DOT4_ATI %d\n", 0x8967);
#endif
#ifdef GL_SPARE0_NV
printf("GL_SPARE0_NV %d\n", 0x852E);
#endif
#ifdef glOrthofOES
#endif
#ifdef GL_SIGNED_LUMINANCE8_ALPHA8_NV
printf("GL_SIGNED_LUMINANCE8_ALPHA8_NV %d\n", 0x8704);
#endif
#ifdef GL_LESS
printf("GL_LESS %d\n", 0x0201);
#endif
#ifdef GL_REGISTER_COMBINERS_NV
printf("GL_REGISTER_COMBINERS_NV %d\n", 0x8522);
#endif
#ifdef GL_FOG_COORD_ARRAY
printf("GL_FOG_COORD_ARRAY %d\n", 0x8457);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD19_EXT
printf("GL_OUTPUT_TEXTURE_COORD19_EXT %d\n", 0x87B0);
#endif
#ifdef GL_NORMAL_ARRAY_TYPE
printf("GL_NORMAL_ARRAY_TYPE %d\n", 0x807E);
#endif
#ifdef GL_PALETTE8_RGB8_OES
printf("GL_PALETTE8_RGB8_OES %d\n", 0x8B95);
#endif
#ifdef GL_SRC6_RGB
printf("GL_SRC6_RGB %d\n", 0x8586);
#endif
#ifdef GL_PROGRAM_OBJECT_ARB
printf("GL_PROGRAM_OBJECT_ARB %d\n", 0x8B40);
#endif
#ifdef glFogCoordhNV
#endif
#ifdef GL_SGIX_calligraphic_fragment
printf("GL_SGIX_calligraphic_fragment %d\n", 1);
#endif
#ifdef GL_SIGNED_RGB_UNSIGNED_ALPHA_NV
printf("GL_SIGNED_RGB_UNSIGNED_ALPHA_NV %d\n", 0x870C);
#endif
#ifdef GL_PIXEL_TILE_GRID_HEIGHT_SGIX
printf("GL_PIXEL_TILE_GRID_HEIGHT_SGIX %d\n", 0x8143);
#endif
#ifdef __GLEE_GL_EXT_point_parameters
printf("__GLEE_GL_EXT_point_parameters %d\n", 1);
#endif
#ifdef __GLEE_GL_OES_single_precision
printf("__GLEE_GL_OES_single_precision %d\n", 1);
#endif
#ifdef GL_2PASS_0_SGIS
printf("GL_2PASS_0_SGIS %d\n", 0x80A2);
#endif
#ifdef glVertexAttrib3fNV
#endif
#ifdef GL_LIGHT2
printf("GL_LIGHT2 %d\n", 0x4002);
#endif
#ifdef GL_MODELVIEW21_ARB
printf("GL_MODELVIEW21_ARB %d\n", 0x8735);
#endif
#ifdef GL_MATRIX28_ARB
printf("GL_MATRIX28_ARB %d\n", 0x88DC);
#endif
#ifdef GL_APPLE_texture_range
printf("GL_APPLE_texture_range %d\n", 1);
#endif
#ifdef GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB
printf("GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB %d\n", 0x880D);
#endif
#ifdef GL_RGBA8I_EXT
printf("GL_RGBA8I_EXT %d\n", 0x8D8E);
#endif
#ifdef GL_PARALLEL_ARRAYS_INTEL
printf("GL_PARALLEL_ARRAYS_INTEL %d\n", 0x83F4);
#endif
#ifdef GL_ALPHA16_EXTENDED_RANGE_SGIX
printf("GL_ALPHA16_EXTENDED_RANGE_SGIX %d\n", 0x85F4);
#endif
#ifdef __GLEE_GL_NV_occlusion_query
printf("__GLEE_GL_NV_occlusion_query %d\n", 1);
#endif
#ifdef __GLEE_GL_ATI_pixel_format_float
printf("__GLEE_GL_ATI_pixel_format_float %d\n", 1);
#endif
#ifdef GL_ARB_point_sprite
printf("GL_ARB_point_sprite %d\n", 1);
#endif
#ifdef GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL
printf("GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL %d\n", 0x83F7);
#endif
#ifdef GL_UNPACK_IMAGE_HEIGHT
printf("GL_UNPACK_IMAGE_HEIGHT %d\n", 0x806E);
#endif
#ifdef GL_VERTEX_SHADER_BINDING_EXT
printf("GL_VERTEX_SHADER_BINDING_EXT %d\n", 0x8781);
#endif
#ifdef GL_LO_SCALE_NV
printf("GL_LO_SCALE_NV %d\n", 0x870F);
#endif
#ifdef GL_COMBINE_RGB_ARB
printf("GL_COMBINE_RGB_ARB %d\n", 0x8571);
#endif
#ifdef glWindowPos2svMESA
#endif
#ifdef GLEE_SGIX_fragment_lighting
#endif
#ifdef GL_OBJECT_SUBTYPE_ARB
printf("GL_OBJECT_SUBTYPE_ARB %d\n", 0x8B4F);
#endif
#ifdef GL_PROXY_TEXTURE_2D_STACK_MESAX
printf("GL_PROXY_TEXTURE_2D_STACK_MESAX %d\n", 0x875C);
#endif
#ifdef GL_ARB_vertex_program
printf("GL_ARB_vertex_program %d\n", 1);
#endif
#ifdef GL_GREEN_BITS
printf("GL_GREEN_BITS %d\n", 0x0D53);
#endif
#ifdef __GLEE_GL_SUN_convolution_border_modes
printf("__GLEE_GL_SUN_convolution_border_modes %d\n", 1);
#endif
#ifdef GL_OPERAND6_RGB
printf("GL_OPERAND6_RGB %d\n", 0x8596);
#endif
#ifdef GL_TEXTURE_MIN_LOD_SGIS
printf("GL_TEXTURE_MIN_LOD_SGIS %d\n", 0x813A);
#endif
#ifdef glWindowPos4svMESA
#endif
#ifdef GL_QUADS
printf("GL_QUADS %d\n", 0x0007);
#endif
#ifdef GL_TEXTURE21
printf("GL_TEXTURE21 %d\n", 0x84D5);
#endif
#ifdef glVertexAttribs4fvNV
#endif
#ifdef GL_REG_27_ATI
printf("GL_REG_27_ATI %d\n", 0x893C);
#endif
#ifdef __GLEE_GL_NV_fragment_program
printf("__GLEE_GL_NV_fragment_program %d\n", 1);
#endif
#ifdef GL_EXT_color_matrix
printf("GL_EXT_color_matrix %d\n", 1);
#endif
#ifdef GL_MAX_VERTEX_STREAMS_ATI
printf("GL_MAX_VERTEX_STREAMS_ATI %d\n", 0x876B);
#endif
#ifdef GL_BOOL_ARB
printf("GL_BOOL_ARB %d\n", 0x8B56);
#endif
#ifdef GL_STENCIL_BACK_PASS_DEPTH_PASS
printf("GL_STENCIL_BACK_PASS_DEPTH_PASS %d\n", 0x8803);
#endif
#ifdef GL_FOG_FUNC_POINTS_SGIS
printf("GL_FOG_FUNC_POINTS_SGIS %d\n", 0x812B);
#endif
#ifdef GL_OUT_OF_MEMORY
printf("GL_OUT_OF_MEMORY %d\n", 0x0505);
#endif
#ifdef __DECIMAL_DIG__
printf("__DECIMAL_DIG__ %d\n", 21);
#endif
#ifdef GL_MULTISAMPLE_SGIS
printf("GL_MULTISAMPLE_SGIS %d\n", 0x809D);
#endif
#ifdef __GLEE_GL_3DFX_tbuffer
printf("__GLEE_GL_3DFX_tbuffer %d\n", 1);
#endif
#ifdef GL_FOG_COORDINATE_SOURCE_EXT
printf("GL_FOG_COORDINATE_SOURCE_EXT %d\n", 0x8450);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB %d\n", 0x851A);
#endif
#ifdef GL_COMBINER7_NV
printf("GL_COMBINER7_NV %d\n", 0x8557);
#endif
#ifdef GL_BLEND_SRC_ALPHA
printf("GL_BLEND_SRC_ALPHA %d\n", 0x80CB);
#endif
#ifdef GL_RASTERIZER_DISCARD_EXT
printf("GL_RASTERIZER_DISCARD_EXT %d\n", 0x8C89);
#endif
#ifdef GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
printf("GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES %d\n", 0x8B9B);
#endif
#ifdef glProgramParameter4dvNV
#endif
#ifdef glColorFragmentOp1ATI
#endif
#ifdef GL_HP_occlusion_test
printf("GL_HP_occlusion_test %d\n", 1);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD26_EXT
printf("GL_OUTPUT_TEXTURE_COORD26_EXT %d\n", 0x87B7);
#endif
#ifdef GL_OFFSET_TEXTURE_SCALE_NV
printf("GL_OFFSET_TEXTURE_SCALE_NV %d\n", 0x86E2);
#endif
#ifdef GL_UNPACK_LSB_FIRST
printf("GL_UNPACK_LSB_FIRST %d\n", 0x0CF1);
#endif
#ifdef GL_REFERENCE_PLANE_EQUATION_SGIX
printf("GL_REFERENCE_PLANE_EQUATION_SGIX %d\n", 0x817E);
#endif
#ifdef GL_INTENSITY_FLOAT32_APPLE
printf("GL_INTENSITY_FLOAT32_APPLE %d\n", 0x8817);
#endif
#ifdef GL_STEREO
printf("GL_STEREO %d\n", 0x0C33);
#endif
#ifdef GL_FLOAT_RGBA_NV
printf("GL_FLOAT_RGBA_NV %d\n", 0x8883);
#endif
#ifdef GL_MATRIX3_ARB
printf("GL_MATRIX3_ARB %d\n", 0x88C3);
#endif
#ifdef GL_DUAL_ALPHA16_SGIS
printf("GL_DUAL_ALPHA16_SGIS %d\n", 0x8113);
#endif
#ifdef GL_CON_13_ATI
printf("GL_CON_13_ATI %d\n", 0x894E);
#endif
#ifdef GL_MAP2_NORMAL
printf("GL_MAP2_NORMAL %d\n", 0x0DB2);
#endif
#ifdef GL_CLIENT_ALL_ATTRIB_BITS
printf("GL_CLIENT_ALL_ATTRIB_BITS %d\n", 0xffffffff);
#endif
#ifdef GL_OP_MADD_EXT
printf("GL_OP_MADD_EXT %d\n", 0x8788);
#endif
#ifdef GL_PALETTE4_R5_G6_B5_OES
printf("GL_PALETTE4_R5_G6_B5_OES %d\n", 0x8B92);
#endif
#ifdef GL_EXT_texture_sRGB
printf("GL_EXT_texture_sRGB %d\n", 1);
#endif
#ifdef __GLEE_GL_IBM_multimode_draw_arrays
printf("__GLEE_GL_IBM_multimode_draw_arrays %d\n", 1);
#endif
#ifdef glTexCoord2fColor4ubVertex3fvSUN
#endif
#ifdef GL_DEPTH_STENCIL_NV
printf("GL_DEPTH_STENCIL_NV %d\n", 0x84F9);
#endif
#ifdef GL_TEXTURE_INTENSITY_SIZE_EXT
printf("GL_TEXTURE_INTENSITY_SIZE_EXT %d\n", 0x8061);
#endif
#ifdef GL_CONVOLUTION_HINT_SGIX
printf("GL_CONVOLUTION_HINT_SGIX %d\n", 0x8316);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB12_NV
printf("GL_EVAL_VERTEX_ATTRIB12_NV %d\n", 0x86D2);
#endif
#ifdef GL_UNSIGNED_SHORT_1_5_5_5_REV
printf("GL_UNSIGNED_SHORT_1_5_5_5_REV %d\n", 0x8366);
#endif
#ifdef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
printf("GL_PROXY_POST_CONVOLUTION_COLOR_TABLE %d\n", 0x80D4);
#endif
#ifdef glGetMapAttribParameterivNV
#endif
#ifdef GL_PIXEL_MAP_I_TO_G
printf("GL_PIXEL_MAP_I_TO_G %d\n", 0x0C73);
#endif
#ifdef GL_DRAW_BUFFER14_ARB
printf("GL_DRAW_BUFFER14_ARB %d\n", 0x8833);
#endif
#ifdef GL_COLOR_WRITEMASK
printf("GL_COLOR_WRITEMASK %d\n", 0x0C23);
#endif
#ifdef GL_MAX_PROGRAM_CALL_DEPTH_NV
printf("GL_MAX_PROGRAM_CALL_DEPTH_NV %d\n", 0x88F5);
#endif
#ifdef GL_EXT_framebuffer_object
printf("GL_EXT_framebuffer_object %d\n", 1);
#endif
#ifdef GL_FOG_END
printf("GL_FOG_END %d\n", 0x0B64);
#endif
#ifdef GL_SRGB8_EXT
printf("GL_SRGB8_EXT %d\n", 0x8C41);
#endif
#ifdef GL_REG_12_ATI
printf("GL_REG_12_ATI %d\n", 0x892D);
#endif
#ifdef GLUT_JOYSTICK_BUTTON_C
printf("GLUT_JOYSTICK_BUTTON_C %d\n", 4);
#endif
#ifdef glTangent3dEXT
#endif
#ifdef GL_MAGNITUDE_SCALE_NV
printf("GL_MAGNITUDE_SCALE_NV %d\n", 0x8712);
#endif
#ifdef GL_OCCLUSION_TEST_RESULT_HP
printf("GL_OCCLUSION_TEST_RESULT_HP %d\n", 0x8166);
#endif
#ifdef GL_TEXTURE_LIGHT_EXT
printf("GL_TEXTURE_LIGHT_EXT %d\n", 0x8350);
#endif
#ifdef GL_LUMINANCE_ALPHA_FLOAT32_APPLE
printf("GL_LUMINANCE_ALPHA_FLOAT32_APPLE %d\n", 0x8819);
#endif
#ifdef GL_ARB_occlusion_query
printf("GL_ARB_occlusion_query %d\n", 1);
#endif
#ifdef glReplacementCodeusvSUN
#endif
#ifdef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
printf("GL_MAX_CLIENT_ATTRIB_STACK_DEPTH %d\n", 0x0D3B);
#endif
#ifdef GLEE_SGIX_vertex_preclip
#endif
#ifdef GL_PIXEL_SUBSAMPLE_4444_SGIX
printf("GL_PIXEL_SUBSAMPLE_4444_SGIX %d\n", 0x85A2);
#endif
#ifdef GL_BUFFER_SIZE_ARB
printf("GL_BUFFER_SIZE_ARB %d\n", 0x8764);
#endif
#ifdef GL_SWIZZLE_STR_ATI
printf("GL_SWIZZLE_STR_ATI %d\n", 0x8976);
#endif
#ifdef GLEE_EXT_light_texture
#endif
#ifdef GL_VARIANT_ARRAY_TYPE_EXT
printf("GL_VARIANT_ARRAY_TYPE_EXT %d\n", 0x87E7);
#endif
#ifdef GL_DOT3_RGBA_EXT
printf("GL_DOT3_RGBA_EXT %d\n", 0x8741);
#endif
#ifdef GL_PROXY_TEXTURE_RECTANGLE_EXT
printf("GL_PROXY_TEXTURE_RECTANGLE_EXT %d\n", 0x84F7);
#endif
#ifdef glTexCoord2fColor3fVertex3fvSUN
#endif
#ifdef __GLEE_GL_SGIX_sprite
printf("__GLEE_GL_SGIX_sprite %d\n", 1);
#endif
#ifdef GL_LUMINANCE8_EXT
printf("GL_LUMINANCE8_EXT %d\n", 0x8040);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT
printf("GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT %d\n", 0x840A);
#endif
#ifdef GL_UNSIGNED_SHORT_5_5_5_1_EXT
printf("GL_UNSIGNED_SHORT_5_5_5_1_EXT %d\n", 0x8034);
#endif
#ifdef GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV
printf("GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV %d\n", 0x862E);
#endif
#ifdef GL_EXT_texture
printf("GL_EXT_texture %d\n", 1);
#endif
#ifdef glLightEnviSGIX
#endif
#ifdef GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT
printf("GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT %d\n", 0x850F);
#endif
#ifdef GLU_TESS_ERROR1
printf("GLU_TESS_ERROR1 %d\n", 100151);
#endif
#ifdef GL_SAMPLE_MASK_EXT
printf("GL_SAMPLE_MASK_EXT %d\n", 0x80A0);
#endif
#ifdef GLEE_NV_multisample_filter_hint
#endif
#ifdef GL_REG_13_ATI
printf("GL_REG_13_ATI %d\n", 0x892E);
#endif
#ifdef GL_OFFSET_TEXTURE_2D_SCALE_NV
#endif
#ifdef GLUT_RGBA
#endif
#ifdef GL_APPLE_specular_vector
printf("GL_APPLE_specular_vector %d\n", 1);
#endif
#ifdef GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI
printf("GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI %d\n", 0x80B7);
#endif
#ifdef GL_ALWAYS
printf("GL_ALWAYS %d\n", 0x0207);
#endif
#ifdef GLEE_SGIX_texture_coordinate_clamp
#endif
#ifdef GL_TEXTURE_BASE_LEVEL
printf("GL_TEXTURE_BASE_LEVEL %d\n", 0x813C);
#endif
#ifdef GLUT_KEY_RIGHT
printf("GLUT_KEY_RIGHT %d\n", 102);
#endif
#ifdef GL_ARB_fragment_program
printf("GL_ARB_fragment_program %d\n", 1);
#endif
#ifdef __DBL_MAX_10_EXP__
printf("__DBL_MAX_10_EXP__ %d\n", 308);
#endif
#ifdef __GLEE_GL_INTEL_parallel_arrays
printf("__GLEE_GL_INTEL_parallel_arrays %d\n", 1);
#endif
#ifdef GL_PROXY_TEXTURE_CUBE_MAP_ARB
printf("GL_PROXY_TEXTURE_CUBE_MAP_ARB %d\n", 0x851B);
#endif
#ifdef GL_MESA_resize_buffers
printf("GL_MESA_resize_buffers %d\n", 1);
#endif
#ifdef GL_SGI_color_table
printf("GL_SGI_color_table %d\n", 1);
#endif
#ifdef GLU_NURBS_ERROR3
printf("GLU_NURBS_ERROR3 %d\n", 100253);
#endif
#ifdef GL_VARIABLE_G_NV
printf("GL_VARIABLE_G_NV %d\n", 0x8529);
#endif
#ifdef __GLEE_GL_EXT_index_material
printf("__GLEE_GL_EXT_index_material %d\n", 1);
#endif
#ifdef GLEE_ARB_texture_env_combine
#endif
#ifdef glVertexStream2fvATI
#endif
#ifdef GL_NORMAL_MAP
printf("GL_NORMAL_MAP %d\n", 0x8511);
#endif
#ifdef GL_Q
printf("GL_Q %d\n", 0x2003);
#endif
#ifdef GL_R1UI_T2F_C4F_N3F_V3F_SUN
printf("GL_R1UI_T2F_C4F_N3F_V3F_SUN %d\n", 0x85CB);
#endif
#ifdef GL_SPRITE_SGIX
printf("GL_SPRITE_SGIX %d\n", 0x8148);
#endif
#ifdef GL_PIXEL_MAP_A_TO_A_SIZE
printf("GL_PIXEL_MAP_A_TO_A_SIZE %d\n", 0x0CB9);
#endif
#ifdef GL_CLAMP_READ_COLOR_ARB
printf("GL_CLAMP_READ_COLOR_ARB %d\n", 0x891C);
#endif
#ifdef GLUT_BITMAP_8_BY_13
#endif
#ifdef GL_COLOR_TABLE_FORMAT_SGI
printf("GL_COLOR_TABLE_FORMAT_SGI %d\n", 0x80D8);
#endif
#ifdef glBindVertexShaderEXT
#endif
#ifdef GLU_NURBS_RENDERER
printf("GLU_NURBS_RENDERER %d\n", 100162);
#endif
#ifdef GL_FLOAT_VEC4_ARB
printf("GL_FLOAT_VEC4_ARB %d\n", 0x8B52);
#endif
#ifdef GL_ENABLE_BIT
printf("GL_ENABLE_BIT %d\n", 0x00002000);
#endif
#ifdef GL_TEXTURE28
printf("GL_TEXTURE28 %d\n", 0x84DC);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_POINTER
printf("GL_VERTEX_ATTRIB_ARRAY_POINTER %d\n", 0x8645);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_VALID_NV
printf("GL_VERTEX_ARRAY_RANGE_VALID_NV %d\n", 0x851F);
#endif
#ifdef GL_MAX_NAME_STACK_DEPTH
printf("GL_MAX_NAME_STACK_DEPTH %d\n", 0x0D37);
#endif
#ifdef GL_FOG_FUNC_SGIS
printf("GL_FOG_FUNC_SGIS %d\n", 0x812A);
#endif
#ifdef GL_CONVOLUTION_HEIGHT_EXT
printf("GL_CONVOLUTION_HEIGHT_EXT %d\n", 0x8019);
#endif
#ifdef GLU_NURBS_ERROR6
printf("GLU_NURBS_ERROR6 %d\n", 100256);
#endif
#ifdef __SSE2__
printf("__SSE2__ %d\n", 1);
#endif
#ifdef GL_OP_FLOOR_EXT
printf("GL_OP_FLOOR_EXT %d\n", 0x878F);
#endif
#ifdef GL_MAP2_TEXTURE_COORD_3
printf("GL_MAP2_TEXTURE_COORD_3 %d\n", 0x0DB5);
#endif
#ifdef GL_CONSTANT_ATTENUATION
printf("GL_CONSTANT_ATTENUATION %d\n", 0x1207);
#endif
#ifdef GL_RGB_FLOAT32_APPLE
printf("GL_RGB_FLOAT32_APPLE %d\n", 0x8815);
#endif
#ifdef GL_HILO8_NV
printf("GL_HILO8_NV %d\n", 0x885E);
#endif
#ifdef NULL
#endif
#ifdef GL_SOURCE2_RGB_EXT
printf("GL_SOURCE2_RGB_EXT %d\n", 0x8582);
#endif
#ifdef GL_MAX_PROGRAM_ENV_PARAMETERS_ARB
printf("GL_MAX_PROGRAM_ENV_PARAMETERS_ARB %d\n", 0x88B5);
#endif
#ifdef GL_OP_DOT3_EXT
printf("GL_OP_DOT3_EXT %d\n", 0x8784);
#endif
#ifdef GL_DRAW_BUFFER1_ATI
printf("GL_DRAW_BUFFER1_ATI %d\n", 0x8826);
#endif
#ifdef GL_ADD_SIGNED
printf("GL_ADD_SIGNED %d\n", 0x8574);
#endif
#ifdef glDeleteOcclusionQueriesNV
#endif
#ifdef GL_COMBINER_MAPPING_NV
printf("GL_COMBINER_MAPPING_NV %d\n", 0x8543);
#endif
#ifdef GL_TRANSPOSE_CURRENT_MATRIX_ARB
printf("GL_TRANSPOSE_CURRENT_MATRIX_ARB %d\n", 0x88B7);
#endif
#ifdef GL_OPERAND0_ALPHA
printf("GL_OPERAND0_ALPHA %d\n", 0x8598);
#endif
#ifdef GL_MATRIX21_ARB
printf("GL_MATRIX21_ARB %d\n", 0x88D5);
#endif
#ifdef GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV
printf("GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV %d\n", 0x8855);
#endif
#ifdef GL_COLOR4_BIT_PGI
printf("GL_COLOR4_BIT_PGI %d\n", 0x00020000);
#endif
#ifdef GL_NV_pixel_data_range
printf("GL_NV_pixel_data_range %d\n", 1);
#endif
#ifdef GL_PROGRAM_PARAMETER_NV
printf("GL_PROGRAM_PARAMETER_NV %d\n", 0x8644);
#endif
#ifdef GL_TEXTURE_COMPARE_MODE_ARB
printf("GL_TEXTURE_COMPARE_MODE_ARB %d\n", 0x884C);
#endif
#ifdef GL_NV_fence
printf("GL_NV_fence %d\n", 1);
#endif
#ifdef GL_BLEND_DST_ALPHA
printf("GL_BLEND_DST_ALPHA %d\n", 0x80CA);
#endif
#ifdef GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
printf("GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB %d\n", 0x880A);
#endif
#ifdef GL_TEXTURE_BINDING_CUBE_MAP_ARB
printf("GL_TEXTURE_BINDING_CUBE_MAP_ARB %d\n", 0x8514);
#endif
#ifdef GL_BLUE_INTEGER_EXT
printf("GL_BLUE_INTEGER_EXT %d\n", 0x8D96);
#endif
#ifdef GL_LOCAL_CONSTANT_EXT
printf("GL_LOCAL_CONSTANT_EXT %d\n", 0x87C3);
#endif
#ifdef __GLEE_GL_EXT_texture_env_combine
printf("__GLEE_GL_EXT_texture_env_combine %d\n", 1);
#endif
#ifdef GL_UNSIGNED_SHORT_8_8_REV_APPLE
printf("GL_UNSIGNED_SHORT_8_8_REV_APPLE %d\n", 0x85BB);
#endif
#ifdef GL_ARB_matrix_palette
printf("GL_ARB_matrix_palette %d\n", 1);
#endif
#ifdef GLU_TESS_VERTEX
printf("GLU_TESS_VERTEX %d\n", 100101);
#endif
#ifdef GLUT_GAME_MODE_REFRESH_RATE
printf("GLUT_GAME_MODE_REFRESH_RATE %d\n", 5);
#endif
#ifdef GL_VERTEX_WEIGHTING_EXT
printf("GL_VERTEX_WEIGHTING_EXT %d\n", 0x8509);
#endif
#ifdef GL_TEXTURE11_ARB
printf("GL_TEXTURE11_ARB %d\n", 0x84CB);
#endif
#ifdef GL_HALF_APPLE
printf("GL_HALF_APPLE %d\n", 0x140B);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_TYPE_EXT
printf("GL_SECONDARY_COLOR_ARRAY_TYPE_EXT %d\n", 0x845B);
#endif
#ifdef GL_VERTEX_ARRAY_POINTER
printf("GL_VERTEX_ARRAY_POINTER %d\n", 0x808E);
#endif
#ifdef glDrawRangeElementArrayATI
#endif
#ifdef glWindowPos3fvMESA
#endif
#ifdef glStringMarkerGREMEDY
#endif
#ifdef GLUT_MENU_IN_USE
printf("GLUT_MENU_IN_USE %d\n", 1);
#endif
#ifdef GLUT_KEY_F4
printf("GLUT_KEY_F4 %d\n", 4);
#endif
#ifdef glFragmentLightiEXT
#endif
#ifdef GL_PACK_SKIP_IMAGES_EXT
printf("GL_PACK_SKIP_IMAGES_EXT %d\n", 0x806B);
#endif
#ifdef GL_EXT_cmyka
printf("GL_EXT_cmyka %d\n", 1);
#endif
#ifdef GL_FLOAT_MAT4
printf("GL_FLOAT_MAT4 %d\n", 0x8B5C);
#endif
#ifdef GL_EXT_422_pixels
printf("GL_EXT_422_pixels %d\n", 1);
#endif
#ifdef GL_APPLE_vertex_array_object
printf("GL_APPLE_vertex_array_object %d\n", 1);
#endif
#ifdef GL_BINORMAL_ARRAY_POINTER_EXT
printf("GL_BINORMAL_ARRAY_POINTER_EXT %d\n", 0x8443);
#endif
#ifdef GL_FOG_SCALE_VALUE_SGIX
printf("GL_FOG_SCALE_VALUE_SGIX %d\n", 0x81FD);
#endif
#ifdef GL_SAMPLER_3D
printf("GL_SAMPLER_3D %d\n", 0x8B5F);
#endif
#ifdef GLUT_ACTIVE_CTRL
printf("GLUT_ACTIVE_CTRL %d\n", 2);
#endif
#ifdef GL_DOT3_RGBA
printf("GL_DOT3_RGBA %d\n", 0x86AF);
#endif
#ifdef GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV
printf("GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV %d\n", 0x86F1);
#endif
#ifdef glProgramParameters4fvNV
#endif
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE
printf("GL_EDGE_FLAG_ARRAY_STRIDE %d\n", 0x808C);
#endif
#ifdef GL_MAP2_INDEX
printf("GL_MAP2_INDEX %d\n", 0x0DB1);
#endif
#ifdef GL_CMYKA_EXT
printf("GL_CMYKA_EXT %d\n", 0x800D);
#endif
#ifdef glTexCoord2hNV
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD12_EXT
printf("GL_OUTPUT_TEXTURE_COORD12_EXT %d\n", 0x87A9);
#endif
#ifdef glEdgeFlagPointerEXT
#endif
#ifdef GLEE_APPLE_element_array
#endif
#ifdef GL_KEEP
printf("GL_KEEP %d\n", 0x1E00);
#endif
#ifdef GL_DS_SCALE_NV
printf("GL_DS_SCALE_NV %d\n", 0x8710);
#endif
#ifdef GLUT_HAS_MOUSE
printf("GLUT_HAS_MOUSE %d\n", 601);
#endif
#ifdef GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATIX
printf("GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATIX %d\n", 0x6098);
#endif
#ifdef GL_EXT_depth_bounds_test
printf("GL_EXT_depth_bounds_test %d\n", 1);
#endif
#ifdef GL_MATRIX6_ARB
printf("GL_MATRIX6_ARB %d\n", 0x88C6);
#endif
#ifdef GL_UNPACK_IMAGE_BYTES_APPLE
printf("GL_UNPACK_IMAGE_BYTES_APPLE %d\n", 0x8A18);
#endif
#ifdef __GLEE_GL_NV_packed_depth_stencil
printf("__GLEE_GL_NV_packed_depth_stencil %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB
printf("GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB %d\n", 0x8622);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
printf("GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB %d\n", 0x88B3);
#endif
#ifdef GL_TEXTURE_RANGE_POINTER_APPLE
printf("GL_TEXTURE_RANGE_POINTER_APPLE %d\n", 0x85B8);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB13_NV
printf("GL_EVAL_VERTEX_ATTRIB13_NV %d\n", 0x86D3);
#endif
#ifdef GL_PRIMARY_COLOR
printf("GL_PRIMARY_COLOR %d\n", 0x8577);
#endif
#ifdef GL_COMPRESSED_LUMINANCE
printf("GL_COMPRESSED_LUMINANCE %d\n", 0x84EA);
#endif
#ifdef GL_RGB5
printf("GL_RGB5 %d\n", 0x8050);
#endif
#ifdef GL_VOLATILE_APPLE
printf("GL_VOLATILE_APPLE %d\n", 0x8A1A);
#endif
#ifdef GL_SIGNED_ALPHA8_NV
printf("GL_SIGNED_ALPHA8_NV %d\n", 0x8706);
#endif
#ifdef GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI
printf("GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI %d\n", 0x80B6);
#endif
#ifdef GL_INTEL_texture_scissor
printf("GL_INTEL_texture_scissor %d\n", 1);
#endif
#ifdef __LDBL_EPSILON__
#endif
#ifdef GL_2D
printf("GL_2D %d\n", 0x0600);
#endif
#ifdef GL_COMPRESSED_LUMINANCE_ARB
printf("GL_COMPRESSED_LUMINANCE_ARB %d\n", 0x84EA);
#endif
#ifdef glCopyTexSubImage3DEXT
#endif
#ifdef GLUT_CURSOR_FULL_CROSSHAIR
printf("GLUT_CURSOR_FULL_CROSSHAIR %d\n", 102);
#endif
#ifdef GL_INDEX_TEST_REF_EXT
printf("GL_INDEX_TEST_REF_EXT %d\n", 0x81B7);
#endif
#ifdef GLEE_INGR_blend_func_separate
#endif
#ifdef GL_UNSIGNED_BYTE
printf("GL_UNSIGNED_BYTE %d\n", 0x1401);
#endif
#ifdef GL_FLOAT_MAT2
printf("GL_FLOAT_MAT2 %d\n", 0x8B5A);
#endif
#ifdef GL_MODELVIEW28_ARB
printf("GL_MODELVIEW28_ARB %d\n", 0x873C);
#endif
#ifdef glVertex4hvNV
#endif
#ifdef GL_LIGHTING
printf("GL_LIGHTING %d\n", 0x0B50);
#endif
#ifdef GL_SMOOTH_POINT_SIZE_RANGE
printf("GL_SMOOTH_POINT_SIZE_RANGE %d\n", 0x0B12);
#endif
#ifdef GL_T2F_IUI_V3F_EXT
printf("GL_T2F_IUI_V3F_EXT %d\n", 0x81B2);
#endif
#ifdef GL_DEPTH_TEST
printf("GL_DEPTH_TEST %d\n", 0x0B71);
#endif
#ifdef glVertexStream1dATI
#endif
#ifdef GL_RGBA16I_EXT
printf("GL_RGBA16I_EXT %d\n", 0x8D88);
#endif
#ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB
printf("GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB %d\n", 0x86A2);
#endif
#ifdef __LDBL_DIG__
printf("__LDBL_DIG__ %d\n", 18);
#endif
#ifdef GL_FOG_COORDINATE_EXT
printf("GL_FOG_COORDINATE_EXT %d\n", 0x8451);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY2_NV
printf("GL_VERTEX_ATTRIB_ARRAY2_NV %d\n", 0x8652);
#endif
#ifdef __DBL_MAX__
#endif
#ifdef GL_TEXTURE_BIT
printf("GL_TEXTURE_BIT %d\n", 0x00040000);
#endif
#ifdef GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI
printf("GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI %d\n", 0x8803);
#endif
#ifdef GL_CURRENT_PROGRAM
printf("GL_CURRENT_PROGRAM %d\n", 0x8B8D);
#endif
#ifdef GL_SOURCE0_RGB
printf("GL_SOURCE0_RGB %d\n", 0x8580);
#endif
#ifdef __PTRDIFF_TYPE__
#endif
#ifdef __GLEE_GL_HP_convolution_border_modes
printf("__GLEE_GL_HP_convolution_border_modes %d\n", 1);
#endif
#ifdef GL_TEXTURE_CUBE_MAP
printf("GL_TEXTURE_CUBE_MAP %d\n", 0x8513);
#endif
#ifdef GL_DRAW_BUFFER0_ATI
printf("GL_DRAW_BUFFER0_ATI %d\n", 0x8825);
#endif
#ifdef GL_PHONG_HINT_WIN
printf("GL_PHONG_HINT_WIN %d\n", 0x80EB);
#endif
#ifdef GL_POINT_DISTANCE_ATTENUATION_ARB
printf("GL_POINT_DISTANCE_ATTENUATION_ARB %d\n", 0x8129);
#endif
#ifdef GL_VARIANT_ARRAY_EXT
printf("GL_VARIANT_ARRAY_EXT %d\n", 0x87E8);
#endif
#ifdef GLEE_ATI_texture_compression_3dc
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD10_EXT
printf("GL_OUTPUT_TEXTURE_COORD10_EXT %d\n", 0x87A7);
#endif
#ifdef GL_RGB_FLOAT32_ATI
printf("GL_RGB_FLOAT32_ATI %d\n", 0x8815);
#endif
#ifdef GL_RGBA32UI_EXT
printf("GL_RGBA32UI_EXT %d\n", 0x8D70);
#endif
#ifdef GL_TEXTURE_BLUE_SIZE
printf("GL_TEXTURE_BLUE_SIZE %d\n", 0x805E);
#endif
#ifdef GL_FRAGMENT_NORMAL_EXT
printf("GL_FRAGMENT_NORMAL_EXT %d\n", 0x834A);
#endif
#ifdef GL_TEXTURE25_ARB
printf("GL_TEXTURE25_ARB %d\n", 0x84D9);
#endif
#ifdef glResizeBuffersMESA
#endif
#ifdef GL_DEPTH24_STENCIL8_EXT
printf("GL_DEPTH24_STENCIL8_EXT %d\n", 0x88F0);
#endif
#ifdef GL_OBJECT_LINE_SGIS
printf("GL_OBJECT_LINE_SGIS %d\n", 0x81F7);
#endif
#ifdef GL_MAX_TEXTURE_UNITS
printf("GL_MAX_TEXTURE_UNITS %d\n", 0x84E2);
#endif
#ifdef GL_FLOAT_VEC3
printf("GL_FLOAT_VEC3 %d\n", 0x8B51);
#endif
#ifdef glTexBumpParameterivATI
#endif
#ifdef glDeleteProgramsNV
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB5_4_NV
printf("GL_MAP2_VERTEX_ATTRIB5_4_NV %d\n", 0x8675);
#endif
#ifdef GL_FLOAT_MAT2x4
printf("GL_FLOAT_MAT2x4 %d\n", 0x8B66);
#endif
#ifdef glTangent3sEXT
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB %d\n", 0x8515);
#endif
#ifdef GL_CLIP_NEAR_HINT_PGI
printf("GL_CLIP_NEAR_HINT_PGI %d\n", 0x1A220);
#endif
#ifdef GLEE_ATI_draw_buffers
#endif
#ifdef GL_EXT_misc_attribute
printf("GL_EXT_misc_attribute %d\n", 1);
#endif
#ifdef glPixelTransformParameterfvEXT
#endif
#ifdef GL_SAMPLE_ALPHA_TO_ONE_ARB
printf("GL_SAMPLE_ALPHA_TO_ONE_ARB %d\n", 0x809F);
#endif
#ifdef GL_INTENSITY_SIGNED_SGIX
printf("GL_INTENSITY_SIGNED_SGIX %d\n", 0x85E4);
#endif
#ifdef GLUT_JOYSTICK_BUTTONS
printf("GLUT_JOYSTICK_BUTTONS %d\n", 614);
#endif
#ifdef glProgramParameter4fNV
#endif
#ifdef GLUT_MENU_NUM_ITEMS
printf("GLUT_MENU_NUM_ITEMS %d\n", 300);
#endif
#ifdef GL_SAMPLE_ALPHA_TO_ONE_SGIS
printf("GL_SAMPLE_ALPHA_TO_ONE_SGIS %d\n", 0x809F);
#endif
#ifdef GL_CURRENT_MATRIX_NV
printf("GL_CURRENT_MATRIX_NV %d\n", 0x8641);
#endif
#ifdef GL_DRAW_BUFFER14_ATI
printf("GL_DRAW_BUFFER14_ATI %d\n", 0x8833);
#endif
#ifdef GL_V2F
printf("GL_V2F %d\n", 0x2A20);
#endif
#ifdef glWindowPos3dvMESA
#endif
#ifdef GLEE_ARB_shadow
#endif
#ifdef __LITTLE_ENDIAN__
printf("__LITTLE_ENDIAN__ %d\n", 1);
#endif
#ifdef GL_RECLAIM_MEMORY_HINT_PGI
printf("GL_RECLAIM_MEMORY_HINT_PGI %d\n", 0x1A1FE);
#endif
#ifdef GL_COMPRESSED_RGB_ARB
printf("GL_COMPRESSED_RGB_ARB %d\n", 0x84ED);
#endif
#ifdef GL_INTENSITY8_EXT
printf("GL_INTENSITY8_EXT %d\n", 0x804B);
#endif
#ifdef GLUT_KEY_F12
printf("GLUT_KEY_F12 %d\n", 12);
#endif
#ifdef GLUT_HAS_TABLET
printf("GLUT_HAS_TABLET %d\n", 604);
#endif
#ifdef GL_ARRAY_BUFFER_BINDING_ARB
printf("GL_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8894);
#endif
#ifdef GL_TEXTURE_2D_STACK_BINDING_MESAX
printf("GL_TEXTURE_2D_STACK_BINDING_MESAX %d\n", 0x875E);
#endif
#ifdef __PIC__
printf("__PIC__ %d\n", 1);
#endif
#ifdef GL_BLEND_EQUATION_RGB
printf("GL_BLEND_EQUATION_RGB %d\n", 0x8009);
#endif
#ifdef GL_PIXEL_MAP_A_TO_A
printf("GL_PIXEL_MAP_A_TO_A %d\n", 0x0C79);
#endif
#ifdef GL_BLEND_SRC_ALPHA_EXT
printf("GL_BLEND_SRC_ALPHA_EXT %d\n", 0x80CB);
#endif
#ifdef GL_ALPHA8I_EXT
printf("GL_ALPHA8I_EXT %d\n", 0x8D90);
#endif
#ifdef GL_FLOAT_RGBA_MODE_NV
printf("GL_FLOAT_RGBA_MODE_NV %d\n", 0x888E);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD13_EXT
printf("GL_OUTPUT_TEXTURE_COORD13_EXT %d\n", 0x87AA);
#endif
#ifdef GL_INDEX_OFFSET
printf("GL_INDEX_OFFSET %d\n", 0x0D13);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_TYPE
printf("GL_SECONDARY_COLOR_ARRAY_TYPE %d\n", 0x845B);
#endif
#ifdef GL_UNSIGNED_INT_8_8_S8_S8_REV_NV
printf("GL_UNSIGNED_INT_8_8_S8_S8_REV_NV %d\n", 0x86DB);
#endif
#ifdef GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS
printf("GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS %d\n", 0x80B0);
#endif
#ifdef GLUT_GAME_MODE_POSSIBLE
printf("GLUT_GAME_MODE_POSSIBLE %d\n", 1);
#endif
#ifdef GL_COLOR_ALPHA_PAIRING_ATI
printf("GL_COLOR_ALPHA_PAIRING_ATI %d\n", 0x8975);
#endif
#ifdef GL_COLOR_ARRAY_LIST_IBM
printf("GL_COLOR_ARRAY_LIST_IBM %d\n", 103072);
#endif
#ifdef GL_FRAGMENT_LIGHT7_EXT
printf("GL_FRAGMENT_LIGHT7_EXT %d\n", 0x8413);
#endif
#ifdef GL_VARIABLE_F_NV
printf("GL_VARIABLE_F_NV %d\n", 0x8528);
#endif
#ifdef GL_NV_evaluators
printf("GL_NV_evaluators %d\n", 1);
#endif
#ifdef GL_SGIX_framezoom
printf("GL_SGIX_framezoom %d\n", 1);
#endif
#ifdef GLEE_SGIX_convolution_accuracy
#endif
#ifdef __GLEE_GL_SGIX_igloo_interface
printf("__GLEE_GL_SGIX_igloo_interface %d\n", 1);
#endif
#ifdef GL_TANGENT_ARRAY_POINTER_EXT
printf("GL_TANGENT_ARRAY_POINTER_EXT %d\n", 0x8442);
#endif
#ifdef glReplacementCodeubSUN
#endif
#ifdef GL_CON_14_ATI
printf("GL_CON_14_ATI %d\n", 0x894F);
#endif
#ifdef GL_MODELVIEW23_ARB
printf("GL_MODELVIEW23_ARB %d\n", 0x8737);
#endif
#ifdef glConvolutionFilter2DEXT
#endif
#ifdef GL_LUMINANCE_ALPHA_INTEGER_EXT
printf("GL_LUMINANCE_ALPHA_INTEGER_EXT %d\n", 0x8D9D);
#endif
#ifdef GL_SIGNED_INTENSITY_NV
printf("GL_SIGNED_INTENSITY_NV %d\n", 0x8707);
#endif
#ifdef __LDBL_MAX_10_EXP__
printf("__LDBL_MAX_10_EXP__ %d\n", 4932);
#endif
#ifdef GLU_CULLING
printf("GLU_CULLING %d\n", 100201);
#endif
#ifdef GL_PIXEL_TRANSFORM_2D_EXT
printf("GL_PIXEL_TRANSFORM_2D_EXT %d\n", 0x8330);
#endif
#ifdef GL_LINEAR_SHARPEN_COLOR_SGIS
printf("GL_LINEAR_SHARPEN_COLOR_SGIS %d\n", 0x80AF);
#endif
#ifdef GLUT_HAS_DIAL_AND_BUTTON_BOX
printf("GLUT_HAS_DIAL_AND_BUTTON_BOX %d\n", 603);
#endif
#ifdef glGetMapParameterivNV
#endif
#ifdef GL_TEXTURE_3D
printf("GL_TEXTURE_3D %d\n", 0x806F);
#endif
#ifdef GLU_TESS_MAX_COORD
#endif
#ifdef GL_4PASS_0_EXT
printf("GL_4PASS_0_EXT %d\n", 0x80A4);
#endif
#ifdef GL_DRAW_BUFFER12_ARB
printf("GL_DRAW_BUFFER12_ARB %d\n", 0x8831);
#endif
#ifdef glEnableVariantClientStateEXT
#endif
#ifdef GL_MAX_ELEMENTS_INDICES
printf("GL_MAX_ELEMENTS_INDICES %d\n", 0x80E9);
#endif
#ifdef GL_PALETTE8_RGB5_A1_OES
printf("GL_PALETTE8_RGB5_A1_OES %d\n", 0x8B99);
#endif
#ifdef __GLEE_GL_EXT_texture3D
printf("__GLEE_GL_EXT_texture3D %d\n", 1);
#endif
#ifdef GL_RGBA16
printf("GL_RGBA16 %d\n", 0x805B);
#endif
#ifdef GL_TEXTURE1
printf("GL_TEXTURE1 %d\n", 0x84C1);
#endif
#ifdef glTangent3svEXT
#endif
#ifdef __GLEE_GL_SGIX_texture_range
printf("__GLEE_GL_SGIX_texture_range %d\n", 1);
#endif
#ifdef GL_UNPACK_SKIP_VOLUMES_SGIS
printf("GL_UNPACK_SKIP_VOLUMES_SGIS %d\n", 0x8132);
#endif
#ifdef GL_ELEMENT_BUFFER_BINDING_APPLE
printf("GL_ELEMENT_BUFFER_BINDING_APPLE %d\n", 0x8A11);
#endif
#ifdef glVertexAttribs2svNV
#endif
#ifdef GL_INTENSITY12_EXT
printf("GL_INTENSITY12_EXT %d\n", 0x804C);
#endif
#ifdef GLU_NURBS_NORMAL_EXT
printf("GLU_NURBS_NORMAL_EXT %d\n", 100166);
#endif
#ifdef GL_STREAM_READ
printf("GL_STREAM_READ %d\n", 0x88E1);
#endif
#ifdef GL_POST_COLOR_MATRIX_RED_SCALE_SGI
printf("GL_POST_COLOR_MATRIX_RED_SCALE_SGI %d\n", 0x80B4);
#endif
#ifdef GLU_NURBS_RENDERER_EXT
printf("GLU_NURBS_RENDERER_EXT %d\n", 100162);
#endif
#ifdef GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT
printf("GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT %d\n", 0x87CD);
#endif
#ifdef GL_HISTOGRAM_WIDTH_EXT
printf("GL_HISTOGRAM_WIDTH_EXT %d\n", 0x8026);
#endif
#ifdef GL_MODELVIEW3_ARB
printf("GL_MODELVIEW3_ARB %d\n", 0x8723);
#endif
#ifdef GL_SEPARABLE_2D_EXT
printf("GL_SEPARABLE_2D_EXT %d\n", 0x8012);
#endif
#ifdef GL_RGBA_FLOAT32_APPLE
printf("GL_RGBA_FLOAT32_APPLE %d\n", 0x8814);
#endif
#ifdef __GLEE_GL_ATI_envmap_bumpmap
printf("__GLEE_GL_ATI_envmap_bumpmap %d\n", 1);
#endif
#ifdef GL_CCW
printf("GL_CCW %d\n", 0x0901);
#endif
#ifdef GL_SAMPLER_CUBE_SHADOW_EXT
printf("GL_SAMPLER_CUBE_SHADOW_EXT %d\n", 0x8DC5);
#endif
#ifdef GL_DEPTH_COMPONENT16
printf("GL_DEPTH_COMPONENT16 %d\n", 0x81A5);
#endif
#ifdef glGetFragmentLightivEXT
#endif
#ifdef GL_COLOR_MATERIAL
printf("GL_COLOR_MATERIAL %d\n", 0x0B57);
#endif
#ifdef glGetFragmentMaterialivEXT
#endif
#ifdef __GLEE_GL_SGIS_point_line_texgen
printf("__GLEE_GL_SGIS_point_line_texgen %d\n", 1);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD20_EXT
printf("GL_OUTPUT_TEXTURE_COORD20_EXT %d\n", 0x87B1);
#endif
#ifdef GL_EDGE_FLAG
printf("GL_EDGE_FLAG %d\n", 0x0B43);
#endif
#ifdef GLU_NURBS_ERROR24
printf("GLU_NURBS_ERROR24 %d\n", 100274);
#endif
#ifdef GL_TEXTURE_RED_TYPE_ARB
printf("GL_TEXTURE_RED_TYPE_ARB %d\n", 0x8C10);
#endif
#ifdef GL_TEXTURE_CLIPMAP_CENTER_SGIX
printf("GL_TEXTURE_CLIPMAP_CENTER_SGIX %d\n", 0x8171);
#endif
#ifdef glProgramParameters4dvNV
#endif
#ifdef glVertexAttrib1fNV
#endif
#ifdef GLUT_HAS_SPACEBALL
printf("GLUT_HAS_SPACEBALL %d\n", 602);
#endif
#ifdef GL_IMAGE_ROTATE_ANGLE_HP
printf("GL_IMAGE_ROTATE_ANGLE_HP %d\n", 0x8159);
#endif
#ifdef GL_SRGB_ALPHA
printf("GL_SRGB_ALPHA %d\n", 0x8C42);
#endif
#ifdef GL_OBJECT_TYPE_ARB
printf("GL_OBJECT_TYPE_ARB %d\n", 0x8B4E);
#endif
#ifdef GL_STATIC_READ
printf("GL_STATIC_READ %d\n", 0x88E5);
#endif
#ifdef GL_COLOR_ARRAY_POINTER
printf("GL_COLOR_ARRAY_POINTER %d\n", 0x8090);
#endif
#ifdef GL_ONE_MINUS_SRC_COLOR
printf("GL_ONE_MINUS_SRC_COLOR %d\n", 0x0301);
#endif
#ifdef GL_CURRENT_RASTER_POSITION_VALID
printf("GL_CURRENT_RASTER_POSITION_VALID %d\n", 0x0B08);
#endif
#ifdef GL_COLOR_TABLE_ALPHA_SIZE
printf("GL_COLOR_TABLE_ALPHA_SIZE %d\n", 0x80DD);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT
printf("GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT %d\n", 0x8518);
#endif
#ifdef GL_ORDER
printf("GL_ORDER %d\n", 0x0A01);
#endif
#ifdef __GLEE_GL_EXT_422_pixels
printf("__GLEE_GL_EXT_422_pixels %d\n", 1);
#endif
#ifdef GL_VERTEX_BLEND_ARB
printf("GL_VERTEX_BLEND_ARB %d\n", 0x86A7);
#endif
#ifdef GL_BUFFER_MAP_POINTER
printf("GL_BUFFER_MAP_POINTER %d\n", 0x88BD);
#endif
#ifdef GLUT_KEY_END
printf("GLUT_KEY_END %d\n", 107);
#endif
#ifdef glVertexAttrib3sNV
#endif
#ifdef GLEE_EXT_stencil_two_side
#endif
#ifdef __GLEE_GL_EXT_vertex_weighting
printf("__GLEE_GL_EXT_vertex_weighting %d\n", 1);
#endif
#ifdef GLU_TESS_WINDING_ODD
printf("GLU_TESS_WINDING_ODD %d\n", 100130);
#endif
#ifdef GL_IBM_rasterpos_clip
printf("GL_IBM_rasterpos_clip %d\n", 1);
#endif
#ifdef GL_MODELVIEW22_ARB
printf("GL_MODELVIEW22_ARB %d\n", 0x8736);
#endif
#ifdef GL_PROXY_TEXTURE_3D_EXT
printf("GL_PROXY_TEXTURE_3D_EXT %d\n", 0x8070);
#endif
#ifdef GL_BLEND_COLOR
printf("GL_BLEND_COLOR %d\n", 0x8005);
#endif
#ifdef GL_UNPACK_SKIP_ROWS
printf("GL_UNPACK_SKIP_ROWS %d\n", 0x0CF3);
#endif
#ifdef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT
printf("GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT %d\n", 0x8C80);
#endif
#ifdef GL_OBJECT_ACTIVE_UNIFORMS_ARB
printf("GL_OBJECT_ACTIVE_UNIFORMS_ARB %d\n", 0x8B86);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_VARYINGS_EXT
printf("GL_TRANSFORM_FEEDBACK_VARYINGS_EXT %d\n", 0x8C83);
#endif
#ifdef GL_FUNC_SUBTRACT
printf("GL_FUNC_SUBTRACT %d\n", 0x800A);
#endif
#ifdef GL_RGB_SCALE_ARB
printf("GL_RGB_SCALE_ARB %d\n", 0x8573);
#endif
#ifdef __GLEE_GL_EXT_shared_texture_palette
printf("__GLEE_GL_EXT_shared_texture_palette %d\n", 1);
#endif
#ifdef __GLEE_GL_ATI_vertex_streams
printf("__GLEE_GL_ATI_vertex_streams %d\n", 1);
#endif
#ifdef glGetClipPlanefOES
#endif
#ifdef GLUT_BLUE
printf("GLUT_BLUE %d\n", 2);
#endif
#ifdef GL_VERTEX_PROGRAM_BINDING_NV
printf("GL_VERTEX_PROGRAM_BINDING_NV %d\n", 0x864A);
#endif
#ifdef GL_COLOR_ATTACHMENT0_EXT
printf("GL_COLOR_ATTACHMENT0_EXT %d\n", 0x8CE0);
#endif
#ifdef glGetVertexAttribivNV
#endif
#ifdef GL_SRC4_ALPHA
printf("GL_SRC4_ALPHA %d\n", 0x858C);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT
printf("GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT %d\n", 0x8C85);
#endif
#ifdef GL_CLAMP_TO_BORDER_SGIS
printf("GL_CLAMP_TO_BORDER_SGIS %d\n", 0x812D);
#endif
#ifdef GL_RGB8UI_EXT
printf("GL_RGB8UI_EXT %d\n", 0x8D7D);
#endif
#ifdef GLU_PARAMETRIC_ERROR
printf("GLU_PARAMETRIC_ERROR %d\n", 100216);
#endif
#ifdef GLUT_CURSOR_INFO
printf("GLUT_CURSOR_INFO %d\n", 2);
#endif
#ifdef __GLEE_GL_EXT_index_func
printf("__GLEE_GL_EXT_index_func %d\n", 1);
#endif
#ifdef GL_DYNAMIC_COPY_ARB
printf("GL_DYNAMIC_COPY_ARB %d\n", 0x88EA);
#endif
#ifdef GL_VERSION_2_1
printf("GL_VERSION_2_1 %d\n", 1);
#endif
#ifdef GL_COMBINE_ARB
printf("GL_COMBINE_ARB %d\n", 0x8570);
#endif
#ifdef GLEE_ARB_vertex_shader
#endif
#ifdef GLEE_NV_texture_compression_vtc
#endif
#ifdef glVertexStream4dATI
#endif
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA_ARB
printf("GL_COMPRESSED_LUMINANCE_ALPHA_ARB %d\n", 0x84EB);
#endif
#ifdef glVertexAttribs4ubvNV
#endif
#ifdef GL_TEXTURE_FILTER_CONTROL
printf("GL_TEXTURE_FILTER_CONTROL %d\n", 0x8500);
#endif
#ifdef GL_CURRENT_ATTRIB_NV
printf("GL_CURRENT_ATTRIB_NV %d\n", 0x8626);
#endif
#ifdef GL_READ_ONLY
printf("GL_READ_ONLY %d\n", 0x88B8);
#endif
#ifdef GL_SHADING_LANGUAGE_VERSION
printf("GL_SHADING_LANGUAGE_VERSION %d\n", 0x8B8C);
#endif
#ifdef GL_GREMEDY_string_marker
printf("GL_GREMEDY_string_marker %d\n", 1);
#endif
#ifdef GL_DEPTH_CLEAR_VALUE
printf("GL_DEPTH_CLEAR_VALUE %d\n", 0x0B73);
#endif
#ifdef __GLEE_GL_NV_texture_expand_normal
printf("__GLEE_GL_NV_texture_expand_normal %d\n", 1);
#endif
#ifdef GL_TEXTURE_BINDING_RECTANGLE_EXT
printf("GL_TEXTURE_BINDING_RECTANGLE_EXT %d\n", 0x84F6);
#endif
#ifdef GL_TEXTURE_DEPTH_TYPE_ARB
printf("GL_TEXTURE_DEPTH_TYPE_ARB %d\n", 0x8C16);
#endif
#ifdef GL_SOURCE6_ALPHA
printf("GL_SOURCE6_ALPHA %d\n", 0x858E);
#endif
#ifdef GL_OP_RECIP_EXT
printf("GL_OP_RECIP_EXT %d\n", 0x8794);
#endif
#ifdef GLUT_OVERLAY_DAMAGED
printf("GLUT_OVERLAY_DAMAGED %d\n", 805);
#endif
#ifdef __GLEE_GL_EXT_color_subtable
printf("__GLEE_GL_EXT_color_subtable %d\n", 1);
#endif
#ifdef glSwizzleEXT
#endif
#ifdef GL_E_TIMES_F_NV
printf("GL_E_TIMES_F_NV %d\n", 0x8531);
#endif
#ifdef GLEE_MESAX_texture_stack
#endif
#ifdef GL_PROGRAM_LENGTH_ARB
printf("GL_PROGRAM_LENGTH_ARB %d\n", 0x8627);
#endif
#ifdef GLUT_KEY_INSERT
printf("GLUT_KEY_INSERT %d\n", 108);
#endif
#ifdef GL_FOG_COORDINATE
printf("GL_FOG_COORDINATE %d\n", 0x8451);
#endif
#ifdef GLU_TESS_END_DATA
printf("GLU_TESS_END_DATA %d\n", 100108);
#endif
#ifdef GL_DITHER
printf("GL_DITHER %d\n", 0x0BD0);
#endif
#ifdef GLUT_WINDOW_DEPTH_SIZE
printf("GLUT_WINDOW_DEPTH_SIZE %d\n", 106);
#endif
#ifdef GL_MVP_MATRIX_EXT
printf("GL_MVP_MATRIX_EXT %d\n", 0x87E3);
#endif
#ifdef GL_POINT_SIZE_RANGE
printf("GL_POINT_SIZE_RANGE %d\n", 0x0B12);
#endif
#ifdef GL_R3_G3_B2
printf("GL_R3_G3_B2 %d\n", 0x2A10);
#endif
#ifdef GL_ATI_text_fragment_shader
printf("GL_ATI_text_fragment_shader %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_stencil_clear_tag
printf("__GLEE_GL_EXT_stencil_clear_tag %d\n", 1);
#endif
#ifdef GL_TEXTURE_SHADER_NV
printf("GL_TEXTURE_SHADER_NV %d\n", 0x86DE);
#endif
#ifdef GLEE_SUNX_constant_data
#endif
#ifdef GL_MAP1_VERTEX_4
printf("GL_MAP1_VERTEX_4 %d\n", 0x0D98);
#endif
#ifdef glVariantubvEXT
#endif
#ifdef GL_PIXEL_TEXTURE_SGIS
printf("GL_PIXEL_TEXTURE_SGIS %d\n", 0x8353);
#endif
#ifdef GL_TEXTURE_CLIPMAP_DEPTH_SGIX
printf("GL_TEXTURE_CLIPMAP_DEPTH_SGIX %d\n", 0x8176);
#endif
#ifdef GL_OPERAND6_ALPHA_ARB
printf("GL_OPERAND6_ALPHA_ARB %d\n", 0x859E);
#endif
#ifdef __GLEE_GL_SGIX_list_priority
printf("__GLEE_GL_SGIX_list_priority %d\n", 1);
#endif
#ifdef GL_LUMINANCE32UI_EXT
printf("GL_LUMINANCE32UI_EXT %d\n", 0x8D74);
#endif
#ifdef GLUT_CURSOR_BOTTOM_RIGHT_CORNER
printf("GLUT_CURSOR_BOTTOM_RIGHT_CORNER %d\n", 18);
#endif
#ifdef glNormalStream3svATI
#endif
#ifdef GL_APPLE_element_array
printf("GL_APPLE_element_array %d\n", 1);
#endif
#ifdef GL_ATTRIB_ARRAY_TYPE_NV
printf("GL_ATTRIB_ARRAY_TYPE_NV %d\n", 0x8625);
#endif
#ifdef __GLEE_GL_SUN_vertex
printf("__GLEE_GL_SUN_vertex %d\n", 1);
#endif
#ifdef GL_MODELVIEW
printf("GL_MODELVIEW %d\n", 0x1700);
#endif
#ifdef GL_EXT_cull_vertex
printf("GL_EXT_cull_vertex %d\n", 1);
#endif
#ifdef GL_INT_SAMPLER_1D_EXT
printf("GL_INT_SAMPLER_1D_EXT %d\n", 0x8DC9);
#endif
#ifdef GLU_NURBS_MODE_EXT
printf("GLU_NURBS_MODE_EXT %d\n", 100160);
#endif
#ifdef GL_VIBRANCE_BIAS_NV
printf("GL_VIBRANCE_BIAS_NV %d\n", 0x8719);
#endif
#ifdef GL_DONT_CARE
printf("GL_DONT_CARE %d\n", 0x1100);
#endif
#ifdef glVertexAttrib4hNV
#endif
#ifdef GLUT_DISPLAY_MODE_POSSIBLE
printf("GLUT_DISPLAY_MODE_POSSIBLE %d\n", 400);
#endif
#ifdef GL_ALIASED_LINE_WIDTH_RANGE
printf("GL_ALIASED_LINE_WIDTH_RANGE %d\n", 0x846E);
#endif
#ifdef GL_LUMINANCE_ALPHA_FLOAT16_ATI
printf("GL_LUMINANCE_ALPHA_FLOAT16_ATI %d\n", 0x881F);
#endif
#ifdef GL_PIXEL_MAP_I_TO_G_SIZE
printf("GL_PIXEL_MAP_I_TO_G_SIZE %d\n", 0x0CB3);
#endif
#ifdef glVertexAttribs3dvNV
#endif
#ifdef GL_MODULATE
printf("GL_MODULATE %d\n", 0x2100);
#endif
#ifdef glWindowPos3fMESA
#endif
#ifdef GL_IBM_cull_vertex
printf("GL_IBM_cull_vertex %d\n", 1);
#endif
#ifdef __DBL_MAX_EXP__
printf("__DBL_MAX_EXP__ %d\n", 1024);
#endif
#ifdef GL_TEXTURE_BINDING_3D
printf("GL_TEXTURE_BINDING_3D %d\n", 0x806A);
#endif
#ifdef GL_FRAGMENT_DEPTH_EXT
printf("GL_FRAGMENT_DEPTH_EXT %d\n", 0x8452);
#endif
#ifdef GL_COMPRESSED_RGBA
printf("GL_COMPRESSED_RGBA %d\n", 0x84EE);
#endif
#ifdef GLEE_EXT_cull_vertex
#endif
#ifdef GL_MAP2_GRID_SEGMENTS
printf("GL_MAP2_GRID_SEGMENTS %d\n", 0x0DD3);
#endif
#ifdef GL_NORMAL_ARRAY_LIST_STRIDE_IBM
printf("GL_NORMAL_ARRAY_LIST_STRIDE_IBM %d\n", 103081);
#endif
#ifdef GL_POST_TEXTURE_FILTER_BIAS_SGIX
printf("GL_POST_TEXTURE_FILTER_BIAS_SGIX %d\n", 0x8179);
#endif
#ifdef GL_MAX_VARYING_FLOATS_ARB
printf("GL_MAX_VARYING_FLOATS_ARB %d\n", 0x8B4B);
#endif
#ifdef GL_PREFER_DOUBLEBUFFER_HINT_PGI
printf("GL_PREFER_DOUBLEBUFFER_HINT_PGI %d\n", 0x1A1F8);
#endif
#ifdef glGetFogFuncSGIS
#endif
#ifdef GL_MAX_LUMINANCE_SGIS
printf("GL_MAX_LUMINANCE_SGIS %d\n", 0x85F9);
#endif
#ifdef GL_TEXTURE_4DSIZE_SGIS
printf("GL_TEXTURE_4DSIZE_SGIS %d\n", 0x8136);
#endif
#ifdef GL_T4F_C4F_N3F_V4F
printf("GL_T4F_C4F_N3F_V4F %d\n", 0x2A2D);
#endif
#ifdef glNormal3hvNV
#endif
#ifdef GLUT_INIT_WINDOW_HEIGHT
printf("GLUT_INIT_WINDOW_HEIGHT %d\n", 503);
#endif
#ifdef GL_PIXEL_TEX_GEN_Q_CEILING_SGIX
printf("GL_PIXEL_TEX_GEN_Q_CEILING_SGIX %d\n", 0x8184);
#endif
#ifdef GL_4PASS_1_SGIS
printf("GL_4PASS_1_SGIS %d\n", 0x80A5);
#endif
#ifdef GL_PASS_THROUGH_TOKEN
printf("GL_PASS_THROUGH_TOKEN %d\n", 0x0700);
#endif
#ifdef GL_DRAW_BUFFER10_ATI
printf("GL_DRAW_BUFFER10_ATI %d\n", 0x882F);
#endif
#ifdef GL_SGIX_texture_coordinate_clamp
printf("GL_SGIX_texture_coordinate_clamp %d\n", 1);
#endif
#ifdef GL_DEPTH_TEXTURE_MODE_ARB
printf("GL_DEPTH_TEXTURE_MODE_ARB %d\n", 0x884B);
#endif
#ifdef GLEE_APPLE_vertex_array_range
#endif
#ifdef glBindMaterialParameterEXT
#endif
#ifdef GL_EXT_vertex_weighting
printf("GL_EXT_vertex_weighting %d\n", 1);
#endif
#ifdef glWindowPos3dMESA
#endif
#ifdef GLEE_EXT_rescale_normal
#endif
#ifdef GL_SOURCE5_RGB
printf("GL_SOURCE5_RGB %d\n", 0x8585);
#endif
#ifdef GL_TEXTURE22
printf("GL_TEXTURE22 %d\n", 0x84D6);
#endif
#ifdef GL_ADD
printf("GL_ADD %d\n", 0x0104);
#endif
#ifdef GL_INTENSITY16
printf("GL_INTENSITY16 %d\n", 0x804D);
#endif
#ifdef GLEE_SGI_color_matrix
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT %d\n", 0x8CD7);
#endif
#ifdef GL_PACK_IMAGE_HEIGHT_EXT
printf("GL_PACK_IMAGE_HEIGHT_EXT %d\n", 0x806C);
#endif
#ifdef GL_COLOR_ARRAY_LIST_STRIDE_IBM
printf("GL_COLOR_ARRAY_LIST_STRIDE_IBM %d\n", 103082);
#endif
#ifdef GL_EXT_texture_filter_anisotropic
printf("GL_EXT_texture_filter_anisotropic %d\n", 1);
#endif
#ifdef GL_PREVIOUS_TEXTURE_INPUT_NV
printf("GL_PREVIOUS_TEXTURE_INPUT_NV %d\n", 0x86E4);
#endif
#ifdef GL_COLOR_ARRAY_TYPE_EXT
printf("GL_COLOR_ARRAY_TYPE_EXT %d\n", 0x8082);
#endif
#ifdef GL_FOG_OFFSET_VALUE_SGIX
printf("GL_FOG_OFFSET_VALUE_SGIX %d\n", 0x8199);
#endif
#ifdef GL_BLEND_EQUATION_ALPHA_EXT
printf("GL_BLEND_EQUATION_ALPHA_EXT %d\n", 0x883D);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB0_NV
printf("GL_EVAL_VERTEX_ATTRIB0_NV %d\n", 0x86C6);
#endif
#ifdef GL_YCBCR_422_APPLE
printf("GL_YCBCR_422_APPLE %d\n", 0x85B9);
#endif
#ifdef __GLEE_GL_FfdMaskSGIX
printf("__GLEE_GL_FfdMaskSGIX %d\n", 1);
#endif
#ifdef GL_SHADER_SOURCE_LENGTH
printf("GL_SHADER_SOURCE_LENGTH %d\n", 0x8B88);
#endif
#ifdef GL_RENDERBUFFER_HEIGHT_EXT
printf("GL_RENDERBUFFER_HEIGHT_EXT %d\n", 0x8D43);
#endif
#ifdef GL_OP_MULTIPLY_MATRIX_EXT
printf("GL_OP_MULTIPLY_MATRIX_EXT %d\n", 0x8798);
#endif
#ifdef GL_STENCIL
printf("GL_STENCIL %d\n", 0x1802);
#endif
#ifdef GL_IMAGE_SCALE_Y_HP
printf("GL_IMAGE_SCALE_Y_HP %d\n", 0x8156);
#endif
#ifdef GL_VERTEX_SHADER_OPTIMIZED_EXT
printf("GL_VERTEX_SHADER_OPTIMIZED_EXT %d\n", 0x87D4);
#endif
#ifdef GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT
printf("GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT %d\n", 0x8409);
#endif
#ifdef GL_MIRROR_CLAMP_TO_EDGE_EXT
printf("GL_MIRROR_CLAMP_TO_EDGE_EXT %d\n", 0x8743);
#endif
#ifdef glVertexAttrib1dvNV
#endif
#ifdef glTextureColorMaskSGIS
#endif
#ifdef GLUT_HAS_JOYSTICK
printf("GLUT_HAS_JOYSTICK %d\n", 612);
#endif
#ifdef GL_TEXTURE6_ARB
printf("GL_TEXTURE6_ARB %d\n", 0x84C6);
#endif
#ifdef GL_POLYGON_STIPPLE_BIT
printf("GL_POLYGON_STIPPLE_BIT %d\n", 0x00000010);
#endif
#ifdef GL_EXT_rescale_normal
printf("GL_EXT_rescale_normal %d\n", 1);
#endif
#ifdef glGetOcclusionQueryuivNV
#endif
#ifdef __GLEE_GL_OML_interlace
printf("__GLEE_GL_OML_interlace %d\n", 1);
#endif
#ifdef GL_422_EXT
printf("GL_422_EXT %d\n", 0x80CC);
#endif
#ifdef GL_EXT_bgra
printf("GL_EXT_bgra %d\n", 1);
#endif
#ifdef GL_HISTOGRAM_RED_SIZE_EXT
printf("GL_HISTOGRAM_RED_SIZE_EXT %d\n", 0x8028);
#endif
#ifdef glProgramNamedParameter4dNV
#endif
#ifdef GLEE_ARB_multisample
#endif
#ifdef GL_STATIC_COPY
printf("GL_STATIC_COPY %d\n", 0x88E6);
#endif
#ifdef GL_BUFFER_FLUSHING_UNMAP_APPLE
printf("GL_BUFFER_FLUSHING_UNMAP_APPLE %d\n", 0x8A13);
#endif
#ifdef GL_DRAW_BUFFER3_ARB
printf("GL_DRAW_BUFFER3_ARB %d\n", 0x8828);
#endif
#ifdef GLEE_ARB_vertex_buffer_object
#endif
#ifdef GLEE_SGIS_point_line_texgen
#endif
#ifdef GL_EXT_pixel_transform
printf("GL_EXT_pixel_transform %d\n", 1);
#endif
#ifdef glReplacementCodeuiVertex3fvSUN
#endif
#ifdef GL_MODELVIEW_STACK_DEPTH
printf("GL_MODELVIEW_STACK_DEPTH %d\n", 0x0BA3);
#endif
#ifdef GL_MAX_WEIGHTED_ATI
printf("GL_MAX_WEIGHTED_ATI %d\n", 0x877E);
#endif
#ifdef GL_DEPTH_COMPONENT24_ARB
printf("GL_DEPTH_COMPONENT24_ARB %d\n", 0x81A6);
#endif
#ifdef GL_TEXTURE29
printf("GL_TEXTURE29 %d\n", 0x84DD);
#endif
#ifdef GL_ALPHA_INTEGER_EXT
printf("GL_ALPHA_INTEGER_EXT %d\n", 0x8D97);
#endif
#ifdef __GLEE_GL_SGIS_point_parameters
printf("__GLEE_GL_SGIS_point_parameters %d\n", 1);
#endif
#ifdef GL_VECTOR_EXT
printf("GL_VECTOR_EXT %d\n", 0x87BF);
#endif
#ifdef GL_INGR_interlace_read
printf("GL_INGR_interlace_read %d\n", 1);
#endif
#ifdef GLU_MAP1_TRIM_3
printf("GLU_MAP1_TRIM_3 %d\n", 100211);
#endif
#ifdef GL_PROGRAM_PARAMETERS_ARB
printf("GL_PROGRAM_PARAMETERS_ARB %d\n", 0x88A8);
#endif
#ifdef glVertexAttrib1svNV
#endif
#ifdef GL_LUMINANCE4
printf("GL_LUMINANCE4 %d\n", 0x803F);
#endif
#ifdef GL_EXT_gpu_program_parameters
printf("GL_EXT_gpu_program_parameters %d\n", 1);
#endif
#ifdef GL_DUAL_TEXTURE_SELECT_SGIS
printf("GL_DUAL_TEXTURE_SELECT_SGIS %d\n", 0x8124);
#endif
#ifdef glBeginFragmentShaderATI
#endif
#ifdef GL_3DFX_tbuffer
printf("GL_3DFX_tbuffer %d\n", 1);
#endif
#ifdef GLEE_ARB_multitexture
#endif
#ifdef GL_LUMINANCE16_EXT
printf("GL_LUMINANCE16_EXT %d\n", 0x8042);
#endif
#ifdef glSetInvariantEXT
#endif
#ifdef GL_LUMINANCE_FLOAT32_APPLE
printf("GL_LUMINANCE_FLOAT32_APPLE %d\n", 0x8818);
#endif
#ifdef GL_RESAMPLE_ZERO_FILL_SGIX
printf("GL_RESAMPLE_ZERO_FILL_SGIX %d\n", 0x842F);
#endif
#ifdef GL_SOURCE7_ALPHA_ARB
printf("GL_SOURCE7_ALPHA_ARB %d\n", 0x858F);
#endif
#ifdef GL_MAX_VERTEX_SHADER_LOCALS_EXT
printf("GL_MAX_VERTEX_SHADER_LOCALS_EXT %d\n", 0x87C9);
#endif
#ifdef GL_TEXTURE_DEPTH
printf("GL_TEXTURE_DEPTH %d\n", 0x8071);
#endif
#ifdef GL_MATRIX2_ARB
printf("GL_MATRIX2_ARB %d\n", 0x88C2);
#endif
#ifdef GL_SCALEBIAS_HINT_SGIX
printf("GL_SCALEBIAS_HINT_SGIX %d\n", 0x8322);
#endif
#ifdef GLEE_NV_texture_shader2
#endif
#ifdef GL_CULL_VERTEX_IBM
printf("GL_CULL_VERTEX_IBM %d\n", 103050);
#endif
#ifdef GL_TEXTURE_ENV
printf("GL_TEXTURE_ENV %d\n", 0x2300);
#endif
#ifdef GL_ALL_STATIC_DATA_IBM
printf("GL_ALL_STATIC_DATA_IBM %d\n", 103060);
#endif
#ifdef GLU_TESS_EDGE_FLAG
printf("GLU_TESS_EDGE_FLAG %d\n", 100104);
#endif
#ifdef GL_NV_depth_clamp
printf("GL_NV_depth_clamp %d\n", 1);
#endif
#ifdef GL_ELEMENT_ARRAY_TYPE_ATI
printf("GL_ELEMENT_ARRAY_TYPE_ATI %d\n", 0x8769);
#endif
#ifdef GL_OBJECT_DISTANCE_TO_LINE_SGIS
printf("GL_OBJECT_DISTANCE_TO_LINE_SGIS %d\n", 0x81F3);
#endif
#ifdef GLEE_ARB_fragment_shader
#endif
#ifdef GL_PIXEL_TILE_GRID_WIDTH_SGIX
printf("GL_PIXEL_TILE_GRID_WIDTH_SGIX %d\n", 0x8142);
#endif
#ifdef __GLEE_GL_ATI_vertex_attrib_array_object
printf("__GLEE_GL_ATI_vertex_attrib_array_object %d\n", 1);
#endif
#ifdef GL_DSDT8_MAG8_INTENSITY8_NV
printf("GL_DSDT8_MAG8_INTENSITY8_NV %d\n", 0x870B);
#endif
#ifdef GL_CURRENT_FOG_COORD
printf("GL_CURRENT_FOG_COORD %d\n", 0x8453);
#endif
#ifdef GL_RGB12
printf("GL_RGB12 %d\n", 0x8053);
#endif
#ifdef GL_MODELVIEW8_ARB
printf("GL_MODELVIEW8_ARB %d\n", 0x8728);
#endif
#ifdef GL_APPLE_transform_hint
printf("GL_APPLE_transform_hint %d\n", 1);
#endif
#ifdef GL_UNSIGNED_INT_24_8_EXT
printf("GL_UNSIGNED_INT_24_8_EXT %d\n", 0x84FA);
#endif
#ifdef GLU_EXTERIOR
printf("GLU_EXTERIOR %d\n", 100123);
#endif
#ifdef GL_POINT_CULL_CLIP_ATI
printf("GL_POINT_CULL_CLIP_ATI %d\n", 0x60B5);
#endif
#ifdef glBindTextureUnitParameterEXT
#endif
#ifdef GL_ADD_SIGNED_EXT
printf("GL_ADD_SIGNED_EXT %d\n", 0x8574);
#endif
#ifdef GLU_NURBS_BEGIN_DATA
printf("GLU_NURBS_BEGIN_DATA %d\n", 100170);
#endif
#ifdef GL_SHARED_TEXTURE_PALETTE_EXT
printf("GL_SHARED_TEXTURE_PALETTE_EXT %d\n", 0x81FB);
#endif
#ifdef GL_VERTEX_WEIGHT_ARRAY_EXT
printf("GL_VERTEX_WEIGHT_ARRAY_EXT %d\n", 0x850C);
#endif
#ifdef GL_TEXTURE13
printf("GL_TEXTURE13 %d\n", 0x84CD);
#endif
#ifdef GL_ASYNC_DRAW_PIXELS_SGIX
printf("GL_ASYNC_DRAW_PIXELS_SGIX %d\n", 0x835D);
#endif
#ifdef GL_TEXTURE_WRAP_R
printf("GL_TEXTURE_WRAP_R %d\n", 0x8072);
#endif
#ifdef GL_PRIMARY_COLOR_EXT
printf("GL_PRIMARY_COLOR_EXT %d\n", 0x8577);
#endif
#ifdef GL_Y_EXT
printf("GL_Y_EXT %d\n", 0x87D6);
#endif
#ifdef GL_COLOR_INDEX
printf("GL_COLOR_INDEX %d\n", 0x1900);
#endif
#ifdef GL_CURRENT_PALETTE_MATRIX_ARB
printf("GL_CURRENT_PALETTE_MATRIX_ARB %d\n", 0x8843);
#endif
#ifdef GLEE_NV_evaluators
#endif
#ifdef GL_MODELVIEW11_ARB
printf("GL_MODELVIEW11_ARB %d\n", 0x872B);
#endif
#ifdef glVertexStream3fvATI
#endif
#ifdef GL_OUTPUT_COLOR0_EXT
printf("GL_OUTPUT_COLOR0_EXT %d\n", 0x879B);
#endif
#ifdef GL_PIXEL_TRANSFORM_2D_MATRIX_EXT
printf("GL_PIXEL_TRANSFORM_2D_MATRIX_EXT %d\n", 0x8338);
#endif
#ifdef GLU_NURBS_COLOR_DATA
printf("GLU_NURBS_COLOR_DATA %d\n", 100173);
#endif
#ifdef GL_OBJECT_VALIDATE_STATUS_ARB
printf("GL_OBJECT_VALIDATE_STATUS_ARB %d\n", 0x8B83);
#endif
#ifdef GL_MESA_window_pos
printf("GL_MESA_window_pos %d\n", 1);
#endif
#ifdef glTexBumpParameterfvATI
#endif
#ifdef GL_4X_BIT_ATI
printf("GL_4X_BIT_ATI %d\n", 0x00000002);
#endif
#ifdef glVertex2hNV
#endif
#ifdef GL_MATRIX19_ARB
printf("GL_MATRIX19_ARB %d\n", 0x88D3);
#endif
#ifdef GL_TEXTURE31
printf("GL_TEXTURE31 %d\n", 0x84DF);
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT
printf("GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT %d\n", 0x8403);
#endif
#ifdef glBindFragmentShaderATI
#endif
#ifdef __GLEE_GL_OML_resample
printf("__GLEE_GL_OML_resample %d\n", 1);
#endif
#ifdef GL_MAX_VERTEX_SHADER_INVARIANTS_EXT
printf("GL_MAX_VERTEX_SHADER_INVARIANTS_EXT %d\n", 0x87C7);
#endif
#ifdef GL_MATRIX18_ARB
printf("GL_MATRIX18_ARB %d\n", 0x88D2);
#endif
#ifdef GL_DRAW_BUFFER9
printf("GL_DRAW_BUFFER9 %d\n", 0x882E);
#endif
#ifdef GL_TEXTURE_BINDING_CUBE_MAP_EXT
printf("GL_TEXTURE_BINDING_CUBE_MAP_EXT %d\n", 0x8514);
#endif
#ifdef GLU_NURBS_ERROR4
printf("GLU_NURBS_ERROR4 %d\n", 100254);
#endif
#ifdef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
printf("GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT %d\n", 0x84FF);
#endif
#ifdef GLUT_MACOSX_IMPLEMENTATION
printf("GLUT_MACOSX_IMPLEMENTATION %d\n", 2);
#endif
#ifdef GL_ARB_texture_mirrored_repeat
printf("GL_ARB_texture_mirrored_repeat %d\n", 1);
#endif
#ifdef glPolygonOffsetEXT
#endif
#ifdef GL_PROXY_COLOR_TABLE_SGI
printf("GL_PROXY_COLOR_TABLE_SGI %d\n", 0x80D3);
#endif
#ifdef GL_MODELVIEW7_ARB
printf("GL_MODELVIEW7_ARB %d\n", 0x8727);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM
printf("GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM %d\n", 103086);
#endif
#ifdef GL_BLEND_DST
printf("GL_BLEND_DST %d\n", 0x0BE0);
#endif
#ifdef GL_COMPRESSED_ALPHA
printf("GL_COMPRESSED_ALPHA %d\n", 0x84E9);
#endif
#ifdef GL_SLUMINANCE8_ALPHA8
printf("GL_SLUMINANCE8_ALPHA8 %d\n", 0x8C45);
#endif
#ifdef GL_COMPILE
printf("GL_COMPILE %d\n", 0x1300);
#endif
#ifdef GL_OBJECT_BUFFER_SIZE_ATI
printf("GL_OBJECT_BUFFER_SIZE_ATI %d\n", 0x8764);
#endif
#ifdef GL_NUM_GENERAL_COMBINERS_NV
printf("GL_NUM_GENERAL_COMBINERS_NV %d\n", 0x854E);
#endif
#ifdef glConvolutionParameterivEXT
#endif
#ifdef GL_SRC3_RGB
printf("GL_SRC3_RGB %d\n", 0x8583);
#endif
#ifdef GL_QUERY_COUNTER_BITS_ARB
printf("GL_QUERY_COUNTER_BITS_ARB %d\n", 0x8864);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP1_APPLE
printf("GL_VERTEX_ATTRIB_MAP1_APPLE %d\n", 0x8A00);
#endif
#ifdef GL_TEXTURE_COMPARE_OPERATOR_SGIX
printf("GL_TEXTURE_COMPARE_OPERATOR_SGIX %d\n", 0x819B);
#endif
#ifdef GLUT_WINDOW_RGBA
printf("GLUT_WINDOW_RGBA %d\n", 116);
#endif
#ifdef GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX
printf("GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX %d\n", 0x8311);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
printf("GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING %d\n", 0x889C);
#endif
#ifdef GL_RESAMPLE_AVERAGE_OML
printf("GL_RESAMPLE_AVERAGE_OML %d\n", 0x8988);
#endif
#ifdef GL_VERTEX_ATTRIB_MAP2_APPLE
printf("GL_VERTEX_ATTRIB_MAP2_APPLE %d\n", 0x8A01);
#endif
#ifdef glFinishTextureSUNX
#endif
#ifdef GLEE_ARB_matrix_palette
#endif
#ifdef GL_FRAGMENT_PROGRAM_BINDING_NV
printf("GL_FRAGMENT_PROGRAM_BINDING_NV %d\n", 0x8873);
#endif
#ifdef GL_INT_SAMPLER_2D_RECT_EXT
printf("GL_INT_SAMPLER_2D_RECT_EXT %d\n", 0x8DCD);
#endif
#ifdef glPollInstrumentsSGIX
#endif
#ifdef GL_READ_ONLY_ARB
printf("GL_READ_ONLY_ARB %d\n", 0x88B8);
#endif
#ifdef GL_DRAW_BUFFER9_ARB
printf("GL_DRAW_BUFFER9_ARB %d\n", 0x882E);
#endif
#ifdef GLEE_SGIS_texture4D
#endif
#ifdef __FLT_MAX_10_EXP__
printf("__FLT_MAX_10_EXP__ %d\n", 38);
#endif
#ifdef GL_ELEMENT_ARRAY_POINTER_ATI
printf("GL_ELEMENT_ARRAY_POINTER_ATI %d\n", 0x876A);
#endif
#ifdef GL_ELEMENT_ARRAY_ATI
printf("GL_ELEMENT_ARRAY_ATI %d\n", 0x8768);
#endif
#ifdef GL_FLOAT_RGB32_NV
printf("GL_FLOAT_RGB32_NV %d\n", 0x8889);
#endif
#ifdef GL_LIST_MODE
printf("GL_LIST_MODE %d\n", 0x0B30);
#endif
#ifdef GL_ALL_COMPLETED_NV
printf("GL_ALL_COMPLETED_NV %d\n", 0x84F2);
#endif
#ifdef glAsyncMarkerSGIX
#endif
#ifdef glSecondaryColor3hNV
#endif
#ifdef GL_SEPARABLE_2D
printf("GL_SEPARABLE_2D %d\n", 0x8012);
#endif
#ifdef GL_BACK_RIGHT
printf("GL_BACK_RIGHT %d\n", 0x0403);
#endif
#ifdef GL_EXT_framebuffer_multisample
printf("GL_EXT_framebuffer_multisample %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT
printf("GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT %d\n", 0x88FD);
#endif
#ifdef GL_SEPARATE_SPECULAR_COLOR
printf("GL_SEPARATE_SPECULAR_COLOR %d\n", 0x81FA);
#endif
#ifdef GL_REG_20_ATI
printf("GL_REG_20_ATI %d\n", 0x8935);
#endif
#ifdef GLEE_VERSION_1_2
#endif
#ifdef GL_EXT_bindable_uniform
printf("GL_EXT_bindable_uniform %d\n", 1);
#endif
#ifdef GL_RENDERBUFFER_GREEN_SIZE_EXT
printf("GL_RENDERBUFFER_GREEN_SIZE_EXT %d\n", 0x8D51);
#endif
#ifdef glNormalPointerEXT
#endif
#ifdef glSecondaryColor3hvNV
#endif
#ifdef GL_RGB5_EXT
printf("GL_RGB5_EXT %d\n", 0x8050);
#endif
#ifdef GL_DOMAIN
printf("GL_DOMAIN %d\n", 0x0A02);
#endif
#ifdef GL_SOURCE2_ALPHA_EXT
printf("GL_SOURCE2_ALPHA_EXT %d\n", 0x858A);
#endif
#ifdef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT
printf("GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT %d\n", 0x8CD9);
#endif
#ifdef glCopyConvolutionFilter1DEXT
#endif
#ifdef GL_OP_MIN_EXT
printf("GL_OP_MIN_EXT %d\n", 0x878B);
#endif
#ifdef GLEE_IBM_cull_vertex
#endif
#ifdef GL_LUMINANCE_EXTENDED_RANGE_SGIX
printf("GL_LUMINANCE_EXTENDED_RANGE_SGIX %d\n", 0x85EF);
#endif
#ifdef GL_POINT_SIZE_MIN
printf("GL_POINT_SIZE_MIN %d\n", 0x8126);
#endif
#ifdef GL_ALPHA_BLEND_EQUATION_ATI
printf("GL_ALPHA_BLEND_EQUATION_ATI %d\n", 0x883D);
#endif
#ifdef GL_EVAL_VERTEX_ATTRIB1_NV
printf("GL_EVAL_VERTEX_ATTRIB1_NV %d\n", 0x86C7);
#endif
#ifdef GL_ARB_multisample
printf("GL_ARB_multisample %d\n", 1);
#endif
#ifdef GLUT_CURSOR_BOTTOM_LEFT_CORNER
printf("GLUT_CURSOR_BOTTOM_LEFT_CORNER %d\n", 19);
#endif
#ifdef GLEE_SGIS_multisample
#endif
#ifdef GL_AUTO_NORMAL
printf("GL_AUTO_NORMAL %d\n", 0x0D80);
#endif
#ifdef GL_SOURCE0_RGB_EXT
printf("GL_SOURCE0_RGB_EXT %d\n", 0x8580);
#endif
#ifdef GL_SECONDARY_COLOR_ARRAY_POINTER_EXT
printf("GL_SECONDARY_COLOR_ARRAY_POINTER_EXT %d\n", 0x845D);
#endif
#ifdef __GLEE_GL_SGIX_texture_select
printf("__GLEE_GL_SGIX_texture_select %d\n", 1);
#endif
#ifdef GL_BLEND_DST_RGB
printf("GL_BLEND_DST_RGB %d\n", 0x80C8);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_STRIDE
printf("GL_FOG_COORDINATE_ARRAY_STRIDE %d\n", 0x8455);
#endif
#ifdef glBinormal3dvEXT
#endif
#ifdef GL_DETAIL_TEXTURE_2D_SGIS
printf("GL_DETAIL_TEXTURE_2D_SGIS %d\n", 0x8095);
#endif
#ifdef GL_COLOR_ARRAY_TYPE
printf("GL_COLOR_ARRAY_TYPE %d\n", 0x8082);
#endif
#ifdef GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB
printf("GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB %d\n", 0x84F8);
#endif
#ifdef GL_PROGRAM_NATIVE_ATTRIBS_ARB
printf("GL_PROGRAM_NATIVE_ATTRIBS_ARB %d\n", 0x88AE);
#endif
#ifdef glGetOcclusionQueryivNV
#endif
#ifdef GL_TEXTURE_BLUE_TYPE_ARB
printf("GL_TEXTURE_BLUE_TYPE_ARB %d\n", 0x8C12);
#endif
#ifdef GL_REG_18_ATI
printf("GL_REG_18_ATI %d\n", 0x8933);
#endif
#ifdef GL_PASS_THROUGH_NV
printf("GL_PASS_THROUGH_NV %d\n", 0x86E6);
#endif
#ifdef GL_EXT_coordinate_frame
printf("GL_EXT_coordinate_frame %d\n", 1);
#endif
#ifdef GL_EXT_blend_minmax
printf("GL_EXT_blend_minmax %d\n", 1);
#endif
#ifdef GL_VARIABLE_D_NV
printf("GL_VARIABLE_D_NV %d\n", 0x8526);
#endif
#ifdef glNormal3hNV
#endif
#ifdef GL_SAMPLE_COVERAGE_ARB
printf("GL_SAMPLE_COVERAGE_ARB %d\n", 0x80A0);
#endif
#ifdef __GLEE_GL_SGIX_interlace
printf("__GLEE_GL_SGIX_interlace %d\n", 1);
#endif
#ifdef GL_CALLIGRAPHIC_FRAGMENT_SGIX
printf("GL_CALLIGRAPHIC_FRAGMENT_SGIX %d\n", 0x8183);
#endif
#ifdef glAlphaFragmentOp3ATI
#endif
#ifdef GL_UNDEFINED_APPLE
printf("GL_UNDEFINED_APPLE %d\n", 0x8A1C);
#endif
#ifdef GL_COLOR_ARRAY_EXT
printf("GL_COLOR_ARRAY_EXT %d\n", 0x8076);
#endif
#ifdef GL_MODELVIEW16_ARB
printf("GL_MODELVIEW16_ARB %d\n", 0x8730);
#endif
#ifdef GL_TEXTURE_INTENSITY_SIZE
printf("GL_TEXTURE_INTENSITY_SIZE %d\n", 0x8061);
#endif
#ifdef GL_POLYGON_OFFSET_LINE
printf("GL_POLYGON_OFFSET_LINE %d\n", 0x2A02);
#endif
#ifdef GL_ARB_fragment_program_shadow
printf("GL_ARB_fragment_program_shadow %d\n", 1);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X
printf("GL_TEXTURE_CUBE_MAP_POSITIVE_X %d\n", 0x8515);
#endif
#ifdef GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV
printf("GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV %d\n", 0x8868);
#endif
#ifdef GL_MATRIX30_ARB
printf("GL_MATRIX30_ARB %d\n", 0x88DE);
#endif
#ifdef GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB
printf("GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB %d\n", 0x8B4A);
#endif
#ifdef GL_TEXTURE_DEPTH_EXT
printf("GL_TEXTURE_DEPTH_EXT %d\n", 0x8071);
#endif
#ifdef GLEE_APPLE_specular_vector
#endif
#ifdef GL_PROGRAM_NAME_ARB
printf("GL_PROGRAM_NAME_ARB %d\n", 0x8677);
#endif
#ifdef GL_BLEND_SRC
printf("GL_BLEND_SRC %d\n", 0x0BE1);
#endif
#ifdef GLUT_CURSOR_LEFT_ARROW
printf("GLUT_CURSOR_LEFT_ARROW %d\n", 1);
#endif
#ifdef GL_PROGRAM_TEX_INSTRUCTIONS_ARB
printf("GL_PROGRAM_TEX_INSTRUCTIONS_ARB %d\n", 0x8806);
#endif
#ifdef GL_COMBINE4_NV
printf("GL_COMBINE4_NV %d\n", 0x8503);
#endif
#ifdef GL_GEOMETRY_INPUT_TYPE_EXT
printf("GL_GEOMETRY_INPUT_TYPE_EXT %d\n", 0x8DDB);
#endif
#ifdef glVertexStream2iATI
#endif
#ifdef GLEE_SGI_color_table
#endif
#ifdef GL_RGB10_A2_EXT
printf("GL_RGB10_A2_EXT %d\n", 0x8059);
#endif
#ifdef GL_PALETTE4_RGBA4_OES
printf("GL_PALETTE4_RGBA4_OES %d\n", 0x8B93);
#endif
#ifdef GL_IBM_vertex_array_lists
printf("GL_IBM_vertex_array_lists %d\n", 1);
#endif
#ifdef GL_DRAW_BUFFER7_ATI
printf("GL_DRAW_BUFFER7_ATI %d\n", 0x882C);
#endif
#ifdef GLEE_EXT_abgr
#endif
#ifdef GL_COMPRESSED_RGBA_FXT1_3DFX
printf("GL_COMPRESSED_RGBA_FXT1_3DFX %d\n", 0x86B1);
#endif
#ifdef __SSE_MATH__
printf("__SSE_MATH__ %d\n", 1);
#endif
#ifdef GL_RGB4_S3TC
printf("GL_RGB4_S3TC %d\n", 0x83A1);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB9_4_NV
printf("GL_MAP2_VERTEX_ATTRIB9_4_NV %d\n", 0x8679);
#endif
#ifdef glClipPlanefOES
#endif
#ifdef GL_ACCUM_GREEN_BITS
printf("GL_ACCUM_GREEN_BITS %d\n", 0x0D59);
#endif
#ifdef GL_SGI_texture_color_table
printf("GL_SGI_texture_color_table %d\n", 1);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_SIZE
printf("GL_VERTEX_ATTRIB_ARRAY_SIZE %d\n", 0x8623);
#endif
#ifdef GL_SRC4_RGB
printf("GL_SRC4_RGB %d\n", 0x8584);
#endif
#ifdef GL_HALF_FLOAT_NV
printf("GL_HALF_FLOAT_NV %d\n", 0x140B);
#endif
#ifdef GL_SOURCE4_RGB
printf("GL_SOURCE4_RGB %d\n", 0x8584);
#endif
#ifdef GL_COMBINER_COMPONENT_USAGE_NV
printf("GL_COMBINER_COMPONENT_USAGE_NV %d\n", 0x8544);
#endif
#ifdef GL_POLYGON_OFFSET_EXT
printf("GL_POLYGON_OFFSET_EXT %d\n", 0x8037);
#endif
#ifdef GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE
printf("GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE %d\n", 0x85B0);
#endif
#ifdef GL_MAX_ASYNC_READ_PIXELS_SGIX
printf("GL_MAX_ASYNC_READ_PIXELS_SGIX %d\n", 0x8361);
#endif
#ifdef GL_DRAW_BUFFER12_ATI
printf("GL_DRAW_BUFFER12_ATI %d\n", 0x8831);
#endif
#ifdef GL_FRONT
printf("GL_FRONT %d\n", 0x0404);
#endif
#ifdef __FLT_HAS_QUIET_NAN__
printf("__FLT_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef GL_MODELVIEW24_ARB
printf("GL_MODELVIEW24_ARB %d\n", 0x8738);
#endif
#ifdef GL_READ_PIXEL_DATA_RANGE_POINTER_NV
printf("GL_READ_PIXEL_DATA_RANGE_POINTER_NV %d\n", 0x887D);
#endif
#ifdef GL_DUAL_INTENSITY8_SGIS
printf("GL_DUAL_INTENSITY8_SGIS %d\n", 0x8119);
#endif
#ifdef GLUT_WINDOW_ACCUM_ALPHA_SIZE
printf("GLUT_WINDOW_ACCUM_ALPHA_SIZE %d\n", 114);
#endif
#ifdef GL_ALPHA32F_ARB
printf("GL_ALPHA32F_ARB %d\n", 0x8816);
#endif
#ifdef glAlphaFragmentOp1ATI
#endif
#ifdef GL_QUERY_RESULT_ARB
printf("GL_QUERY_RESULT_ARB %d\n", 0x8866);
#endif
#ifdef GLU_INTERIOR
printf("GLU_INTERIOR %d\n", 100122);
#endif
#ifdef GL_COLOR_SUM_EXT
printf("GL_COLOR_SUM_EXT %d\n", 0x8458);
#endif
#ifdef GL_ALPHA_SCALE
printf("GL_ALPHA_SCALE %d\n", 0x0D1C);
#endif
#ifdef GLEE_NV_fragment_program_option
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE
printf("GL_TEXTURE_COORD_ARRAY_SIZE %d\n", 0x8088);
#endif
#ifdef GL_ARB_color_buffer_float
printf("GL_ARB_color_buffer_float %d\n", 1);
#endif
#ifdef __GLEE_GL_EXT_copy_texture
printf("__GLEE_GL_EXT_copy_texture %d\n", 1);
#endif
#ifdef GL_CONVOLUTION_BORDER_MODE_EXT
printf("GL_CONVOLUTION_BORDER_MODE_EXT %d\n", 0x8013);
#endif
#ifdef GL_DUAL_INTENSITY12_SGIS
printf("GL_DUAL_INTENSITY12_SGIS %d\n", 0x811A);
#endif
#ifdef GL_CONSTANT_BORDER_HP
printf("GL_CONSTANT_BORDER_HP %d\n", 0x8151);
#endif
#ifdef GLUT_DEVICE_KEY_REPEAT
printf("GLUT_DEVICE_KEY_REPEAT %d\n", 611);
#endif
#ifdef glNormalPointervINTEL
#endif
#ifdef GLU_EXT_nurbs_tessellator
printf("GLU_EXT_nurbs_tessellator %d\n", 1);
#endif
#ifdef GL_INT_VEC4_ARB
printf("GL_INT_VEC4_ARB %d\n", 0x8B55);
#endif
#ifdef GL_EXPAND_NEGATE_NV
printf("GL_EXPAND_NEGATE_NV %d\n", 0x8539);
#endif
#ifdef GL_UNSIGNED_SHORT_4_4_4_4
printf("GL_UNSIGNED_SHORT_4_4_4_4 %d\n", 0x8033);
#endif
#ifdef GL_FLOAT_VEC4
printf("GL_FLOAT_VEC4 %d\n", 0x8B52);
#endif
#ifdef GL_TEXTURE_LUMINANCE_SIZE
printf("GL_TEXTURE_LUMINANCE_SIZE %d\n", 0x8060);
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB
printf("GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB %d\n", 0x88AB);
#endif
#ifdef GL_LUMINANCE32F_ARB
printf("GL_LUMINANCE32F_ARB %d\n", 0x8818);
#endif
#ifdef GL_2PASS_0_EXT
printf("GL_2PASS_0_EXT %d\n", 0x80A2);
#endif
#ifdef GL_SGIX_instruments
printf("GL_SGIX_instruments %d\n", 1);
#endif
#ifdef glVertexStream4iATI
#endif
#ifdef GL_LIGHT7
printf("GL_LIGHT7 %d\n", 0x4007);
#endif
#ifdef GL_CURRENT_TEXTURE_COORDS
printf("GL_CURRENT_TEXTURE_COORDS %d\n", 0x0B03);
#endif
#ifdef GL_COLOR_ATTACHMENT13_EXT
printf("GL_COLOR_ATTACHMENT13_EXT %d\n", 0x8CED);
#endif
#ifdef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
printf("GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING %d\n", 0x889F);
#endif
#ifdef GL_MAX_MAP_TESSELLATION_NV
printf("GL_MAX_MAP_TESSELLATION_NV %d\n", 0x86D6);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD15_EXT
printf("GL_OUTPUT_TEXTURE_COORD15_EXT %d\n", 0x87AC);
#endif
#ifdef GL_CURRENT_VERTEX_WEIGHT_EXT
printf("GL_CURRENT_VERTEX_WEIGHT_EXT %d\n", 0x850B);
#endif
#ifdef GL_POINT_SIZE_MAX_ARB
printf("GL_POINT_SIZE_MAX_ARB %d\n", 0x8127);
#endif
#ifdef glWindowPos2dMESA
#endif
#ifdef GLU_TESS_MISSING_BEGIN_CONTOUR
printf("GLU_TESS_MISSING_BEGIN_CONTOUR %d\n", 100152);
#endif
#ifdef GL_NORMAL_ARRAY_STRIDE
printf("GL_NORMAL_ARRAY_STRIDE %d\n", 0x807F);
#endif
#ifdef glWindowPos4iMESA
#endif
#ifdef GL_RGB32F_ARB
printf("GL_RGB32F_ARB %d\n", 0x8815);
#endif
#ifdef GL_ENV_SUBTRACT_EXT
printf("GL_ENV_SUBTRACT_EXT %d\n", 0);
#endif
#ifdef GL_ARB_texture_env_crossbar
printf("GL_ARB_texture_env_crossbar %d\n", 1);
#endif
#ifdef GL_MATRIX9_ARB
printf("GL_MATRIX9_ARB %d\n", 0x88C9);
#endif
#ifdef GL_VERTEX_SHADER_LOCALS_EXT
printf("GL_VERTEX_SHADER_LOCALS_EXT %d\n", 0x87D3);
#endif
#ifdef GL_INDEX_ARRAY_LIST_STRIDE_IBM
printf("GL_INDEX_ARRAY_LIST_STRIDE_IBM %d\n", 103083);
#endif
#ifdef GL_QUADRATIC_ATTENUATION
printf("GL_QUADRATIC_ATTENUATION %d\n", 0x1209);
#endif
#ifdef GL_FOG_SPECULAR_TEXTURE_WIN
printf("GL_FOG_SPECULAR_TEXTURE_WIN %d\n", 0x80EC);
#endif
#ifdef __FLT_MIN__
#endif
#ifdef GL_CURRENT_MATRIX_ARB
printf("GL_CURRENT_MATRIX_ARB %d\n", 0x8641);
#endif
#ifdef GL_AUX0
printf("GL_AUX0 %d\n", 0x0409);
#endif
#ifdef GL_TEXTURE9
printf("GL_TEXTURE9 %d\n", 0x84C9);
#endif
#ifdef GL_ALPHA12
printf("GL_ALPHA12 %d\n", 0x803D);
#endif
#ifdef GL_CURRENT_VERTEX_ATTRIB
printf("GL_CURRENT_VERTEX_ATTRIB %d\n", 0x8626);
#endif
#ifdef glPixelTexGenSGIX
#endif
#ifdef GL_FUNC_ADD_EXT
printf("GL_FUNC_ADD_EXT %d\n", 0x8006);
#endif
#ifdef GL_SOURCE1_RGB_ARB
printf("GL_SOURCE1_RGB_ARB %d\n", 0x8581);
#endif
#ifdef glFragmentLightivSGIX
#endif
#ifdef GL_POINT_CULL_CENTER_ATI
printf("GL_POINT_CULL_CENTER_ATI %d\n", 0x60B4);
#endif
#ifdef glFragmentLightModelivEXT
#endif
#ifdef GL_MAX_LIST_NESTING
printf("GL_MAX_LIST_NESTING %d\n", 0x0B31);
#endif
#ifdef GLU_OBJECT_PARAMETRIC_ERROR_EXT
printf("GLU_OBJECT_PARAMETRIC_ERROR_EXT %d\n", 100208);
#endif
#ifdef GL_VERTEX_SHADER_ARB
printf("GL_VERTEX_SHADER_ARB %d\n", 0x8B31);
#endif
#ifdef GL_TEXTURE_MAX_LOD_SGIS
printf("GL_TEXTURE_MAX_LOD_SGIS %d\n", 0x813B);
#endif
#ifdef GL_RGBA4_S3TC
printf("GL_RGBA4_S3TC %d\n", 0x83A3);
#endif
#ifdef glWindowPos4dvMESA
#endif
#ifdef GL_COMPRESSED_SLUMINANCE_EXT
printf("GL_COMPRESSED_SLUMINANCE_EXT %d\n", 0x8C4A);
#endif
#ifdef GLEE_INTEL_parallel_arrays
#endif
#ifdef GL_SGIS_texture_edge_clamp
printf("GL_SGIS_texture_edge_clamp %d\n", 1);
#endif
#ifdef GL_MAP1_VERTEX_ATTRIB15_4_NV
printf("GL_MAP1_VERTEX_ATTRIB15_4_NV %d\n", 0x866F);
#endif
#ifdef GL_EXT_shared_texture_palette
printf("GL_EXT_shared_texture_palette %d\n", 1);
#endif
#ifdef GL_COLOR_ATTACHMENT3_EXT
printf("GL_COLOR_ATTACHMENT3_EXT %d\n", 0x8CE3);
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER_ARB
printf("GL_ELEMENT_ARRAY_BUFFER_ARB %d\n", 0x8893);
#endif
#ifdef GL_TABLE_TOO_LARGE
printf("GL_TABLE_TOO_LARGE %d\n", 0x8031);
#endif
#ifdef GL_APPLE_client_storage
printf("GL_APPLE_client_storage %d\n", 1);
#endif
#ifdef GL_TEXTURE_COMPARE_FAIL_VALUE_ARB
printf("GL_TEXTURE_COMPARE_FAIL_VALUE_ARB %d\n", 0x80BF);
#endif
#ifdef GL_FLOAT_MAT4_ARB
printf("GL_FLOAT_MAT4_ARB %d\n", 0x8B5C);
#endif
#ifdef GL_UNPACK_CMYK_HINT_EXT
printf("GL_UNPACK_CMYK_HINT_EXT %d\n", 0x800F);
#endif
#ifdef GL_PACK_RESAMPLE_SGIX
printf("GL_PACK_RESAMPLE_SGIX %d\n", 0x842C);
#endif
#ifdef GL_MINMAX_SINK
printf("GL_MINMAX_SINK %d\n", 0x8030);
#endif
#ifdef GL_STENCIL_BACK_PASS_DEPTH_FAIL
printf("GL_STENCIL_BACK_PASS_DEPTH_FAIL %d\n", 0x8802);
#endif
#ifdef GL_TEXTURE_RESIDENT_EXT
printf("GL_TEXTURE_RESIDENT_EXT %d\n", 0x8067);
#endif
#ifdef GL_DRAW_FRAMEBUFFER_EXT
printf("GL_DRAW_FRAMEBUFFER_EXT %d\n", 0x8CA9);
#endif
#ifdef GL_FOG_COORDINATE_ARRAY_TYPE
printf("GL_FOG_COORDINATE_ARRAY_TYPE %d\n", 0x8454);
#endif
#ifdef GL_PROXY_HISTOGRAM
printf("GL_PROXY_HISTOGRAM %d\n", 0x8025);
#endif
#ifdef __GLEE_GL_NV_vertex_program1_1
printf("__GLEE_GL_NV_vertex_program1_1 %d\n", 1);
#endif
#ifdef GL_LOCAL_EXT
printf("GL_LOCAL_EXT %d\n", 0x87C4);
#endif
#ifdef GL_SRC2_RGB
printf("GL_SRC2_RGB %d\n", 0x8582);
#endif
#ifdef GL_SWIZZLE_STQ_DQ_ATI
printf("GL_SWIZZLE_STQ_DQ_ATI %d\n", 0x8979);
#endif
#ifdef __GLEE_GL_EXT_index_texture
printf("__GLEE_GL_EXT_index_texture %d\n", 1);
#endif
#ifdef GL_SWIZZLE_STR_DR_ATI
printf("GL_SWIZZLE_STR_DR_ATI %d\n", 0x8978);
#endif
#ifdef GL_DYNAMIC_DRAW
printf("GL_DYNAMIC_DRAW %d\n", 0x88E8);
#endif
#ifdef GLEE_SGIX_calligraphic_fragment
#endif
#ifdef GLU_TRUE
printf("GLU_TRUE %d\n", 1);
#endif
#ifdef GLEE_SGIX_polynomial_ffd
#endif
#ifdef GL_ARB_texture_float
printf("GL_ARB_texture_float %d\n", 1);
#endif
#ifdef GL_ADD_ATI
printf("GL_ADD_ATI %d\n", 0x8963);
#endif
#ifdef GL_RGB10
printf("GL_RGB10 %d\n", 0x8052);
#endif
#ifdef GLUT_KEY_F3
printf("GLUT_KEY_F3 %d\n", 3);
#endif
#ifdef GL_POINT_FADE_THRESHOLD_SIZE
printf("GL_POINT_FADE_THRESHOLD_SIZE %d\n", 0x8128);
#endif
#ifdef __GLEE_GL_WIN_specular_fog
printf("__GLEE_GL_WIN_specular_fog %d\n", 1);
#endif
#ifdef GL_REG_2_ATI
printf("GL_REG_2_ATI %d\n", 0x8923);
#endif
#ifdef GL_BLEND_COLOR_EXT
printf("GL_BLEND_COLOR_EXT %d\n", 0x8005);
#endif
#ifdef GLEE_NV_point_sprite
#endif
#ifdef GL_PIXEL_PACK_BUFFER
printf("GL_PIXEL_PACK_BUFFER %d\n", 0x88EB);
#endif
#ifdef GL_FOG_SCALE_SGIX
printf("GL_FOG_SCALE_SGIX %d\n", 0x81FC);
#endif
#ifdef GL_RESAMPLE_DECIMATE_OML
printf("GL_RESAMPLE_DECIMATE_OML %d\n", 0x8989);
#endif
#ifdef GL_TEXTURE_CUBE_MAP_EXT
printf("GL_TEXTURE_CUBE_MAP_EXT %d\n", 0x8513);
#endif
#ifdef GL_UNSIGNED_INT_24_8_NV
printf("GL_UNSIGNED_INT_24_8_NV %d\n", 0x84FA);
#endif
#ifdef GL_RGB16_EXT
printf("GL_RGB16_EXT %d\n", 0x8054);
#endif
#ifdef glVertexAttrib3hvNV
#endif
#ifdef GL_OUTPUT_FOG_EXT
printf("GL_OUTPUT_FOG_EXT %d\n", 0x87BD);
#endif
#ifdef GL_FRAGMENT_LIGHT2_SGIX
printf("GL_FRAGMENT_LIGHT2_SGIX %d\n", 0x840E);
#endif
#ifdef GLEE_NV_texture_expand_normal
#endif
#ifdef GL_DRAW_PIXELS_APPLE
printf("GL_DRAW_PIXELS_APPLE %d\n", 0x8A0A);
#endif
#ifdef GL_TEXTURE_GEN_T
printf("GL_TEXTURE_GEN_T %d\n", 0x0C61);
#endif
#ifdef GLUT_KEY_F11
printf("GLUT_KEY_F11 %d\n", 11);
#endif
#ifdef GLU_SILHOUETTE
printf("GLU_SILHOUETTE %d\n", 100013);
#endif
#ifdef GLEE_SGIX_subsample
#endif
#ifdef GL_SECONDARY_COLOR_NV
printf("GL_SECONDARY_COLOR_NV %d\n", 0x852D);
#endif
#ifdef GL_FRAGMENT_PROGRAM_NV
printf("GL_FRAGMENT_PROGRAM_NV %d\n", 0x8870);
#endif
#ifdef GL_MAX_RATIONAL_EVAL_ORDER_NV
printf("GL_MAX_RATIONAL_EVAL_ORDER_NV %d\n", 0x86D7);
#endif
#ifdef GL_DUAL_INTENSITY4_SGIS
printf("GL_DUAL_INTENSITY4_SGIS %d\n", 0x8118);
#endif
#ifdef GL_CURRENT_SECONDARY_COLOR_EXT
printf("GL_CURRENT_SECONDARY_COLOR_EXT %d\n", 0x8459);
#endif
#ifdef GL_FLOAT_MAT3
printf("GL_FLOAT_MAT3 %d\n", 0x8B5B);
#endif
#ifdef GL_OR
printf("GL_OR %d\n", 0x1507);
#endif
#ifdef GL_DYNAMIC_READ
printf("GL_DYNAMIC_READ %d\n", 0x88E9);
#endif
#ifdef glBindLightParameterEXT
#endif
#ifdef GLEE_NV_copy_depth_to_color
#endif
#ifdef GLUT_SCREEN_WIDTH
printf("GLUT_SCREEN_WIDTH %d\n", 200);
#endif
#ifdef GL_R1UI_T2F_N3F_V3F_SUN
printf("GL_R1UI_T2F_N3F_V3F_SUN %d\n", 0x85CA);
#endif
#ifdef GL_TEXTURE30_ARB
printf("GL_TEXTURE30_ARB %d\n", 0x84DE);
#endif
#ifdef GL_ALPHA_FLOAT16_APPLE
printf("GL_ALPHA_FLOAT16_APPLE %d\n", 0x881C);
#endif
#ifdef GL_MAX_TEXTURE_IMAGE_UNITS_NV
printf("GL_MAX_TEXTURE_IMAGE_UNITS_NV %d\n", 0x8872);
#endif
#ifdef GL_UNSIGNED_SHORT
printf("GL_UNSIGNED_SHORT %d\n", 0x1403);
#endif
#ifdef GL_EXT_texture3D
printf("GL_EXT_texture3D %d\n", 1);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_ARB
printf("GL_PIXEL_UNPACK_BUFFER_ARB %d\n", 0x88EC);
#endif
#ifdef glVertexAttrib3dNV
#endif
#ifdef glFragmentLightModelfSGIX
#endif
#ifdef GLU_EXT_object_space_tess
printf("GLU_EXT_object_space_tess %d\n", 1);
#endif
#ifdef glFragmentMaterialfvEXT
#endif
#ifdef GLUT_NOT_VISIBLE
printf("GLUT_NOT_VISIBLE %d\n", 0);
#endif
#ifdef GL_TEXTURE_BINDING_RECTANGLE_NV
printf("GL_TEXTURE_BINDING_RECTANGLE_NV %d\n", 0x84F6);
#endif
#ifdef __VERSION__
#endif
#ifdef GL_FOG_COORDINATE_SOURCE
printf("GL_FOG_COORDINATE_SOURCE %d\n", 0x8450);
#endif
#ifdef GL_SOURCE5_ALPHA
printf("GL_SOURCE5_ALPHA %d\n", 0x858D);
#endif
#ifdef glColor4hNV
#endif
#ifdef GL_COMPILE_STATUS
printf("GL_COMPILE_STATUS %d\n", 0x8B81);
#endif
#ifdef GL_MAGNITUDE_BIAS_NV
printf("GL_MAGNITUDE_BIAS_NV %d\n", 0x8718);
#endif
#ifdef __GNUC_MINOR__
printf("__GNUC_MINOR__ %d\n", 0);
#endif
#ifdef GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV
printf("GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV %d\n", 0x8856);
#endif
#ifdef GL_QUARTER_BIT_ATI
printf("GL_QUARTER_BIT_ATI %d\n", 0x00000010);
#endif
#ifdef GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV
printf("GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV %d\n", 0x86F3);
#endif
#ifdef GL_UNSIGNED_SHORT_5_5_5_1
printf("GL_UNSIGNED_SHORT_5_5_5_1 %d\n", 0x8034);
#endif
#ifdef GLUT_VIDEO_RESIZE_WIDTH
printf("GLUT_VIDEO_RESIZE_WIDTH %d\n", 908);
#endif
#ifdef GLEE_NV_primitive_restart
#endif
#ifdef GL_TEXTURE0_ARB
printf("GL_TEXTURE0_ARB %d\n", 0x84C0);
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT
printf("GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT %d\n", 0x8C8F);
#endif
#ifdef glColorFragmentOp3ATI
#endif
#ifdef GLEE_NV_packed_depth_stencil
#endif
#ifdef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
printf("GL_ACTIVE_ATTRIBUTE_MAX_LENGTH %d\n", 0x8B8A);
#endif
#ifdef GL_RGB4
printf("GL_RGB4 %d\n", 0x804F);
#endif
#ifdef glGetImageTransformParameterivHP
#endif
#ifdef GL_COLOR_ARRAY_SIZE
printf("GL_COLOR_ARRAY_SIZE %d\n", 0x8081);
#endif
#ifdef GLUT_OVERLAY
printf("GLUT_OVERLAY %d\n", 1);
#endif
#ifdef GL_NV_texture_compression_vtc
printf("GL_NV_texture_compression_vtc %d\n", 1);
#endif
#ifdef GL_POINT_SIZE_MIN_SGIS
printf("GL_POINT_SIZE_MIN_SGIS %d\n", 0x8126);
#endif
#ifdef GL_FLOAT_RG32_NV
printf("GL_FLOAT_RG32_NV %d\n", 0x8887);
#endif
#ifdef GL_OP_LOG_BASE_2_EXT
printf("GL_OP_LOG_BASE_2_EXT %d\n", 0x8792);
#endif
#ifdef GL_LO_BIAS_NV
printf("GL_LO_BIAS_NV %d\n", 0x8715);
#endif
#ifdef GL_DOT_PRODUCT_PASS_THROUGH_NV
printf("GL_DOT_PRODUCT_PASS_THROUGH_NV %d\n", 0x885B);
#endif
#ifdef GL_FRAGMENT_MATERIAL_EXT
printf("GL_FRAGMENT_MATERIAL_EXT %d\n", 0x8349);
#endif
#ifdef GL_EXT_index_func
printf("GL_EXT_index_func %d\n", 1);
#endif
#ifdef GL_LINEAR_CLIPMAP_NEAREST_SGIX
printf("GL_LINEAR_CLIPMAP_NEAREST_SGIX %d\n", 0x844F);
#endif
#ifdef GL_ACTIVE_UNIFORMS
printf("GL_ACTIVE_UNIFORMS %d\n", 0x8B86);
#endif
#ifdef GL_BLEND_EQUATION_EXT
printf("GL_BLEND_EQUATION_EXT %d\n", 0x8009);
#endif
#ifdef GL_LUMINANCE
printf("GL_LUMINANCE %d\n", 0x1909);
#endif
#ifdef GL_COLOR_INDEX16_EXT
printf("GL_COLOR_INDEX16_EXT %d\n", 0x80E7);
#endif
#ifdef GL_DEPTH_WRITEMASK
printf("GL_DEPTH_WRITEMASK %d\n", 0x0B72);
#endif
#ifdef GL_LUMINANCE16_EXTENDED_RANGE_SGIX
printf("GL_LUMINANCE16_EXTENDED_RANGE_SGIX %d\n", 0x85F5);
#endif
#ifdef GL_REG_14_ATI
printf("GL_REG_14_ATI %d\n", 0x892F);
#endif
#ifdef GL_SAMPLER_2D_ARB
printf("GL_SAMPLER_2D_ARB %d\n", 0x8B5E);
#endif
#ifdef GLEE_EXT_blend_color
#endif
#ifdef GL_SWIZZLE_STQ_ATI
printf("GL_SWIZZLE_STQ_ATI %d\n", 0x8977);
#endif
#ifdef glVertexStream2fATI
#endif
#ifdef GL_TEXTURE_GEQUAL_R_SGIX
printf("GL_TEXTURE_GEQUAL_R_SGIX %d\n", 0x819D);
#endif
#ifdef GL_POST_COLOR_MATRIX_BLUE_BIAS
printf("GL_POST_COLOR_MATRIX_BLUE_BIAS %d\n", 0x80BA);
#endif
#ifdef GL_POINT_DISTANCE_ATTENUATION
printf("GL_POINT_DISTANCE_ATTENUATION %d\n", 0x8129);
#endif
#ifdef GL_FRAGMENT_SHADER_ATI
printf("GL_FRAGMENT_SHADER_ATI %d\n", 0x8920);
#endif
#ifdef GLUT_WINDOW_ALPHA_SIZE
printf("GLUT_WINDOW_ALPHA_SIZE %d\n", 110);
#endif
#ifdef GL_ATTRIB_ARRAY_STRIDE_NV
printf("GL_ATTRIB_ARRAY_STRIDE_NV %d\n", 0x8624);
#endif
#ifdef GLUT_BITMAP_TIMES_ROMAN_24
#endif
#ifdef GL_NV_vertex_program2_option
printf("GL_NV_vertex_program2_option %d\n", 1);
#endif
#ifdef GL_VERTEX_ARRAY_SIZE_EXT
printf("GL_VERTEX_ARRAY_SIZE_EXT %d\n", 0x807A);
#endif
#ifdef GL_COLOR_ATTACHMENT12_EXT
printf("GL_COLOR_ATTACHMENT12_EXT %d\n", 0x8CEC);
#endif
#ifdef __GLEE_GL_SGIX_texture_lod_bias
printf("__GLEE_GL_SGIX_texture_lod_bias %d\n", 1);
#endif
#ifdef GL_OPERAND0_RGB_ARB
printf("GL_OPERAND0_RGB_ARB %d\n", 0x8590);
#endif
#ifdef GL_CON_10_ATI
printf("GL_CON_10_ATI %d\n", 0x894B);
#endif
#ifdef GL_BINORMAL_ARRAY_EXT
printf("GL_BINORMAL_ARRAY_EXT %d\n", 0x843A);
#endif
#ifdef GL_POST_CONVOLUTION_GREEN_BIAS
printf("GL_POST_CONVOLUTION_GREEN_BIAS %d\n", 0x8021);
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING_EXT
printf("GL_PIXEL_UNPACK_BUFFER_BINDING_EXT %d\n", 0x88EF);
#endif
#ifdef GL_INVERTED_SCREEN_W_REND
printf("GL_INVERTED_SCREEN_W_REND %d\n", 0x8491);
#endif
#ifdef GL_INDEX_BITS
printf("GL_INDEX_BITS %d\n", 0x0D51);
#endif
#ifdef GL_NV_fog_distance
printf("GL_NV_fog_distance %d\n", 1);
#endif
#ifdef GL_NV_half_float
printf("GL_NV_half_float %d\n", 1);
#endif
#ifdef GLUT_WINDOW_PARENT
printf("GLUT_WINDOW_PARENT %d\n", 117);
#endif
#ifdef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
printf("GL_FRAGMENT_SHADER_DERIVATIVE_HINT %d\n", 0x8B8B);
#endif
#ifdef glFrameZoomSGIX
#endif
#ifdef GL_TEXTURE_COMPRESSION_HINT
printf("GL_TEXTURE_COMPRESSION_HINT %d\n", 0x84EF);
#endif
#ifdef GL_SPRITE_AXIS_SGIX
printf("GL_SPRITE_AXIS_SGIX %d\n", 0x814A);
#endif
#ifdef GL_Z_EXT
printf("GL_Z_EXT %d\n", 0x87D7);
#endif
#ifdef GL_LIGHT_MODEL_TWO_SIDE
printf("GL_LIGHT_MODEL_TWO_SIDE %d\n", 0x0B52);
#endif
#ifdef GL_LINEAR_CLIPMAP_LINEAR_SGIX
printf("GL_LINEAR_CLIPMAP_LINEAR_SGIX %d\n", 0x8170);
#endif
#ifdef GL_EXT_texture_perturb_normal
printf("GL_EXT_texture_perturb_normal %d\n", 1);
#endif
#ifdef GL_TEXTURE_WRAP_R_EXT
printf("GL_TEXTURE_WRAP_R_EXT %d\n", 0x8072);
#endif
#ifdef GL_READ_BUFFER
printf("GL_READ_BUFFER %d\n", 0x0C02);
#endif
#ifdef GL_RGB32I_EXT
printf("GL_RGB32I_EXT %d\n", 0x8D83);
#endif
#ifdef __GLEE_GL_NV_primitive_restart
printf("__GLEE_GL_NV_primitive_restart %d\n", 1);
#endif
#ifdef GLUT_CURSOR_INHERIT
printf("GLUT_CURSOR_INHERIT %d\n", 100);
#endif
#ifdef GL_REG_6_ATI
printf("GL_REG_6_ATI %d\n", 0x8927);
#endif
#ifdef GL_SIGNED_RGBA_NV
printf("GL_SIGNED_RGBA_NV %d\n", 0x86FB);
#endif
#ifdef GL_OUTPUT_TEXTURE_COORD24_EXT
printf("GL_OUTPUT_TEXTURE_COORD24_EXT %d\n", 0x87B5);
#endif
#ifdef GL_FOG_HINT
printf("GL_FOG_HINT %d\n", 0x0C54);
#endif
#ifdef GLU_OBJECT_PATH_LENGTH_EXT
printf("GLU_OBJECT_PATH_LENGTH_EXT %d\n", 100209);
#endif
#ifdef GL_OP_CLAMP_EXT
printf("GL_OP_CLAMP_EXT %d\n", 0x878E);
#endif
#ifdef GL_SLUMINANCE8_EXT
printf("GL_SLUMINANCE8_EXT %d\n", 0x8C47);
#endif
#ifdef glStopInstrumentsSGIX
#endif
#ifdef GL_EDGEFLAG_BIT_PGI
printf("GL_EDGEFLAG_BIT_PGI %d\n", 0x00040000);
#endif
#ifdef GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX
printf("GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX %d\n", 0x8186);
#endif
#ifdef GLU_NURBS_ERROR11
printf("GLU_NURBS_ERROR11 %d\n", 100261);
#endif
#ifdef GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX
printf("GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX %d\n", 0x8403);
#endif
#ifdef GL_PN_TRIANGLES_ATIX
printf("GL_PN_TRIANGLES_ATIX %d\n", 0x6090);
#endif
#ifdef GL_ALPHA_FLOAT32_APPLE
printf("GL_ALPHA_FLOAT32_APPLE %d\n", 0x8816);
#endif
#ifdef GL_MATRIX_INDEX_ARRAY_POINTER_ARB
printf("GL_MATRIX_INDEX_ARRAY_POINTER_ARB %d\n", 0x8849);
#endif
#ifdef glCopyTexSubImage1DEXT
#endif
#ifdef GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX
printf("GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX %d\n", 0x817C);
#endif
#ifdef GL_MAP2_VERTEX_ATTRIB11_4_NV
printf("GL_MAP2_VERTEX_ATTRIB11_4_NV %d\n", 0x867B);
#endif
#ifdef GL_ALPHA4_EXT
printf("GL_ALPHA4_EXT %d\n", 0x803B);
#endif
#ifdef GL_CON_11_ATI
printf("GL_CON_11_ATI %d\n", 0x894C);
#endif
#ifdef GL_GREEN_SCALE
printf("GL_GREEN_SCALE %d\n", 0x0D18);
#endif
#ifdef GL_TEXTURE_MAX_LEVEL
printf("GL_TEXTURE_MAX_LEVEL %d\n", 0x813D);
#endif
#ifdef GL_ARB_window_pos
printf("GL_ARB_window_pos %d\n", 1);
#endif
#ifdef GL_BUFFER_MAPPED
printf("GL_BUFFER_MAPPED %d\n", 0x88BC);
#endif
#ifdef GLU_NURBS_ERROR14
printf("GLU_NURBS_ERROR14 %d\n", 100264);
#endif
#ifdef GL_SRC2_ALPHA
printf("GL_SRC2_ALPHA %d\n", 0x858A);
#endif
#ifdef glGetInvariantBooleanvEXT
#endif
#ifdef GL_BINORMAL_ARRAY_TYPE_EXT
printf("GL_BINORMAL_ARRAY_TYPE_EXT %d\n", 0x8440);
#endif
#ifdef GL_INDEX_ARRAY_STRIDE
printf("GL_INDEX_ARRAY_STRIDE %d\n", 0x8086);
#endif
#ifdef glDeformationMap3dSGIX
#endif
#ifdef GLEE_SGIX_igloo_interface
#endif
#ifdef GL_EXT_blend_logic_op
printf("GL_EXT_blend_logic_op %d\n", 1);
#endif
#ifdef __GLEE_GL_IBM_static_data
printf("__GLEE_GL_IBM_static_data %d\n", 1);
#endif
#ifdef GL_INCR_WRAP_EXT
printf("GL_INCR_WRAP_EXT %d\n", 0x8507);
#endif
#ifdef GL_RESTART_SUN
printf("GL_RESTART_SUN %d\n", 0x0001);
#endif
#ifdef GL_IBM_texture_mirrored_repeat
printf("GL_IBM_texture_mirrored_repeat %d\n", 1);
#endif
#ifdef GL_TEXTURE2
printf("GL_TEXTURE2 %d\n", 0x84C2);
#endif
#ifdef GL_OES_single_precision
printf("GL_OES_single_precision %d\n", 1);
#endif
#ifdef GL_COLOR_MATERIAL_FACE
printf("GL_COLOR_MATERIAL_FACE %d\n", 0x0B55);
#endif
#ifdef GL_LOAD
printf("GL_LOAD %d\n", 0x0101);
#endif
#ifdef GL_MAX_PROGRAM_MATRICES_ARB
printf("GL_MAX_PROGRAM_MATRICES_ARB %d\n", 0x862F);
#endif
#ifdef GL_ALPHA16UI_EXT
printf("GL_ALPHA16UI_EXT %d\n", 0x8D78);
#endif
#ifdef GL_1PASS_SGIS
printf("GL_1PASS_SGIS %d\n", 0x80A1);
#endif
#ifdef __GLEE_GL_INTEL_texture_scissor
printf("__GLEE_GL_INTEL_texture_scissor %d\n", 1);
#endif
#ifdef glTrackMatrixNV
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB
printf("GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB %d\n", 0x8895);
#endif
#ifdef GL_WRITE_ONLY
printf("GL_WRITE_ONLY %d\n", 0x88B9);
#endif
#ifdef GLEE_EXT_texture_cube_map
#endif
#ifdef glClientActiveVertexStreamATI
#endif
#ifdef GL_DETAIL_TEXTURE_2D_BINDING_SGIS
printf("GL_DETAIL_TEXTURE_2D_BINDING_SGIS %d\n", 0x8096);
#endif
#ifdef GL_SAMPLES_3DFX
printf("GL_SAMPLES_3DFX %d\n", 0x86B4);
#endif
#ifdef __GLEE_GL_NV_vertex_array_range2
printf("__GLEE_GL_NV_vertex_array_range2 %d\n", 1);
#endif
#ifdef GL_BUFFER_MAP_POINTER_ARB
printf("GL_BUFFER_MAP_POINTER_ARB %d\n", 0x88BD);
#endif
#ifdef glVertexPointervINTEL
#endif
#ifdef GL_COMBINER_MUX_SUM_NV
printf("GL_COMBINER_MUX_SUM_NV %d\n", 0x8547);
#endif
#ifdef GL_TEXTURE_FILTER4_SIZE_SGIS
printf("GL_TEXTURE_FILTER4_SIZE_SGIS %d\n", 0x8147);
#endif
#ifdef GL_TEXTURE_MATERIAL_FACE_EXT
printf("GL_TEXTURE_MATERIAL_FACE_EXT %d\n", 0x8351);
#endif
#ifdef GLUT_TRANSPARENT_INDEX
printf("GLUT_TRANSPARENT_INDEX %d\n", 803);
#endif
#ifdef GL_TEXTURE_COORD_ARRAY_COUNT_EXT
printf("GL_TEXTURE_COORD_ARRAY_COUNT_EXT %d\n", 0x808B);
#endif
#ifdef GL_DRAW_BUFFER2
printf("GL_DRAW_BUFFER2 %d\n", 0x8827);
#endif
#ifdef GL_POINTS
printf("GL_POINTS %d\n", 0x0000);
#endif
#ifdef GL_OP_CROSS_PRODUCT_EXT
printf("GL_OP_CROSS_PRODUCT_EXT %d\n", 0x8797);
#endif
#ifdef GL_GLOBAL_ALPHA_FACTOR_SUN
printf("GL_GLOBAL_ALPHA_FACTOR_SUN %d\n", 0x81DA);
#endif
#ifdef GL_EXT_subtexture
printf("GL_EXT_subtexture %d\n", 1);
#endif
#ifdef glBlendFuncSeparateINGR
#endif
#ifdef GLEE_IBM_static_data
#endif
#ifdef GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB
printf("GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB %d\n", 0x88A3);
#endif
#ifdef GL_TEXTURE_LOD_BIAS_S_SGIX
printf("GL_TEXTURE_LOD_BIAS_S_SGIX %d\n", 0x818E);
#endif
#ifdef GL_PROGRAM_STRING_ARB
printf("GL_PROGRAM_STRING_ARB %d\n", 0x8628);
#endif
#ifdef GLEE_SGIX_depth_texture
#endif
#ifdef GL_TEXTURE_CLIPMAP_FRAME_SGIX
printf("GL_TEXTURE_CLIPMAP_FRAME_SGIX %d\n", 0x8172);
#endif
#ifdef GLUT_KEY_REPEAT_ON
printf("GLUT_KEY_REPEAT_ON %d\n", 1);
#endif
#ifdef GL_CONSTANT_COLOR1_NV
printf("GL_CONSTANT_COLOR1_NV %d\n", 0x852B);
#endif
#ifdef GL_SHADING_LANGUAGE_VERSION_ARB
printf("GL_SHADING_LANGUAGE_VERSION_ARB %d\n", 0x8B8C);
#endif
#ifdef GLU_NURBS_ERROR21
printf("GLU_NURBS_ERROR21 %d\n", 100271);
#endif
#ifdef glSamplePatternSGIS
#endif
#ifdef GL_TEXTURE_HI_SIZE_NV
printf("GL_TEXTURE_HI_SIZE_NV %d\n", 0x871B);
#endif
#ifdef GL_EXT_blend_func_separate
printf("GL_EXT_blend_func_separate %d\n", 1);
#endif
#ifdef GL_SGIS_pixel_texture
printf("GL_SGIS_pixel_texture %d\n", 1);
#endif
#ifdef GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT
printf("GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT %d\n", 0x8DD5);
#endif
#ifdef GL_COORD_REPLACE_ARB
printf("GL_COORD_REPLACE_ARB %d\n", 0x8862);
#endif
#ifdef GL_COLOR
printf("GL_COLOR %d\n", 0x1800);
#endif
#ifdef GL_SPOT_EXPONENT
printf("GL_SPOT_EXPONENT %d\n", 0x1205);
#endif
#ifdef GL_TEXTURE23
printf("GL_TEXTURE23 %d\n", 0x84D7);
#endif
#ifdef GL_FLOAT_MAT2x3
printf("GL_FLOAT_MAT2x3 %d\n", 0x8B65);
#endif
#ifdef glAreProgramsResidentNV
#endif
#ifdef GL_ARB_shadow
printf("GL_ARB_shadow %d\n", 1);
#endif
#ifdef GL_OP_POWER_EXT
printf("GL_OP_POWER_EXT %d\n", 0x8793);
#endif
#ifdef GL_CURRENT_FOG_COORDINATE_EXT
printf("GL_CURRENT_FOG_COORDINATE_EXT %d\n", 0x8453);
#endif
#ifdef glColor3fVertex3fvSUN
#endif
#ifdef GL_EXPAND_NORMAL_NV
printf("GL_EXPAND_NORMAL_NV %d\n", 0x8538);
#endif
#ifdef GL_SIGNED_IDENTITY_NV
printf("GL_SIGNED_IDENTITY_NV %d\n", 0x853C);
#endif
#ifdef GL_EXT_texture_env_dot3
printf("GL_EXT_texture_env_dot3 %d\n", 1);
#endif
#ifdef GL_MIRRORED_REPEAT_ARB
printf("GL_MIRRORED_REPEAT_ARB %d\n", 0x8370);
#endif
#ifdef GL_AUX2
printf("GL_AUX2 %d\n", 0x040B);
#endif
#ifdef GLU_NURBS_TEXTURE_COORD_DATA
printf("GLU_NURBS_TEXTURE_COORD_DATA %d\n", 100174);
#endif
#ifdef GL_CON_1_ATI
printf("GL_CON_1_ATI %d\n", 0x8942);
#endif
#ifdef GL_VERTEX_ARRAY_RANGE_NV
printf("GL_VERTEX_ARRAY_RANGE_NV %d\n", 0x851D);
#endif
#ifdef __GLEE_GL_EXT_texture_env
printf("__GLEE_GL_EXT_texture_env %d\n", 1);
#endif
#ifdef GL_DEPTH_COMPONENT24_SGIX
printf("GL_DEPTH_COMPONENT24_SGIX %d\n", 0x81A6);
#endif
#ifdef glElementPointerATI
#endif
#ifdef GLEE_NV_vertex_program
#endif
#ifdef GLEE_ARB_texture_border_clamp
#endif
#ifdef GLU_PARAMETRIC_TOLERANCE
printf("GLU_PARAMETRIC_TOLERANCE %d\n", 100202);
#endif
#ifdef GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT
printf("GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT %d\n", 0x8DE0);
#endif
#ifdef GL_CON_0_ATI
printf("GL_CON_0_ATI %d\n", 0x8941);
#endif
#ifdef __GLEE_GL_SGIX_fragment_lighting
printf("__GLEE_GL_SGIX_fragment_lighting %d\n", 1);
#endif
}
