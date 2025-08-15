/*
 * Function: FUN_00079608
 * Entry:    00079608
 * Prototype: undefined FUN_00079608()
 */


int FUN_00079608(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x2000cc30;
  }
  if (*param_1 != 0x5ac9bca5) {
    FUN_00079808(param_1,0x1c0);
    FUN_00079fd8(param_1 + 1);
    FUN_00079c24(param_1 + 0x47);
    iVar1 = FUN_00079c50(param_1 + 0x47,0x7a05d,param_1 + 1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0x5ac9bca5;
  }
  return 0;
}


