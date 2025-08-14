/*
 * Function: FUN_00085be8
 * Entry:    00085be8
 * Prototype: undefined FUN_00085be8()
 */


void FUN_00085be8(int *param_1,int param_2,int param_3)

{
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_3;
    *param_1 = param_2;
  }
  return;
}


