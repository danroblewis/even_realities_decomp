/*
 * Function: send_control_message_with_retry_if_valid
 * Entry:    0007c8e8
 * Prototype: undefined send_control_message_with_retry_if_valid()
 */


undefined4 send_control_message_with_retry_if_valid(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = send_control_message_with_retry(param_1,1,param_2);
    return uVar1;
  }
  return 0xffffffea;
}


