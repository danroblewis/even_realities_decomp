/*
 * Function: finalize_float_format
 * Entry:    00087996
 * Prototype: undefined finalize_float_format()
 */


int finalize_float_format(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


