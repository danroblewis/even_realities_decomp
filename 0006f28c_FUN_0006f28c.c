/*
 * Function: FUN_0006f28c
 * Entry:    0006f28c
 * Prototype: undefined FUN_0006f28c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


int FUN_0006f28c(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  ushort *puVar15;
  undefined *local_50;
  int local_4c;
  int local_48;
  int local_3c;
  
  iVar5 = (param_2 + 3) * 0x14;
  if (param_6 == 0) {
    param_6 = 0x7fffffff;
  }
  else {
    param_6 = param_6 << 0xb;
  }
  iVar12 = 0;
  uVar2 = 1;
  local_50 = &DAT_0008ed50 + (uint)(iVar5 + -0x28 < param_3) * 0x800;
  uVar1 = 0;
  iVar8 = 0;
  local_4c = 0;
  local_48 = 0;
  local_3c = 0;
  do {
    iVar13 = (param_2 * (param_1 + 3) + param_1 + 3) * 0x14 + 2 >> (uVar2 & 0xff);
    if (*param_5 <= iVar13) {
      iVar13 = *param_5;
    }
    if ((iVar12 < iVar13) && (iVar8 <= param_6)) {
      puVar15 = (ushort *)(param_4 + (iVar12 + 1) * 2);
      do {
        uVar9 = (uint)(puVar15[-1] >> 1);
        uVar10 = (uint)(*puVar15 >> 1);
        iVar11 = (uint)(uVar9 != 0) + (uint)(uVar10 != 0);
        pbVar14 = local_50 + uVar1 * 4;
        uVar6 = (uint)(ushort)((puVar15[-1] | *puVar15) >> 3);
        iVar8 = iVar8 + iVar11 * 0x800;
        if (uVar6 != 0) {
          if (param_3 < iVar5) {
            uVar7 = 0;
LAB_0006f436:
            do {
              uVar4 = uVar7;
              if (2 < (int)uVar7) {
                uVar4 = 3;
              }
              uVar6 = (int)uVar6 >> 1;
              uVar7 = uVar7 + 1;
              iVar8 = iVar8 + (uint)*(ushort *)(&DAT_0008d3f0 + (uint)pbVar14[uVar4] * 0x22);
            } while (uVar6 != 0);
            uVar6 = uVar7;
            if (2 < (int)uVar7) {
              uVar6 = 3;
            }
            iVar3 = uVar7 * 0x1000;
          }
          else {
            if (uVar9 == 1) {
              iVar3 = 3;
            }
            else {
              iVar3 = 2;
            }
            if (uVar10 == 1) {
              iVar3 = iVar3 + 1;
            }
            uVar6 = (int)uVar6 >> 1;
            iVar8 = iVar8 + (*(ushort *)(&DAT_0008d3f0 + (uint)*pbVar14 * 0x22) - 0x1000);
            local_3c = local_3c + iVar3;
            if (uVar6 != 0) {
              uVar7 = 1;
              goto LAB_0006f436;
            }
            uVar6 = 1;
            iVar3 = 0x1000;
            uVar7 = uVar6;
          }
          pbVar14 = pbVar14 + uVar6;
          iVar8 = iVar8 + iVar3;
          uVar9 = (int)uVar9 >> (uVar7 & 0xff);
          uVar10 = (int)uVar10 >> (uVar7 & 0xff);
        }
        iVar12 = iVar12 + 2;
        iVar8 = iVar8 + (uint)*(ushort *)
                               (&DAT_0008d3d0 + ((uint)*pbVar14 * 0x11 + uVar9 + uVar10 * 4) * 2);
        if ((iVar11 != 0) && (iVar8 <= param_6)) {
          local_4c = iVar8;
          local_48 = iVar12;
        }
        if ((int)uVar6 < 2) {
          uVar6 = (int)(short)((short)uVar10 + (short)uVar9) * (int)(short)((short)uVar6 + 1) + 1;
        }
        else {
          uVar6 = uVar6 + 0xc;
        }
        uVar1 = (uVar1 & 0xf) * 0x10 + (uVar6 & 0xff) & 0xff;
      } while ((iVar12 < iVar13) && (puVar15 = puVar15 + 2, iVar8 <= param_6));
    }
    uVar2 = uVar2 - 1;
    local_50 = local_50 + 0x400;
  } while (uVar2 != 0xffffffff);
  *param_5 = local_48;
  if (param_7 != (undefined1 *)0x0) {
    if ((iVar5 <= param_3) && (param_6 < local_4c + local_3c * 0x800)) {
      *param_7 = 1;
      goto LAB_0006f3ea;
    }
    *param_7 = 0;
  }
  if (param_6 == 0x7fffffff) {
    local_4c = local_4c + local_3c * 0x800;
  }
LAB_0006f3ea:
  iVar5 = local_4c + 0x7ff;
  if (iVar5 < 0) {
    iVar5 = local_4c + 0xffe;
  }
  return iVar5 >> 0xb;
}


