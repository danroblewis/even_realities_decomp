/*
 * Function: FUN_00080bfe
 * Entry:    00080bfe
 * Prototype: undefined FUN_00080bfe()
 */


int FUN_00080bfe(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}


