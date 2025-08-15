/*
 * Function: format_json_value_by_type
 * Entry:    000646c0
 * Prototype: undefined format_json_value_by_type()
 */


uint format_json_value_by_type(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_44;
  char local_40 [28];
  
  if ((param_1 == 0) || (param_2 == 0)) goto switchD_000646e2_caseD_3;
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar10 = (uint)bVar1;
  if (uVar10 == 0x10) {
    uVar10 = format_json_string_with_escaping(*(undefined4 *)(param_1 + 0x10));
    return uVar10;
  }
  if (0x10 < uVar10) {
    if (uVar10 == 0x40) {
      piVar11 = *(int **)(param_1 + 8);
      if (*(int *)(param_2 + 0x14) == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
      puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6 + 1);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0x7b;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        if (*(int *)(param_2 + 0x14) != 0) {
          puVar5[1] = 10;
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar6;
        for (; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11) {
          if (*(int *)(param_2 + 0x14) != 0) {
            puVar9 = (undefined1 *)resize_dynamic_buffer(param_2,*(undefined4 *)(param_2 + 0xc));
            puVar5 = puVar9;
            if (puVar9 == (undefined1 *)0x0) goto switchD_000646e2_caseD_3;
            for (; (uint)((int)puVar5 - (int)puVar9) < *(uint *)(param_2 + 0xc); puVar5 = puVar5 + 1
                ) {
              *puVar5 = 9;
            }
            *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + *(uint *)(param_2 + 0xc);
          }
          iVar6 = format_json_string_with_escaping(piVar11[8],param_2);
          if (iVar6 == 0) goto switchD_000646e2_caseD_3;
          update_string_position_by_length(param_2);
          if (*(int *)(param_2 + 0x14) == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
          puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6);
          if (puVar5 == (undefined1 *)0x0) goto switchD_000646e2_caseD_3;
          *puVar5 = 0x3a;
          if (*(int *)(param_2 + 0x14) != 0) {
            puVar5[1] = 9;
          }
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar6;
          iVar6 = format_json_value_by_type(piVar11,param_2);
          if (iVar6 == 0) goto switchD_000646e2_caseD_3;
          update_string_position_by_length(param_2);
          iVar6 = *(int *)(param_2 + 0x14);
          if (iVar6 != 0) {
            iVar6 = 1;
          }
          if (*piVar11 != 0) {
            iVar6 = iVar6 + 1;
          }
          puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6 + 1);
          if (puVar5 == (undefined1 *)0x0) goto switchD_000646e2_caseD_3;
          puVar9 = puVar5;
          if (*piVar11 != 0) {
            puVar9 = puVar5 + 1;
            *puVar5 = 0x2c;
          }
          puVar5 = puVar9;
          if (*(int *)(param_2 + 0x14) != 0) {
            puVar5 = puVar9 + 1;
            *puVar9 = 10;
          }
          *puVar5 = 0;
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar6;
        }
        if (*(int *)(param_2 + 0x14) == 0) {
          iVar6 = 2;
        }
        else {
          iVar6 = *(int *)(param_2 + 0xc) + 1;
        }
        puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6);
        if (puVar5 != (undefined1 *)0x0) {
          puVar9 = puVar5;
          if (*(int *)(param_2 + 0x14) != 0) {
            for (; (uint)((int)puVar9 - (int)puVar5) < *(int *)(param_2 + 0xc) - 1U;
                puVar9 = puVar9 + 1) {
              *puVar9 = 9;
            }
          }
          *puVar9 = 0x7d;
          puVar9[1] = 0;
LAB_000648d0:
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
          goto LAB_00064728;
        }
      }
    }
    else if (uVar10 == 0x80) {
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar6 = calculate_string_length();
        iVar4 = resize_dynamic_buffer(param_2,iVar6 + 1);
        if (iVar4 != 0) {
          memcpy(iVar4,*(undefined4 *)(param_1 + 0x10),iVar6 + 1);
          goto LAB_00064728;
        }
      }
    }
    else if (uVar10 == 0x20) {
      piVar11 = *(int **)(param_1 + 8);
      puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,1);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0x5b;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        for (; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11) {
          iVar6 = format_json_value_by_type(piVar11,param_2);
          if (iVar6 == 0) goto switchD_000646e2_caseD_3;
          update_string_position_by_length(param_2);
          if (*piVar11 != 0) {
            if (*(int *)(param_2 + 0x14) == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = 2;
            }
            puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6 + 1);
            if (puVar5 == (undefined1 *)0x0) goto switchD_000646e2_caseD_3;
            *puVar5 = 0x2c;
            if (*(int *)(param_2 + 0x14) == 0) {
              puVar9 = puVar5 + 1;
            }
            else {
              puVar9 = puVar5 + 2;
              puVar5[1] = bVar1;
            }
            *puVar9 = 0;
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar6;
          }
        }
        puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,2);
        if (puVar5 != (undefined1 *)0x0) {
          puVar5[1] = 0;
          *puVar5 = 0x5d;
          goto LAB_000648d0;
        }
      }
    }
    goto switchD_000646e2_caseD_3;
  }
  switch(uVar10) {
  case 1:
    local_44._0_1_ = 'f';
    local_44._1_1_ = 'a';
    local_44._2_1_ = 'l';
    local_44._3_1_ = 's';
    local_40[0] = 'e';
    local_40[1] = '\0';
    iVar6 = resize_dynamic_buffer(param_2,6);
    if (iVar6 != 0) {
      safe_string_copy_with_padding(iVar6,&local_44,*(int *)(param_2 + 4) - *(int *)(param_2 + 8));
      return uVar10;
    }
  default:
switchD_000646e2_caseD_3:
    uVar10 = 0;
    break;
  case 2:
    pcVar8 = "true";
    goto LAB_00064706;
  case 4:
    pcVar8 = "null";
LAB_00064706:
    local_44 = *(undefined4 *)pcVar8;
    local_40[0] = pcVar8[4];
    uVar10 = resize_dynamic_buffer(param_2,5);
    if (uVar10 != 0) {
      safe_string_copy_with_padding(uVar10,&local_44,*(int *)(param_2 + 4) - *(int *)(param_2 + 8));
LAB_00064728:
      uVar10 = 1;
    }
    break;
  case 8:
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    uVar10 = *(uint *)(param_1 + 0x1c);
    local_44 = 0;
    fill_memory_buffer(local_40,0,0x16);
    local_50 = 0;
    uStack_4c = 0;
    iVar6 = check_float_nan(uVar13,uVar10,uVar13,uVar10);
    if (iVar6 == 0) {
      uVar15 = uVar10 & 0x7fffffff;
      iVar6 = check_float_nan(uVar13,uVar15,0xffffffff,0x7fefffff);
      if ((iVar6 == 0) &&
         (iVar6 = float_compare_boolean_or(uVar13,uVar15,0xffffffff,0x7fefffff), iVar6 == 0))
      goto LAB_000647a8;
      uVar14 = uVar13;
      uVar18 = uVar10;
      iVar6 = process_string_with_error_handling_and_validation(&local_44,0x1a,"%1.15g");
      iVar4 = process_string_with_length_calculation_and_validation(&local_44,"%lg",&local_50);
      uVar3 = uStack_4c;
      uVar2 = local_50;
      if (iVar4 == 1) {
        uVar12 = uStack_4c & 0x7fffffff;
        iVar4 = float_compare_boolean_inverted(uVar13,uVar15,local_50,uVar12,uVar14,uVar18);
        uVar14 = uVar13;
        if (iVar4 != 0) {
          uVar14 = uVar2;
          uVar15 = uVar12;
        }
        uVar16 = float_add_64bit(uVar2,uVar3,uVar13,uVar10);
        uVar17 = float_multiply_64bit_alt(uVar14,uVar15,0,0x3cb00000);
        iVar4 = float_compare_boolean_or
                          ((int)uVar16,(uint)((ulonglong)uVar16 >> 0x20) & 0x7fffffff,(int)uVar17,
                           (int)((ulonglong)uVar17 >> 0x20));
        if (iVar4 == 0) goto LAB_00064840;
      }
      else {
LAB_00064840:
        iVar6 = process_string_with_error_handling_and_validation(&local_44,0x1a,"%1.17g");
      }
      if (0x19 < iVar6) goto switchD_000646e2_caseD_3;
    }
    else {
LAB_000647a8:
      strcpy_safe(&local_44,&DAT_000f6977);
      iVar6 = 4;
    }
    puVar5 = (undefined1 *)resize_dynamic_buffer(param_2,iVar6 + 1);
    if (puVar5 == (undefined1 *)0x0) goto switchD_000646e2_caseD_3;
    puVar7 = &local_44;
    for (puVar9 = puVar5; puVar5 + iVar6 != puVar9; puVar9 = puVar9 + 1) {
      *puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar5[iVar6] = 0;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar6;
    goto LAB_00064728;
  }
  return uVar10;
}


