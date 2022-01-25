#ifndef _GLOBVRBM_H_
#define _GLOBVRBM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_scalar gYon_factor; // addr: 00012750
extern br_material *gMaterial[2]; // addr: 000306B0
extern int g16bit_palette_valid; // addr: 000306B8
extern tException_list gExceptions; // addr: 000306BC
extern br_actor *g2d_camera; // addr: 000306C0
extern int gAlready_copied; // addr: 000306C4
extern br_actor *gBlend_actor; // addr: 000306C8
extern br_actor *gLine_actor; // addr: 000306CC
extern br_model *gBlend_model; // addr: 000306D0
extern br_model *gPrat_model; // addr: 000306D4
extern char *gExceptions_general_file; // addr: 000306D8
extern br_model *gDim_model; // addr: 000306DC
extern br_material *gPrat_material; // addr: 000306E0
extern br_material *gBlend_material; // addr: 000306E4
extern char *gExceptions_file_suffix; // addr: 000306E8
extern br_material *gDim_material; // addr: 000306EC
extern br_actor *gPrat_actor; // addr: 000306F0
extern br_material *gLine_material; // addr: 000306F4
extern br_model *gLine_model; // addr: 000306F8
extern br_actor *gDim_actor; // addr: 000306FC
extern int gNo_transients; // addr: 00030700
extern int gSmall_frames_are_slow; // addr: 00030704
extern int gShade_tables_do_not_work; // addr: 00030708
extern int gInterpolate_textures; // addr: 0003070C
extern int gNo_2d_effects; // addr: 00030710
extern int gPerspective_is_fast; // addr: 00030714
extern int gUse_mip_maps; // addr: 00030718
extern int gBlitting_is_slow; // addr: 0003071C
extern int gTextures_need_powers_of_2; // addr: 00030720
extern int gMax_texture_side; // addr: 00030724
extern int gDevious_2d; // addr: 00030728
extern int gMax_texture_aspect_ratio; // addr: 0003072C
extern int gMaterial_fogging; // addr: 00030730

#endif
