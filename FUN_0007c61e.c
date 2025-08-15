/*
 * Function: FUN_0007c61e
 * Entry:    0007c61e
 * Prototype: undefined FUN_0007c61e()
 */


undefined4 FUN_0007c61e(byte *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x15 < *param_2 - 1)) ||
     (((*(int *)(param_2 + 4) == 0 || (*(int *)(param_2 + 8) == 0)) ||
      (*(int *)(param_2 + 0xc) == 0)))) {
    uVar2 = 7;
  }
  else {
    *(byte **)(param_1 + 0x14) = param_2;
    uVar1 = FUN_0007c408();
    uVar2 = 0;
    *param_1 = *param_1 & 0xef | (uVar1 < 0x100) << 4;
  }
  return uVar2;
}


