/*
 * Function: FUN_00078110
 * Entry:    00078110
 * Prototype: undefined FUN_00078110(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


byte * FUN_00078110(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                   uint param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int extraout_r1;
  byte *extraout_r2;
  byte *extraout_r2_00;
  int extraout_r2_01;
  byte *extraout_r3;
  int *piVar13;
  int *piVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint *local_40;
  
  iVar6 = calculate_string_length(&LAB_000aa08e_1);
  bVar2 = (&LAB_000aa08e)[iVar6];
  pbVar20 = (byte *)(*param_2 + 2);
  do {
    pbVar18 = pbVar20;
    pbVar20 = pbVar18 + 1;
  } while (*pbVar18 == 0x30);
  pbVar20 = pbVar18 + (-2 - *param_2);
  uVar23 = process_format_flags();
  uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if ((int)uVar23 == 0) {
    iVar7 = compare_string_offsets(pbVar18,&LAB_000aa08e_1,iVar6);
    pbVar17 = pbVar18;
    if (iVar7 == 0) {
      pbVar15 = pbVar18 + iVar6;
      iVar7 = process_format_flags(pbVar18[iVar6]);
      pbVar11 = pbVar15;
      pbVar17 = pbVar15;
      if (iVar7 != 0) {
        do {
          pbVar18 = pbVar11;
          pbVar11 = pbVar18 + 1;
        } while (*pbVar18 == 0x30);
        uVar23 = process_format_flags();
        uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
        pbVar20 = (byte *)0x1;
        bVar4 = (int)uVar23 == 0;
        pbVar11 = pbVar18;
        goto LAB_00078192;
      }
    }
    pbVar15 = (byte *)0x0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    pbVar15 = (byte *)0x0;
    pbVar11 = pbVar18;
LAB_00078192:
    do {
      pbVar17 = pbVar11;
      uVar23 = process_format_flags(*pbVar17,uVar12,pbVar17 + 1);
      uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
      pbVar11 = extraout_r2;
    } while ((int)uVar23 != 0);
    uVar23 = compare_string_offsets(pbVar17,&LAB_000aa08e_1,iVar6);
    uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
    if ((int)uVar23 == 0) {
      if (pbVar15 == (byte *)0x0) {
        pbVar15 = pbVar17 + iVar6;
        pbVar11 = pbVar15;
        do {
          pbVar17 = pbVar11;
          uVar23 = process_format_flags(*pbVar17,uVar12,pbVar17 + 1);
          uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
          pbVar11 = extraout_r2_00;
        } while ((int)uVar23 != 0);
      }
    }
    else if (pbVar15 == (byte *)0x0) goto LAB_000781d2;
    pbVar15 = (byte *)(((int)pbVar15 - (int)pbVar17) * 4);
  }
LAB_000781d2:
  pbVar11 = pbVar17;
  if ((*pbVar17 & 0xdf) == 0x50) {
    if (pbVar17[1] == 0x2b) {
      bVar5 = false;
LAB_0007823c:
      pbVar10 = pbVar17 + 2;
    }
    else {
      if (pbVar17[1] == 0x2d) {
        bVar5 = true;
        goto LAB_0007823c;
      }
      pbVar10 = pbVar17 + 1;
      bVar5 = false;
    }
    uVar23 = process_format_flags(*pbVar10);
    if (((int)uVar23 - 1U & 0xff) < 0x19) {
      while( true ) {
        puVar1 = (undefined1 *)((int)((ulonglong)uVar23 >> 0x20) + 1);
        uVar23 = process_format_flags(*puVar1,puVar1,(int)uVar23 + -0x10);
        pbVar11 = (byte *)((ulonglong)uVar23 >> 0x20);
        if (0x18 < ((int)uVar23 - 1U & 0xff)) break;
        uVar23 = CONCAT44(pbVar11,extraout_r2_01 * 10 + (int)uVar23);
      }
      iVar7 = extraout_r2_01;
      if (bVar5) {
        iVar7 = -extraout_r2_01;
      }
      pbVar15 = pbVar15 + iVar7;
    }
  }
  *param_2 = (int)pbVar11;
  if (bVar4) {
    if (pbVar20 != (byte *)0x0) {
      return (byte *)0x0;
    }
    return (byte *)0x6;
  }
  pbVar20 = pbVar17 + (-1 - (int)pbVar18);
  iVar7 = 0;
LAB_00078258:
  if (7 < (int)pbVar20) {
LAB_00078272:
    iVar7 = iVar7 + 1;
    pbVar20 = (byte *)((int)pbVar20 >> 1);
    goto LAB_00078258;
  }
  iVar7 = FUN_000785d4(param_1,iVar7);
  if (iVar7 == 0) {
    uVar12 = 0xde;
LAB_0007826c:
    FUN_00076a94("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/gdtoa-gethex.c"
                 ,uVar12,0,"Balloc succeeded");
    iVar7 = extraout_r1;
    pbVar20 = extraout_r3;
    goto LAB_00078272;
  }
  uVar22 = 0;
  puVar19 = (uint *)(iVar7 + 0x14);
  uVar21 = 0;
  local_40 = puVar19;
  while (pbVar20 = pbVar17, pbVar18 < pbVar20) {
    if (((pbVar20[-1] != bVar2) || (pbVar17 = pbVar20 + -1 + (1 - iVar6), pbVar17 < pbVar18)) ||
       (iVar8 = compare_string_offsets(pbVar17,&LAB_000aa08e_1,iVar6), iVar8 != 0)) {
      if (uVar22 == 0x20) {
        *local_40 = uVar21;
        uVar21 = 0;
        uVar22 = 0;
        local_40 = local_40 + 1;
      }
      uVar9 = process_format_flags(pbVar20[-1]);
      uVar3 = uVar22 & 0xff;
      uVar22 = uVar22 + 4;
      uVar21 = uVar21 | (uVar9 & 0xf) << uVar3;
      pbVar17 = pbVar20 + -1;
    }
  }
  *local_40 = uVar21;
  iVar16 = (int)local_40 + (4 - (int)puVar19) >> 2;
  *(int *)(iVar7 + 0x10) = iVar16;
  iVar8 = process_float_formatting(uVar21);
  pbVar18 = (byte *)*param_3;
  iVar8 = iVar16 * 0x20 - iVar8;
  if ((int)pbVar18 < iVar8) {
    iVar8 = iVar8 - (int)pbVar18;
    uVar21 = normalize_float_value(iVar7,iVar8);
    if (uVar21 != 0) {
      uVar22 = iVar8 - 1;
      uVar21 = 1;
      if ((1 << (uVar22 & 0x1f) & puVar19[(int)uVar22 >> 5]) != 0) {
        if (((int)uVar22 < 2) || (iVar16 = normalize_float_value(iVar7,iVar8 + -2), iVar16 == 0)) {
          uVar21 = 2;
        }
        else {
          uVar21 = 3;
        }
      }
    }
    pbVar15 = pbVar15 + iVar8;
    handle_format_conversion(iVar7,iVar8);
  }
  else {
    if (iVar8 < (int)pbVar18) {
      pbVar15 = pbVar15 + -((int)pbVar18 - iVar8);
      iVar7 = FUN_000789f0(param_1,iVar7,(int)pbVar18 - iVar8);
      puVar19 = (uint *)(iVar7 + 0x14);
    }
    uVar21 = 0;
  }
  iVar8 = iVar7;
  if (param_3[2] < (int)pbVar15) goto LAB_000782f2;
  if ((int)pbVar15 < param_3[1]) {
    pbVar15 = (byte *)(param_3[1] - (int)pbVar15);
    if ((int)pbVar18 <= (int)pbVar15) {
      iVar6 = param_3[3];
      if (iVar6 == 2) {
        if (param_6 != 0) goto LAB_000783e8;
      }
      else {
        if (iVar6 != 3) {
          if ((iVar6 != 1) || (pbVar18 != pbVar15)) goto LAB_000783e8;
          if (pbVar18 == (byte *)0x1) goto LAB_000783b6;
          param_6 = normalize_float_value(iVar7,pbVar18 + -1);
        }
        if (param_6 == 0) {
LAB_000783e8:
          FUN_00078654(param_1,iVar7);
          *param_5 = 0;
          return (byte *)0x50;
        }
      }
LAB_000783b6:
      *param_4 = param_3[1];
      *(undefined4 *)(iVar7 + 0x10) = 1;
      *puVar19 = 1;
      *param_5 = iVar7;
      return &DAT_00000062;
    }
    pbVar20 = pbVar15 + -1;
    if (uVar21 == 0) {
      if (pbVar20 != (byte *)0x0) {
        uVar21 = normalize_float_value(iVar7,pbVar20);
      }
    }
    else {
      uVar21 = 1;
    }
    pbVar18 = pbVar18 + -(int)pbVar15;
    pbVar17 = (byte *)0x2;
    if ((1 << ((uint)pbVar20 & 0x1f) & puVar19[(int)pbVar20 >> 5]) != 0) {
      uVar21 = uVar21 | 2;
    }
    handle_format_conversion(iVar7,pbVar15);
    pbVar15 = (byte *)param_3[1];
  }
  else {
    pbVar17 = (byte *)0x1;
  }
  if (uVar21 == 0) goto LAB_000784da;
  iVar16 = param_3[3];
  if (iVar16 != 2) {
    uVar22 = param_6;
    if (iVar16 == 3) goto joined_r0x0007846c;
    if ((iVar16 == 1) && ((uVar21 & 2) != 0)) {
      uVar22 = (uVar21 | *puVar19) & 1;
      goto joined_r0x0007846c;
    }
LAB_0007846e:
    pbVar17 = (byte *)((uint)pbVar17 | 0x10);
    goto LAB_000784da;
  }
  param_6 = 1 - param_6;
  uVar22 = param_6;
joined_r0x0007846c:
  if (uVar22 == 0) goto LAB_0007846e;
  iVar16 = *(int *)(iVar7 + 0x10);
  piVar13 = (int *)(iVar7 + 0x14);
  do {
    piVar14 = piVar13 + 1;
    if (*piVar13 != -1) {
      *piVar13 = *piVar13 + 1;
      goto LAB_000784b0;
    }
    *piVar13 = 0;
    piVar13 = piVar14;
  } while (piVar14 < (int *)(iVar7 + 0x14) + iVar16);
  if (*(int *)(iVar7 + 8) <= iVar16) {
    iVar8 = FUN_000785d4(param_1,*(int *)(iVar7 + 4) + 1);
    if (iVar8 == 0) {
      uVar12 = 0x84;
      goto LAB_0007826c;
    }
    memcpy(iVar8 + 0xc,iVar7 + 0xc,(*(int *)(iVar7 + 0x10) + 2) * 4);
    FUN_00078654(param_1,iVar7);
  }
  iVar6 = *(int *)(iVar8 + 0x10);
  *(int *)(iVar8 + 0x10) = iVar6 + 1;
  *(undefined4 *)(iVar8 + iVar6 * 4 + 0x14) = 1;
LAB_000784b0:
  if (pbVar17 == (byte *)0x2) {
    uVar21 = 2;
    if (((byte *)(*param_3 + -1) != pbVar18) ||
       ((1 << ((uint)pbVar18 & 0x1f) & *(uint *)(iVar8 + 0x14 + ((int)pbVar18 >> 5) * 4)) == 0))
    goto LAB_000784d6;
  }
  else if ((iVar16 < *(int *)(iVar8 + 0x10)) ||
          ((((uint)pbVar18 & 0x1f) != 0 &&
           (iVar6 = process_float_formatting(*(undefined4 *)(iVar8 + 0x14 + iVar16 * 4 + -4)),
           iVar6 < (int)(0x20 - ((uint)pbVar18 & 0x1f)))))) {
    handle_format_conversion(iVar8,1);
    pbVar15 = pbVar15 + 1;
    if (param_3[2] < (int)pbVar15) {
LAB_000782f2:
      FUN_00078654(param_1,iVar8);
      *param_5 = 0;
      return (byte *)0xa3;
    }
  }
  uVar21 = 1;
LAB_000784d6:
  pbVar17 = (byte *)(uVar21 | 0x20);
LAB_000784da:
  *param_5 = iVar8;
  *param_4 = (int)pbVar15;
  return pbVar17;
}


