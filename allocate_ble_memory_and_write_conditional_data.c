/*
 * Function: allocate_ble_memory_and_write_conditional_data
 * Entry:    000827de
 * Prototype: undefined allocate_ble_memory_and_write_conditional_data()
 */


undefined4
allocate_ble_memory_and_write_conditional_data
          (int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,4,param_3,param_4,param_4);
  *puVar1 = (short)param_3[2];
  puVar1[1] = *(undefined2 *)((int)param_3 + 0xe);
  if ((char)param_3[4] == '\x02') {
    uVar2 = 0x2802;
  }
  else if ((char)param_3[4] == '\x03') {
    uVar2 = 0x2803;
  }
  else {
    uVar2 = *(undefined2 *)(*param_3 + 2);
  }
  write_ble_data_uint16_with_allocation(param_1 + 0xc,uVar2);
  return 0;
}


