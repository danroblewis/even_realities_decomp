/*
 * Function: bt_connection_disconnect_with_callback_validation_and_parameter
 * Entry:    000572fc
 * Prototype: undefined bt_connection_disconnect_with_callback_validation_and_parameter()
 */


undefined4 bt_connection_disconnect_with_callback_validation_and_parameter(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (DAT_2000ad28 != (int *)0x0) {
      return 0xffffff88;
    }
    if ((param_1[4] == 0) &&
       ((((*param_1 != 0 || (param_1[1] != 0)) || (param_1[2] != 0)) || (param_1[5] != 0)))) {
      return 0xffffffea;
    }
  }
  DAT_2000ad28 = param_1;
  return 0;
}


