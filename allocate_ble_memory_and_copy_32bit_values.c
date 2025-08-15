/*
 * Function: allocate_ble_memory_and_copy_32bit_values
 * Entry:    00082772
 * Prototype: undefined allocate_ble_memory_and_copy_32bit_values()
 */


undefined4 allocate_ble_memory_and_copy_32bit_values(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,4);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 0xe);
  return 0;
}


