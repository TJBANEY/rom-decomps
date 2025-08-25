#ifndef MD_HW_H
#define MD_HW_H

#include <stdint.h>

// Memory-mapped VDP registers
#define VDP_DATA_ADDR    0xC00000
#define VDP_CTRL_ADDR    0xC00004

static volatile uint16_t* const VDP_DATA_PTR = (volatile uint16_t*)VDP_DATA_ADDR;
static volatile uint16_t* const VDP_CTRL_PTR = (volatile uint16_t*)VDP_CTRL_ADDR;

#endif // MD_HW_H
