/*
 * Function: FUN_00076ad0
 * Entry:    00076ad0
 * Prototype: undefined FUN_00076ad0()
 */


undefined4 FUN_00076ad0(int param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      FUN_00076bcc();
    }
    if (param_2 == &DAT_0009871c) {
      param_2 = *(undefined **)(param_1 + 4);
    }
    else if (param_2 == &DAT_000986fc) {
      param_2 = *(undefined **)(param_1 + 8);
    }
    else if (param_2 == &DAT_000986dc) {
      param_2 = *(undefined **)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 0xc) != 0) {
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)*(short *)(param_2 + 0xc) << 0x16)) {
        FUN_000510fc(*(undefined4 *)(param_2 + 0x58));
      }
      uVar1 = FUN_00086a0e(param_1,param_2);
      if (*(int *)(param_2 + 100) << 0x1f < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x16) < 0) {
        return uVar1;
      }
      FUN_00051134(*(undefined4 *)(param_2 + 0x58));
      return uVar1;
    }
  }
  return 0;
}


