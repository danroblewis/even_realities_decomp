/*
 * Function: handle_ble_connection_event
 * Entry:    0005e130
 * Prototype: undefined handle_ble_connection_event()
 */


undefined4
handle_ble_connection_event(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  undefined4 uStack_20;
  
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  uStack_20 = param_4;
  iVar1 = check_ble_connection_state();
  pbVar3 = *(byte **)(param_2 + 0xc);
  uStack_28 = (uint)*pbVar3;
  local_2c = "pairing failed (peer reason 0x%x)";
  local_30 = 3;
  process_and_compress_data_wrapper(&DAT_00088180,0x1840,&local_30);
  iVar2 = clear_bit_and_return_previous_state(param_1 + 4,10);
  if ((((iVar2 != 0) || (iVar2 = clear_bit_and_return_previous_state(param_1 + 4,0xb), iVar2 != 0))
      && (iVar1 != 0)) && (*(code **)(iVar1 + 0x10) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x10))(uVar4);
  }
  handle_ble_connection_state_change(param_1,*pbVar3);
  return 0;
}


