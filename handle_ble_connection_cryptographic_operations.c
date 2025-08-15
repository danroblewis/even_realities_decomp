/*
 * Function: handle_ble_connection_cryptographic_operations
 * Entry:    000832f0
 * Prototype: undefined handle_ble_connection_cryptographic_operations()
 */


undefined4 handle_ble_connection_cryptographic_operations(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 4;
  iVar1 = extract_bit_from_value(iVar4,10);
  if (iVar1 == 0) {
    uVar2 = set_bit_in_value(param_1,4);
    iVar3 = *(int *)(param_1 + 0xf0);
    iVar1 = handle_ble_connection_memory_allocation(uVar2,3);
    if (iVar1 != 0) {
      uVar2 = ble_memory_allocation_utility(iVar1 + 0xc,0x10);
      iVar3 = perform_cryptographic_xor_and_sha256_operations
                        (param_1 + 0x47,param_1 + 0x27,param_1 + 9,param_1 + 0x10,iVar3 + 0x97,
                         iVar3 + 0x9e,uVar2);
      if (iVar3 == 0) {
        update_ble_connection_state_with_error_handling(param_1,iVar1,0);
        clear_bit_in_value(iVar4,0);
        goto LAB_00083362;
      }
      decrement_reference_count_and_cleanup_memory(iVar1);
    }
    uVar2 = 8;
  }
  else {
    set_bit_in_value(iVar4,0);
LAB_00083362:
    uVar2 = 0;
  }
  return uVar2;
}


