/*
 * Function: send_control_message_with_different_parameters_if_valid
 * Entry:    0007c944
 * Prototype: undefined send_control_message_with_different_parameters_if_valid()
 */


undefined4 send_control_message_with_different_parameters_if_valid(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = send_control_message_with_retry(param_1,0x20,param_2,1);
    return uVar1;
  }
  return 0xffffffea;
}


