/*
 * Function: FUN_0007c882
 * Entry:    0007c882
 * Prototype: undefined FUN_0007c882()
 */


void FUN_0007c882(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  format_and_send_data_packet(param_1,*(ushort *)(param_1 + 8) | 4,param_2,param_3,param_4,param_2);
  return;
}


