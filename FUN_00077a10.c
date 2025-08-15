/*
 * Function: FUN_00077a10
 * Entry:    00077a10
 * Prototype: undefined FUN_00077a10()
 */


uint FUN_00077a10(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  ulonglong uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined8 uVar29;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int iStack_74;
  byte *local_70;
  undefined4 local_64;
  byte *local_3c;
  int local_38;
  int local_34;
  uint local_30 [3];
  
  puVar3 = DAT_20002d20;
  local_38 = 0;
  uVar21 = 0;
  iVar4 = calculate_string_length(&LAB_000aa08e_1);
  for (pbVar9 = param_1; bVar1 = *pbVar9, bVar1 != 0x2b; pbVar9 = pbVar9 + 1) {
    if (0x2b < bVar1) {
      if (bVar1 == 0x2d) {
        local_64 = 1;
        goto LAB_00013fea;
      }
LAB_00013f96:
      local_64 = 0;
      local_3c = pbVar9;
      goto LAB_00013f9a;
    }
    if (bVar1 < 0xe) {
      if (bVar1 < 9) {
        if (bVar1 != 0) goto LAB_00013f96;
        goto LAB_00013ff6;
      }
    }
    else if (bVar1 != 0x20) goto LAB_00013f96;
  }
  local_64 = 0;
LAB_00013fea:
  local_3c = pbVar9 + 1;
  if (pbVar9[1] == 0) goto LAB_00013ff6;
LAB_00013f9a:
  pbVar9 = local_3c;
  if (*local_3c == 0x30) {
    if ((local_3c[1] & 0xdf) == 0x58) {
      uVar5 = format_float_with_precision_and_rounding
                        (puVar3,&local_3c,&DAT_00098754,&local_34,&local_38,local_64,&DAT_20002d84);
      uVar5 = uVar5 & 7;
      if (uVar5 != 0) {
        if (uVar5 == 6) {
          if (param_2 == (undefined4 *)0x0) {
            return 0;
          }
          *param_2 = pbVar9 + 1;
          return 0;
        }
        if (local_38 != 0) {
          round_float_value(local_30,0x35);
          cleanup_float_context_with_memory_management(puVar3,local_38);
        }
        switch(uVar5) {
        case 1:
        case 5:
          uVar21 = local_30[0];
          break;
        case 2:
          uVar21 = local_30[0];
          break;
        case 3:
          break;
        case 4:
          uVar21 = 0xffffffff;
        }
      }
      goto LAB_00014036;
    }
    do {
      pbVar10 = local_3c + 1;
      pbVar9 = local_3c + 1;
      local_3c = pbVar10;
    } while (*pbVar9 == 0x30);
    if (*pbVar9 == 0) goto LAB_00014036;
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  iVar19 = 0;
  local_84 = 0;
  local_80 = 0;
  local_70 = local_3c;
  while( true ) {
    uVar5 = (uint)*local_3c;
    uVar11 = uVar5 - 0x30;
    if (9 < (uVar11 & 0xff)) break;
    local_3c = local_3c + 1;
    if (local_84 < 9) {
      local_80 = local_80 * 10 + uVar11;
    }
    else {
      iVar19 = iVar19 * 10 + uVar11;
    }
    local_84 = local_84 + 1;
  }
  iVar6 = compare_string_offsets(local_3c,&LAB_000aa08e_1,iVar4);
  iVar16 = local_84;
  if (iVar6 == 0) {
    uVar5 = (uint)local_3c[iVar4];
    if (local_84 != 0) {
      iVar7 = 0;
      iVar6 = 0;
      local_3c = local_3c + iVar4;
      goto LAB_00014126;
    }
    iVar15 = 0;
    local_3c = local_3c + iVar4;
    while (uVar5 == 0x30) {
      iVar15 = iVar15 + 1;
      uVar5 = (uint)local_3c[1];
      local_3c = local_3c + 1;
    }
    if (uVar5 - 0x31 < 9) {
      iVar7 = 0;
      iVar16 = 0;
      local_70 = local_3c;
      do {
        iVar6 = uVar5 - 0x30;
        iVar4 = iVar7 + 1;
        if (iVar6 != 0) {
          iVar15 = iVar15 + iVar7 + 1;
          iVar4 = iVar16;
          while (iVar4 != iVar7 + iVar16) {
            iVar12 = iVar4 + 1;
            if (iVar4 < 9) {
              local_80 = local_80 * 10;
              iVar4 = iVar12;
            }
            else {
              iVar4 = iVar12;
              if (iVar12 < 0x11) {
                iVar19 = iVar19 * 10;
              }
            }
          }
          iVar4 = iVar16 + iVar7;
          iVar16 = iVar16 + 1 + iVar7;
          if (iVar4 < 9) {
            local_80 = local_80 * 10 + iVar6;
          }
          else if (iVar4 < 0x10) {
            iVar19 = iVar19 * 10 + iVar6;
          }
          iVar4 = 0;
        }
        iVar7 = iVar4;
        uVar5 = (uint)local_3c[1];
        iVar6 = iVar15;
        local_3c = local_3c + 1;
LAB_00014126:
        iVar15 = iVar6;
      } while (uVar5 - 0x30 < 10);
      bVar23 = true;
      iVar15 = iVar7;
      goto LAB_000140c0;
    }
    if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
      iVar6 = 0;
      bVar23 = true;
LAB_000140ca:
      if (!bVar22 && iVar15 == 0) goto LAB_00013ff6;
      iVar16 = 0;
      goto LAB_000140d2;
    }
    bVar23 = true;
LAB_0001422c:
    if (iVar15 != 0 || bVar22) goto LAB_00014036;
    if (bVar23) goto LAB_00013ff6;
    if (uVar5 != 0x69) {
      if (uVar5 < 0x6a) {
        if (uVar5 == 0x49) goto LAB_00014292;
        bVar22 = uVar5 == 0x4e;
      }
      else {
        bVar22 = uVar5 == 0x6e;
      }
      if ((!bVar22) || (iVar4 = calculate_format_width(&local_3c,&DAT_000bba18), iVar4 == 0)) {
LAB_00013ff6:
        if (param_2 == (undefined4 *)0x0) {
          return 0;
        }
        *param_2 = param_1;
        return 0;
      }
      if ((*local_3c != 0x28) ||
         (iVar4 = format_numeric_value(&local_3c,&DAT_00098740,local_30), uVar21 = local_30[0],
         iVar4 != 5)) {
        uVar21 = get_system_parameter(&LAB_000a8ea0);
      }
      goto LAB_00014036;
    }
LAB_00014292:
    iVar4 = calculate_format_width(&local_3c,"nf");
    if (iVar4 == 0) goto LAB_00013ff6;
    local_3c = local_3c + -1;
    iVar4 = calculate_format_width(&local_3c,"inity");
    if (iVar4 == 0) {
      local_3c = local_3c + 1;
    }
  }
  else {
    iVar6 = 0;
    bVar23 = false;
    iVar15 = 0;
LAB_000140c0:
    if ((uVar5 == 0x65) || (pbVar9 = local_3c, uVar5 == 0x45)) {
      if (iVar16 == 0) goto LAB_000140ca;
LAB_000140d2:
      param_1 = local_3c;
      uVar5 = (uint)local_3c[1];
      if (uVar5 == 0x2b) {
        bVar2 = false;
LAB_000141c0:
        uVar5 = (uint)local_3c[2];
        local_3c = local_3c + 2;
      }
      else {
        if (uVar5 == 0x2d) {
          bVar2 = true;
          goto LAB_000141c0;
        }
        bVar2 = false;
        local_3c = local_3c + 1;
      }
      pbVar9 = param_1;
      if (9 < uVar5 - 0x30) goto LAB_000140f0;
      while (pbVar9 = local_3c, uVar5 == 0x30) {
        uVar5 = (uint)local_3c[1];
        local_3c = local_3c + 1;
      }
      if (8 < uVar5 - 0x31) goto LAB_000140f0;
      while( true ) {
        local_7c = uVar5 - 0x30;
        pbVar10 = local_3c + 1;
        uVar5 = (uint)local_3c[1];
        local_3c = pbVar10;
        if (9 < uVar5 - 0x30) break;
        uVar5 = local_7c * 10 + uVar5;
      }
      iVar4 = 19999;
      if (((int)pbVar10 - (int)pbVar9 < 9) && (local_7c < 20000)) {
        iVar4 = local_7c;
      }
      if (bVar2) {
        iVar4 = -iVar4;
      }
    }
    else {
LAB_000140f0:
      local_3c = pbVar9;
      iVar4 = 0;
    }
    if (iVar16 == 0) goto LAB_0001422c;
    uVar5 = iVar4 - iVar6;
    if (local_84 == 0) {
      local_84 = iVar16;
    }
    iVar15 = iVar16;
    if (0xf < iVar16) {
      iVar15 = 0x10;
    }
    uVar25 = int_to_float_64bit(local_80);
    if (iVar16 < 10) {
LAB_000142f2:
      uVar24 = (undefined4)(uVar25 >> 0x20);
      uVar21 = (uint)uVar25;
      if (uVar5 == 0) goto LAB_00014036;
      if ((int)uVar5 < 1) {
        if ((int)(uVar5 + 0x16) < 0 == SCARRY4(uVar5,0x16)) {
          uVar21 = float_multiply_64bit
                             (uVar21,uVar24,(&DAT_00088908)[(iVar6 - iVar4) * 2],
                              (&DAT_0008890c)[(iVar6 - iVar4) * 2]);
          goto LAB_00014036;
        }
        goto LAB_00014346;
      }
      if ((int)uVar5 < 0x17) {
        uVar26 = *(undefined8 *)(&DAT_00088908 + uVar5 * 2);
      }
      else {
        if (0x25 - iVar16 < (int)uVar5) {
          uVar21 = (iVar16 - iVar15) + uVar5;
          goto LAB_0001439c;
        }
        iVar16 = 0xf - iVar16;
        uVar26 = float_multiply_64bit_alt
                           ((&DAT_00088908)[iVar16 * 2],(&DAT_0008890c)[iVar16 * 2],uVar21,uVar24);
        uVar25 = *(ulonglong *)(&DAT_00088908 + (uVar5 - iVar16) * 2);
      }
      uVar21 = float_multiply_64bit_alt
                         ((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                          (int)(uVar25 >> 0x20));
      goto LAB_00014036;
    }
    uVar26 = float_multiply_64bit_alt
                       ((int)uVar25,(int)(uVar25 >> 0x20),
                        *(undefined4 *)(&UNK_000888c0 + iVar15 * 8),
                        *(undefined4 *)(&UNK_000888c4 + iVar15 * 8));
    uVar29 = int_to_float_64bit(iVar19);
    uVar25 = float_add_64bit_alt((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar29,
                                 (int)((ulonglong)uVar29 >> 0x20));
    if (iVar16 < 0x10) goto LAB_000142f2;
LAB_00014346:
    uVar21 = (iVar16 - iVar15) + uVar5;
    if ((int)uVar21 < 1) {
      if (uVar21 == 0) {
LAB_00014498:
        local_88 = 0;
      }
      else {
        uVar11 = -uVar21 & 0xf;
        if (uVar11 != 0) {
          uVar25 = float_multiply_64bit
                             ((int)uVar25,(int)(uVar25 >> 0x20),(&DAT_00088908)[uVar11 * 2],
                              (&DAT_0008890c)[uVar11 * 2]);
        }
        uVar21 = (int)-uVar21 >> 4;
        if (uVar21 == 0) goto LAB_00014498;
        if (0x1f < (int)uVar21) {
LAB_0001437e:
          *puVar3 = 0x22;
          uVar21 = 0;
          goto LAB_00014036;
        }
        local_88 = uVar21 & 0x10;
        puVar20 = &DAT_000888b8;
        if (local_88 != 0) {
          local_88 = 0x6a;
        }
        bVar22 = false;
        uVar27 = uVar25;
        do {
          if ((int)(uVar21 << 0x1f) < 0) {
            uVar27 = float_multiply_64bit_alt((int)uVar27,(int)(uVar27 >> 0x20),*puVar20,puVar20[1])
            ;
            bVar22 = true;
          }
          uVar21 = (int)uVar21 >> 1;
          puVar20 = puVar20 + 2;
        } while (uVar21 != 0);
        if (bVar22) {
          uVar25 = uVar27;
        }
        uVar21 = (uint)(uVar25 >> 0x20);
        if (local_88 != 0) {
          uVar11 = (uVar21 << 1) >> 0x15;
          iVar19 = -uVar11;
          uVar14 = iVar19 + 0x6b;
          if (0 < (int)uVar14) {
            if ((int)uVar14 < 0x20) {
              uVar25 = CONCAT44(uVar21,-1 << (uVar14 & 0xff) & (uint)uVar25);
            }
            else {
              bVar23 = SBORROW4(uVar14,0x34);
              bVar22 = uVar14 == 0x34;
              if ((int)uVar14 < 0x35) {
                uVar14 = 0xffffffff;
              }
              if (bVar22 || iVar19 + 0x37 < 0 != bVar23) {
                uVar25 = (ulonglong)(uVar14 << (0x4b - uVar11 & 0xff) & uVar21) << 0x20;
              }
              else {
                uVar25 = 0x370000000000000;
              }
            }
          }
          local_88 = 0x6a;
        }
        iVar19 = float_compare_boolean((int)uVar25,(int)(uVar25 >> 0x20),0,0);
        if (iVar19 != 0) goto LAB_0001437e;
      }
      iVar19 = calculate_float_power_with_memory_management
                         (puVar3,local_70,local_84,iVar16,local_80);
      if (iVar19 != 0) {
        iVar6 = iVar6 - iVar4;
        if (-1 < (int)uVar5) {
          iVar6 = 0;
        }
        uVar11 = uVar5 & ~((int)uVar5 >> 0x1f);
        local_7c = 0;
        local_84 = 0;
        while( true ) {
          uVar14 = (uint)(uVar25 >> 0x20);
          uVar21 = (uint)uVar25;
          local_80 = manage_float_context_with_memory_allocation(puVar3,*(undefined4 *)(iVar19 + 4))
          ;
          if (local_80 == 0) break;
          memcpy(local_80 + 0xc,iVar19 + 0xc,(*(int *)(iVar19 + 0x10) + 2) * 4);
          local_38 = convert_float_with_special_case_handling(uVar21,puVar3,&local_34,local_30);
          if (local_38 == 0) break;
          local_84 = initialize_float_context_simple(puVar3,1);
          if (local_84 == 0) {
LAB_000145b8:
            local_84 = 0;
            break;
          }
          if (local_34 < 0) {
            uVar18 = uVar11 - local_34;
            iVar4 = iVar6;
          }
          else {
            iVar4 = local_34 + iVar6;
            uVar18 = uVar11;
          }
          iVar16 = 0x36 - local_30[0];
          iVar15 = (local_34 - local_88) + local_30[0] + -1;
          if (iVar15 < -0x3fe) {
            iVar7 = -iVar15;
            uVar13 = iVar7 - 0x3fe;
            uVar17 = 1;
            iVar16 = iVar16 - uVar13;
            if (0x1f < (int)uVar13) {
              iVar15 = -0x1000000 - iVar15;
            }
            if (uVar13 == 0x1f || iVar7 + -0x41d < 0 != SBORROW4(uVar13,0x1f)) {
              uVar17 = 1 << (uVar13 & 0xff);
              uVar13 = 0;
            }
            else {
              uVar13 = 1 << (iVar15 + 0xfffbe2U & 0xff);
            }
          }
          else {
            uVar13 = 0;
            uVar17 = 1;
          }
          iVar15 = iVar4 + iVar16;
          iVar16 = uVar18 + iVar16 + local_88;
          iVar7 = iVar4;
          if (iVar15 <= iVar4) {
            iVar7 = iVar15;
          }
          if (iVar16 <= iVar7) {
            iVar7 = iVar16;
          }
          if (0 < iVar7) {
            iVar15 = iVar15 - iVar7;
            iVar16 = iVar16 - iVar7;
            iVar4 = iVar4 - iVar7;
          }
          if (0 < iVar6) {
            local_84 = calculate_float_power_optimized_with_memory_management(puVar3,local_84,iVar6)
            ;
            if (local_84 == 0) goto LAB_000145b8;
            iVar7 = multiply_float_complex_with_memory_management(puVar3,local_84,local_38);
            if (iVar7 == 0) break;
            cleanup_float_context_with_memory_management(puVar3,local_38);
            local_38 = iVar7;
          }
          if ((0 < iVar15) &&
             (local_38 = shift_float_left_with_memory_management(puVar3,local_38,iVar15),
             local_38 == 0)) break;
          if (((0 < (int)uVar5) &&
              (local_80 = calculate_float_power_optimized_with_memory_management
                                    (puVar3,local_80,uVar11), local_80 == 0)) ||
             ((0 < iVar16 &&
              (local_80 = shift_float_left_with_memory_management(puVar3,local_80,iVar16),
              local_80 == 0)))) {
            local_80 = 0;
            break;
          }
          if (((0 < iVar4) &&
              (local_84 = shift_float_left_with_memory_management(puVar3,local_84,iVar4),
              local_84 == 0)) ||
             (local_7c = subtract_float_with_memory_management(puVar3,local_38,local_80),
             local_7c == 0)) break;
          iVar16 = *(int *)(local_7c + 0xc);
          *(undefined4 *)(local_7c + 0xc) = 0;
          iVar4 = format_float_exponent(local_7c,local_84);
          if (iVar4 < 0) {
            if (((iVar16 == 0 && uVar21 == 0) && ((uVar25 & 0xfffff00000000) == 0)) &&
               ((0x6b00000 < (uVar14 & 0x7ff00000) &&
                ((*(int *)(local_7c + 0x14) != 0 || (1 < *(int *)(local_7c + 0x10))))))) {
              local_7c = shift_float_left_with_memory_management(puVar3,local_7c,1);
              iVar4 = format_float_exponent(local_7c,local_84);
              if (iVar4 < 1) goto LAB_00014886;
LAB_00014750:
              uVar14 = uVar14 & 0x7ff00000;
              if (local_88 == 0) {
                uVar21 = 0xffffffff;
                goto LAB_0001441e;
              }
              if (uVar14 < 0x6b00001) {
                if (uVar14 < 0x3700001) goto LAB_0001476a;
              }
              else {
                uVar25 = CONCAT44(~(~(uVar14 - 0x100000 >> 0x14) << 0x14),0xffffffff);
              }
            }
            else {
LAB_00014886:
              uVar21 = (uint)uVar25;
              if (local_88 == 0) goto LAB_0001441e;
            }
LAB_000147f8:
            lVar28 = float_multiply_64bit_alt((int)uVar25,(int)(uVar25 >> 0x20),0,0x39500000);
            uVar21 = (uint)lVar28;
            if (lVar28 == 0) {
LAB_00014772:
              *puVar3 = 0x22;
            }
            goto LAB_0001441e;
          }
          if (iVar4 == 0) {
            if (iVar16 == 0) {
              if ((uVar25 & 0xfffff00000000) == 0) {
                if (uVar21 == 0) goto LAB_00014750;
                if (uVar13 != 0) goto LAB_0001483a;
                bVar22 = (uVar21 & uVar17) == 0;
              }
              else if (uVar13 == 0) {
                bVar22 = (uVar17 & uVar21) == 0;
              }
              else {
LAB_0001483a:
                bVar22 = (uVar13 & uVar14) == 0;
              }
              if (bVar22) goto LAB_00014886;
              uVar24 = process_buffer_overflow(uVar21,uVar14,local_88);
              uVar25 = float_add_64bit(uVar21,uVar14,uVar24,extraout_s1_00);
              iVar4 = float_compare_boolean((int)uVar25,(int)(uVar25 >> 0x20),0,0);
              if (iVar4 == 0) goto LAB_00014886;
LAB_0001476a:
              uVar21 = 0;
              goto LAB_00014772;
            }
            if ((uVar14 & 0xfffff) == 0xfffff) {
              if (local_88 != 0) {
                uVar5 = uVar14 & 0x7ff00000;
                if (uVar5 < 0x6a00001) {
                  if (uVar21 != -1 << (0x6b - (uVar5 >> 0x14) & 0xff)) goto LAB_00014822;
                }
                else {
                  if (uVar21 != 0xffffffff) {
LAB_00014822:
                    if (uVar13 == 0) {
                      uVar13 = uVar21 & uVar17;
                    }
                    else {
                      uVar13 = uVar13 & uVar14;
                    }
                    if (uVar13 == 0) goto LAB_000147f8;
                    goto LAB_0001486c;
                  }
                  if (uVar14 == 0x7fefffff) break;
                }
                uVar25 = (ulonglong)(uVar5 + 0x100000) << 0x20;
                goto LAB_000147f8;
              }
              if (uVar21 == 0xffffffff) {
                if (uVar14 != 0x7fefffff) {
                  uVar21 = 0;
                  goto LAB_0001441e;
                }
                break;
              }
              if (uVar13 == 0) {
                uVar13 = uVar21 & uVar17;
              }
              else {
                uVar13 = uVar13 & uVar14;
              }
              if (uVar13 == 0) goto LAB_0001441e;
            }
            else {
              if (uVar13 == 0) {
                uVar13 = uVar17 & uVar21;
              }
              else {
                uVar13 = uVar13 & uVar14;
              }
              if (uVar13 == 0) goto LAB_00014886;
            }
LAB_0001486c:
            uVar24 = process_buffer_overflow(uVar21,uVar14,local_88);
            uVar25 = float_add_64bit_alt(uVar21,uVar14,uVar24,extraout_s1);
            goto LAB_00014886;
          }
          uVar24 = process_float_mantissa(local_7c,local_84);
          iVar4 = float_compare_boolean_or(uVar24,extraout_s1_01,0,0x40000000);
          if (iVar4 == 0) {
            uVar26 = float_multiply_64bit_alt(uVar24,extraout_s1_01,0,0x3fe00000);
            iStack_74 = (int)((ulonglong)uVar26 >> 0x20);
            if (iVar16 == 0) {
LAB_0001493a:
              iStack_74 = (int)((ulonglong)uVar26 >> 0x20) + -0x80000000;
            }
          }
          else if (iVar16 == 0) {
            if (uVar21 == 0) {
              if ((uVar25 & 0xfffff00000000) == 0) {
                iVar4 = float_compare_boolean_inverted(uVar24,extraout_s1_01,0,0x3ff00000);
                if (iVar4 == 0) {
                  uVar26 = float_multiply_64bit_alt(uVar24,extraout_s1_01,0,0x3fe00000);
                }
                else {
                  uVar26 = 0x3fe0000000000000;
                }
                goto LAB_0001493a;
              }
            }
            else if (uVar25 == 1) goto LAB_0001476a;
            uVar26 = 0x3ff0000000000000;
            iStack_74 = -0x40100000;
          }
          else {
            uVar26 = 0x3ff0000000000000;
            iStack_74 = 0x3ff00000;
          }
          iVar4 = (int)((ulonglong)uVar26 >> 0x20);
          local_78 = (undefined4)uVar26;
          uVar29 = CONCAT44(iStack_74,local_78);
          uVar18 = uVar14 & 0x7ff00000;
          if (uVar18 == 0x7fe00000) {
            uVar24 = normalize_float_value_with_exponent_handling(uVar21);
            uVar29 = float_multiply_64bit_alt(uVar24,extraout_s1_02,local_78,iStack_74);
            uVar29 = float_add_64bit_alt((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uVar21,
                                         uVar14 + 0xfcb00000);
            uVar21 = (uint)((ulonglong)uVar29 >> 0x20);
            if ((uVar21 & 0x7ff00000) < 0x7ca00000) {
              uVar25 = CONCAT44(uVar21 + 0x3500000,(int)uVar29);
              goto LAB_00014a44;
            }
            if (uVar25 == 0x7fefffffffffffff) break;
            uVar25 = 0x7fefffffffffffff;
          }
          else {
            if ((local_88 != 0) && (uVar18 < 0x6a00001)) {
              iVar15 = float_compare_boolean_or(local_78,iVar4,0xffc00000,0x41dfffff);
              if (iVar15 != 0) {
                iVar4 = float_to_int_conversion(local_78,iVar4);
                if (iVar4 == 0) {
                  iVar4 = 1;
                }
                uVar29 = int_to_float_64bit(iVar4);
                iVar4 = (int)((ulonglong)uVar29 >> 0x20);
                if (iVar16 == 0) {
                  uVar29 = CONCAT44(iVar4 + -0x80000000,(int)uVar29);
                }
              }
              uVar26 = CONCAT44(iVar4,(int)uVar29);
              iStack_74 = ((int)((ulonglong)uVar29 >> 0x20) + 0x6b00000) - uVar18;
            }
            uVar24 = normalize_float_value_with_exponent_handling(uVar21);
            uVar29 = float_multiply_64bit_alt((int)uVar26,iStack_74,uVar24,extraout_s1_03);
            uVar25 = float_add_64bit_alt((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uVar21,uVar14)
            ;
LAB_00014a44:
            uVar21 = (uint)uVar25;
            uVar24 = (undefined4)((ulonglong)uVar26 >> 0x20);
            if ((local_88 == 0) && (uVar18 == ((uint)(uVar25 >> 0x20) & 0x7ff00000))) {
              calculate_signed_math_result((int)uVar26,uVar24);
              uVar29 = float_divide_64bit();
              uVar26 = float_add_64bit((int)uVar26,uVar24,(int)uVar29,
                                       (int)((ulonglong)uVar29 >> 0x20));
              uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
              uVar24 = (undefined4)uVar26;
              if (((uVar25 & 0xfffff00000000) == 0 && uVar21 == 0) && iVar16 == 0) {
                iVar4 = float_compare_boolean_inverted(uVar24,uVar8,0x94a03595,0x3fcfffff);
              }
              else {
                iVar4 = float_compare_boolean_inverted(uVar24,uVar8,0x94a03595,0x3fdfffff);
                if (iVar4 != 0) goto LAB_0001441e;
                iVar4 = float_compare_boolean_inverted_swapped(uVar24,uVar8,0x35afe535,0x3fe00000);
              }
              if (iVar4 != 0) goto LAB_0001441e;
            }
          }
          cleanup_float_context_with_memory_management(puVar3,local_38);
          cleanup_float_context_with_memory_management(puVar3,local_80);
          cleanup_float_context_with_memory_management(puVar3,local_84);
          cleanup_float_context_with_memory_management(puVar3,local_7c);
        }
        uVar21 = 0;
        *puVar3 = 0x22;
LAB_0001441e:
        cleanup_float_context_with_memory_management(puVar3,local_38);
        cleanup_float_context_with_memory_management(puVar3,local_80);
        cleanup_float_context_with_memory_management(puVar3,local_84);
        cleanup_float_context_with_memory_management(puVar3,iVar19);
        cleanup_float_context_with_memory_management(puVar3,local_7c);
        goto LAB_00014036;
      }
    }
    else {
LAB_0001439c:
      uVar11 = uVar21 & 0xf;
      if (uVar11 != 0) {
        uVar25 = float_multiply_64bit_alt
                           ((&DAT_00088908)[uVar11 * 2],(&DAT_0008890c)[uVar11 * 2],(int)uVar25,
                            (int)(uVar25 >> 0x20));
      }
      if ((uVar21 & 0xfffffff0) == 0) goto LAB_00014498;
      if ((int)(uVar21 & 0xfffffff0) < 0x135) {
        bVar22 = false;
        iVar19 = (int)uVar21 >> 4;
        puVar20 = &DAT_000888e0;
        local_88 = 0;
        uVar27 = uVar25;
        while( true ) {
          if (iVar19 < 2) break;
          if (iVar19 << 0x1f < 0) {
            uVar27 = float_multiply_64bit_alt((int)uVar27,(int)(uVar27 >> 0x20),*puVar20,puVar20[1])
            ;
            bVar22 = true;
          }
          iVar19 = iVar19 >> 1;
          puVar20 = puVar20 + 2;
          local_88 = local_88 + 1;
        }
        if (bVar22) {
          uVar25 = uVar27;
        }
        uVar26 = float_multiply_64bit_alt
                           ((&DAT_000888e0)[local_88 * 2],(&DAT_000888e4)[local_88 * 2],(int)uVar25,
                            (int)(uVar25 >> 0x20) + -0x3500000);
        uVar21 = (uint)((ulonglong)uVar26 >> 0x20);
        uVar11 = uVar21 & 0x7ff00000;
        if (uVar11 < 0x7ca00001) {
          if (uVar11 < 0x7c900001) {
            uVar25 = CONCAT44(uVar21 + 0x3500000,(int)uVar26);
          }
          else {
            uVar25 = 0x7fefffffffffffff;
          }
          goto LAB_00014498;
        }
      }
    }
    *puVar3 = 0x22;
  }
  uVar21 = 0;
LAB_00014036:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_3c;
  }
  return uVar21;
}


