/*
 * Function: FUN_000873b6
 * Entry:    000873b6
 * Prototype: undefined FUN_000873b6()
 */


undefined4 FUN_000873b6(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int local_38;
  uint *puVar9;
  
  iVar4 = *param_1;
  uVar6 = *param_2 & 0x1f;
  iVar12 = 0;
  puVar10 = param_3 + ((int)*param_2 >> 5);
  iVar14 = 0;
  if (uVar6 != 0) {
    puVar10 = puVar10 + 1;
  }
  local_38 = 0;
  puVar13 = puVar10 + -1;
  puVar10[-1] = 0;
  puVar11 = puVar13;
  puVar5 = puVar13;
LAB_000873e6:
  while( true ) {
    iVar7 = iVar4 + 1;
    bVar1 = *(byte *)(iVar4 + 1);
    if (bVar1 == 0) break;
    uVar2 = FUN_00087340(bVar1);
    if (uVar2 != 0) {
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 1;
      if (8 < iVar12) goto code_r0x000874aa;
      goto LAB_000874b6;
    }
    if (0x20 < bVar1) {
      if (bVar1 != 0x29) goto LAB_000874e8;
      *param_1 = iVar4 + 2;
      break;
    }
    iVar4 = iVar7;
    if (local_38 < iVar14) {
      if ((puVar11 < puVar5) && (iVar12 < 8)) {
        FUN_0008736a(puVar11,puVar5,iVar12);
      }
      if (param_3 < puVar11) {
        puVar5 = puVar11 + -1;
        puVar11[-1] = 0;
        iVar12 = 0;
        puVar11 = puVar5;
        local_38 = iVar14;
      }
      else {
        iVar12 = 8;
      }
    }
  }
  if (iVar14 == 0) {
LAB_000874e8:
    uVar3 = 4;
  }
  else {
    if ((puVar11 < puVar5) && (iVar12 < 8)) {
      FUN_0008736a(puVar11,puVar5,iVar12);
    }
    if (param_3 < puVar11) {
      puVar5 = param_3 + -1;
      puVar8 = puVar11;
      do {
        puVar9 = puVar8 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar8;
        puVar8 = puVar9;
      } while (puVar9 <= puVar13);
      iVar4 = ((int)puVar13 - (int)puVar11 & 0xfffffffcU) + 4;
      if ((int)puVar10 - 3U < (int)puVar11 + 1U) {
        iVar4 = 4;
      }
      puVar10 = (uint *)(iVar4 + (int)param_3);
      do {
        puVar11 = puVar10 + 1;
        *puVar10 = 0;
        puVar10 = puVar11;
      } while (puVar11 <= puVar13);
    }
    else if (uVar6 != 0) {
      puVar10[-1] = puVar10[-1] & 0xffffffffU >> (0x20 - uVar6 & 0xff);
    }
    for (; *puVar13 == 0; puVar13 = puVar13 + -1) {
      if (puVar13 == param_3) {
        *puVar13 = 1;
        break;
      }
    }
    uVar3 = 5;
  }
  return uVar3;
code_r0x000874aa:
  iVar4 = iVar7;
  if (param_3 < puVar11) {
    puVar11 = puVar11 + -1;
    iVar12 = 1;
    *puVar11 = 0;
LAB_000874b6:
    *puVar11 = uVar2 & 0xf | *puVar11 << 4;
    iVar4 = iVar7;
  }
  goto LAB_000873e6;
}


