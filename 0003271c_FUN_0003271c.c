/*
 * Function: FUN_0003271c
 * Entry:    0003271c
 * Prototype: undefined FUN_0003271c()
 */


void FUN_0003271c(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0002ead8();
    if (iVar1 == 0) {
      uVar2 = uVar2 & 0xff;
      break;
    }
    FUN_0002eaa8();
    uVar2 = uVar2 + 1;
    get_schedule_timing(0x290,0);
  } while (uVar2 != 10);
  iVar1 = FUN_0007d12e();
  if (999 < (uint)(iVar1 - DAT_20007bf0)) {
    if (uVar2 == 10) {
      DAT_20019ef0 = DAT_20019ef0 + 1;
      if (3 < DAT_20019ef0) {
        DAT_20003031 = 0;
        DAT_20007bf0 = iVar1;
        DAT_20019ef0 = 3;
        return;
      }
    }
    else {
      DAT_20019ef0 = 0;
    }
    DAT_20003031 = 1;
    DAT_20007bf0 = iVar1;
  }
  return;
}


