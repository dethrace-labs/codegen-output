#include "flicplay.h"

int gPalette_allocate_count;
int gPalette_fuck_prevention;
int gDark_mode;
int gTransparency_on;
int gPanel_flic_disable;
int gPending_flic;
int gPlay_from_disk;
int gTrans_enabled;
br_pixelmap *gPanel_buffer[2];
tU32 gSound_time;
tFlic_spec gMain_flic_list[372];
int gFlic_bunch0[29];
int gFlic_bunch1[31];
int gFlic_bunch2[8];
int gFlic_bunch3[13];
int gFlic_bunch4[22];
int gFlic_bunch5[5];
int gFlic_bunch6[51];
int gFlic_bunch7[7];
int gFlic_bunch8[16];
tFlic_bunch gFlic_bunch[9];
char gLast_flic_name[14];
tU32 gPanel_flic_data_length[2];
tU32 gLast_panel_frame_time[2];
tU8 *gPanel_flic_data[2];
int gPanel_flic_top[2];
tFlic_descriptor gPanel_flic[2];
int gPanel_flic_left[2];
int gPending_pending_flic;
int gSound_ID;
int gTranslation_count;
tDR_font *gTrans_fonts[15];
tTranslation_record *gTranslations;
br_pixelmap *gPalette;
void *gPalette_pixels;
tFlic_descriptor *gFirst_flic;

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl EnableTranslationText()
void EnableTranslationText() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl DisableTranslationText()
void DisableTranslationText() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 88
// Size: 0x36
//IDA: void __usercall SetFlicSound(int pSound_ID@<EAX>, tU32 pSound_time@<EDX>)
void SetFlicSound(int pSound_ID, tU32 pSound_time) {
    LOG_TRACE("(%d, %d)", pSound_ID, pSound_time);
    NOT_IMPLEMENTED();
}

// Offset: 144
// Size: 0x2d
//IDA: int __cdecl TranslationMode()
int TranslationMode() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 192
// Size: 0x2c
//IDA: void __cdecl DontLetFlicFuckWithPalettes()
void DontLetFlicFuckWithPalettes() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 236
// Size: 0x2c
//IDA: void __cdecl LetFlicFuckWithPalettes()
void LetFlicFuckWithPalettes() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 280
// Size: 0x2c
//IDA: void __cdecl PlayFlicsInDarkness()
void PlayFlicsInDarkness() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 324
// Size: 0x31
//IDA: void __cdecl ReilluminateFlics()
void ReilluminateFlics() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 376
// Size: 0x2c
//IDA: void __cdecl TurnFlicTransparencyOn()
void TurnFlicTransparencyOn() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 420
// Size: 0x2c
//IDA: void __cdecl TurnFlicTransparencyOff()
void TurnFlicTransparencyOff() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 464
// Size: 0x2c
//IDA: void __cdecl PlayFlicsFromDisk()
void PlayFlicsFromDisk() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 508
// Size: 0x2c
//IDA: void __cdecl PlayFlicsFromMemory()
void PlayFlicsFromMemory() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 552
// Size: 0x2d
//IDA: int __cdecl FlicsPlayedFromDisk()
int FlicsPlayedFromDisk() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 600
// Size: 0x2c
//IDA: void __cdecl TurnOffPanelFlics()
void TurnOffPanelFlics() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 644
// Size: 0x2c
//IDA: void __cdecl TurnOnPanelFlics()
void TurnOnPanelFlics() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 688
// Size: 0x35
//IDA: int __usercall GetPanelFlicFrameIndex@<EAX>(int pIndex@<EAX>)
int GetPanelFlicFrameIndex(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 744
// Size: 0x5b
//IDA: void __cdecl FlicPaletteAllocate()
void FlicPaletteAllocate() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 836
// Size: 0x5c
//IDA: void __usercall AssertFlicPixelmap(tFlic_descriptor_ptr pFlic_info@<EAX>, br_pixelmap *pDest_pixelmap@<EDX>)
void AssertFlicPixelmap(tFlic_descriptor_ptr pFlic_info, br_pixelmap *pDest_pixelmap) {
    LOG_TRACE("(%d, %p)", pFlic_info, pDest_pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 928
// Size: 0x317
//IDA: int __usercall StartFlic@<EAX>(char *pFile_name@<EAX>, int pIndex@<EDX>, tFlic_descriptor_ptr pFlic_info@<EBX>, tU32 pSize@<ECX>, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, int pFrame_rate)
int StartFlic(char *pFile_name, int pIndex, tFlic_descriptor_ptr pFlic_info, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, int pFrame_rate) {
    tU16 claimed_speed;
    tU16 magic_number;
    tPath_name the_path;
    int total_size;
    LOG_TRACE("(\"%s\", %d, %d, %d, %p, %p, %d, %d, %d)", pFile_name, pIndex, pFlic_info, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, pFrame_rate);
    NOT_IMPLEMENTED();
}

// Offset: 1720
// Size: 0x60
//IDA: void __cdecl FreeFlicPaletteAllocate()
void FreeFlicPaletteAllocate() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1816
// Size: 0x76
//IDA: int __usercall EndFlic@<EAX>(tFlic_descriptor_ptr pFlic_info@<EAX>)
int EndFlic(tFlic_descriptor_ptr pFlic_info) {
    LOG_TRACE("(%d)", pFlic_info);
    NOT_IMPLEMENTED();
}

// Offset: 1936
// Size: 0x138
//IDA: void __usercall DoColourMap(tFlic_descriptor_ptr pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoColourMap(tFlic_descriptor_ptr pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int packet_count;
    int skip_count;
    int change_count;
    int current_colour;
    tU8 *palette_pixels;
    tU8 red;
    tU8 green;
    tU8 blue;
    LOG_TRACE("(%d, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 2248
// Size: 0x157
//IDA: void __usercall DoDifferenceX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDifferenceX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int first_line;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 2592
// Size: 0x179
//IDA: void __usercall DoDifferenceTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDifferenceTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int first_line;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 2972
// Size: 0x12f
//IDA: void __usercall DoColour256(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoColour256(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int packet_count;
    int skip_count;
    int change_count;
    int current_colour;
    tU8 *palette_pixels;
    tU8 red;
    tU8 green;
    tU8 blue;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 3276
// Size: 0x219
//IDA: void __usercall DoDeltaTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDeltaTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU8 the_byte;
    tU8 the_byte2;
    tU32 the_row_bytes;
    tU16 *line_pixel_ptr;
    tU16 the_word;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 3816
// Size: 0x162
//IDA: void __usercall DoDeltaX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDeltaX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int line_count;
    int number_of_packets;
    int skip_count;
    int size_count;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU16 *line_pixel_ptr;
    tU16 the_word;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 4172
// Size: 0x9c
//IDA: void __usercall DoBlack(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoBlack(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU32 *line_pixel_ptr;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 4328
// Size: 0x110
//IDA: void __usercall DoRunLengthX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoRunLengthX(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int number_of_packets;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 4600
// Size: 0x135
//IDA: void __usercall DoRunLengthTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoRunLengthTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int k;
    int number_of_packets;
    int size_count;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 4912
// Size: 0xa0
//IDA: void __usercall DoUncompressed(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoUncompressed(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU32 the_row_bytes;
    tU32 *line_pixel_ptr;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 5072
// Size: 0xb0
//IDA: void __usercall DoUncompressedTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoUncompressedTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    int i;
    int j;
    int the_width;
    tU8 *pixel_ptr;
    tU8 *line_pixel_ptr;
    tU8 the_byte;
    tU32 the_row_bytes;
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 5248
// Size: 0x34
//IDA: void __usercall DoMini(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoMini(tFlic_descriptor *pFlic_info, tU32 chunk_length) {
    LOG_TRACE("(%p, %d)", pFlic_info, chunk_length);
    NOT_IMPLEMENTED();
}

// Offset: 5300
// Size: 0x179
//IDA: void __usercall DrawTranslations(tFlic_descriptor *pFlic_info@<EAX>, int pLast_frame@<EDX>)
void DrawTranslations(tFlic_descriptor *pFlic_info, int pLast_frame) {
    tTranslation_record *trans;
    int i;
    int x;
    int width;
    int right_edge;
    LOG_TRACE("(%p, %d)", pFlic_info, pLast_frame);
    NOT_IMPLEMENTED();
}

// Offset: 5680
// Size: 0x30f
//IDA: int __usercall PlayNextFlicFrame2@<EAX>(tFlic_descriptor *pFlic_info@<EAX>, int pPanel_flic@<EDX>)
int PlayNextFlicFrame2(tFlic_descriptor *pFlic_info, int pPanel_flic) {
    tU32 frame_length;
    tU32 chunk_length;
    int chunk_count;
    int chunk_counter;
    int chunk_type;
    int magic_bytes;
    int last_frame;
    int data_knocked_off;
    int read_amount;
    LOG_TRACE("(%p, %d)", pFlic_info, pPanel_flic);
    NOT_IMPLEMENTED();
}

// Offset: 6464
// Size: 0x35
//IDA: int __usercall PlayNextFlicFrame@<EAX>(tFlic_descriptor *pFlic_info@<EAX>)
int PlayNextFlicFrame(tFlic_descriptor *pFlic_info) {
    LOG_TRACE("(%p)", pFlic_info);
    NOT_IMPLEMENTED();
}

// Offset: 6520
// Size: 0x127
//IDA: int __usercall PlayFlic@<EAX>(int pIndex@<EAX>, tU32 pSize@<EDX>, tS8 *pData_ptr@<EBX>, br_pixelmap *pDest_pixelmap@<ECX>, int pX_offset, int pY_offset, void (*DoPerFrame)(), int pInterruptable, int pFrame_rate)
int PlayFlic(int pIndex, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, void (*DoPerFrame)(), int pInterruptable, int pFrame_rate) {
    int finished_playing;
    tFlic_descriptor the_flic;
    tU32 last_frame;
    tU32 new_time;
    tU32 frame_period;
    LOG_TRACE("(%d, %d, %p, %p, %d, %d, %p, %d, %d)", pIndex, pSize, pData_ptr, pDest_pixelmap, pX_offset, pY_offset, DoPerFrame, pInterruptable, pFrame_rate);
    NOT_IMPLEMENTED();
}

// Offset: 6816
// Size: 0x29
//IDA: void __cdecl SwapScreen()
void SwapScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6860
// Size: 0x9a
//IDA: void __usercall ShowFlic(int pIndex@<EAX>)
void ShowFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7016
// Size: 0x4c
//IDA: void __cdecl InitFlics()
void InitFlics() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7092
// Size: 0x18b
//IDA: int __usercall LoadFlic@<EAX>(int pIndex@<EAX>)
int LoadFlic(int pIndex) {
    tPath_name the_path;
    FILE *f;
    char *the_buffer;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7488
// Size: 0x4b
//IDA: void __usercall UnlockFlic(int pIndex@<EAX>)
void UnlockFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7564
// Size: 0x101
//IDA: int __usercall LoadFlicData@<EAX>(char *pName@<EAX>, tU8 **pData@<EDX>, tU32 *pData_length@<EBX>)
int LoadFlicData(char *pName, tU8 **pData, tU32 *pData_length) {
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("(\"%s\", %p, %p)", pName, pData, pData_length);
    NOT_IMPLEMENTED();
}

// Offset: 7824
// Size: 0x57
//IDA: void __usercall FreeFlic(int pIndex@<EAX>)
void FreeFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7912
// Size: 0x3d
//IDA: void __usercall ForceRunFlic(int pIndex@<EAX>)
void ForceRunFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 7976
// Size: 0x6b
//IDA: void __usercall RunFlicAt(int pIndex@<EAX>, int pX@<EDX>, int pY@<EBX>)
void RunFlicAt(int pIndex, int pX, int pY) {
    LOG_TRACE("(%d, %d, %d)", pIndex, pX, pY);
    NOT_IMPLEMENTED();
}

// Offset: 8084
// Size: 0x75
//IDA: void __usercall RunFlic(int pIndex@<EAX>)
void RunFlic(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8204
// Size: 0x69
//IDA: void __usercall PreloadBunchOfFlics(int pBunch_index@<EAX>)
void PreloadBunchOfFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);
    NOT_IMPLEMENTED();
}

// Offset: 8312
// Size: 0x69
//IDA: void __usercall UnlockBunchOfFlics(int pBunch_index@<EAX>)
void UnlockBunchOfFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);
    NOT_IMPLEMENTED();
}

// Offset: 8420
// Size: 0x49
//IDA: void __usercall FlushAllFlics(int pBunch_index@<EAX>)
void FlushAllFlics(int pBunch_index) {
    int i;
    LOG_TRACE("(%d)", pBunch_index);
    NOT_IMPLEMENTED();
}

// Offset: 8496
// Size: 0x2c
//IDA: void __cdecl InitFlicQueue()
void InitFlicQueue() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8540
// Size: 0x57
//IDA: int __cdecl FlicQueueFinished()
int FlicQueueFinished() {
    tFlic_descriptor *the_flic;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8628
// Size: 0xe6
//IDA: void __usercall ProcessFlicQueue(tU32 pInterval@<EAX>)
void ProcessFlicQueue(tU32 pInterval) {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *last_flic;
    tFlic_descriptor *doomed_flic;
    tU32 new_time;
    int finished_playing;
    LOG_TRACE("(%d)", pInterval);
    NOT_IMPLEMENTED();
}

// Offset: 8860
// Size: 0x8a
//IDA: void __cdecl FlushFlicQueue()
void FlushFlicQueue() {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *old_flic;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9000
// Size: 0x1a8
//IDA: void __usercall AddToFlicQueue(int pIndex@<EAX>, int pX@<EDX>, int pY@<EBX>, int pMust_finish@<ECX>)
void AddToFlicQueue(int pIndex, int pX, int pY, int pMust_finish) {
    tFlic_descriptor *the_flic;
    tFlic_descriptor *new_flic;
    tFlic_descriptor *last_flic;
    tFlic_descriptor *doomed_flic;
    LOG_TRACE("(%d, %d, %d, %d)", pIndex, pX, pY, pMust_finish);
    NOT_IMPLEMENTED();
}

// Offset: 9424
// Size: 0xcd
//IDA: void __usercall InitialiseFlicPanel(int pIndex@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pWidth@<ECX>, int pHeight)
void InitialiseFlicPanel(int pIndex, int pLeft, int pTop, int pWidth, int pHeight) {
    void *the_pixels;
    LOG_TRACE("(%d, %d, %d, %d, %d)", pIndex, pLeft, pTop, pWidth, pHeight);
    NOT_IMPLEMENTED();
}

// Offset: 9632
// Size: 0x70
//IDA: void __usercall DisposeFlicPanel(int pIndex@<EAX>)
void DisposeFlicPanel(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 9744
// Size: 0x1f6
//IDA: void __usercall ServicePanelFlics(int pCopy_to_buffer@<EAX>)
void ServicePanelFlics(int pCopy_to_buffer) {
    tU32 time_diff;
    tU32 the_time;
    tU32 old_last_time[2];
    int i;
    int j;
    int iteration_count;
    int finished;
    LOG_TRACE("(%d)", pCopy_to_buffer);
    NOT_IMPLEMENTED();
}

// Offset: 10248
// Size: 0xcd
//IDA: void __usercall ChangePanelFlic(int pIndex@<EAX>, tU8 *pData@<EDX>, tU32 pData_length@<EBX>)
void ChangePanelFlic(int pIndex, tU8 *pData, tU32 pData_length) {
    LOG_TRACE("(%d, %p, %d)", pIndex, pData, pData_length);
    NOT_IMPLEMENTED();
}

// Offset: 10456
// Size: 0x37
//IDA: br_pixelmap* __usercall GetPanelPixelmap@<EAX>(int pIndex@<EAX>)
br_pixelmap* GetPanelPixelmap(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 10512
// Size: 0x599
//IDA: void __cdecl LoadInterfaceStrings()
void LoadInterfaceStrings() {
    FILE *f;
    char s[256];
    char s2[256];
    char *str;
    char *comment;
    char ch;
    tPath_name the_path;
    int i;
    int j;
    int len;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 11948
// Size: 0x72
//IDA: void __cdecl FlushInterfaceFonts()
void FlushInterfaceFonts() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12064
// Size: 0x36
//IDA: void __cdecl SuspendPendingFlic()
void SuspendPendingFlic() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12120
// Size: 0x2c
//IDA: void __cdecl ResumePendingFlic()
void ResumePendingFlic() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

