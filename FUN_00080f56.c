/*
 * Function: FUN_00080f56
 * Entry:    00080f56
 * Prototype: undefined FUN_00080f56()
 */


void FUN_00080f56(undefined2 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  
  uVar3 = process_data_with_initialization_and_store(0x2021,3);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
    call_system_cleanup_alt
              (&DAT_00088138,0x1040,&stack0xfffffff0,2,0,(int)((ulonglong)uVar3 >> 0x20),extraout_r2
               ,extraout_r3);
    return;
  }
  puVar2 = (undefined2 *)ble_memory_allocation_utility(iVar1 + 0xc,3);
  *puVar2 = param_1;
  *(undefined1 *)(puVar2 + 1) = param_2;
  process_data_with_initialization_and_callback_validation(0x2021,iVar1);
  return;
}


