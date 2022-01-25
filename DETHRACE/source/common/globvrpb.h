#ifndef _GLOBVRPB_H_
#define _GLOBVRPB_H_

#include "dr_types.h"
#include "br_types.h"

extern tNet_mode gNet_mode; // addr: 00012778
extern tNet_game_player_info gNet_players[6]; // addr: 000308A0
extern br_matrix34 gRoot_to_camera; // addr: 00030D20
extern tCar_detail_info gCar_details[60]; // addr: 00030D50
extern int gThis_net_player_index; // addr: 00031200
extern br_scalar gPedestrian_distance_squared; // addr: 00031204
extern int gPending_race; // addr: 00031208
extern tPlayer_ID gLocal_net_ID; // addr: 0003120C
extern int gNumber_of_net_players; // addr: 00031210
extern int gStart_race_sent; // addr: 00031214
extern int gSynch_race_start; // addr: 00031218
extern tNet_game_details *gCurrent_net_game; // addr: 0003121C
extern int gReceived_car_details; // addr: 00031220
extern int gWaiting_for_unpause; // addr: 00031224
extern tNet_game_options *gNet_options; // addr: 00031228
extern br_vector3 gCamera_direction; // addr: 0003122C
extern int gNetwork_available; // addr: 00031238
extern int gPedestrian_image; // addr: 0003123C
extern int gHighest_pedestrian_value; // addr: 00031240
extern int gNeed_to_send_start_race; // addr: 00031244
extern int gRendering_mirror; // addr: 00031248

#endif
