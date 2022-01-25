#include "utility.h"

int gIn_check_quit;
tU32 gLost_time;
tU32 gLong_key[4];
tU32 gOther_long_key[4];
int gEncryption_method;
char *gMisc_strings[250];
br_pixelmap *g16bit_palette;
br_pixelmap *gSource_for_16bit_palette;

// Offset: 0
// Size: 0x90
//IDA: int __cdecl CheckQuit()
int CheckQuit() {
    int got_as_far_as_verify;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 144
// Size: 0x32
//IDA: double __cdecl sqr(double pN)
double sqr(double pN) {
    LOG_TRACE("(%d)", pN);
    NOT_IMPLEMENTED();
}

// Offset: 196
// Size: 0x21e
//IDA: void __usercall EncodeLine(char *pS@<EAX>)
void EncodeLine(char *pS) {
    int len;
    int seed;
    int i;
    char *key;
    unsigned char c;
    FILE *test;
    char __block0__s[256];
    char __block0__the_path[256];
    LOG_TRACE("(\"%s\")", pS);
    NOT_IMPLEMENTED();
}

// Offset: 740
// Size: 0x49
//IDA: int __usercall IRandomBetween@<EAX>(int pA@<EAX>, int pB@<EDX>)
int IRandomBetween(int pA, int pB) {
    int num;
    char s[32];
    LOG_TRACE("(%d, %d)", pA, pB);
    NOT_IMPLEMENTED();
}

// Offset: 816
// Size: 0x4f
//IDA: int __usercall PercentageChance@<EAX>(int pC@<EAX>)
int PercentageChance(int pC) {
    LOG_TRACE("(%d)", pC);
    NOT_IMPLEMENTED();
}

// Offset: 896
// Size: 0x38
//IDA: int __usercall IRandomPosNeg@<EAX>(int pN@<EAX>)
int IRandomPosNeg(int pN) {
    LOG_TRACE("(%d)", pN);
    NOT_IMPLEMENTED();
}

// Offset: 952
// Size: 0x48
//IDA: float __cdecl FRandomBetween(float pA, float pB)
float FRandomBetween(float pA, float pB) {
    LOG_TRACE("(%f, %f)", pA, pB);
    NOT_IMPLEMENTED();
}

// Offset: 1024
// Size: 0x45
//IDA: float __cdecl FRandomPosNeg(float pN)
float FRandomPosNeg(float pN) {
    LOG_TRACE("(%f)", pN);
    NOT_IMPLEMENTED();
}

// Offset: 1096
// Size: 0x43
//IDA: br_scalar __cdecl SRandomBetween(br_scalar pA, br_scalar pB)
br_scalar SRandomBetween(br_scalar pA, br_scalar pB) {
    LOG_TRACE("(%f, %f)", pA, pB);
    NOT_IMPLEMENTED();
}

// Offset: 1164
// Size: 0x45
//IDA: br_scalar __cdecl SRandomPosNeg(br_scalar pN)
br_scalar SRandomPosNeg(br_scalar pN) {
    LOG_TRACE("(%f)", pN);
    NOT_IMPLEMENTED();
}

// Offset: 1236
// Size: 0x1fa
//IDA: char* __usercall GetALineWithNoPossibleService@<EAX>(FILE *pF@<EAX>, unsigned char *pS@<EDX>)
char* GetALineWithNoPossibleService(FILE *pF, unsigned char *pS) {
    signed char *result;
    signed char s[256];
    int ch;
    int len;
    int i;
    LOG_TRACE("(%p, %p)", pF, pS);
    NOT_IMPLEMENTED();
}

// Offset: 1744
// Size: 0x3c
//IDA: char* __usercall GetALineAndDontArgue@<EAX>(FILE *pF@<EAX>, char *pS@<EDX>)
char* GetALineAndDontArgue(FILE *pF, char *pS) {
    LOG_TRACE("(%p, \"%s\")", pF, pS);
    NOT_IMPLEMENTED();
}

// Offset: 1804
// Size: 0x56
//IDA: void __usercall PathCat(char *pDestn_str@<EAX>, char *pStr_1@<EDX>, char *pStr_2@<EBX>)
void PathCat(char *pDestn_str, char *pStr_1, char *pStr_2) {
    LOG_TRACE("(\"%s\", \"%s\", \"%s\")", pDestn_str, pStr_1, pStr_2);
    NOT_IMPLEMENTED();
}

// Offset: 1892
// Size: 0x60
//IDA: int __cdecl Chance(float pChance_per_second, int pPeriod)
int Chance(float pChance_per_second, int pPeriod) {
    LOG_TRACE("(%f, %d)", pChance_per_second, pPeriod);
    NOT_IMPLEMENTED();
}

// Offset: 1988
// Size: 0x60
//IDA: float __cdecl tandeg(float pAngle)
float tandeg(float pAngle) {
    LOG_TRACE("(%f)", pAngle);
    NOT_IMPLEMENTED();
}

// Offset: 2084
// Size: 0x50
//IDA: tU32 __usercall GetFileLength@<EAX>(FILE *pF@<EAX>)
tU32 GetFileLength(FILE *pF) {
    tU32 the_size;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 2164
// Size: 0x44
//IDA: int __usercall BooleanTo1Or0@<EAX>(int pB@<EAX>)
int BooleanTo1Or0(int pB) {
    LOG_TRACE("(%d)", pB);
    NOT_IMPLEMENTED();
}

// Offset: 2232
// Size: 0x72
//IDA: br_pixelmap* __usercall DRPixelmapAllocate@<EAX>(br_uint_8 pType@<EAX>, br_uint_16 pW@<EDX>, br_uint_16 pH@<EBX>, void *pPixels@<ECX>, int pFlags)
br_pixelmap* DRPixelmapAllocate(br_uint_8 pType, br_uint_16 pW, br_uint_16 pH, void *pPixels, int pFlags) {
    br_pixelmap *the_map;
    LOG_TRACE("(%d, %d, %d, %p, %d)", pType, pW, pH, pPixels, pFlags);
    NOT_IMPLEMENTED();
}

// Offset: 2348
// Size: 0x76
//IDA: br_pixelmap* __usercall DRPixelmapAllocateSub@<EAX>(br_pixelmap *pPm@<EAX>, br_uint_16 pX@<EDX>, br_uint_16 pY@<EBX>, br_uint_16 pW@<ECX>, br_uint_16 pH)
br_pixelmap* DRPixelmapAllocateSub(br_pixelmap *pPm, br_uint_16 pX, br_uint_16 pY, br_uint_16 pW, br_uint_16 pH) {
    br_pixelmap *the_map;
    LOG_TRACE("(%p, %d, %d, %d, %d)", pPm, pX, pY, pW, pH);
    NOT_IMPLEMENTED();
}

// Offset: 2468
// Size: 0xc3
//IDA: br_pixelmap* __usercall DRPixelmapMatchSized@<EAX>(br_pixelmap *pSrc@<EAX>, tU8 pMatch_type@<EDX>, tS32 pWidth@<EBX>, tS32 pHeight@<ECX>)
br_pixelmap* DRPixelmapMatchSized(br_pixelmap *pSrc, tU8 pMatch_type, tS32 pWidth, tS32 pHeight) {
    br_pixelmap *result;
    LOG_TRACE("(%p, %d, %d, %d)", pSrc, pMatch_type, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 2664
// Size: 0x165
//IDA: void __usercall CopyDoubled8BitTo16BitRectangle(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, int pSrc_width@<EBX>, int pSrc_height@<ECX>, int pDst_x, int pDst_y, br_pixelmap *pPalette)
void CopyDoubled8BitTo16BitRectangle(br_pixelmap *pDst, br_pixelmap *pSrc, int pSrc_width, int pSrc_height, int pDst_x, int pDst_y, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start0;
    tU16 *dst_start1;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %p, %d, %d, %d, %d, %p)", pDst, pSrc, pSrc_width, pSrc_height, pDst_x, pDst_y, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 3024
// Size: 0x106
//IDA: br_pixelmap* __usercall Scale8BitPixelmap@<EAX>(br_pixelmap *pSrc@<EAX>, int pWidth@<EDX>, int pHeight@<EBX>)
br_pixelmap* Scale8BitPixelmap(br_pixelmap *pSrc, int pWidth, int pHeight) {
    br_pixelmap *result;
    int x;
    int y;
    tU8 *src_pixels;
    tU8 *dst_pixels;
    LOG_TRACE("(%p, %d, %d)", pSrc, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 3288
// Size: 0x186
//IDA: br_pixelmap* __usercall Tile8BitPixelmap@<EAX>(br_pixelmap *pSrc@<EAX>, int pN@<EDX>)
br_pixelmap* Tile8BitPixelmap(br_pixelmap *pSrc, int pN) {
    br_pixelmap *result;
    int new_width;
    int new_height;
    int x;
    int y2;
    int y;
    tU8 *src_pixels;
    tU8 *dst_pixels;
    LOG_TRACE("(%p, %d)", pSrc, pN);
    NOT_IMPLEMENTED();
}

// Offset: 3680
// Size: 0x53
//IDA: tException_list __usercall FindExceptionInList@<EAX>(char *pName@<EAX>, tException_list pList@<EDX>)
tException_list FindExceptionInList(char *pName, tException_list pList) {
    LOG_TRACE("(\"%s\", %d)", pName, pList);
    NOT_IMPLEMENTED();
}

// Offset: 3764
// Size: 0x1ec
//IDA: br_pixelmap* __usercall PurifiedPixelmap@<EAX>(br_pixelmap *pSrc@<EAX>)
br_pixelmap* PurifiedPixelmap(br_pixelmap *pSrc) {
    br_pixelmap *intermediate;
    br_pixelmap *result;
    int new_width;
    int new_height;
    tException_list e;
    LOG_TRACE("(%p)", pSrc);
    NOT_IMPLEMENTED();
}

// Offset: 4256
// Size: 0x69
//IDA: br_pixelmap* __usercall DRPixelmapLoad@<EAX>(char *pFile_name@<EAX>)
br_pixelmap* DRPixelmapLoad(char *pFile_name) {
    br_pixelmap *the_map;
    LOG_TRACE("(\"%s\")", pFile_name);
    NOT_IMPLEMENTED();
}

// Offset: 4364
// Size: 0xae
//IDA: br_uint_32 __usercall DRPixelmapLoadMany@<EAX>(char *pFile_name@<EAX>, br_pixelmap **pPixelmaps@<EDX>, br_uint_16 pNum@<EBX>)
br_uint_32 DRPixelmapLoadMany(char *pFile_name, br_pixelmap **pPixelmaps, br_uint_16 pNum) {
    br_pixelmap *the_map;
    int number_loaded;
    int i;
    LOG_TRACE("(\"%s\", %p, %d)", pFile_name, pPixelmaps, pNum);
    NOT_IMPLEMENTED();
}

// Offset: 4540
// Size: 0x43
//IDA: void __usercall WaitFor(tU32 pDelay@<EAX>)
void WaitFor(tU32 pDelay) {
    tU32 start_time;
    LOG_TRACE("(%d)", pDelay);
    NOT_IMPLEMENTED();
}

// Offset: 4608
// Size: 0x88
//IDA: br_uint_32 __usercall DRActorEnumRecurse@<EAX>(br_actor *pActor@<EAX>, br_actor_enum_cbfn *callback@<EDX>, void *arg@<EBX>)
br_uint_32 DRActorEnumRecurse(br_actor *pActor, br_actor_enum_cbfn *callback, void *arg) {
    br_uint_32 result;
    LOG_TRACE("(%p, %p, %p)", pActor, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 4744
// Size: 0x4d
//IDA: br_uint_32 __cdecl CompareActorID(br_actor *pActor, void *pArg)
br_uint_32 CompareActorID(br_actor *pActor, void *pArg) {
    LOG_TRACE("(%p, %p)", pActor, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 4824
// Size: 0x3c
//IDA: br_actor* __usercall DRActorFindRecurse@<EAX>(br_actor *pSearch_root@<EAX>, char *pName@<EDX>)
br_actor* DRActorFindRecurse(br_actor *pSearch_root, char *pName) {
    LOG_TRACE("(%p, \"%s\")", pSearch_root, pName);
    NOT_IMPLEMENTED();
}

// Offset: 4884
// Size: 0x9c
//IDA: br_uint_32 __usercall DRActorEnumRecurseWithMat@<EAX>(br_actor *pActor@<EAX>, br_material *pMat@<EDX>, br_uint_32 (*pCall_back)(br_actor*, br_material*, void*)@<EBX>, void *pArg@<ECX>)
br_uint_32 DRActorEnumRecurseWithMat(br_actor *pActor, br_material *pMat, br_uint_32 (*pCall_back)(br_actor*, br_material*, void*), void *pArg) {
    br_uint_32 result;
    LOG_TRACE("(%p, %p, %p, %p)", pActor, pMat, pCall_back, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 5040
// Size: 0xbc
//IDA: br_uint_32 __usercall DRActorEnumRecurseWithTrans@<EAX>(br_actor *pActor@<EAX>, br_matrix34 *pMatrix@<EDX>, br_uint_32 (*pCall_back)(br_actor*, br_matrix34*, void*)@<EBX>, void *pArg@<ECX>)
br_uint_32 DRActorEnumRecurseWithTrans(br_actor *pActor, br_matrix34 *pMatrix, br_uint_32 (*pCall_back)(br_actor*, br_matrix34*, void*), void *pArg) {
    br_uint_32 result;
    br_matrix34 combined_transform;
    LOG_TRACE("(%p, %p, %p, %p)", pActor, pMatrix, pCall_back, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 5228
// Size: 0x59
//IDA: int __usercall sign@<EAX>(int pNumber@<EAX>)
int sign(int pNumber) {
    LOG_TRACE("(%d)", pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 5320
// Size: 0x62
//IDA: float __cdecl fsign(float pNumber)
float fsign(float pNumber) {
    LOG_TRACE("(%f)", pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 5420
// Size: 0xd2
//IDA: FILE* __usercall OpenUniqueFileB@<EAX>(char *pPrefix@<EAX>, char *pExtension@<EDX>)
FILE* OpenUniqueFileB(char *pPrefix, char *pExtension) {
    int index;
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("(\"%s\", \"%s\")", pPrefix, pExtension);
    NOT_IMPLEMENTED();
}

// Offset: 5632
// Size: 0x23c
//IDA: void __usercall PrintScreenFile(FILE *pF@<EAX>)
void PrintScreenFile(FILE *pF) {
    int i;
    int j;
    int bit_map_size;
    int offset;
    tU8 *pixel_ptr;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 6204
// Size: 0x22a
//IDA: void __usercall PrintScreenFile16(FILE *pF@<EAX>)
void PrintScreenFile16(FILE *pF) {
    int i;
    int j;
    int bit_map_size;
    int offset;
    tU8 *pixel_ptr;
    tU16 pixel;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 6760
// Size: 0x5f
//IDA: void __cdecl PrintScreen()
void PrintScreen() {
    FILE *f;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6856
// Size: 0x59
//IDA: tU32 __cdecl GetTotalTime()
tU32 GetTotalTime() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6948
// Size: 0x33
//IDA: tU32 __cdecl GetRaceTime()
tU32 GetRaceTime() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7000
// Size: 0x2e
//IDA: void __usercall AddLostTime(tU32 pLost_time@<EAX>)
void AddLostTime(tU32 pLost_time) {
    LOG_TRACE("(%d)", pLost_time);
    NOT_IMPLEMENTED();
}

// Offset: 7048
// Size: 0xd0
//IDA: void __usercall TimerString(tU32 pTime@<EAX>, char *pStr@<EDX>, int pFudge_colon@<EBX>, int pForce_colon@<ECX>)
void TimerString(tU32 pTime, char *pStr, int pFudge_colon, int pForce_colon) {
    int seconds;
    LOG_TRACE("(%d, \"%s\", %d, %d)", pTime, pStr, pFudge_colon, pForce_colon);
    NOT_IMPLEMENTED();
}

// Offset: 7256
// Size: 0x37
//IDA: char* __usercall GetMiscString@<EAX>(int pIndex@<EAX>)
char* GetMiscString(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7312
// Size: 0x3a
//IDA: void __usercall GetCopyOfMiscString(int pIndex@<EAX>, char *pStr@<EDX>)
void GetCopyOfMiscString(int pIndex, char *pStr) {
    LOG_TRACE("(%d, \"%s\")", pIndex, pStr);
    NOT_IMPLEMENTED();
}

// Offset: 7372
// Size: 0x71
//IDA: int __usercall Flash@<EAX>(tU32 pPeriod@<EAX>, tU32 *pLast_change@<EDX>, int *pCurrent_state@<EBX>)
int Flash(tU32 pPeriod, tU32 *pLast_change, int *pCurrent_state) {
    tU32 the_time;
    LOG_TRACE("(%d, %p, %p)", pPeriod, pLast_change, pCurrent_state);
    NOT_IMPLEMENTED();
}

// Offset: 7488
// Size: 0xe1
//IDA: void __usercall MaterialCopy(br_material *pDst@<EAX>, br_material *pSrc@<EDX>)
void MaterialCopy(br_material *pDst, br_material *pSrc) {
    LOG_TRACE("(%p, %p)", pDst, pSrc);
    NOT_IMPLEMENTED();
}

// Offset: 7716
// Size: 0x8b
//IDA: double __usercall RGBDifferenceSqr@<ST0>(tRGB_colour *pColour_1@<EAX>, tRGB_colour *pColour_2@<EDX>)
double RGBDifferenceSqr(tRGB_colour *pColour_1, tRGB_colour *pColour_2) {
    LOG_TRACE("(%p, %p)", pColour_1, pColour_2);
    NOT_IMPLEMENTED();
}

// Offset: 7856
// Size: 0xc8
//IDA: int __usercall FindBestMatch@<EAX>(tRGB_colour *pRGB_colour@<EAX>, br_pixelmap *pPalette@<EDX>)
int FindBestMatch(tRGB_colour *pRGB_colour, br_pixelmap *pPalette) {
    int n;
    int near_c;
    double min_d;
    double d;
    tRGB_colour trial_RGB;
    br_colour *dp;
    LOG_TRACE("(%p, %p)", pRGB_colour, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 8056
// Size: 0xe8
//IDA: void __usercall BuildShadeTablePath(char *pThe_path@<EAX>, int pR@<EDX>, int pG@<EBX>, int pB@<ECX>)
void BuildShadeTablePath(char *pThe_path, int pR, int pG, int pB) {
    char s[32];
    LOG_TRACE("(\"%s\", %d, %d, %d)", pThe_path, pR, pG, pB);
    NOT_IMPLEMENTED();
}

// Offset: 8288
// Size: 0x50
//IDA: br_pixelmap* __usercall LoadGeneratedShadeTable@<EAX>(int pR@<EAX>, int pG@<EDX>, int pB@<EBX>)
br_pixelmap* LoadGeneratedShadeTable(int pR, int pG, int pB) {
    char the_path[256];
    LOG_TRACE("(%d, %d, %d)", pR, pG, pB);
    NOT_IMPLEMENTED();
}

// Offset: 8368
// Size: 0x4f
//IDA: void __usercall SaveGeneratedShadeTable(br_pixelmap *pThe_table@<EAX>, int pR@<EDX>, int pG@<EBX>, int pB@<ECX>)
void SaveGeneratedShadeTable(br_pixelmap *pThe_table, int pR, int pG, int pB) {
    char the_path[256];
    LOG_TRACE("(%p, %d, %d, %d)", pThe_table, pR, pG, pB);
    NOT_IMPLEMENTED();
}

// Offset: 8448
// Size: 0x6a
//IDA: br_pixelmap* __usercall GenerateShadeTable@<EAX>(int pHeight@<EAX>, br_pixelmap *pPalette@<EDX>, int pRed_mix@<EBX>, int pGreen_mix@<ECX>, int pBlue_mix, float pQuarter, float pHalf, float pThree_quarter)
br_pixelmap* GenerateShadeTable(int pHeight, br_pixelmap *pPalette, int pRed_mix, int pGreen_mix, int pBlue_mix, float pQuarter, float pHalf, float pThree_quarter) {
    LOG_TRACE("(%d, %p, %d, %d, %d, %f, %f, %f)", pHeight, pPalette, pRed_mix, pGreen_mix, pBlue_mix, pQuarter, pHalf, pThree_quarter);
    NOT_IMPLEMENTED();
}

// Offset: 8556
// Size: 0x2f9
//IDA: br_pixelmap* __usercall GenerateDarkenedShadeTable@<EAX>(int pHeight@<EAX>, br_pixelmap *pPalette@<EDX>, int pRed_mix@<EBX>, int pGreen_mix@<ECX>, int pBlue_mix, float pQuarter, float pHalf, float pThree_quarter, br_scalar pDarken)
br_pixelmap* GenerateDarkenedShadeTable(int pHeight, br_pixelmap *pPalette, int pRed_mix, int pGreen_mix, int pBlue_mix, float pQuarter, float pHalf, float pThree_quarter, br_scalar pDarken) {
    br_pixelmap *the_table;
    tRGB_colour the_RGB;
    tRGB_colour new_RGB;
    tRGB_colour ref_col;
    br_colour *cp;
    char *tab_ptr;
    char *shade_ptr;
    double f_i;
    double f_total_minus_1;
    double ratio1;
    double ratio2;
    int i;
    int c;
    LOG_TRACE("(%d, %p, %d, %d, %d, %f, %f, %f, %f)", pHeight, pPalette, pRed_mix, pGreen_mix, pBlue_mix, pQuarter, pHalf, pThree_quarter, pDarken);
    NOT_IMPLEMENTED();
}

// Offset: 9320
// Size: 0x5c
//IDA: void __cdecl PossibleService()
void PossibleService() {
    tU32 time;
    static tU32 last_service;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9412
// Size: 0xc0
//IDA: void __usercall DRMatrix34TApplyP(br_vector3 *pA@<EAX>, br_vector3 *pB@<EDX>, br_matrix34 *pC@<EBX>)
void DRMatrix34TApplyP(br_vector3 *pA, br_vector3 *pB, br_matrix34 *pC) {
    br_scalar t1;
    br_scalar t2;
    br_scalar t3;
    LOG_TRACE("(%p, %p, %p)", pA, pB, pC);
    NOT_IMPLEMENTED();
}

// Offset: 9604
// Size: 0x84
//IDA: tU16 __usercall PaletteEntry16Bit@<AX>(br_pixelmap *pPal@<EAX>, int pEntry@<EDX>)
tU16 PaletteEntry16Bit(br_pixelmap *pPal, int pEntry) {
    tU32 *src_entry;
    int red;
    int green;
    int blue;
    LOG_TRACE("(%p, %d)", pPal, pEntry);
    NOT_IMPLEMENTED();
}

// Offset: 9736
// Size: 0xd2
//IDA: br_pixelmap* __usercall PaletteOf16Bits@<EAX>(br_pixelmap *pSrc@<EAX>)
br_pixelmap* PaletteOf16Bits(br_pixelmap *pSrc) {
    tU16 *dst_entry;
    int value;
    LOG_TRACE("(%p)", pSrc);
    NOT_IMPLEMENTED();
}

// Offset: 9948
// Size: 0xdb
//IDA: void __usercall Copy8BitTo16Bit(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, br_pixelmap *pPalette@<EBX>)
void Copy8BitTo16Bit(br_pixelmap *pDst, br_pixelmap *pSrc, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %p, %p)", pDst, pSrc, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 10168
// Size: 0x22e
//IDA: void __usercall Copy8BitTo16BitRectangle(br_pixelmap *pDst@<EAX>, tS16 pDst_x@<EDX>, tS16 pDst_y@<EBX>, br_pixelmap *pSrc@<ECX>, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette)
void Copy8BitTo16BitRectangle(br_pixelmap *pDst, tS16 pDst_x, tS16 pDst_y, br_pixelmap *pSrc, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %p)", pDst, pDst_x, pDst_y, pSrc, pSrc_x, pSrc_y, pWidth, pHeight, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 10728
// Size: 0x206
//IDA: void __usercall Copy8BitTo16BitRectangleWithTransparency(br_pixelmap *pDst@<EAX>, tS16 pDst_x@<EDX>, tS16 pDst_y@<EBX>, br_pixelmap *pSrc@<ECX>, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette)
void Copy8BitTo16BitRectangleWithTransparency(br_pixelmap *pDst, tS16 pDst_x, tS16 pDst_y, br_pixelmap *pSrc, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %p)", pDst, pDst_x, pDst_y, pSrc, pSrc_x, pSrc_y, pWidth, pHeight, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 11248
// Size: 0x117
//IDA: void __usercall Copy8BitToOnscreen16BitRectangleWithTransparency(br_pixelmap *pDst@<EAX>, tS16 pDst_x@<EDX>, tS16 pDst_y@<EBX>, br_pixelmap *pSrc@<ECX>, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette)
void Copy8BitToOnscreen16BitRectangleWithTransparency(br_pixelmap *pDst, tS16 pDst_x, tS16 pDst_y, br_pixelmap *pSrc, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %p)", pDst, pDst_x, pDst_y, pSrc, pSrc_x, pSrc_y, pWidth, pHeight, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 11528
// Size: 0x259
//IDA: void __usercall Copy8BitRectangleTo16BitRhombusWithTransparency(br_pixelmap *pDst@<EAX>, tS16 pDst_x@<EDX>, tS16 pDst_y@<EBX>, br_pixelmap *pSrc@<ECX>, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, tX1616 pShear, br_pixelmap *pPalette)
void Copy8BitRectangleTo16BitRhombusWithTransparency(br_pixelmap *pDst, tS16 pDst_x, tS16 pDst_y, br_pixelmap *pSrc, tS16 pSrc_x, tS16 pSrc_y, tS16 pWidth, tS16 pHeight, tX1616 pShear, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src_start;
    tU16 *dst_start;
    tU16 *palette_entry;
    tX1616 total_shear;
    tS16 sheared_x;
    tS16 clipped_src_x;
    tS16 clipped_width;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %d, %p)", pDst, pDst_x, pDst_y, pSrc, pSrc_x, pSrc_y, pWidth, pHeight, pShear, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 12132
// Size: 0xad
//IDA: void __usercall DRPixelmapRectangleCopy(br_pixelmap *dst@<EAX>, br_int_16 dx@<EDX>, br_int_16 dy@<EBX>, br_pixelmap *src@<ECX>, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h)
void DRPixelmapRectangleCopy(br_pixelmap *dst, br_int_16 dx, br_int_16 dy, br_pixelmap *src, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h) {
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", dst, dx, dy, src, sx, sy, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 12308
// Size: 0x6b
//IDA: void __usercall DRPixelmapCopy(br_pixelmap *dst@<EAX>, br_pixelmap *src@<EDX>)
void DRPixelmapCopy(br_pixelmap *dst, br_pixelmap *src) {
    LOG_TRACE("(%p, %p)", dst, src);
    NOT_IMPLEMENTED();
}

// Offset: 12416
// Size: 0x52
//IDA: void __usercall DRPixelmapRectangleFill(br_pixelmap *dst@<EAX>, br_int_16 x@<EDX>, br_int_16 y@<EBX>, br_uint_16 w@<ECX>, br_uint_16 h, br_uint_32 colour)
void DRPixelmapRectangleFill(br_pixelmap *dst, br_int_16 x, br_int_16 y, br_uint_16 w, br_uint_16 h, br_uint_32 colour) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x, y, w, h, colour);
    NOT_IMPLEMENTED();
}

// Offset: 12500
// Size: 0x9c
//IDA: int __usercall NormalSideOfPlane@<EAX>(br_vector3 *pPoint@<EAX>, br_vector3 *pNormal@<EDX>, br_scalar pD)
int NormalSideOfPlane(br_vector3 *pPoint, br_vector3 *pNormal, br_scalar pD) {
    br_scalar numer;
    br_scalar denom;
    LOG_TRACE("(%p, %p, %f)", pPoint, pNormal, pD);
    NOT_IMPLEMENTED();
}

// Offset: 12656
// Size: 0x15f
//IDA: br_material* __usercall DRMaterialClone@<EAX>(br_material *pMaterial@<EAX>)
br_material* DRMaterialClone(br_material *pMaterial) {
    br_material *the_material;
    char s[256];
    static int name_suffix;
    LOG_TRACE("(%p)", pMaterial);
    NOT_IMPLEMENTED();
}

// Offset: 13008
// Size: 0x5d
//IDA: void __usercall StripCR(char *s@<EAX>)
void StripCR(char *s) {
    char *pos;
    LOG_TRACE("(\"%s\")", s);
    NOT_IMPLEMENTED();
}

// Offset: 13104
// Size: 0x84
//IDA: void __cdecl SubsStringJob(char *pStr, ...)
void SubsStringJob(char *pStr, ...) {
    char *sub_str;
    char temp_str[256];
    char *sub_pt;
    va_list ap;
    LOG_TRACE("(\"%s\")", pStr);
    NOT_IMPLEMENTED();
}

// Offset: 13236
// Size: 0x1c6
//IDA: void __usercall DecodeLine2(char *pS@<EAX>)
void DecodeLine2(char *pS) {
    int len;
    int seed;
    int i;
    unsigned char c;
    char *key;
    LOG_TRACE("(\"%s\")", pS);
    NOT_IMPLEMENTED();
}

// Offset: 13692
// Size: 0x130
//IDA: void __usercall EncodeLine2(char *pS@<EAX>)
void EncodeLine2(char *pS) {
    int len;
    int seed;
    int i;
    int count;
    unsigned char c;
    char *key;
    LOG_TRACE("(\"%s\")", pS);
    NOT_IMPLEMENTED();
}

// Offset: 13996
// Size: 0x229
//IDA: void __usercall EncodeFile(char *pThe_path@<EAX>)
void EncodeFile(char *pThe_path) {
    FILE *f;
    FILE *d;
    char line[257];
    char new_file[256];
    char *s;
    char *result;
    int ch;
    int decode;
    int len;
    int count;
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 14552
// Size: 0x201
//IDA: void __usercall EncodeFileWrapper(char *pThe_path@<EAX>)
void EncodeFileWrapper(char *pThe_path) {
    int len;
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 15068
// Size: 0x48
//IDA: void __usercall EncodeAllFilesInDirectory(char *pThe_path@<EAX>)
void EncodeAllFilesInDirectory(char *pThe_path) {
    char s[256];
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 15140
// Size: 0x59
//IDA: void __usercall SkipNLines(FILE *pF@<EAX>)
void SkipNLines(FILE *pF) {
    int i;
    int count;
    char s[256];
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 15232
// Size: 0x76
//IDA: int __usercall DRStricmp@<EAX>(char *p1@<EAX>, char *p2@<EDX>)
int DRStricmp(char *p1, char *p2) {
    int val;
    LOG_TRACE("(\"%s\", \"%s\")", p1, p2);
    NOT_IMPLEMENTED();
}

// Offset: 15352
// Size: 0x22f
//IDA: void __usercall GlorifyMaterial(br_material **pArray@<EAX>, int pCount@<EDX>)
void GlorifyMaterial(br_material **pArray, int pCount) {
    int i;
    int c;
    br_pixelmap *big_tile;
    tException_list e;
    LOG_TRACE("(%p, %d)", pArray, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 15912
// Size: 0xb2
//IDA: void __usercall WhitenVertexRGB(br_model **pArray@<EAX>, int pN@<EDX>)
void WhitenVertexRGB(br_model **pArray, int pN) {
    int m;
    int v;
    br_vertex *vertex;
    LOG_TRACE("(%p, %d)", pArray, pN);
    NOT_IMPLEMENTED();
}

// Offset: 16092
// Size: 0xef
//IDA: void __usercall NobbleNonzeroBlacks(br_pixelmap *pPalette@<EAX>)
void NobbleNonzeroBlacks(br_pixelmap *pPalette) {
    tU32 red;
    tU32 green;
    tU32 blue;
    tU32 value;
    tU32 *palette_entry;
    tU32 frobbed;
    LOG_TRACE("(%p)", pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 16332
// Size: 0x37
//IDA: int __usercall PDCheckDriveExists@<EAX>(char *pThe_path@<EAX>)
int PDCheckDriveExists(char *pThe_path) {
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 16388
// Size: 0x66
//IDA: int __usercall OpacityInPrims@<EAX>(br_token_value *pPrims@<EAX>)
int OpacityInPrims(br_token_value *pPrims) {
    LOG_TRACE("(%p)", pPrims);
    NOT_IMPLEMENTED();
}

// Offset: 16492
// Size: 0x61
//IDA: int __usercall AlreadyBlended@<EAX>(br_material *pMaterial@<EAX>)
int AlreadyBlended(br_material *pMaterial) {
    LOG_TRACE("(%p)", pMaterial);
    NOT_IMPLEMENTED();
}

// Offset: 16592
// Size: 0x94
//IDA: void __usercall BlendifyMaterialTablishly(br_material *pMaterial@<EAX>, int pPercent@<EDX>)
void BlendifyMaterialTablishly(br_material *pMaterial, int pPercent) {
    char *s;
    LOG_TRACE("(%p, %d)", pMaterial, pPercent);
    NOT_IMPLEMENTED();
}

// Offset: 16740
// Size: 0x6e
//IDA: void __usercall BlendifyMaterialPrimitively(br_material *pMaterial@<EAX>, int pPercent@<EDX>)
void BlendifyMaterialPrimitively(br_material *pMaterial, int pPercent) {
    static br_token_value alpha25[3];
    static br_token_value alpha50[3];
    static br_token_value alpha75[3];
    LOG_TRACE("(%p, %d)", pMaterial, pPercent);
    NOT_IMPLEMENTED();
}

// Offset: 16852
// Size: 0x49
//IDA: void __usercall BlendifyMaterial(br_material *pMaterial@<EAX>, int pPercent@<EDX>)
void BlendifyMaterial(br_material *pMaterial, int pPercent) {
    LOG_TRACE("(%p, %d)", pMaterial, pPercent);
    NOT_IMPLEMENTED();
}

