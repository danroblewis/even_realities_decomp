/*
 * Function: FUN_0006b378
 * Entry:    0006b378
 * Prototype: undefined FUN_0006b378()
 */


void FUN_0006b378(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = uVar4 + 1;
  bVar1 = *param_2;
  if ((int)uVar5 < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uint)bVar1 << (uVar4 & 0xff);
    iVar2 = uVar4 + 10;
    iVar3 = *(int *)(param_2 + 4);
  }
  else {
    FUN_00068908(param_1,(uint)bVar1,1);
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = uVar5 + 9;
  }
  if (iVar2 < 0x21) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar3 << (uVar5 & 0xff);
    *(int *)(param_1 + 0x20) = iVar2;
    return;
  }
  FUN_00068908(param_1,iVar3,9,param_4);
  return;
}


