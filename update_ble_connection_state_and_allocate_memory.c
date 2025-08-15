/*
 * Function: update_ble_connection_state_and_allocate_memory
 * Entry:    000830ee
 * Prototype: undefined update_ble_connection_state_and_allocate_memory()
 */


undefined4
update_ble_connection_state_and_allocate_memory
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = handle_ble_connection_memory_allocation(param_1,2,param_3,param_4,param_4);
  if (iVar1 == 0) {
    uVar3 = 8;
  }
  else {
    puVar2 = (undefined4 *)ble_memory_allocation_utility(iVar1 + 0xc,6);
    *puVar2 = *(undefined4 *)(param_1 + 0x11);
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_1 + 0x15);
    update_ble_connection_state_with_error_handling(param_1,iVar1,0);
    uVar3 = 0;
  }
  return uVar3;
}


