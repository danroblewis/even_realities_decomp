/*
 * Function: FUN_0004c4e4
 * Entry:    0004c4e4
 * Prototype: undefined FUN_0004c4e4()
 */


int FUN_0004c4e4(uint param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_28;
  uint *local_24;
  undefined4 uStack_20;
  
  uStack_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
  uVar3 = *param_2 - iVar1;
  *param_2 = uVar3;
  uVar4 = uVar3 & 0xffff0000;
  while( true ) {
    if (uVar3 <= uVar4) {
      return 0;
    }
    iVar2 = FUN_0007e53e(param_1,uVar3,&uStack_28,8);
    if (iVar2 != 0) break;
    iVar2 = FUN_0007e672(param_1,&uStack_28);
    if (iVar2 != 0) {
      uVar4 = (uVar4 & 0xffff0000) + (uStack_28 >> 0x10) + ((uint)local_24 & 0xffff);
      *param_2 = uVar3;
    }
    uVar3 = uVar3 - iVar1;
  }
  return iVar2;
}


