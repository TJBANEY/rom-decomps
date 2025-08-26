#!/bin/bash
#
# Renames all FUN_* functions in earthworm_jim.c to their new,
# human-readable names.
#
# Usage: ./rename_functions.sh

TARGET_FILE="/home/timbaney89/development/games/decomp/sega/earthworm_jim/earthworm_jim.c"

# Check if the target file exists
if [ ! -f "$TARGET_FILE" ]; then
    echo "Error: Target file not found at $TARGET_FILE"
    exit 1
fi

echo "Renaming functions in $TARGET_FILE..."

sed -i \
    -e 's/FUN_001a27a0/system_init_hardware/g' \
    -e 's/FUN_002459f0/update_menu_animation/g' \
    -e 's/FUN_00245adc/no_op_handler/g' \
    -e 's/FUN_00245ae4/fade_out_sequence/g' \
    -e 's/FUN_00245ce6/clamp_scroll_bounds/g' \
    -e 's/FUN_00245d54/wait_for_user_input/g' \
    -e 's/FUN_00245e50/render_menu_text/g' \
    -e 's/FUN_00246422/load_title_graphics/g' \
    -e 's/FUN_002464c8/apply_palette_colors/g' \
    -e 's/FUN_0024669e/set_vram_tiles/g' \
    -e 's/FUN_00246860/initialize_input_state/g' \
    -e 's/FUN_0024690c/update_controller_state/g' \
    -e 's/FUN_00246a78/start_sound_driver/g' \
    -e 's/FUN_00246ab2/play_title_music/g' \
    -e 's/FUN_00246aec/update_audio_buffer/g' \
    -e 's/FUN_00246b08/stop_audio_playback/g' \
    -e 's/FUN_00246fb4/toggle_sprite_visibility/g' \
    -e 's/FUN_00246ffc/vblank_wait_sync/g' \
    -e 's/FUN_00247652/poll_vdp_ready/g' \
    -e 's/FUN_002476ac/flush_vram_fifo/g' \
    -e 's/FUN_002478c8/load_level_tiles/g' \
    "$TARGET_FILE"

echo "All functions renamed successfully."
