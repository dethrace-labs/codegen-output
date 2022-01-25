#ifndef _DOSNET_H_
#define _DOSNET_H_

#include "dr_types.h"
#include "br_types.h"

extern tU32 gNetwork_init_flags; // addr: 0001AE40
extern tPD_net_game_info *gJoinable_games; // addr: 0001AE44
extern int gMatts_PC; // addr: 0001AE48
extern tU16 gSocket_number_pd_format; // addr: 0001AE4C
extern _IPX_ELEMENT gListen_elements[16]; // addr: 00043490
extern char gLocal_ipx_addr_string[32]; // addr: 00043A90
extern _IPX_ELEMENT gSend_elements[16]; // addr: 00043AB0
extern _IPX_LOCAL_TARGET gLocal_addr_ipx; // addr: 000440B0
extern char gReceive_buffer[512]; // addr: 000440C0
extern tPD_net_player_info gRemote_net_player_info; // addr: 000442C0
extern _IPX_LOCAL_TARGET gBroadcast_addr_ipx; // addr: 000442D0
extern tPD_net_player_info gLocal_net_player_info; // addr: 000442E0
extern char gSend_buffer[512]; // addr: 000442F0
extern tIPX_netnum gNetworks[16]; // addr: 000444F0
extern _IPX_LOCAL_TARGET gRemote_addr_ipx; // addr: 00044530
extern tU8 *gSend_packet; // addr: 00044540
extern W32 gListen_segment; // addr: 00044544
extern tU8 *gSend_packet_ptr; // addr: 00044548
extern W32 gSend_segment; // addr: 0004454C
extern tU8 *gListen_packet; // addr: 00044550
extern tU8 *gListen_packet_ptr; // addr: 00044554
extern size_t gMsg_header_strlen; // addr: 00044558
extern int gNumber_of_networks; // addr: 0004455C
extern int gNumber_of_hosts; // addr: 00044560
extern tRM_info RMI; // addr: 00044564
extern _IPX_HEADER gLast_received_IPX_header; // addr: 00044598
extern tU16 gSocket_number_network_order; // addr: 000445B6
extern USHORT gECB_offset; // addr: 000445B8
extern tU16 gListen_selector; // addr: 000445BA
extern tU16 gSend_selector; // addr: 000445BC

// Offset: 0
// Size: 0xc9
//IDA: void __cdecl ClearupPDNetworkStuff()
void ClearupPDNetworkStuff();

// Offset: 204
// Size: 0x27
//IDA: void __usercall MATTMessageCheck(char *pFunction_name@<EAX>, tNet_message *pMessage@<EDX>, int pAlleged_size@<EBX>)
void MATTMessageCheck(char *pFunction_name, tNet_message *pMessage, int pAlleged_size);

// Offset: 244
// Size: 0x1e4
//IDA: int __usercall GetProfileText@<EAX>(char *pDest@<EAX>, int pDest_len@<EDX>, char *pFname@<EBX>, char *pKeyname@<ECX>)
int GetProfileText(char *pDest, int pDest_len, char *pFname, char *pKeyname);

// Offset: 728
// Size: 0xbb
//IDA: int __cdecl GetSocketNumberFromProfileFile()
int GetSocketNumberFromProfileFile();

// Offset: 916
// Size: 0x68
//IDA: tU32 __usercall EthernetAddressToU32@<EAX>(_IPX_LOCAL_TARGET *pAddr_ipx@<EAX>)
tU32 EthernetAddressToU32(_IPX_LOCAL_TARGET *pAddr_ipx);

// Offset: 1020
// Size: 0xaf
//IDA: void __usercall NetNowIPXLocalTarget2String(char *pString@<EAX>, _IPX_LOCAL_TARGET *pSock_addr_ipx@<EDX>)
void NetNowIPXLocalTarget2String(char *pString, _IPX_LOCAL_TARGET *pSock_addr_ipx);

// Offset: 1196
// Size: 0x9d
//IDA: int __usercall GetMessageTypeFromMessage@<EAX>(char *pMessage_str@<EAX>)
int GetMessageTypeFromMessage(char *pMessage_str);

// Offset: 1356
// Size: 0x5f
//IDA: int __usercall SameEthernetAddress@<EAX>(_IPX_LOCAL_TARGET *pAddr_ipx1@<EAX>, _IPX_LOCAL_TARGET *pAddr_ipx2@<EDX>)
int SameEthernetAddress(_IPX_LOCAL_TARGET *pAddr_ipx1, _IPX_LOCAL_TARGET *pAddr_ipx2);

// Offset: 1452
// Size: 0xc2
//IDA: _IPX_LOCAL_TARGET* __usercall GetIPXAddrFromPlayerID@<EAX>(tPlayer_ID pPlayer_id@<EAX>)
_IPX_LOCAL_TARGET* GetIPXAddrFromPlayerID(tPlayer_ID pPlayer_id);

// Offset: 1648
// Size: 0x43
//IDA: void __usercall MakeMessageToSend(int pMessage_type@<EAX>)
void MakeMessageToSend(int pMessage_type);

// Offset: 1716
// Size: 0x202
//IDA: int __cdecl ReceiveHostResponses()
int ReceiveHostResponses();

// Offset: 2232
// Size: 0xe5
//IDA: int __cdecl BroadcastMessage()
int BroadcastMessage();

// Offset: 2464
// Size: 0xae
//IDA: BOOL __usercall hmiIPXCloseSocket@<EAX>(W32 wSocket@<EAX>)
BOOL hmiIPXCloseSocket(W32 wSocket);

// Offset: 2640
// Size: 0x151
//IDA: void __usercall hmiIPXListenForPacket(_IPX_ECB *pECB_ptr@<EAX>, tU32 pOffset@<EDX>)
void hmiIPXListenForPacket(_IPX_ECB *pECB_ptr, tU32 pOffset);

// Offset: 2980
// Size: 0x3b
//IDA: BOOL __usercall hmiIPXPostListen@<EAX>(_IPX_ECB *pECB_ptr@<EAX>, tU32 pOffset@<EDX>)
BOOL hmiIPXPostListen(_IPX_ECB *pECB_ptr, tU32 pOffset);

// Offset: 3040
// Size: 0x116
//IDA: BOOL __cdecl hmiIPXGetData(PSTR pData, tU32 wDSize)
BOOL hmiIPXGetData(PSTR pData, tU32 wDSize);

// Offset: 3320
// Size: 0x1a7
//IDA: void __usercall hmiIPXSendPacket(_IPX_ECB *sECB@<EAX>, _IPX_ECB **pPacket@<EDX>, PSTR pHeader@<EBX>, W32 wSize@<ECX>)
void hmiIPXSendPacket(_IPX_ECB *sECB, _IPX_ECB **pPacket, PSTR pHeader, W32 wSize);

// Offset: 3744
// Size: 0x1f1
//IDA: BOOL __usercall hmiIPXSendDataDirect@<EAX>(PSTR pHeader@<EAX>, W32 wHSize@<EDX>, PSTR pData@<EBX>, W32 wDSize@<ECX>, _NETNOW_NODE_ADDR *sNode)
BOOL hmiIPXSendDataDirect(PSTR pHeader, W32 wHSize, PSTR pData, W32 wDSize, _NETNOW_NODE_ADDR *sNode);

// Offset: 4244
// Size: 0xb7
//IDA: void __usercall hmiIPXGetInternetworkAddr(_IPX_INTERNET_ADDR *sInterworkAddr@<EAX>)
void hmiIPXGetInternetworkAddr(_IPX_INTERNET_ADDR *sInterworkAddr);

// Offset: 4428
// Size: 0xd3
//IDA: void __usercall hmiIPXGetLocalTarget(_IPX_LOCAL_TARGET *sNetworkAddr@<EAX>)
void hmiIPXGetLocalTarget(_IPX_LOCAL_TARGET *sNetworkAddr);

// Offset: 4640
// Size: 0xe0
//IDA: BOOL __usercall AllocateRealMem@<EAX>(W32 wSize@<EAX>, PSTR *pPtr@<EDX>, W32 *pSegment@<EBX>, tU16 *pSelector@<ECX>)
BOOL AllocateRealMem(W32 wSize, PSTR *pPtr, W32 *pSegment, tU16 *pSelector);

// Offset: 4864
// Size: 0xa5
//IDA: BOOL __usercall FreeRealMem@<EAX>(tU16 pSelector@<EAX>)
BOOL FreeRealMem(tU16 pSelector);

// Offset: 5032
// Size: 0xd2
//IDA: BOOL __cdecl hmiIPXInstalled()
BOOL hmiIPXInstalled();

// Offset: 5244
// Size: 0xcc
//IDA: BOOL __usercall hmiIPXOpenSocket@<EAX>(W32 wSocket@<EAX>)
BOOL hmiIPXOpenSocket(W32 wSocket);

// Offset: 5448
// Size: 0xcb
//IDA: void __cdecl GetLargestPacketSizeOoErBetterInsertLinfordChristieJokeHere()
void GetLargestPacketSizeOoErBetterInsertLinfordChristieJokeHere();

// Offset: 5652
// Size: 0x1fe
//IDA: BOOL __usercall hmiIPXInitSystem@<EAX>(W32 wSocket@<EAX>)
BOOL hmiIPXInitSystem(W32 wSocket);

// Offset: 6164
// Size: 0x56
//IDA: void __cdecl GetIPXToStickItsEarToTheGround()
void GetIPXToStickItsEarToTheGround();

// Offset: 6252
// Size: 0x156
//IDA: int __cdecl PDNetInitialise()
int PDNetInitialise();

// Offset: 6596
// Size: 0x3f
//IDA: int __cdecl PDNetShutdown()
int PDNetShutdown();

// Offset: 6660
// Size: 0x65
//IDA: void __cdecl PDNetStartProducingJoinList()
void PDNetStartProducingJoinList();

// Offset: 6764
// Size: 0x51
//IDA: void __cdecl PDNetEndJoinList()
void PDNetEndJoinList();

// Offset: 6848
// Size: 0x171
//IDA: int __usercall PDNetGetNextJoinGame@<EAX>(tNet_game_details *pGame@<EAX>, int pIndex@<EDX>)
int PDNetGetNextJoinGame(tNet_game_details *pGame, int pIndex);

// Offset: 7220
// Size: 0x33
//IDA: void __usercall PDNetDisposeGameDetails(tNet_game_details *pDetails@<EAX>)
void PDNetDisposeGameDetails(tNet_game_details *pDetails);

// Offset: 7272
// Size: 0x48
//IDA: int __usercall PDNetHostGame@<EAX>(tNet_game_details *pDetails@<EAX>, char *pHost_name@<EDX>, void **pHost_address@<EBX>)
int PDNetHostGame(tNet_game_details *pDetails, char *pHost_name, void **pHost_address);

// Offset: 7344
// Size: 0x3e
//IDA: int __usercall PDNetJoinGame@<EAX>(tNet_game_details *pDetails@<EAX>, char *pPlayer_name@<EDX>)
int PDNetJoinGame(tNet_game_details *pDetails, char *pPlayer_name);

// Offset: 7408
// Size: 0x33
//IDA: void __usercall PDNetLeaveGame(tNet_game_details *pDetails@<EAX>)
void PDNetLeaveGame(tNet_game_details *pDetails);

// Offset: 7460
// Size: 0x33
//IDA: void __usercall PDNetHostFinishGame(tNet_game_details *pDetails@<EAX>)
void PDNetHostFinishGame(tNet_game_details *pDetails);

// Offset: 7512
// Size: 0x4a
//IDA: tU32 __usercall PDNetExtractGameID@<EAX>(tNet_game_details *pDetails@<EAX>)
tU32 PDNetExtractGameID(tNet_game_details *pDetails);

// Offset: 7588
// Size: 0x4e
//IDA: tPlayer_ID __usercall PDNetExtractPlayerID@<EAX>(tNet_game_details *pDetails@<EAX>)
tPlayer_ID PDNetExtractPlayerID(tNet_game_details *pDetails);

// Offset: 7668
// Size: 0x41
//IDA: void __usercall PDNetObtainSystemUserName(char *pName@<EAX>, int pMax_length@<EDX>)
void PDNetObtainSystemUserName(char *pName, int pMax_length);

// Offset: 7736
// Size: 0xdf
//IDA: int __usercall PDNetSendMessageToPlayer@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, tPlayer_ID pPlayer@<EBX>)
int PDNetSendMessageToPlayer(tNet_game_details *pDetails, tNet_message *pMessage, tPlayer_ID pPlayer);

// Offset: 7960
// Size: 0x112
//IDA: int __usercall PDNetSendMessageToAllPlayers@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>)
int PDNetSendMessageToAllPlayers(tNet_game_details *pDetails, tNet_message *pMessage);

// Offset: 8236
// Size: 0x1a4
//IDA: tNet_message* __usercall PDNetGetNextMessage@<EAX>(tNet_game_details *pDetails@<EAX>, void **pSender_address@<EDX>)
tNet_message* PDNetGetNextMessage(tNet_game_details *pDetails, void **pSender_address);

// Offset: 8656
// Size: 0x4c
//IDA: tNet_message* __usercall PDNetAllocateMessage@<EAX>(tU32 pSize@<EAX>, tS32 pSize_decider@<EDX>)
tNet_message* PDNetAllocateMessage(tU32 pSize, tS32 pSize_decider);

// Offset: 8732
// Size: 0x3f
//IDA: void __usercall PDNetDisposeMessage(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>)
void PDNetDisposeMessage(tNet_game_details *pDetails, tNet_message *pMessage);

// Offset: 8796
// Size: 0x3e
//IDA: void __usercall PDNetSetPlayerSystemInfo(tNet_game_player_info *pPlayer@<EAX>, void *pSender_address@<EDX>)
void PDNetSetPlayerSystemInfo(tNet_game_player_info *pPlayer, void *pSender_address);

// Offset: 8860
// Size: 0x33
//IDA: void __usercall PDNetDisposePlayer(tNet_game_player_info *pPlayer@<EAX>)
void PDNetDisposePlayer(tNet_game_player_info *pPlayer);

// Offset: 8912
// Size: 0xca
//IDA: int __usercall PDNetSendMessageToAddress@<EAX>(tNet_game_details *pDetails@<EAX>, tNet_message *pMessage@<EDX>, void *pAddress@<EBX>)
int PDNetSendMessageToAddress(tNet_game_details *pDetails, tNet_message *pMessage, void *pAddress);

// Offset: 9116
// Size: 0x3d
//IDA: int __usercall PDNetInitClient@<EAX>(tNet_game_details *pDetails@<EAX>)
int PDNetInitClient(tNet_game_details *pDetails);

// Offset: 9180
// Size: 0x2c
//IDA: int __cdecl PDNetGetHeaderSize()
int PDNetGetHeaderSize();

#endif
