/*
 * Function: FUN_0007af28
 * Entry:    0007af28
 * Prototype: undefined FUN_0007af28()
 */


int FUN_0007af28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0007abc0(&DAT_2000d5fc);
  iVar1 = FUN_0007abf4(&DAT_2000d5fc,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_0007ac1c(&DAT_2000d5fc,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_0007ac70(&DAT_2000d5fc,param_3);
    FUN_0007abe8(&DAT_2000d5fc);
    return iVar1;
  }
  FUN_0007abe8(&DAT_2000d5fc);
  return iVar1;
}


