/*
 * Function: FUN_00081bc0
 * Entry:    00081bc0
 * Prototype: undefined FUN_00081bc0()
 */


int FUN_00081bc0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 0x10);
  }
  return iVar1;
}


