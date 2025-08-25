#ifndef ENUMS_H
#define ENUMS_H

// High-level enums for game states, sprite types, and audio commands

typedef enum {
    STATE_INIT,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_GAME_OVER,
} GameState;

typedef enum {
    SPRITE_PLAYER,
    SPRITE_ENEMY,
    SPRITE_PROJECTILE,
    SPRITE_ITEM,
} SpriteType;

typedef enum {
    AUDIO_CMD_PLAY = 0x2B,
    AUDIO_CMD_STOP = 0x11,
    AUDIO_CMD_RESET = 0x00,
} AudioCmd;

#endif // ENUMS_H
