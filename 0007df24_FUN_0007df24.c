/*
 * Function: FUN_0007df24
 * Entry:    0007df24
 * Prototype: undefined FUN_0007df24()
 */


uint FUN_0007df24(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = FUN_0007de82(*(undefined4 *)(param_1 + 8));
  iVar11 = param_1 + iVar5 * 4;
  iVar10 = *(int *)(iVar11 + 0x10);
  if (iVar10 != 0) {
    iVar9 = 3;
    do {
      uVar8 = *(uint *)(iVar11 + 0x10);
      uVar6 = FUN_0007de18(param_1,uVar8);
      if (param_2 <= uVar6) goto LAB_0007df56;
      iVar7 = FUN_0007ddec(param_1,uVar8,3);
      iVar9 = iVar9 + -1;
      *(int *)(iVar11 + 0x10) = iVar7;
    } while ((iVar9 != 0) && (iVar10 != iVar7));
  }
  uVar8 = -1 << (iVar5 + 1U & 0xff) & *(uint *)(param_1 + 0xc);
  if (uVar8 != 0) {
    bVar2 = (byte)uVar8;
    bVar3 = (byte)(uVar8 >> 8);
    bVar4 = (byte)(uVar8 >> 0x10);
    bVar1 = (byte)(uVar8 >> 0x18);
    iVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    uVar8 = *(uint *)(param_1 + (iVar5 + 4) * 4);
LAB_0007df56:
    FUN_0007de9a(param_1,uVar8,iVar5);
  }
  return uVar8;
}


