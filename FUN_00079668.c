/*
 * Function: FUN_00079668
 * Entry:    00079668
 * Prototype: undefined FUN_00079668()
 */


int FUN_00079668(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x2000cc30;
  }
  if (*param_1 == 0x5ac9bca5) {
    iVar1 = FUN_00079cf0(param_1 + 0x47,param_2,param_3,0,0);
    if (iVar1 != 0) {
      param_3 = 0;
    }
    *param_4 = param_3;
  }
  else {
    iVar1 = -0x7018;
  }
  return iVar1;
}


