/*
 * Function: process_ble_authentication_operation
 * Entry:    0005cdc4
 * Prototype: undefined process_ble_authentication_operation()
 */


undefined4 process_ble_authentication_operation(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28;
  char *local_24;
  uint local_20;
  
  uVar3 = (uint)*(byte *)(param_1 + 8);
  if (uVar3 < 3) {
    if (uVar3 != 0) {
      uVar3 = *(uint *)(param_1 + 0xd8) >> (uint)*(byte *)(param_1 + 0xdc) & 1 | 0x80;
    }
  }
  else {
    if (uVar3 != 3) {
      local_24 = "Unknown pairing method (%u)";
      local_28 = 3;
      local_20 = uVar3;
      process_and_compress_data_wrapper(&DAT_00088180,0x1840,&local_28);
      return 8;
    }
    uVar3 = 0;
  }
  iVar1 = handle_ble_connection_memory_allocation(param_1,3);
  if (iVar1 != 0) {
    local_20 = ble_memory_allocation_utility(iVar1 + 0xc,0x10);
    iVar2 = ble_authentication_hash(DAT_2000af48,param_1 + 0x57,param_1 + 0x27,uVar3);
    if (iVar2 == 0) {
      update_ble_connection_state_with_error_handling(param_1,iVar1,0);
      clear_bit_in_value(param_1 + 4,0);
      return 0;
    }
    decrement_reference_count_and_cleanup_memory(iVar1);
  }
  return 8;
}


