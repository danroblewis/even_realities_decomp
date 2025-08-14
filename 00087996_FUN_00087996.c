/*
 * Function: FUN_00087996
 * Entry:    00087996
 * Prototype: undefined FUN_00087996()
 */


int FUN_00087996(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


