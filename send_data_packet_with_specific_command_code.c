/*
 * Function: send_data_packet_with_specific_command_code
 * Entry:    0007c9fe
 * Prototype: undefined send_data_packet_with_specific_command_code()
 */


void send_data_packet_with_specific_command_code(undefined4 param_1,undefined3 param_2)

{
  send_data_packet_with_retry_and_mutex
            (param_1,0x2002,&stack0xfffffff7,1,param_1,CONCAT13((char)param_2,param_2));
  return;
}


