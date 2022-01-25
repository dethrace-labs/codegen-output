#ifndef _GRAFDATA_H_
#define _GRAFDATA_H_

#include "dr_types.h"
#include "br_types.h"

extern tGraf_data gGraf_data[2]; // addr: 0001277C
extern tGraf_data *gCurrent_graf_data; // addr: 00031250
extern int gGraf_data_index; // addr: 00031254

// Offset: 0
// Size: 0xaa
//IDA: void __cdecl CalcGrafDataIndex()
void CalcGrafDataIndex();

#endif
