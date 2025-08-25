#include "subsystems.h"
#include "objects.h"

// Stub for reading controller and setting object spawn/etc.
void input_update(void) {
    // TODO: implement input reading
}

// Update all game objects
void game_update(void) {
    objects_update_all();
}

// Render the current frame via VDP calls
void render_frame(void) {
    // TODO: implement rendering logic
}

// Wait for VBlank or handle IRQ-driven sync
void vblank_sync(void) {
    // TODO: implement VBlank synchronization
}
