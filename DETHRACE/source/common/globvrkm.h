#ifndef _GLOBVRKM_H_
#define _GLOBVRKM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_scalar gCamera_zoom; // addr: 00012754
extern br_angle gCamera_yaw; // addr: 00012758
extern br_vector3 gView_direction; // addr: 0001275C
extern int gCamera_sign; // addr: 00012768
extern int gCar_flying; // addr: 0001276C
extern int gCamera_reset; // addr: 00012770
extern tCar_spec *gCar_to_view; // addr: 00012774
extern br_actor *gCamera_list[2]; // addr: 00030740
extern tCar_spec *gActive_car_list[25]; // addr: 00030748
extern int gNum_active_cars; // addr: 000307AC
extern float gRecovery_cost[3]; // addr: 000307B0
extern br_scalar gCamera_height; // addr: 000307BC
extern br_scalar gMin_camera_car_distance; // addr: 000307C0

#endif
