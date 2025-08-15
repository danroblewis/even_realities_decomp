/*
 * Function: allocate_ble_memory_and_set_byte_one
 * Entry:    0008279c
 * Prototype: undefined allocate_ble_memory_and_set_byte_one()
 */


undefined4
allocate_ble_memory_and_set_byte_one
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ble_memory_allocation_utility(param_1 + 0xc,1,param_3,param_4,param_4);
  *puVar1 = 1;
  return 0;
}


