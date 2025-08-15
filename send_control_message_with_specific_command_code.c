/*
 * Function: send_control_message_with_specific_command_code
 * Entry:    0007c9f2
 * Prototype: undefined send_control_message_with_specific_command_code()
 */


void send_control_message_with_specific_command_code(undefined4 param_1,undefined4 param_2)

{
  send_control_message_with_retry_and_mutex(param_1,0x2002,param_2,1);
  return;
}


