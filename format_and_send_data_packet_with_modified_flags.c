/*
 * Function: format_and_send_data_packet_with_modified_flags
 * Entry:    0007c882
 * Prototype: undefined format_and_send_data_packet_with_modified_flags()
 */


void format_and_send_data_packet_with_modified_flags
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  format_and_send_data_packet(param_1,*(ushort *)(param_1 + 8) | 4,param_2,param_3,param_4,param_2);
  return;
}


