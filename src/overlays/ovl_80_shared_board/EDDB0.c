#include "common.h"

extern void *D_80102BC4_1167E4_shared_board;

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EDDB0", MBComTreeExec);

void MBComItemDecideHookSet(void *arg0) {
    D_80102BC4_1167E4_shared_board = arg0;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EDDB0", MBComItemDecide);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EDDB0", func_800DA778_EE398_shared_board);
