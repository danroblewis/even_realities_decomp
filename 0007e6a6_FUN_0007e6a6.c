/*
 * Function: FUN_0007e6a6
 * Entry:    0007e6a6
 * Prototype: undefined FUN_0007e6a6()
 */


uint FUN_0007e6a6(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0007e672();
  if (uVar1 != 0) {
    if (param_2[2] == 0) {
      uVar1 = 0;
      if (*param_2 == -1) {
        uVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8,0xffff,0xffff,param_4);
        uVar2 = (uint)*(ushort *)(param_1 + 0xc) - (uint)(ushort)param_2[1];
        uVar1 = (uint)(uVar2 == (uVar2 / uVar1) * uVar1);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


