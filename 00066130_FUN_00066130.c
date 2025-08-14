/*
 * Function: FUN_00066130
 * Entry:    00066130
 * Prototype: undefined FUN_00066130()
 */


void FUN_00066130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  iVar1 = FUN_00065ff4(&local_c);
  iVar1 = iVar1 + local_c * 4;
  *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | 2;
  return;
}


