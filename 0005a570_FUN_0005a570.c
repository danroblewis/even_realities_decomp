/*
 * Function: FUN_0005a570
 * Entry:    0005a570
 * Prototype: undefined FUN_0005a570()
 */


void FUN_0005a570(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_000826e0(&DAT_20006448,1,param_3,param_4,param_4);
  uVar1 = (ushort)param_1;
  if ((uVar2 & 1) != 0) {
    if (param_1 < DAT_20006410) {
      DAT_20006410 = uVar1;
      if (param_2 <= DAT_20006412) goto LAB_0005a58a;
    }
    else {
      uVar1 = DAT_20006410;
      if (param_2 <= DAT_20006412) {
        return;
      }
    }
  }
  DAT_20006410 = uVar1;
  DAT_20006412 = (ushort)param_2;
LAB_0005a58a:
  uVar3 = FUN_0008270c(&DAT_20006448);
  if ((int)uVar3 << 0x1e < 0) {
    return;
  }
  FUN_0007350c(&DAT_20006418,(int)((ulonglong)uVar3 >> 0x20),0x148,0);
  return;
}


