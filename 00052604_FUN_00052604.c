/*
 * Function: FUN_00052604
 * Entry:    00052604
 * Prototype: undefined FUN_00052604()
 */


undefined4 FUN_00052604(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_2c [5];
  undefined4 local_18;
  char *local_14;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_0004e048(9,local_2c);
  if (iVar1 < 0) {
    uVar2 = 2;
    local_18 = 2;
    local_14 = "Failed to open flash area";
    FUN_0004d944(&DAT_00088220,0x1040,&local_18,0);
  }
  else {
    iVar1 = FUN_0007f00e(local_2c[0]);
    if (iVar1 == 0) {
      local_14 = "Failed to get flash area device";
      local_18 = 2;
      FUN_0004d944(&DAT_00088220,0x1040,&local_18);
      FUN_0007ef7e(local_2c[0]);
      uVar2 = 3;
    }
    else {
      uVar2 = FUN_0007efd4(local_2c[0],0,*(undefined4 *)(local_2c[0] + 8),iVar1);
      if ((int)uVar2 < 0) {
        local_14 = "Failed to erase flash area";
        local_18 = 2;
        FUN_0004d944(&DAT_00088220,0x1040,&local_18,0);
        FUN_0007ef7e(local_2c[0]);
        uVar2 = 4;
      }
      else {
        FUN_0007ef7e(local_2c[0]);
        if (uVar2 == 0) {
          return 0;
        }
      }
    }
  }
  iVar1 = FUN_0005160c(iVar3 + 4,0x3f,uVar2 & 0xffff);
  if (iVar1 != 0) {
    return 0;
  }
  return 7;
}


