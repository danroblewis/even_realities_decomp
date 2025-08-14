/*
 * Function: FUN_00071358
 * Entry:    00071358
 * Prototype: undefined FUN_00071358(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_00071358(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined *local_2c;
  int local_28;
  undefined4 local_24;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == (int *)0x0)) {
    return -0x7d3;
  }
  fill_memory_buffer(param_1,0,0x94);
  FUN_00086534(param_1 + 0x58,1);
  *(int *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(int *)(param_2 + 0x24) = param_1;
  *(undefined4 *)(param_1 + 0x78) = 0x71295;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(undefined1 **)(param_1 + 0x7c) = &LAB_000859a2_1;
  *(undefined4 *)(param_1 + 0x80) = 0x85a9d;
  *(undefined4 *)(param_1 + 0x84) = 0x85b0d;
  *(undefined4 *)(param_1 + 0x88) = 0x710b5;
  *(undefined4 *)(param_1 + 0x8c) = 0x859c3;
  iVar4 = *(int *)(iVar6 + 0x18);
  if (iVar4 == 0) {
    if (param_6 == (undefined4 *)0x0) {
      return -0x7d3;
    }
    uVar1 = param_6[1];
    uVar3 = param_6[2];
    *(undefined4 *)(param_1 + 0x94) = *param_6;
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
  }
  uVar1 = (**(code **)(*(int *)(iVar6 + 0x20) + 0x10))(iVar6);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(byte *)(param_1 + 0x90) = (byte)uVar1 & 1;
  if (iVar4 == 0) {
    iVar6 = param_5;
    if (*(char *)(param_6 + 2) != '\0') {
      iVar6 = param_5 + 0xc;
    }
    *(int *)(param_1 + 0xb0) = iVar6;
    if (param_5 == 0) {
      return -0x7d3;
    }
    if ((*(int *)(param_5 + 8) == 0) || (*(int *)(iVar6 + 8) == 0)) {
      return -0x7d2;
    }
    local_38 = "rx_vq";
    local_34 = "tx_vq";
    local_30 = 0x7118d;
    local_2c = &DAT_000859b1;
    *(undefined4 *)(param_1 + 0xa4) = **(undefined4 **)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x18);
  }
  *(int *)(param_1 + 0xb4) = param_1 + 0xb4;
  *(int *)(param_1 + 0xb8) = param_1 + 0xb4;
  *(int **)(param_1 + 0xac) = param_4;
  iVar6 = FUN_00070e28(*(undefined4 *)(param_1 + 0xa0),0,2,&local_38,&local_30);
  if (iVar6 != 0) {
    return iVar6;
  }
  FUN_000857b2(*(undefined4 *)(param_1 + 0xa8));
  *(int **)(**(int **)(param_2 + 0x2c) + 0x28) = param_4;
  *(int **)(*(int *)(*(int *)(param_2 + 0x2c) + 0x18) + 0x28) = param_4;
  if (iVar4 == 0) {
    local_24 = *(undefined4 *)(param_1 + 0x98);
    for (uVar5 = 0; uVar5 < *(ushort *)(*(int *)(param_1 + 0xa4) + 10); uVar5 = uVar5 + 1) {
      iVar6 = FUN_00085aee(param_5,*(undefined4 *)(param_1 + 0x98));
      if (iVar6 == 0) {
        return -0x7d2;
      }
      uVar2 = iVar6 - *param_4;
      if ((uint)param_4[2] <= uVar2) {
        uVar2 = 0xffffffff;
      }
      local_28 = iVar6;
      FUN_0008557c(param_4,uVar2,0,*(undefined4 *)(param_1 + 0x98));
      iVar6 = FUN_0008567c(*(undefined4 *)(param_1 + 0xa4),&local_28,0,1,iVar6);
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    *(int *)param_1 = param_1;
    *(int *)(param_1 + 4) = param_1;
    if (*(char *)(param_1 + 0x90) == '\0') goto LAB_00071498;
  }
  else {
    *(int *)param_1 = param_1;
    *(int *)(param_1 + 4) = param_1;
    if (*(char *)(param_1 + 0x90) == '\0') {
      return 0;
    }
  }
  FUN_00070f74(param_1,param_1 + 8,&DAT_000f7c34,0x35,0x35,0x85a05,0);
  if (iVar4 != 0) {
    return 0;
  }
LAB_00071498:
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa0) + 0x20) + 0xc))(*(int *)(param_1 + 0xa0),4);
  return 0;
}


