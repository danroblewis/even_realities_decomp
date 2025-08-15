/*
 * Function: send_control_message_with_flags
 * Entry:    0007c898
 * Prototype: undefined send_control_message_with_flags()
 */


void send_control_message_with_flags
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  send_control_message_with_byte_swap
            (*param_1,*(ushort *)(param_1 + 2) | 4,param_2,param_3,param_4,param_2);
  return;
}


