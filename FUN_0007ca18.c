/*
 * Function: FUN_0007ca18
 * Entry:    0007ca18
 * Prototype: undefined FUN_0007ca18()
 */


void FUN_0007ca18(undefined4 param_1,undefined4 param_2)

{
  send_control_message_with_retry_and_mutex(param_1,0x2005,param_2,1);
  return;
}


