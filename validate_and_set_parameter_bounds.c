/*
 * Function: validate_and_set_parameter_bounds
 * Entry:    000369dc
 * Prototype: undefined validate_and_set_parameter_bounds()
 */


void validate_and_set_parameter_bounds(uint param_1)

{
  if (4 < param_1) {
    param_1 = 0;
  }
  DISPLAY_UPDATE_FLAG = 1;
  CURRENT_WORK_MODE_ID = (char)param_1;
  return;
}


