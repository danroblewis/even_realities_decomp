/*
 * Function: reset_animation_counters
 * Entry:    0007d3be
 * Prototype: undefined reset_animation_counters()
 */


void reset_animation_counters(void)

{
  ANIM_FRAME_COUNTER = 0;
  ANIM_FRAME_IDX = 0;
  ANIM_FRAME_ROW_IDX = 0;
  return;
}


