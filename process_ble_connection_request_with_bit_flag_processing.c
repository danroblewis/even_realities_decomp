/*
 * Function: process_ble_connection_request_with_bit_flag_processing
 * Entry:    00084300
 * Prototype: undefined process_ble_connection_request_with_bit_flag_processing()
 */


void process_ble_connection_request_with_bit_flag_processing
               (int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 local_12 [6];
  
  iVar1 = validate_ble_connection_request_packet(param_3,param_4,local_12);
  if ((iVar1 != -0x16) &&
     (iVar1 = pack_parameters_and_call_callback
                        (*(undefined4 *)(param_1 + 0x1c),4,(param_2 + 4) * 2 & 0xfe,local_12[0]),
     -1 < iVar1)) {
    uVar2 = 1 << (param_2 & 0xff) & 0xff;
    handle_ble_operations_with_mutex_protection(*(undefined4 *)(param_1 + 0x1c),4,0xf,uVar2,uVar2);
  }
  return;
}


