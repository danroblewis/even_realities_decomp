/*
 * Function: FUN_00080ed8
 * Entry:    00080ed8
 * Prototype: undefined FUN_00080ed8()
 */


undefined4 FUN_00080ed8(undefined2 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = process_data_with_initialization_and_store(0x406,3);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)ble_memory_allocation_utility(iVar1 + 0xc,3);
    *puVar2 = param_1;
    *(undefined1 *)(puVar2 + 1) = param_2;
    uVar3 = process_data_with_initialization_and_validation(0x406,iVar1,0);
    return uVar3;
  }
  return 0xffffff97;
}


