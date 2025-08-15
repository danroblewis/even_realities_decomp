/*
 * Function: FUN_0008152a
 * Entry:    0008152a
 * Prototype: undefined FUN_0008152a()
 */


undefined4
FUN_0008152a(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = process_data_with_initialization_and_store(0x2013,0xe);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)ble_memory_allocation_utility(iVar1 + 0xc,0xe);
    fill_memory_buffer(puVar2,0,0xe);
    *puVar2 = *param_1;
    puVar2[1] = *param_2;
    puVar2[2] = param_2[1];
    puVar2[3] = param_2[2];
    puVar2[4] = param_2[3];
    uVar3 = process_data_with_initialization_and_validation(0x2013,iVar1,0,param_4);
    return uVar3;
  }
  return 0xffffff97;
}


