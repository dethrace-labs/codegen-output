#include "network.h"

tU32 gMess_max_flags;
tU32 gMess_mid_flags;
tU32 gMess_min_flags;
tU32 gGuarantee_number;
int gNet_service_disable;
int gIn_net_service;
int gPlayer_list_batch_number;
int gOnly_receive_guarantee_replies;
void *gMessage_to_free;
tNet_message *gBroadcast_stack;
tNet_message *gTo_host_stack;
tU32 gLast_flush_message;
int gRace_only_flags[33];
int gJoin_list_mode;
tNet_game_player_info gNew_net_players[6];
tGuaranteed_message gGuarantee_list[150];
tMid_message *gMid_messages;
tU32 gLast_player_list_received;
tMin_message *gMin_messages;
void (*gAdd_proc)(tNet_game_details*);
int gReceiving_batch_number;
int gReceiving_new_players;
tMax_message *gMax_messages;
int gNext_guarantee;
tU32 gAsk_time;
int gNet_initialised;
int gDont_allow_joiners;
tNet_game_details *gCurrent_join_poll_game;
int gMessage_header_size;
int gJoin_poll_index;
int gJoin_request_denied;
int gHost_died;
int gCar_was_taken;
int gBastard_has_answered;
int gTime_for_next_one;
int gReceived_game_scores;

// Offset: 0
// Size: 0x1ad
//IDA: int __cdecl NetInitialise()
int NetInitialise() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 432
// Size: 0x67
//IDA: int __cdecl NetShutdown()
int NetShutdown() {
    int err;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 536
// Size: 0x3a
//IDA: void __cdecl ShutdownNetIfRequired()
void ShutdownNetIfRequired() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 596
// Size: 0x2c
//IDA: void __cdecl DisableNetService()
void DisableNetService() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 640
// Size: 0x2c
//IDA: void __cdecl ReenableNetService()
void ReenableNetService() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 684
// Size: 0x48
//IDA: int __cdecl PermitNetServiceReentrancy()
int PermitNetServiceReentrancy() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 756
// Size: 0x2c
//IDA: void __cdecl HaltNetServiceReentrancy()
void HaltNetServiceReentrancy() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 800
// Size: 0x4b
//IDA: void __usercall NetSendHeadupToAllPlayers(char *pMessage@<EAX>)
void NetSendHeadupToAllPlayers(char *pMessage) {
    tNet_contents *the_contents;
    LOG_TRACE("(\"%s\")", pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 876
// Size: 0x6e
//IDA: void __usercall NetSendHeadupToEverybody(char *pMessage@<EAX>)
void NetSendHeadupToEverybody(char *pMessage) {
    tNet_contents *the_contents;
    LOG_TRACE("(\"%s\")", pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 988
// Size: 0x8e
//IDA: void __usercall NetSendHeadupToPlayer(char *pMessage@<EAX>, tPlayer_ID pPlayer@<EDX>)
void NetSendHeadupToPlayer(char *pMessage, tPlayer_ID pPlayer) {
    tNet_message *message;
    LOG_TRACE("(\"%s\", %d)", pMessage, pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 1132
// Size: 0x5e
//IDA: void __cdecl InitialisePlayerStati()
void InitialisePlayerStati() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1228
// Size: 0x49
//IDA: void __cdecl LeaveTempGame()
void LeaveTempGame() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1304
// Size: 0x3f
//IDA: void __cdecl DisposeCurrentJoinPollGame()
void DisposeCurrentJoinPollGame() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1368
// Size: 0x115
//IDA: void __cdecl DoNextJoinPoll()
void DoNextJoinPoll() {
    tNet_message *the_message;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1648
// Size: 0x64
//IDA: void __usercall NetStartProducingJoinList(void (*pAdd_proc)(tNet_game_details*)@<EAX>)
void NetStartProducingJoinList(void (*pAdd_proc)(tNet_game_details*)) {
    LOG_TRACE("(%p)", pAdd_proc);
    NOT_IMPLEMENTED();
}

// Offset: 1748
// Size: 0x3b
//IDA: void __cdecl NetEndJoinList()
void NetEndJoinList() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1808
// Size: 0x37
//IDA: void __usercall NetDisposePIDGameInfo(tNet_game_details *pDetails@<EAX>)
void NetDisposePIDGameInfo(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 1864
// Size: 0x33
//IDA: void __usercall NetDisposeGameDetails(tNet_game_details *pDetails@<EAX>)
void NetDisposeGameDetails(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 1916
// Size: 0x3e
//IDA: tNet_game_details* __cdecl NetAllocatePIDGameDetails()
tNet_game_details* NetAllocatePIDGameDetails() {
    tNet_game_details *game;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1980
// Size: 0x42
//IDA: void __usercall NetLeaveGameLowLevel(tNet_game_details *pDetails@<EAX>)
void NetLeaveGameLowLevel(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 2048
// Size: 0x17e
//IDA: void __usercall NetLeaveGame(tNet_game_details *pNet_game@<EAX>)
void NetLeaveGame(tNet_game_details *pNet_game) {
    tNet_message *the_message;
    char s[256];
    char *s2;
    int i;
    int must_revert_reentrancy;
    LOG_TRACE("(%p)", pNet_game);
    NOT_IMPLEMENTED();
}

// Offset: 2432
// Size: 0x31
//IDA: void __usercall NetSetPlayerSystemInfo(tNet_game_player_info *pPlayer@<EAX>, void *pSender_address@<EDX>)
void NetSetPlayerSystemInfo(tNet_game_player_info *pPlayer, void *pSender_address) {
    LOG_TRACE("(%p, %p)", pPlayer, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 2484
// Size: 0x2d
//IDA: void __usercall NetDisposePlayer(tNet_game_player_info *pPlayer@<EAX>)
void NetDisposePlayer(tNet_game_player_info *pPlayer) {
    LOG_TRACE("(%p)", pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 2532
// Size: 0xea
//IDA: void __usercall FillInThisPlayer(tNet_game_details *pGame@<EAX>, tNet_game_player_info *pPlayer@<EDX>, int pCar_index@<EBX>, int pHost@<ECX>)
void FillInThisPlayer(tNet_game_details *pGame, tNet_game_player_info *pPlayer, int pCar_index, int pHost) {
    LOG_TRACE("(%p, %p, %d, %d)", pGame, pPlayer, pCar_index, pHost);
    NOT_IMPLEMENTED();
}

// Offset: 2768
// Size: 0xce
//IDA: void __usercall LoadCarN(int pIndex@<EAX>, tNet_game_player_info *pPlayer@<EDX>)
void LoadCarN(int pIndex, tNet_game_player_info *pPlayer) {
    int switched_res;
    LOG_TRACE("(%d, %p)", pIndex, pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 2976
// Size: 0x10a
//IDA: void __usercall DisposeCarN(int pIndex@<EAX>)
void DisposeCarN(int pIndex) {
    int i;
    int j;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 3244
// Size: 0x9a
//IDA: void __usercall PlayerHasLeft(int pIndex@<EAX>)
void PlayerHasLeft(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 3400
// Size: 0x529
//IDA: void __usercall NetPlayersChanged(int pNew_count@<EAX>, tNet_game_player_info *pNew_players@<EDX>)
void NetPlayersChanged(int pNew_count, tNet_game_player_info *pNew_players) {
    int i;
    int j;
    int k;
    int switched_res;
    int new_player;
    int player_still_there;
    tPlayer_ID old_fox_it;
    LOG_TRACE("(%d, %p)", pNew_count, pNew_players);
    NOT_IMPLEMENTED();
}

// Offset: 4724
// Size: 0x182
//IDA: tNet_game_details* __usercall NetHostGame@<EAX>(tNet_game_type pGame_type@<EAX>, tNet_game_options *pOptions@<EDX>, int pStart_rank@<EBX>, char *pHost_name@<ECX>, int pCar_index)
tNet_game_details* NetHostGame(tNet_game_type pGame_type, tNet_game_options *pOptions, int pStart_rank, char *pHost_name, int pCar_index) {
    tNet_game_details *game;
    void *host_address;
    tNet_game_player_info me;
    LOG_TRACE("(%d, %p, %d, \"%s\", %d)", pGame_type, pOptions, pStart_rank, pHost_name, pCar_index);
    NOT_IMPLEMENTED();
}

// Offset: 5112
// Size: 0x33
//IDA: int __usercall NetInitClient@<EAX>(tNet_game_details *pDetails@<EAX>)
int NetInitClient(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 5164
// Size: 0x37
//IDA: int __usercall NetJoinGameLowLevel@<EAX>(tNet_game_details *pDetails@<EAX>, char *pPlayer_name@<EDX>)
int NetJoinGameLowLevel(tNet_game_details *pDetails, char *pPlayer_name) {
    LOG_TRACE("(%p, \"%s\")", pDetails, pPlayer_name);
    NOT_IMPLEMENTED();
}

// Offset: 5220
// Size: 0x188
//IDA: int __usercall NetJoinGame@<EAX>(tNet_game_details *pDetails@<EAX>, char *pPlayer_name@<EDX>, int pCar_index@<EBX>)
int NetJoinGame(tNet_game_details *pDetails, char *pPlayer_name, int pCar_index) {
    int result;
    tNet_message *the_message;
    tU32 start_time;
    LOG_TRACE("(%p, \"%s\", %d)", pDetails, pPlayer_name, pCar_index);
    NOT_IMPLEMENTED();
}

// Offset: 5612
// Size: 0x38
//IDA: void __usercall NetObtainSystemUserName(char *pName@<EAX>, int pMax_length@<EDX>)
void NetObtainSystemUserName(char *pName, int pMax_length) {
    LOG_TRACE("(\"%s\", %d)", pName, pMax_length);
    NOT_IMPLEMENTED();
}

// Offset: 5668
// Size: 0x33
//IDA: tU32 __usercall NetExtractGameID@<EAX>(tNet_game_details *pDetails@<EAX>)
tU32 NetExtractGameID(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 5720
// Size: 0x33
//IDA: tPlayer_ID __usercall NetExtractPlayerID@<EAX>(tNet_game_details *pDetails@<EAX>)
tPlayer_ID NetExtractPlayerID(tNet_game_details *pDetails) {
    LOG_TRACE("(%p)", pDetails);
    NOT_IMPLEMENTED();
}

// Offset: 5772
// Size: 0x75
//IDA: int __usercall NetSendMessageToAddress@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, void *pAddress@<EBX>)
int NetSendMessageToAddress(tNet_game_details *pDetails, tNet_message *pMessage, void *pAddress) {
    LOG_TRACE("(%p, %p, %p)", pDetails, pMessage, pAddress);
    NOT_IMPLEMENTED();
}

// Offset: 5892
// Size: 0xaa
//IDA: int __usercall NetSendMessageToPlayer@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, tPlayer_ID pPlayer@<EBX>)
int NetSendMessageToPlayer(tNet_game_details *pDetails, tNet_message *pMessage, tPlayer_ID pPlayer) {
    int i;
    LOG_TRACE("(%p, %p, %d)", pDetails, pMessage, pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 6064
// Size: 0x6b
//IDA: int __usercall NetSendMessageToHost@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>)
int NetSendMessageToHost(tNet_game_details *pDetails, tNet_message *pMessage) {
    LOG_TRACE("(%p, %p)", pDetails, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 6172
// Size: 0x3e
//IDA: int __usercall NetReplyToMessage@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pIncoming_message@<EDX>, tNet_message *pReply_message@<EBX>)
int NetReplyToMessage(tNet_game_details *pDetails, tNet_message *pIncoming_message, tNet_message *pReply_message) {
    LOG_TRACE("(%p, %p, %p)", pDetails, pIncoming_message, pReply_message);
    NOT_IMPLEMENTED();
}

// Offset: 6236
// Size: 0x56
//IDA: int __usercall NetSendMessageToAllPlayers@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>)
int NetSendMessageToAllPlayers(tNet_game_details *pDetails, tNet_message *pMessage) {
    LOG_TRACE("(%p, %p)", pDetails, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 6324
// Size: 0x282
//IDA: tU32 __usercall NetGetContentsSize@<EAX>(tNet_message_type pType@<EAX>, tS32 pSize_decider@<EDX>)
tU32 NetGetContentsSize(tNet_message_type pType, tS32 pSize_decider) {
    tU32 the_size;
    char __block0__s[256];
    LOG_TRACE("(%d, %d)", pType, pSize_decider);
    NOT_IMPLEMENTED();
}

// Offset: 6968
// Size: 0x3c
//IDA: tU32 __usercall NetGetMessageSize@<EAX>(tNet_message_type pType@<EAX>, tS32 pSize_decider@<EDX>)
tU32 NetGetMessageSize(tNet_message_type pType, tS32 pSize_decider) {
    LOG_TRACE("(%d, %d)", pType, pSize_decider);
    NOT_IMPLEMENTED();
}

// Offset: 7028
// Size: 0x6f
//IDA: tS32 __usercall NetCalcSizeDecider@<EAX>(tNet_contents *pContents@<EAX>)
tS32 NetCalcSizeDecider(tNet_contents *pContents) {
    tS32 the_decider;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 7140
// Size: 0x73
//IDA: tNet_message* __usercall NetBuildMessage@<EAX>(tNet_message_type pType@<EAX>, tS32 pSize_decider@<EDX>)
tNet_message* NetBuildMessage(tNet_message_type pType, tS32 pSize_decider) {
    tNet_message *the_message;
    tU32 the_size;
    LOG_TRACE("(%d, %d)", pType, pSize_decider);
    NOT_IMPLEMENTED();
}

// Offset: 7256
// Size: 0xe6
//IDA: tNet_contents* __usercall NetGetToHostContents@<EAX>(tNet_message_type pType@<EAX>, tS32 pSize_decider@<EDX>)
tNet_contents* NetGetToHostContents(tNet_message_type pType, tS32 pSize_decider) {
    tU32 the_size;
    tNet_contents *contents;
    LOG_TRACE("(%d, %d)", pType, pSize_decider);
    NOT_IMPLEMENTED();
}

// Offset: 7488
// Size: 0xe6
//IDA: tNet_contents* __usercall NetGetBroadcastContents@<EAX>(tNet_message_type pType@<EAX>, tS32 pSize_decider@<EDX>)
tNet_contents* NetGetBroadcastContents(tNet_message_type pType, tS32 pSize_decider) {
    tU32 the_size;
    tNet_contents *contents;
    LOG_TRACE("(%d, %d)", pType, pSize_decider);
    NOT_IMPLEMENTED();
}

// Offset: 7720
// Size: 0x72
//IDA: void __cdecl NetSendMessageStacks()
void NetSendMessageStacks() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7836
// Size: 0x279
//IDA: tNet_message* __usercall NetAllocateMessage@<EAX>(int pSize@<EAX>)
tNet_message* NetAllocateMessage(int pSize) {
    void *pointer;
    void *last_message;
    char *test;
    static int rr_min;
    static int rr_mid;
    static int rr_max;
    tNet_message *message;
    int i;
    tNet_message *__block0__m;
    LOG_TRACE("(%d)", pSize);
    NOT_IMPLEMENTED();
}

// Offset: 8472
// Size: 0x60
//IDA: void __cdecl NetFreeExcessMemory()
void NetFreeExcessMemory() {
    void *temp;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8568
// Size: 0x49
//IDA: int __usercall NetDisposeMessage@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>)
int NetDisposeMessage(tNet_game_details *pDetails, tNet_message *pMessage) {
    LOG_TRACE("(%p, %p)", pDetails, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 8644
// Size: 0x37
//IDA: tNet_message* __usercall NetGetNextMessage@<EAX>(tNet_game_details *pDetails@<EAX>, void **pSender_address@<EDX>)
tNet_message* NetGetNextMessage(tNet_game_details *pDetails, void **pSender_address) {
    LOG_TRACE("(%p, %p)", pDetails, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 8700
// Size: 0x66
//IDA: void __usercall ReceivedSendMeDetails(tNet_contents *pContents@<EAX>, void *pSender_address@<EDX>)
void ReceivedSendMeDetails(tNet_contents *pContents, void *pSender_address) {
    tNet_message *message;
    LOG_TRACE("(%p, %p)", pContents, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 8804
// Size: 0x50
//IDA: void __usercall ReceivedDetails(tNet_contents *pContents@<EAX>)
void ReceivedDetails(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 8884
// Size: 0x103
//IDA: void __cdecl SendOutPlayerList()
void SendOutPlayerList() {
    tNet_message *message;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9144
// Size: 0x258
//IDA: void __usercall ReceivedJoin(tNet_contents *pContents@<EAX>, void *pSender_address@<EDX>)
void ReceivedJoin(tNet_contents *pContents, void *pSender_address) {
    int i;
    int new_player_count;
    int slot_index;
    tNet_message *message;
    tNet_game_player_info *new_players;
    LOG_TRACE("(%p, %p)", pContents, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 9744
// Size: 0x16c
//IDA: void __usercall KickPlayerOut(tPlayer_ID pID@<EAX>)
void KickPlayerOut(tPlayer_ID pID) {
    int i;
    int j;
    int new_player_count;
    tNet_game_player_info *new_players;
    LOG_TRACE("(%d)", pID);
    NOT_IMPLEMENTED();
}

// Offset: 10108
// Size: 0x31
//IDA: void __usercall ReceivedLeave(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>)
void ReceivedLeave(tNet_contents *pContents, tNet_message *pMessage) {
    LOG_TRACE("(%p, %p)", pContents, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 10160
// Size: 0x1da
//IDA: void __usercall NetFullScreenMessage(int pStr_index@<EAX>, int pLeave_it_up_there@<EDX>)
void NetFullScreenMessage(int pStr_index, int pLeave_it_up_there) {
    tU32 start_time;
    char *s;
    int gPixel_buffer_size;
    int restore_screen;
    char *gPixels_copy;
    char *gPalette_copy;
    LOG_TRACE("(%d, %d)", pStr_index, pLeave_it_up_there);
    NOT_IMPLEMENTED();
}

// Offset: 10636
// Size: 0x4c
//IDA: void __usercall HostHasBittenTheDust(int pMessage_index@<EAX>)
void HostHasBittenTheDust(int pMessage_index) {
    LOG_TRACE("(%d)", pMessage_index);
    NOT_IMPLEMENTED();
}

// Offset: 10712
// Size: 0x2f
//IDA: void __usercall ReceivedHosticide(tNet_contents *pContents@<EAX>)
void ReceivedHosticide(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 10760
// Size: 0x4b
//IDA: void __cdecl ConfirmReceipt()
void ConfirmReceipt() {
    tNet_message *the_message;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10836
// Size: 0x1f9
//IDA: void __usercall ReceivedNewPlayerList(tNet_contents *pContents@<EAX>, tNet_message *pM@<EDX>)
void ReceivedNewPlayerList(tNet_contents *pContents, tNet_message *pM) {
    int i;
    LOG_TRACE("(%p, %p)", pContents, pM);
    NOT_IMPLEMENTED();
}

// Offset: 11344
// Size: 0x59
//IDA: void __usercall ReceivedRaceOver(tNet_contents *pContents@<EAX>)
void ReceivedRaceOver(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 11436
// Size: 0xfa
//IDA: void __usercall ReceivedStatusReport(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>)
void ReceivedStatusReport(tNet_contents *pContents, tNet_message *pMessage) {
    int i;
    LOG_TRACE("(%p, %p)", pContents, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 11688
// Size: 0x2b4
//IDA: void __usercall ReceivedStartRace(tNet_contents *pContents@<EAX>)
void ReceivedStartRace(tNet_contents *pContents) {
    int i;
    int index;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 12380
// Size: 0x63
//IDA: void __usercall ReceivedGuaranteeReply(tNet_contents *pContents@<EAX>)
void ReceivedGuaranteeReply(tNet_contents *pContents) {
    int i;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 12480
// Size: 0x4b
//IDA: void __usercall ReceivedHeadup(tNet_contents *pContents@<EAX>)
void ReceivedHeadup(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 12556
// Size: 0x81
//IDA: void __usercall ReceivedHostQuery(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>)
void ReceivedHostQuery(tNet_contents *pContents, tNet_message *pMessage) {
    tNet_message *message;
    LOG_TRACE("(%p, %p)", pContents, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 12688
// Size: 0x8c
//IDA: void __usercall ReceivedHostReply(tNet_contents *pContents@<EAX>)
void ReceivedHostReply(tNet_contents *pContents) {
    tNet_message *message;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 12828
// Size: 0x5b
//IDA: void __usercall SendGuaranteeReply(tNet_message *pMessage@<EAX>, void *pSender_address@<EDX>)
void SendGuaranteeReply(tNet_message *pMessage, void *pSender_address) {
    tNet_message *message;
    LOG_TRACE("(%p, %p)", pMessage, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 12920
// Size: 0x7a
//IDA: int __usercall PlayerIsInList@<EAX>(tPlayer_ID pID@<EAX>)
int PlayerIsInList(tPlayer_ID pID) {
    int i;
    LOG_TRACE("(%d)", pID);
    NOT_IMPLEMENTED();
}

// Offset: 13044
// Size: 0x52
//IDA: void __usercall ReceivedTimeSync(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>, tU32 pReceive_time@<EBX>)
void ReceivedTimeSync(tNet_contents *pContents, tNet_message *pMessage, tU32 pReceive_time) {
    LOG_TRACE("(%p, %p, %d)", pContents, pMessage, pReceive_time);
    NOT_IMPLEMENTED();
}

// Offset: 13128
// Size: 0x6b
//IDA: void __usercall ReceivedConfirm(tNet_contents *pContents@<EAX>)
void ReceivedConfirm(tNet_contents *pContents) {
    int i;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 13236
// Size: 0x25
//IDA: void __usercall ReceivedDisableCar(tNet_contents *pContents@<EAX>)
void ReceivedDisableCar(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 13276
// Size: 0x25
//IDA: void __usercall ReceivedEnableCar(tNet_contents *pContents@<EAX>)
void ReceivedEnableCar(tNet_contents *pContents) {
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 13316
// Size: 0x67
//IDA: void __usercall ReceivedScores(tNet_contents *pContents@<EAX>)
void ReceivedScores(tNet_contents *pContents) {
    int i;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 13420
// Size: 0x2b8
//IDA: void __usercall ReceivedWasted(tNet_contents *pContents@<EAX>)
void ReceivedWasted(tNet_contents *pContents) {
    tNet_game_player_info *victim;
    tNet_game_player_info *culprit;
    char s[256];
    tCar_spec *car;
    static tS32 last_got_wasted_time;
    static tS32 last_wasted_em_time;
    static tS32 last_wasty_message_time;
    static tNet_game_player_info *last_culprit;
    static tNet_game_player_info *last_victim;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 14116
// Size: 0xbc
//IDA: void __usercall ReceivedCarDetailsReq(tNet_contents *pContents@<EAX>, void *pSender_address@<EDX>)
void ReceivedCarDetailsReq(tNet_contents *pContents, void *pSender_address) {
    tNet_message *message;
    int i;
    LOG_TRACE("(%p, %p)", pContents, pSender_address);
    NOT_IMPLEMENTED();
}

// Offset: 14304
// Size: 0xb7
//IDA: void __usercall ReceivedCarDetails(tNet_contents *pContents@<EAX>)
void ReceivedCarDetails(tNet_contents *pContents) {
    int i;
    int j;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 14488
// Size: 0x92
//IDA: void __usercall ReceivedGameScores(tNet_contents *pContents@<EAX>)
void ReceivedGameScores(tNet_contents *pContents) {
    int i;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

// Offset: 14636
// Size: 0x32a
//IDA: void __usercall ReceivedMessage(tNet_message *pMessage@<EAX>, void *pSender_address@<EDX>, tU32 pReceive_time@<EBX>)
void ReceivedMessage(tNet_message *pMessage, void *pSender_address, tU32 pReceive_time) {
    tNet_contents *contents;
    int i;
    LOG_TRACE("(%p, %p, %d)", pMessage, pSender_address, pReceive_time);
    NOT_IMPLEMENTED();
}

// Offset: 15448
// Size: 0xb1
//IDA: void __cdecl NetReceiveAndProcessMessages()
void NetReceiveAndProcessMessages() {
    tNet_message *message;
    void *sender_address;
    tU32 receive_time;
    int old_net_service;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15628
// Size: 0x54
//IDA: void __cdecl BroadcastStatus()
void BroadcastStatus() {
    tNet_message *message;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15712
// Size: 0x162
//IDA: void __cdecl CheckForDisappearees()
void CheckForDisappearees() {
    int i;
    int j;
    tU32 the_time;
    char s[256];
    char *s2;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16068
// Size: 0x69
//IDA: void __cdecl CheckForPendingStartRace()
void CheckForPendingStartRace() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16176
// Size: 0xdf
//IDA: void __usercall NetService(int pIn_race@<EAX>)
void NetService(int pIn_race) {
    tU32 time;
    static tU32 last_status_broadcast;
    LOG_TRACE("(%d)", pIn_race);
    NOT_IMPLEMENTED();
}

// Offset: 16400
// Size: 0x57
//IDA: void __usercall NetFinishRace(tNet_game_details *pDetails@<EAX>, tRace_over_reason pReason@<EDX>)
void NetFinishRace(tNet_game_details *pDetails, tRace_over_reason pReason) {
    tNet_message *the_message;
    LOG_TRACE("(%p, %d)", pDetails, pReason);
    NOT_IMPLEMENTED();
}

// Offset: 16488
// Size: 0x9d
//IDA: void __usercall NetPlayerStatusChanged(tPlayer_status pNew_status@<EAX>)
void NetPlayerStatusChanged(tPlayer_status pNew_status) {
    LOG_TRACE("(%d)", pNew_status);
    NOT_IMPLEMENTED();
}

// Offset: 16648
// Size: 0x38
//IDA: tPlayer_status __cdecl NetGetPlayerStatus()
tPlayer_status NetGetPlayerStatus() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16704
// Size: 0x9b
//IDA: int __usercall NetGuaranteedSendMessageToAllPlayers@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, int (*pNotifyFail)(tU32, tNet_message*)@<EBX>)
int NetGuaranteedSendMessageToAllPlayers(tNet_game_details *pDetails, tNet_message *pMessage, int (*pNotifyFail)(tU32, tNet_message*)) {
    int i;
    int err;
    LOG_TRACE("(%p, %p, %p)", pDetails, pMessage, pNotifyFail);
    NOT_IMPLEMENTED();
}

// Offset: 16860
// Size: 0x85
//IDA: int __usercall NetGuaranteedSendMessageToEverybody@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, int (*pNotifyFail)(tU32, tNet_message*)@<EBX>)
int NetGuaranteedSendMessageToEverybody(tNet_game_details *pDetails, tNet_message *pMessage, int (*pNotifyFail)(tU32, tNet_message*)) {
    LOG_TRACE("(%p, %p, %p)", pDetails, pMessage, pNotifyFail);
    NOT_IMPLEMENTED();
}

// Offset: 16996
// Size: 0x3e
//IDA: int __usercall NetGuaranteedSendMessageToHost@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, int (*pNotifyFail)(tU32, tNet_message*)@<EBX>)
int NetGuaranteedSendMessageToHost(tNet_game_details *pDetails, tNet_message *pMessage, int (*pNotifyFail)(tU32, tNet_message*)) {
    LOG_TRACE("(%p, %p, %p)", pDetails, pMessage, pNotifyFail);
    NOT_IMPLEMENTED();
}

// Offset: 17060
// Size: 0xf3
//IDA: int __usercall NetGuaranteedSendMessageToPlayer@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, tPlayer_ID pPlayer@<EBX>, int (*pNotifyFail)(tU32, tNet_message*)@<ECX>)
int NetGuaranteedSendMessageToPlayer(tNet_game_details *pDetails, tNet_message *pMessage, tPlayer_ID pPlayer, int (*pNotifyFail)(tU32, tNet_message*)) {
    int i;
    LOG_TRACE("(%p, %p, %d, %p)", pDetails, pMessage, pPlayer, pNotifyFail);
    NOT_IMPLEMENTED();
}

// Offset: 17304
// Size: 0x16f
//IDA: int __usercall NetGuaranteedSendMessageToAddress@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, void *pAddress@<EBX>, int (*pNotifyFail)(tU32, tNet_message*)@<ECX>)
int NetGuaranteedSendMessageToAddress(tNet_game_details *pDetails, tNet_message *pMessage, void *pAddress, int (*pNotifyFail)(tU32, tNet_message*)) {
    char __block0__s[256];
    LOG_TRACE("(%p, %p, %p, %p)", pDetails, pMessage, pAddress, pNotifyFail);
    NOT_IMPLEMENTED();
}

// Offset: 17672
// Size: 0x218
//IDA: void __cdecl ResendGuaranteedMessages()
void ResendGuaranteedMessages() {
    int i;
    int j;
    tU32 time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18208
// Size: 0x42
//IDA: int __usercall SampleFailNotifier@<EAX>(tU32 pAge@<EAX>, tNet_message *pMessage@<EDX>)
int SampleFailNotifier(tU32 pAge, tNet_message *pMessage) {
    LOG_TRACE("(%d, %p)", pAge, pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 18276
// Size: 0x4d
//IDA: void __cdecl NetWaitForGuaranteeReplies()
void NetWaitForGuaranteeReplies() {
    tU32 start_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18356
// Size: 0x72
//IDA: tNet_game_player_info* __usercall NetPlayerFromID@<EAX>(tPlayer_ID pPlayer@<EAX>)
tNet_game_player_info* NetPlayerFromID(tPlayer_ID pPlayer) {
    int i;
    LOG_TRACE("(%d)", pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 18472
// Size: 0x4e
//IDA: tCar_spec* __usercall NetCarFromPlayerID@<EAX>(tPlayer_ID pPlayer@<EAX>)
tCar_spec* NetCarFromPlayerID(tPlayer_ID pPlayer) {
    int i;
    tNet_game_player_info *player;
    LOG_TRACE("(%d)", pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 18552
// Size: 0x72
//IDA: tNet_game_player_info* __usercall NetPlayerFromCar@<EAX>(tCar_spec *pCar@<EAX>)
tNet_game_player_info* NetPlayerFromCar(tCar_spec *pCar) {
    int i;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 18668
// Size: 0xbb
//IDA: tU32 __usercall DoCheckSum@<EAX>(tNet_message *pMessage@<EAX>)
tU32 DoCheckSum(tNet_message *pMessage) {
    int i;
    int j;
    tU32 the_sum;
    tU32 *p;
    tU8 *q;
    LOG_TRACE("(%p)", pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 18856
// Size: 0x25
//IDA: void __usercall GetCheckSum(tNet_message *pMessage@<EAX>)
void GetCheckSum(tNet_message *pMessage) {
    LOG_TRACE("(%p)", pMessage);
    NOT_IMPLEMENTED();
}

// Offset: 18896
// Size: 0x25
//IDA: void __usercall CheckCheckSum(tNet_message *pMessage@<EAX>)
void CheckCheckSum(tNet_message *pMessage) {
    LOG_TRACE("(%p)", pMessage);
    NOT_IMPLEMENTED();
}

