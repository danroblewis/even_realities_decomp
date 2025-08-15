/*
 * Function: send_nfc_control_message_with_retry_and_mutex
 * Entry:    0007ca18
 * Prototype: undefined send_nfc_control_message_with_retry_and_mutex()
 */


void send_nfc_control_message_with_retry_and_mutex(undefined4 param_1,undefined4 param_2)

{
  send_control_message_with_retry_and_mutex(param_1,0x2005,param_2,1);
  return;
}


