/*
 * Function: FUN_00085ebc
 * Entry:    00085ebc
 * Prototype: undefined FUN_00085ebc()
 */


int FUN_00085ebc(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00085da2(param_1,param_3,param_3,param_4,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_00085e1a(param_1,param_2 + 1), iVar1 != 0)) {
    iVar2 = *param_1;
    *param_2 = iVar2;
    if ((uint)param_2[1] <= (uint)(param_1[3] - iVar2)) {
      return iVar1;
    }
    FUN_00085dc4(param_1,8);
  }
  return 0;
}


