/*
 * Function: FUN_000807f6
 * Entry:    000807f6
 * Prototype: undefined FUN_000807f6()
 */


void FUN_000807f6(byte *param_1,byte *param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = ((uint)*param_1 << 0x1b) >> 0x1e;
  if ((*param_1 & 7) == 0) {
    bVar4 = 1;
  }
  else {
    bVar4 = 3;
  }
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = bVar4 | (byte)(uVar3 << 3) | *param_2 & 0xe0;
  *(ushort *)(param_2 + 2) = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  *(ushort *)(param_2 + 4) = uVar1 << 8 | uVar1 >> 8;
  *(undefined2 *)(param_2 + 6) = uVar2;
  return;
}


