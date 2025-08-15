/*
 * Function: bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback
 * Entry:    000582b8
 * Prototype: undefined bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback()
 */


undefined4
bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback
          (uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (0x23 < param_1) {
    if ((param_1 & 0x7f) == 0x52) {
      return 0;
    }
switchD_000582d2_caseD_1c:
    if ((param_1 & 0x40) == 0) {
      uVar1 = 6;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  if (0x1a < param_1) {
    switch(param_1) {
    case 0x1b:
    case 0x23:
      return 3;
    default:
      goto switchD_000582d2_caseD_1c;
    case 0x1d:
      return 5;
    case 0x1e:
      return 4;
    case 0x20:
      return 1;
    case 0x21:
      goto switchD_000582d2_caseD_21;
    }
  }
  if (0x18 < param_1 - 1) {
    return 6;
  }
  uVar2 = 1 << (param_1 & 0xff);
  if ((uVar2 & 0x28aaaaa) == 0) {
    if ((uVar2 & 0x1455554) == 0) {
      uVar1 = 6;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
switchD_000582d2_caseD_21:
  return 2;
}


