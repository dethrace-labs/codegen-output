#ifndef DR_TYPES_H
#define DR_TYPES_H

#include "br_types.h"

typedef char * va_list[1];
typedef unsigned short wchar_t;
typedef unsigned int size_t;
typedef char * __va_list[1];
typedef __iobuf FILE;
typedef long fpos_t;
typedef void * onexit_t();
typedef short SHORT;
typedef unsigned short USHORT;
typedef int INT;
typedef int BOOL;
typedef unsigned int UINT;
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int W32;
typedef unsigned short W16;
typedef long LONG;
typedef unsigned long DWORD;
typedef BYTE * PBYTE;
typedef char * PSTR;
typedef WORD * PWORD;
typedef unsigned short * PSHORT;
typedef LONG * PLONG;
typedef void * PVOID;
typedef BYTE * LPBYTE;
typedef BYTE * LPSTR;
typedef WORD * LPWORD;
typedef W32 * LPW32;
typedef LONG * LPLONG;
typedef void * LPVOID;
typedef BYTE * HPBYTE;
typedef BYTE * HPSTR;
typedef LONG * HPLONG;
typedef void * HPVOID;
typedef unsigned int HANDLE;
typedef _tagRMI_REGS _RMI_REGS;
typedef _tagBREGS _HMI_BREGS;
typedef _tagWREGS _HMI_WREGS;
typedef _tagDREGS _HMI_DREGS;
typedef _tagSREGS _HMI_SREGS;
typedef _tagIPX_HEADER _IPX_HEADER;
typedef _tagIPX_ECB _IPX_ECB;
typedef _tagIPX_INTERNET_ADDR _IPX_INTERNET_ADDR;
typedef _tagIPX_NETWORK_ADDR _IPX_NETWORK_ADDR;
typedef _tagIPX_LOCAL_TARGET _IPX_LOCAL_TARGET;
typedef _tagIPX_ELEMENT _IPX_ELEMENT;
typedef _tag_NETBIOS_NCB _NETBIOS_NCB;
typedef _tagNETBIOS_ADAPTER_STATUS _NETBIOS_ADAPTER_STATUS;
typedef _tagNETBIOS_ELEMENT _NETBIOS_ELEMENT;
typedef _tagNETBIOS_LOCAL_TARGET _NETBIOS_LOCAL_TARGET;
typedef _tagXFER_BLOCK_HEADER _XFER_BLOCK_HEADER;
typedef unsigned char tU8;
typedef signed char tS8;
typedef unsigned short tU16;
typedef short tS16;
typedef unsigned long tU32;
typedef long tS32;
typedef float tF32;
typedef double tF64;
typedef short tX88;
typedef long tX1616;
typedef tU8 tNet_message_type;
typedef char * tS3_sound_source_ptr;
typedef int tS3_sound_tag;
typedef tCar_spec_struct tCar_spec;
typedef tPath_node_struct tPath_node;
typedef tPath_section_struct tPath_section;
typedef tU32 tPlayer_ID;
typedef int tS3_sound_id;
typedef int tS3_type;
typedef int tS3_repeats;
typedef int tS3_volume;
typedef int tS3_effect_tag;
typedef long tS3_priority;
typedef long tS3_pitch;
typedef long tS3_speed;
typedef char * tS3_outlet_ptr;
typedef tS3_vector3 tS3_vector3;
typedef tWav_header tWav_header;
typedef void * tPipe_reset_proc(void);
typedef int * tGot_proc(tPowerup*, tCar_spec*);
typedef void * tLose_proc(tPowerup*, tCar_spec*);
typedef void * tPeriodic_proc(tPowerup*, tU32);
typedef tPowerup tPowerup;
typedef char tPath_name[256];
typedef tFlic_descriptor * tFlic_descriptor_ptr;
typedef tFlic_descriptor tFlic_descriptor;
typedef exception_struct * tException_list;
typedef exception_struct tException_node;
typedef int tKey_array[123];
typedef tS32 tJoy_array[8];
typedef void * tPMFM2CB(br_material*);
typedef v11face DR_FACE;
typedef fmt_vertex DR_VERTEX;

typedef enum tDriver {
    eDriver_non_car_unused_slot = 0,
    eDriver_non_car = 1,
    eDriver_oppo = 2,
    eDriver_net_human = 3,
    eDriver_local_human = 4
} tDriver;

typedef enum tBounds_type {
    eUndefined = 0,
    eBounds_ws = 1,
    eBounds_cs = 2
} tBounds_type;

typedef enum tImpact_location {
    eImpact_top = 0,
    eImpact_bottom = 1,
    eImpact_left = 2,
    eImpact_right = 3,
    eImpact_front = 4,
    eImpact_back = 5,
    eImpact_location_count = 6,
    eImpact_unknown = 7
} tImpact_location;

typedef enum tAxis_comp {
    eAxis_x = 0,
    eAxis_y = 1,
    eAxis_z = 2
} tAxis_comp;

typedef enum tCondition_operator {
    eCondition_less_than = 0,
    eCondition_greater_than = 1
} tCondition_operator;

typedef enum tDamage_type {
    eDamage_engine = 0,
    eDamage_transmission = 1,
    eDamage_driver = 2,
    eDamage_steering = 3,
    eDamage_lf_brake = 4,
    eDamage_rf_brake = 5,
    eDamage_lr_brake = 6,
    eDamage_rr_brake = 7,
    eDamage_lf_wheel = 8,
    eDamage_rf_wheel = 9,
    eDamage_lr_wheel = 10,
    eDamage_rr_wheel = 11,
    eDamage_type_count = 12
} tDamage_type;

typedef enum tJustification {
    eJust_left = 0,
    eJust_right = 1,
    eJust_centre = 2
} tJustification;

typedef enum tOpponent_objective_type {
    eOOT_none = 0,
    eOOT_complete_race = 1,
    eOOT_pursue_and_twat = 2,
    eOOT_run_away = 3,
    eOOT_get_near_player = 4,
    eOOT_levitate = 5,
    eOOT_knackered_and_freewheeling = 6,
    eOOT_frozen = 7,
    eOOT_wait_for_some_hapless_sod = 8,
    eOOT_rematerialise = 9,
    eOOT_return_to_start = 10
} tOpponent_objective_type;

typedef enum tFollow_path_result {
    eFPR_OK = 0,
    eFPR_end_of_path = 1,
    eFPR_given_up = 2
} tFollow_path_result;

typedef enum tPath_section_type_enum {
    ePST_normal = 0,
    ePST_race_path = 1,
    ePST_cheat_only = 2,
    ePST_count = 3
} tPath_section_type_enum;

typedef enum tPursue_car_state {
    ePCS_what_now = 0,
    ePCS_following_trail = 1,
    ePCS_following_line_of_sight = 2,
    ePCS_backing_up = 3
} tPursue_car_state;

typedef enum tProcess_objective_command {
    ePOC_start = 0,
    ePOC_run = 1,
    ePOC_die = 2
} tProcess_objective_command;

typedef enum tParts_category {
    eParts_armour = 0,
    eParts_power = 1,
    eParts_offensive = 2,
    eParts_count = 3
} tParts_category;

typedef enum tRace_over_reason {
    eRace_over_laps = 0,
    eRace_over_peds = 1,
    eRace_over_opponents = 2,
    eRace_over_abandoned = 3,
    eRace_over_out_of_time = 4,
    eRace_over_demo = 5,
    eRace_over_network_victory = 6,
    eRace_over_network_loss = 7,
    eRace_over_count = 8,
    eRace_not_over_yet = 255
} tRace_over_reason;

typedef enum tNet_mode {
    eNet_mode_none = 0,
    eNet_mode_thinking_about_it = 1,
    eNet_mode_host = 2,
    eNet_mode_client = 3
} tNet_mode;

typedef enum tPlayer_status {
    ePlayer_status_unknown = 0,
    ePlayer_status_ready = 1,
    ePlayer_status_loading = 2,
    ePlayer_status_wrecks_gallery = 3,
    ePlayer_status_summary = 4,
    ePlayer_status_not_responding = 5,
    ePlayer_status_racing = 6,
    ePlayer_status_main_menu = 7,
    ePlayer_status_recovering = 8,
    ePlayer_status_action_replay = 9
} tPlayer_status;

typedef enum tNet_game_type {
    eNet_game_type_fight_to_death = 0,
    eNet_game_type_car_crusher = 1,
    eNet_game_type_carnage = 2,
    eNet_game_type_checkpoint = 3,
    eNet_game_type_sudden_death = 4,
    eNet_game_type_tag = 5,
    eNet_game_type_foxy = 6,
    eNet_game_type_count = 7
} tNet_game_type;

typedef enum tNet_game_stage {
    eNet_game_starting = 0,
    eNet_game_ready = 1,
    eNet_game_playing = 2,
    eNet_game_status_count = 3
} tNet_game_stage;

typedef enum tCar_choice {
    eNet_car_frankie = 0,
    eNet_car_annie = 1,
    eNet_car_both = 2,
    eNet_car_all = 3
} tCar_choice;

typedef enum tNet_sequence_type {
    eNet_sequence_sequential = 0,
    eNet_sequence_random = 1
} tNet_sequence_type;

typedef enum tPowerup_event {
    ePowerup_gained = 0,
    ePowerup_ongoing = 1,
    ePowerup_lost = 2
} tPowerup_event;

typedef enum tNet_gameplay_mess {
    eNet_gameplay_checkpoint = 0,
    eNet_gameplay_wrong_checkpoint = 1,
    eNet_gameplay_suddenly_death = 2,
    eNet_gameplay_suicide = 3,
    eNet_gameplay_go_for_it = 4,
    eNet_gameplay_host_paused = 5,
    eNet_gameplay_host_unpaused = 6,
    eNet_gameplay_earn_credits = 7
} tNet_gameplay_mess;

typedef enum tCar_detail_ownership {
    eCar_owner_none = 0,
    eCar_owner_someone = 1,
    eCar_owner_self = 2,
    eCar_owner_not_allowed = 3
} tCar_detail_ownership;

typedef enum tS3_error_codes {
    eS3_error_none = 0,
    eS3_error_digi_init = 1,
    eS3_error_midi_init = 2,
    eS3_error_memory = 3,
    eS3_error_readfile = 4,
    eS3_error_soundbank = 5,
    eS3_error_bad_id = 6,
    eS3_error_bad_stag = 7,
    eS3_error_load_sound = 8,
    eS3_error_start_sound = 9,
    eS3_error_channel_alloc = 10,
    eS3_error_not_spatial = 11,
    eS3_error_function_failed = 12,
    eS3_error_load_song = 13,
    eS3_error_song_not_loaded = 14,
    eS3_error_start_song = 15,
    eS3_error_start_cda = 16,
    eS3_error_cda_not_init = 17,
    eS3_error_already_started_cda = 18,
    eS3_error_nonexistant_source = 19
} tS3_error_codes;

typedef enum tS3_termination_reason {
    eS3_tr_natural = 0,
    eS3_tr_stopped = 1,
    eS3_tr_overridden = 2
} tS3_termination_reason;

typedef enum tS3_filter_type {
    eS3_filter_none = 0,
    eS3_filter_reversed = 1,
    eS3_filter_echo = 2
} tS3_filter_type;

typedef enum tPowerup_type {
    ePowerup_dummy = 0,
    ePowerup_instantaneous = 1,
    ePowerup_timed = 2,
    ePowerup_whole_race = 3
} tPowerup_type;

typedef enum tNet_powerup_type {
    eNet_powerup_local = 0,
    eNet_powerup_global = 1,
    eNet_powerup_inappropriate = 2
} tNet_powerup_type;

typedef enum tVehicle_type {
    eVehicle_self = 0,
    eVehicle_net_player = 1,
    eVehicle_opponent = 2,
    eVehicle_rozzer = 3,
    eVehicle_drone = 4,
    eVehicle_not_really = 5
} tVehicle_type;

typedef enum tDepth_effect_type {
    eDepth_effect_darkness = 0,
    eDepth_effect_fog = 1,
    eDepth_effect_none = 255
} tDepth_effect_type;

typedef enum tPlane_type {
    ePlane_pos_x = 0,
    ePlane_neg_x = 1,
    ePlane_pos_y = 2,
    ePlane_neg_y = 3,
    ePlane_pos_z = 4,
    ePlane_neg_z = 5,
    ePlane_general = 6
} tPlane_type;

typedef enum tNet_avail {
    eNet_avail_never = 0,
    eNet_avail_eagle = 1,
    eNet_avail_hawk = 2,
    eNet_avail_all = 3
} tNet_avail;

typedef enum tProg_status {
    eProg_intro = 0,
    eProg_opening = 1,
    eProg_idling = 2,
    eProg_demo = 3,
    eProg_game_starting = 4,
    eProg_game_ongoing = 5,
    eProg_quit = 6
} tProg_status;

typedef enum tMM_result {
    eMM_none = 0,
    eMM_continue = 1,
    eMM_end_game = 2,
    eMM_1_start = 3,
    eMM_n_start = 4,
    eMM_loaded = 5,
    eMM_save = 6,
    eMM_options = 7,
    eMM_quit = 8,
    eMM_timeout = 9,
    eMM_recover = 10,
    eMM_abort_race = 11
} tMM_result;

typedef enum tSO_result {
    eSO_main_menu_invoked = 0,
    eSO_game_over = 1,
    eSO_game_completed = 2,
    eSO_continue = 3
} tSO_result;

typedef enum tRace_result {
    eRace_game_abandonned = 0,
    eRace_aborted = 1,
    eRace_timed_out = 2,
    eRace_completed = 3
} tRace_result;

typedef enum tFrank_anne {
    eFrankie = 0,
    eAnnie = 1
} tFrank_anne;

typedef enum tRace_sel_view_type {
    eVT_Scene = 0,
    eVT_Info = 1,
    eVT_Opponents = 2
} tRace_sel_view_type;

typedef enum tAuto_parts_reply {
    eAP_auto = 0,
    eAP_manual = 1,
    eAP_piss_off = 2
} tAuto_parts_reply;

typedef enum tWhich_view {
    eView_undefined = 0,
    eView_left = 1,
    eView_forward = 2,
    eView_right = 3
} tWhich_view;

typedef enum tRolling_type {
    eRT_alpha = 0,
    eRT_numeric = 1,
    eRT_looping_random = 2,
    eRT_looping_single = 3
} tRolling_type;

typedef enum tCar_texturing_level {
    eCTL_none = 0,
    eCTL_transparent = 1,
    eCTL_full = 2,
    eCTL_count = 3
} tCar_texturing_level;

typedef enum tRoad_texturing_level {
    eRTL_none = 0,
    eRTL_full = 1,
    eRTL_count = 2
} tRoad_texturing_level;

typedef enum tWall_texturing_level {
    eWTL_none = 0,
    eWTL_linear = 1,
    eWTL_full = 2,
    eWTL_count = 3
} tWall_texturing_level;

typedef enum tAdd_to_storage_result {
    eStorage_not_enough_room = 0,
    eStorage_duplicate = 1,
    eStorage_allocated = 2
} tAdd_to_storage_result;

typedef enum tLollipop_mode {
    eLollipop_x_match = 0,
    eLollipop_y_match = 1,
    eLollipop_z_match = 2,
    eLollipop_none = 255
} tLollipop_mode;

typedef enum tSmear_type {
    eSmear_oil = 0,
    eSmear_blood = 1,
    eSmear_count = 2
} tSmear_type;
typedef void zs_order_table_traversal_cbfn(int, ot_vertex*, ot_vertex*, ot_vertex*);
typedef void tS3_outlet_callback(tS3_outlet_ptr, tS3_sound_tag, tS3_termination_reason);
typedef void tS3_sample_filter(tS3_effect_tag, tS3_sound_tag);
typedef struct __iobuf {		// size: 0x1a
    unsigned char *_ptr;		// @0x0
    int _cnt;		// @0x4
    unsigned char *_base;		// @0x8
    unsigned int _flag;		// @0xc
    int _handle;		// @0x10
    unsigned int _bufsize;		// @0x14
    unsigned char _ungotten;		// @0x18
    unsigned char _tmpfchar;		// @0x19
} FILE;

typedef struct div_t {		// size: 0x8
    int quot;		// @0x0
    int rem;		// @0x4
} div_t;

typedef struct ldiv_t {		// size: 0x8
    long quot;		// @0x0
    long rem;		// @0x4
} ldiv_t;

typedef struct _complex {		// size: 0x10
    double x;		// @0x0
    double y;		// @0x8
} _complex;

typedef struct complex {		// size: 0x10
    double x;		// @0x0
    double y;		// @0x8
} complex;

typedef struct exception {		// size: 0x20
    int type;		// @0x0
    char *name;		// @0x4
    double arg1;		// @0x8
    double arg2;		// @0x10
    double retval;		// @0x18
} exception;

typedef struct ot_vertex {		// size: 0xc
    br_scalar screenX;		// @0x0
    br_scalar screenY;		// @0x4
    br_scalar distanceZ;		// @0x8
} ot_vertex;

typedef struct _tagRMI_REGS {		// size: 0x34
    long EDI;		// @0x0
    long ESI;		// @0x4
    long EBP;		// @0x8
    long reserved_by_system;		// @0xc
    long EBX;		// @0x10
    long EDX;		// @0x14
    long ECX;		// @0x18
    long EAX;		// @0x1c
    short flags;		// @0x20
    short ES;		// @0x22
    short DS;		// @0x24
    short FS;		// @0x26
    short GS;		// @0x28
    short IP;		// @0x2a
    short CS;		// @0x2c
    short SP;		// @0x2e
    short SS;		// @0x30
} _RMI_REGS;

typedef struct _tagBREGS {		// size: 0x10
    char al;		// @0x0
    char ah;		// @0x1
    unsigned short _1;		// @0x2
    char bl;		// @0x4
    char bh;		// @0x5
    unsigned short _2;		// @0x6
    char cl;		// @0x8
    char ch;		// @0x9
    unsigned short _3;		// @0xa
    char dl;		// @0xc
    char dh;		// @0xd
    unsigned short _4;		// @0xe
} _HMI_BREGS;

typedef struct _tagWREGS {		// size: 0x18
    unsigned short ax;		// @0x0
    unsigned short _1;		// @0x2
    unsigned short bx;		// @0x4
    unsigned short _2;		// @0x6
    unsigned short cx;		// @0x8
    unsigned short _3;		// @0xa
    unsigned short dx;		// @0xc
    unsigned short _4;		// @0xe
    unsigned short si;		// @0x10
    unsigned short _5;		// @0x12
    unsigned short di;		// @0x14
    unsigned short _6;		// @0x16
} _HMI_WREGS;

typedef struct _tagDREGS {		// size: 0x1c
    unsigned int eax;		// @0x0
    unsigned int ebx;		// @0x4
    unsigned int ecx;		// @0x8
    unsigned int edx;		// @0xc
    unsigned int esi;		// @0x10
    unsigned int edi;		// @0x14
    unsigned int cflags;		// @0x18
} _HMI_DREGS;

typedef struct _tagSREGS {		// size: 0xc
    unsigned short es;		// @0x0
    unsigned short cs;		// @0x2
    unsigned short ss;		// @0x4
    unsigned short ds;		// @0x6
    unsigned short fs;		// @0x8
    unsigned short gs;		// @0xa
} _HMI_SREGS;

typedef struct _HMI_REGS {		// size: 0x1c
    _HMI_DREGS x;		// @0x0
    _HMI_WREGS w;		// @0x0
    _HMI_BREGS h;		// @0x0
} _HMI_REGS;

typedef struct _tagIPX_HEADER {		// size: 0x1e
    USHORT wChecksum;		// @0x0
    USHORT wLength;		// @0x2
    BYTE bTransportControl;		// @0x4
    BYTE bPacketType;		// @0x5
    BYTE bDestNetworkNumber[4];		// @0x6
    BYTE bDestNetworkNode[6];		// @0xa
    USHORT wDestNetworkSocket;		// @0x10
    BYTE bSourceNetworkNumber[4];		// @0x12
    BYTE bSourceNetworkNode[6];		// @0x16
    USHORT wSourceNetworkSocket;		// @0x1c
} _IPX_HEADER;

typedef struct _PACKET {		// size: 0x6
    PSTR pData;		// @0x0
    USHORT wLength;		// @0x4
} _PACKET;

typedef struct _REAL_PACKET {		// size: 0x6
    SHORT wOffset;		// @0x0
    SHORT wSegment;		// @0x2
    USHORT wLength;		// @0x4
} _REAL_PACKET;

typedef struct _ECB_PACKET {		// size: 0x6
    _PACKET sPacket;		// @0x0
    _REAL_PACKET sRealPacket;		// @0x0
} _ECB_PACKET;

typedef struct _tagIPX_ECB {		// size: 0x30
    PSTR pLinkAddress;		// @0x0
    PSTR pESRRoutine;		// @0x4
    BYTE bInUse;		// @0x8
    BYTE bCompletionCode;		// @0x9
    USHORT wSocket;		// @0xa
    USHORT wConnectionID;		// @0xc
    USHORT wWorkSpace;		// @0xe
    BYTE bDriverWorkSpace[12];		// @0x10
    BYTE bImmediateAddress[6];		// @0x1c
    USHORT wPacketCount;		// @0x22
    _ECB_PACKET sPacket[2];		// @0x24
} _IPX_ECB;

typedef struct _tagIPX_INTERNET_ADDR {		// size: 0xa
    BYTE bNetwork[4];		// @0x0
    BYTE bNode[6];		// @0x4
} _IPX_INTERNET_ADDR;

typedef struct _tagIPX_NETWORK_ADDR {		// size: 0xc
    _IPX_INTERNET_ADDR sInternetAddr;		// @0x0
    BYTE bSocket[2];		// @0xa
} _IPX_NETWORK_ADDR;

typedef struct _tagIPX_LOCAL_TARGET {		// size: 0x10
    _IPX_INTERNET_ADDR sInternetAddr;		// @0x0
    BYTE bImmediate[6];		// @0xa
} _IPX_LOCAL_TARGET;

typedef struct _tagIPX_ELEMENT {		// size: 0x60
    USHORT wFlags;		// @0x0
    USHORT wOffset;		// @0x2
    _IPX_HEADER sHeader;		// @0x4
    _IPX_ECB sECB;		// @0x22
    _IPX_ECB *pECB;		// @0x52
    _IPX_HEADER *pIPXHeader;		// @0x56
    PSTR pHeader;		// @0x5a
    USHORT wHSize;		// @0x5e
} _IPX_ELEMENT;

typedef struct _PROT_PTR {		// size: 0x4
    PSTR pData;		// @0x0
} _PROT_PTR;

typedef struct _REAL_PTR {		// size: 0x4
    SHORT wOffset;		// @0x0
    SHORT wSegment;		// @0x2
} _REAL_PTR;

typedef struct _PTR {		// size: 0x4
    _PROT_PTR sPointer;		// @0x0
    _REAL_PTR sRealPtr;		// @0x0
} _PTR;

typedef struct _tag_NETBIOS_NCB {		// size: 0x40
    BYTE bCommand;		// @0x0
    BYTE bReturnCode;		// @0x1
    BYTE bLocalSession;		// @0x2
    BYTE bNetworkNameNumber;		// @0x3
    _PTR sPtr;		// @0x4
    USHORT wLength;		// @0x8
    BYTE bCallName[16];		// @0xa
    BYTE bName[16];		// @0x1a
    BYTE bReceiveTimeOut;		// @0x2a
    BYTE bSendTimeOut;		// @0x2b
    PSTR pPostFunction;		// @0x2c
    BYTE bAdapter;		// @0x30
    BYTE bCompletionCode;		// @0x31
    BYTE bReserve[14];		// @0x32
} _NETBIOS_NCB;

typedef struct _tagNETBIOS_ADAPTER_STATUS {		// size: 0x1a4
    BYTE bCardID[6];		// @0x0
    BYTE bReleaseLevel;		// @0x6
    BYTE bReserved1;		// @0x7
    BYTE bTypeOfAdapter;		// @0x8
    BYTE bOldOrNewParameters;		// @0x9
    USHORT wReportingPeriodMinutes;		// @0xa
    USHORT wFrameRejectReceivedCount;		// @0xc
    USHORT wFrameRejectSentCount;		// @0xe
    USHORT wReceivedDataFrameErrors;		// @0x10
    USHORT wUnsuccessfulTransmissions;		// @0x12
    LONG dwGoodTransmissions;		// @0x14
    LONG dwGoodReceptions;		// @0x18
    USHORT wRetransmissions;		// @0x1c
    USHORT wExhaustedResourceCount;		// @0x1e
    USHORT wT1TimerExpiredCount;		// @0x20
    USHORT wTITimerExpiredCount;		// @0x22
    BYTE bReserved2[4];		// @0x24
    USHORT wAvailableNCBS;		// @0x28
    USHORT wMaxNCBSConfigured;		// @0x2a
    USHORT wMaxNCBSPossible;		// @0x2c
    USHORT wBufferOrStationBusyCount;		// @0x2e
    USHORT wMaxDatagramSize;		// @0x30
    USHORT wPendingSessions;		// @0x32
    USHORT wMaxSessionsConfigured;		// @0x34
    USHORT wMaxSessionsPossible;		// @0x36
    USHORT wMaxFrameSize;		// @0x38
    USHORT wNameCount;		// @0x3a
    struct {		// size: 0x12
        BYTE bName[16];		// @0x0
        BYTE bNameNumber;		// @0x10
        BYTE bNameStatus;		// @0x11
    } sNameTable[20];		// @0x3c
} _NETBIOS_ADAPTER_STATUS;

typedef struct _tagNETBIOS_ELEMENT {		// size: 0x4e
    USHORT wFlags;		// @0x0
    USHORT wOffset;		// @0x2
    _NETBIOS_NCB sNCB;		// @0x4
    _NETBIOS_NCB *pNCB;		// @0x44
    PSTR pHeader;		// @0x48
    USHORT wHSize;		// @0x4c
} _NETBIOS_ELEMENT;

typedef struct _tagNETBIOS_LOCAL_TARGET {		// size: 0x10
    BYTE bNode[16];		// @0x0
} _NETBIOS_LOCAL_TARGET;

typedef struct _tagXFER_BLOCK_HEADER {		// size: 0x18
    W32 wSequence;		// @0x0
    W32 wType;		// @0x4
    W32 wID;		// @0x8
    W32 wLength;		// @0xc
    W32 wNode;		// @0x10
    W32 wUser1;		// @0x14
} _XFER_BLOCK_HEADER;

typedef struct _NETNOW_NODE_ADDR {		// size: 0x10
    _IPX_LOCAL_TARGET sIPX;		// @0x0
    _NETBIOS_LOCAL_TARGET sNETBIOS;		// @0x0
} _NETNOW_NODE_ADDR;

typedef struct tPD_net_player_info {		// size: 0x10
    _IPX_LOCAL_TARGET addr_ipx;		// @0x0
} tPD_net_player_info;

typedef struct tTrack_spec {		// size: 0x2c
    tU8 ncolumns_x;		// @0x0
    tU8 ncolumns_z;		// @0x1
    br_scalar column_size_x;		// @0x4
    br_scalar column_size_z;		// @0x8
    br_scalar origin_x;		// @0xc
    br_scalar origin_z;		// @0x10
    br_actor *the_actor;		// @0x14
    br_actor ***columns;		// @0x18
    br_actor ***lollipops;		// @0x1c
    br_actor ***blends;		// @0x20
    int ampersand_digits;		// @0x24
    br_actor **non_car_list;		// @0x28
} tTrack_spec;

typedef struct tCrush_neighbour {		// size: 0x2
    br_uint_8 vertex_index;		// @0x0
    br_uint_8 factor;		// @0x1
} tCrush_neighbour;

typedef struct tCrush_point_spec {		// size: 0x38
    br_uint_16 vertex_index;		// @0x0
    br_uint_16 number_of_neighbours;		// @0x2
    br_vector3 limits_neg;		// @0x4
    br_vector3 limits_pos;		// @0x10
    br_vector3 softness_neg;		// @0x1c
    br_vector3 softness_pos;		// @0x28
    tCrush_neighbour *neighbours;		// @0x34
} tCrush_point_spec;

typedef struct tCrush_data {		// size: 0x24
    int number_of_crush_points;		// @0x0
    float softness_factor;		// @0x4
    float min_fold_factor;		// @0x8
    float max_fold_factor;		// @0xc
    float wibble_factor;		// @0x10
    float limit_deviant;		// @0x14
    float split_chance;		// @0x18
    br_scalar min_y_fold_down;		// @0x1c
    tCrush_point_spec *crush_points;		// @0x20
} tCrush_data;

typedef struct tSpecial_volume {		// size: 0xa8
    br_matrix34 mat;		// @0x0
    br_matrix34 inv_mat;		// @0x30
    br_bounds bounds;		// @0x60
    br_scalar gravity_multiplier;		// @0x78
    br_scalar viscosity_multiplier;		// @0x7c
    float car_damage_per_ms;		// @0x80
    float ped_damage_per_ms;		// @0x84
    int no_mat;		// @0x88
    int camera_special_effect_index;		// @0x8c
    int sky_col;		// @0x90
    int entry_noise;		// @0x94
    int exit_noise;		// @0x98
    int engine_noise_index;		// @0x9c
    br_material *screen_material;		// @0xa0
    int material_modifier_index;		// @0xa4
} tSpecial_volume;

typedef struct tReduced_matrix {		// size: 0x24
    br_vector3 row1;		// @0x0
    br_vector3 row2;		// @0xc
    br_vector3 translation;		// @0x18
} tReduced_matrix;

typedef struct tCar_controls {		// size: 0x4
    int joystick_acc: 8;		// @0x0
    int joystick_dec: 8;		// @0x0
    unsigned int left: 1;		// @0x0
    unsigned int right: 1;		// @0x0
    unsigned int acc: 1;		// @0x0
    unsigned int dec: 1;		// @0x0
    unsigned int brake: 1;		// @0x0
    unsigned int up: 1;		// @0x0
    unsigned int down: 1;		// @0x0
    unsigned int holdw: 1;		// @0x0
    unsigned int backwards: 1;		// @0x0
    unsigned int change_up: 1;		// @0x0
    unsigned int change_down: 1;		// @0x0
    unsigned int horn: 1;		// @0x0
} tCar_controls;

typedef struct tNet_message_mechanics_info {		// size: 0x84
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 ID;		// @0x4
    tU32 time;		// @0x8
    tReduced_matrix mat;		// @0xc
    br_vector3 v;		// @0x30
    br_vector3 omega;		// @0x3c
    tU8 d[4];		// @0x48
    tCar_controls keys;		// @0x4c
    tU32 cc_coll_time;		// @0x50
    tS16 curvature;		// @0x54
    tU16 revs;		// @0x56
    br_scalar front;		// @0x58
    br_scalar back;		// @0x5c
    tU32 repair_time;		// @0x60
    tU8 damage[12];		// @0x64
    tU16 powerups;		// @0x70
    br_scalar wheel_dam_offset[4];		// @0x74
} tNet_message_mechanics_info;

typedef struct tCar_spec_struct {		// size: 0x1a9c
    int index;		// @0x0
    int disabled;		// @0x4
    tDriver driver;		// @0x8
    br_actor *car_master_actor;		// @0xc
    br_scalar min_torque_squared;		// @0x10
    br_scalar break_off_radians_squared;		// @0x14
    br_vector3 v;		// @0x18
    br_vector3 old_v;		// @0x24
    br_vector3 velocity_car_space;		// @0x30
    br_matrix34 oldmat;		// @0x3c
    br_matrix34 old_frame_mat;		// @0x6c
    br_vector3 pos;		// @0x9c
    br_vector3 omega;		// @0xa8
    br_vector3 oldomega;		// @0xb4
    br_scalar M;		// @0xc0
    int infinite_mass;		// @0xc4
    br_vector3 I;		// @0xc8
    br_vector3 cmpos;		// @0xd4
    int extra_point_num;		// @0xe0
    br_bounds bounds[3];		// @0xe4
    br_bounds max_bounds[2];		// @0x12c
    br_vector3 extra_points[6];		// @0x15c
    br_scalar original_extra_points_z[6];		// @0x1a4
    br_vector3 old_point;		// @0x1bc
    br_vector3 old_norm;		// @0x1c8
    int box_face_start;		// @0x1d4
    int box_face_end;		// @0x1d8
    int box_face_ref;		// @0x1dc
    br_matrix34 last_box_inv_mat;		// @0x1e0
    br_bounds last_box;		// @0x210
    int doing_nothing_flag;		// @0x228
    tSpecial_volume *last_special_volume;		// @0x22c
    tSpecial_volume *auto_special_volume;		// @0x230
    int frame_collision_flag;		// @0x234
    int collision_flag;		// @0x238
    int max_shrapnel_material;		// @0x23c
    br_vector3 direction;		// @0x240
    float speed;		// @0x24c
    tU16 car_ID;		// @0x250
    br_material *shrapnel_material[3];		// @0x254
    br_bounds bounds_world_space;		// @0x260
    tBounds_type bounds_ws_type;		// @0x278
    tU16 fire_vertex[12];		// @0x27c
    tU16 num_smoke_columns;		// @0x294
    br_vector3 water_normal;		// @0x298
    br_scalar water_d;		// @0x2a4
    br_scalar water_depth_factor;		// @0x2a8
    tNet_message_mechanics_info message;		// @0x2ac
    tU32 last_car_car_collision;		// @0x330
    br_scalar dt;		// @0x334
    tCar_spec_struct *who_last_hit_me;		// @0x338
    char name[32];		// @0x33c
    char driver_name[32];		// @0x35c
    char grid_icon_names[3][14];		// @0x37c
    tS8 *cockpit_images[3];		// @0x3a8
    br_pixelmap *prat_cam_left;		// @0x3b4
    br_pixelmap *prat_cam_top;		// @0x3b8
    br_pixelmap *prat_cam_right;		// @0x3bc
    br_pixelmap *prat_cam_bottom;		// @0x3c0
    br_pixelmap *prat_cam_dummy;		// @0x3c4
    br_pixelmap *speedo_image[2];		// @0x3c8
    br_pixelmap *tacho_image[2];		// @0x3d0
    br_pixelmap *damage_background;		// @0x3d8
    br_pixelmap *lhands_images[7];		// @0x3dc
    br_pixelmap *rhands_images[7];		// @0x3f8
    br_pixelmap *grid_icon_image;		// @0x414
    br_pixelmap *gears_image;		// @0x418
    int fg_index;		// @0x41c
    int underwater_ability;		// @0x420
    int invulnerable;		// @0x424
    int wall_climber_mode;		// @0x428
    int can_be_stolen;		// @0x42c
    int has_been_stolen;		// @0x430
    int active;		// @0x434
    int knackered;		// @0x438
    int pre_car_col_knackered;		// @0x43c
    int render_left[3];		// @0x440
    int render_top[3];		// @0x44c
    int render_right[3];		// @0x458
    int render_bottom[3];		// @0x464
    int mirror_left;		// @0x470
    int mirror_top;		// @0x474
    int mirror_right;		// @0x478
    int mirror_bottom;		// @0x47c
    int prat_left;		// @0x480
    int prat_top;		// @0x484
    int prat_right;		// @0x488
    int prat_bottom;		// @0x48c
    int speedo_x[2];		// @0x490
    int speedo_y[2];		// @0x498
    int speedo_centre_x[2];		// @0x4a0
    int speedo_centre_y[2];		// @0x4a8
    int speedo_x_pitch[2];		// @0x4b0
    int speedo_y_pitch[2];		// @0x4b8
    int speedo_radius_1[2];		// @0x4c0
    int speedo_radius_2[2];		// @0x4c8
    int speedo_start_angle[2];		// @0x4d0
    int speedo_end_angle[2];		// @0x4d8
    int speedo_needle_colour[2];		// @0x4e0
    int tacho_x[2];		// @0x4e8
    int tacho_y[2];		// @0x4f0
    int tacho_centre_x[2];		// @0x4f8
    int tacho_centre_y[2];		// @0x500
    int tacho_x_pitch[2];		// @0x508
    int tacho_y_pitch[2];		// @0x510
    int tacho_radius_1[2];		// @0x518
    int tacho_radius_2[2];		// @0x520
    int tacho_start_angle[2];		// @0x528
    int tacho_end_angle[2];		// @0x530
    int tacho_needle_colour[2];		// @0x538
    int gear_x[2];		// @0x540
    int gear_y[2];		// @0x548
    int red_line;		// @0x550
    int lhands_x[7];		// @0x554
    int lhands_y[7];		// @0x570
    int rhands_x[7];		// @0x58c
    int rhands_y[7];		// @0x5a8
    int number_of_hands_images;		// @0x5c4
    int max_speed;		// @0x5c8
    int damage_x_offset;		// @0x5cc
    int damage_y_offset;		// @0x5d0
    int damage_background_x;		// @0x5d4
    int damage_background_y;		// @0x5d8
    int dim_count[2];		// @0x5dc
    int dim_left[2][4];		// @0x5e4
    int dim_top[2][4];		// @0x604
    int dim_right[2][4];		// @0x624
    int dim_bottom[2][4];		// @0x644
    int car_actor_count;		// @0x664
    int current_car_actor;		// @0x668
    int principal_car_actor;		// @0x66c
    int car_model_variable;		// @0x670
    int number_of_steerable_wheels;		// @0x674
    int steering_ref[6];		// @0x678
    int lf_sus_ref[4];		// @0x690
    int rf_sus_ref[4];		// @0x6a0
    int lr_sus_ref[2];		// @0x6b0
    int rr_sus_ref[2];		// @0x6b8
    int driven_wheels_spin_ref_1;		// @0x6c0
    int driven_wheels_spin_ref_2;		// @0x6c4
    int driven_wheels_spin_ref_3;		// @0x6c8
    int driven_wheels_spin_ref_4;		// @0x6cc
    int non_driven_wheels_spin_ref_1;		// @0x6d0
    int non_driven_wheels_spin_ref_2;		// @0x6d4
    int non_driven_wheels_spin_ref_3;		// @0x6d8
    int non_driven_wheels_spin_ref_4;		// @0x6dc
    int engine_noises[3];		// @0x6e0
    float driver_x_offset;		// @0x6ec
    float driver_y_offset;		// @0x6f0
    float driver_z_offset;		// @0x6f4
    float mirror_x_offset;		// @0x6f8
    float mirror_y_offset;		// @0x6fc
    float mirror_z_offset;		// @0x700
    float rearview_camera_angle;		// @0x704
    float head_left_angle;		// @0x708
    float head_right_angle;		// @0x70c
    float steering_angle;		// @0x710
    float speedo_speed;		// @0x714
    float lf_sus_position;		// @0x718
    float rf_sus_position;		// @0x71c
    float lr_sus_position;		// @0x720
    float rr_sus_position;		// @0x724
    float driven_wheels_circum;		// @0x728
    float non_driven_wheels_circum;		// @0x72c
    float bounce_rate;		// @0x730
    float bounce_amount;		// @0x734
    float collision_mass_multiplier;		// @0x738
    float damage_multiplier;		// @0x73c
    float grip_multiplier;		// @0x740
    float engine_power_multiplier;		// @0x744
    tDamage_unit damage_units[12];		// @0x748
    tU8 frame_start_damage[12];		// @0x958
    tImpact_location last_impact_location;		// @0x964
    tDamage_program damage_programs[6];		// @0x968
    tHeadup_slot headup_slots[2][20];		// @0x998
    tParts_spec power_ups[3];		// @0xfd8
    int car_actor_pipe_ref;		// @0x12b4
    tCar_actor car_model_actors[5];		// @0x12b8
    br_material *screen_material;		// @0x13a8
    br_material *screen_material_source;		// @0x13ac
    br_matrix34 last_safe_positions[5];		// @0x13b0
    int wheel_slip;		// @0x14a0
    br_scalar damping;		// @0x14a4
    br_scalar sk[2];		// @0x14a8
    br_scalar sb[2];		// @0x14b0
    br_scalar susp_give[2];		// @0x14b8
    br_scalar susp_height[2];		// @0x14c0
    br_scalar ride_height;		// @0x14c8
    br_vector3 wpos[4];		// @0x14cc
    br_scalar curvature;		// @0x14fc
    br_scalar maxcurve;		// @0x1500
    br_scalar turn_speed;		// @0x1504
    br_scalar oldd[4];		// @0x1508
    int material_index[4];		// @0x1518
    int dust_time[4];		// @0x1528
    br_scalar mu[3];		// @0x1538
    br_scalar friction_elipticity;		// @0x1544
    br_scalar down_force_speed;		// @0x1548
    int down_force_flag;		// @0x154c
    br_scalar initial_brake;		// @0x1550
    br_scalar brake_increase;		// @0x1554
    br_scalar freduction;		// @0x1558
    br_scalar acc_force;		// @0x155c
    br_scalar torque;		// @0x1560
    br_scalar brake_force;		// @0x1564
    int traction_control;		// @0x1568
    br_scalar rolling_r_front;		// @0x156c
    br_scalar rolling_r_back;		// @0x1570
    tCar_controls keys;		// @0x1574
    tJoystick joystick;		// @0x1578
    int pedals_xy;		// @0x1588
    int number_of_wheels_on_ground;		// @0x158c
    br_actor *wheel_actors[6];		// @0x1590
    float wheel_rot_pos[4];		// @0x15a8
    br_scalar wheel_dam_offset[4];		// @0x15b8
    br_scalar damage_magnitude_accumulator;		// @0x15c8
    br_scalar revs;		// @0x15cc
    br_scalar target_revs;		// @0x15d0
    br_vector3 road_normal;		// @0x15d4
    br_scalar max_force_front;		// @0x15e0
    br_scalar max_force_rear;		// @0x15e4
    int gear;		// @0x15e8
    int just_changed_gear;		// @0x15ec
    int max_gear;		// @0x15f0
    br_scalar speed_revs_ratio;		// @0x15f4
    br_scalar force_torque_ratio;		// @0x15f8
    tS3_sound_source_ptr sound_source;		// @0x15fc
    br_matrix34 pre_car_col_mat;		// @0x1600
    br_scalar pre_car_col_speed;		// @0x1630
    br_vector3 pre_car_col_direction;		// @0x1634
    br_vector3 pre_car_col_velocity;		// @0x1640
    br_vector3 pre_car_col_velocity_car_space;		// @0x164c
    br_vector3 velocity_bu_per_sec;		// @0x1658
    float last_col_prop_x;		// @0x1664
    float last_col_prop_y;		// @0x1668
    float last_col_prop_z;		// @0x166c
    tU32 time_last_hit;		// @0x1670
    tU32 time_last_victim;		// @0x1674
    tCar_spec_struct *last_hit_by;		// @0x1678
    tCar_spec_struct *last_culprit;		// @0x167c
    int no_of_processes_recording_my_trail;		// @0x1680
    tPursuee_trail my_trail;		// @0x1684
    unsigned int grudge_raised_recently: 0;		// @0x17c8
    unsigned int big_bang: 1;		// @0x17c8
    unsigned int scary_bang: 2;		// @0x17c8
    tU32 last_collision_time;		// @0x17cc
    tU32 last_time_we_touched_a_player;		// @0x17d0
    tU32 end_steering_damage_effect;		// @0x17d4
    tU32 end_trans_damage_effect;		// @0x17d8
    int false_key_left;		// @0x17dc
    int false_key_right;		// @0x17e0
    tCar_spec_struct *last_person_to_hit_us;		// @0x17e4
    tCar_spec_struct *last_person_we_hit;		// @0x17e8
    br_vector3 engine_pos;		// @0x17ec
    br_model *last_wheel_models[4];		// @0x17f8
    int last_wheel_faces[4];		// @0x1808
    tU32 shadow_intersection_flags;		// @0x1818
    tU32 last_bounce;		// @0x181c
    unsigned int new_skidding;		// @0x1820
    unsigned int old_skidding;		// @0x1824
    tU16 old_skid[4];		// @0x1828
    br_vector3 prev_skid_pos[4];		// @0x1830
    br_vector3 skid_line_start[4];		// @0x1860
    br_vector3 skid_line_end[4];		// @0x1890
    br_vector3 nor[4];		// @0x18c0
    br_vector3 prev_nor[4];		// @0x18f0
    br_vector3 special_start[4];		// @0x1920
    br_scalar oil_remaining[4];		// @0x1950
    br_scalar blood_remaining[4];		// @0x1960
    br_scalar total_length[4];		// @0x1970
    float proxy_ray_distance;		// @0x1980
    tS32 powerups[64];		// @0x1984
    tU32 time_to_recover;		// @0x1a84
    tU32 repair_time;		// @0x1a88
    int power_up_levels[3];		// @0x1a8c
    tS3_sound_tag horn_sound_tag;		// @0x1a98
} tCar_spec;

typedef struct tDamage_unit {		// size: 0x2c
    int x_coord;		// @0x0
    int y_coord;		// @0x4
    int damage_level;		// @0x8
    int last_level;		// @0xc
    int smoke_last_level;		// @0x10
    int periods[5];		// @0x14
    br_pixelmap *images;		// @0x28
} tDamage_unit;

typedef struct tDamage_condition {		// size: 0xc
    tAxis_comp axis_comp;		// @0x0
    tCondition_operator condition_operator;		// @0x4
    float comparitor;		// @0x8
} tDamage_condition;

typedef struct tDamage_effect {		// size: 0x8
    tDamage_type type;		// @0x0
    float weakness_factor;		// @0x4
} tDamage_effect;

typedef struct tDamage_clause {		// size: 0x40
    tDamage_condition conditions[2];		// @0x0
    int effect_count;		// @0x18
    int condition_count;		// @0x1c
    tDamage_effect effects[4];		// @0x20
} tDamage_clause;

typedef struct tDamage_program {		// size: 0x8
    int clause_count;		// @0x0
    tDamage_clause *clauses;		// @0x4
} tDamage_program;

typedef struct tHeadup_slot {		// size: 0x28
    int x;		// @0x0
    int y;		// @0x4
    int colour;		// @0x8
    int cockpit_anchored;		// @0xc
    int dimmed_background;		// @0x10
    int dim_left;		// @0x14
    int dim_top;		// @0x18
    int dim_right;		// @0x1c
    int dim_bottom;		// @0x20
    tJustification justification;		// @0x24
} tHeadup_slot;

typedef struct tPart_info {		// size: 0x28
    char part_name[14];		// @0x0
    tU8 *data_ptr;		// @0x10
    tU32 data_length;		// @0x14
    int rank_required;		// @0x18
    int prices[3];		// @0x1c
} tPart_info;

typedef struct tParts_spec {		// size: 0xf4
    int number_of_parts;		// @0x0
    tPart_info info[6];		// @0x4
} tParts_spec;

typedef struct tCar_actor {		// size: 0x30
    br_actor *actor;		// @0x0
    br_scalar min_distance_squared;		// @0x4
    tCrush_data crush_data;		// @0x8
    br_vertex *undamaged_vertices;		// @0x2c
} tCar_actor;

typedef struct tJoystick {		// size: 0x10
    tS32 left;		// @0x0
    tS32 right;		// @0x4
    tS32 acc;		// @0x8
    tS32 dec;		// @0xc
} tJoystick;

typedef struct tPursuee_trail {		// size: 0x144
    br_vector3 trail_nodes[25];		// @0x0
    br_vector3 base_heading;		// @0x12c
    tU32 time_of_next_recording;		// @0x138
    tU32 end_of_deviation;		// @0x13c
    tU8 number_of_nodes;		// @0x140
    tU8 has_deviated_recently;		// @0x141
    tU8 nodes_shifted_this_frame;		// @0x142
} tPursuee_trail;

typedef struct tOppo_psyche {		// size: 0x1
    tU8 grudge_against_player;		// @0x0
} tOppo_psyche;

typedef struct tComplete_race_data {		// size: 0x2
    tU8 finished_calcing_race_route;		// @0x0
    tU8 found_race_section;		// @0x1
} tComplete_race_data;

typedef struct tReturn_to_start_data {		// size: 0x10
    br_vector3 nearest_path_point;		// @0x0
    tS16 section_no;		// @0xc
    tU8 waiting_near_start;		// @0xe
} tReturn_to_start_data;

typedef struct tPath_node_struct {		// size: 0x20
    br_vector3 p;		// @0x0
    tS16 sections[8];		// @0xc
    tU8 number_of_sections;		// @0x1c
} tPath_node;

typedef struct tPath_section_struct {		// size: 0x14
    tS16 node_indices[2];		// @0x0
    tU8 min_speed[2];		// @0x4
    tU8 max_speed[2];		// @0x6
    br_scalar width;		// @0x8
    br_scalar length;		// @0xc
    tU8 type;		// @0x10
    tU8 one_way;		// @0x11
} tPath_section;

typedef struct tPursue_car_data {		// size: 0x70
    tCar_spec *pursuee;		// @0x0
    tU32 time_of_next_visibility_check;		// @0x4
    tU32 start_backup_time;		// @0x8
    tU32 time_last_twatted_em;		// @0xc
    tU32 time_pursuee_last_visible;		// @0x10
    tU32 time_last_away_from_pursuee;		// @0x14
    tPath_node direct_line_nodes[2];		// @0x18
    tPath_section direct_line_section;		// @0x58
    tU8 state;		// @0x6c
} tPursue_car_data;

typedef struct tFollow_path_data {		// size: 0x58
    tU32 struggle_time;		// @0x0
    tU32 last_finished_struggle_time;		// @0x4
    tU32 toggle_time;		// @0x8
    tU32 borrowed_time_start;		// @0xc
    br_scalar prev_acc;		// @0x10
    br_scalar prev_acc_error;		// @0x14
    br_scalar desired_speed;		// @0x18
    br_scalar last_distance;		// @0x1c
    br_vector3 cheaty_intersect;		// @0x20
    tS16 section_no;		// @0x2c
    tS16 first_section_no;		// @0x2e
    tS16 last_struggle_section;		// @0x30
    unsigned int number_of_struggles: 8;		// @0x34
    unsigned int has_moved_during_this_task: 1;		// @0x34
    unsigned int made_it: 1;		// @0x34
    unsigned int cheating: 1;		// @0x34
    unsigned int cornering: 1;		// @0x34
    unsigned int left_not_right: 1;		// @0x34
    unsigned int off_path_toggle;		// @0x38
    unsigned int moving_to_intersect;		// @0x3c
    br_vector2 turning_cent;		// @0x40
    br_scalar turning_radius;		// @0x48
    br_scalar corner_size;		// @0x4c
    br_scalar corner_width;		// @0x50
    int section_after;		// @0x54
} tFollow_path_data;

typedef struct tLevitate_data {		// size: 0xc
    br_scalar initial_y;		// @0x0
    tU32 time_started;		// @0x4
    unsigned int waiting_to_levitate: 1;		// @0x8
} tLevitate_data;

typedef struct tRun_away_data {		// size: 0x4
    tU32 time_to_stop;		// @0x0
} tRun_away_data;

typedef struct tRoute_section {		// size: 0x4
    tS16 section_no;		// @0x0
    tU8 direction;		// @0x2
} tRoute_section;

typedef struct tOpponent_spec {		// size: 0x190
    int index;		// @0x0
    tOpponent_objective_type current_objective;		// @0x4
    tCar_spec *car_spec;		// @0x8
    float nastiness;		// @0xc
    br_scalar distance_to_camera;		// @0x10
    br_scalar distance_from_home;		// @0x14
    br_scalar player_to_oppo_d;		// @0x18
    br_vector3 start_pos;		// @0x1c
    br_vector3 start_direction;		// @0x28
    br_vector3 pos_last_frame;		// @0x34
    br_vector3 player_to_oppo_v;		// @0x40
    tU32 next_out_of_world_check;		// @0x4c
    tU32 stun_time_ends;		// @0x50
    tU32 next_player_visibility_check;		// @0x54
    tU32 last_moved_ok;		// @0x58
    tU32 last_in_view;		// @0x5c
    tU32 time_last_processed;		// @0x60
    tU32 time_this_objective_started;		// @0x64
    tU32 time_for_this_objective_to_finish;		// @0x68
    tU32 cunting_buttfuck_timer;		// @0x6c
    tS16 players_section_when_last_calced_full_path;		// @0x70
    int nnext_sections;		// @0x74
    tRoute_section next_sections[10];		// @0x78
    unsigned int new_objective_required: 1;		// @0xa0
    unsigned int finished_for_this_race: 1;		// @0xa0
    unsigned int knackeredness_detected: 1;		// @0xa0
    unsigned int physics_me: 1;		// @0xa0
    unsigned int pursue_from_start: 1;		// @0xa0
    unsigned int cheating: 1;		// @0xa0
    unsigned int last_cheating_value: 1;		// @0xa0
    unsigned int pursuing_player_before_freeze: 1;		// @0xa0
    unsigned int has_moved_at_some_point: 1;		// @0xa0
    unsigned int player_in_view_now: 1;		// @0xa0
    unsigned int acknowledged_piv: 1;		// @0xa0
    unsigned int murder_reported: 1;		// @0xa0
    tComplete_race_data complete_race_data;		// @0xa4
    tFollow_path_data follow_path_data;		// @0xa8
    tPursue_car_data pursue_car_data;		// @0x100
    tLevitate_data levitate_data;		// @0x170
    tRun_away_data run_away_data;		// @0x17c
    tReturn_to_start_data return_to_start_data;		// @0x180
} tOpponent_spec;

typedef struct tIntelligent_vehicles {		// size: 0x1878
    int number_of_opponents;		// @0x0
    int number_of_cops;		// @0x4
    int number_of_path_nodes;		// @0x8
    int number_of_path_sections;		// @0xc
    br_vector3 cop_start_points[10];		// @0x10
    br_vector3 cop_start_vectors[10];		// @0x88
    tOpponent_spec opponents[5];		// @0x100
    tOpponent_spec cops[10];		// @0x8d0
    tPath_node *path_nodes;		// @0x1870
    tPath_section *path_sections;		// @0x1874
} tIntelligent_vehicles;

typedef struct tBounds {		// size: 0x44
    br_matrix34 *mat;		// @0x0
    br_bounds original_bounds;		// @0x4
    br_vector3 box_centre;		// @0x1c
    br_scalar radius;		// @0x28
    br_bounds real_bounds;		// @0x2c
} tBounds;

typedef struct tFace_ref {		// size: 0x48
    br_material *material;		// @0x0
    br_vector3 v[3];		// @0x4
    br_vector2 *map[3];		// @0x28
    br_vector3 normal;		// @0x34
    int flags;		// @0x40
    br_scalar d;		// @0x44
} tFace_ref;

typedef struct tNet_game_player_info {		// size: 0xc0
    tPD_net_player_info pd_net_info;		// @0x0
    tU32 this_players_time_stamp;		// @0x10
    tU32 last_heard_from_him;		// @0x14
    tU32 reposition_time;		// @0x18
    tU32 last_waste_message;		// @0x1c
    int host;		// @0x20
    tPlayer_ID ID;		// @0x24
    char player_name[32];		// @0x28
    tPlayer_status player_status;		// @0x48
    int car_index;		// @0x4c
    int grid_index;		// @0x50
    int grid_position_set;		// @0x54
    int opponent_list_index;		// @0x58
    int awaiting_confirmation;		// @0x5c
    int score;		// @0x60
    int credits;		// @0x64
    int wasted;		// @0x68
    int wasteage_attributed;		// @0x6c
    int name_not_clipped;		// @0x70
    int race_stuff_initialised;		// @0x74
    int played;		// @0x78
    int won;		// @0x7c
    int next_car_index;		// @0x80
    int games_score;		// @0x84
    int last_score_index;		// @0x88
    br_matrix34 initial_position;		// @0x8c
    tCar_spec *car;		// @0xbc
} tNet_game_player_info;

typedef struct tNet_game_options {		// size: 0x30
    int show_players_on_map;		// @0x0
    int show_peds_on_map;		// @0x4
    int enable_text_messages;		// @0x8
    int show_powerups_on_map;		// @0xc
    int powerup_respawn;		// @0x10
    int open_game;		// @0x14
    int starting_money_index;		// @0x18
    int grid_start;		// @0x1c
    int race_end_target;		// @0x20
    int random_car_choice;		// @0x24
    tNet_sequence_type race_sequence_type;		// @0x28
    tCar_choice car_choice;		// @0x2c
} tNet_game_options;

typedef struct tNet_game_status {		// size: 0x4
    tNet_game_stage stage;		// @0x0
} tNet_game_status;

typedef struct tNet_game_details {		// size: 0x78
    tPD_net_player_info pd_net_info;		// @0x0
    char host_name[32];		// @0x10
    tPlayer_ID host_ID;		// @0x30
    int num_players;		// @0x34
    int start_race;		// @0x38
    int no_races_yet;		// @0x3c
    tNet_game_status status;		// @0x40
    tNet_game_options options;		// @0x44
    tNet_game_type type;		// @0x74
} tNet_game_details;

typedef struct tNet_message_send_me_details {		// size: 0x2
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
} tNet_message_send_me_details;

typedef struct tNet_message_my_details {		// size: 0x7c
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tNet_game_details details;		// @0x4
} tNet_message_my_details;

typedef struct tNet_message_join {		// size: 0xc4
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tNet_game_player_info player_info;		// @0x4
} tNet_message_join;

typedef struct tNet_message_leave {		// size: 0x2
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
} tNet_message_leave;

typedef struct tNet_message_host_pissing_off {		// size: 0x2
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
} tNet_message_host_pissing_off;

typedef struct tNet_message_new_player_list {		// size: 0xd0
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int number_of_players;		// @0x4
    int this_index;		// @0x8
    int batch_number;		// @0xc
    tNet_game_player_info player;		// @0x10
} tNet_message_new_player_list;

typedef struct tNet_message_race_over {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tRace_over_reason reason;		// @0x4
} tNet_message_race_over;

typedef struct tNet_message_status_report {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_status status;		// @0x4
} tNet_message_status_report;

typedef struct tGrid_spec {		// size: 0x38
    int index;		// @0x0
    int next_car_index;		// @0x4
    br_matrix34 mat;		// @0x8
} tGrid_spec;

typedef struct tNet_message_start_race {		// size: 0x160
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int car_count;		// @0x4
    int racing;		// @0x8
    int next_race;		// @0xc
    tGrid_spec car_list[6];		// @0x10
} tNet_message_start_race;

typedef struct tNet_message_guarantee_reply {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 guarantee_number;		// @0x4
} tNet_message_guarantee_reply;

typedef struct tNet_message_headup {		// size: 0x82
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    char text[128];		// @0x2
} tNet_message_headup;

typedef struct tNet_message_host_query {		// size: 0x2
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
} tNet_message_host_query;

typedef struct tNet_message_host_reply {		// size: 0x10
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int race_has_started;		// @0x4
    int race_index;		// @0x8
    int pending_race;		// @0xc
} tNet_message_host_reply;

typedef struct tNet_message_cop_info {		// size: 0x68
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 ID;		// @0x4
    tU32 time;		// @0x8
    tReduced_matrix mat;		// @0xc
    br_vector3 v;		// @0x30
    br_vector3 omega;		// @0x3c
    br_scalar curvature;		// @0x48
    br_scalar d[4];		// @0x4c
    tU8 damage[12];		// @0x5c
} tNet_message_cop_info;

typedef struct tNet_message_non_car_info {		// size: 0x50
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 ID;		// @0x4
    tU32 time;		// @0x8
    tReduced_matrix mat;		// @0xc
    br_vector3 v;		// @0x30
    br_vector3 omega;		// @0x3c
    tU32 cc_coll_time;		// @0x48
    tU16 flags;		// @0x4c
} tNet_message_non_car_info;

typedef struct tNet_message_non_car_position {		// size: 0x3c
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 ID;		// @0x4
    br_matrix34 mat;		// @0x8
    tU16 flags;		// @0x38
} tNet_message_non_car_position;

typedef struct tNet_message_time_sync {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int race_start_time;		// @0x4
} tNet_message_time_sync;

typedef struct tNet_message_players_confirm {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID player;		// @0x4
} tNet_message_players_confirm;

typedef struct tNet_message_disable_car {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID player;		// @0x4
} tNet_message_disable_car;

typedef struct tNet_message_enable_car {		// size: 0x8
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID player;		// @0x4
} tNet_message_enable_car;

typedef struct tNet_message_powerup {		// size: 0x14
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID player;		// @0x4
    int powerup_index;		// @0x8
    tU32 time_left;		// @0xc
    tPowerup_event event;		// @0x10
} tNet_message_powerup;

typedef struct tNet_message_recover {		// size: 0xc
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tU32 ID;		// @0x4
    int time_to_recover;		// @0x8
} tNet_message_recover;

typedef struct tNet_message_scores {		// size: 0x20
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int general_score;		// @0x4
    int scores[6];		// @0x8
} tNet_message_scores;

typedef struct tNet_message_wasted {		// size: 0xc
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID victim;		// @0x4
    tPlayer_ID culprit;		// @0x8
} tNet_message_wasted;

typedef struct tNet_message_gameplay {		// size: 0x18
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tNet_gameplay_mess mess;		// @0x4
    tU32 param_1;		// @0x8
    tU32 param_2;		// @0xc
    tU32 param_3;		// @0x10
    tU32 param_4;		// @0x14
} tNet_message_gameplay;

typedef struct tNet_message_pedestrian {		// size: 0x3c
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tS8 action_instruction;		// @0x2
    tS8 flags;		// @0x3
    tS16 index;		// @0x4
    br_vector3 pos;		// @0x8
    br_scalar speed;		// @0x14
    br_vector3 to_pos;		// @0x18
    br_vector3 offset;		// @0x24
    tPlayer_ID murderer;		// @0x30
    tU32 respawn_time_or_spin_period;		// @0x34
    tS8 frame;		// @0x38
} tNet_message_pedestrian;

typedef struct tNet_message_car_details_req {		// size: 0x2
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
} tNet_message_car_details_req;

typedef struct tCar_details {		// size: 0x14
    int car_index;		// @0x0
    char owner[16];		// @0x4
} tCar_details;

typedef struct tNet_message_car_details {		// size: 0x80
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    int count;		// @0x4
    tCar_details details[6];		// @0x8
} tNet_message_car_details;

typedef struct tGame_scores {		// size: 0xc
    int played;		// @0x0
    int won;		// @0x4
    int score;		// @0x8
} tGame_scores;

typedef struct tNet_message_game_scores {		// size: 0x4c
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tGame_scores scores[6];		// @0x4
} tNet_message_game_scores;

typedef struct tNet_message_oil_spill {		// size: 0x14
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID player;		// @0x4
    br_scalar full_size;		// @0x8
    br_scalar grow_rate;		// @0xc
    br_scalar current_size;		// @0x10
} tNet_message_oil_spill;

typedef struct tNet_message_crush_point {		// size: 0x18
    tU8 contents_size;		// @0x0
    tNet_message_type type;		// @0x1
    tPlayer_ID id;		// @0x4
    tU16 vertex;		// @0x8
    br_vector3 energy_vector;		// @0xc
} tNet_message_crush_point;

typedef struct tNet_contents {		// size: 0x160
    struct {		// size: 0x2
        tU8 contents_size;		// @0x0
        tNet_message_type type;		// @0x1
    } header;		// @0x0
    struct {		// size: 0x160
        tNet_message_send_me_details send_details;		// @0x0
        tNet_message_my_details details;		// @0x0
        tNet_message_join join;		// @0x0
        tNet_message_leave leave;		// @0x0
        tNet_message_host_pissing_off hosticide;		// @0x0
        tNet_message_new_player_list player_list;		// @0x0
        tNet_message_race_over race_over;		// @0x0
        tNet_message_status_report report;		// @0x0
        tNet_message_start_race start_race;		// @0x0
        tNet_message_guarantee_reply reply;		// @0x0
        tNet_message_headup headup;		// @0x0
        tNet_message_host_query where_we_at;		// @0x0
        tNet_message_host_reply heres_where_we_at;		// @0x0
        tNet_message_mechanics_info mech;		// @0x0
        tNet_message_non_car_info non_car;		// @0x0
        tNet_message_time_sync time_sync;		// @0x0
        tNet_message_players_confirm confirm;		// @0x0
        tNet_message_disable_car disable_car;		// @0x0
        tNet_message_enable_car enabled_car;		// @0x0
        tNet_message_powerup powerup;		// @0x0
        tNet_message_recover recover;		// @0x0
        tNet_message_scores scores;		// @0x0
        tNet_message_wasted wasted;		// @0x0
        tNet_message_pedestrian pedestrian;		// @0x0
        tNet_message_gameplay gameplay;		// @0x0
        tNet_message_non_car_position non_car_position;		// @0x0
        tNet_message_cop_info cop_info;		// @0x0
        tNet_message_car_details_req car_details_req;		// @0x0
        tNet_message_car_details car_details;		// @0x0
        tNet_message_game_scores game_scores;		// @0x0
        tNet_message_oil_spill oil_spill;		// @0x0
        tNet_message_crush_point crush;		// @0x0
    } data;		// @0x0
} tNet_contents;

typedef struct tNet_message {		// size: 0x17c
    tU32 pd_stuff_so_DO_NOT_USE;		// @0x0
    tU32 magic_number;		// @0x4
    tU32 guarantee_number;		// @0x8
    tPlayer_ID sender;		// @0xc
    int version;		// @0x10
    tU32 senders_time_stamp;		// @0x14
    tU16 num_contents;		// @0x18
    tU16 overall_size;		// @0x1a
    tNet_contents contents;		// @0x1c
} tNet_message;

typedef struct tCar_detail_info {		// size: 0x14
    tCar_detail_ownership ownership;		// @0x0
    char name[16];		// @0x4
} tCar_detail_info;

typedef struct tS3_vector3 {		// size: 0xc
    tF32 x;		// @0x0
    tF32 y;		// @0x4
    tF32 z;		// @0x8
} tS3_vector3;

typedef struct tWav_header {		// size: 0x2c
    char quote_RIFF[4];		// @0x0
    tU32 format_length;		// @0x4
    tU8 wave[4];		// @0x8
    tU8 fmt[4];		// @0xc
    tU32 wave_format_length;		// @0x10
    tU16 format_tag;		// @0x14
    tU16 channels;		// @0x16
    tU32 samples_per_sec;		// @0x18
    tU32 avg_bytes_per_sec;		// @0x1c
    tU16 block_align;		// @0x20
    tU16 bits_per_sample;		// @0x22
    tU8 data[4];		// @0x24
    tU32 data_length;		// @0x28
} tWav_header;

typedef struct tPowerup {		// size: 0x88
    tPowerup_type type;		// @0x0
    tU32 got_time;		// @0x4
    tU32 duration;		// @0x8
    tU32 lose_time;		// @0xc
    tU16 group_inclusion;		// @0x10
    br_pixelmap *icon;		// @0x14
    int fizzle_type;		// @0x18
    int number_of_float_params;		// @0x1c
    int number_of_integer_params;		// @0x20
    int *integer_params;		// @0x24
    int current_value;		// @0x28
    int prat_cam_event;		// @0x2c
    tNet_powerup_type net_type;		// @0x30
    tGot_proc got_proc;		// @0x34
    tLose_proc lose_proc;		// @0x38
    tPeriodic_proc periodic_proc;		// @0x3c
    float *float_params;		// @0x40
    tCar_spec *car;		// @0x44
    char message[64];		// @0x48
} tPowerup;

typedef struct tDepth_effect {		// size: 0x10
    tDepth_effect_type type;		// @0x0
    int start;		// @0x4
    int end;		// @0x8
    br_pixelmap *sky_texture;		// @0xc
} tDepth_effect;

typedef struct tPlane_spec {		// size: 0x14
    tPlane_type plane_type;		// @0x0
    br_fvector3 n;		// @0x4
    br_scalar d;		// @0x10
} tPlane_spec;

typedef struct tMaterial_modifiers {		// size: 0x28
    br_scalar car_wall_friction;		// @0x0
    br_scalar tyre_road_friction;		// @0x4
    br_scalar down_force;		// @0x8
    br_scalar bumpiness;		// @0xc
    int tyre_noise_index;		// @0x10
    int crash_noise_index;		// @0x14
    int scrape_noise_index;		// @0x18
    br_scalar sparkiness;		// @0x1c
    int smoke_type;		// @0x20
    br_material *skid_mark_material;		// @0x24
} tMaterial_modifiers;

typedef struct tSpecial_screen {		// size: 0x14
    br_material *material;		// @0x0
    br_scalar min_x;		// @0x4
    br_scalar min_z;		// @0x8
    br_scalar max_x;		// @0xc
    br_scalar max_z;		// @0x10
} tSpecial_screen;

typedef struct tRace_list_spec {		// size: 0x30
    char name[32];		// @0x0
    int rank_required;		// @0x20
    int best_rank;		// @0x24
    int suggested_rank;		// @0x28
    int been_there_done_that;		// @0x2c
} tRace_list_spec;

typedef struct tRace_save_info {		// size: 0x4
    tU32 been_there_done_that;		// @0x0
} tRace_save_info;

typedef struct tGraf_spec {		// size: 0x34
    int depth_bits;		// @0x0
    int depth_bytes;		// @0x4
    int doubled;		// @0x8
    int total_width;		// @0xc
    int total_height;		// @0x10
    long black_value;		// @0x14
    int colour_index;		// @0x18
    char *data_dir_name;		// @0x1c
    char *gfx_init_string;		// @0x20
    int row_bytes;		// @0x24
    int phys_width;		// @0x28
    int phys_height;		// @0x2c
    void *base_addr;		// @0x30
} tGraf_spec;

typedef struct tCollision_info {		// size: 0x33c
    int index;		// @0x0
    int disabled;		// @0x4
    tDriver driver;		// @0x8
    br_actor *car_master_actor;		// @0xc
    br_scalar min_torque_squared;		// @0x10
    br_scalar break_off_radians_squared;		// @0x14
    br_vector3 v;		// @0x18
    br_vector3 old_v;		// @0x24
    br_vector3 velocity_car_space;		// @0x30
    br_matrix34 oldmat;		// @0x3c
    br_matrix34 old_frame_mat;		// @0x6c
    br_vector3 pos;		// @0x9c
    br_vector3 omega;		// @0xa8
    br_vector3 oldomega;		// @0xb4
    br_scalar M;		// @0xc0
    int infinite_mass;		// @0xc4
    br_vector3 I;		// @0xc8
    br_vector3 cmpos;		// @0xd4
    int extra_point_num;		// @0xe0
    br_bounds bounds[3];		// @0xe4
    br_bounds max_bounds[2];		// @0x12c
    br_vector3 extra_points[6];		// @0x15c
    br_scalar original_extra_points_z[6];		// @0x1a4
    br_vector3 old_point;		// @0x1bc
    br_vector3 old_norm;		// @0x1c8
    int box_face_start;		// @0x1d4
    int box_face_end;		// @0x1d8
    int box_face_ref;		// @0x1dc
    br_matrix34 last_box_inv_mat;		// @0x1e0
    br_bounds last_box;		// @0x210
    int doing_nothing_flag;		// @0x228
    tSpecial_volume *last_special_volume;		// @0x22c
    tSpecial_volume *auto_special_volume;		// @0x230
    int frame_collision_flag;		// @0x234
    int collision_flag;		// @0x238
    int max_shrapnel_material;		// @0x23c
    br_vector3 direction;		// @0x240
    float speed;		// @0x24c
    tU16 car_ID;		// @0x250
    br_material *shrapnel_material[3];		// @0x254
    br_bounds bounds_world_space;		// @0x260
    tBounds_type bounds_ws_type;		// @0x278
    tU16 fire_vertex[12];		// @0x27c
    tU16 num_smoke_columns;		// @0x294
    br_vector3 water_normal;		// @0x298
    br_scalar water_d;		// @0x2a4
    br_scalar water_depth_factor;		// @0x2a8
    tNet_message_mechanics_info message;		// @0x2ac
    tU32 last_car_car_collision;		// @0x330
    br_scalar dt;		// @0x334
    tCar_spec_struct *who_last_hit_me;		// @0x338
} tCollision_info;

typedef struct tNon_car_spec {		// size: 0x370
    tCollision_info collision_info;		// @0x0
    br_scalar free_mass;		// @0x33c
    br_scalar attached_mass;		// @0x340
    br_vector3 free_cmpos;		// @0x344
    br_vector3 attached_cmpos;		// @0x350
    br_scalar min_torque_squared;		// @0x35c
    br_scalar snap_off_cosine;		// @0x360
    br_vector3 I_over_M;		// @0x364
} tNon_car_spec;

typedef struct tOpp_spec {		// size: 0x10
    int index;		// @0x0
    int ranking;		// @0x4
    int net_player_index;		// @0x8
    tCar_spec *car_spec;		// @0xc
} tOpp_spec;

typedef struct tCheckpoint {		// size: 0x120
    int time_value[3];		// @0x0
    int quad_count;		// @0xc
    br_vector3 vertices[4][4];		// @0x10
    br_vector3 normal[4];		// @0xd0
    int map_left[2];		// @0x100
    int map_top[2];		// @0x108
    int map_right[2];		// @0x110
    int map_bottom[2];		// @0x118
} tCheckpoint;

typedef struct tNet_starts {		// size: 0x10
    br_vector3 pos;		// @0x0
    br_scalar yaw;		// @0xc
} tNet_starts;

typedef struct tText_chunk {		// size: 0x34
    int frame_cue;		// @0x0
    int frame_end;		// @0x4
    int x_coord;		// @0x8
    int y_coord;		// @0xc
    int line_count;		// @0x10
    char *text[8];		// @0x14
} tText_chunk;

typedef struct tRace_info {		// size: 0x1174
    char name[32];		// @0x0
    char track_file_name[14];		// @0x20
    int rank_required;		// @0x30
    int best_rank;		// @0x34
    int suggested_rank;		// @0x38
    int total_laps;		// @0x3c
    int check_point_count;		// @0x40
    int initial_timer[3];		// @0x44
    int bonus_score[8][3];		// @0x50
    int number_of_racers;		// @0xb0
    int number_of_net_start_points;		// @0xb4
    int text_chunk_count;		// @0xb8
    tNet_starts net_starts[24];		// @0xbc
    tCheckpoint checkpoints[10];		// @0x23c
    tOpp_spec opponent_list[30];		// @0xd7c
    tU8 *scene_image_data;		// @0xf5c
    tU8 *map_image_data;		// @0xf60
    tU8 *info_image_data;		// @0xf64
    tU32 scene_image_data_length;		// @0xf68
    tU32 map_image_data_length;		// @0xf6c
    tU32 info_image_data_length;		// @0xf70
    br_vector3 initial_position;		// @0xf74
    br_scalar initial_yaw;		// @0xf80
    br_pixelmap *map_image;		// @0xf84
    br_matrix34 map_transformation;		// @0xf88
    tText_chunk *text_chunks;		// @0xfb8
    tMaterial_modifiers material_modifiers[11];		// @0xfbc
} tRace_info;

typedef struct tOpponent_save_info {		// size: 0x4
    tU32 dead;		// @0x0
} tOpponent_save_info;

typedef struct tOpponent {		// size: 0x90
    char name[24];		// @0x0
    char abbrev_name[24];		// @0x18
    char mug_shot_name[14];		// @0x30
    char car_file_name[14];		// @0x3e
    char stolen_car_flic_name[14];		// @0x4c
    tU8 *mug_shot_image_data;		// @0x5c
    tU8 *stolen_car_image_data;		// @0x60
    tU32 mug_shot_image_data_length;		// @0x64
    tU32 stolen_car_image_data_length;		// @0x68
    int car_number;		// @0x6c
    int strength_rating;		// @0x70
    int picked;		// @0x74
    int dead;		// @0x78
    int text_chunk_count;		// @0x7c
    tNet_avail network_availability;		// @0x80
    br_pixelmap *grid_icon_image;		// @0x84
    tOppo_psyche psyche;		// @0x88
    tText_chunk *text_chunks;		// @0x8c
} tOpponent;

typedef struct tProgram_state {		// size: 0x356c
    tS32 credits;		// @0x0
    tS32 credits_earned;		// @0x4
    tS32 credits_lost;		// @0x8
    tU32 view_change_start;		// @0xc
    tU32 pratcam_move_start;		// @0x10
    int peds_killed;		// @0x14
    int sausage_eater_mode;		// @0x18
    int rank;		// @0x1c
    int loaded;		// @0x20
    int last_slot;		// @0x24
    int skill_level;		// @0x28
    int parts_shop_visited;		// @0x2c
    int racing;		// @0x30
    int cut_scene;		// @0x34
    int saving;		// @0x38
    int loading;		// @0x3c
    int dont_save_or_load;		// @0x40
    int dont_load;		// @0x44
    int mirror_on;		// @0x48
    int prat_cam_on;		// @0x4c
    int cockpit_on;		// @0x50
    int cockpit_image_index;		// @0x54
    int current_render_left;		// @0x58
    int current_render_top;		// @0x5c
    int current_render_right;		// @0x60
    int current_render_bottom;		// @0x64
    int frame_rate_headup;		// @0x68
    int revs;		// @0x6c
    int music_volume;		// @0x70
    int effects_volume;		// @0x74
    int current_race_index;		// @0x78
    int redo_race_index;		// @0x7c
    int credits_per_rank;		// @0x80
    int game_completed;		// @0x84
    int number_of_cars;		// @0x88
    int current_car_index;		// @0x8c
    tWhich_view which_view;		// @0x90
    tWhich_view new_view;		// @0x94
    tWhich_view pending_view;		// @0x98
    tWhich_view old_view;		// @0x9c
    tRace_sel_view_type view_type;		// @0xa0
    tProg_status prog_status;		// @0xa4
    tFrank_anne frank_or_anniness;		// @0xa8
    tAuto_parts_reply auto_parts_reply;		// @0xac
    tCar_spec current_car;		// @0xb0
    char player_name[2][14];		// @0x1b4c
    char track_file_name[14];		// @0x1b68
    char car_name[14];		// @0x1b76
    int cars_available[60];		// @0x1b84
    br_vector3 initial_position;		// @0x1c74
    br_scalar initial_yaw;		// @0x1c80
    tTrack_spec track_spec;		// @0x1c84
    tDepth_effect default_depth_effect;		// @0x1cb0
    tDepth_effect current_depth_effect;		// @0x1cc0
    int special_volume_count;		// @0x1cd0
    tSpecial_volume *special_volumes;		// @0x1cd4
    br_material *standard_screen;		// @0x1cd8
    br_material *standard_screen_dark;		// @0x1cdc
    br_material *standard_screen_fog;		// @0x1ce0
    int special_screens_count;		// @0x1ce4
    tSpecial_screen *special_screens;		// @0x1ce8
    tIntelligent_vehicles AI_vehicles;		// @0x1cec
    tNon_car_spec *non_cars;		// @0x3564
    int num_non_car_spaces;		// @0x3568
} tProgram_state;

typedef struct tDR_font {		// size: 0x39c
    br_pixelmap *images;		// @0x0
    int file_read_once;		// @0x4
    int height;		// @0x8
    int width;		// @0xc
    int spacing;		// @0x10
    int offset;		// @0x14
    int num_entries;		// @0x18
    int width_table[224];		// @0x1c
} tDR_font;

typedef struct tGraf_data {		// size: 0x478
    int width;		// @0x0
    int height;		// @0x4
    int rolling_letter_y_pitch;		// @0x8
    int save_slot_y_offset;		// @0xc
    int rolling_letter_x_pitch;		// @0x10
    int save_slot_x_offset;		// @0x14
    int save_slot_rank_x_offset;		// @0x18
    int save_slot_credits_x_offset;		// @0x1c
    int save_slot_height;		// @0x20
    int save_slot_letter_height;		// @0x24
    int save_slot_table[41];		// @0x28
    int player_name_y;		// @0xcc
    int player_name_x[2];		// @0xd0
    int enter_name_x[2];		// @0xd8
    int enter_name_y;		// @0xe0
    int frank_panel_left;		// @0xe4
    int frank_panel_top;		// @0xe8
    int frank_panel_right;		// @0xec
    int frank_panel_bottom;		// @0xf0
    int anne_panel_left;		// @0xf4
    int anne_panel_top;		// @0xf8
    int anne_panel_right;		// @0xfc
    int anne_panel_bottom;		// @0x100
    int cock_margin_x;		// @0x104
    int cock_margin_y;		// @0x108
    int total_cock_width;		// @0x10c
    int total_cock_height;		// @0x110
    int dial__x[2];		// @0x114
    int dial__y[2];		// @0x11c
    int dial__x_centre;		// @0x124
    int dial__y_centre;		// @0x128
    int start_race_panel_left;		// @0x12c
    int start_race_panel_top;		// @0x130
    int start_race_panel_right;		// @0x134
    int start_race_panel_bottom;		// @0x138
    int start_race_panel_top_clip;		// @0x13c
    int start_race_panel_bottom_clip;		// @0x140
    int choose_race_rank_right;		// @0x144
    int choose_race_name_left;		// @0x148
    int choose_race_bullet_left;		// @0x14c
    int choose_race_left;		// @0x150
    int choose_race_right;		// @0x154
    int choose_race_y_top;		// @0x158
    int choose_race_y_bottom;		// @0x15c
    int choose_race_y_pitch;		// @0x160
    int choose_race_curr_y;		// @0x164
    int choose_race_box_left;		// @0x168
    int choose_race_box_top;		// @0x16c
    int choose_race_line_y;		// @0x170
    int choose_race_current_text_x;		// @0x174
    int choose_race_current_text_y;		// @0x178
    int choose_race_current_num_x;		// @0x17c
    int grid_x_pitch;		// @0x180
    int grid_y_pitch;		// @0x184
    int grid_x_stagger;		// @0x188
    int grid_left_x;		// @0x18c
    int grid_top_y;		// @0x190
    int grid_left_clip;		// @0x194
    int grid_top_clip;		// @0x198
    int grid_right_clip;		// @0x19c
    int grid_bottom_clip;		// @0x1a0
    int grid_numbers_left;		// @0x1a4
    int grid_numbers_top;		// @0x1a8
    int grid_numbers_right;		// @0x1ac
    int grid_marker_margin;		// @0x1b0
    int grid_marker_x_len;		// @0x1b4
    int dare_mugshot_left;		// @0x1b8
    int dare_mugshot_top;		// @0x1bc
    int dare_mugshot_width;		// @0x1c0
    int dare_mugshot_height;		// @0x1c4
    int dare_text_left;		// @0x1c8
    int dare_text_width;		// @0x1cc
    int dare_mug_left_margin;		// @0x1d0
    int dare_mug_top_margin;		// @0x1d4
    int dare_y_adjust;		// @0x1d8
    int parts_image_x;		// @0x1dc
    int parts_image_y;		// @0x1e0
    int parts_image_width;		// @0x1e4
    int parts_image_height;		// @0x1e8
    int parts_cost_x;		// @0x1ec
    int parts_cost_y;		// @0x1f0
    int parts_total_x;		// @0x1f4
    int parts_total_y;		// @0x1f8
    int parts_net_x;		// @0x1fc
    int parts_net_y;		// @0x200
    int parts_numbers_x;		// @0x204
    int parts_top_clip;		// @0x208
    int parts_bottom_clip;		// @0x20c
    int parts_label_x;		// @0x210
    int parts_label_y;		// @0x214
    int summ1_credits_box_left;		// @0x218
    int summ1_credits_left;		// @0x21c
    int summ1_credits_right;		// @0x220
    int summ1_earned_top;		// @0x224
    int summ1_earned_bottom;		// @0x228
    int summ1_lost_top;		// @0x22c
    int summ1_lost_bottom;		// @0x230
    int summ1_total_top;		// @0x234
    int summ1_total_bottom;		// @0x238
    int summ1_rank_x_pitch;		// @0x23c
    int summ1_rank_inc_l;		// @0x240
    int summ1_rank_inc_c;		// @0x244
    int summ1_rank_total_l;		// @0x248
    int summ1_rank_total_c;		// @0x24c
    int summ1_rank_inc_left;		// @0x250
    int summ1_rank_inc_right;		// @0x254
    int summ1_rank_total_left;		// @0x258
    int summ1_rank_total_right;		// @0x25c
    int summ1_rank_top;		// @0x260
    int summ1_rank_bot;		// @0x264
    int summ1_rank_y;		// @0x268
    int wreck_name_left;		// @0x26c
    int wreck_name_right;		// @0x270
    int wreck_name_top;		// @0x274
    int wreck_name_bottom;		// @0x278
    int wreck_name_base_line;		// @0x27c
    int wreck_render_x;		// @0x280
    int wreck_render_y;		// @0x284
    int wreck_render_w;		// @0x288
    int wreck_render_h;		// @0x28c
    int power_up_icon_x;		// @0x290
    int power_up_icon_countdown_x;		// @0x294
    int power_up_icon_y;		// @0x298
    int power_up_icon_y_pitch;		// @0x29c
    int power_up_icon_countdown_y_offset;		// @0x2a0
    int change_car_text_y;		// @0x2a4
    int change_car_line_left;		// @0x2a8
    int change_car_line_y;		// @0x2ac
    int change_car_line_right;		// @0x2b0
    int change_car_panel_left;		// @0x2b4
    int change_car_panel_top;		// @0x2b8
    int change_car_panel_right;		// @0x2bc
    int change_car_panel_bottom;		// @0x2c0
    int change_car_panel_top_clip;		// @0x2c4
    int change_car_panel_bottom_clip;		// @0x2c8
    int map_timer_text_x;		// @0x2cc
    int map_timer_text_y;		// @0x2d0
    int map_timer_border_x;		// @0x2d4
    int map_timer_border_y;		// @0x2d8
    int action_replay_R_x;		// @0x2dc
    int action_replay_R_y;		// @0x2e0
    int action_replay_controls_x;		// @0x2e4
    int action_replay_controls_y;		// @0x2e8
    int action_replay_hilite_y;		// @0x2ec
    int action_replay_rew_start_x;		// @0x2f0
    int action_replay_rew_x;		// @0x2f4
    int action_replay_rev_play_x;		// @0x2f8
    int action_replay_pause_x;		// @0x2fc
    int action_replay_play_x;		// @0x300
    int action_replay_ffwd_x;		// @0x304
    int action_replay_fwd_end_x;		// @0x308
    int action_replay_camera_x;		// @0x30c
    int action_replay_cam_text_x;		// @0x310
    int action_replay_cam_text_y;		// @0x314
    int joinable_games_x_1;		// @0x318
    int joinable_games_x_2;		// @0x31c
    int joinable_games_x_3;		// @0x320
    int joinable_games_x_4;		// @0x324
    int joinable_games_x_r;		// @0x328
    int joinable_games_y;		// @0x32c
    int joinable_games_y_pitch;		// @0x330
    int joinable_games_sel_left;		// @0x334
    int joinable_games_sel_right;		// @0x338
    int joinable_games_sel_top_marg;		// @0x33c
    int joinable_games_sel_bot_marg;		// @0x340
    int net_player_name_x;		// @0x344
    int net_player_name_y;		// @0x348
    int error_box_left;		// @0x34c
    int error_box_top;		// @0x350
    int error_box_right;		// @0x354
    int error_box_bottom;		// @0x358
    int start_synch_x_0;		// @0x35c
    int start_synch_x_1;		// @0x360
    int start_synch_x_2;		// @0x364
    int start_synch_x_r;		// @0x368
    int start_synch_top;		// @0x36c
    int start_synch_y_pitch;		// @0x370
    int start_synch_start_x;		// @0x374
    int start_synch_start_y;		// @0x378
    int key_assign_col_1;		// @0x37c
    int key_assign_col_1_a;		// @0x380
    int key_assign_col_2;		// @0x384
    int key_assign_col_2_a;		// @0x388
    int key_assign_y_pitch;		// @0x38c
    int key_assign_y;		// @0x390
    int key_assign_key_map_y;		// @0x394
    int key_assign_flic_x;		// @0x398
    int key_assign_flic_y;		// @0x39c
    int map_render_x_marg;		// @0x3a0
    int map_render_y_marg;		// @0x3a4
    int net_head_box_x;		// @0x3a8
    int net_head_box_pitch;		// @0x3ac
    int net_head_box_width;		// @0x3b0
    int net_head_box_top;		// @0x3b4
    int net_head_box_bot;		// @0x3b8
    int net_head_name_x_marg;		// @0x3bc
    int net_head_name_y;		// @0x3c0
    int net_head_num_x;		// @0x3c4
    int net_head_num_y;		// @0x3c8
    int net_head_num_height;		// @0x3cc
    int net_head_icon_x;		// @0x3d0
    int net_head_icon_y;		// @0x3d4
    int net_head_icon_height;		// @0x3d8
    int net_head_score_x;		// @0x3dc
    int net_head_score_y;		// @0x3e0
    int armour_headup_y[2];		// @0x3e4
    int power_headup_y[2];		// @0x3ec
    int offense_headup_y[2];		// @0x3f4
    int ps_dim_left;		// @0x3fc
    int ps_dim_right;		// @0x400
    int ps_dim_height;		// @0x404
    int ps_name_left;		// @0x408
    int ps_name_top_border;		// @0x40c
    int ps_bars_per_level;		// @0x410
    int ps_x_pitch;		// @0x414
    int ps_bar_top_border;		// @0x418
    int ps_bar_left;		// @0x41c
    int ps_bar_height;		// @0x420
    int net_choose_race_x;		// @0x424
    int net_choose_race_y;		// @0x428
    int net_descr_race_l;		// @0x42c
    int net_descr_race_r;		// @0x430
    int net_descr_race_top;		// @0x434
    int net_descr_race_bot;		// @0x438
    int net_sum_x_1;		// @0x43c
    int net_sum_x_2;		// @0x440
    int net_sum_x_3;		// @0x444
    int net_sum_x_4;		// @0x448
    int net_sum_x_5;		// @0x44c
    int net_sum_headings_y;		// @0x450
    int net_sum_y_pitch;		// @0x454
    int graph_opt_disable_x;		// @0x458
    int graph_opt_disable_y;		// @0x45c
    int sound_opt_disable_x;		// @0x460
    int sound_opt_disable_y;		// @0x464
    int net_message_enter_x;		// @0x468
    int net_message_enter_y;		// @0x46c
    int eval_x;		// @0x470
    int eval_y;		// @0x474
} tGraf_data;

typedef struct tRolling_letter {		// size: 0x38
    int letters[9];		// @0x0
    int x_coord;		// @0x24
    int y_coord;		// @0x28
    int number_of_letters;		// @0x2c
    tRolling_type rolling_type;		// @0x30
    float current_offset;		// @0x34
} tRolling_letter;

typedef struct tFlic_descriptor {		// size: 0x70
    char *data;		// @0x0
    char *data_start;		// @0x4
    char file_name[32];		// @0x8
    tU8 *first_pixel;		// @0x28
    tU32 bytes_remaining;		// @0x2c
    tU32 frame_period;		// @0x30
    tU32 last_frame;		// @0x34
    br_pixelmap *the_pixelmap;		// @0x38
    int x_offset;		// @0x3c
    int y_offset;		// @0x40
    int width;		// @0x44
    int height;		// @0x48
    int frames_left;		// @0x4c
    int current_frame;		// @0x50
    int the_index;		// @0x54
    int new_format;		// @0x58
    int must_finish;		// @0x5c
    int bytes_still_to_be_read;		// @0x60
    int bytes_in_buffer;		// @0x64
    FILE *f;		// @0x68
    tFlic_descriptor_ptr next;		// @0x6c
} tFlic_descriptor;

typedef struct tBrender_storage {		// size: 0x34
    int models_count;		// @0x0
    int materials_count;		// @0x4
    int shade_tables_count;		// @0x8
    int pixelmaps_count;		// @0xc
    int max_pixelmaps;		// @0x10
    int max_shade_tables;		// @0x14
    int max_materials;		// @0x18
    int max_models;		// @0x1c
    br_model **models;		// @0x20
    br_pixelmap **pixelmaps;		// @0x24
    br_pixelmap **shade_tables;		// @0x28
    br_material **materials;		// @0x2c
    br_pixelmap **saved_colour_maps;		// @0x30
} tBrender_storage;

typedef struct tSave_game {		// size: 0x3b4
    char slot_name[16];		// @0x0
    char car_name[16];		// @0x10
    char player_name[2][14];		// @0x20
    tRace_save_info race_info[100];		// @0x3c
    tOpponent_save_info opponent_info[48];		// @0x1cc
    tU32 credits;		// @0x28c
    tU32 rank;		// @0x290
    tU32 skill_level;		// @0x294
    tU32 game_completed;		// @0x298
    tU32 number_of_cars;		// @0x29c
    tU32 cars_available[60];		// @0x2a0
    tU32 current_car_index;		// @0x390
    tU32 current_race_index;		// @0x394
    tU32 redo_race_index;		// @0x398
    tU32 frank_or_annitude;		// @0x39c
    tU32 power_up_levels[3];		// @0x3a0
    tU32 version;		// @0x3ac
    tU32 checksum;		// @0x3b0
} tSave_game;

typedef struct tPed_subs {		// size: 0x8
    int orig;		// @0x0
    int subs;		// @0x4
} tPed_subs;

typedef struct tRadio_bastards {		// size: 0x20
    int count;		// @0x0
    int top;		// @0x4
    int current_value;		// @0x8
    int left[5];		// @0xc
} tRadio_bastards;

typedef struct exception_struct {		// size: 0xc
    tException_list next;		// @0x0
    char *name;		// @0x4
    int flags;		// @0x8
} tException_node;

typedef struct tPixelmap_user_data {		// size: 0x4
    tU16 orig_width;		// @0x0
    tU16 orig_height;		// @0x2
} tPixelmap_user_data;

typedef struct fmt_vertex {		// size: 0x20
    br_vector3 p;		// @0x0
    br_vector2 map;		// @0xc
    br_vector3 n;		// @0x14
} DR_VERTEX;

typedef struct v11face {		// size: 0x1c
    br_uint_16 vertices[3];		// @0x0
    br_uint_16 edges[3];		// @0x6
    br_vector4 eqn;		// @0xc
} DR_FACE;

typedef struct v11group {		// size: 0x24
    void *stored;		// @0x0
    v11face *faces;		// @0x4
    br_colour *face_colours;		// @0x8
    br_uint_16 *face_user;		// @0xc
    fmt_vertex *vertices;		// @0x10
    br_colour *vertex_colours;		// @0x14
    br_uint_16 *vertex_user;		// @0x18
    br_uint_16 nfaces;		// @0x1c
    br_uint_16 nvertices;		// @0x1e
    br_uint_16 nedges;		// @0x20
} v11group;

typedef struct v11model {		// size: 0x1c
    br_size_t size;		// @0x0
    br_uint_32 flags;		// @0x4
    br_uint_16 ngroups;		// @0x8
    br_vector3 pivot;		// @0xc
    v11group *groups;		// @0x18
} v11model;

typedef struct tMatrix_and_actor {		// size: 0x8
    br_matrix34 *m;		// @0x0
    br_actor *a;		// @0x4
} tMatrix_and_actor;

typedef tU16 tChunk_subject_index;

typedef enum tShadow_level {
    eShadow_none = 0,
    eShadow_us_only = 1,
    eShadow_us_and_opponents = 2,
    eShadow_everyone = 3
} tShadow_level;

typedef enum tPipe_chunk_type {
    ePipe_chunk_actor_rstyle = 0,
    ePipe_chunk_actor_translate = 1,
    ePipe_chunk_actor_transform = 2,
    ePipe_chunk_actor_create = 3,
    ePipe_chunk_actor_destroy = 4,
    ePipe_chunk_actor_relink = 5,
    ePipe_chunk_actor_material = 6,
    ePipe_chunk_face_material = 7,
    ePipe_chunk_material_trans = 8,
    ePipe_chunk_material_pixelmap = 9,
    ePipe_chunk_model_geometry = 10,
    ePipe_chunk_pedestrian = 11,
    ePipe_chunk_frame_boundary = 12,
    ePipe_chunk_car = 13,
    ePipe_chunk_sound = 14,
    ePipe_chunk_damage = 15,
    ePipe_chunk_special = 16,
    ePipe_chunk_ped_gib = 17,
    ePipe_chunk_incident = 18,
    ePipe_chunk_spark = 19,
    ePipe_chunk_shrapnel = 20,
    ePipe_chunk_screen_shake = 21,
    ePipe_chunk_groove_stop = 22,
    ePipe_chunk_non_car = 23,
    ePipe_chunk_smoke = 24,
    ePipe_chunk_oil_spill = 25,
    ePipe_chunk_smoke_column = 26,
    ePipe_chunk_flame = 27,
    ePipe_chunk_smudge = 28,
    ePipe_chunk_splash = 29,
    ePipe_chunk_prox_ray = 30,
    ePipe_chunk_skid_adjustment = 31,
    ePipe_chunk_enum_count = 32
} tPipe_chunk_type;

typedef enum tSpecial_type {
    ePipe_special_fade = 0,
    ePipe_special_giant_ped_on = 1,
    ePipe_special_giant_ped_off = 2,
    ePipe_special_min_ped_on = 3,
    ePipe_special_min_ped_off = 4
} tSpecial_type;

typedef enum tIncident_type {
    eIncident_ped = 0,
    eIncident_car = 1,
    eIncident_wall = 2,
    eNo_incident = 3
} tIncident_type;

typedef enum tAction_replay_camera_type {
    eAction_replay_standard = 0,
    eAction_replay_tv = 1,
    eAction_replay_action = 2
} tAction_replay_camera_type;

typedef enum tKey_down_result {
    tKey_down_no = 0,
    tKey_down_yes = 1,
    tKey_down_still = 2,
    tKey_down_repeat = 3
} tKey_down_result;
typedef int dr_pick2d_cbfn(br_actor*, br_model*, br_material*, br_vector3*, br_vector3*, br_scalar, br_scalar, void*);
typedef struct tReduced_pos {		// size: 0x6
    tS16 v[3];		// @0x0
} tReduced_pos;

typedef struct tIncident_info {		// size: 0x10
    struct {		// size: 0x10
        tCar_spec *car;		// @0x0
        br_vector3 impact_point;		// @0x4
    } car_info;		// @0x0
    struct {		// size: 0x8
        br_actor *ped_actor;		// @0x0
        br_actor *murderer_actor;		// @0x4
    } ped_info;		// @0x0
    struct {		// size: 0xc
        br_vector3 pos;		// @0x0
    } wall_info;		// @0x0
} tIncident_info;

typedef struct tChanged_vertex {		// size: 0x10
    tU16 vertex_index;		// @0x0
    br_vector3 delta_coordinates;		// @0x4
} tChanged_vertex;

typedef struct tPipe_actor_rstyle_data {		// size: 0x1
    tU8 new_rstyle;		// @0x0
} tPipe_actor_rstyle_data;

typedef struct tPipe_actor_translate_data {		// size: 0xc
    br_vector3 new_translation;		// @0x0
} tPipe_actor_translate_data;

typedef struct tPipe_actor_transform_data {		// size: 0x30
    br_matrix34 new_transformation;		// @0x0
} tPipe_actor_transform_data;

typedef struct tPipe_actor_create_data {		// size: 0x1
    tU8 dummy;		// @0x0
} tPipe_actor_create_data;

typedef struct tPipe_actor_destroy_data {		// size: 0x1
    tU8 dummy;		// @0x0
} tPipe_actor_destroy_data;

typedef struct tPipe_actor_relink_data {		// size: 0x2
    tChunk_subject_index new_parent;		// @0x0
} tPipe_actor_relink_data;

typedef struct tPipe_actor_material_data {		// size: 0x2
    tChunk_subject_index new_material;		// @0x0
} tPipe_actor_material_data;

typedef struct tPipe_face_material_data {		// size: 0x4
    tU16 face_index;		// @0x0
    tChunk_subject_index new_material;		// @0x2
} tPipe_face_material_data;

typedef struct tPipe_material_trans_data {		// size: 0x18
    br_matrix23 new_transformation;		// @0x0
} tPipe_material_trans_data;

typedef struct tPipe_material_pixelmap_data {		// size: 0x2
    tChunk_subject_index new_pixelmap;		// @0x0
} tPipe_material_pixelmap_data;

typedef struct tPipe_model_geometry_data {		// size: 0x18
    tU16 vertex_count;		// @0x0
    int model_index;		// @0x4
    tChanged_vertex vertex_changes[1];		// @0x8
} tPipe_model_geometry_data;

typedef struct tSmudged_vertex {		// size: 0x4
    tU16 vertex_index;		// @0x0
    tU16 light_index;		// @0x2
} tSmudged_vertex;

typedef struct tPipe_smudge_data {		// size: 0xc
    tU16 vertex_count;		// @0x0
    int model_index;		// @0x4
    tSmudged_vertex vertex_changes[1];		// @0x8
} tPipe_smudge_data;

typedef struct tPipe_pedestrian_data {		// size: 0x28
    tU8 action_and_frame_index;		// @0x0
    tS8 hit_points;		// @0x1
    tU16 parent;		// @0x2
    br_vector3 new_translation;		// @0x4
    float spin_period;		// @0x10
    br_actor *parent_actor;		// @0x14
    br_vector3 offset;		// @0x18
    br_scalar jump_magnitude;		// @0x24
} tPipe_pedestrian_data;

typedef struct tPipe_frame_boundary_data {		// size: 0x4
    tU32 time;		// @0x0
} tPipe_frame_boundary_data;

typedef struct tPipe_car_data {		// size: 0x48
    br_matrix34 transformation;		// @0x0
    br_vector3 velocity;		// @0x30
    tS16 speedo_speed;		// @0x3c
    tS16 steering_angle;		// @0x3e
    tU16 revs_and_gear;		// @0x40
    tS8 lf_sus_position;		// @0x42
    tS8 rf_sus_position;		// @0x43
    tS8 lr_sus_position;		// @0x44
    tS8 rr_sus_position;		// @0x45
} tPipe_car_data;

typedef struct tPipe_sound_data {		// size: 0x14
    tS3_pitch pitch;		// @0x0
    br_vector3 position;		// @0x4
    tU16 outlet_index;		// @0x10
    tU16 volume;		// @0x12
} tPipe_sound_data;

typedef struct tPipe_damage_data {		// size: 0xc
    tS8 damage_delta[12];		// @0x0
} tPipe_damage_data;

typedef struct tPipe_special_data {		// size: 0x2
    tU8 dummy;		// @0x0
    tS8 padding;		// @0x1
} tPipe_special_data;

typedef struct tPipe_ped_gib_data {		// size: 0x34
    tU16 ped_parent_index;		// @0x0
    tU8 size;		// @0x2
    tU8 gib_index;		// @0x3
    br_matrix34 transform;		// @0x4
} tPipe_ped_gib_data;

typedef struct tPipe_incident_data {		// size: 0x14
    float severity;		// @0x0
    struct {		// size: 0x10
        struct {		// size: 0x10
            tU16 car_ID;		// @0x0
            br_vector3 impact_point;		// @0x4
        } car_info;		// @0x0
        struct {		// size: 0x8
            tU16 ped_index;		// @0x0
            br_actor *actor;		// @0x4
        } ped_info;		// @0x0
        struct {		// size: 0xc
            br_vector3 pos;		// @0x0
        } wall_info;		// @0x0
    } info;		// @0x4
} tPipe_incident_data;

typedef struct tPipe_spark_data {		// size: 0x18
    br_vector3 pos;		// @0x0
    br_vector3 v;		// @0xc
} tPipe_spark_data;

typedef struct tPipe_shrapnel_data {		// size: 0x14
    br_vector3 pos;		// @0x0
    tU16 age;		// @0xc
    br_material *material;		// @0x10
} tPipe_shrapnel_data;

typedef struct tPipe_screen_shake_data {		// size: 0x2
    tS8 wobble_x;		// @0x0
    tS8 wobble_y;		// @0x1
} tPipe_screen_shake_data;

typedef struct tPipe_non_car_data {		// size: 0x34
    br_actor *actor;		// @0x0
    br_matrix34 mat;		// @0x4
} tPipe_non_car_data;

typedef struct tPipe_smoke_data {		// size: 0xa
    tReduced_pos pos;		// @0x0
    tU16 radius;		// @0x6
    tU8 strength;		// @0x8
    tU8 type;		// @0x9
} tPipe_smoke_data;

typedef struct tPipe_smoke_column_data {		// size: 0x8
    int car_ID;		// @0x0
    tU16 vertex;		// @0x4
} tPipe_smoke_column_data;

typedef struct tPipe_flame_data {		// size: 0x14
    tS16 frame_count;		// @0x0
    br_scalar scale_x;		// @0x4
    br_scalar scale_y;		// @0x8
    br_scalar offset_x;		// @0xc
    br_scalar offset_z;		// @0x10
} tPipe_flame_data;

typedef struct tPipe_splash_data {		// size: 0x10
    br_scalar d;		// @0x0
    br_vector3 normal;		// @0x4
} tPipe_splash_data;

typedef struct tPipe_prox_ray_data {		// size: 0x8
    tU16 ped_index;		// @0x0
    tU16 car_ID;		// @0x2
    tU32 time;		// @0x4
} tPipe_prox_ray_data;

typedef struct tPipe_oil_spill_data {		// size: 0x54
    br_matrix34 mat;		// @0x0
    br_scalar full_size;		// @0x30
    br_scalar grow_rate;		// @0x34
    tU32 spill_time;		// @0x38
    tU32 previous_stop_time;		// @0x3c
    tCar_spec *car;		// @0x40
    br_vector3 original_pos;		// @0x44
    br_pixelmap *pixelmap;		// @0x50
} tPipe_oil_spill_data;

typedef struct tPipe_groove_stop_data {		// size: 0x40
    int path_interrupt;		// @0x0
    int object_interrupt;		// @0x4
    float path_resumption;		// @0x8
    float object_resumption;		// @0xc
    br_matrix34 matrix;		// @0x10
} tPipe_groove_stop_data;

typedef struct tPipe_skid_adjustment {		// size: 0x34
    br_matrix34 matrix;		// @0x0
    int material_index;		// @0x30
} tPipe_skid_adjustment;

typedef struct tPipe_chunk {		// size: 0x58
    tChunk_subject_index subject_index;		// @0x0
    struct {		// size: 0x54
        tPipe_actor_rstyle_data actor_rstyle_data;		// @0x0
        tPipe_actor_translate_data actor_translate_data;		// @0x0
        tPipe_actor_transform_data actor_transform_data;		// @0x0
        tPipe_actor_create_data actor_create_data;		// @0x0
        tPipe_actor_destroy_data actor_destroy_data;		// @0x0
        tPipe_actor_relink_data actor_relink_data;		// @0x0
        tPipe_actor_material_data actor_material_data;		// @0x0
        tPipe_face_material_data face_material_data;		// @0x0
        tPipe_material_trans_data material_trans_data;		// @0x0
        tPipe_material_pixelmap_data material_pixelmap_data;		// @0x0
        tPipe_model_geometry_data model_geometry_data;		// @0x0
        tPipe_pedestrian_data pedestrian_data;		// @0x0
        tPipe_frame_boundary_data frame_boundary_data;		// @0x0
        tPipe_car_data car_data;		// @0x0
        tPipe_sound_data sound_data;		// @0x0
        tPipe_damage_data damage_data;		// @0x0
        tPipe_special_data special_data;		// @0x0
        tPipe_ped_gib_data ped_gib_data;		// @0x0
        tPipe_incident_data incident_data;		// @0x0
        tPipe_spark_data spark_data;		// @0x0
        tPipe_shrapnel_data shrapnel_data;		// @0x0
        tPipe_screen_shake_data screen_shake_data;		// @0x0
        tPipe_groove_stop_data groove_stop_data;		// @0x0
        tPipe_non_car_data non_car_data;		// @0x0
        tPipe_smoke_data smoke_data;		// @0x0
        tPipe_oil_spill_data oil_data;		// @0x0
        tPipe_smoke_column_data smoke_column_data;		// @0x0
        tPipe_flame_data flame_data;		// @0x0
        tPipe_smudge_data smudge_data;		// @0x0
        tPipe_splash_data splash_data;		// @0x0
        tPipe_prox_ray_data prox_ray_data;		// @0x0
        tPipe_skid_adjustment skid_adjustment;		// @0x0
    } chunk_data;		// @0x4
} tPipe_chunk;

typedef struct tPipe_session {		// size: 0x60
    tPipe_chunk_type chunk_type;		// @0x0
    tU8 number_of_chunks;		// @0x4
    tPipe_chunk chunks;		// @0x8
} tPipe_session;

typedef struct tCollison_data {		// size: 0x8
    int ref;		// @0x0
    tCollision_info *car;		// @0x4
} tCollison_data;

typedef struct tSave_camera {		// size: 0xc
    int saved;		// @0x0
    br_scalar zoom;		// @0x4
    br_angle yaw;		// @0x8
} tSave_camera;

typedef void * tEdit_func();

typedef enum tEdit_mode {
    eEdit_mode_cheat = 0,
    eEdit_mode_acc = 1,
    eEdit_mode_spec_vol = 2,
    eEdit_mode_ped = 3,
    eEdit_mode_opp = 4,
    eEdit_mode_pratcam = 5,
    eEdit_mode_depth = 6,
    eEdit_mode_damage = 7,
    eEdit_mode_bonnet = 8,
    eEdit_mode_options = 9,
    eEdit_mode_count = 10
} tEdit_mode;
typedef struct tToggle_element {		// size: 0x18
    int key1;		// @0x0
    int key2;		// @0x4
    int in_game_only;		// @0x8
    int exact_modifiers;		// @0xc
    int on_last_time;		// @0x10
    void (*action_proc)();		// @0x14
} tToggle_element;

typedef struct tCheat {		// size: 0x10
    tU32 code;		// @0x0
    tU32 code2;		// @0x4
    void (*action_proc)(int);		// @0x8
    int num;		// @0xc
} tCheat;

typedef _tag_sos_evds_struct _SOS_EVDS_STRUCT;
typedef _tag_sos_vds_struct _SOS_VDS_STRUCT;
typedef _tag_sos_sample _SOS_SAMPLE;
typedef _SOS_SAMPLE * PSOSSAMPLE;
typedef _tagCAPABILITIES _SOS_CAPABILITIES;
typedef _SOS_CAPABILITIES * PSOSCAPABILITIES;
typedef _SOS_HARDWARE * PSOSHARDWARE;
typedef _tag_sos_driver _SOS_DIGI_DRIVER;
typedef _SOS_DIGI_DRIVER * PSOSDIGIDRIVER;
typedef _SOS_DRV_FILEHEADER * PSOSDRVFILEHEADER;
typedef _SOS_DRV_DRIVERHEADER * PSOSDRVDRIVERHEADER;
typedef _tag_sos_system _SOS_SYSTEM;
typedef _SOS_SYSTEM * PSOSSYSTEM;
typedef _tag_sos_det_system _SOS_DET_SYSTEM;
typedef _SOS_DET_SYSTEM * PSOSDETSYSTEM;
typedef _tag_sos_timer_system _SOS_TIMER_SYSTEM;
typedef _SOS_TIMER_SYSTEM * PSOSTIMERSYSTEM;
typedef int ptrdiff_t;
typedef SmackTag Smack;
typedef SmackSumTag SmackSum;
typedef void * SmackTimerSetupType(void);
typedef unsigned long * SmackTimerReadType(void);
typedef void * SmackTimerDoneType(void);
typedef _heapinfo _HEAPINFO;
typedef struct _tag_sos_evds_struct {		// size: 0x14
    unsigned int region_size;		// @0x0
    unsigned int offset;		// @0x4
    unsigned int segment;		// @0x8
    unsigned short number_available;		// @0xc
    unsigned short number_used;		// @0xe
    unsigned int page0;		// @0x10
} _SOS_EVDS_STRUCT;

typedef struct _tag_sos_vds_struct {		// size: 0x10
    unsigned int region_size;		// @0x0
    unsigned int offset;		// @0x4
    unsigned short segment;		// @0x8
    unsigned short ID;		// @0xa
    unsigned int physical;		// @0xc
} _SOS_VDS_STRUCT;

typedef struct _tag_sos_sample {		// size: 0xf0
    PSTR pSample;		// @0x0
    PSTR pSampleCurrent;		// @0x4
    PSTR pSampleLoop;		// @0x8
    DWORD wLength;		// @0xc
    DWORD wLoopLength;		// @0x10
    DWORD wLoopEndLength;		// @0x14
    DWORD wLoopStage;		// @0x18
    DWORD wID;		// @0x1c
    DWORD wFlags;		// @0x20
    DWORD wPriority;		// @0x24
    DWORD hSample;		// @0x28
    DWORD wVolume;		// @0x2c
    DWORD wLoopCount;		// @0x30
    DWORD wRate;		// @0x34
    DWORD wBitsPerSample;		// @0x38
    DWORD wChannels;		// @0x3c
    DWORD wFormat;		// @0x40
    DWORD wPanPosition;		// @0x44
    DWORD wPanSpeed;		// @0x48
    DWORD wPanStart;		// @0x4c
    DWORD wPanEnd;		// @0x50
    DWORD wPanMode;		// @0x54
    DWORD wTotalBytesProcessed;		// @0x58
    void (*pfnSampleProcessed)(_tag_sos_sample*);		// @0x5c
    void (*pfnSampleDone)(_tag_sos_sample*);		// @0x60
    void (*pfnSampleLoop)(_tag_sos_sample*);		// @0x64
    DWORD wSystem[16];		// @0x68
    DWORD wUser[16];		// @0xa8
    _tag_sos_sample *pLink;		// @0xe8
    _tag_sos_sample *pNext;		// @0xec
} _SOS_SAMPLE;

typedef struct _tagCAPABILITIES {		// size: 0x6c
    BYTE szDeviceName[32];		// @0x0
    W32 wDeviceVersion;		// @0x20
    W32 wBitsPerSample;		// @0x24
    W32 wChannels;		// @0x28
    W32 wMinRate;		// @0x2c
    W32 wMaxRate;		// @0x30
    W32 wMixerOnBoard;		// @0x34
    W32 wMixerFlags;		// @0x38
    W32 wFlags;		// @0x3c
    short *lpPortList;		// @0x40
    short *lpDMAList;		// @0x48
    short *lpIRQList;		// @0x50
    short *lpRateList;		// @0x58
    W32 fBackground;		// @0x60
    W32 wID;		// @0x64
    W32 wTimerID;		// @0x68
} _SOS_CAPABILITIES;

typedef struct _SOS_HARDWARE {		// size: 0x10
    W32 wPort;		// @0x0
    W32 wIRQ;		// @0x4
    W32 wDMA;		// @0x8
    W32 wParam;		// @0xc
} _SOS_HARDWARE;

typedef struct _tag_sos_driver {		// size: 0x10c
    W32 wFlags;		// @0x0
    DWORD wDriverRate;		// @0x4
    DWORD wDriverChannels;		// @0x8
    DWORD wDriverBitsPerSample;		// @0xc
    DWORD wDriverFormat;		// @0x10
    DWORD wMixerChannels;		// @0x14
    DWORD wDMACountRegister;		// @0x18
    DWORD wDMAPosition;		// @0x1c
    DWORD wDMALastPosition;		// @0x20
    DWORD wDMADistance;		// @0x24
    PSTR pXFERPosition;		// @0x28
    DWORD wXFERJumpAhead;		// @0x2c
    _SOS_SAMPLE *pSampleList;		// @0x30
    void (*pfnPseudoDMAFunction)();		// @0x34
    PSTR pDMABuffer;		// @0x3c
    PSTR pDMABufferEnd;		// @0x40
    DWORD wDMABufferSize;		// @0x44
    PSTR pMixingBuffer;		// @0x48
    PSTR pMixingBufferEnd;		// @0x4c
    DWORD wMixingBufferSize;		// @0x50
    DWORD wActiveChannels;		// @0x54
    _SOS_SAMPLE *pSamples;		// @0x58
    _SOS_HARDWARE sHardware;		// @0x5c
    _SOS_CAPABILITIES sCaps;		// @0x6c
    LPSTR lpDriverDS;		// @0xd8
    LPSTR lpDriverCS;		// @0xe0
    W32 wSize;		// @0xe8
    DWORD dwLinear;		// @0xec
    DWORD dwDMAPhysical;		// @0xf0
    LPSTR lpDMABuffer;		// @0xf4
    W32 hMemory;		// @0xfc
    W32 wDMARealSeg;		// @0x100
    W32 wID;		// @0x104
    void (*pfnMixFunction)();		// @0x108
} _SOS_DIGI_DRIVER;

typedef struct _SOS_DRV_FILEHEADER {		// size: 0x2c
    BYTE szName[32];		// @0x0
    W32 wDrivers;		// @0x20
    W32 lOffset;		// @0x24
    W32 lFileSize;		// @0x28
} _SOS_DRV_FILEHEADER;

typedef struct _SOS_DRV_DRIVERHEADER {		// size: 0x30
    BYTE szName[32];		// @0x0
    W32 lNextDriver;		// @0x20
    W32 wSize;		// @0x24
    W32 wDeviceID;		// @0x28
    W32 wExtenderType;		// @0x2c
} _SOS_DRV_DRIVERHEADER;

typedef struct _tag_sos_system {		// size: 0x18c
    W32 wFlags;		// @0x0
    BYTE szDriverPath[128];		// @0x4
    BYTE szTempDriverPath[128];		// @0x84
    PSOSDIGIDRIVER pDriver[5];		// @0x104
    _SOS_VDS_STRUCT sVDS;		// @0x118
    _SOS_DRV_FILEHEADER sFileHeader;		// @0x128
    _SOS_DRV_DRIVERHEADER sDriverHeader;		// @0x154
    PSTR (*pMemAllocFunction)(DWORD);		// @0x184
    void (*pMemFreeFunction)(PSTR, W32);		// @0x188
} _SOS_SYSTEM;

typedef struct _tag_sos_det_system {		// size: 0x1f4
    W32 wFlags;		// @0x0
    BYTE szDriverPath[128];		// @0x4
    BYTE szTempDriverPath[128];		// @0x84
    _SOS_DRV_FILEHEADER sFileHeader;		// @0x104
    _SOS_DRV_DRIVERHEADER sDriverHeader;		// @0x130
    _SOS_CAPABILITIES sCaps;		// @0x160
    PSOSCAPABILITIES pCaps;		// @0x1cc
    LPSTR lpBufferDS;		// @0x1d0
    LPSTR lpBufferCS;		// @0x1d8
    W32 hFile;		// @0x1e0
    DWORD dwDriverIndex;		// @0x1e4
    W32 wDriverIndexCur;		// @0x1e8
    W32 hMemory;		// @0x1ec
    DWORD dwLinear;		// @0x1f0
} _SOS_DET_SYSTEM;

typedef struct _tag_sos_timer_system {		// size: 0x14c
    W32 wFlags;		// @0x0
    W32 wChipDivisor;		// @0x4
    void (*pfnEvent[16])();		// @0x8
    W32 wEventRate[16];		// @0x48
    DWORD dwAdditiveFraction[16];		// @0x88
    DWORD dwCurrentSummation[16];		// @0xc8
    W32 wMIDIEventSongHandle[16];		// @0x108
    W32 wMIDIActiveSongHandle;		// @0x148
} _SOS_TIMER_SYSTEM;

typedef struct SmackTag {		// size: 0x3a4
    unsigned long Version;		// @0x0
    unsigned long Width;		// @0x4
    unsigned long Height;		// @0x8
    unsigned long Frames;		// @0xc
    unsigned long MSPerFrame;		// @0x10
    unsigned long SmackerType;		// @0x14
    unsigned long LargestInTrack[7];		// @0x18
    unsigned long tablesize;		// @0x34
    unsigned long codesize;		// @0x38
    unsigned long absize;		// @0x3c
    unsigned long detailsize;		// @0x40
    unsigned long typesize;		// @0x44
    unsigned long TrackType[7];		// @0x48
    unsigned long extra;		// @0x64
    unsigned long NewPalette;		// @0x68
    unsigned char Palette[772];		// @0x6c
    unsigned long PalType;		// @0x370
    unsigned long FrameNum;		// @0x374
    unsigned long FrameSize;		// @0x378
    unsigned long SndSize;		// @0x37c
    unsigned long LastRectx;		// @0x380
    unsigned long LastRecty;		// @0x384
    unsigned long LastRectw;		// @0x388
    unsigned long LastRecth;		// @0x38c
    unsigned long OpenFlags;		// @0x390
    unsigned long LeftOfs;		// @0x394
    unsigned long TopOfs;		// @0x398
    unsigned long ReadError;		// @0x39c
    unsigned long addr32;		// @0x3a0
} Smack;

typedef struct SmackSumTag {		// size: 0x54
    unsigned long TotalTime;		// @0x0
    unsigned long MS100PerFrame;		// @0x4
    unsigned long TotalOpenTime;		// @0x8
    unsigned long TotalFrames;		// @0xc
    unsigned long SkippedFrames;		// @0x10
    unsigned long SoundSkips;		// @0x14
    unsigned long TotalBlitTime;		// @0x18
    unsigned long TotalReadTime;		// @0x1c
    unsigned long TotalDecompTime;		// @0x20
    unsigned long TotalBackReadTime;		// @0x24
    unsigned long TotalReadSpeed;		// @0x28
    unsigned long SlowestFrameTime;		// @0x2c
    unsigned long Slowest2FrameTime;		// @0x30
    unsigned long SlowestFrameNum;		// @0x34
    unsigned long Slowest2FrameNum;		// @0x38
    unsigned long AverageFrameSize;		// @0x3c
    unsigned long Highest1SecRate;		// @0x40
    unsigned long Highest1SecFrame;		// @0x44
    unsigned long HighestMemAmount;		// @0x48
    unsigned long TotalExtraMemory;		// @0x4c
    unsigned long HighestExtraUsed;		// @0x50
} SmackSum;

typedef struct _heapinfo {		// size: 0xe
    void *_pentry;		// @0x0
    size_t _size;		// @0x6
    int _useflag;		// @0xa
} _HEAPINFO;


typedef enum tSpec_vol_depth_effect {
    eSpec_dep_acid = 0,
    eSpec_dep_water = 1,
    eSpec_dep_slight_fog = 2,
    eSpec_dep_med_fog = 3,
    eSpec_dep_thick_fog = 4
} tSpec_vol_depth_effect;

typedef enum tSpec_vol_cam_effect {
    eSpec_cam_wobble = 0
} tSpec_vol_cam_effect;

typedef enum tHeadup_type {
    eHeadup_unused = 0,
    eHeadup_text = 1,
    eHeadup_coloured_text = 2,
    eHeadup_image = 3,
    eHeadup_fancy = 4,
    eHeadup_box_text = 5
} tHeadup_type;

typedef enum tFancy_stage {
    eFancy_stage_incoming = 0,
    eFancy_stage_halting = 1,
    eFancy_stage_waiting = 2,
    eFancy_stage_readying = 3,
    eFancy_stage_leaving = 4
} tFancy_stage;
typedef struct tHeadup {		// size: 0x14c
    tHeadup_type type;		// @0x0
    int x;		// @0x4
    int y;		// @0x8
    int original_x;		// @0xc
    int right_edge;		// @0x10
    int flash_period;		// @0x14
    int slot_index;		// @0x18
    int dimmed_background;		// @0x1c
    int dim_left;		// @0x20
    int dim_top;		// @0x24
    int dim_right;		// @0x28
    int dim_bottom;		// @0x2c
    int clever;		// @0x30
    int cockpit_anchored;		// @0x34
    int flash_state;		// @0x38
    tJustification justification;		// @0x3c
    tU32 end_time;		// @0x40
    tU32 last_flash;		// @0x44
    struct {		// size: 0x104
        struct {		// size: 0x104
            char text[250];		// @0x0
            int colour;		// @0xfc
            br_font *font;		// @0x100
        } text_info;		// @0x0
        struct {		// size: 0x100
            char text[250];		// @0x0
            tDR_font *coloured_font;		// @0xfc
        } coloured_text_info;		// @0x0
        struct {		// size: 0x4
            br_pixelmap *image;		// @0x0
        } image_info;		// @0x0
        struct {		// size: 0x18
            br_pixelmap *image;		// @0x0
            int offset;		// @0x4
            int shear_amount;		// @0x8
            int end_offset;		// @0xc
            tFancy_stage fancy_stage;		// @0x10
            tU32 start_time;		// @0x14
        } fancy_info;		// @0x0
    } data;		// @0x48
} tHeadup;

typedef struct tQueued_headup {		// size: 0x10c
    int flash_rate;		// @0x0
    int lifetime;		// @0x4
    int font_index;		// @0x8
    char text[256];		// @0xc
} tQueued_headup;

typedef unsigned long time_t;
typedef unsigned long clock_t;
typedef struct tFlicette {		// size: 0x14
    int flic_index;		// @0x0
    int x[2];		// @0x4
    int y[2];		// @0xc
} tFlicette;

typedef struct tMouse_area {		// size: 0x30
    int left[2];		// @0x0
    int top[2];		// @0x8
    int right[2];		// @0x10
    int bottom[2];		// @0x18
    int new_choice;		// @0x20
    int new_mode;		// @0x24
    int available_when_typing;		// @0x28
    int (*mouse_click)(int*, int*, int, int);		// @0x2c
} tMouse_area;

typedef struct tRectile {		// size: 0x20
    int left[2];		// @0x0
    int top[2];		// @0x8
    int right[2];		// @0x10
    int bottom[2];		// @0x18
} tRectile;

typedef struct tInterface_spec {		// size: 0x12c
    int initial_imode;		// @0x0
    int first_opening_flic;		// @0x4
    int second_opening_flic;		// @0x8
    int end_flic_go_ahead;		// @0xc
    int end_flic_escaped;		// @0x10
    int end_flic_otherwise;		// @0x14
    int flic_bunch_to_load;		// @0x18
    int move_left_new_mode[2];		// @0x1c
    int move_left_delta[2];		// @0x24
    int move_left_min[2];		// @0x2c
    int move_left_max[2];		// @0x34
    int (*move_left_proc[2])(int*, int*);		// @0x3c
    int move_right_new_mode[2];		// @0x44
    int move_right_delta[2];		// @0x4c
    int move_right_min[2];		// @0x54
    int move_right_max[2];		// @0x5c
    int (*move_right_proc[2])(int*, int*);		// @0x64
    int move_up_new_mode[2];		// @0x6c
    int move_up_delta[2];		// @0x74
    int move_up_min[2];		// @0x7c
    int move_up_max[2];		// @0x84
    int (*move_up_proc[2])(int*, int*);		// @0x8c
    int move_down_new_mode[2];		// @0x94
    int move_down_delta[2];		// @0x9c
    int move_down_min[2];		// @0xa4
    int move_down_max[2];		// @0xac
    int (*move_down_proc[2])(int*, int*);		// @0xb4
    int go_ahead_allowed[2];		// @0xbc
    int (*go_ahead_proc[2])(int*, int*);		// @0xc4
    int escape_allowed[2];		// @0xcc
    int (*escape_proc[2])(int*, int*);		// @0xd4
    int (*exit_proc)(int*, int*);		// @0xdc
    void (*draw_proc)(int, int);		// @0xe0
    tU32 time_out;		// @0xe4
    void (*start_proc1)();		// @0xe8
    void (*start_proc2)();		// @0xec
    int (*done_proc)(int, int, int, int, int);		// @0xf0
    int font_needed;		// @0xf4
    int typeable[2];		// @0xf8
    void (*get_original_string)(int, int, char*, int*);		// @0x100
    int escape_code;		// @0x104
    int dont_save_or_load;		// @0x108
    int number_of_button_flics;		// @0x10c
    tFlicette *flicker_on_flics;		// @0x110
    tFlicette *flicker_off_flics;		// @0x114
    tFlicette *pushed_flics;		// @0x118
    int number_of_mouse_areas;		// @0x11c
    tMouse_area *mouse_areas;		// @0x120
    int number_of_recopy_areas;		// @0x124
    tRectile *recopy_areas;		// @0x128
} tInterface_spec;

typedef struct tm {		// size: 0x24
    int tm_sec;		// @0x0
    int tm_min;		// @0x4
    int tm_hour;		// @0x8
    int tm_mday;		// @0xc
    int tm_mon;		// @0x10
    int tm_year;		// @0x14
    int tm_wday;		// @0x18
    int tm_yday;		// @0x1c
    int tm_isdst;		// @0x20
} tm;


typedef enum view_to_screen_type {
    BR_VTOS_PARALLEL = 0,
    BR_VTOS_PERSPECTIVE = 1,
    BR_VTOS_4X4 = 2
} view_to_screen_type;
typedef void dev_fill_cbfn(br_device*, br_pixelmap*, br_uint_32);
typedef void dev_rectangle_copy_cbfn(br_device*, br_pixelmap*, br_uint_16, br_uint_16, br_pixelmap*, br_uint_16, br_uint_16, br_uint_16, br_uint_16);
typedef void dev_rectangle_fill_cbfn(br_device*, br_pixelmap*, br_uint_16, br_uint_16, br_uint_16, br_uint_16, br_uint_32);
typedef void dev_dirty_rectangle_copy_cbfn(br_device*, br_pixelmap*, br_pixelmap*, br_uint_16, br_uint_16, br_uint_16, br_uint_16);
typedef void dev_dirty_rectangle_fill_cbfn(br_device*, br_pixelmap*, br_uint_16, br_uint_16, br_uint_16, br_uint_16, br_uint_32);
typedef void dev_plot_cbfn(br_device*, br_pixelmap*, br_uint_16, br_uint_16, br_uint_32);
typedef void dev_copy_cbfn(br_device*, br_pixelmap*, br_pixelmap*);
typedef void dev_line_cbfn(br_device*, br_pixelmap*, br_int_16, br_int_16, br_int_16, br_int_16, br_uint_32);
typedef void dev_copy_bits_cbfn(br_device*, br_pixelmap*, br_int_16, br_int_16, br_uint_8*, br_uint_16, br_uint_16, br_uint_16, br_uint_16, br_uint_32);
typedef br_pixelmap* dev_double_buffer_cbfn(br_device*, br_pixelmap*, br_pixelmap*);
typedef br_pixelmap* dev_match_cbfn(br_device*, br_pixelmap*, br_uint_8);
typedef br_pixelmap* dev_clone_cbfn(br_device*, br_pixelmap*);
typedef void dev_free_cbfn(br_device*, br_pixelmap*);
typedef int dr_modelpick2d_cbfn(br_model*, br_material*, br_vector3*, br_vector3*, br_scalar, int, int, int, br_vector3*, br_vector2*, void*);
typedef int dr_pick3d_cbfn(br_actor*, br_model*, br_material*, br_matrix34*, br_bounds*, void*);
typedef struct fw_fn_table {		// size: 0x28
    br_surface_fn *light;		// @0x0
    br_surface_fn *light_material;		// @0x4
    br_surface_fn *light_vertex;		// @0x8
    br_surface_fn *light_texture;		// @0xc
    br_face_surface_fn *face_light;		// @0x10
    br_light_sub_fn *direct;		// @0x14
    br_light_sub_fn *point;		// @0x18
    br_light_sub_fn *point_attn;		// @0x1c
    br_light_sub_fn *spot;		// @0x20
    br_light_sub_fn *spot_attn;		// @0x24
} fw_fn_table;

typedef struct tFlic_spec {		// size: 0x24
    char *file_name;		// @0x0
    int interruptable;		// @0x4
    int queued;		// @0x8
    int frame_rate;		// @0xc
    int repeat;		// @0x10
    int x_offset;		// @0x14
    int y_offset;		// @0x18
    tS8 *data_ptr;		// @0x1c
    tU32 the_size;		// @0x20
} tFlic_spec;

typedef struct tFlic_bunch {		// size: 0x8
    char count;		// @0x0
    int *indexes;		// @0x4
} tFlic_bunch;

typedef struct tTranslation_record {		// size: 0x20
    int flic_index;		// @0x0
    int x;		// @0x4
    int y;		// @0x8
    int font_index;		// @0xc
    int global;		// @0x10
    int every_frame;		// @0x14
    tJustification justification;		// @0x18
    char *text;		// @0x1c
} tTranslation_record;


typedef enum tVehicle_category {
    eVehicle_self = 0,
    eVehicle_opponent = 1,
    eVehicle_rozzer = 2,
    eVehicle_drone = 3
} tVehicle_category;
typedef struct tTransient_bm {		// size: 0x18
    br_pixelmap *pixmap;		// @0x0
    int in_use;		// @0x4
    int x_coord;		// @0x8
    int y_coord;		// @0xc
    int order_number;		// @0x10
    int user_data;		// @0x14
} tTransient_bm;

typedef struct tCursor_giblet {		// size: 0x30
    int current_giblet;		// @0x0
    int sequence_index;		// @0x4
    int landed;		// @0x8
    int transient_index;		// @0xc
    float x_speed;		// @0x10
    float y_speed;		// @0x14
    float x_coord;		// @0x18
    float y_coord;		// @0x1c
    float the_speed;		// @0x20
    tU32 last_giblet_change;		// @0x24
    tU32 giblet_change_period;		// @0x28
    tU32 e_t_a;		// @0x2c
} tCursor_giblet;

typedef struct tWobble_spec {		// size: 0x10
    float amplitude_x;		// @0x0
    float amplitude_y;		// @0x4
    float period;		// @0x8
    int time_started;		// @0xc
} tWobble_spec;

typedef struct tConcussion {		// size: 0x68
    int concussed;		// @0x0
    br_matrix34 amplitudes;		// @0x4
    br_matrix34 periods;		// @0x34
    tU32 time_started;		// @0x64
} tConcussion;

typedef struct tSaved_table {		// size: 0x8
    br_pixelmap *original;		// @0x0
    br_pixelmap *copy;		// @0x4
} tSaved_table;

typedef struct tClip_details {		// size: 0x8
    br_actor *clip;		// @0x0
    br_scalar length;		// @0x4
} tClip_details;

typedef tS3_channel tS3_channel;
typedef tS3_sound_source tS3_sound_source;
typedef tS3_outlet tS3_outlet;
typedef tS3_descriptor tS3_descriptor;

typedef enum tS3_sound_type {
    eS3_ST_sample = 0,
    eS3_ST_midi = 1,
    eS3_ST_cda = 2
} tS3_sound_type;
typedef struct tS3_channel {		// size: 0x7c
    int active;		// @0x0
    int termination_reason;		// @0x4
    int needs_service;		// @0x8
    int repetitions;		// @0xc
    int rate;		// @0x10
    int spatial_sound;		// @0x14
    unsigned int song_handle;		// @0x18
    tS3_sound_tag tag;		// @0x1c
    tS3_type type;		// @0x20
    tS3_volume left_volume;		// @0x24
    tS3_volume right_volume;		// @0x28
    float volume_multiplier;		// @0x2c
    tS3_vector3 position;		// @0x30
    tS3_vector3 velocity;		// @0x3c
    tS3_vector3 lastpos;		// @0x48
    tS3_volume initial_volume;		// @0x54
    tS3_pitch initial_pitch;		// @0x58
    float pMax_distance_squared;		// @0x5c
    tS3_outlet *owner_outlet;		// @0x60
    tS3_descriptor *descriptor;		// @0x64
    tS3_channel *next;		// @0x68
    char *type_struct_sample;		// @0x6c
    char *type_struct_midi;		// @0x70
    char *type_struct_cda;		// @0x74
    tS3_sound_source *sound_source_ptr;		// @0x78
} tS3_channel;

typedef struct tS3_outlet {		// size: 0x1c
    int id;		// @0x0
    int max_channels;		// @0x4
    int independent_pitch;		// @0x8
    tS3_channel *channel_list;		// @0xc
    tS3_outlet *prev;		// @0x10
    tS3_outlet *next;		// @0x14
    tS3_outlet_callback *callback;		// @0x18
} tS3_outlet;

typedef struct tS3_descriptor {		// size: 0x48
    tS3_sound_id id;		// @0x0
    tS3_type type;		// @0x4
    tS3_priority priority;		// @0x8
    tS3_repeats repeats;		// @0xc
    tS3_volume min_volume;		// @0x10
    tS3_volume max_volume;		// @0x14
    tS3_pitch min_pitch;		// @0x18
    tS3_pitch max_pitch;		// @0x1c
    tS3_speed min_speed;		// @0x20
    tS3_speed max_speed;		// @0x24
    tS3_descriptor *prev;		// @0x28
    tS3_descriptor *next;		// @0x2c
    int flags;		// @0x30
    int midi_song_handle;		// @0x34
    int special_fx;		// @0x38
    int memory_proxy;		// @0x3c
    char *sound_data;		// @0x40
    char *filename;		// @0x44
} tS3_descriptor;

typedef struct tS3_sound_source {		// size: 0x44
    tS3_channel *channel;		// @0x0
    int brender_vector;		// @0x4
    void *position_ptr;		// @0x8
    void *velocity_ptr;		// @0xc
    tS3_outlet *bound_outlet;		// @0x10
    tS3_sound_source *prev;		// @0x14
    tS3_sound_source *next;		// @0x18
    int ambient;		// @0x1c
    tS3_repeats ambient_repeats;		// @0x20
    int time_since_last_played;		// @0x24
    tS3_sound_id sound_id;		// @0x28
    float max_distance_sq;		// @0x2c
    int period;		// @0x30
    tS3_volume volume;		// @0x34
    tS3_pitch pitch;		// @0x38
    tS3_speed speed;		// @0x3c
    tS3_sound_tag tag;		// @0x40
} tS3_sound_source;

typedef struct tS3_sample {		// size: 0x18
    int size;		// @0x0
    int rate;		// @0x4
    int resolution;		// @0x8
    int channels;		// @0xc
    char *dataptr;		// @0x10
    void *freeptr;		// @0x14
} tS3_sample;

typedef struct tS3_hardware_info {		// size: 0x20
    int device_installed;		// @0x0
    int timer_installed;		// @0x4
    int num_channels;		// @0x8
    int max_resolution;		// @0xc
    int stereo_flag;		// @0x10
    int max_sample_rate;		// @0x14
    int min_sample_rate;		// @0x18
    int independent_pitch;		// @0x1c
} tS3_hardware_info;


typedef enum tNet_head_avail {
    eNet_or_otherwise = 0,
    eNet_only = 1,
    eNot_net = 2,
    eNot_ever_ever_ever = 3
} tNet_head_avail;
typedef struct tModel_pool {		// size: 0x8
    br_model **model_array;		// @0x0
    int model_count;		// @0x4
} tModel_pool;

typedef struct tHeadup_info {		// size: 0x8
    char *name;		// @0x0
    tNet_head_avail avail;		// @0x4
} tHeadup_info;


typedef enum tTime_bonus_state {
    eTime_bonus_none = 0,
    eTime_bonus_initial_pause = 1,
    eTime_bonus_race_bonus = 2,
    eTime_bonus_tb_up = 3,
    eTime_bonus_tb_pause = 4,
    eTime_bonus_tb_down = 5,
    eTime_bonus_end_pause = 6
} tTime_bonus_state;

typedef enum tInfo_mode {
    eInfo_regular = 0,
    eInfo_pcam_car = 1,
    eInfo_nearby_mat = 2,
    eInfo_count = 3
} tInfo_mode;
typedef struct tHeadup_pair {		// size: 0xc
    int player_index;		// @0x0
    int score;		// @0x4
    int out_of_game;		// @0x8
} tHeadup_pair;

typedef struct tMax_message {		// size: 0x204
    char buffer[516];		// @0x0
} tMax_message;

typedef struct tMid_message {		// size: 0x84
    char buffer[132];		// @0x0
} tMid_message;

typedef struct tMin_message {		// size: 0x24
    char buffer[36];		// @0x0
} tMin_message;

typedef struct tGuaranteed_message {		// size: 0x2c
    tNet_message *message;		// @0x0
    tU32 send_time;		// @0x4
    tU32 next_resend_time;		// @0x8
    tU32 resend_period;		// @0xc
    int recieved;		// @0x10
    tPD_net_player_info pd_address;		// @0x14
    int (*NotifyFail)(tU32, tNet_message*);		// @0x24
    tU32 guarantee_number;		// @0x28
} tGuaranteed_message;


typedef enum tJoin_or_host_result {
    eJoin_or_host_cancel = 0,
    eJoin_or_host_join = 1,
    eJoin_or_host_host = 2
} tJoin_or_host_result;
typedef struct tJoinable_game {		// size: 0x8
    tNet_game_details *game;		// @0x0
    tU32 time;		// @0x4
} tJoinable_game;

typedef struct tOil_spill_info {		// size: 0x34
    br_actor *actor;		// @0x0
    tCar_spec *car;		// @0x4
    tU32 spill_time;		// @0x8
    tU32 stop_time;		// @0xc
    br_scalar full_size;		// @0x10
    br_scalar current_size;		// @0x14
    br_scalar grow_rate;		// @0x18
    br_vector3 original_pos;		// @0x1c
    br_vector3 pos;		// @0x28
} tOil_spill_info;


typedef enum tJoy_calib_stage {
    eJoy_calib_tl_1 = 0,
    eJoy_calib_br_1 = 1,
    eJoy_calib_cn_1 = 2,
    eJoy_calib_tl_2 = 3,
    eJoy_calib_br_2 = 4,
    eJoy_calib_cn_2 = 5
} tJoy_calib_stage;

typedef enum tPed_instruc_type {
    ePed_instruc_point = 0,
    ePed_instruc_xpoint = 1,
    ePed_instruc_bchoice = 2,
    ePed_instruc_fchoice = 3,
    ePed_instruc_dead = 4,
    ePed_instruc_bmarker = 5,
    ePed_instruc_fmarker = 6,
    ePed_instruc_baction = 7,
    ePed_instruc_faction = 8,
    ePed_instruc_reverse = 9
} tPed_instruc_type;

typedef enum tPed_frame_rate_type {
    ePed_frame_fixed = 0,
    ePed_frame_speed = 1,
    ePed_frame_variable = 2
} tPed_frame_rate_type;

typedef enum tPed_collide_type {
    ePed_collide_on = 0,
    ePed_collide_none = 255
} tPed_collide_type;

typedef enum tPed_hit_position {
    ePed_hit_unknown = 0,
    ePed_hit_front = 1,
    ePed_hit_back = 2,
    ePed_hit_rside = 3,
    ePed_hit_lside = 4
} tPed_hit_position;
typedef struct tPed_choice {		// size: 0x4
    tU16 danger_level;		// @0x0
    tU8 percentage_chance;		// @0x2
    tU8 marker_ref;		// @0x3
} tPed_choice;

typedef struct tPedestrian_instruction {		// size: 0x14
    tPed_instruc_type type;		// @0x0
    struct {		// size: 0x10
        struct {		// size: 0x10
            br_vector3 position;		// @0x0
            int irreversable;		// @0xc
        } point_data;		// @0x0
        struct {		// size: 0xc
            int number_of_choices;		// @0x0
            tPed_choice choices[2];		// @0x4
        } choice_data;		// @0x0
        struct {		// size: 0x4
            int death_sequence;		// @0x0
        } death_data;		// @0x0
        struct {		// size: 0x4
            int marker_ref;		// @0x0
        } marker_data;		// @0x0
        struct {		// size: 0x4
            int action_index;		// @0x0
        } action_data;		// @0x0
    } data;		// @0x4
} tPedestrian_instruction;

typedef struct tBearing_sequence {		// size: 0x8
    int sequence_index;		// @0x0
    float max_bearing;		// @0x4
} tBearing_sequence;

typedef struct tPedestrian_action {		// size: 0x60
    float danger_level;		// @0x0
    float percentage_chance;		// @0x4
    int number_of_bearings;		// @0x8
    int number_of_sounds;		// @0xc
    int sounds[3];		// @0x10
    tBearing_sequence sequences[7];		// @0x1c
    float initial_speed;		// @0x54
    float looping_speed;		// @0x58
    tU32 reaction_time;		// @0x5c
} tPedestrian_action;

typedef struct tPed_frame_info {		// size: 0x10
    br_vector2 offset;		// @0x0
    int flipped;		// @0x8
    br_pixelmap *pixelmap;		// @0xc
} tPed_frame_info;

typedef struct tPedestrian_sequence {		// size: 0xb4
    tPed_frame_rate_type frame_rate_type;		// @0x0
    float frame_rate_factor1;		// @0x4
    float frame_rate_factor2;		// @0x8
    int number_of_frames;		// @0xc
    int looping_frame_start;		// @0x10
    tPed_frame_info frames[10];		// @0x14
} tPedestrian_sequence;

typedef struct tPedestrian_data {		// size: 0xe4
    int magic_number;		// @0x0
    br_scalar height;		// @0x4
    br_scalar jump_magnitude;		// @0x8
    br_scalar car_to_ped;		// @0xc
    br_scalar min_x;		// @0x10
    br_scalar max_x;		// @0x14
    int credits_value;		// @0x18
    int hit_points;		// @0x1c
    int number_of_exploding_sounds;		// @0x20
    int exploding_sounds[3];		// @0x24
    int falling_sound;		// @0x30
    int last_sound_action;		// @0x34
    tU16 killers_ID;		// @0x38
    br_scalar width;		// @0x3c
    br_scalar height2;		// @0x40
    tCar_spec *fate;		// @0x44
    br_actor *actor;		// @0x48
    tPlayer_ID murderer;		// @0x4c
    tPedestrian_instruction *instruction_list;		// @0x50
    tPedestrian_action *action_list;		// @0x54
    tU8 ref_number;		// @0x58
    tU8 active;		// @0x59
    tU8 munged;		// @0x5a
    tU8 collided_last_time;		// @0x5b
    tU8 flipped;		// @0x5c
    tU8 reverse_frames;		// @0x5d
    tU8 sent_dead_message;		// @0x5e
    tS8 image_index;		// @0x5f
    tS8 number_of_actions;		// @0x60
    tS8 number_of_instructions;		// @0x61
    tS8 first_instruction;		// @0x62
    tS8 current_instruction;		// @0x63
    tS8 fatal_car_impact_action;		// @0x64
    tS8 non_fatal_car_impact_action;		// @0x65
    tS8 after_impact_action;		// @0x66
    tS8 fatal_ground_impact_action;		// @0x67
    tS8 non_fatal_ground_impact_action;		// @0x68
    tS8 giblets_action;		// @0x69
    tS8 current_sequence;		// @0x6a
    tS8 current_action;		// @0x6b
    tS8 current_action_mode;		// @0x6c
    tS8 current_frame;		// @0x6d
    tS8 number_of_sequences;		// @0x6e
    tS8 done_initial;		// @0x6f
    tS8 giblets_being_sat_upon;		// @0x70
    tS8 mid_air;		// @0x71
    tS8 instruction_direction;		// @0x72
    tS8 irreversable;		// @0x73
    tS8 frightened_of_us;		// @0x74
    tS8 cloned;		// @0x75
    float current_speed;		// @0x78
    float acceleration;		// @0x7c
    float spin_period;		// @0x80
    tU32 last_frame;		// @0x84
    tU32 last_action_change;		// @0x88
    tU32 last_sound_make;		// @0x8c
    tS32 respawn_time;		// @0x90
    br_vector3 pos;		// @0x94
    br_vector3 direction;		// @0xa0
    br_vector3 from_pos;		// @0xac
    br_vector3 to_pos;		// @0xb8
    br_vector3 offset;		// @0xc4
    float falling_speed;		// @0xd0
    tSpecial_volume *last_special_volume;		// @0xd4
    tPedestrian_sequence *sequences;		// @0xd8
    tS3_sound_tag last_sound;		// @0xdc
    br_pixelmap *colour_map;		// @0xe0
} tPedestrian_data;

typedef struct tPed_gib {		// size: 0x28
    br_actor *actor;		// @0x0
    br_scalar x_speed;		// @0x4
    br_scalar y_speed;		// @0x8
    int size;		// @0xc
    int last_frame;		// @0x10
    int gib_index;		// @0x14
    int parent_index;		// @0x18
    tU32 start_time;		// @0x1c
    tU32 end_time;		// @0x20
    tU32 flip_period;		// @0x24
} tPed_gib;

typedef struct tPed_gib_materials {		// size: 0x18
    int count;		// @0x0
    br_material *materials[5];		// @0x4
} tPed_gib_materials;

typedef struct tProximity_ray {		// size: 0xc
    tCar_spec *car;		// @0x0
    tPedestrian_data *ped;		// @0x4
    tU32 start_time;		// @0x8
} tProximity_ray;

typedef struct tPiped_registration_snapshot {		// size: 0x10
    int piped_actors_count;		// @0x0
    int piped_models_count;		// @0x4
    int piped_materials_count;		// @0x8
    int piped_pixelmaps_count;		// @0xc
} tPiped_registration_snapshot;

typedef struct tHeadup_icon {		// size: 0x10
    tPowerup *powerup;		// @0x0
    int fizzle_stage;		// @0x4
    int fizzle_direction;		// @0x8
    tU32 fizzle_start;		// @0xc
} tHeadup_icon;

typedef struct tPrat_flic_spec {		// size: 0x8
    char *data;		// @0x0
    tU32 data_length;		// @0x4
} tPrat_flic_spec;

typedef struct tPrat_alternative {		// size: 0x30
    int ref;		// @0x0
    int chance;		// @0x4
    int number_of_sounds;		// @0x8
    int sound_ids[8];		// @0xc
    int sound_chance;		// @0x2c
} tPrat_alternative;

typedef struct tPrat_flic_chunk {		// size: 0x124
    int number_of_alternatives;		// @0x0
    tPrat_alternative alternatives[6];		// @0x4
} tPrat_flic_chunk;

typedef struct tPrat_sequence {		// size: 0x6e4
    int number_of_chunks;		// @0x0
    int precedence;		// @0x4
    int repeat_chunk;		// @0x8
    tPrat_flic_chunk chunks[6];		// @0xc
} tPrat_sequence;


typedef enum tGrid_draw {
    eGrid_draw_none = 0,
    eGrid_draw_icons_only = 1,
    eGrid_draw_all = 2
} tGrid_draw;

typedef enum tNet_synch_mode {
    eNet_synch_host_first = 0,
    eNet_synch_host_subsequent = 1,
    eNet_synch_client = 2
} tNet_synch_mode;
typedef struct tWreck_info {		// size: 0x7c
    br_actor *actor;		// @0x0
    br_matrix34 rotation;		// @0x4
    br_matrix34 original_matrix;		// @0x34
    int customised;		// @0x64
    int car_index;		// @0x68
    float pos_x;		// @0x6c
    float pos_y;		// @0x70
    tVehicle_type car_type;		// @0x74
    br_scalar scaling_factor;		// @0x78
} tWreck_info;

typedef struct tRectangle {		// size: 0x10
    int left;		// @0x0
    int top;		// @0x4
    int right;		// @0x8
    int bottom;		// @0xc
} tRectangle;

typedef struct tSkid {		// size: 0x1c
    br_actor *actor;		// @0x0
    br_vector3 normal;		// @0x4
    br_vector3 pos;		// @0x10
} tSkid;

typedef struct tSpark {		// size: 0x40
    int count;		// @0x0
    br_vector3 pos;		// @0x4
    br_vector3 v;		// @0x10
    br_vector3 length;		// @0x1c
    br_vector3 normal;		// @0x28
    tU32 time_sync;		// @0x34
    tCar_spec *car;		// @0x38
    tU8 colour;		// @0x3c
} tSpark;

typedef struct tShrapnel {		// size: 0x2c
    br_actor *actor;		// @0x0
    br_vector3 v;		// @0x4
    tU32 time_sync;		// @0x10
    tU32 age;		// @0x14
    br_scalar shear1;		// @0x18
    br_scalar shear2;		// @0x1c
    br_vector3 axis;		// @0x20
} tShrapnel;

typedef struct tSmoke {		// size: 0x2c
    tU32 time_sync;		// @0x0
    br_vector3 pos;		// @0x4
    br_vector3 v;		// @0x10
    br_scalar radius;		// @0x1c
    br_scalar strength;		// @0x20
    br_scalar decay_factor;		// @0x24
    tU8 type;		// @0x28
    tU8 pipe_me;		// @0x29
} tSmoke;

typedef struct tSmoke_column {		// size: 0x70
    tCar_spec *car;		// @0x0
    tU32 time;		// @0x4
    tU32 lifetime;		// @0x8
    tU32 count;		// @0xc
    int colour;		// @0x10
    int whiter;		// @0x14
    br_actor *flame_actor;		// @0x18
    int frame_count[3];		// @0x1c
    br_vector3 pos;		// @0x28
    br_scalar scale_x[3];		// @0x34
    br_scalar scale_y[3];		// @0x40
    br_scalar offset_x[3];		// @0x4c
    br_scalar offset_z[3];		// @0x58
    tU32 smudge_timer;		// @0x64
    int vertex_index;		// @0x68
    int upright;		// @0x6c
} tSmoke_column;

typedef struct tSplash {		// size: 0x1c
    br_actor *actor;		// @0x0
    br_vector3 v;		// @0x4
    int just_done;		// @0x10
    br_scalar size;		// @0x14
    br_scalar scale_x;		// @0x18
} tSplash;

typedef struct tBRender_smoke {		// size: 0x1c
    br_vector3 pos;		// @0x0
    br_scalar r;		// @0xc
    br_scalar strength;		// @0x10
    br_colour col;		// @0x14
    br_scalar aspect;		// @0x18
} tBRender_smoke;

typedef struct tRGB_colour {		// size: 0xc
    int red;		// @0x0
    int green;		// @0x4
    int blue;		// @0x8
} tRGB_colour;

typedef br_material* * tPMFMCB(br_model*, tU16);

typedef enum tMatrix_mod_type {
    eMatrix_mod_spin = 0,
    eMatrix_mod_rock = 1,
    eMatrix_mod_throb = 2,
    eMatrix_mod_slither = 3,
    eMatrix_mod_roll = 4,
    eMatrix_mod_none = 255
} tMatrix_mod_type;

typedef enum tTexture_animation_type {
    eTexture_animation_frames = 0,
    eTexture_animation_flic = 1,
    eTexture_animation_none = 255
} tTexture_animation_type;

typedef enum tMove_mode {
    eMove_linear = 0,
    eMove_harmonic = 1,
    eMove_flash = 2,
    eMove_controlled = 3,
    eMove_absolute = 4,
    eMove_continuous = 5,
    eMove_none = 255
} tMove_mode;

typedef enum tFunk_trigger_mode {
    eFunk_mode_constant = 0,
    eFunk_mode_distance = 1,
    eFunk_mode_last_lap_only = 2,
    eFunk_mode_all_laps_but_last = 3
} tFunk_trigger_mode;

typedef enum tGroove_trigger_mode {
    eGroove_mode_constant = 0,
    eGroove_mode_distance = 1
} tGroove_trigger_mode;

typedef enum tGroove_path_mode {
    eGroove_path_straight = 0,
    eGroove_path_circular = 1,
    eGroove_path_none = 255
} tGroove_path_mode;

typedef enum tGroove_object_mode {
    eGroove_object_spin = 0,
    eGroove_object_rock = 1,
    eGroove_object_throb = 2,
    eGroove_object_shear = 3,
    eGroove_object_none = 255
} tGroove_object_mode;

typedef enum tGroove_axis_mode {
    eGroove_axis_x = 0,
    eGroove_axis_y = 1,
    eGroove_axis_z = 2
} tGroove_axis_mode;

typedef enum tAnimation_time_mode {
    eTime_mode_approximate = 0,
    eTime_mode_accurate = 1
} tAnimation_time_mode;

typedef enum tInterrupt_status {
    eInterrupt_none = 0,
    eInterrupt_less_than = 1,
    eInterrupt_greater_than = 2
} tInterrupt_status;

typedef enum tRotate_mode {
    eRotate_mode_x = 0,
    eRotate_mode_y = 1,
    eRotate_mode_z = 2
} tRotate_mode;

typedef enum tScale_mode {
    eScale_mode_all = 0,
    eScale_mode_x = 1,
    eScale_mode_y = 2,
    eScale_mode_z = 3
} tScale_mode;
typedef struct tFunkotronic_spec {		// size: 0xd8
    int owner;		// @0x0
    br_material *material;		// @0x4
    tFunk_trigger_mode mode;		// @0x8
    tMatrix_mod_type matrix_mod_type;		// @0xc
    tMove_mode matrix_mode;		// @0x10
    struct {		// size: 0x18
        struct {		// size: 0x4
            float period;		// @0x0
        } spin_info;		// @0x0
        struct {		// size: 0x10
            float period;		// @0x0
            br_scalar x_centre;		// @0x4
            br_scalar y_centre;		// @0x8
            float rock_angle;		// @0xc
        } rock_info;		// @0x0
        struct {		// size: 0x18
            float x_period;		// @0x0
            float y_period;		// @0x4
            br_scalar x_centre;		// @0x8
            br_scalar y_centre;		// @0xc
            float x_magnitude;		// @0x10
            float y_magnitude;		// @0x14
        } throb_info;		// @0x0
        struct {		// size: 0x10
            float x_period;		// @0x0
            float y_period;		// @0x4
            float x_magnitude;		// @0x8
            float y_magnitude;		// @0xc
        } slither_info;		// @0x0
        struct {		// size: 0x8
            float x_period;		// @0x0
            float y_period;		// @0x4
        } roll_info;		// @0x0
    } matrix_mod_data;		// @0x14
    tMove_mode lighting_animation_type;		// @0x2c
    float lighting_animation_period;		// @0x30
    float ambient_base;		// @0x34
    float ambient_delta;		// @0x38
    float direct_base;		// @0x3c
    float direct_delta;		// @0x40
    float specular_base;		// @0x44
    float specular_delta;		// @0x48
    tTexture_animation_type texture_animation_type;		// @0x4c
    tAnimation_time_mode time_mode;		// @0x50
    float last_frame;		// @0x54
    struct {		// size: 0x78
        struct {		// size: 0x30
            tMove_mode mode;		// @0x0
            float period;		// @0x4
            int texture_count;		// @0x8
            int current_frame;		// @0xc
            br_pixelmap *textures[8];		// @0x10
        } frames_info;		// @0x0
        struct {		// size: 0x78
            tU8 *flic_data;		// @0x0
            tU32 flic_data_length;		// @0x4
            tFlic_descriptor flic_descriptor;		// @0x8
        } flic_info;		// @0x0
    } texture_animation_data;		// @0x58
    int proximity_count;		// @0xd0
    br_vector3 *proximity_array;		// @0xd4
} tFunkotronic_spec;

typedef struct tGroovidelic_spec {		// size: 0x80
    int owner;		// @0x0
    int done_this_frame;		// @0x4
    br_actor *actor;		// @0x8
    tLollipop_mode lollipop_mode;		// @0xc
    tGroove_trigger_mode mode;		// @0x10
    tGroove_path_mode path_type;		// @0x14
    tMove_mode path_mode;		// @0x18
    tInterrupt_status path_interrupt_status;		// @0x1c
    float path_resumption_value;		// @0x20
    struct {		// size: 0x1c
        struct {		// size: 0x1c
            float period;		// @0x0
            float x_delta;		// @0x4
            float y_delta;		// @0x8
            float z_delta;		// @0xc
            br_vector3 centre;		// @0x10
        } straight_info;		// @0x0
        struct {		// size: 0x18
            float period;		// @0x0
            float radius;		// @0x4
            br_vector3 centre;		// @0x8
            tGroove_axis_mode axis;		// @0x14
        } circular_info;		// @0x0
    } path_data;		// @0x24
    br_vector3 object_centre;		// @0x40
    br_vector3 object_position;		// @0x4c
    tGroove_object_mode object_type;		// @0x58
    tMove_mode object_mode;		// @0x5c
    tInterrupt_status object_interrupt_status;		// @0x60
    float object_resumption_value;		// @0x64
    struct {		// size: 0x18
        struct {		// size: 0x8
            float period;		// @0x0
            tGroove_axis_mode axis;		// @0x4
        } spin_info;		// @0x0
        struct {		// size: 0x10
            float period;		// @0x0
            float max_angle;		// @0x4
            float current_angle;		// @0x8
            tGroove_axis_mode axis;		// @0xc
        } rock_info;		// @0x0
        struct {		// size: 0x18
            float x_period;		// @0x0
            float y_period;		// @0x4
            float z_period;		// @0x8
            float x_magnitude;		// @0xc
            float y_magnitude;		// @0x10
            float z_magnitude;		// @0x14
        } throb_info;		// @0x0
        struct {		// size: 0x18
            float x_period;		// @0x0
            float y_period;		// @0x4
            float z_period;		// @0x8
            float x_magnitude;		// @0xc
            float y_magnitude;		// @0x10
            float z_magnitude;		// @0x14
        } shear_info;		// @0x0
    } object_data;		// @0x68
} tGroovidelic_spec;

typedef struct DWORDREGS {		// size: 0x1c
    unsigned int eax;		// @0x0
    unsigned int ebx;		// @0x4
    unsigned int ecx;		// @0x8
    unsigned int edx;		// @0xc
    unsigned int esi;		// @0x10
    unsigned int edi;		// @0x14
    unsigned int cflag;		// @0x18
} DWORDREGS;

typedef struct WORDREGS {		// size: 0x1c
    unsigned short ax;		// @0x0
    unsigned short _1;		// @0x2
    unsigned short bx;		// @0x4
    unsigned short _2;		// @0x6
    unsigned short cx;		// @0x8
    unsigned short _3;		// @0xa
    unsigned short dx;		// @0xc
    unsigned short _4;		// @0xe
    unsigned short si;		// @0x10
    unsigned short _5;		// @0x12
    unsigned short di;		// @0x14
    unsigned short _6;		// @0x16
    unsigned int cflag;		// @0x18
} WORDREGS;

typedef struct BYTEREGS {		// size: 0x10
    unsigned char al;		// @0x0
    unsigned char ah;		// @0x1
    unsigned short _1;		// @0x2
    unsigned char bl;		// @0x4
    unsigned char bh;		// @0x5
    unsigned short _2;		// @0x6
    unsigned char cl;		// @0x8
    unsigned char ch;		// @0x9
    unsigned short _3;		// @0xa
    unsigned char dl;		// @0xc
    unsigned char dh;		// @0xd
    unsigned short _4;		// @0xe
} BYTEREGS;

typedef struct REGS {		// size: 0x1c
    DWORDREGS x;		// @0x0
    WORDREGS w;		// @0x0
    BYTEREGS h;		// @0x0
} REGS;

typedef struct SREGS {		// size: 0xc
    unsigned short es;		// @0x0
    unsigned short cs;		// @0x2
    unsigned short ss;		// @0x4
    unsigned short ds;		// @0x6
    unsigned short fs;		// @0x8
    unsigned short gs;		// @0xa
} SREGS;

typedef struct REGPACKB {		// size: 0x10
    unsigned char al;		// @0x0
    unsigned char ah;		// @0x1
    unsigned short _1;		// @0x2
    unsigned char bl;		// @0x4
    unsigned char bh;		// @0x5
    unsigned short _2;		// @0x6
    unsigned char cl;		// @0x8
    unsigned char ch;		// @0x9
    unsigned short _3;		// @0xa
    unsigned char dl;		// @0xc
    unsigned char dh;		// @0xd
    unsigned short _4;		// @0xe
} REGPACKB;

typedef struct REGPACKW {		// size: 0x28
    unsigned short ax;		// @0x0
    unsigned short _1;		// @0x2
    unsigned short bx;		// @0x4
    unsigned short _2;		// @0x6
    unsigned short cx;		// @0x8
    unsigned short _3;		// @0xa
    unsigned short dx;		// @0xc
    unsigned short _4;		// @0xe
    unsigned short bp;		// @0x10
    unsigned short _5;		// @0x12
    unsigned short si;		// @0x14
    unsigned short _6;		// @0x16
    unsigned short di;		// @0x18
    unsigned short _7;		// @0x1a
    unsigned short ds;		// @0x1c
    unsigned short es;		// @0x1e
    unsigned short fs;		// @0x20
    unsigned short gs;		// @0x22
    unsigned int flags;		// @0x24
} REGPACKW;

typedef struct REGPACKX {		// size: 0x28
    unsigned int eax;		// @0x0
    unsigned int ebx;		// @0x4
    unsigned int ecx;		// @0x8
    unsigned int edx;		// @0xc
    unsigned int ebp;		// @0x10
    unsigned int esi;		// @0x14
    unsigned int edi;		// @0x18
    unsigned short ds;		// @0x1c
    unsigned short es;		// @0x1e
    unsigned short fs;		// @0x20
    unsigned short gs;		// @0x22
    unsigned int flags;		// @0x24
} REGPACKX;

typedef struct REGPACK {		// size: 0x28
    REGPACKB h;		// @0x0
    REGPACKW w;		// @0x0
    REGPACKX x;		// @0x0
} REGPACK;

typedef struct INTPACKX {		// size: 0x3c
    unsigned int gs;		// @0x0
    unsigned int fs;		// @0x4
    unsigned int es;		// @0x8
    unsigned int ds;		// @0xc
    unsigned int edi;		// @0x10
    unsigned int esi;		// @0x14
    unsigned int ebp;		// @0x18
    unsigned int esp;		// @0x1c
    unsigned int ebx;		// @0x20
    unsigned int edx;		// @0x24
    unsigned int ecx;		// @0x28
    unsigned int eax;		// @0x2c
    unsigned int eip;		// @0x30
    unsigned int cs;		// @0x34
    unsigned int flags;		// @0x38
} INTPACKX;

typedef struct INTPACKW {		// size: 0x3c
    unsigned short gs;		// @0x0
    unsigned short _1;		// @0x2
    unsigned short fs;		// @0x4
    unsigned short _2;		// @0x6
    unsigned short es;		// @0x8
    unsigned short _3;		// @0xa
    unsigned short ds;		// @0xc
    unsigned short _4;		// @0xe
    unsigned short di;		// @0x10
    unsigned short _5;		// @0x12
    unsigned short si;		// @0x14
    unsigned short _6;		// @0x16
    unsigned short bp;		// @0x18
    unsigned short _7;		// @0x1a
    unsigned short sp;		// @0x1c
    unsigned short _8;		// @0x1e
    unsigned short bx;		// @0x20
    unsigned short _9;		// @0x22
    unsigned short dx;		// @0x24
    unsigned short _a;		// @0x26
    unsigned short cx;		// @0x28
    unsigned short _b;		// @0x2a
    unsigned short ax;		// @0x2c
    unsigned short _c;		// @0x2e
    unsigned short ip;		// @0x30
    unsigned short _d;		// @0x32
    unsigned short cs;		// @0x34
    unsigned short _e;		// @0x36
    unsigned int flags;		// @0x38
} INTPACKW;

typedef struct INTPACKB {		// size: 0x30
    unsigned char bl;		// @0x20
    unsigned char bh;		// @0x21
    unsigned short _1;		// @0x22
    unsigned char dl;		// @0x24
    unsigned char dh;		// @0x25
    unsigned short _2;		// @0x26
    unsigned char cl;		// @0x28
    unsigned char ch;		// @0x29
    unsigned short _3;		// @0x2a
    unsigned char al;		// @0x2c
    unsigned char ah;		// @0x2d
    unsigned short _4;		// @0x2e
} INTPACKB;

typedef struct INTPACK {		// size: 0x3c
    INTPACKB h;		// @0x0
    INTPACKW w;		// @0x0
    INTPACKX x;		// @0x0
} INTPACK;

typedef struct _DOSERROR {		// size: 0x7
    int exterror;		// @0x0
    char errclass;		// @0x4
    char action;		// @0x5
    char locus;		// @0x6
} _DOSERROR;

typedef struct DOSERROR {		// size: 0x7
    int exterror;		// @0x0
    char class;		// @0x4
    char action;		// @0x5
    char locus;		// @0x6
} DOSERROR;

typedef struct dosdate_t {		// size: 0x5
    unsigned char day;		// @0x0
    unsigned char month;		// @0x1
    unsigned short year;		// @0x2
    unsigned char dayofweek;		// @0x4
} dosdate_t;

typedef struct dostime_t {		// size: 0x4
    unsigned char hour;		// @0x0
    unsigned char minute;		// @0x1
    unsigned char second;		// @0x2
    unsigned char hsecond;		// @0x3
} dostime_t;

typedef struct find_t {		// size: 0x2b
    char reserved[21];		// @0x0
    char attrib;		// @0x15
    unsigned short wr_time;		// @0x16
    unsigned short wr_date;		// @0x18
    unsigned long size;		// @0x1a
    char name[13];		// @0x1e
} find_t;

typedef struct _diskfree_t {		// size: 0x8
    unsigned short total_clusters;		// @0x0
    unsigned short avail_clusters;		// @0x2
    unsigned short sectors_per_cluster;		// @0x4
    unsigned short bytes_per_sector;		// @0x6
} _diskfree_t;

typedef struct tPD_net_game_info {		// size: 0x14
    _IPX_LOCAL_TARGET addr_ipx;		// @0x0
    tU32 last_response;		// @0x10
} tPD_net_game_info;

typedef struct tIPX_netnum {		// size: 0x4
    BYTE bNetwork[4];		// @0x0
} tIPX_netnum;

typedef struct tRM_info {		// size: 0x34
    unsigned long EDI;		// @0x0
    unsigned long ESI;		// @0x4
    unsigned long EBP;		// @0x8
    unsigned long reserved;		// @0xc
    unsigned long EBX;		// @0x10
    unsigned long EDX;		// @0x14
    unsigned long ECX;		// @0x18
    unsigned long EAX;		// @0x1c
    unsigned short flags;		// @0x20
    unsigned short ES;		// @0x22
    unsigned short DS;		// @0x24
    unsigned short FS;		// @0x26
    unsigned short GS;		// @0x28
    unsigned short IP;		// @0x2a
    unsigned short CS;		// @0x2c
    unsigned short SP;		// @0x2e
    unsigned short SS;		// @0x30
} tRM_info;

typedef unsigned int ino_t;
typedef int dev_t;
typedef long off_t;
typedef dirent DIR;
typedef dosio_event dosio_event;
typedef dosio_event_queue dosio_event_queue;

typedef enum dosio_event_type {
    DOSIO_EVENT_KEY_DOWN = 0,
    DOSIO_EVENT_KEY_UP = 1,
    DOSIO_EVENT_POINTER1_DOWN = 2,
    DOSIO_EVENT_POINTER1_UP = 3,
    DOSIO_EVENT_POINTER2_DOWN = 4,
    DOSIO_EVENT_POINTER2_UP = 5,
    DOSIO_EVENT_POINTER3_DOWN = 6,
    DOSIO_EVENT_POINTER3_UP = 7,
    DOSIO_EVENT_POINTER_MOVE = 8,
    DOSIO_EVENT_MAX = 9
} dosio_event_type;

typedef enum dosio_event_qual {
    DOSIO_QUAL_SHIFT = 1,
    DOSIO_QUAL_CONTROL = 2,
    DOSIO_QUAL_ALT = 4
} dosio_event_qual;
typedef struct dirent {		// size: 0x2e
    char d_dta[21];		// @0x0
    char d_attr;		// @0x15
    unsigned short d_time;		// @0x16
    unsigned short d_date;		// @0x18
    long d_size;		// @0x1a
    char d_name[13];		// @0x1e
    unsigned short d_ino;		// @0x2b
    char d_first;		// @0x2d
} DIR;

typedef struct dosio_event {		// size: 0xc
    br_uint_16 type;		// @0x0
    br_uint_16 qualifiers;		// @0x2
    br_uint_32 value_1;		// @0x4
    br_uint_32 value_2;		// @0x8
} dosio_event;

typedef struct dosio_event_queue {		// size: 0x14
    br_uint_16 total;		// @0x0
    br_uint_16 count;		// @0x2
    br_uint_16 head;		// @0x4
    br_uint_16 tail;		// @0x6
    dosio_event slots[1];		// @0x8
} dosio_event_queue;

typedef struct _stat {		// size: 0x46
    dev_t st_dev;		// @0x0
    ino_t st_ino;		// @0x4
    unsigned short st_mode;		// @0x8
    short st_nlink;		// @0xa
    unsigned long st_uid;		// @0xc
    short st_gid;		// @0x10
    dev_t st_rdev;		// @0x12
    off_t st_size;		// @0x16
    time_t st_atime;		// @0x1a
    time_t st_mtime;		// @0x1e
    time_t st_ctime;		// @0x22
    time_t st_btime;		// @0x26
    unsigned long st_attr;		// @0x2a
    unsigned long st_archivedID;		// @0x2e
    unsigned long st_updatedID;		// @0x32
    unsigned short st_inheritedRightsMask;		// @0x36
    unsigned char st_originatingNameSpace;		// @0x38
    unsigned char st_name[13];		// @0x39
} _stat;

typedef struct stat {		// size: 0x46
    dev_t st_dev;		// @0x0
    ino_t st_ino;		// @0x4
    unsigned short st_mode;		// @0x8
    short st_nlink;		// @0xa
    unsigned long st_uid;		// @0xc
    short st_gid;		// @0x10
    dev_t st_rdev;		// @0x12
    off_t st_size;		// @0x16
    time_t st_atime;		// @0x1a
    time_t st_mtime;		// @0x1e
    time_t st_ctime;		// @0x22
    time_t st_btime;		// @0x26
    unsigned long st_attr;		// @0x2a
    unsigned long st_archivedID;		// @0x2e
    unsigned long st_updatedID;		// @0x32
    unsigned short st_inheritedRightsMask;		// @0x36
    unsigned char st_originatingNameSpace;		// @0x38
    unsigned char st_name[13];		// @0x39
} stat;

typedef struct tMem_info {		// size: 0x30
    unsigned int largest_block_avail;		// @0x0
    unsigned int max_unlocked_page;		// @0x4
    unsigned int largest_lockable_page;		// @0x8
    unsigned int lin_addr_space;		// @0xc
    unsigned int num_free_pages_avail;		// @0x10
    unsigned int num_physical_pages_free;		// @0x14
    unsigned int total_physical_pages;		// @0x18
    unsigned int free_lin_addr_space;		// @0x1c
    unsigned int size_of_page_file;		// @0x20
    unsigned int reserved[3];		// @0x24
} tMem_info;

typedef unsigned int jmp_buf[13];
typedef struct pm_temp_edge {		// size: 0xc
    pm_temp_edge *next;		// @0x0
    br_uint_16 first;		// @0x4
    br_uint_16 last;		// @0x6
    char other;		// @0x8
} pm_temp_edge;

typedef struct prep_vertex {		// size: 0x10
    br_vector3 n;		// @0x0
    br_uint_16 v;		// @0xc
    br_uint_16 f;		// @0xe
} prep_vertex;

typedef struct order_info {		// size: 0x4
    br_uint_8 a0;		// @0x0
    br_uint_8 a1;		// @0x1
    br_uint_8 a2;		// @0x2
    br_uint_8 _pad[1];		// @0x3
} order_info;

typedef struct transform_type {		// size: 0x8
    br_uint_32 id;		// @0x0
    br_file_struct *fs;		// @0x4
} transform_type;

typedef struct resource_header {		// size: 0x18
    br_simple_node node;		// @0x0
    br_simple_list children;		// @0x8
    br_uint_8 size_l;		// @0xc
    br_uint_8 size_m;		// @0xd
    br_uint_8 size_h;		// @0xe
    br_uint_8 class;		// @0xf
    void *magic_ptr;		// @0x10
    int magic_num;		// @0x14
} resource_header;

typedef host_real_memory host_real_memory;
typedef host_regs host_regs;
typedef host_info host_info;
typedef struct host_real_memory {		// size: 0xc
    br_uint_32 pm_off;		// @0x0
    br_uint_16 pm_seg;		// @0x4
    br_uint_16 _reserved;		// @0x6
    br_uint_16 rm_off;		// @0x8
    br_uint_16 rm_seg;		// @0xa
} host_real_memory;

typedef struct host_regs {		// size: 0x34
    struct {		// size: 0x34
        br_uint_32 edi;		// @0x0
        br_uint_32 esi;		// @0x4
        br_uint_32 ebp;		// @0x8
        br_uint_32 _res;		// @0xc
        br_uint_32 ebx;		// @0x10
        br_uint_32 edx;		// @0x14
        br_uint_32 ecx;		// @0x18
        br_uint_32 eax;		// @0x1c
        br_uint_16 flags;		// @0x20
        br_uint_16 es;		// @0x22
        br_uint_16 ds;		// @0x24
        br_uint_16 fs;		// @0x26
        br_uint_16 gs;		// @0x28
        br_uint_16 ip;		// @0x2a
        br_uint_16 cs;		// @0x2c
        br_uint_16 sp;		// @0x2e
        br_uint_16 ss;		// @0x30
    } x;		// @0x0
    struct {		// size: 0x32
        br_uint_16 di;		// @0x0
        br_uint_16 _pad0;		// @0x2
        br_uint_16 si;		// @0x4
        br_uint_16 _pad1;		// @0x6
        br_uint_16 bp;		// @0x8
        br_uint_16 _pad2;		// @0xa
        br_uint_16 _res;		// @0xc
        br_uint_16 _pad3;		// @0xe
        br_uint_16 bx;		// @0x10
        br_uint_16 _pad4;		// @0x12
        br_uint_16 dx;		// @0x14
        br_uint_16 _pad5;		// @0x16
        br_uint_16 cx;		// @0x18
        br_uint_16 _pad6;		// @0x1a
        br_uint_16 ax;		// @0x1c
        br_uint_16 _pad7;		// @0x1e
        br_uint_16 flags;		// @0x20
        br_uint_16 es;		// @0x22
        br_uint_16 ds;		// @0x24
        br_uint_16 fs;		// @0x26
        br_uint_16 gs;		// @0x28
        br_uint_16 ip;		// @0x2a
        br_uint_16 cs;		// @0x2c
        br_uint_16 sp;		// @0x2e
        br_uint_16 ss;		// @0x30
    } w;		// @0x0
    struct {		// size: 0x20
        br_uint_32 _pad0[4];		// @0x0
        br_uint_8 bl;		// @0x10
        br_uint_8 bh;		// @0x11
        br_uint_8 _pad1;		// @0x12
        br_uint_8 _pad2;		// @0x13
        br_uint_8 dl;		// @0x14
        br_uint_8 dh;		// @0x15
        br_uint_8 _pad3;		// @0x16
        br_uint_8 _pad4;		// @0x17
        br_uint_8 cl;		// @0x18
        br_uint_8 ch;		// @0x19
        br_uint_8 _pad5;		// @0x1a
        br_uint_8 _pad6;		// @0x1b
        br_uint_8 al;		// @0x1c
        br_uint_8 ah;		// @0x1d
        br_uint_8 _pad7;		// @0x1e
        br_uint_8 _pad8;		// @0x1f
    } h;		// @0x0
} host_regs;

typedef struct host_info {		// size: 0x38
    br_uint_32 size;		// @0x0
    char identifier[40];		// @0x4
    br_uint_32 capabilities;		// @0x2c
    br_token processor_family;		// @0x30
    br_token processor_type;		// @0x34
} host_info;

typedef struct file_info {		// size: 0x8
    br_uint_32 type;		// @0x0
    br_uint_32 version;		// @0x4
} file_info;

typedef unsigned int HFILE;
typedef unsigned short HSOS;
typedef HSOS * PHSOS;
typedef struct pm_type_info {		// size: 0x8
    br_uint_16 bits;		// @0x0
    br_uint_16 file_size;		// @0x2
    br_uint_16 align;		// @0x4
    br_uint_16 channels;		// @0x6
} pm_type_info;

typedef struct match_tokens {		// size: 0x18
    br_token use;		// @0x0
    br_uint_8 pixel_type;		// @0x4
    br_int_32 pixel_bits;		// @0x8
    br_int_32 width;		// @0xc
    br_int_32 height;		// @0x10
    br_object *renderer;		// @0x14
} match_tokens;

typedef struct object_list {		// size: 0x4
    br_simple_list l;		// @0x0
} object_list;

typedef struct object_list_entry {		// size: 0xc
    br_simple_node n;		// @0x0
    br_object *h;		// @0x8
} object_list_entry;

typedef struct token_match {		// size: 0x14
    br_token_value *original;		// @0x0
    br_token_value *query;		// @0x4
    br_int_32 n;		// @0x8
    void *extra;		// @0xc
    br_size_t extra_size;		// @0x10
} token_match;

typedef struct token_type {		// size: 0xc
    char *identifier;		// @0x0
    br_token type;		// @0x4
    int length;		// @0x8
} token_type;

typedef basereloc_header basereloc_header;
typedef struct export_directory {		// size: 0x28
    br_uint_32 flags;		// @0x0
    br_uint_32 timestamp;		// @0x4
    br_uint_16 major_version;		// @0x8
    br_uint_16 minor_version;		// @0xa
    br_uint_32 name;		// @0xc
    br_uint_32 ordinal_base;		// @0x10
    br_uint_32 n_entries;		// @0x14
    br_uint_32 n_names;		// @0x18
    br_uint_32 export_table;		// @0x1c
    br_uint_32 name_table;		// @0x20
    br_uint_32 ordinal_table;		// @0x24
} export_directory;

typedef struct import_directory {		// size: 0x14
    br_uint_32 lookup_table;		// @0x0
    br_uint_32 timestamp;		// @0x4
    br_uint_32 forwarder;		// @0x8
    br_uint_32 name;		// @0xc
    br_uint_32 address_table;		// @0x10
} import_directory;

typedef struct basereloc_header {		// size: 0x8
    br_uint_32 rva;		// @0x0
    br_uint_32 size;		// @0x4
} basereloc_header;

typedef struct msdos_header {		// size: 0x40
    br_uint_16 magic;		// @0x0
    br_uint_16 last_page_bytes;		// @0x2
    br_uint_16 pages;		// @0x4
    br_uint_16 n_relocations;		// @0x6
    br_uint_16 header_size;		// @0x8
    br_uint_16 minalloc;		// @0xa
    br_uint_16 maxalloc;		// @0xc
    br_uint_16 start_ss;		// @0xe
    br_uint_16 start_sp;		// @0x10
    br_uint_16 checksum;		// @0x12
    br_uint_16 start_ip;		// @0x14
    br_uint_16 start_cs;		// @0x16
    br_uint_16 reloc_offset;		// @0x18
    br_uint_16 overlay_number;		// @0x1a
    br_uint_16 _reserved0[4];		// @0x1c
    br_uint_16 oem_id;		// @0x24
    br_uint_16 oem_info;		// @0x26
    br_uint_16 _reserved1[10];		// @0x28
    br_uint_32 new_header_offset;		// @0x3c
} msdos_header;

typedef struct coff_header {		// size: 0x14
    br_uint_16 machine;		// @0x0
    br_uint_16 n_sections;		// @0x2
    br_uint_32 time_date;		// @0x4
    br_uint_32 symbols_offset;		// @0x8
    br_uint_32 n_symbols;		// @0xc
    br_uint_16 opt_header_size;		// @0x10
    br_uint_16 flags;		// @0x12
} coff_header;

typedef struct nt_optional_header {		// size: 0xe0
    br_uint_16 magic;		// @0x0
    br_uint_8 l_major;		// @0x2
    br_uint_8 l_minor;		// @0x3
    br_uint_32 code_size;		// @0x4
    br_uint_32 data_size;		// @0x8
    br_uint_32 bss_size;		// @0xc
    br_uint_32 entry_point;		// @0x10
    br_uint_32 code_base;		// @0x14
    br_uint_32 data_base;		// @0x18
    br_uint_32 image_base;		// @0x1c
    br_uint_32 section_alignment;		// @0x20
    br_uint_32 file_alignment;		// @0x24
    br_uint_16 os_major;		// @0x28
    br_uint_16 os_minor;		// @0x2a
    br_uint_16 user_major;		// @0x2c
    br_uint_16 user_minor;		// @0x2e
    br_uint_16 subsys_major;		// @0x30
    br_uint_16 subsys_minor;		// @0x32
    br_uint_32 _reserved;		// @0x34
    br_uint_32 image_size;		// @0x38
    br_uint_32 header_size;		// @0x3c
    br_uint_32 file_checksum;		// @0x40
    br_uint_16 subsystem;		// @0x44
    br_uint_16 dll_flags;		// @0x46
    br_uint_32 stack_reserve_size;		// @0x48
    br_uint_32 stack_commit_size;		// @0x4c
    br_uint_32 heap_reserve_size;		// @0x50
    br_uint_32 heap_commit_size;		// @0x54
    br_uint_32 loader_flags;		// @0x58
    br_uint_32 n_data_directories;		// @0x5c
    struct {		// size: 0x8
        br_uint_32 rva;		// @0x0
        br_uint_32 size;		// @0x4
    } directories[16];		// @0x60
} nt_optional_header;

typedef struct section_header {		// size: 0x28
    br_uint_8 section_name[8];		// @0x0
    br_uint_32 virtual_size;		// @0x8
    br_uint_32 rva;		// @0xc
    br_uint_32 data_size;		// @0x10
    br_uint_32 data_offset;		// @0x14
    br_uint_32 relocs_offset;		// @0x18
    br_uint_32 linenums_offset;		// @0x1c
    br_uint_16 n_relocs;		// @0x20
    br_uint_16 n_linenums;		// @0x22
    br_uint_32 flags;		// @0x24
} section_header;

typedef host_interrupt_hook host_interrupt_hook;
typedef host_exception_hook host_exception_hook;
typedef struct host_interrupt_hook {		// size: 0x10
    br_uint_8 vector;		// @0x0
    br_boolean active;		// @0x4
    br_uint_32 old_offset;		// @0x8
    br_uint_16 old_sel;		// @0xc
} host_interrupt_hook;

typedef struct host_exception_hook {		// size: 0x110
    br_uint_8 exception;		// @0x0
    br_boolean active;		// @0x4
    br_uint_32 old_offset;		// @0x8
    br_uint_16 old_sel;		// @0xc
    br_uint_8 scratch[256];		// @0xe
} host_exception_hook;

typedef struct ldt {		// size: 0x8
    unsigned long limit_0: 10;		// @0x0
    unsigned long base_0: 10;		// @0x0
    unsigned long base_1: 8;		// @0x4
    unsigned long type: 4;		// @0x4
    unsigned long application: 1;		// @0x4
    unsigned long dpl: 2;		// @0x4
    unsigned long present: 1;		// @0x4
    unsigned long limit_1: 4;		// @0x4
    unsigned long system: 1;		// @0x4
    unsigned long reserved: 1;		// @0x4
    unsigned long use32: 1;		// @0x4
    unsigned long granularity: 1;		// @0x4
    unsigned long base_2: 8;		// @0x4
} ldt;


#endif