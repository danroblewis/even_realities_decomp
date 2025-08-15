/*
 * Function: allocate_ble_memory_and_copy_16bit_value
 * Entry:    0008275e
 * Prototype: undefined allocate_ble_memory_and_copy_16bit_value()
 */


undefined4 allocate_ble_memory_and_copy_16bit_value(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,2);
  *puVar1 = *(undefined2 *)(param_3 + 10);
  return 0;
}


