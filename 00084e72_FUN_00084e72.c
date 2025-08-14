/*
 * Function: FUN_00084e72
 * Entry:    00084e72
 * Prototype: undefined FUN_00084e72()
 */


undefined4 FUN_00084e72(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_0004e048(param_1 & 0xff,&local_c,param_3,param_4,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_0006403c(local_c,param_2);
    FUN_0007ef7e(local_c);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


