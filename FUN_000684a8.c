/*
 * Function: FUN_000684a8
 * Entry:    000684a8
 * Prototype: undefined FUN_000684a8()
 */


void FUN_000684a8(undefined1 *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (uint)(param_2 == 0) * 0x20;
  fill_memory_buffer(param_1,0,0x38);
  pbVar2 = param_3 + param_4;
  *(undefined4 *)(param_1 + 8) = 0xffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *param_1 = (char)param_2;
  *(int *)(param_1 + 0x20) = iVar5;
  *(byte **)(param_1 + 0x28) = param_3;
  *(byte **)(param_1 + 0x30) = param_3;
  *(byte **)(param_1 + 0x2c) = pbVar2;
  *(byte **)(param_1 + 0x34) = pbVar2;
  if (param_2 == 0) {
    uVar4 = 0;
    if (param_3 < pbVar2) {
      *(byte **)(param_1 + 0x30) = param_3 + 1;
      uVar4 = (uint)*param_3 << 0x10;
      *(uint *)(param_1 + 4) = uVar4;
      if (param_3 + 1 < pbVar2) {
        *(byte **)(param_1 + 0x30) = param_3 + 2;
        uVar4 = uVar4 | (uint)param_3[1] << 8;
        *(uint *)(param_1 + 4) = uVar4;
        if (param_3 + 2 < pbVar2) {
          *(byte **)(param_1 + 0x30) = param_3 + 3;
          uVar4 = uVar4 | param_3[2];
        }
      }
    }
    iVar3 = iVar5 >> 3;
    if (param_4 <= iVar5 >> 3) {
      iVar3 = param_4;
    }
    uVar1 = iVar5 + iVar3 * -8;
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)(param_1 + 0x20) = uVar1;
    if (iVar3 != 0) {
      *(byte **)(param_1 + 0x34) = pbVar2 + -1;
      uVar4 = (uint)pbVar2[-1] << 0x18;
      if (iVar3 != 1) {
        *(uint *)(param_1 + 0x1c) = uVar4 >> 8;
        *(byte **)(param_1 + 0x34) = pbVar2 + -2;
        uVar4 = uVar4 >> 8 | (uint)pbVar2[-2] << 0x18;
        if (iVar3 != 2) {
          *(uint *)(param_1 + 0x1c) = uVar4 >> 8;
          *(byte **)(param_1 + 0x34) = pbVar2 + -3;
          uVar4 = uVar4 >> 8 | (uint)pbVar2[-3] << 0x18;
          if (iVar3 != 3) {
            *(uint *)(param_1 + 0x1c) = uVar4 >> 8;
            *(byte **)(param_1 + 0x34) = pbVar2 + -4;
            uVar4 = uVar4 >> 8 | (uint)pbVar2[-4] << 0x18;
          }
        }
      }
      *(uint *)(param_1 + 0x1c) = uVar4;
    }
    if (7 < (int)uVar1) {
      uVar4 = uVar1;
      if (0x1f < (int)uVar1) {
        uVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(uint *)(param_1 + 0x24) = uVar4;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) >> (uVar1 & 0xff);
    }
  }
  return;
}


