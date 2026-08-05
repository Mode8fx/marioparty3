#include "common.h"
typedef struct {
    /* 0x00 */ s16 unk00;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ s16 state;
    /* 0x06 */ s16 unk06;
    /* 0x08 */ s16 unk08;
    /* 0x0A */ s16 unk0A;
} MinigameSelectionData;

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E7930_BA4B0_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E7A2C_BA5AC_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E7BCC_BA74C_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E7E08_BA988_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E7F60_BAAE0_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E8EC4_BBA44_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E8F78_BBAF8_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E8FE4_BBB64_minigame);

s16 MinigameSelectionStateGet(Process *arg0) {
    MinigameSelectionData *selection = arg0->user_data;

    return selection->state;
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E9004_BBB84_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E905C_BBBDC_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E9170_BBCF0_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BA4B0", func_800E989C_BC41C_minigame);
