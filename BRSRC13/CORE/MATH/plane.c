#include "plane.h"


// Offset: 16
// Size: 0x20d
//IDA: br_int_32 __cdecl BrPlaneEquation(br_vector4 *eqn, br_vector3 *v0, br_vector3 *v1, br_vector3 *v2)
br_int_32 BrPlaneEquation(br_vector4 *eqn, br_vector3 *v0, br_vector3 *v1, br_vector3 *v2) {
    br_vector3 a;
    br_vector3 b;
    float ax;
    float ay;
    float az;
    float bx;
    float by;
    float bz;
    float nx;
    float ny;
    float nz;
    float d;
    float l;
    LOG_TRACE("(%p, %p, %p, %p)", eqn, v0, v1, v2);
    NOT_IMPLEMENTED();
}

