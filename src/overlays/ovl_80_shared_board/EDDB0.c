#include "common.h"

extern s32 D_80102BC0_1167E0_shared_board;
extern void *D_80102BC4_1167E4_shared_board;

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EDDB0", MBComTreeExec);

void MBComItemDecideHookSet(void *arg0) {
    D_80102BC4_1167E4_shared_board = arg0;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EDDB0", MBComItemDecide);

void func_800DA778_EE398_shared_board(s32 arg0) {
    D_80102BC0_1167E0_shared_board = arg0;
}
