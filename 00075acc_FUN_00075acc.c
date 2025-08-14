/*
 * Function: FUN_00075acc
 * Entry:    00075acc
 * Prototype: undefined FUN_00075acc()
 */


undefined4 FUN_00075acc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  uVar3 = FUN_000133f8();
  if (DAT_200035af == -1) {
    return uVar3;
  }
  iVar1 = FUN_0000de2c(param_3,param_4,param_3,param_4,in_r3);
  if (iVar1 != 0) {
    return uVar3;
  }
  iVar1 = FUN_0000de2c();
  if (iVar1 == 0) {
    iVar1 = FUN_0000ddc8();
    if (iVar1 == 0) {
      iVar1 = FUN_000869dc(uVar3);
      if (((iVar1 == 0) && (iVar1 = FUN_000869dc(param_1), iVar1 != 0)) &&
         (iVar1 = FUN_000869dc(param_3), iVar1 != 0)) {
        iVar1 = FUN_0000de2c(uVar3,extraout_s1,uVar3,extraout_s1);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)thunk_FUN_00071678();
          *puVar2 = 0x21;
          uVar3 = float_multiply_64bit(0,0);
          return uVar3;
        }
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        *puVar2 = 0x22;
        iVar1 = FUN_0000dddc();
        if (iVar1 != 0) {
          uVar3 = FUN_000767c8(param_3);
          iVar1 = FUN_0000ddc8(uVar3,extraout_s1_00,param_3,param_4);
          if (iVar1 == 0) {
            return 0;
          }
        }
        return 0;
      }
      iVar1 = FUN_0000ddc8(uVar3,extraout_s1,0,0);
      if (iVar1 == 0) {
        return uVar3;
      }
      iVar1 = FUN_000869dc(param_1);
      if (iVar1 != 0) {
        iVar1 = FUN_000869dc(param_3);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)thunk_FUN_00071678();
          *puVar2 = 0x22;
          return 0;
        }
        return uVar3;
      }
      return uVar3;
    }
    iVar1 = FUN_0000ddc8(param_3,param_4,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_000869dc(param_3);
      if (iVar1 == 0) {
        return uVar3;
      }
      iVar1 = FUN_0000dddc(param_3,param_4,0,0);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        *puVar2 = 0x21;
        return 0;
      }
      return uVar3;
    }
  }
  else {
    iVar1 = FUN_0000ddc8(param_3,param_4,0,0);
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  return 0;
}


