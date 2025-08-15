/*
 * Function: write_ble_data_with_allocation
 * Entry:    00083758
 * Prototype: undefined write_ble_data_with_allocation()
 */


void write_ble_data_with_allocation(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ble_memory_allocation_utility(param_1,1);
  *puVar1 = param_2;
  return;
}


