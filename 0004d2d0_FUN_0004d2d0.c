/*
 * Function: FUN_0004d2d0
 * Entry:    0004d2d0
 * Prototype: undefined FUN_0004d2d0()
 */


uint FUN_0004d2d0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1;
  while (param_1 != 0) {
    bVar2 = (byte)param_1;
    bVar3 = (byte)(param_1 >> 8);
    bVar4 = (byte)(param_1 >> 0x10);
    bVar1 = (byte)(param_1 >> 0x18);
    iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
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
    param_1 = param_1 & ~(1 << iVar6);
    if (((&DAT_000882ac)[iVar6 * 0x10] != '\0') &&
       ((*(code **)((&DAT_000882a0)[iVar6 * 4] + 0x10) == (code *)0x0 ||
        (iVar5 = (**(code **)((&DAT_000882a0)[iVar6 * 4] + 0x10))(&DAT_000882a0 + iVar6 * 4),
        iVar5 == 0)))) {
      uVar7 = uVar7 & ~(1 << iVar6);
      FUN_0004d8f8(&DAT_000882a0 + iVar6 * 4,*(undefined4 *)(&DAT_000882a4)[iVar6 * 4],4);
    }
  }
  return uVar7;
}


