/*
 * Function: allocate_ble_memory_and_set_byte_zero
 * Entry:    0008278a
 * Prototype: undefined allocate_ble_memory_and_set_byte_zero()
 */


void allocate_ble_memory_and_set_byte_zero
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ble_memory_allocation_utility(param_1 + 0xc,1,param_3,param_4,param_4);
  *puVar1 = 0;
  return;
}


