#include "objects.h"
#include <string.h>

// Storage for all game objects
Obj objects[MAX_OBJECTS];

// Placeholder data tables (to be filled with real ROM pointers)
uint32_t sprite_table_1[] = {0};
uint32_t sprite_table_2[] = {0};
void (*object_functions[])(Obj *obj) = {0};
uint16_t animation_table_A[] = {0};
uint16_t animation_table_B[] = {0};

// Initialize the object array
void objects_init(void) {
    memset(objects, 0, sizeof(objects));
}

// Call update function for each active object
void objects_update_all(void) {
    size_t count = sizeof(object_functions) / sizeof(object_functions[0]);
    for (int i = 0; i < MAX_OBJECTS; i++) {
        if (objects[i].id != 0 && objects[i].id < count && object_functions[objects[i].id]) {
            object_functions[objects[i].id](&objects[i]);
        }
    }
}
