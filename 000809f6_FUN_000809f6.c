/*
 * Function: FUN_000809f6
 * Entry:    000809f6
 * Prototype: undefined FUN_000809f6()
 */


bool FUN_000809f6(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r2;
  bool bVar3;
  uint uVar4;
  undefined4 uStack_14;
  
  uVar1 = param_1;
  uVar4 = param_1;
  uStack_14 = param_2;
  if (3 < param_1) {
    uVar1 = FUN_00051c68();
  }
  uVar2 = FUN_00080a46((int)uVar1 >> 1);
  uStack_14 = uStack_14 & 0xffffff;
  uVar1 = FUN_000809b0((int)uVar1 >> 1,(int)&uStack_14 + 3,extraout_r2,0,uVar4);
  if (((uVar1 == param_1) && (uStack_14._3_1_ - 1 < 2)) ||
     ((uVar1 != uVar2 && (uStack_14._3_1_ == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = uVar2 == param_1;
  }
  return bVar3;
}


