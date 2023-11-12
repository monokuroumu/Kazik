#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_kazik( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, \
    k19, k20, k21, k22, k23, k24, k25, k26, k27, \
    k28, k29, k30, k31, k32, k33, k34, k35, k36 \
) { \
    { k01, k00, k03, k02, k05, k04, k07, k06, k09, k08 }, \
    { k11, k10, k13, k12, k15, k14, k17, k16, k18, k19 }, \
    { k21, k20, k23, k22, k25, k24, k27, k26, k29, k28 }, \
    { k31, k30, k33, k32, k35, k34, ___, ___, ___, ___ }  \
}
