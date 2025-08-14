/*
 * Function: FUN_0004cd4c
 * Entry:    0004cd4c
 * Prototype: undefined FUN_0004cd4c()
 */


int FUN_0004cd4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar6 = *(int *)(param_1 + 0x10);
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar8 = (int *)(iVar6 + 0x3bc);
  if (*piVar8 != 0) {
    return -0x78;
  }
  *piVar8 = 1;
  iVar2 = 1;
  iVar3 = puVar7[2];
  uVar1 = puVar7[10];
  while( true ) {
    uVar10 = FUN_0007ebee(iVar2,uVar1);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar3 - 4U <= (uint)uVar10) break;
    iVar2 = extraout_r2 + 1;
  }
  if (extraout_r2 + -1 == 0) {
    iVar2 = -0xc;
  }
  else {
    uVar4 = 0x80000000 >> LZCOUNT(extraout_r2 + -1);
    *(uint *)(iVar6 + 0x260) = puVar7[1] + 7 & 0xfffffffc;
    uVar1 = FUN_0007ebee(uVar4,puVar7[10]);
    *(undefined4 *)(iVar6 + 0x264) = uVar1;
    iVar2 = extraout_r2_00 + (uVar4 * puVar7[10] + 3 & 0xfffffffc) * 2;
    *(int *)(iVar6 + 600) = iVar2;
    *(uint *)(iVar6 + 0x254) = iVar2 + (uVar4 * 0x12 + 9 & 0xfffffffc) + uVar4 * 8 + 8;
    uVar1 = puVar7[1];
    *(uint *)(iVar6 + 0x25c) = uVar4;
    *(undefined4 *)(iVar6 + 0x250) = uVar1;
    *(undefined4 **)(iVar6 + 0x2a4) = puVar7;
    *(undefined1 **)(iVar6 + 0x2a8) = &LAB_0007eb36_1;
    iVar2 = FUN_0004d170(iVar6 + 0x1c8,*puVar7);
    if (iVar2 == 0) {
      iVar9 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(iVar9 + 0x20);
      if (*(int *)(iVar9 + 0x1c) == 1) {
        iVar2 = iVar2 + -0x10;
      }
      FUN_000730b4(iVar3 + 0x2c0);
      FUN_000730e8(iVar3 + 0x2c0,*(int *)(iVar9 + 0x24) * 0x400 + 0x2002a268,0x400,iVar2,0);
      FUN_00072e50(iVar3 + 0x2b0,&LAB_0007eb1c_1);
      pcVar5 = *(code **)(*(int *)(*(int *)(iVar9 + 0x14) + 8) + 4);
      if (pcVar5 == (code *)0x0) {
LAB_0004ce44:
        iVar2 = -0x58;
      }
      else {
        iVar2 = (*pcVar5)(*(int *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x18),&DAT_0007eb11,iVar3);
        if (iVar2 == 0) {
          pcVar5 = *(code **)(*(int *)(*(int *)(iVar9 + 0x14) + 8) + 0x10);
          if (pcVar5 == (code *)0x0) goto LAB_0004ce44;
          iVar2 = (*pcVar5)(*(int *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x18),1);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar6 + 0x1a8) = 0x4cefd;
            *(undefined4 *)(iVar6 + 0x1ac) = 0x7ecc5;
            iVar2 = FUN_0004d100(iVar6,*(undefined4 *)(iVar6 + 0x3b8),puVar7[10],
                                 *(undefined4 *)(iVar6 + 0x268),iVar6 + 0x1c8,
                                 *(undefined4 *)(iVar6 + 0x208),*(undefined4 *)(iVar6 + 0x210),
                                 0x7eb7f);
            if (iVar2 == 0) {
              iVar3 = FUN_00071314(iVar6 + 0xe0);
              *(int *)(iVar6 + 0x3c0) = iVar3;
              if (-1 < iVar3) {
                uVar1 = 2;
                goto LAB_0004cec0;
              }
              iVar2 = -0x16;
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_0004cec0:
  FUN_0007eb4e(piVar8,uVar1);
  return iVar2;
}


