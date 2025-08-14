/*
 * Function: FUN_00084e58
 * Entry:    00084e58
 * Prototype: undefined FUN_00084e58()
 */


void FUN_00084e58(int param_1)

{
  uint uVar1;
  undefined1 local_c;
  undefined3 uStack_b;
  undefined4 uStack_8;
  
  uVar1 = *(int *)(param_1 + 8) - 0x18U & 0xfffffff8;
  uStack_8 = 1;
  _local_c = CONCAT31((int3)(uVar1 >> 8),1);
  FUN_00084dea(param_1,uVar1,&local_c,1,param_1);
  return;
}


