/*
 * Function: process_audio_buffer_descriptors
 * Entry:    0008567c
 * Prototype: undefined process_audio_buffer_descriptors(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
process_audio_buffer_descriptors(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  uVar1 = *(ushort *)(param_1 + 0x2c);
  uVar12 = (uint)uVar1;
  param_4 = param_3 + param_4;
  iVar7 = param_1 + uVar12 * 8;
  *(undefined4 *)(iVar7 + 0x34) = param_5;
  *(short *)(iVar7 + 0x38) = (short)param_4;
  iVar7 = param_4 + -1;
  iVar8 = *(int *)(param_1 + 0x18);
  puVar11 = (undefined4 *)(param_2 + 4);
  for (iVar10 = 0; iVar10 < param_4; iVar10 = iVar10 + 1) {
    piVar2 = *(int **)(param_1 + 0x28);
    iVar9 = iVar8 + uVar12 * 0x10;
    uVar4 = puVar11[-1] - *piVar2;
    if ((uint)piVar2[2] <= uVar4) {
      uVar4 = 0xffffffff;
    }
    uVar3 = calculate_buffer_offset(piVar2,uVar4);
    *(undefined4 *)(iVar8 + uVar12 * 0x10) = uVar3;
    *(undefined4 *)(iVar9 + 4) = 0;
    *(undefined4 *)(iVar9 + 8) = *puVar11;
    iVar6 = iVar7;
    if (iVar7 <= iVar10) {
      iVar6 = 0;
    }
    uVar5 = (ushort)iVar6;
    if (iVar10 < iVar7) {
      uVar5 = 1;
    }
    if (param_3 <= iVar10) {
      uVar5 = uVar5 | 2;
    }
    *(ushort *)(iVar9 + 0xc) = uVar5;
    uVar12 = (uint)*(ushort *)(iVar9 + 0xe);
    puVar11 = puVar11 + 2;
  }
  *(short *)(param_1 + 0x2c) = (short)uVar12;
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) - (short)param_4;
  *(ushort *)
   (*(int *)(param_1 + 0x1c) +
    ((uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2) & *(ushort *)(param_1 + 10) - 1) * 2 + 4) =
       uVar1;
  DataMemoryBarrier(0x1b);
  *(short *)(*(int *)(param_1 + 0x1c) + 2) = *(short *)(*(int *)(param_1 + 0x1c) + 2) + 1;
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
  return 0;
}


