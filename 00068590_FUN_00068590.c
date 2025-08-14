/*
 * Function: FUN_00068590
 * Entry:    00068590
 * Prototype: undefined FUN_00068590()
 */


uint FUN_00068590(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar3 = *(uint *)(param_1 + 0x34);
  if (*param_1 == '\0') {
    iVar6 = 3;
    uVar3 = uVar3 + 4;
    uVar2 = uVar1 - 3;
  }
  else {
    iVar6 = 0;
    uVar2 = uVar1;
  }
  if (uVar2 < uVar3) {
    iVar6 = iVar6 + uVar3;
  }
  else {
    uVar1 = uVar3 - uVar2;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar2 < uVar3) {
    uVar1 = iVar6 - uVar1;
  }
  if (uVar4 == 0) {
    iVar6 = 0x1a;
  }
  else {
    iVar6 = 0;
    do {
      uVar4 = uVar4 >> 1;
      iVar6 = iVar6 + 1;
    } while (uVar4 != 0);
    iVar6 = 0x1a - iVar6;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (-1 < *(int *)(param_1 + 0xc)) {
    iVar5 = iVar5 + 1;
  }
  uVar1 = uVar1 * 8 - (iVar6 + iVar5 * 8 + *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24));
  return uVar1 & ~((int)uVar1 >> 0x1f);
}


