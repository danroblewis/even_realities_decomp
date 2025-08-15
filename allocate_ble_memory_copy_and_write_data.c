/*
 * Function: allocate_ble_memory_copy_and_write_data
 * Entry:    000827ae
 * Prototype: undefined allocate_ble_memory_copy_and_write_data()
 */


undefined4
allocate_ble_memory_copy_and_write_data
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,4,param_3,param_4,param_4);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 0xe);
  if (*(char *)(param_3 + 0x10) == '\0') {
    uVar2 = 0x2800;
  }
  else {
    uVar2 = 0x2801;
  }
  write_ble_data_uint16_with_allocation(param_1 + 0xc,uVar2);
  return 0;
}


