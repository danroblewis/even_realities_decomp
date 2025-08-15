/*
 * Function: increment_parameter_counter_with_wrap
 * Entry:    000369f8
 * Prototype: undefined increment_parameter_counter_with_wrap()
 */


void increment_parameter_counter_with_wrap(void)

{
  DISPLAY_UPDATE_FLAG = 1;
  CURRENT_WORK_MODE_ID = CURRENT_WORK_MODE_ID + 1;
  if (4 < CURRENT_WORK_MODE_ID) {
    CURRENT_WORK_MODE_ID = 0;
  }
  return;
}


