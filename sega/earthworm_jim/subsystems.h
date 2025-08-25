#ifndef SUBSYSTEMS_H
#define SUBSYSTEMS_H

// High-level subsystem interfaces
void input_update(void);
void game_update(void);
void render_frame(void);
void vblank_sync(void);

#endif // SUBSYSTEMS_H
