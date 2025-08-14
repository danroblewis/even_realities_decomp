/*
 * Function: FUN_0004abc0
 * Entry:    0004abc0
 * Prototype: undefined FUN_0004abc0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


int FUN_0004abc0(byte *param_1,int param_2,code *param_3,undefined4 param_4,uint param_5,int param_6
                ,uint param_7)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte extraout_r1;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_80;
  uint local_78;
  int local_74;
  byte *local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  code *local_54;
  byte local_49;
  byte abStack_48 [16];
  byte abStack_38 [20];
  
  local_60 = param_4;
  local_54 = param_3;
  if (param_1 == (byte *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","in_packaged != ((void *)0)",
                 "WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",0x394);
    uVar9 = 0x394;
LAB_0004abe4:
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",uVar9);
  }
  bVar1 = param_1[2];
  uVar15 = (uint)bVar1;
  local_68 = (param_5 << 0x1c) >> 0x1f;
  if (param_2 == 0) {
    bVar8 = param_1[1];
    pbVar4 = param_1 + uVar15 + (uint)*param_1 * 4;
    for (uVar10 = 0; uVar10 < bVar8; uVar10 = uVar10 + 1) {
      iVar16 = FUN_0000ef12(pbVar4 + 1);
      pbVar4 = pbVar4 + 1 + iVar16 + 1;
    }
    param_2 = (int)pbVar4 - (int)param_1;
  }
  local_64 = (uint)param_1[3];
  uVar10 = uVar15;
  if ((uVar15 == 0) || (-1 < (int)(param_5 << 0x1f))) {
    if ((local_64 == 0) || (-1 < (int)(param_5 << 0x1e))) {
      if (local_54 == (code *)0x0) {
        return param_2;
      }
      (*local_54)(param_1,param_2,local_60);
      return param_2;
    }
    local_58 = (uint)*param_1;
    local_6c = local_58 << 2;
    local_5c = *(uint *)(param_1 + 4);
    pbVar4 = param_1 + local_58 * 4;
    if (local_54 == (code *)0x0) {
      if (uVar15 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = param_5 & 4;
        if (uVar10 != 0) {
          pbVar4 = pbVar4 + uVar15;
          uVar10 = 0;
        }
      }
      goto LAB_0004ac9c;
    }
    uVar12 = uVar15;
    if (uVar15 == 0) goto LAB_0004ada6;
    if ((param_5 & 4) == 0) {
      uVar10 = 0;
      uVar12 = 0;
      goto LAB_0004ada6;
    }
    pbVar14 = abStack_38;
    uVar10 = 0;
  }
  else {
    local_58 = (uint)*param_1;
    local_5c = *(uint *)(param_1 + 4);
    local_6c = local_58 << 2;
    pbVar4 = param_1 + local_58 * 4;
    if (local_54 == (code *)0x0) {
      uVar10 = 0;
      pbVar14 = pbVar4;
      while (pbVar4 + uVar15 != pbVar14) {
        iVar16 = FUN_0000ef12(*(undefined4 *)(param_1 + (uint)*pbVar14 * 4));
        if ((param_6 != 0) && (uVar10 < param_7)) {
          *(short *)(param_6 + uVar10 * 2) = (short)(iVar16 + 1);
          uVar10 = uVar10 + 1;
        }
        param_2 = param_2 + iVar16 + 1;
        pbVar14 = pbVar14 + 1;
      }
      pbVar4 = pbVar4 + uVar15;
LAB_0004ac9c:
      if ((param_5 & 5) == 0) {
        iVar16 = 2;
      }
      else {
        iVar16 = 1;
      }
      iVar6 = local_64 * 2;
      local_54 = (code *)(param_5 & 2);
      pbVar14 = pbVar4;
LAB_0004acba:
      while( true ) {
        if (pbVar14 == pbVar4 + iVar6) {
          return param_2;
        }
        pbVar13 = pbVar14 + 2;
        puVar11 = *(undefined **)(param_1 + (uint)pbVar14[1] * 4);
        if ((&DAT_000879b0 <= puVar11) && (puVar11 <= &UNK_000f8d63)) break;
        if (local_68 != 0) {
          uVar18 = FUN_0007dc00(local_5c,*pbVar14);
          uVar9 = (undefined4)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar18 != 0) goto LAB_0004ace6;
        }
        pbVar14 = pbVar13;
        if (local_54 != (code *)0x0) {
LAB_0004ad68:
          iVar5 = FUN_0000ef12(puVar11);
          if ((param_6 != 0) && (uVar10 < param_7)) {
            *(short *)(param_6 + uVar10 * 2) = (short)iVar5 + 1;
            uVar10 = uVar10 + 1;
          }
          param_2 = param_2 + iVar5;
          pbVar14 = pbVar13;
        }
      }
      if (local_68 != 0) {
        uVar18 = FUN_0007dc00(local_5c,*pbVar14);
        uVar9 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if ((int)uVar18 != 0) {
LAB_0004ace6:
          local_8c = 
          "(unsigned) char * used for %%p argument. It\'s recommended to cast it to void * because it may cause misbehavior in certain configurations. String:\"%s\" argument:%d"
          ;
          local_88 = local_5c;
          local_80 = 0x200;
          local_90 = 0x1000004;
          uStack_84 = uVar9;
          FUN_0004d944(&DAT_00088188,0x2480,&local_90,0);
          param_2 = param_2 + -2;
          pbVar14 = pbVar13;
          goto LAB_0004acba;
        }
      }
      if ((int)(param_5 << 0x1f) < 0) goto LAB_0004ad68;
      param_2 = param_2 - iVar16;
      pbVar14 = pbVar13;
      goto LAB_0004acba;
    }
    uVar12 = 0;
    pbVar14 = abStack_48;
  }
  memcpy(pbVar14,pbVar4,uVar15);
LAB_0004ada6:
  local_74 = local_64 << 1;
  local_70 = pbVar4 + uVar15 + local_64 * 2;
  local_78 = param_5 & 2;
  pbVar4 = pbVar4 + uVar15;
LAB_0004adbe:
  while( true ) {
    do {
      if (pbVar4 == local_70) {
        local_5c = (uint)param_1[1];
        bVar8 = 0;
        if (-1 < (int)(param_5 << 0x1e)) {
          bVar8 = (byte)(uVar12 >> 1);
        }
        if ((int)(param_5 << 0x1f) < 0) {
          bVar2 = 0;
        }
        else {
          bVar17 = (param_5 & 4) != 0;
          if (bVar17) {
            param_5 = uVar12;
          }
          bVar2 = (byte)param_5;
          if (!bVar17) {
            bVar2 = 0;
          }
        }
        param_1[1] = (char)uVar10 + param_1[1];
        param_1[2] = bVar2;
        param_1[3] = bVar8;
        iVar16 = (*local_54)(param_1,local_6c,local_60);
        if (iVar16 < 0) {
          return iVar16;
        }
        *param_1 = (byte)local_58;
        param_1[1] = (byte)local_5c;
        param_1[2] = bVar1;
        param_1[3] = (byte)local_64;
        iVar6 = (*local_54)(abStack_38,uVar12,local_60);
        if (iVar6 < 0) {
          return iVar6;
        }
        iVar5 = (*local_54)(pbVar4,((param_2 - uVar15) - local_6c) - local_74,local_60);
        if (iVar5 < 0) {
          return iVar5;
        }
        uVar15 = 0;
        iVar5 = iVar6 + iVar16 + iVar5;
        while( true ) {
          if (uVar10 <= uVar15) {
            (*local_54)(0,0,local_60);
            return iVar5;
          }
          local_49 = abStack_48[uVar15];
          uVar9 = *(undefined4 *)(param_1 + (uint)local_49 * 4);
          if (param_6 == 0) {
            sVar3 = 0;
          }
          else {
            sVar3 = *(short *)(param_6 + uVar15 * 2);
          }
          iVar16 = (*local_54)(&local_49,1,local_60);
          if (iVar16 < 0) break;
          if (sVar3 == 0) {
            sVar3 = FUN_0000ef12(uVar9);
            sVar3 = sVar3 + 1;
          }
          iVar6 = (*local_54)(uVar9,sVar3,local_60);
          if (iVar6 < 0) {
            return iVar6;
          }
          iVar5 = iVar5 + iVar16 + iVar6;
          uVar15 = uVar15 + 1;
        }
        return iVar16;
      }
      pbVar14 = pbVar4 + 2;
      bVar8 = *pbVar4;
      bVar2 = pbVar4[1];
      pbVar4 = pbVar14;
      if ((&UNK_000879af < *(undefined **)(param_1 + (uint)bVar2 * 4)) &&
         (*(undefined **)(param_1 + (uint)bVar2 * 4) < &UNK_000f8d64)) goto LAB_0004aede;
    } while ((local_68 != 0) && (iVar16 = FUN_0007dc00(local_5c), bVar8 = extraout_r1, iVar16 != 0))
    ;
    if (local_78 != 0) {
      if (uVar10 < 0x10) goto LAB_0004af48;
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","scpy_cnt < sizeof(cpy_str_pos)",
                   "WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",0x448);
      uVar9 = 0x448;
      goto LAB_0004abe4;
    }
    if (0xf < uVar12) break;
    uVar7 = uVar12 + 1;
    abStack_38[uVar12] = bVar8;
    uVar12 = uVar12 + 2 & 0xff;
    abStack_38[uVar7 & 0xff] = bVar2;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","keep_cnt < sizeof(keep_str_pos)",
               "WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",1099);
  uVar9 = 1099;
  goto LAB_0004abe4;
LAB_0004aede:
  if ((local_68 == 0) || (iVar16 = FUN_0007dc00(local_5c), iVar16 == 0)) {
    if ((int)(param_5 << 0x1f) < 0) {
      if (0xf < uVar10) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","scpy_cnt < sizeof(cpy_str_pos)",
                     "WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",0x43e);
        uVar9 = 0x43e;
        goto LAB_0004abe4;
      }
LAB_0004af48:
      abStack_48[uVar10] = bVar2;
      uVar10 = uVar10 + 1 & 0xff;
    }
    else if ((int)(param_5 << 0x1d) < 0) {
      if (0xf < uVar12) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","keep_cnt < sizeof(keep_str_pos)",
                     "WEST_TOPDIR/zephyr/lib/os/cbprintf_packaged.c",0x441);
        uVar9 = 0x441;
        goto LAB_0004abe4;
      }
      abStack_38[uVar12] = bVar2;
      uVar12 = uVar12 + 1 & 0xff;
    }
  }
  goto LAB_0004adbe;
}


