#include "audio.h"
#include "ghidra_pseudo.h"

// External declarations of Ghidra-generated audio routines
extern void FUN_002cbbb8(void);
extern void FUN_002cbbc2(void);
extern void FUN_002cbc06(void);
extern void FUN_002cbd12(uint8_t cmd, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void audio_init(void) {
    // Reset audio co-processor and load driver
    FUN_002cbbb8();
    FUN_002cbbc2();
}

void audio_update(void) {
    // Tick audio driver
    FUN_002cbc06();
}

void audio_play(uint8_t id) {
    // Send play command to driver (stub args)
    FUN_002cbd12(id, 0, 0, 0, 0);
}
