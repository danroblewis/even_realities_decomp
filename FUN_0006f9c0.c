/*
 * Function: FUN_0006f9c0
 * Entry:    0006f9c0
 * Prototype: undefined FUN_0006f9c0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 */


void FUN_0006f9c0(int param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
                 int param_7,float *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r1;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  undefined8 uVar29;
  uint local_50;
  undefined *local_4c;
  uint local_40;
  int local_3c;
  
  uVar15 = (uint)*(byte *)(param_7 + 8);
  iVar16 = *(int *)(param_7 + 4);
  param_4 = param_4 + 1;
  iVar25 = iVar16;
  if (param_2 == 0) {
    iVar9 = param_4 * 0x3c;
    if (iVar16 + param_4 * -0x3c < 0 == SBORROW4(iVar16,iVar9)) {
      iVar25 = iVar9;
    }
    iVar9 = iVar9 + 2;
    if (0x10 < iVar25) {
      iVar14 = 0x10;
      iVar19 = 3;
      iVar24 = 2;
      goto LAB_0006fa00;
    }
    fVar28 = 0.0;
    iVar19 = 3;
    iVar23 = 0x10;
    iVar25 = 4;
    param_2 = -2;
    iVar14 = 0;
    iVar18 = 0;
LAB_0006fa6c:
    pfVar6 = param_8 + param_2 + iVar23;
    iVar23 = iVar23 - iVar14;
    do {
      iVar14 = iVar14 + 1;
      if (iVar25 < iVar14) {
        fVar28 = fVar28 + ABS(*pfVar6);
        iVar18 = iVar18 + 1;
      }
      pfVar6 = pfVar6 + 1;
    } while (iVar23 + iVar14 < iVar9);
LAB_0006fa98:
    if (iVar18 != 0) {
      uVar10 = *(uint *)(param_1 + 0x20);
      iVar25 = -(int)((fVar28 * 16.0) / (float)(longlong)iVar18 + 0.5);
      uVar7 = iVar25 + 8;
      bVar27 = SBORROW4(uVar7,6);
      bVar26 = uVar7 == 6;
      if (6 < (int)uVar7) {
        uVar7 = 7;
      }
      if (bVar26 || iVar25 + 2 < 0 != bVar27) {
        uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
      }
      goto joined_r0x0006fad8;
    }
  }
  else {
    iVar9 = param_4 * 0x50;
    if (iVar16 + param_4 * -0x50 < 0 == SBORROW4(iVar16,iVar9)) {
      iVar25 = iVar9;
    }
    iVar19 = param_2 + 3;
    iVar24 = param_2 + 2;
    iVar23 = iVar19 * 6 - iVar24;
    iVar9 = iVar9 + iVar24;
    iVar14 = iVar23;
    if (iVar23 < iVar25) {
LAB_0006fa00:
      iVar23 = iVar25;
      iVar18 = 0;
      param_2 = -2 - param_2;
      puVar4 = param_6 + iVar14 + 0x7fffffff;
      pfVar6 = param_8 + iVar14 + param_2;
      fVar28 = 0.0;
      iVar13 = 0;
      iVar25 = iVar24 * 2;
      do {
        while( true ) {
          puVar4 = puVar4 + 1;
          iVar13 = iVar13 + 1;
          if (*puVar4 == 0) break;
          iVar13 = 0;
          pfVar6 = pfVar6 + 1;
          iVar14 = 0;
          if (puVar4 == param_6 + iVar23 + -1) goto LAB_0006fa66;
        }
        if (iVar13 != iVar25 && iVar13 + iVar24 * -2 < 0 == SBORROW4(iVar13,iVar25)) {
          fVar28 = fVar28 + ABS(*pfVar6);
          iVar18 = iVar18 + 1;
        }
        pfVar6 = pfVar6 + 1;
        iVar14 = iVar13;
      } while (puVar4 != param_6 + iVar23 + -1);
LAB_0006fa66:
      if (iVar23 < iVar9) goto LAB_0006fa6c;
      goto LAB_0006fa98;
    }
    if (iVar23 < iVar9) {
      iVar14 = 0;
      fVar28 = 0.0;
      iVar25 = iVar24 * 2;
      param_2 = -2 - param_2;
      iVar18 = iVar14;
      goto LAB_0006fa6c;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  uVar7 = 0;
joined_r0x0006fad8:
  if ((int)(uVar10 + 3) < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar10 + 3;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar7 << (uVar10 & 0xff);
  }
  else {
    FUN_00068908(param_1,uVar7,3);
  }
  iVar25 = (param_3 + 1) * 0x14;
  local_4c = &DAT_0008ed50 +
             (uint)(param_5 != iVar25 &&
                   param_5 + (param_3 + 1) * -0x14 < 0 == SBORROW4(param_5,iVar25)) * 0x800;
  local_50 = 0;
  local_3c = 0;
  local_40 = 1;
  do {
    iVar25 = (param_3 * iVar19 + iVar19) * 0x14 + 2 >> (local_40 & 0xff);
    if (iVar16 <= iVar25) {
      iVar25 = iVar16;
    }
    if (local_3c < iVar25) {
      uVar10 = (iVar25 - local_3c) - 1;
      puVar4 = param_6 + local_3c;
LAB_0006fb52:
      do {
        uVar20 = (uint)(puVar4[1] >> 1);
        uVar17 = ((uint)(ushort)((puVar4[1] | *puVar4) >> 1) << 0x10) >> 0x12;
        uVar7 = (uint)(*puVar4 >> 1);
        pbVar22 = local_4c + local_50 * 4;
        if (uVar17 == 0) {
          uVar17 = 0;
          uVar21 = uVar20;
          uVar11 = uVar7;
        }
        else {
          uVar21 = uVar15;
          uVar11 = uVar15;
          if (uVar15 == 0) {
LAB_0006fd54:
            do {
              while( true ) {
                uVar5 = *(uint *)(param_1 + 0x20);
                uVar12 = uVar5 + 1;
                uVar8 = (int)uVar7 >> (uVar21 & 0xff) & 1;
                if ((int)uVar12 < 0x21) {
                  *(uint *)(param_1 + 0x20) = uVar12;
                  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar8 << (uVar5 & 0xff);
                }
                else {
                  FUN_00068908(param_1,uVar8,1);
                  uVar12 = *(uint *)(param_1 + 0x20);
                }
                uVar5 = (int)uVar20 >> (uVar21 & 0xff) & 1;
                if ((int)(uVar12 + 1) < 0x21) {
                  *(uint *)(param_1 + 0x20) = uVar12 + 1;
                  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar5 << (uVar12 & 0xff);
                }
                else {
                  FUN_00068908(param_1,uVar5,1);
                }
                uVar5 = uVar21;
                if (2 < (int)uVar21) {
                  uVar5 = 3;
                }
                bVar1 = pbVar22[uVar5];
                uVar5 = *(uint *)(param_1 + 8) >> 10;
                uVar8 = uVar5 * *(ushort *)(&DAT_0008dc90 + (uint)bVar1 * 0x44) +
                        *(int *)(param_1 + 4);
                *(uint *)(param_1 + 4) = uVar8;
                uVar5 = uVar5 * *(ushort *)(&DAT_0008dc92 + (uint)bVar1 * 0x44);
                *(uint *)(param_1 + 4) = uVar8 & 0xffffff;
                *(uint *)(param_1 + 8) = uVar5;
                uVar21 = uVar21 + 1;
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8 >> 0x18;
                uVar17 = (int)uVar17 >> 1;
                if (uVar5 < 0x10000) break;
                if (uVar17 == 0) goto LAB_0006fd7e;
              }
              FUN_0006897c(param_1);
            } while (uVar17 != 0);
LAB_0006fd7e:
            uVar17 = uVar21;
            if (2 < (int)uVar21) {
              uVar17 = 3;
            }
          }
          else {
            bVar1 = *pbVar22;
            uVar21 = *(uint *)(param_1 + 8) >> 10;
            uVar11 = uVar21 * *(ushort *)(&DAT_0008dc90 + (uint)bVar1 * 0x44) +
                     *(int *)(param_1 + 4);
            *(uint *)(param_1 + 4) = uVar11;
            uVar21 = uVar21 * *(ushort *)(&DAT_0008dc92 + (uint)bVar1 * 0x44);
            *(uint *)(param_1 + 8) = uVar21;
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11 >> 0x18;
            *(uint *)(param_1 + 4) = uVar11 & 0xffffff;
            if (uVar21 < 0x10000) {
              FUN_0006897c(param_1);
            }
            uVar17 = (int)uVar17 >> 1;
            if (uVar17 != 0) {
              uVar21 = 1;
              uVar11 = uVar21;
              goto LAB_0006fd54;
            }
            uVar11 = 1;
            uVar17 = uVar11;
            uVar21 = uVar11;
          }
          pbVar22 = pbVar22 + uVar17;
          uVar5 = (int)uVar7 >> uVar11;
          uVar8 = (int)uVar20 >> uVar11;
          uVar7 = (int)uVar5 >> (uVar21 - uVar11 & 0xff);
          uVar20 = (int)uVar8 >> (uVar21 - uVar11 & 0xff);
          uVar21 = uVar8 & 0xffff;
          uVar11 = uVar5 & 0xffff;
        }
        if (uVar11 != 0) {
          uVar11 = *(uint *)(param_1 + 0x20);
          uVar3 = *puVar4;
          iVar25 = uVar11 + 1;
          if (iVar25 < 0x21) {
            *(int *)(param_1 + 0x20) = iVar25;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uVar3 & 1) << (uVar11 & 0xff);
          }
          else {
            FUN_00068908(param_1,uVar3 & 1,1);
          }
        }
        if (uVar21 != 0) {
          uVar21 = *(uint *)(param_1 + 0x20);
          uVar3 = puVar4[1];
          iVar25 = uVar21 + 1;
          if (iVar25 < 0x21) {
            *(int *)(param_1 + 0x20) = iVar25;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uVar3 & 1) << (uVar21 & 0xff);
          }
          else {
            FUN_00068908(param_1,uVar3 & 1,1);
          }
        }
        bVar1 = *pbVar22;
        iVar25 = uVar7 + uVar20 * 4;
        uVar21 = *(uint *)(param_1 + 8) >> 10;
        uVar11 = uVar21 * *(ushort *)(&UNK_0008dc50 + iVar25 * 4 + (uint)bVar1 * 0x44) +
                 *(int *)(param_1 + 4);
        *(uint *)(param_1 + 4) = uVar11;
        uVar21 = uVar21 * *(ushort *)(&UNK_0008dc50 + iVar25 * 4 + (uint)bVar1 * 0x44 + 2);
        *(uint *)(param_1 + 8) = uVar21;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11 >> 0x18;
        *(uint *)(param_1 + 4) = uVar11 & 0xffffff;
        if (uVar21 < 0x10000) {
          FUN_0006897c(param_1);
        }
        iVar25 = (local_50 & 0xf) * 0x10;
        if (1 < (int)uVar17) {
          local_50 = iVar25 + uVar17 + 0xc & 0xff;
          puVar4 = puVar4 + 2;
          if (param_6 + (uVar10 & 0xfffffffe) + local_3c + 2 == puVar4) break;
          goto LAB_0006fb52;
        }
        local_50 = (int)(short)((short)uVar7 + (short)uVar20) * (int)(short)((short)uVar17 + 1) +
                   iVar25 + 1U & 0xff;
        puVar4 = puVar4 + 2;
      } while (puVar4 != param_6 + (uVar10 & 0xfffffffe) + local_3c + 2);
      local_3c = (uVar10 & 0xfffffffe) + local_3c + 2;
    }
    local_4c = local_4c + 0x400;
    bVar26 = local_40 == 0;
    local_40 = local_40 - 1;
    if (bVar26) {
      uVar29 = FUN_00068590(param_1);
      iVar25 = (int)uVar29;
      if (uVar15 == 0) {
        if ((0 < iVar16) && (0 < iVar25)) {
          param_6 = param_6 + -1;
          puVar4 = param_6 + iVar16;
          while( true ) {
            while( true ) {
              iVar25 = (int)((ulonglong)uVar29 >> 0x20);
              param_6 = param_6 + 1;
              uVar3 = *param_6;
              if (uVar3 == 0) break;
              uVar15 = (uint)(uVar3 >> 1);
              if ((int)((uint)uVar3 << 0x1f) < 0) {
                uVar15 = -uVar15;
              }
              if (*param_8 >= (float)(longlong)(int)uVar15) {
                iVar25 = 1;
              }
              iVar16 = *(uint *)(param_1 + 0x20) + 1;
              if (*param_8 < (float)(longlong)(int)uVar15) {
                iVar25 = 0;
              }
              if (iVar16 < 0x21) {
                uVar15 = iVar25 << (*(uint *)(param_1 + 0x20) & 0xff);
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar15;
                *(int *)(param_1 + 0x20) = iVar16;
              }
              else {
                FUN_00068908(param_1,iVar25,1);
                uVar15 = extraout_r1;
              }
              iVar25 = (int)uVar29 + -1;
              uVar29 = CONCAT44(uVar15,iVar25);
              if (param_6 == puVar4) {
                return;
              }
              param_8 = param_8 + 1;
              if (iVar25 == 0) {
                return;
              }
            }
            if (param_6 == puVar4) break;
            param_8 = param_8 + 1;
          }
        }
      }
      else if ((0 < iVar16) && (0 < iVar25)) {
        puVar4 = param_6 + (iVar16 - 1U & 0xfffffffe);
        while( true ) {
          while( true ) {
            uVar2 = param_6[1];
            uVar3 = *param_6;
            if (((uint)(ushort)((uVar2 | uVar3) >> 1) << 0x10) >> 0x12 != 0) break;
            if (param_6 == puVar4) {
              return;
            }
            param_6 = param_6 + 2;
          }
          uVar15 = *(uint *)(param_1 + 0x20);
          iVar9 = iVar25 + -1;
          iVar16 = uVar15 + 1;
          uVar10 = uVar3 >> 1 & 1;
          if (iVar16 < 0x21) {
            *(int *)(param_1 + 0x20) = iVar16;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar10 << (uVar15 & 0xff);
          }
          else {
            FUN_00068908(param_1,uVar10,1);
          }
          if (uVar3 >> 1 == 1) {
            if (iVar9 == 0) {
              return;
            }
            uVar15 = *(uint *)(param_1 + 0x20);
            iVar16 = uVar15 + 1;
            if (iVar16 < 0x21) {
              *(int *)(param_1 + 0x20) = iVar16;
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uVar3 & 1) << (uVar15 & 0xff)
              ;
            }
            else {
              FUN_00068908(param_1,uVar3 & 1,1);
            }
            iVar9 = iVar25 + -2;
          }
          iVar25 = iVar9 + -1;
          if (iVar9 != 0) {
            uVar15 = *(uint *)(param_1 + 0x20);
            uVar10 = uVar2 >> 1 & 1;
            iVar16 = uVar15 + 1;
            if (iVar16 < 0x21) {
              *(int *)(param_1 + 0x20) = iVar16;
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar10 << (uVar15 & 0xff);
            }
            else {
              FUN_00068908(param_1,uVar10,1);
            }
          }
          if (uVar2 >> 1 == 1) {
            if (0 < iVar25) {
              uVar15 = *(uint *)(param_1 + 0x20);
              iVar25 = uVar15 + 1;
              if (iVar25 < 0x21) {
                *(int *)(param_1 + 0x20) = iVar25;
                *(uint *)(param_1 + 0x1c) =
                     *(uint *)(param_1 + 0x1c) | (uVar2 & 1) << (uVar15 & 0xff);
              }
              else {
                FUN_00068908(param_1,uVar2 & 1,1);
              }
            }
            iVar25 = iVar9 + -2;
          }
          if (param_6 == puVar4) break;
          param_6 = param_6 + 2;
          if (iVar25 < 1) {
            return;
          }
        }
        return;
      }
      return;
    }
  } while( true );
}


