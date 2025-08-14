/*
 * Function: FUN_0007e672
 * Entry:    0007e672
 * Prototype: undefined FUN_0007e672()
 */


undefined4 FUN_0007e672(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
  uVar2 = FUN_0004ab94(0xff,param_2,7);
  if (*(byte *)(param_2 + 7) == uVar2) {
    if ((uint)*(ushort *)(param_2 + 2) < (uint)*(ushort *)(param_1 + 0xc) - iVar1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


