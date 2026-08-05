#include "common.h"

extern s8 D_800B23B0_B2FB0;
extern s8 D_800B23B1_B2FB1;

s32 func_800465D0_471D0(void) {
    return D_800B23B0_B2FB0;
}

void func_800465DC_471DC(s32 arg0) {
    D_800B23B0_B2FB0 = arg0;
}

s32 func_800465E8_471E8(void) {
    return D_800B23B1_B2FB1;
}

void func_800465F4_471F4(s32 arg0) {
    D_800B23B1_B2FB1 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/471D0", func_80046600_47200);

INCLUDE_ASM("asm/nonmatchings/471D0", func_800466D8_472D8);

INCLUDE_ASM("asm/nonmatchings/471D0", func_80046728_47328);
