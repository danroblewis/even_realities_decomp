/*
 * Function: FUN_000861d4
 * Entry:    000861d4
 * Prototype: undefined FUN_000861d4()
 */


int FUN_000861d4(undefined4 *param_1)

{
  undefined4 uVar1;
  uint extraout_r2;
  byte *pbVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_000861ae(param_1[5]);
  if ((int)uVar3 != 0) {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 < (byte *)param_1[3]) {
      if (extraout_r2 < 0x20) {
        *param_1 = pbVar2 + 1;
        *pbVar2 = (byte)extraout_r2 | (byte)((int)((ulonglong)uVar3 >> 0x20) << 5);
        return (int)uVar3;
      }
      uVar1 = 0xe;
    }
    else {
      uVar1 = 8;
    }
    FUN_000861c2(param_1,uVar1);
  }
  return 0;
}


