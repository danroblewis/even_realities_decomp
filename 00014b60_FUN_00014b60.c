/*
 * Function: FUN_00014b60
 * Entry:    00014b60
 * Prototype: undefined FUN_00014b60(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


/* WARNING: Type propagation algorithm not settling */

char * FUN_00014b60(int param_1,uint param_2,char *param_3,int *param_4,undefined4 *param_5,
                   undefined4 *param_6)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  char *extraout_r2;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *puVar19;
  char *pcVar20;
  uint uVar21;
  undefined4 *puVar22;
  char cVar23;
  char *pcVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  ulonglong in_d0;
  undefined8 uVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 local_80;
  uint local_78;
  char *local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  uint local_60;
  char *local_5c;
  char *local_50;
  undefined8 local_48;
  undefined4 *local_40;
  int local_30;
  int local_2c [2];
  
  pcVar18 = (char *)(in_d0 >> 0x20);
  pcVar13 = (char *)in_d0;
  local_80 = in_d0;
  local_60 = param_2;
  local_50 = param_3;
  if (*(int *)(param_1 + 0x24) != 0) goto LAB_00014b9c;
  pcVar2 = (char *)malloc_maybe(0x10);
  *(char **)(param_1 + 0x24) = pcVar2;
  puVar22 = (undefined4 *)0x0;
  param_3 = pcVar2;
  if (pcVar2 != (char *)0x0) goto LAB_00014b94;
  pcVar2 = "REENT malloc succeeded";
  uVar8 = 0xea;
  local_80 = in_d0;
LAB_00014b8e:
  pcVar2 = (char *)FUN_00076a94("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/dtoa.c"
                                ,uVar8,0,pcVar2);
  param_3 = extraout_r2;
LAB_00014b94:
  *(undefined4 **)(pcVar2 + 4) = puVar22;
  *(undefined4 **)(pcVar2 + 8) = puVar22;
  *(undefined4 **)pcVar2 = puVar22;
  *(undefined4 **)(pcVar2 + 0xc) = puVar22;
LAB_00014b9c:
  iVar9 = **(int **)(param_1 + 0x24);
  if (iVar9 != 0) {
    uVar11 = (*(int **)(param_1 + 0x24))[1];
    *(uint *)(iVar9 + 4) = uVar11;
    *(int *)(iVar9 + 8) = 1 << (uVar11 & 0xff);
    FUN_00078654(param_1);
    param_3 = (char *)0x0;
    **(undefined4 **)(param_1 + 0x24) = 0;
  }
  if ((int)pcVar18 < 0) {
    param_3 = (char *)0x1;
    local_80 = CONCAT44(pcVar18,(undefined4)local_80) & 0x7fffffffffffffff;
  }
  else {
    *param_5 = 0;
  }
  uVar31 = local_80;
  uVar11 = local_80._4_4_;
  if ((int)pcVar18 < 0) {
    *param_5 = param_3;
  }
  if ((~local_80._4_4_ & 0x7ff00000) == 0) {
    *param_4 = 9999;
    if ((local_80 & 0xfffff00000000) == 0 && pcVar13 == (char *)0x0) {
      if (param_6 == (undefined4 *)0x0) {
        return "Infinity";
      }
      local_74 = "Infinity";
      pcVar13 = "";
    }
    else {
      if (param_6 == (undefined4 *)0x0) {
        return "NaN";
      }
      local_74 = "NaN";
      pcVar13 = "";
    }
    *param_6 = pcVar13;
    return local_74;
  }
  iVar6 = (int)local_80;
  iVar9 = FUN_0000ddc8(iVar6,local_80._4_4_,0,0);
  if (iVar9 != 0) {
    *param_4 = 1;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = "";
    }
    return "0";
  }
  uVar21 = (local_80._4_4_ << 1) >> 0x15;
  local_78 = FUN_00078ce0(iVar6,param_1,local_2c,&local_30);
  if (uVar21 == 0) {
    iVar9 = local_30 + local_2c[0];
    uVar21 = iVar9 + 0x432;
    bVar27 = SBORROW4(uVar21,0x20);
    bVar26 = iVar9 + 0x412 < 0;
    bVar25 = uVar21 == 0x20;
    if (0x20 < (int)uVar21) {
      uVar21 = 0x40 - uVar21;
    }
    if (bVar25 || bVar26 != bVar27) {
      uVar14 = 0x20 - uVar21;
      uVar4 = (int)pcVar13 << (uVar14 & 0xff);
      uVar21 = local_80._4_4_;
    }
    else {
      uVar14 = iVar9 + 0x412;
      uVar4 = local_78;
      uVar21 = local_80._4_4_ << (uVar21 & 0xff);
    }
    param_5 = (undefined4 *)(iVar9 + -1);
    if (!bVar25 && bVar26 == bVar27) {
      uVar4 = uVar21 | (uint)pcVar13 >> (uVar14 & 0xff);
    }
    uVar28 = FUN_0000d804(uVar4);
    iVar9 = (int)uVar28;
    uVar21 = (int)((ulonglong)uVar28 >> 0x20) + 0xfe100000;
    bVar26 = true;
  }
  else {
    param_5 = (undefined4 *)(uVar21 - 0x3ff);
    uVar21 = local_80._4_4_ & 0xfffff | 0x3ff00000;
    bVar26 = false;
    iVar9 = iVar6;
  }
  uVar28 = FUN_0000d588(iVar9,uVar21,0,0x3ff80000);
  uVar28 = FUN_0000d8f8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),0x636f4361,0x3fd287a7);
  uVar28 = FUN_0000d58c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),0x8b60c8b3,0x3fc68a28);
  uVar29 = FUN_0000d824(param_5);
  uVar29 = FUN_0000d8f8((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0x509f79fb,0x3fd34413);
  uVar28 = FUN_0000d58c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar29,
                        (int)((ulonglong)uVar29 >> 0x20));
  uVar8 = (undefined4)((ulonglong)uVar28 >> 0x20);
  puVar3 = (undefined4 *)float_to_int();
  iVar9 = FUN_0000dddc((int)uVar28,uVar8,0,0);
  if (iVar9 != 0) {
    uVar29 = FUN_0000d824(puVar3);
    iVar9 = FUN_0000ddc8((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,uVar8);
    if (iVar9 == 0) {
      puVar3 = (undefined4 *)((int)puVar3 + -1);
    }
  }
  if (puVar3 < (undefined4 *)0x17) {
    iVar9 = FUN_0000dddc(iVar6,local_80._4_4_,(&DAT_00088908)[(int)puVar3 * 2],
                         (&DAT_0008890c)[(int)puVar3 * 2]);
    if (iVar9 == 0) {
      bVar25 = false;
    }
    else {
      puVar3 = (undefined4 *)((int)puVar3 + -1);
      bVar25 = false;
    }
  }
  else {
    bVar25 = true;
  }
  local_64 = (local_30 - (int)param_5) + -1;
  if (local_64 < 0) {
    local_68 = 1 - (local_30 - (int)param_5);
    local_64 = 0;
  }
  else {
    local_68 = 0;
  }
  if ((int)puVar3 < 0) {
    local_68 = local_68 - (int)puVar3;
    local_5c = (char *)-(int)puVar3;
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_64 = local_64 + (int)puVar3;
    local_5c = (char *)0x0;
    local_40 = puVar3;
  }
  if (9 < local_60) {
    pcVar13 = (char *)0x1;
    local_60 = 0;
switchD_00014d3a_caseD_4:
    bVar27 = true;
    pcVar15 = (char *)0xffffffff;
    local_50 = (char *)0x0;
    pcVar2 = (char *)0xffffffff;
    pcVar16 = (char *)0x12;
    goto LAB_00014dc8;
  }
  bVar27 = 5 < (int)local_60;
  if (bVar27) {
    local_60 = local_60 - 4;
  }
  pcVar13 = (char *)(uint)!bVar27;
  switch(local_60) {
  case 2:
    bVar27 = false;
    break;
  case 3:
    bVar27 = false;
    goto LAB_00014db4;
  case 4:
    bVar27 = true;
    break;
  case 5:
    bVar27 = true;
LAB_00014db4:
    pcVar2 = (char *)((int)puVar3 + (int)local_50);
    pcVar15 = pcVar2 + 1;
    pcVar16 = pcVar15;
    if ((int)pcVar15 < 1) {
      pcVar16 = (char *)0x1;
    }
    goto LAB_00014dc8;
  default:
    goto switchD_00014d3a_caseD_4;
  }
  pcVar16 = local_50;
  pcVar15 = local_50;
  pcVar2 = local_50;
  if ((int)local_50 < 1) {
    pcVar16 = (char *)0x1;
    pcVar15 = (char *)0x1;
    local_50 = (char *)0x1;
    pcVar2 = (char *)0x1;
  }
LAB_00014dc8:
  iVar9 = 0;
  for (iVar12 = 4; pcVar18 = (char *)(iVar12 + 0x14), pcVar18 <= pcVar16; iVar12 = iVar12 << 1) {
    iVar9 = iVar9 + 1;
  }
  *(int *)(*(int *)(param_1 + 0x24) + 4) = iVar9;
  pcVar16 = (char *)FUN_000785d4(param_1);
  if (pcVar16 == (char *)0x0) {
    pcVar2 = "Balloc succeeded";
    uVar8 = 0x1aa;
    puVar22 = puVar3;
    local_80 = uVar31;
    goto LAB_00014b8e;
  }
  **(undefined4 **)(param_1 + 0x24) = pcVar16;
  pcVar18 = local_5c;
  puVar22 = puVar3;
  iVar9 = local_68;
  pcVar20 = pcVar16;
  if ((pcVar15 < (char *)0xf) && (pcVar13 != (char *)0x0)) {
    if ((int)puVar3 < 1) {
      if (puVar3 == (undefined4 *)0x0) {
        iVar12 = 2;
      }
      else {
        puVar19 = &DAT_000888e0;
        iVar12 = 2;
        uVar21 = -(int)puVar3 & 0xf;
        iVar5 = -(int)puVar3 >> 4;
        local_80 = FUN_0000d8f8(iVar6,local_80._4_4_,(&DAT_00088908)[uVar21 * 2],
                                (&DAT_0008890c)[uVar21 * 2]);
        bVar1 = false;
        uVar30 = local_80;
        while( true ) {
          if (iVar5 == 0) break;
          if (iVar5 << 0x1f < 0) {
            iVar12 = iVar12 + 1;
            uVar30 = FUN_0000d8f8((int)uVar30,(int)(uVar30 >> 0x20),*puVar19,puVar19[1]);
            bVar1 = true;
          }
          iVar5 = iVar5 >> 1;
          puVar19 = puVar19 + 2;
        }
        if (bVar1) goto LAB_00014eb8;
      }
    }
    else {
      uVar21 = (int)puVar3 >> 4;
      local_48 = *(undefined8 *)(&DAT_00088908 + ((uint)puVar3 & 0xf) * 2);
      if ((int)puVar3 << 0x17 < 0) {
        uVar21 = uVar21 & 0xf;
        iVar12 = 3;
        local_80 = float_multiply_64bit(iVar6,local_80._4_4_,0x7f73bf3c,0x75154fdd);
      }
      else {
        iVar12 = 2;
      }
      puVar19 = &DAT_000888e0;
      while( true ) {
        if (uVar21 == 0) break;
        if ((int)(uVar21 << 0x1f) < 0) {
          iVar12 = iVar12 + 1;
          local_48 = FUN_0000d8f8((undefined4)local_48,local_48._4_4_,*puVar19,puVar19[1]);
        }
        uVar21 = (int)uVar21 >> 1;
        puVar19 = puVar19 + 2;
      }
      uVar30 = float_multiply_64bit
                         ((undefined4)local_80,local_80._4_4_,(undefined4)local_48,local_48._4_4_);
LAB_00014eb8:
      local_80 = uVar30;
    }
    pcVar13 = pcVar15;
    if (((bVar25) &&
        (iVar5 = FUN_0000dddc((undefined4)local_80,local_80._4_4_,0,0x3ff00000), iVar5 != 0)) &&
       (pcVar15 != (char *)0x0)) {
      if ((int)pcVar2 < 1) goto LAB_00014f4c;
      local_80 = FUN_0000d8f8((undefined4)local_80,local_80._4_4_,0,0x40240000);
      iVar12 = iVar12 + 1;
      pcVar13 = pcVar2;
      puVar22 = (undefined4 *)((int)puVar3 + -1);
    }
    uVar28 = FUN_0000d824(iVar12);
    uVar28 = FUN_0000d8f8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(undefined4)local_80,
                          local_80._4_4_);
    uVar28 = FUN_0000d58c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),0,0x401c0000);
    iVar12 = (int)((ulonglong)uVar28 >> 0x20);
    uVar8 = (undefined4)uVar28;
    iVar5 = iVar12 + -0x3400000;
    if (pcVar13 == (char *)0x0) {
      uVar28 = FUN_0000d588((undefined4)local_80,local_80._4_4_,0,0x40140000);
      uVar7 = (undefined4)((ulonglong)uVar28 >> 0x20);
      iVar5 = FUN_0000de18((int)uVar28,uVar7,uVar8,iVar5);
      if (iVar5 == 0) {
        iVar12 = FUN_0000dddc((int)uVar28,uVar7,uVar8,iVar12 + 0x7cc00000);
        if (iVar12 == 0) goto LAB_00014f4c;
        goto LAB_00015180;
      }
    }
    else {
      pcVar17 = pcVar13 + (int)pcVar16;
      if (bVar27) {
        uVar28 = float_multiply_64bit
                           (0,0x3fe00000,(&DAT_00088900)[(int)pcVar13 * 2],
                            (&DAT_00088904)[(int)pcVar13 * 2]);
        uVar28 = FUN_0000d588((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar8,iVar5);
        pcVar13 = pcVar16;
        while( true ) {
          local_48._4_4_ = (undefined4)((ulonglong)uVar28 >> 0x20);
          local_48._0_4_ = (undefined4)uVar28;
          cVar23 = float_to_int((undefined4)local_80,local_80._4_4_);
          uVar28 = FUN_0000d824();
          uVar28 = FUN_0000d588((undefined4)local_80,local_80._4_4_,(int)uVar28,
                                (int)((ulonglong)uVar28 >> 0x20));
          uVar7 = (undefined4)((ulonglong)uVar28 >> 0x20);
          uVar8 = (undefined4)uVar28;
          pcVar24 = pcVar13 + 1;
          *pcVar13 = cVar23 + '0';
          iVar12 = FUN_0000de18((undefined4)local_48,local_48._4_4_,uVar8,uVar7);
          if (iVar12 != 0) goto LAB_000153a0;
          uVar28 = FUN_0000d588(0,0x3ff00000,uVar8,uVar7);
          iVar12 = FUN_0000de18((undefined4)local_48,local_48._4_4_,(int)uVar28,
                                (int)((ulonglong)uVar28 >> 0x20));
          pcVar13 = pcVar24;
          if (iVar12 != 0) goto LAB_0001545e;
          if (pcVar24 == pcVar17) break;
          uVar28 = FUN_0000d8f8((undefined4)local_48,local_48._4_4_,0,0x40240000);
          local_80 = FUN_0000d8f8(uVar8,uVar7,0,0x40240000);
        }
        if ((local_2c[0] < 0) || (0xe < (int)puVar3)) goto LAB_0001542e;
        goto LAB_000153dc;
      }
      uVar28 = FUN_0000d8f8((&DAT_00088900)[(int)pcVar13 * 2],(&DAT_00088904)[(int)pcVar13 * 2],
                            uVar8,iVar5);
      uVar8 = (undefined4)((ulonglong)uVar28 >> 0x20);
      pcVar24 = pcVar16;
      while( true ) {
        cVar23 = float_to_int((undefined4)local_80,local_80._4_4_);
        uVar29 = FUN_0000d824();
        uVar29 = FUN_0000d588((undefined4)local_80,local_80._4_4_,(int)uVar29,
                              (int)((ulonglong)uVar29 >> 0x20));
        uVar10 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar7 = (undefined4)uVar29;
        pcVar13 = pcVar24 + 1;
        *pcVar24 = cVar23 + '0';
        if (pcVar13 == pcVar17) break;
        local_80 = FUN_0000d8f8(uVar7,uVar10,0,0x40240000);
        pcVar24 = pcVar13;
      }
      uVar29 = FUN_0000d58c((int)uVar28,uVar8,0,0x3fe00000);
      iVar12 = FUN_0000de18(uVar7,uVar10,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
      if (iVar12 != 0) goto LAB_0001545e;
      uVar28 = FUN_0000d588(0,0x3fe00000,(int)uVar28,uVar8);
      iVar12 = FUN_0000dddc(uVar7,uVar10,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
      if (iVar12 != 0) goto LAB_000152e2;
      if ((local_2c[0] < 0) || (0xe < (int)puVar3)) goto LAB_00014f60;
      local_70 = *(undefined8 *)(&DAT_00088908 + (int)puVar3 * 2);
      if ((-1 < (int)local_50) || (pcVar15 != (char *)0x0)) goto LAB_00015338;
LAB_000153fa:
      uVar28 = FUN_0000d8f8((undefined4)local_70,local_70._4_4_,0,0x40140000);
      iVar9 = FUN_0000de04((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iVar6,uVar11);
      puVar22 = puVar3;
      if (iVar9 != 0) goto LAB_00015180;
    }
    puVar3 = puVar22;
    pcVar13 = (char *)0x0;
    pcVar20 = pcVar13;
LAB_00015586:
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    *pcVar16 = '1';
    pcVar24 = pcVar16 + 1;
    goto LAB_0001518c;
  }
LAB_00014f4c:
  if ((local_2c[0] < 0) || (0xe < (int)puVar3)) {
    if (bVar27) {
LAB_0001542e:
      if ((int)local_60 < 2) {
        if (bVar26) {
          pcVar13 = (char *)(local_2c[0] + 0x433);
        }
        else {
          pcVar13 = (char *)(0x36 - local_30);
        }
      }
      else {
        pcVar20 = pcVar15 + -1;
        pcVar13 = pcVar15;
        if ((int)local_5c < (int)pcVar20) {
          local_40 = (undefined4 *)((int)local_40 + ((int)pcVar20 - (int)local_5c));
          pcVar18 = (char *)0x0;
          local_5c = pcVar20;
        }
        else {
          pcVar18 = local_5c + -(int)pcVar20;
          if ((int)pcVar15 < 0) {
            pcVar13 = (char *)0x0;
            iVar9 = local_68 - (int)pcVar15;
          }
        }
      }
      local_68 = local_68 + (int)pcVar13;
      local_64 = local_64 + (int)pcVar13;
      pcVar20 = (char *)FUN_000787bc(param_1,1);
    }
    else {
LAB_00014f60:
      pcVar20 = (char *)0x0;
    }
    if ((iVar9 != 0) && (0 < local_64)) {
      iVar12 = local_64;
      if (iVar9 <= local_64) {
        iVar12 = iVar9;
      }
      local_68 = local_68 - iVar12;
      iVar9 = iVar9 - iVar12;
      local_64 = local_64 - iVar12;
    }
    if (local_5c != (char *)0x0) {
      if ((bVar27) && (pcVar18 != (char *)0x0)) {
        pcVar20 = (char *)FUN_0007893c(param_1,pcVar20,pcVar18);
        uVar21 = FUN_000787e8(param_1,pcVar20,local_78);
        FUN_00078654(param_1,local_78);
        local_5c = local_5c + -(int)pcVar18;
        local_78 = uVar21;
        if (local_5c == (char *)0x0) goto LAB_00014fd2;
      }
      local_78 = FUN_0007893c(param_1,local_78,local_5c);
    }
LAB_00014fd2:
    pcVar13 = (char *)FUN_000787bc(param_1,1);
    if (local_40 == (undefined4 *)0x0) {
      if (((int)local_60 < 2) && (iVar6 == 0)) goto LAB_000154f6;
LAB_00015522:
      iVar6 = 1;
    }
    else {
      pcVar13 = (char *)FUN_0007893c(param_1,pcVar13,local_40);
      if (((int)local_60 < 2) && (iVar6 == 0)) {
LAB_000154f6:
        if ((uVar31 & 0xfffff00000000) == 0) {
          puVar22 = (undefined4 *)(uVar11 & 0x7ff00000);
          if ((uVar31 & 0x7ff0000000000000) != 0) {
            puVar22 = (undefined4 *)0x1;
            local_68 = local_68 + 1;
            local_64 = local_64 + 1;
          }
        }
        else {
          puVar22 = (undefined4 *)0x0;
        }
        bVar26 = local_40 == (undefined4 *)0x0;
        local_40 = puVar22;
        if (bVar26) goto LAB_00015522;
      }
      else {
        puVar22 = (undefined4 *)0x0;
      }
      iVar6 = FUN_00087510(*(undefined4 *)(pcVar13 + (*(int *)(pcVar13 + 0x10) + 4) * 4));
      iVar6 = 0x20 - iVar6;
      local_40 = puVar22;
    }
    uVar11 = local_64 + iVar6 & 0x1f;
    if (uVar11 == 0) {
      iVar6 = 0;
LAB_0001552e:
      iVar6 = iVar6 + 0x1c;
      local_68 = local_68 + iVar6;
      iVar9 = iVar9 + iVar6;
      local_64 = local_64 + iVar6;
    }
    else {
      iVar6 = 0x20 - uVar11;
      if (iVar6 < 5) {
        if (iVar6 != 4) goto LAB_0001552e;
      }
      else {
        iVar6 = 0x1c - uVar11;
        local_68 = local_68 + iVar6;
        iVar9 = iVar9 + iVar6;
        local_64 = local_64 + iVar6;
      }
    }
    if (0 < local_68) {
      local_78 = FUN_000789f0(param_1,local_78,local_68);
    }
    if (0 < local_64) {
      pcVar13 = (char *)FUN_000789f0(param_1,pcVar13,local_64);
    }
    pcVar18 = pcVar16;
    if ((bVar25) && (iVar6 = FUN_000875ae(local_78,pcVar13), iVar6 < 0)) {
      local_78 = FUN_00078698(param_1,local_78,10,0);
      puVar3 = (undefined4 *)((int)puVar3 + -1);
      pcVar15 = pcVar2;
      if (bVar27) {
        pcVar20 = (char *)FUN_00078698(param_1,pcVar20,10,0);
        if ((0 < (int)pcVar2) || ((int)local_60 < 3)) goto LAB_000150a8;
      }
      else if ((0 < (int)pcVar2) || ((int)local_60 < 3)) goto LAB_000155a4;
    }
    else if ((0 < (int)pcVar15) || ((int)local_60 < 3)) {
      pcVar2 = pcVar15;
      if (!bVar27) goto LAB_000155a4;
LAB_000150a8:
      pcVar18 = pcVar20;
      if (0 < iVar9) {
        pcVar18 = (char *)FUN_000789f0(param_1,pcVar20,iVar9);
      }
      pcVar20 = pcVar18;
      if (local_40 == (undefined4 *)0x0) goto LAB_000155ea;
      iVar9 = FUN_000785d4(param_1,*(undefined4 *)(pcVar18 + 4));
      if (iVar9 == 0) {
        pcVar2 = "Balloc succeeded";
        uVar8 = 0x2ea;
        puVar22 = (undefined4 *)0x0;
        param_5 = puVar3;
        local_80 = uVar31;
        goto LAB_00014b8e;
      }
      memcpy(iVar9 + 0xc,pcVar18 + 0xc,(*(int *)(pcVar18 + 0x10) + 2) * 4);
      pcVar20 = (char *)FUN_000789f0(param_1,iVar9,1);
LAB_000155ea:
      pcVar17 = pcVar16;
      while( true ) {
        pcVar2 = pcVar17 + 1;
        iVar9 = FUN_00087184(local_78,pcVar13);
        uVar11 = iVar9 + 0x30;
        iVar6 = FUN_000875ae(local_78,pcVar18);
        iVar12 = FUN_00078ac8(param_1,pcVar13,pcVar20);
        if (*(int *)(iVar12 + 0xc) != 0) break;
        iVar5 = FUN_000875ae(local_78,iVar12);
        FUN_00078654(param_1,iVar12);
        if (iVar5 == 0) {
          if ((local_60 == 0) && ((uVar31 & 1) == 0)) {
            if (uVar11 == 0x39) goto LAB_000156c8;
            if (0 < iVar6) goto LAB_0001569c;
            goto LAB_000156a8;
          }
          if (iVar6 < 0) goto LAB_000156a8;
        }
        else {
          if ((iVar6 < 0) || ((local_60 == 0 && iVar6 == 0 && ((uVar31 & 1) == 0)))) {
            if (0 < iVar5) goto LAB_0001563c;
            goto LAB_000156a8;
          }
          if (0 < iVar5) goto LAB_000156c2;
        }
        *pcVar17 = (char)uVar11;
        if (pcVar15 + (int)pcVar16 == pcVar2) goto LAB_00015768;
        local_78 = FUN_00078698(param_1,local_78,10,0);
        pcVar17 = pcVar2;
        if (pcVar18 == pcVar20) {
          pcVar20 = (char *)FUN_00078698(param_1,pcVar18,10,0);
          pcVar18 = pcVar20;
        }
        else {
          pcVar18 = (char *)FUN_00078698(param_1,pcVar18,10,0);
          pcVar20 = (char *)FUN_00078698(param_1,pcVar20,10,0);
        }
      }
      FUN_00078654(param_1);
      if ((iVar6 < 0) || ((local_60 == 0 && iVar6 == 0 && ((uVar31 & 1) == 0)))) {
LAB_0001563c:
        local_78 = FUN_000789f0(param_1,local_78,1);
        iVar6 = FUN_000875ae(local_78,pcVar13);
        if ((0 < iVar6) || ((iVar6 == 0 && ((uVar11 & 1) != 0)))) {
          if (uVar11 == 0x39) goto LAB_000156c8;
LAB_0001569c:
          uVar11 = iVar9 + 0x31;
        }
LAB_000156a8:
        cVar23 = (char)uVar11;
      }
      else {
LAB_000156c2:
        if (uVar11 == 0x39) {
LAB_000156c8:
          *pcVar17 = '9';
          pcVar2 = pcVar17 + 1;
          goto LAB_000156d0;
        }
        cVar23 = (char)uVar11 + '\x01';
      }
      pcVar24 = pcVar17 + 1;
      *pcVar17 = cVar23;
      goto LAB_00015190;
    }
    if (pcVar15 == (char *)0x0) {
      pcVar13 = (char *)FUN_00078698(param_1,pcVar13,5);
      iVar9 = FUN_000875ae(local_78,pcVar13);
      if (0 < iVar9) goto LAB_00015586;
    }
  }
  else {
LAB_000153dc:
    local_70 = *(undefined8 *)(&DAT_00088908 + (int)puVar3 * 2);
    if ((-1 < (int)local_50) || (0 < (int)pcVar15)) goto LAB_00015338;
    if (pcVar15 == (char *)0x0) goto LAB_000153fa;
LAB_00015180:
    pcVar13 = (char *)0x0;
    pcVar20 = (char *)0x0;
  }
  puVar3 = (undefined4 *)~(uint)local_50;
  pcVar24 = pcVar16;
LAB_0001518c:
  pcVar18 = (char *)0x0;
  goto LAB_00015190;
LAB_000152e2:
  do {
    pcVar24 = pcVar17;
    pcVar17 = pcVar24 + -1;
  } while (pcVar24[-1] == '0');
  goto LAB_000153a0;
LAB_000155a4:
  while( true ) {
    iVar9 = FUN_00087184(local_78,pcVar13);
    uVar11 = iVar9 + 0x30;
    *pcVar18 = (char)uVar11;
    if ((int)pcVar2 <= (int)(pcVar18 + 1) - (int)pcVar16) break;
    local_78 = FUN_00078698(param_1,local_78,10,0);
    pcVar18 = pcVar18 + 1;
  }
  pcVar18 = (char *)0x0;
  if ((int)pcVar2 < 1) {
    pcVar2 = (char *)0x1;
  }
  pcVar2 = pcVar2 + (int)pcVar16;
LAB_00015768:
  local_78 = FUN_000789f0(param_1,local_78,1);
  iVar9 = FUN_000875ae(local_78,pcVar13);
  if ((iVar9 < 1) && ((iVar9 != 0 || ((uVar11 & 1) == 0)))) {
    do {
      pcVar24 = pcVar2;
      pcVar2 = pcVar24 + -1;
    } while (pcVar24[-1] == '0');
  }
  else {
LAB_000156d0:
    do {
      pcVar24 = pcVar2;
      pcVar2 = pcVar24 + -1;
      if (pcVar24[-1] != '9') {
        *pcVar2 = pcVar24[-1] + '\x01';
        goto LAB_00015190;
      }
    } while (pcVar16 != pcVar2);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    *pcVar16 = '1';
  }
LAB_00015190:
  FUN_00078654(param_1,pcVar13);
  puVar22 = puVar3;
  if (pcVar20 != (char *)0x0) {
    if ((pcVar18 != (char *)0x0) && (pcVar18 != pcVar20)) {
      FUN_00078654(param_1,pcVar18);
    }
    FUN_00078654(param_1,pcVar20);
  }
  goto LAB_000153a0;
  while( true ) {
    uVar31 = FUN_0000d8f8(uVar8,uVar7,0,0x40240000);
    iVar9 = FUN_0000ddc8((int)uVar31,(int)(uVar31 >> 0x20),0,0);
    puVar22 = puVar3;
    pcVar20 = pcVar24;
    if (iVar9 != 0) break;
LAB_00015338:
    uVar8 = (undefined4)(uVar31 >> 0x20);
    float_multiply_64bit((int)uVar31,uVar8,(undefined4)local_70,local_70._4_4_);
    iVar9 = float_to_int();
    uVar28 = FUN_0000d824();
    uVar28 = FUN_0000d8f8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(undefined4)local_70,
                          local_70._4_4_);
    uVar28 = FUN_0000d588((int)uVar31,uVar8,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
    uVar7 = (undefined4)((ulonglong)uVar28 >> 0x20);
    uVar8 = (undefined4)uVar28;
    pcVar24 = pcVar20 + 1;
    *pcVar20 = (char)iVar9 + '0';
    if (pcVar15 == pcVar24 + -(int)pcVar16) {
      uVar28 = FUN_0000d58c(uVar8,uVar7,uVar8,uVar7);
      uVar8 = (undefined4)((ulonglong)uVar28 >> 0x20);
      iVar6 = FUN_0000de18((int)uVar28,uVar8,(undefined4)local_70,local_70._4_4_);
      pcVar13 = pcVar24;
      puVar22 = puVar3;
      if ((iVar6 != 0) ||
         ((iVar6 = FUN_0000ddc8((int)uVar28,uVar8,(undefined4)local_70,local_70._4_4_), iVar6 != 0
          && (iVar9 << 0x1f < 0)))) goto LAB_0001545e;
      break;
    }
  }
  goto LAB_000153a0;
  while (pcVar16 != pcVar13) {
LAB_0001545e:
    pcVar24 = pcVar13;
    pcVar13 = pcVar24 + -1;
    if (*pcVar13 != '9') goto LAB_00015476;
  }
  puVar22 = (undefined4 *)((int)puVar22 + 1);
  *pcVar16 = '0';
LAB_00015476:
  *pcVar13 = *pcVar13 + '\x01';
LAB_000153a0:
  FUN_00078654(param_1,local_78);
  *pcVar24 = '\0';
  *param_4 = (int)puVar22 + 1;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = pcVar24;
  }
  return pcVar16;
}


