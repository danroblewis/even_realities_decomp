/*
 * Function: validate_system_state_with_callback_handling
 * Entry:    000796ac
 * Prototype: undefined validate_system_state_with_callback_handling()
 */


void validate_system_state_with_callback_handling(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_20002ef4)("mutex_free called with NULL parameter");
  }
  if (((param_1[1] & 0x3a000000) != 0) && (param_1[1] != 0xa95c5f2c)) {
    param_1[1] = 0xa95c5f2c;
    *param_1 = 0;
  }
  return;
}


