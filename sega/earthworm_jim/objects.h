#ifndef OBJECTS_H
#define OBJECTS_H

#include <stdint.h>

// Object structure (fields guessed; adjust by analyzing binary)
typedef struct {
    uint16_t id;
    uint16_t x;
    uint16_t y;
    uint16_t flags;
    // TODO: add remaining fields
} Obj;

#define MAX_OBJECTS 128

// Array of active objects
extern Obj objects[MAX_OBJECTS];

// Data tables from ROM
extern uint32_t sprite_table_1[];
extern uint32_t sprite_table_2[];
extern void (*object_functions[])(Obj *obj);
extern uint16_t animation_table_A[];
extern uint16_t animation_table_B[];

// Initialize objects (to zero)
void objects_init(void);
// Update all objects by calling their per-type functions
void objects_update_all(void);

#endif // OBJECTS_H
