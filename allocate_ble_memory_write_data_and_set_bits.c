/*
 * Function: allocate_ble_memory_write_data_and_set_bits
 * Entry:    00082b6e
 * Prototype: undefined allocate_ble_memory_write_data_and_set_bits()
 */


undefined4
allocate_ble_memory_write_data_and_set_bits
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,2,param_3,param_4,param_4);
  *puVar1 = *(undefined2 *)(param_3 + 0xe);
  write_ble_data_uint16_with_allocation(param_1 + 0xc,*(undefined2 *)(param_3 + 0x10));
  set_bits_in_value(param_3 + 0x14,4);
  return 0;
}


