/*
 * Function: FUN_0006efdc
 * Entry:    0006efdc
 * Prototype: undefined FUN_0006efdc()
 */


void FUN_0006efdc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar4 = uVar5 + 5;
  iVar2 = *param_2;
  if ((int)uVar4 < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar4;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar2 << (uVar5 & 0xff);
    uVar5 = uVar5 + 10;
    iVar2 = param_2[1];
    if ((int)uVar5 < 0x21) goto LAB_0006effe;
LAB_0006f0f2:
    FUN_00068908(param_1,iVar2,5);
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar4 = uVar5 + 1;
    iVar2 = param_2[2] >> 1;
    if (0x20 < (int)uVar4) goto LAB_0006f108;
LAB_0006f014:
    *(uint *)(param_1 + 0x20) = uVar4;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar2 << (uVar5 & 0xff);
  }
  else {
    FUN_00068908(param_1,iVar2,5);
    uVar4 = *(uint *)(param_1 + 0x20);
    iVar2 = param_2[1];
    uVar5 = uVar4 + 5;
    if (0x20 < (int)uVar5) goto LAB_0006f0f2;
LAB_0006effe:
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar2 << (uVar4 & 0xff);
    uVar4 = uVar5 + 1;
    iVar2 = param_2[2] >> 1;
    if ((int)uVar4 < 0x21) goto LAB_0006f014;
LAB_0006f108:
    FUN_00068908(param_1,iVar2,1);
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  iVar7 = param_2[4];
  uVar6 = param_2[3];
  uVar5 = param_2[2] & 1;
  iVar3 = (int)uVar6 >> uVar5;
  if (iVar2 == 0) {
    if (uVar5 == 0) {
      uVar6 = (uint)*(byte *)((int)param_2 + 0x19) + (param_2[5] + 1) * 2;
    }
    else {
      uVar6 = uVar6 & 1;
    }
    uVar5 = uVar4 + 1;
    iVar7 = uVar6 * 0x2477f4 + iVar7;
    if ((int)uVar5 < 0x21) {
      *(uint *)(param_1 + 0x20) = uVar5;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar3 << (uVar4 & 0xff);
    }
    else {
      FUN_00068908(param_1,iVar3,1);
      uVar5 = *(uint *)(param_1 + 0x20);
    }
    uVar6 = uVar5 + 1;
    bVar1 = *(byte *)(param_2 + 6);
    if ((int)uVar6 < 0x21) {
      *(uint *)(param_1 + 0x20) = uVar6;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uint)bVar1 << (uVar5 & 0xff);
    }
    else {
      FUN_00068908(param_1,(uint)bVar1,1);
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    iVar2 = uVar6 + 0x19;
    if (0x20 < iVar2) {
      FUN_00068908(param_1,iVar7,0x19,param_4);
      return;
    }
    goto LAB_0006f0ac;
  }
  if (uVar5 == 0) {
    if ((int)(uVar4 + 2) < 0x21) goto LAB_0006f086;
LAB_0006f116:
    FUN_00068908(param_1,iVar3,2);
    uVar5 = *(uint *)(param_1 + 0x20);
    bVar1 = *(byte *)(param_2 + 6);
    uVar6 = uVar5 + 1;
  }
  else {
    iVar7 = (uVar6 & 1) + (iVar7 + 0x73a600) * 2;
    if (0x20 < (int)(uVar4 + 2)) goto LAB_0006f116;
LAB_0006f086:
    uVar5 = uVar4 + 2;
    *(uint *)(param_1 + 0x20) = uVar5;
    uVar6 = uVar4 + 3;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar3 << (uVar4 & 0xff);
    bVar1 = *(byte *)(param_2 + 6);
  }
  if ((int)uVar6 < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar6;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uint)bVar1 << (uVar5 & 0xff);
  }
  else {
    FUN_00068908(param_1,(uint)bVar1,1);
    uVar6 = *(uint *)(param_1 + 0x20);
  }
  iVar2 = uVar6 + 0x18;
  if (0x20 < iVar2) {
    FUN_00068908(param_1,iVar7,0x18,param_4);
    return;
  }
LAB_0006f0ac:
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar7 << (uVar6 & 0xff);
  *(int *)(param_1 + 0x20) = iVar2;
  return;
}


