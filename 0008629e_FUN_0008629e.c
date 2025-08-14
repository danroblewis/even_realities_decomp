/*
 * Function: FUN_0008629e
 * Entry:    0008629e
 * Prototype: undefined FUN_0008629e()
 */


undefined4 FUN_0008629e(undefined4 param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uStack_18;
  byte *pbStack_14;
  
  uStack_18 = param_1;
  pbStack_14 = param_2;
  if (param_3 < 9) {
    pbVar3 = param_2 + param_3;
    pbVar2 = (byte *)&uStack_18;
    if ((char)pbVar3[-1] < '\0') {
      for (; param_2 != pbVar3; param_2 = param_2 + 1) {
        *pbVar2 = ~*param_2;
        pbVar2 = pbVar2 + 1;
      }
      uVar1 = 1;
      param_2 = (byte *)&uStack_18;
    }
    else {
      uVar1 = 0;
    }
    if (param_3 != 0) {
      uVar1 = FUN_00086208(param_1,uVar1,param_2);
      return uVar1;
    }
    uVar1 = 0xe;
  }
  else {
    uVar1 = 5;
  }
  FUN_000861c2(param_1,uVar1);
  return 0;
}


