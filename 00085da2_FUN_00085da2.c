/*
 * Function: FUN_00085da2
 * Entry:    00085da2
 * Prototype: undefined FUN_00085da2()
 */


int FUN_00085da2(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  iVar1 = FUN_00085d82();
  if (iVar1 != 0) {
    if (param_2 == *(byte *)*param_1 >> 5) {
      return iVar1;
    }
    FUN_00085d70(param_1,10,extraout_r2,*(byte *)*param_1,param_4);
  }
  return 0;
}


