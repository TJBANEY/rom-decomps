#ifndef VDP_H
#define VDP_H

#include <stdint.h>

void vdp_data_write(uint16_t value);
uint16_t vdp_data_read(void);
void vdp_control_write(uint16_t value);
uint16_t vdp_control_read(void);

#endif // VDP_H
