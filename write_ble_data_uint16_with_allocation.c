/*
 * Function: write_ble_data_uint16_with_allocation
 * Entry:    00083766
 * Prototype: undefined write_ble_data_uint16_with_allocation()
 */


void write_ble_data_uint16_with_allocation(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ble_memory_allocation_utility(param_1,2);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  return;
}


