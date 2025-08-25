#ifndef AUDIO_H
#define AUDIO_H

#include <stdint.h>

// Initialize Z80 co-processor and sound driver
void audio_init(void);
// Update audio subsystem each frame
void audio_update(void);
// Play a sound effect or music track
void audio_play(uint8_t id);

#endif // AUDIO_H
