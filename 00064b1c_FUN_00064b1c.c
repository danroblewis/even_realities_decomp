/*
 * Function: FUN_00064b1c
 * Entry:    00064b1c
 * Prototype: undefined FUN_00064b1c()
 */


void FUN_00064b1c(int *param_1)

{
  int iVar1;
  
  while (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if ((-1 < param_1[3] << 0x17) &&
       (((param_1[2] == 0 || (FUN_00064b1c(), -1 < param_1[3] << 0x17)) && (param_1[4] != 0)))) {
      (*DAT_20002bb0)();
    }
    if ((-1 < param_1[3] << 0x16) && (param_1[8] != 0)) {
      (*DAT_20002bb0)();
    }
    (*DAT_20002bb0)(param_1);
    param_1 = (int *)iVar1;
  }
  return;
}


