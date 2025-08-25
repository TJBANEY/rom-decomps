#include "md_hw.h"
#include "vdp.h"

void vdp_data_write(uint16_t value) {
    *VDP_DATA_PTR = value;
}

uint16_t vdp_data_read(void) {
    return *VDP_DATA_PTR;
}

void vdp_control_write(uint16_t value) {
    *VDP_CTRL_PTR = value;
}

uint16_t vdp_control_read(void) {
    return *VDP_CTRL_PTR;
}
