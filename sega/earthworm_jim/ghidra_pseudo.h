#ifndef GHIDRA_PSEUDO_H
#define GHIDRA_PSEUDO_H

#include <stdint.h>
#include <stdbool.h>

typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef char* string;
typedef uint8_t byte;
typedef void* pointer;
typedef void (*code)(void);
typedef uint32_t uint;
typedef uint16_t ushort;
// Boolean aliases
#ifndef true
#define true true
#endif
#ifndef false
#define false false
#endif
// Controller input state stubs (override with real ports later)
#define _CONTROLLER_1_STATE 0
#define _CONTROLLER_2_STATE 0
// VDP register aliases
#include "md_hw.h"
#define _DAT_00c00000 (*VDP_DATA_PTR)
#define _DAT_00c00004 (*VDP_CTRL_PTR)
// IRQ handler alias
#include "vdp.h"
#define _DAT_00fffbd4 vdp_irq_handler
// Ghidra concat and cast macros
#define CONCAT31(a,b) ((((uint32_t)(a))<<8) | (uint8_t)(b))
#define CONCAT22(a,b) ((((uint32_t)(a))<<16) | (uint16_t)(b))
#define int3(x) ((uint32_t)(x)&0xFFFFFF)

#endif // GHIDRA_PSEUDO_H
