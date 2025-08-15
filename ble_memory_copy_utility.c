/*
 * Function: ble_memory_copy_utility
 * Entry:    00083740
 * Prototype: undefined ble_memory_copy_utility()
 */


void ble_memory_copy_utility
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ble_memory_allocation_utility(param_1,param_3);
  memcpy(uVar1,param_2,param_3,param_4);
  return;
}


