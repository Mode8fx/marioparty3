#include "common.h"
#include "PR/viint.h"

extern __OSViContext *D_800A4100_A4D00;
__OSViContext *__osViGetCurrentContext(void) {
    return D_800A4100_A4D00;
}
