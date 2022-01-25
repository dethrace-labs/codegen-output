#include "loading.h"

tHeadup_info gHeadup_image_info[31];
char *gYour_car_names[2][6];
char *gDrivable_car_names[6];
char *gDamage_names[12];
char *gWheel_actor_names[6];
char *gRaces_file_names[9];
char *gNet_avail_names[4];
char *gFloorpan_names[5];
int gAllow_open_to_fail;
int gDecode_thing;
char gDecode_string[14];
int gFunk_groove_flags[30];
char gDef_def_water_screen_name[32];
br_material *gDestn_screen_mat;
br_material *gSource_screen_mat;
int gCurrent_race_file_index;
int gGroove_funk_offset;
int gDemo_armour;
int gDemo_rank;
int gDemo_opponents[5];
int gDemo_power;
int gDemo_offensive;

// Offset: 0
// Size: 0x43
//IDA: tU32 __usercall ReadU32@<EAX>(FILE *pF@<EAX>)
tU32 ReadU32(FILE *pF) {
    tU32 raw_long;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 68
// Size: 0x43
//IDA: tU16 __usercall ReadU16@<AX>(FILE *pF@<EAX>)
tU16 ReadU16(FILE *pF) {
    tU16 raw_short;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 136
// Size: 0x43
//IDA: tU8 __usercall ReadU8@<AL>(FILE *pF@<EAX>)
tU8 ReadU8(FILE *pF) {
    tU8 raw_byte;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 204
// Size: 0x43
//IDA: tS32 __usercall ReadS32@<EAX>(FILE *pF@<EAX>)
tS32 ReadS32(FILE *pF) {
    tS32 raw_long;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 272
// Size: 0x43
//IDA: tS16 __usercall ReadS16@<AX>(FILE *pF@<EAX>)
tS16 ReadS16(FILE *pF) {
    tS16 raw_short;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 340
// Size: 0x43
//IDA: tS8 __usercall ReadS8@<AL>(FILE *pF@<EAX>)
tS8 ReadS8(FILE *pF) {
    tS8 raw_byte;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 408
// Size: 0x41
//IDA: void __usercall WriteU32L(FILE *pF@<EAX>, tU32 pNumber@<EDX>)
void WriteU32L(FILE *pF, tU32 pNumber) {
    tU32 raw_long;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 476
// Size: 0x41
//IDA: void __usercall WriteU16L(FILE *pF@<EAX>, tU16 pNumber@<EDX>)
void WriteU16L(FILE *pF, tU16 pNumber) {
    tU16 raw_short;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 544
// Size: 0x41
//IDA: void __usercall WriteU8L(FILE *pF@<EAX>, tU8 pNumber@<EDX>)
void WriteU8L(FILE *pF, tU8 pNumber) {
    tU8 raw_byte;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 612
// Size: 0x41
//IDA: void __usercall WriteS32L(FILE *pF@<EAX>, tS32 pNumber@<EDX>)
void WriteS32L(FILE *pF, tS32 pNumber) {
    tS32 raw_long;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 680
// Size: 0x41
//IDA: void __usercall WriteS16L(FILE *pF@<EAX>, tS16 pNumber@<EDX>)
void WriteS16L(FILE *pF, tS16 pNumber) {
    tS16 raw_short;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 748
// Size: 0x41
//IDA: void __usercall WriteS8L(FILE *pF@<EAX>, tS8 pNumber@<EDX>)
void WriteS8L(FILE *pF, tS8 pNumber) {
    tS8 raw_byte;
    LOG_TRACE("(%p, %d)", pF, pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 816
// Size: 0x36
//IDA: void __usercall SkipBytes(FILE *pF@<EAX>, int pBytes_to_skip@<EDX>)
void SkipBytes(FILE *pF, int pBytes_to_skip) {
    LOG_TRACE("(%p, %d)", pF, pBytes_to_skip);
    NOT_IMPLEMENTED();
}

// Offset: 872
// Size: 0x46
//IDA: tU32 __usercall MemReadU32@<EAX>(char **pPtr@<EAX>)
tU32 MemReadU32(char **pPtr) {
    tU32 raw_long;
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 944
// Size: 0x46
//IDA: tU16 __usercall MemReadU16@<AX>(char **pPtr@<EAX>)
tU16 MemReadU16(char **pPtr) {
    tU16 raw_short;
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1016
// Size: 0x37
//IDA: tU8 __usercall MemReadU8@<AL>(char **pPtr@<EAX>)
tU8 MemReadU8(char **pPtr) {
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1072
// Size: 0x46
//IDA: tS32 __usercall MemReadS32@<EAX>(char **pPtr@<EAX>)
tS32 MemReadS32(char **pPtr) {
    tS32 raw_long;
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1144
// Size: 0x46
//IDA: tS16 __usercall MemReadS16@<AX>(char **pPtr@<EAX>)
tS16 MemReadS16(char **pPtr) {
    tS16 raw_short;
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1216
// Size: 0x37
//IDA: tS8 __usercall MemReadS8@<AL>(char **pPtr@<EAX>)
tS8 MemReadS8(char **pPtr) {
    tS8 raw_byte;
    LOG_TRACE("(%p)", pPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1272
// Size: 0x2e
//IDA: void __usercall MemSkipBytes(char **pPtr@<EAX>, int pBytes_to_skip@<EDX>)
void MemSkipBytes(char **pPtr, int pBytes_to_skip) {
    LOG_TRACE("(%p, %d)", pPtr, pBytes_to_skip);
    NOT_IMPLEMENTED();
}

// Offset: 1320
// Size: 0x865
//IDA: void __cdecl LoadGeneralParameters()
void LoadGeneralParameters() {
    FILE *f;
    tPath_name the_path;
    int i;
    int temp;
    char s[256];
    char *str;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3472
// Size: 0x35
//IDA: void __cdecl FinishLoadingGeneral()
void FinishLoadingGeneral() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3528
// Size: 0x124
//IDA: br_pixelmap* __usercall LoadPixelmap@<EAX>(char *pName@<EAX>)
br_pixelmap* LoadPixelmap(char *pName) {
    tPath_name the_path;
    br_pixelmap *pm;
    char *end;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 3820
// Size: 0xde
//IDA: br_uint_32 __usercall LoadPixelmaps@<EAX>(char *pFile_name@<EAX>, br_pixelmap **pPixelmaps@<EDX>, br_uint_16 pNum@<EBX>)
br_uint_32 LoadPixelmaps(char *pFile_name, br_pixelmap **pPixelmaps, br_uint_16 pNum) {
    tPath_name path;
    int count;
    LOG_TRACE("(\"%s\", %p, %d)", pFile_name, pPixelmaps, pNum);
    NOT_IMPLEMENTED();
}

// Offset: 4044
// Size: 0x63
//IDA: br_pixelmap* __usercall LoadShadeTable@<EAX>(char *pName@<EAX>)
br_pixelmap* LoadShadeTable(char *pName) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 4144
// Size: 0x81
//IDA: br_material* __usercall LoadMaterial@<EAX>(char *pName@<EAX>)
br_material* LoadMaterial(char *pName) {
    tPath_name the_path;
    br_material *result;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 4276
// Size: 0x7b
//IDA: br_model* __usercall LoadModel@<EAX>(char *pName@<EAX>)
br_model* LoadModel(char *pName) {
    tPath_name the_path;
    br_model *model;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 4400
// Size: 0x68
//IDA: br_actor* __usercall LoadActor@<EAX>(char *pName@<EAX>)
br_actor* LoadActor(char *pName) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 4504
// Size: 0x4e
//IDA: void __usercall DRLoadPalette(char *pPath_name@<EAX>)
void DRLoadPalette(char *pPath_name) {
    br_pixelmap *palette_array[100];
    int number_of_palettes;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 4584
// Size: 0x4e
//IDA: void __usercall DRLoadShadeTable(char *pPath_name@<EAX>)
void DRLoadShadeTable(char *pPath_name) {
    br_pixelmap *table_array[100];
    int number_of_tables;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 4664
// Size: 0x54
//IDA: void __usercall RezeroPixelmaps(br_pixelmap **pPixelmap_array@<EAX>, int pCount@<EDX>)
void RezeroPixelmaps(br_pixelmap **pPixelmap_array, int pCount) {
    LOG_TRACE("(%p, %d)", pPixelmap_array, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 4748
// Size: 0x61
//IDA: void __usercall DRLoadPixelmaps(char *pPath_name@<EAX>)
void DRLoadPixelmaps(char *pPath_name) {
    br_pixelmap *pixelmap_array[100];
    int number_of_pixelmaps;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 4848
// Size: 0x67
//IDA: void __usercall DRLoadMaterials(char *pPath_name@<EAX>)
void DRLoadMaterials(char *pPath_name) {
    br_material *material_array[100];
    int number_of_materials;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 4952
// Size: 0x67
//IDA: void __usercall DRLoadModels(char *pPath_name@<EAX>)
void DRLoadModels(char *pPath_name) {
    br_model *model_array[100];
    int number_of_models;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 5056
// Size: 0x86
//IDA: void __usercall DRLoadActors(char *pPath_name@<EAX>)
void DRLoadActors(char *pPath_name) {
    br_actor *actor_array[100];
    int number_of_actors;
    int i;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 5192
// Size: 0x86
//IDA: void __usercall DRLoadLights(char *pPath_name@<EAX>)
void DRLoadLights(char *pPath_name) {
    br_actor *light_array[100];
    int number_of_lights;
    int i;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 5328
// Size: 0x46
//IDA: void __usercall LoadInFiles(char *pThe_base_path@<EAX>, char *pThe_dir_name@<EDX>, void (*pLoad_routine)(char*)@<EBX>)
void LoadInFiles(char *pThe_base_path, char *pThe_dir_name, void (*pLoad_routine)(char*)) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\", \"%s\", %p)", pThe_base_path, pThe_dir_name, pLoad_routine);
    NOT_IMPLEMENTED();
}

// Offset: 5400
// Size: 0xd0
//IDA: void __usercall LoadInRegisteeDir(char *pThe_dir_path@<EAX>)
void LoadInRegisteeDir(char *pThe_dir_path) {
    tPath_name the_path;
    LOG_TRACE("(\"%s\")", pThe_dir_path);
    NOT_IMPLEMENTED();
}

// Offset: 5608
// Size: 0x2c
//IDA: void __cdecl LoadInRegistees()
void LoadInRegistees() {
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5652
// Size: 0xb6
//IDA: void __cdecl LoadKeyMapping()
void LoadKeyMapping() {
    FILE *f;
    tPath_name the_path;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5836
// Size: 0x10d
//IDA: void __usercall LoadInterfaceStuff(int pWithin_race@<EAX>)
void LoadInterfaceStuff(int pWithin_race) {
    tPath_name path;
    int i;
    LOG_TRACE("(%d)", pWithin_race);
    NOT_IMPLEMENTED();
}

// Offset: 6108
// Size: 0x110
//IDA: void __cdecl UnlockInterfaceStuff()
void UnlockInterfaceStuff() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6380
// Size: 0x4b
//IDA: void __cdecl InitInterfaceLoadState()
void InitInterfaceLoadState() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6456
// Size: 0x273
//IDA: tS8* __usercall ConvertPixTo16BitStripMap@<EAX>(br_pixelmap *pBr_map@<EAX>)
tS8* ConvertPixTo16BitStripMap(br_pixelmap *pBr_map) {
    int i;
    int j;
    int new_line_length;
    int current_size;
    int counting_blanks;
    int counter;
    int chunk_counter;
    int max_line_bytes;
    tU8 *next_byte;
    tU8 *strip_image;
    tU8 *current_strip_pointer;
    tU8 *temp_strip_image;
    tU8 *new_line;
    tU8 byte;
    tU16 *palette_entry;
    LOG_TRACE("(%p)", pBr_map);
    NOT_IMPLEMENTED();
}

// Offset: 7084
// Size: 0x242
//IDA: tS8* __usercall ConvertPixToStripMap@<EAX>(br_pixelmap *pThe_br_map@<EAX>)
tS8* ConvertPixToStripMap(br_pixelmap *pThe_br_map) {
    int i;
    int j;
    int new_line_length;
    int current_size;
    int counting_blanks;
    int counter;
    int chunk_counter;
    tU8 *next_byte;
    tU8 *the_strip_image;
    tU8 *current_strip_pointer;
    tU8 *temp_strip_image;
    tU8 new_line[800];
    tU8 the_byte;
    LOG_TRACE("(%p)", pThe_br_map);
    NOT_IMPLEMENTED();
}

// Offset: 7664
// Size: 0x93
//IDA: void __usercall KillWindscreen(br_model *pModel@<EAX>, br_material *pMaterial@<EDX>)
void KillWindscreen(br_model *pModel, br_material *pMaterial) {
    br_face *face;
    int i;
    LOG_TRACE("(%p, %p)", pModel, pMaterial);
    NOT_IMPLEMENTED();
}

// Offset: 7812
// Size: 0x67
//IDA: void __usercall DropOffDyingPeds(tCar_spec *pCar@<EAX>)
void DropOffDyingPeds(tCar_spec *pCar) {
    br_actor *child;
    br_actor *next;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 7916
// Size: 0x459
//IDA: void __usercall DisposeCar(tCar_spec *pCar_spec@<EAX>, int pOwner@<EDX>)
void DisposeCar(tCar_spec *pCar_spec, int pOwner) {
    int i;
    int j;
    LOG_TRACE("(%p, %d)", pCar_spec, pOwner);
    NOT_IMPLEMENTED();
}

// Offset: 9032
// Size: 0x272
//IDA: void __usercall AdjustCarCoordinates(tCar_spec *pCar@<EAX>)
void AdjustCarCoordinates(tCar_spec *pCar) {
    int i;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 9660
// Size: 0x3a1
//IDA: void __usercall LoadSpeedo(FILE *pF@<EAX>, int pIndex@<EDX>, tCar_spec *pCar_spec@<EBX>)
void LoadSpeedo(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    char the_char1;
    char the_char2;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 10592
// Size: 0x2fc
//IDA: void __usercall LoadTacho(FILE *pF@<EAX>, int pIndex@<EDX>, tCar_spec *pCar_spec@<EBX>)
void LoadTacho(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    char the_char1;
    char the_char2;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 11356
// Size: 0x330
//IDA: void __usercall LoadHeadups(FILE *pF@<EAX>, int pIndex@<EDX>, tCar_spec *pCar_spec@<EBX>)
void LoadHeadups(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    char s[256];
    char *str;
    int j;
    int number_of_slots;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 12172
// Size: 0x71b
//IDA: void __usercall ReadNonCarMechanicsData(FILE *pF@<EAX>, tNon_car_spec *non_car@<EDX>)
void ReadNonCarMechanicsData(FILE *pF, tNon_car_spec *non_car) {
    int number;
    int i;
    int j;
    char s[256];
    tCollision_info *c;
    br_scalar wid;
    br_scalar het;
    br_scalar len;
    br_scalar ts;
    br_scalar ts1;
    br_scalar snap_angle;
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    float __block1__x_0;
    float __block1__x_1;
    float __block1__x_2;
    float __block2__x_0;
    float __block2__x_1;
    float __block2__x_2;
    float __block3__x_0;
    float __block3__x_1;
    float __block3__x_2;
    float __block4__x_0;
    float __block4__x_1;
    float __block4__x_2;
    float __block5__x_0;
    float __block5__x_1;
    float __block6__x_0;
    float __block6__x_1;
    float __block6__x_2;
    LOG_TRACE("(%p, %p)", pF, non_car);
    NOT_IMPLEMENTED();
}

// Offset: 13992
// Size: 0xd94
//IDA: void __usercall ReadMechanicsData(FILE *pF@<EAX>, tCar_spec *c@<EDX>)
void ReadMechanicsData(FILE *pF, tCar_spec *c) {
    char s[256];
    char version;
    int i;
    int j;
    br_scalar ratio;
    br_scalar ts1;
    br_scalar theta_front;
    br_scalar theta_back;
    br_scalar theta_comp;
    br_scalar wid;
    br_scalar het;
    br_scalar len;
    br_vector3 *actor_offset;
    br_scalar speed;
    br_scalar force;
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    float __block1__x_0;
    float __block1__x_1;
    float __block1__x_2;
    float __block2__x_0;
    float __block2__x_1;
    float __block2__x_2;
    float __block3__x_0;
    float __block3__x_1;
    float __block3__x_2;
    float __block4__x_0;
    float __block4__x_1;
    float __block4__x_2;
    float __block5__x_0;
    float __block5__x_1;
    float __block6__x_0;
    float __block6__x_1;
    float __block7__x_0;
    float __block7__x_1;
    float __block7__x_2;
    float __block8__x_0;
    float __block8__x_1;
    float __block8__x_2;
    float __block9__x_0;
    float __block9__x_1;
    LOG_TRACE("(%p, %p)", pF, c);
    NOT_IMPLEMENTED();
}

// Offset: 17468
// Size: 0xc4
//IDA: void __usercall LoadGear(FILE *pF@<EAX>, int pIndex@<EDX>, tCar_spec *pCar_spec@<EBX>)
void LoadGear(FILE *pF, int pIndex, tCar_spec *pCar_spec) {
    tPath_name the_path;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %d, %p)", pF, pIndex, pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 17664
// Size: 0x38
//IDA: void __usercall AddRefOffset(int *pRef_holder@<EAX>)
void AddRefOffset(int *pRef_holder) {
    LOG_TRACE("(%p)", pRef_holder);
    NOT_IMPLEMENTED();
}

// Offset: 17720
// Size: 0x2b9
//IDA: void __usercall GetDamageProgram(FILE *pF@<EAX>, tCar_spec *pCar_spec@<EDX>, tImpact_location pImpact_location@<EBX>)
void GetDamageProgram(FILE *pF, tCar_spec *pCar_spec, tImpact_location pImpact_location) {
    tDamage_clause *the_clause;
    int i;
    int j;
    int k;
    int count;
    char s[256];
    char delim[64];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pF, pCar_spec, pImpact_location);
    NOT_IMPLEMENTED();
}

// Offset: 18420
// Size: 0xb2
//IDA: br_uint_32 __cdecl LinkModel(br_actor *pActor, tModel_pool *pModel_pool)
br_uint_32 LinkModel(br_actor *pActor, tModel_pool *pModel_pool) {
    int i;
    LOG_TRACE("(%p, %p)", pActor, pModel_pool);
    NOT_IMPLEMENTED();
}

// Offset: 18600
// Size: 0xc6
//IDA: void __usercall FreeUpBonnetModels(br_model **pModel_array@<EAX>, int pModel_count@<EDX>)
void FreeUpBonnetModels(br_model **pModel_array, int pModel_count) {
    int i;
    LOG_TRACE("(%p, %d)", pModel_array, pModel_count);
    NOT_IMPLEMENTED();
}

// Offset: 18800
// Size: 0x43
//IDA: void __usercall LinkModelsToActor(br_actor *pActor@<EAX>, br_model **pModel_array@<EDX>, int pModel_count@<EBX>)
void LinkModelsToActor(br_actor *pActor, br_model **pModel_array, int pModel_count) {
    tModel_pool model_pool;
    LOG_TRACE("(%p, %p, %d)", pActor, pModel_array, pModel_count);
    NOT_IMPLEMENTED();
}

// Offset: 18868
// Size: 0x84
//IDA: void __usercall ReadShrapnelMaterials(FILE *pF@<EAX>, tCollision_info *pCar_spec@<EDX>)
void ReadShrapnelMaterials(FILE *pF, tCollision_info *pCar_spec) {
    char s[256];
    char version;
    int i;
    LOG_TRACE("(%p, %p)", pF, pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 19000
// Size: 0xc8
//IDA: void __usercall CloneCar(tCar_spec **pOutput_car@<EAX>, tCar_spec *pInput_car@<EDX>)
void CloneCar(tCar_spec **pOutput_car, tCar_spec *pInput_car) {
    int i;
    LOG_TRACE("(%p, %p)", pOutput_car, pInput_car);
    NOT_IMPLEMENTED();
}

// Offset: 19200
// Size: 0x41
//IDA: void __usercall DisposeClonedCar(tCar_spec *pCar@<EAX>)
void DisposeClonedCar(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 19268
// Size: 0x20b
//IDA: int __usercall RemoveDoubleSided@<EAX>(br_model *pModel@<EAX>)
int RemoveDoubleSided(br_model *pModel) {
    br_face *faces;
    br_face *face;
    int temp;
    int num_double_sided_faces;
    int i;
    int orig_nfaces;
    int result;
    LOG_TRACE("(%p)", pModel);
    NOT_IMPLEMENTED();
}

// Offset: 19792
// Size: 0xc9
//IDA: void __usercall MungeWindscreen(br_model *pModel@<EAX>)
void MungeWindscreen(br_model *pModel) {
    br_face *face;
    int i;
    LOG_TRACE("(%p)", pModel);
    NOT_IMPLEMENTED();
}

// Offset: 19996
// Size: 0x8d
//IDA: void __usercall SetModelFlags(br_model *pModel@<EAX>, int pOwner@<EDX>)
void SetModelFlags(br_model *pModel, int pOwner) {
    LOG_TRACE("(%p, %d)", pModel, pOwner);
    NOT_IMPLEMENTED();
}

// Offset: 20140
// Size: 0x200a
//IDA: void __usercall LoadCar(char *pCar_name@<EAX>, tDriver pDriver@<EDX>, tCar_spec *pCar_spec@<EBX>, int pOwner@<ECX>, char *pDriver_name, tBrender_storage *pStorage_space)
void LoadCar(char *pCar_name, tDriver pDriver, tCar_spec *pCar_spec, int pOwner, char *pDriver_name, tBrender_storage *pStorage_space) {
    FILE *f;
    FILE *g;
    FILE *h;
    tPath_name the_path;
    int i;
    int j;
    int k;
    int its_a_floorpan;
    int number_of_floorpans;
    int point_num;
    int initial_vertex;
    int old_model_count;
    int old_material_count;
    int temp_index;
    int vertex_array_size;
    char s[256];
    char *str;
    br_pixelmap *the_image;
    float rate;
    float temp_float;
    br_model *model;
    br_vector3 tv;
    int v;
    int v_num;
    int group;
    int vertex_total;
    LOG_TRACE("(\"%s\", %d, %p, %d, \"%s\", %p)", pCar_name, pDriver, pCar_spec, pOwner, pDriver_name, pStorage_space);
    NOT_IMPLEMENTED();
}

// Offset: 28344
// Size: 0xba
//IDA: void __cdecl LoadHeadupImages()
void LoadHeadupImages() {
    int i;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28532
// Size: 0x5e
//IDA: void __cdecl DisposeHeadupImages()
void DisposeHeadupImages() {
    int i;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28628
// Size: 0x6d
//IDA: FILE* __cdecl OpenRaceFile()
FILE* OpenRaceFile() {
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28740
// Size: 0xdb
//IDA: void __usercall SkipRestOfRace(FILE *pF@<EAX>)
void SkipRestOfRace(FILE *pF) {
    int j;
    int k;
    int text_chunk_count;
    int line_count;
    char s[256];
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 28960
// Size: 0x19b
//IDA: void __usercall LoadRaces(tRace_list_spec *pRace_list@<EAX>, int *pCount@<EDX>, int pRace_type_index@<EBX>)
void LoadRaces(tRace_list_spec *pRace_list, int *pCount, int pRace_type_index) {
    FILE *f;
    int i;
    int j;
    int k;
    int number_of_racers;
    int last_race;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pRace_list, pCount, pRace_type_index);
    NOT_IMPLEMENTED();
}

// Offset: 29372
// Size: 0x58
//IDA: void __usercall UnlockOpponentMugshot(int pIndex@<EAX>)
void UnlockOpponentMugshot(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 29460
// Size: 0xa8
//IDA: void __usercall LoadOpponentMugShot(int pIndex@<EAX>)
void LoadOpponentMugShot(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 29628
// Size: 0x88
//IDA: void __usercall DisposeOpponentGridIcon(tRace_info *pRace_info@<EAX>, int pIndex@<EDX>)
void DisposeOpponentGridIcon(tRace_info *pRace_info, int pIndex) {
    LOG_TRACE("(%p, %d)", pRace_info, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 29764
// Size: 0x9b
//IDA: void __usercall LoadOpponentGridIcon(tRace_info *pRace_info@<EAX>, int pIndex@<EDX>)
void LoadOpponentGridIcon(tRace_info *pRace_info, int pIndex) {
    LOG_TRACE("(%p, %d)", pRace_info, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 29920
// Size: 0x324
//IDA: void __usercall LoadRaceInfo(int pRace_index@<EAX>, tRace_info *pRace_info@<EDX>)
void LoadRaceInfo(int pRace_index, tRace_info *pRace_info) {
    FILE *f;
    int i;
    int j;
    int k;
    int duplicate;
    int substitute;
    int auto_scum_count;
    int old_index;
    int temp_index;
    char s[256];
    char *str;
    float temp_float;
    tText_chunk *the_chunk;
    LOG_TRACE("(%d, %p)", pRace_index, pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 30724
// Size: 0x15f
//IDA: void __usercall DisposeRaceInfo(tRace_info *pRace_info@<EAX>)
void DisposeRaceInfo(tRace_info *pRace_info) {
    int i;
    int j;
    int k;
    tText_chunk *the_chunk;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 31076
// Size: 0x7a
//IDA: void __usercall LoadGridIcons(tRace_info *pRace_info@<EAX>)
void LoadGridIcons(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 31200
// Size: 0x77
//IDA: void __usercall DisposeGridIcons(tRace_info *pRace_info@<EAX>)
void DisposeGridIcons(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 31320
// Size: 0x433
//IDA: void __cdecl LoadOpponents()
void LoadOpponents() {
    FILE *f;
    tPath_name the_path;
    int i;
    int j;
    int k;
    char s[256];
    char *str;
    tText_chunk *the_chunk;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 32396
// Size: 0x287
//IDA: br_font* __usercall LoadBRFont@<EAX>(char *pName@<EAX>)
br_font* LoadBRFont(char *pName) {
    FILE *f;
    tPath_name the_path;
    br_font *the_font;
    tU32 data_size;
    int i;
    LOG_TRACE("(\"%s\")", pName);
    NOT_IMPLEMENTED();
}

// Offset: 33044
// Size: 0x106
//IDA: void __cdecl LoadParts()
void LoadParts() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 33308
// Size: 0x95
//IDA: void __cdecl UnlockParts()
void UnlockParts() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 33460
// Size: 0x48
//IDA: br_pixelmap* __cdecl LoadChromeFont()
br_pixelmap* LoadChromeFont() {
    br_pixelmap *result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 33532
// Size: 0x31
//IDA: void __usercall DisposeChromeFont(br_pixelmap *pThe_font@<EAX>)
void DisposeChromeFont(br_pixelmap *pThe_font) {
    LOG_TRACE("(%p)", pThe_font);
    NOT_IMPLEMENTED();
}

// Offset: 33584
// Size: 0x8c
//IDA: int __usercall GetALineAndInterpretCommand@<EAX>(FILE *pF@<EAX>, char **pString_list@<EDX>, int pCount@<EBX>)
int GetALineAndInterpretCommand(FILE *pF, char **pString_list, int pCount) {
    int i;
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %d)", pF, pString_list, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 33724
// Size: 0x65
//IDA: int __usercall GetAnInt@<EAX>(FILE *pF@<EAX>)
int GetAnInt(FILE *pF) {
    char s[256];
    char *str;
    int result;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 33828
// Size: 0x65
//IDA: float __usercall GetAFloat@<ST0>(FILE *pF@<EAX>)
float GetAFloat(FILE *pF) {
    char s[256];
    char *str;
    float result;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 33932
// Size: 0x6b
//IDA: float __usercall GetAFloatPercent@<ST0>(FILE *pF@<EAX>)
float GetAFloatPercent(FILE *pF) {
    char s[256];
    char *str;
    float result;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 34040
// Size: 0x83
//IDA: void __usercall GetPairOfFloats(FILE *pF@<EAX>, float *pF1@<EDX>, float *pF2@<EBX>)
void GetPairOfFloats(FILE *pF, float *pF1, float *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);
    NOT_IMPLEMENTED();
}

// Offset: 34172
// Size: 0xa9
//IDA: void __usercall GetThreeFloats(FILE *pF@<EAX>, float *pF1@<EDX>, float *pF2@<EBX>, float *pF3@<ECX>)
void GetThreeFloats(FILE *pF, float *pF1, float *pF2, float *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);
    NOT_IMPLEMENTED();
}

// Offset: 34344
// Size: 0x83
//IDA: void __usercall GetPairOfInts(FILE *pF@<EAX>, int *pF1@<EDX>, int *pF2@<EBX>)
void GetPairOfInts(FILE *pF, int *pF1, int *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);
    NOT_IMPLEMENTED();
}

// Offset: 34476
// Size: 0xa9
//IDA: void __usercall GetThreeInts(FILE *pF@<EAX>, int *pF1@<EDX>, int *pF2@<EBX>, int *pF3@<ECX>)
void GetThreeInts(FILE *pF, int *pF1, int *pF2, int *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);
    NOT_IMPLEMENTED();
}

// Offset: 34648
// Size: 0xc5
//IDA: void __usercall GetThreeIntsAndAString(FILE *pF@<EAX>, int *pF1@<EDX>, int *pF2@<EBX>, int *pF3@<ECX>, char *pS)
void GetThreeIntsAndAString(FILE *pF, int *pF1, int *pF2, int *pF3, char *pS) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p, \"%s\")", pF, pF1, pF2, pF3, pS);
    NOT_IMPLEMENTED();
}

// Offset: 34848
// Size: 0xd0
//IDA: void __usercall GetFourInts(FILE *pF@<EAX>, int *pF1@<EDX>, int *pF2@<EBX>, int *pF3@<ECX>, int *pF4)
void GetFourInts(FILE *pF, int *pF1, int *pF2, int *pF3, int *pF4) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4);
    NOT_IMPLEMENTED();
}

// Offset: 35056
// Size: 0x33
//IDA: br_scalar __usercall GetAScalar@<ST0>(FILE *pF@<EAX>)
br_scalar GetAScalar(FILE *pF) {
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 35108
// Size: 0x45
//IDA: void __usercall GetPairOfScalars(FILE *pF@<EAX>, br_scalar *pS1@<EDX>, br_scalar *pS2@<EBX>)
void GetPairOfScalars(FILE *pF, br_scalar *pS1, br_scalar *pS2) {
    float __block0__x_0;
    float __block0__x_1;
    LOG_TRACE("(%p, %p, %p)", pF, pS1, pS2);
    NOT_IMPLEMENTED();
}

// Offset: 35180
// Size: 0x51
//IDA: void __usercall GetThreeScalars(FILE *pF@<EAX>, br_scalar *pS1@<EDX>, br_scalar *pS2@<EBX>, br_scalar *pS3@<ECX>)
void GetThreeScalars(FILE *pF, br_scalar *pS1, br_scalar *pS2, br_scalar *pS3) {
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pS1, pS2, pS3);
    NOT_IMPLEMENTED();
}

// Offset: 35264
// Size: 0xf0
//IDA: void __usercall GetFourScalars(FILE *pF@<EAX>, br_scalar *pF1@<EDX>, br_scalar *pF2@<EBX>, br_scalar *pF3@<ECX>, br_scalar *pF4)
void GetFourScalars(FILE *pF, br_scalar *pF1, br_scalar *pF2, br_scalar *pF3, br_scalar *pF4) {
    char s[256];
    char *str;
    float f1;
    float f2;
    float f3;
    float f4;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4);
    NOT_IMPLEMENTED();
}

// Offset: 35504
// Size: 0x11d
//IDA: void __usercall GetFiveScalars(FILE *pF@<EAX>, br_scalar *pF1@<EDX>, br_scalar *pF2@<EBX>, br_scalar *pF3@<ECX>, br_scalar *pF4, br_scalar *pF5)
void GetFiveScalars(FILE *pF, br_scalar *pF1, br_scalar *pF2, br_scalar *pF3, br_scalar *pF4, br_scalar *pF5) {
    char s[256];
    char *str;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", pF, pF1, pF2, pF3, pF4, pF5);
    NOT_IMPLEMENTED();
}

// Offset: 35792
// Size: 0x98
//IDA: void __usercall GetNScalars(FILE *pF@<EAX>, int pNumber@<EDX>, br_scalar *pScalars@<EBX>)
void GetNScalars(FILE *pF, int pNumber, br_scalar *pScalars) {
    char s[256];
    char *str;
    float fleurting_point_numero;
    int i;
    LOG_TRACE("(%p, %d, %p)", pF, pNumber, pScalars);
    NOT_IMPLEMENTED();
}

// Offset: 35944
// Size: 0x9d
//IDA: void __usercall GetPairOfFloatPercents(FILE *pF@<EAX>, float *pF1@<EDX>, float *pF2@<EBX>)
void GetPairOfFloatPercents(FILE *pF, float *pF1, float *pF2) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p)", pF, pF1, pF2);
    NOT_IMPLEMENTED();
}

// Offset: 36104
// Size: 0xd0
//IDA: void __usercall GetThreeFloatPercents(FILE *pF@<EAX>, float *pF1@<EDX>, float *pF2@<EBX>, float *pF3@<ECX>)
void GetThreeFloatPercents(FILE *pF, float *pF1, float *pF2, float *pF3) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, %p, %p, %p)", pF, pF1, pF2, pF3);
    NOT_IMPLEMENTED();
}

// Offset: 36312
// Size: 0x52
//IDA: void __usercall GetAString(FILE *pF@<EAX>, char *pString@<EDX>)
void GetAString(FILE *pF, char *pString) {
    char s[256];
    char *str;
    LOG_TRACE("(%p, \"%s\")", pF, pString);
    NOT_IMPLEMENTED();
}

// Offset: 36396
// Size: 0x31
//IDA: void __cdecl AboutToLoadFirstCar()
void AboutToLoadFirstCar() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36448
// Size: 0x113
//IDA: void __usercall LoadOpponentsCars(tRace_info *pRace_info@<EAX>)
void LoadOpponentsCars(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 36724
// Size: 0xb8
//IDA: void __usercall DisposeOpponentsCars(tRace_info *pRace_info@<EAX>)
void DisposeOpponentsCars(tRace_info *pRace_info) {
    int i;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 36908
// Size: 0xd3
//IDA: void __cdecl LoadMiscStrings()
void LoadMiscStrings() {
    int i;
    FILE *f;
    char s[256];
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37120
// Size: 0x35
//IDA: void __usercall FillInRaceInfo(tRace_info *pThe_race@<EAX>)
void FillInRaceInfo(tRace_info *pThe_race) {
    LOG_TRACE("(%p)", pThe_race);
    NOT_IMPLEMENTED();
}

// Offset: 37176
// Size: 0x484
//IDA: FILE* __usercall OldDRfopen@<EAX>(char *pFilename@<EAX>, char *pMode@<EDX>)
FILE* OldDRfopen(char *pFilename, char *pMode) {
    FILE *fp;
    FILE *file_ptr;
    FILE *test1;
    FILE *test2;
    char *data_dir;
    tPath_name CD_dir;
    tPath_name path_file;
    tPath_name source_check;
    static int source_exists;
    int len;
    char __block0__ch;
    LOG_TRACE("(\"%s\", \"%s\")", pFilename, pMode);
    NOT_IMPLEMENTED();
}

// Offset: 38332
// Size: 0x2c
//IDA: void __cdecl AllowOpenToFail()
void AllowOpenToFail() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38376
// Size: 0x22
//IDA: void __cdecl DoNotAllowOpenToFail()
void DoNotAllowOpenToFail() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38412
// Size: 0xbd
//IDA: FILE* __usercall DRfopen@<EAX>(char *pFilename@<EAX>, char *pMode@<EDX>)
FILE* DRfopen(char *pFilename, char *pMode) {
    FILE *result;
    tPath_name CD_dir;
    char msg[336];
    LOG_TRACE("(\"%s\", \"%s\")", pFilename, pMode);
    NOT_IMPLEMENTED();
}

// Offset: 38604
// Size: 0xb2
//IDA: int __usercall GetCDPathFromPathsTxtFile@<EAX>(char *pPath_name@<EAX>)
int GetCDPathFromPathsTxtFile(char *pPath_name) {
    static int got_it_already;
    static tPath_name cd_pathname;
    FILE *paths_txt_fp;
    tPath_name paths_txt;
    LOG_TRACE("(\"%s\")", pPath_name);
    NOT_IMPLEMENTED();
}

// Offset: 38784
// Size: 0x2c
//IDA: int __cdecl TestForOriginalCarmaCDinDrive()
int TestForOriginalCarmaCDinDrive() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38828
// Size: 0x2d
//IDA: int __cdecl OriginalCarmaCDinDrive()
int OriginalCarmaCDinDrive() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38876
// Size: 0x3f
//IDA: int __cdecl CarmaCDinDriveOrFullGameInstalled()
int CarmaCDinDriveOrFullGameInstalled() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38940
// Size: 0xbf
//IDA: void __usercall ReadNetworkSettings(FILE *pF@<EAX>, tNet_game_options *pOptions@<EDX>)
void ReadNetworkSettings(FILE *pF, tNet_game_options *pOptions) {
    LOG_TRACE("(%p, %p)", pF, pOptions);
    NOT_IMPLEMENTED();
}

// Offset: 39132
// Size: 0x17a
//IDA: int __usercall PrintNetOptions@<EAX>(FILE *pF@<EAX>, int pIndex@<EDX>)
int PrintNetOptions(FILE *pF, int pIndex) {
    LOG_TRACE("(%p, %d)", pF, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 39512
// Size: 0x576
//IDA: int __cdecl SaveOptions()
int SaveOptions() {
    tPath_name the_path;
    FILE *f;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 40912
// Size: 0x66b
//IDA: int __cdecl RestoreOptions()
int RestoreOptions() {
    tPath_name the_path;
    FILE *f;
    char line[80];
    char token[80];
    char *s;
    float arg;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 42556
// Size: 0x4b
//IDA: void __cdecl InitFunkGrooveFlags()
void InitFunkGrooveFlags() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

