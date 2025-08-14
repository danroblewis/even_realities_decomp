/*
 * Function: FUN_0005160c
 * Entry:    0005160c
 * Prototype: undefined FUN_0005160c()
 */


uint FUN_0005160c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *local_18;
  undefined4 local_14;
  
  if (param_3 == 0) {
    return 1;
  }
  *(short *)(param_1 + 0x30) = (short)param_2;
  local_18 = "err";
  *(short *)(param_1 + 0x32) = (short)param_3;
  local_14 = 3;
  iVar1 = FUN_0008633e(param_1,&local_18);
  if ((iVar1 != 0) && (iVar1 = FUN_0008634c(param_1,2), iVar1 != 0)) {
    local_18 = "group";
    local_14 = 5;
    iVar1 = FUN_0008633e(param_1,&local_18);
    if ((iVar1 != 0) && (iVar1 = FUN_00086320(param_1,param_2), iVar1 != 0)) {
      local_18 = "rc";
      local_14 = 2;
      iVar1 = FUN_0008633e(param_1,&local_18);
      if ((iVar1 != 0) && (iVar1 = FUN_00086320(param_1,param_3), iVar1 != 0)) {
        uVar2 = thunk_FUN_00086354(param_1,2);
        goto LAB_0005162e;
      }
    }
  }
  uVar2 = 0;
LAB_0005162e:
  return uVar2 & 1;
}


