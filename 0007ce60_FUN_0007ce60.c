/*
 * Function: FUN_0007ce60
 * Entry:    0007ce60
 * Prototype: undefined FUN_0007ce60()
 */


void FUN_0007ce60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xe9) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xea) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcc) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcd) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xce) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcf) = 0;
  if (param_1 == 0) {
    iVar1 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar1 + 0x100c) + 7) = 0xd;
  }
  else {
    iVar1 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar1 + 0x100c) + 7) = 0;
    iVar1 = get_work_mode();
    **(undefined1 **)(iVar1 + 0x100c) = 0;
  }
  iVar1 = get_work_mode();
  fill_memory_buffer(*(int *)(iVar1 + 0x100c) + 8,0,399,param_4);
  return;
}


