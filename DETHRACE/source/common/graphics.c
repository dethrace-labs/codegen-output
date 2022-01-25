#include "graphics.h"

int gPalette_munged;
int gColourValues[1];
int gNext_transient;
int gCursor_x_offsets[8];
int gCursor_y_offsets[8];
int gCursor_gib_x_offsets[8];
int gCursor_gib_y_offsets[8];
int gCursor_giblet_sequence0[7];
int gCursor_giblet_sequence1[5];
int gCursor_giblet_sequence2[5];
int gCursor_giblet_sequence3[5];
int *gCursor_giblet_sequences[4];
char *gFont_names[21];
br_colour gRGB_colours[9];
br_matrix34 gSheer_mat;
br_matrix34 gIdentity34;
tShadow_level gShadow_level;
br_scalar gShadow_hither_z_move;
br_scalar gShadow_hither_min_move;
int gArrows[2][4][60];
float gMap_render_x;
float gMap_render_y;
float gMap_render_width;
float gMap_render_height;
int gMouse_started;
int gFaded_palette;
int gAR_fudge_headups;
br_pixelmap *gCurrent_splash;
br_pixelmap *gCurrent_conversion_table;
int gMap_colours[4];
br_vector3 gShadow_points[8];
tConcussion gConcussion;
tClip_details gShadow_clip_planes[8];
br_actor *gLollipops[100];
tWobble_spec gWobble_array[5];
tSaved_table gSaved_shade_tables[100];
tCursor_giblet gCursor_giblets[45];
tTransient_bm gTransient_bitmaps[50];
float gCosine_array[64];
br_pixelmap *gCursors[8];
br_pixelmap *gCursor_giblet_images[18];
br_pixelmap *gEval_1;
br_pixelmap *gEval_2;
br_vector3 gShadow_light_z;
br_vector3 gShadow_light_x;
int gShadow_dim_amount;
int gNumber_of_lollipops;
br_vector3 gShadow_light_ray;
int gFancy_shadow;
br_model *gShadow_model;
br_actor *gShadow_actor;
int gShadow_clip_plane_count;
br_pixelmap *gPalette_conversion_table;
br_material *gShadow_material;
int gSaved_table_count;
int gCurrent_cursor_index;
int gPalette_index;
int gCursor_transient_index;
char *gScratch_pixels;
br_pixelmap *gScratch_palette;
int gLast_palette_change;
br_pixelmap *gOrig_render_palette;
br_pixelmap *gCurrent_palette;
br_pixelmap *gRender_palette;
float gCamera_to_horiz_angle;
int gColours[9];
br_pixelmap *gFlic_palette;
tDR_font gFonts[21];
char *gCurrent_palette_pixels;
int gWidth;
int gMap_render_height_i;
int gScreen_wobble_x;
int gScreen_wobble_y;
br_scalar gCurrent_ambience;
int gY_offset;
int gMap_render_width_i;
int gMouse_in_use;
int gHeight;
int gMouse_last_y_coord;
int gMouse_last_x_coord;
br_scalar gAmbient_adjustment;
int gMap_render_x_i;
int gX_offset;
int gMap_render_y_i;
 // Suffix added to avoid duplicate symbol
int gMirror_on__graphics;
br_scalar gYon_squared;

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl TurnOnPaletteConversion()
void TurnOnPaletteConversion() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl TurnOffPaletteConversion()
void TurnOffPaletteConversion() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 88
// Size: 0x2c
//IDA: void __cdecl ResetLollipopQueue()
void ResetLollipopQueue() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 132
// Size: 0x7c
//IDA: int __usercall AddToLollipopQueue@<EAX>(br_actor *pActor@<EAX>, int pIndex@<EDX>)
int AddToLollipopQueue(br_actor *pActor, int pIndex) {
    LOG_TRACE("(%p, %d)", pActor, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 256
// Size: 0xed
//IDA: void __cdecl RenderLollipops()
void RenderLollipops() {
    int i;
    int must_relink;
    br_actor **the_actor;
    br_actor *old_parent;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 496
// Size: 0x6a
//IDA: void __usercall DRDrawLine(br_pixelmap *pDestn@<EAX>, int pX1@<EDX>, int pY1@<EBX>, int pX2@<ECX>, int pY2, int pColour)
void DRDrawLine(br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour) {
    tU8 *d_ptr;
    tS32 y_delta;
    tS32 x_delta;
    tU32 current_y;
    tU32 current_x;
    int row_bytes;
    int x;
    int y;
    int the_diff;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pDestn, pX1, pY1, pX2, pY2, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 604
// Size: 0x5a
//IDA: void __usercall DrawDigitAt(br_pixelmap *gImage@<EAX>, int pX@<EDX>, int pY@<EBX>, int pY_pitch@<ECX>, int pValue)
void DrawDigitAt(br_pixelmap *gImage, int pX, int pY, int pY_pitch, int pValue) {
    LOG_TRACE("(%p, %d, %d, %d, %d)", gImage, pX, pY, pY_pitch, pValue);
    NOT_IMPLEMENTED();
}

// Offset: 696
// Size: 0x9c
//IDA: void __usercall DrawNumberAt(br_pixelmap *gImage@<EAX>, int pX@<EDX>, int pY@<EBX>, int pX_pitch@<ECX>, int pY_pitch, int pValue, int pDigit_count, int pLeading_zeroes)
void DrawNumberAt(br_pixelmap *gImage, int pX, int pY, int pX_pitch, int pY_pitch, int pValue, int pDigit_count, int pLeading_zeroes) {
    int i;
    int the_value;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d, %d, %d)", gImage, pX, pY, pX_pitch, pY_pitch, pValue, pDigit_count, pLeading_zeroes);
    NOT_IMPLEMENTED();
}

// Offset: 852
// Size: 0x15e
//IDA: void __usercall BuildColourTable(br_pixelmap *pPalette@<EAX>)
void BuildColourTable(br_pixelmap *pPalette) {
    int i;
    int j;
    int nearest_index;
    int red;
    int green;
    int blue;
    float nearest_distance;
    float distance;
    LOG_TRACE("(%p)", pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 1204
// Size: 0x2c
//IDA: void __cdecl ClearConcussion()
void ClearConcussion() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1248
// Size: 0x89
//IDA: tS8* __usercall SkipLines@<EAX>(tS8 *pSource@<EAX>, int pCount@<EDX>)
tS8* SkipLines(tS8 *pSource, int pCount) {
    int i;
    int j;
    int number_of_chunks;
    int chunk_length;
    LOG_TRACE("(%p, %d)", pSource, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 1388
// Size: 0x7e
//IDA: void __usercall CopyWords(char *pDst@<EAX>, char *pSrc@<EDX>, int pN@<EBX>)
void CopyWords(char *pDst, char *pSrc, int pN) {
    tU16 *dst;
    tU16 *src;
    LOG_TRACE("(\"%s\", \"%s\", %d)", pDst, pSrc, pN);
    NOT_IMPLEMENTED();
}

// Offset: 1516
// Size: 0x25e
//IDA: void __usercall Copy8BitStripImageTo16Bit(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pOffset_x@<EBX>, br_int_16 pDest_y@<ECX>, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight)
void Copy8BitStripImageTo16Bit(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pOffset_x, br_int_16 pDest_y, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight) {
    int i;
    int j;
    int height;
    int number_of_chunks;
    int old_x_byte;
    int x_byte;
    int off_the_left;
    int destn_width;
    int chunk_length;
    char *destn_ptr;
    char *destn_ptr2;
    LOG_TRACE("(%p, %d, %d, %d, %d, %p, %d, %d, %d, %d)", pDest, pDest_x, pOffset_x, pDest_y, pOffset_y, pSource, pSource_x, pSource_y, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 2124
// Size: 0x28b
//IDA: void __usercall CopyStripImage(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pOffset_x@<EBX>, br_int_16 pDest_y@<ECX>, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight)
void CopyStripImage(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pOffset_x, br_int_16 pDest_y, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight) {
    int i;
    int j;
    int height;
    int number_of_chunks;
    int old_x_byte;
    int x_byte;
    int off_the_left;
    int destn_width;
    int chunk_length;
    char *destn_ptr;
    char *destn_ptr2;
    LOG_TRACE("(%p, %d, %d, %d, %d, %p, %d, %d, %d, %d)", pDest, pDest_x, pOffset_x, pDest_y, pOffset_y, pSource, pSource_x, pSource_y, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 2776
// Size: 0x1fb
//IDA: void __usercall SetBRenderScreenAndBuffers(int pX_offset@<EAX>, int pY_offset@<EDX>, int pWidth@<EBX>, int pHeight@<ECX>)
void SetBRenderScreenAndBuffers(int pX_offset, int pY_offset, int pWidth, int pHeight) {
    LOG_TRACE("(%d, %d, %d, %d)", pX_offset, pY_offset, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 3284
// Size: 0xac
//IDA: void __cdecl SetIntegerMapRenders()
void SetIntegerMapRenders() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3456
// Size: 0x172
//IDA: void __cdecl AdjustRenderScreenSize()
void AdjustRenderScreenSize() {
    int switched_res;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3828
// Size: 0x57
//IDA: void __cdecl ScreenSmaller()
void ScreenSmaller() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3916
// Size: 0x57
//IDA: void __cdecl ScreenLarger()
void ScreenLarger() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4004
// Size: 0x8a
//IDA: void __usercall DRSetPaletteEntries(br_pixelmap *pPalette@<EAX>, int pFirst_colour@<EDX>, int pCount@<EBX>)
void DRSetPaletteEntries(br_pixelmap *pPalette, int pFirst_colour, int pCount) {
    LOG_TRACE("(%p, %d, %d)", pPalette, pFirst_colour, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 4144
// Size: 0x80
//IDA: void __usercall DRSetPalette3(br_pixelmap *pThe_palette@<EAX>, int pSet_current_palette@<EDX>)
void DRSetPalette3(br_pixelmap *pThe_palette, int pSet_current_palette) {
    LOG_TRACE("(%p, %d)", pThe_palette, pSet_current_palette);
    NOT_IMPLEMENTED();
}

// Offset: 4272
// Size: 0x8c
//IDA: void __usercall DRSetPalette2(br_pixelmap *pThe_palette@<EAX>, int pSet_current_palette@<EDX>)
void DRSetPalette2(br_pixelmap *pThe_palette, int pSet_current_palette) {
    LOG_TRACE("(%p, %d)", pThe_palette, pSet_current_palette);
    NOT_IMPLEMENTED();
}

// Offset: 4412
// Size: 0x32
//IDA: void __usercall DRSetPalette(br_pixelmap *pThe_palette@<EAX>)
void DRSetPalette(br_pixelmap *pThe_palette) {
    LOG_TRACE("(%p)", pThe_palette);
    NOT_IMPLEMENTED();
}

// Offset: 4464
// Size: 0x19f
//IDA: void __cdecl InitializePalettes()
void InitializePalettes() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4880
// Size: 0x42
//IDA: void __usercall SwitchToPalette(char *pPal_name@<EAX>)
void SwitchToPalette(char *pPal_name) {
    br_pixelmap *the_palette;
    LOG_TRACE("(\"%s\")", pPal_name);
    NOT_IMPLEMENTED();
}

// Offset: 4948
// Size: 0x68
//IDA: void __cdecl ClearEntireScreen()
void ClearEntireScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5052
// Size: 0x4b
//IDA: void __cdecl ClearWobbles()
void ClearWobbles() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5128
// Size: 0x6c
//IDA: void __cdecl InitWobbleStuff()
void InitWobbleStuff() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5236
// Size: 0xc6
//IDA: void __cdecl NewScreenWobble(double pAmplitude_x, double pAmplitude_y, double pPeriod)
void NewScreenWobble(double pAmplitude_x, double pAmplitude_y, double pPeriod) {
    int i;
    int oldest_time;
    int oldest_index;
    LOG_TRACE("(%d, %d, %d)", pAmplitude_x, pAmplitude_y, pPeriod);
    NOT_IMPLEMENTED();
}

// Offset: 5436
// Size: 0x36
//IDA: void __usercall SetScreenWobble(int pWobble_x@<EAX>, int pWobble_y@<EDX>)
void SetScreenWobble(int pWobble_x, int pWobble_y) {
    LOG_TRACE("(%d, %d)", pWobble_x, pWobble_y);
    NOT_IMPLEMENTED();
}

// Offset: 5492
// Size: 0x2b
//IDA: void __cdecl ResetScreenWobble()
void ResetScreenWobble() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5536
// Size: 0x32d
//IDA: void __usercall CalculateWobblitude(tU32 pThe_time@<EAX>)
void CalculateWobblitude(tU32 pThe_time) {
    int i;
    tU32 time_going;
    double angle;
    double mod_angle;
    double cosine_over_angle;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 6352
// Size: 0x25d
//IDA: void __usercall CalculateConcussion(tU32 pThe_time@<EAX>)
void CalculateConcussion(tU32 pThe_time) {
    tU32 time_difference;
    int i;
    int j;
    float the_amplitude;
    float angle;
    float mod_angle;
    float cosine_over_angle;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 6960
// Size: 0xab
//IDA: void __cdecl SufferFromConcussion(float pSeriousness)
void SufferFromConcussion(float pSeriousness) {
    int i;
    int j;
    LOG_TRACE("(%f)", pSeriousness);
    NOT_IMPLEMENTED();
}

// Offset: 7132
// Size: 0x38
//IDA: void __usercall ProcessNonTrackActors(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, br_matrix34 *pOld_camera_matrix)
void ProcessNonTrackActors(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, br_matrix34 *pOld_camera_matrix) {
    LOG_TRACE("(%p, %p, %p, %p, %p)", pRender_buffer, pDepth_buffer, pCamera, pCamera_to_world, pOld_camera_matrix);
    NOT_IMPLEMENTED();
}

// Offset: 7188
// Size: 0x77
//IDA: int __usercall OppositeColour@<EAX>(int pColour@<EAX>)
int OppositeColour(int pColour) {
    int brightness;
    LOG_TRACE("(%d)", pColour);
    NOT_IMPLEMENTED();
}

// Offset: 7308
// Size: 0x70c
//IDA: void __usercall DrawMapBlip(tCar_spec *pCar@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pTrans@<EBX>, br_vector3 *pPos@<ECX>, int pColour)
void DrawMapBlip(tCar_spec *pCar, tU32 pTime, br_matrix34 *pTrans, br_vector3 *pPos, int pColour) {
    br_vector3 map_pos;
    int offset;
    int *arrow_ptr;
    int point_count;
    int colours[2];
    int x;
    int y;
    int colour;
    int i;
    int j;
    int temp;
    int from_x;
    int from_y;
    int to_x;
    int to_y;
    int arrow_index;
    tU32 time_diff;
    tU32 period;
    br_matrix34 car_in_map_space;
    float bearing;
    float cos_factor;
    float sin_factor;
    LOG_TRACE("(%p, %d, %p, %p, %d)", pCar, pTime, pTrans, pPos, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 9112
// Size: 0x101
//IDA: void __usercall DrawMapSmallBlip(tU32 pTime@<EAX>, br_vector3 *pPos@<EDX>, int pColour@<EBX>)
void DrawMapSmallBlip(tU32 pTime, br_vector3 *pPos, int pColour) {
    br_vector3 map_pos;
    int offset;
    tU32 time_diff;
    LOG_TRACE("(%d, %p, %d)", pTime, pPos, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 9372
// Size: 0x28b
//IDA: void __usercall MungeClipPlane(br_vector3 *pLight@<EAX>, tCar_spec *pCar@<EDX>, br_vector3 *p1@<EBX>, br_vector3 *p2@<ECX>, br_scalar pY_offset)
void MungeClipPlane(br_vector3 *pLight, tCar_spec *pCar, br_vector3 *p1, br_vector3 *p2, br_scalar pY_offset) {
    br_vector3 v1;
    br_vector3 v2;
    br_vector3 v3;
    br_vector3 v4;
    br_scalar length;
    br_actor *new_clip;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p, %p, %p, %f)", pLight, pCar, p1, p2, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 10024
// Size: 0xb4
//IDA: void __usercall TryThisEdge(tCar_spec *pCar@<EAX>, br_vector3 *pLight@<EDX>, int pIndex_1@<EBX>, br_scalar pSign_1, int pIndex_2, br_scalar pSign_2, int pPoint_index_1, int pPoint_index_2, br_scalar pY_offset)
void TryThisEdge(tCar_spec *pCar, br_vector3 *pLight, int pIndex_1, br_scalar pSign_1, int pIndex_2, br_scalar pSign_2, int pPoint_index_1, int pPoint_index_2, br_scalar pY_offset) {
    br_scalar dot_1;
    br_scalar dot_2;
    br_scalar mult;
    LOG_TRACE("(%p, %p, %d, %f, %d, %f, %d, %d, %f)", pCar, pLight, pIndex_1, pSign_1, pIndex_2, pSign_2, pPoint_index_1, pPoint_index_2, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 10204
// Size: 0x68
//IDA: br_scalar __usercall DistanceFromPlane@<ST0>(br_vector3 *pPos@<EAX>, br_scalar pA, br_scalar pB, br_scalar pC, br_scalar pD)
br_scalar DistanceFromPlane(br_vector3 *pPos, br_scalar pA, br_scalar pB, br_scalar pC, br_scalar pD) {
    br_vector3 normal;
    LOG_TRACE("(%p, %f, %f, %f, %f)", pPos, pA, pB, pC, pD);
    NOT_IMPLEMENTED();
}

// Offset: 10308
// Size: 0x54
//IDA: void __cdecl DisableLights()
void DisableLights() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10392
// Size: 0x54
//IDA: void __cdecl EnableLights()
void EnableLights() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10476
// Size: 0x1235
//IDA: void __usercall ProcessShadow(tCar_spec *pCar@<EAX>, br_actor *pWorld@<EDX>, tTrack_spec *pTrack_spec@<EBX>, br_actor *pCamera@<ECX>, br_matrix34 *pCamera_to_world_transform, br_scalar pDistance_factor)
void ProcessShadow(tCar_spec *pCar, br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform, br_scalar pDistance_factor) {
    int i;
    int j;
    int face_count;
    int force_shadow;
    int models_used;
    int point_to_use;
    int oily_count;
    int f_num;
    br_vector3 pos;
    br_vector3 light_ray_car;
    br_vector3 temp_v;
    br_vector3 shadow_points_world[8];
    br_vector3 poly_centre;
    br_vector3 car_to_poly;
    br_vector3 ray;
    br_vector3 ray_pos;
    br_vector3 normal;
    br_vector3 the_normal;
    br_vector3 pos_cam_space;
    br_vector3 *v0;
    br_vector3 *v1;
    br_vector3 *v2;
    br_vector4 *clip_normal;
    br_scalar bounds_x_min;
    br_scalar bounds_x_max;
    br_scalar bounds_y_min;
    br_scalar bounds_y_max;
    br_scalar bounds_z_min;
    br_scalar bounds_z_max;
    br_scalar height;
    br_scalar oily_size;
    br_scalar highest_underneath;
    br_scalar shadow_scaling_factor;
    br_scalar y_offset;
    br_scalar most_neg_dotty;
    br_scalar mr_dotty;
    br_scalar first_poly_below;
    br_scalar distance;
    br_scalar camera_hither_fudge;
    br_scalar camera_angle_additional_fudge;
    br_scalar ray_length;
    tBounds kev_bounds;
    tFace_ref the_list[100];
    tFace_ref *face_ref;
    tFace_ref *list_ptr;
    br_renderbounds_cbfn *old_call_back;
    br_camera *camera_ptr;
    br_actor *oily_actor;
    br_model *model;
    br_material *material;
    br_vertex verts[48];
    br_face faces[16];
    LOG_TRACE("(%p, %p, %p, %p, %p, %f)", pCar, pWorld, pTrack_spec, pCamera, pCamera_to_world_transform, pDistance_factor);
    NOT_IMPLEMENTED();
}

// Offset: 15140
// Size: 0x207
//IDA: void __usercall RenderShadows(br_actor *pWorld@<EAX>, tTrack_spec *pTrack_spec@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world_transform@<ECX>)
void RenderShadows(br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform) {
    int i;
    int cat;
    int car_count;
    tCar_spec *the_car;
    br_vector3 camera_to_car;
    br_scalar distance_factor;
    LOG_TRACE("(%p, %p, %p, %p)", pWorld, pTrack_spec, pCamera, pCamera_to_world_transform);
    NOT_IMPLEMENTED();
}

// Offset: 15660
// Size: 0xf7
//IDA: void __usercall FlashyMapCheckpoint(int pIndex@<EAX>, tU32 pTime@<EDX>)
void FlashyMapCheckpoint(int pIndex, tU32 pTime) {
    tCheckpoint *cp;
    static tU32 last_flash;
    static int flash_state;
    LOG_TRACE("(%d, %d)", pIndex, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 15908
// Size: 0xfc
//IDA: int __usercall ConditionallyFillWithSky@<EAX>(br_pixelmap *pPixelmap@<EAX>)
int ConditionallyFillWithSky(br_pixelmap *pPixelmap) {
    int bgnd_col;
    LOG_TRACE("(%p)", pPixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 16160
// Size: 0xea7
//IDA: void __usercall RenderAFrame(int pDepth_mask_on@<EAX>)
void RenderAFrame(int pDepth_mask_on) {
    int cat;
    int i;
    int car_count;
    int flags;
    int x_shift;
    int y_shift;
    int cockpit_on;
    int real_origin_x;
    int real_origin_y;
    int real_base_x;
    int real_base_y;
    int map_timer_x;
    int map_timer_width;
    int ped_type;
    char *old_pixels;
    br_matrix34 old_camera_matrix;
    br_matrix34 old_mirror_cam_matrix;
    tU32 the_time;
    br_vector3 *car_pos;
    br_vector3 pos;
    char the_text[256];
    tCar_spec *car;
    LOG_TRACE("(%d)", pDepth_mask_on);
    NOT_IMPLEMENTED();
}

// Offset: 19912
// Size: 0x36
//IDA: void __cdecl InitPaletteAnimate()
void InitPaletteAnimate() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19968
// Size: 0x4c
//IDA: void __cdecl RevertPalette()
void RevertPalette() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20044
// Size: 0x22
//IDA: void __cdecl MungePalette()
void MungePalette() {
    tU8 *p;
    tU8 *q;
    int i;
    float damage;
    float throb_start;
    float throb_end;
    float throb_amount;
    float throb_amount_dash;
    float omega;
    tU32 period;
    tU32 the_time;
    static int palette_spammed;
    static float last_omega;
    static tU32 next_repair_time;
    static tU32 last_sound;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20080
// Size: 0x31
//IDA: void __cdecl ResetPalette()
void ResetPalette() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20132
// Size: 0x41
//IDA: void __usercall Darken(tU8 *pPtr@<EAX>, unsigned int pDarken_amount@<EDX>)
void Darken(tU8 *pPtr, unsigned int pDarken_amount) {
    unsigned int value;
    LOG_TRACE("(%p, %d)", pPtr, pDarken_amount);
    NOT_IMPLEMENTED();
}

// Offset: 20200
// Size: 0xc2
//IDA: void __usercall SetFadedPalette(int pDegree@<EAX>)
void SetFadedPalette(int pDegree) {
    int j;
    br_pixelmap *the_palette;
    char *the_pixels;
    LOG_TRACE("(%d)", pDegree);
    NOT_IMPLEMENTED();
}

// Offset: 20396
// Size: 0x93
//IDA: void __cdecl FadePaletteDown()
void FadePaletteDown() {
    int i;
    int start_time;
    int the_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20544
// Size: 0x74
//IDA: void __cdecl FadePaletteUp()
void FadePaletteUp() {
    int i;
    int start_time;
    int the_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20660
// Size: 0x5b
//IDA: void __cdecl KillSplashScreen()
void KillSplashScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20752
// Size: 0x3a
//IDA: void __cdecl EnsureRenderPalette()
void EnsureRenderPalette() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20812
// Size: 0xf8
//IDA: void __usercall SplashScreenWith(char *pPixmap_name@<EAX>)
void SplashScreenWith(char *pPixmap_name) {
    br_pixelmap *the_map;
    LOG_TRACE("(\"%s\")", pPixmap_name);
    NOT_IMPLEMENTED();
}

// Offset: 21060
// Size: 0x30
//IDA: void __cdecl EnsurePaletteUp()
void EnsurePaletteUp() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21108
// Size: 0x67
//IDA: br_uint_32 __cdecl AmbientificateMaterial(br_material *pMat, void *pArg)
br_uint_32 AmbientificateMaterial(br_material *pMat, void *pArg) {
    float a;
    LOG_TRACE("(%p, %p)", pMat, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 21212
// Size: 0x3c
//IDA: void __cdecl ChangeAmbience(br_scalar pDelta)
void ChangeAmbience(br_scalar pDelta) {
    LOG_TRACE("(%f)", pDelta);
    NOT_IMPLEMENTED();
}

// Offset: 21272
// Size: 0x39
//IDA: void __cdecl InitAmbience()
void InitAmbience() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21332
// Size: 0x311
//IDA: void __usercall DRPixelmapRectangleMaskedCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleMaskedCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight) {
    int y_count;
    int x_count;
    int dest_row_wrap;
    int source_row_wrap;
    int x_delta;
    tU8 the_byte;
    tU8 *source_ptr;
    tU8 *dest_ptr;
    tU8 *conv_table;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", pDest, pDest_x, pDest_y, pSource, pSource_x, pSource_y, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 22120
// Size: 0x56
//IDA: void __usercall DRMaskedStamp(br_int_16 pDest_x@<EAX>, br_int_16 pDest_y@<EDX>, br_pixelmap *pSource@<EBX>)
void DRMaskedStamp(br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource) {
    LOG_TRACE("(%d, %d, %p)", pDest_x, pDest_y, pSource);
    NOT_IMPLEMENTED();
}

// Offset: 22208
// Size: 0x14c
//IDA: void __usercall DRPixelmapRectangleOnscreenCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleOnscreenCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight) {
    int y_count;
    int x_count;
    int dest_row_wrap;
    int source_row_wrap;
    int x_delta;
    tU8 the_byte;
    tU8 *source_ptr;
    tU8 *dest_ptr;
    tU8 *conv_table;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", pDest, pDest_x, pDest_y, pSource, pSource_x, pSource_y, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 22540
// Size: 0x337
//IDA: void __usercall DRPixelmapRectangleShearedCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight, tX1616 pShear)
void DRPixelmapRectangleShearedCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight, tX1616 pShear) {
    int y_count;
    int x_count;
    int dest_row_wrap;
    int source_row_wrap;
    int x_delta;
    int last_shear_x;
    int current_shear_x;
    int shear_x_difference;
    tU8 the_byte;
    tU8 *source_ptr;
    tU8 *dest_ptr;
    tU8 *conv_table;
    tX1616 current_shear;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %d)", pDest, pDest_x, pDest_y, pSource, pSource_x, pSource_y, pWidth, pHeight, pShear);
    NOT_IMPLEMENTED();
}

// Offset: 23364
// Size: 0x155
//IDA: void __usercall DRPixelmapRectangleVScaledCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleVScaledCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight) {
    int y_count;
    int x_count;
    int dest_row_wrap;
    int source_row_wrap;
    int x_delta;
    tU8 the_byte;
    tU8 *source_ptr;
    tU8 *dest_ptr;
    tU32 source_y;
    tU32 source_y_delta;
    tU32 old_source_y;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", pDest, pDest_x, pDest_y, pSource, pSource_x, pSource_y, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 23708
// Size: 0x57
//IDA: void __cdecl InitTransientBitmaps()
void InitTransientBitmaps() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 23796
// Size: 0xb7
//IDA: int __usercall AllocateTransientBitmap@<EAX>(int pWidth@<EAX>, int pHeight@<EDX>, int pUser_data@<EBX>)
int AllocateTransientBitmap(int pWidth, int pHeight, int pUser_data) {
    int bm_index;
    LOG_TRACE("(%d, %d, %d)", pWidth, pHeight, pUser_data);
    NOT_IMPLEMENTED();
}

// Offset: 23980
// Size: 0x60
//IDA: void __usercall DeallocateTransientBitmap(int pIndex@<EAX>)
void DeallocateTransientBitmap(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 24076
// Size: 0x43
//IDA: void __cdecl DeallocateAllTransientBitmaps()
void DeallocateAllTransientBitmaps() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 24144
// Size: 0xfe
//IDA: void __usercall RemoveTransientBitmaps(int pGraphically_remove_them@<EAX>)
void RemoveTransientBitmaps(int pGraphically_remove_them) {
    int i;
    int order_number;
    LOG_TRACE("(%d)", pGraphically_remove_them);
    NOT_IMPLEMENTED();
}

// Offset: 24400
// Size: 0xbe
//IDA: void __usercall SaveTransient(int pIndex@<EAX>, int pX_coord@<EDX>, int pY_coord@<EBX>)
void SaveTransient(int pIndex, int pX_coord, int pY_coord) {
    LOG_TRACE("(%d, %d, %d)", pIndex, pX_coord, pY_coord);
    NOT_IMPLEMENTED();
}

// Offset: 24592
// Size: 0xd6
//IDA: void __usercall DrawCursorGiblet(tCursor_giblet *pGib@<EAX>)
void DrawCursorGiblet(tCursor_giblet *pGib) {
    br_pixelmap *the_image;
    LOG_TRACE("(%p)", pGib);
    NOT_IMPLEMENTED();
}

// Offset: 24808
// Size: 0x2e7
//IDA: void __usercall ProcessCursorGiblets(int pPeriod@<EAX>)
void ProcessCursorGiblets(int pPeriod) {
    int i;
    int kill_the_giblet;
    tU32 time_now;
    tCursor_giblet *gib;
    LOG_TRACE("(%d)", pPeriod);
    NOT_IMPLEMENTED();
}

// Offset: 25552
// Size: 0x242
//IDA: int __usercall NewCursorGiblet@<EAX>(int pX_coord@<EAX>, int pY_coord@<EDX>, float pX_speed, float pY_speed, tU32 pDrop_time)
int NewCursorGiblet(int pX_coord, int pY_coord, float pX_speed, float pY_speed, tU32 pDrop_time) {
    int i;
    int the_width;
    int the_height;
    int sequence_number;
    LOG_TRACE("(%d, %d, %f, %f, %d)", pX_coord, pY_coord, pX_speed, pY_speed, pDrop_time);
    NOT_IMPLEMENTED();
}

// Offset: 26132
// Size: 0x55d
//IDA: int __cdecl DoMouseCursor()
int DoMouseCursor() {
    int x_coord;
    int y_coord;
    int mouse_moved;
    int new_required;
    int giblet_index;
    int cursor_offset;
    int button_is_down;
    int giblet_chance;
    int giblet_count;
    tU32 this_call_time;
    static tU32 last_cursor_change;
    static tU32 last_call_time;
    static tU32 last_required_change;
    tS32 period;
    static int delta_x;
    static int required_cursor;
    static int zero_count;
    static int button_was_down;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 27508
// Size: 0xba
//IDA: int __cdecl AllocateCursorTransient()
int AllocateCursorTransient() {
    int i;
    int largest_width;
    int largest_height;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 27696
// Size: 0x8a
//IDA: void __cdecl StartMouseCursor()
void StartMouseCursor() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 27836
// Size: 0x3b
//IDA: void __cdecl EndMouseCursor()
void EndMouseCursor() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 27896
// Size: 0x238
//IDA: void __usercall LoadFont(int pFont_ID@<EAX>)
void LoadFont(int pFont_ID) {
    tPath_name the_path;
    int i;
    int number_of_chars;
    FILE *f;
    tU32 the_size;
    LOG_TRACE("(%d)", pFont_ID);
    NOT_IMPLEMENTED();
}

// Offset: 28464
// Size: 0x8d
//IDA: void __usercall DisposeFont(int pFont_ID@<EAX>)
void DisposeFont(int pFont_ID) {
    LOG_TRACE("(%d)", pFont_ID);
    NOT_IMPLEMENTED();
}

// Offset: 28608
// Size: 0x5d
//IDA: void __cdecl InitDRFonts()
void InitDRFonts() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28704
// Size: 0xfb
//IDA: void __usercall DrawDropImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip, int pOffset)
void DrawDropImage(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip, int pOffset) {
    int y;
    int src_y;
    int src_height;
    int y_diff;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pImage, pLeft, pTop, pTop_clip, pBottom_clip, pOffset);
    NOT_IMPLEMENTED();
}

// Offset: 28956
// Size: 0xa1
//IDA: void __usercall DropInImageFromTop(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropInImageFromTop(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip) {
    tS32 start_time;
    tS32 the_time;
    int drop_distance;
    LOG_TRACE("(%p, %d, %d, %d, %d)", pImage, pLeft, pTop, pTop_clip, pBottom_clip);
    NOT_IMPLEMENTED();
}

// Offset: 29120
// Size: 0x96
//IDA: void __usercall DropOutImageThruBottom(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropOutImageThruBottom(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip) {
    tS32 start_time;
    tS32 the_time;
    int drop_distance;
    LOG_TRACE("(%p, %d, %d, %d, %d)", pImage, pLeft, pTop, pTop_clip, pBottom_clip);
    NOT_IMPLEMENTED();
}

// Offset: 29272
// Size: 0x98
//IDA: void __usercall DropInImageFromBottom(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropInImageFromBottom(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip) {
    tS32 start_time;
    tS32 the_time;
    int drop_distance;
    LOG_TRACE("(%p, %d, %d, %d, %d)", pImage, pLeft, pTop, pTop_clip, pBottom_clip);
    NOT_IMPLEMENTED();
}

// Offset: 29424
// Size: 0xa1
//IDA: void __usercall DropOutImageThruTop(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropOutImageThruTop(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip) {
    tS32 start_time;
    tS32 the_time;
    int drop_distance;
    LOG_TRACE("(%p, %d, %d, %d, %d)", pImage, pLeft, pTop, pTop_clip, pBottom_clip);
    NOT_IMPLEMENTED();
}

// Offset: 29588
// Size: 0x106
//IDA: void __usercall DrawTellyLine(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pPercentage@<ECX>)
void DrawTellyLine(br_pixelmap *pImage, int pLeft, int pTop, int pPercentage) {
    int the_width;
    int the_height;
    LOG_TRACE("(%p, %d, %d, %d)", pImage, pLeft, pTop, pPercentage);
    NOT_IMPLEMENTED();
}

// Offset: 29852
// Size: 0xcb
//IDA: void __usercall DrawTellyImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pPercentage@<ECX>)
void DrawTellyImage(br_pixelmap *pImage, int pLeft, int pTop, int pPercentage) {
    int the_height;
    LOG_TRACE("(%p, %d, %d, %d)", pImage, pLeft, pTop, pPercentage);
    NOT_IMPLEMENTED();
}

// Offset: 30056
// Size: 0xc2
//IDA: void __usercall TellyInImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>)
void TellyInImage(br_pixelmap *pImage, int pLeft, int pTop) {
    tS32 start_time;
    tS32 the_time;
    LOG_TRACE("(%p, %d, %d)", pImage, pLeft, pTop);
    NOT_IMPLEMENTED();
}

// Offset: 30252
// Size: 0xdc
//IDA: void __usercall TellyOutImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>)
void TellyOutImage(br_pixelmap *pImage, int pLeft, int pTop) {
    tS32 start_time;
    tS32 the_time;
    int drop_distance;
    LOG_TRACE("(%p, %d, %d)", pImage, pLeft, pTop);
    NOT_IMPLEMENTED();
}

// Offset: 30472
// Size: 0x2d
//IDA: void __usercall SetShadowLevel(tShadow_level pLevel@<EAX>)
void SetShadowLevel(tShadow_level pLevel) {
    LOG_TRACE("(%d)", pLevel);
    NOT_IMPLEMENTED();
}

// Offset: 30520
// Size: 0x2d
//IDA: tShadow_level __cdecl GetShadowLevel()
tShadow_level GetShadowLevel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 30568
// Size: 0xf7
//IDA: void __cdecl ToggleShadow()
void ToggleShadow() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 30816
// Size: 0x1f7
//IDA: void __cdecl InitShadow()
void InitShadow() {
    int i;
    br_vector3 temp_v;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31320
// Size: 0x8c
//IDA: br_uint_32 __cdecl SaveShadeTable(br_pixelmap *pTable, void *pArg)
br_uint_32 SaveShadeTable(br_pixelmap *pTable, void *pArg) {
    LOG_TRACE("(%p, %p)", pTable, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 31460
// Size: 0x47
//IDA: void __cdecl SaveShadeTables()
void SaveShadeTables() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31532
// Size: 0x54
//IDA: void __cdecl DisposeSavedShadeTables()
void DisposeSavedShadeTables() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31616
// Size: 0x86
//IDA: void __cdecl ShadowMode()
void ShadowMode() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31752
// Size: 0x72
//IDA: int __cdecl SwitchToRealResolution()
int SwitchToRealResolution() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31868
// Size: 0x7d
//IDA: int __cdecl SwitchToLoresMode()
int SwitchToLoresMode() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31996
// Size: 0x1fb
//IDA: void __usercall DRPixelmapDoubledCopy(br_pixelmap *pDestn@<EAX>, br_pixelmap *pSource@<EDX>, int pSource_width@<EBX>, int pSource_height@<ECX>, int pX_offset, int pY_offset)
void DRPixelmapDoubledCopy(br_pixelmap *pDestn, br_pixelmap *pSource, int pSource_width, int pSource_height, int pX_offset, int pY_offset) {
    tU16 *sptr;
    tU16 pixels;
    tU8 *dptr;
    tU8 *dptr2;
    tU8 pixel_1;
    tU8 pixel_2;
    int i;
    int j;
    int dst_row_skip;
    int src_row_skip;
    int width_over_2;
    LOG_TRACE("(%p, %p, %d, %d, %d, %d)", pDestn, pSource, pSource_width, pSource_height, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

