/*
 * Function: FUN_00082b6e
 * Entry:    00082b6e
 * Prototype: undefined FUN_00082b6e()
 */


undefined4 FUN_00082b6e(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,2,param_3,param_4,param_4);
  *puVar1 = *(undefined2 *)(param_3 + 0xe);
  write_ble_data_uint16_with_allocation(param_1 + 0xc,*(undefined2 *)(param_3 + 0x10));
  FUN_000826e0(param_3 + 0x14,4);
  return 0;
}


