/*
 * Function: FUN_00085734
 * Entry:    00085734
 * Prototype: undefined FUN_00085734()
 */


int FUN_00085734(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x2e);
    if ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + 2) == (uint)uVar1) {
      param_1 = 0;
    }
    else {
      *(ushort *)(param_1 + 0x2e) = uVar1 + 1;
      DataMemoryBarrier(0x1b);
      uVar6 = (uint)uVar1 & *(ushort *)(param_1 + 10) - 1;
      iVar7 = *(int *)(param_1 + 0x20) + uVar6 * 8;
      uVar3 = *(uint *)(iVar7 + 4);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(iVar7 + 8);
      }
      iVar8 = *(int *)(param_1 + 0x18);
      uVar4 = uVar3 & 0xffff;
      iVar7 = iVar8 + uVar4 * 0x10;
      iVar5 = param_1 + uVar4 * 8;
      sVar2 = *(short *)(iVar5 + 0x38);
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + sVar2;
      *(short *)(iVar5 + 0x38) = sVar2 + -1;
      if (-1 < (int)((uint)*(ushort *)(iVar7 + 0xc) << 0x1d)) {
        while ((int)((uint)*(ushort *)(iVar7 + 0xc) << 0x1f) < 0) {
          iVar7 = iVar8 + (uint)*(ushort *)(iVar7 + 0xe) * 0x10;
          *(short *)(iVar5 + 0x38) = *(short *)(iVar5 + 0x38) + -1;
        }
      }
      *(undefined2 *)(iVar7 + 0xe) = *(undefined2 *)(param_1 + 0x2c);
      *(short *)(param_1 + 0x2c) = (short)uVar3;
      param_1 = *(int *)(iVar5 + 0x34);
      *(undefined4 *)(iVar5 + 0x34) = 0;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = (short)uVar6;
      }
    }
  }
  return param_1;
}


