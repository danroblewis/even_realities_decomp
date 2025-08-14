/*
 * Function: FUN_000113a8
 * Entry:    000113a8
 * Prototype: undefined FUN_000113a8()
 */


byte * FUN_000113a8(code *param_1,undefined4 param_2,byte *param_3,uint *param_4)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  char cVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  undefined4 uVar21;
  byte *pbVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 *puVar25;
  byte *pbVar26;
  int iVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  bool bVar31;
  undefined8 uVar32;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  byte *local_60;
  uint local_5c;
  undefined2 local_58;
  undefined2 local_56;
  byte *local_54;
  byte *local_50;
  byte local_44 [25];
  byte abStack_2b [7];
  
  pbVar26 = (byte *)0x0;
  do {
    bVar9 = *param_3;
    if (bVar9 == 0) {
      return pbVar26;
    }
    local_88 = param_3 + 1;
    if (bVar9 != 0x25) {
LAB_000113cc:
      pbVar10 = (byte *)(*param_1)(bVar9,param_2);
      if ((int)pbVar10 < 0) {
        return pbVar10;
      }
      pbVar26 = pbVar26 + 1;
      goto switchD_0001194e_caseD_59;
    }
    fill_memory_buffer(&local_60,0,0x18);
    if (param_3[1] == 0x25) {
      local_88 = param_3 + 2;
      local_56 = CONCAT11(0x25,(byte)local_56);
    }
    else {
      bVar31 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      pbVar10 = param_3 + 1;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar15 = pbVar10 + 1;
              bVar9 = *pbVar10;
              if (bVar9 != 0x2b) break;
              bVar4 = true;
              pbVar10 = pbVar15;
            }
            if (0x2b < bVar9) break;
            if (bVar9 == 0x20) {
              bVar3 = true;
              pbVar10 = pbVar15;
            }
            else {
              if (bVar9 != 0x23) goto LAB_00011412;
              bVar2 = true;
              pbVar10 = pbVar15;
            }
          }
          if (bVar9 != 0x2d) break;
          bVar5 = true;
          pbVar10 = pbVar15;
        }
        if (bVar9 != 0x30) break;
        bVar31 = true;
        pbVar10 = pbVar15;
      }
LAB_00011412:
      if (bVar31) {
        local_58 = local_58 | 0x40;
      }
      if (bVar2) {
        local_58 = local_58 | 0x20;
      }
      if (bVar3) {
        local_58 = local_58 | 0x10;
      }
      if (bVar4) {
        local_58 = local_58 | 8;
      }
      if (bVar5) {
        local_58 = local_58 | 4;
      }
      if (((byte)local_58 & 0x44) == 0x44) {
        local_58 = local_58 & 0xffbf;
      }
      local_68 = CONCAT44(local_68._4_4_,pbVar10);
      uVar8 = local_58._1_1_;
      local_58 = local_58 | 0x80;
      if (bVar9 == 0x2a) {
        local_58 = CONCAT11(uVar8,(byte)local_58) | 0x100;
        pbVar15 = pbVar10 + 1;
      }
      else {
        pbVar29 = (byte *)FUN_0004bb64(&local_68);
        pbVar15 = (byte *)local_68;
        if ((byte *)local_68 != pbVar10) {
          local_58 = CONCAT11(local_58._1_1_,
                              (byte)local_58 & 0xfd | (byte)(((uint)pbVar29 >> 0x1f) << 1));
          local_54 = pbVar29;
        }
      }
      bVar9 = local_58._1_1_ & 0xfd | (*pbVar15 == 0x2e) << 1;
      local_58._1_1_ = bVar9;
      if (*pbVar15 == 0x2e) {
        local_68 = CONCAT44(local_68._4_4_,pbVar15 + 1);
        if (pbVar15[1] == 0x2a) {
          local_58._1_1_ = bVar9 | 4;
          pbVar15 = pbVar15 + 2;
        }
        else {
          local_50 = (byte *)FUN_0004bb64(&local_68);
          local_58._0_1_ =
               (byte)local_58 & 0xfd |
               (byte)((((uint)(byte)local_58 << 0x1e | (uint)local_50) >> 0x1f) << 1);
          pbVar15 = (byte *)local_68;
        }
      }
      bVar9 = *pbVar15;
      if (bVar9 == 0x6c) {
        if (pbVar15[1] != 0x6c) {
          cVar14 = '\x03';
          goto LAB_0001163e;
        }
        cVar14 = '\x04';
LAB_00011630:
        local_58._1_1_ = local_58._1_1_ & 0x87 | cVar14 << 3;
        pbVar15 = pbVar15 + 2;
      }
      else {
        if (bVar9 < 0x6d) {
          if (bVar9 == 0x68) {
            if (pbVar15[1] == 0x68) {
              cVar14 = '\x01';
              goto LAB_00011630;
            }
            cVar14 = '\x02';
            goto LAB_0001163e;
          }
          if (bVar9 == 0x6a) {
            cVar14 = '\x05';
            goto LAB_0001163e;
          }
          if (bVar9 != 0x4c) goto LAB_000114ea;
          local_58._0_1_ = (byte)local_58 & 0xfd | 2;
          local_58._1_1_ = local_58._1_1_ & 0x87 | 0x40;
        }
        else {
          if (bVar9 == 0x74) {
            cVar14 = '\a';
          }
          else {
            if (bVar9 != 0x7a) goto LAB_000114ea;
            cVar14 = '\x06';
          }
LAB_0001163e:
          local_58._1_1_ = local_58._1_1_ & 0x87 | cVar14 << 3;
        }
        pbVar15 = pbVar15 + 1;
      }
LAB_000114ea:
      local_88 = pbVar15 + 1;
      bVar9 = *pbVar15;
      uVar17 = (uint)bVar9;
      local_56 = CONCAT11(bVar9,(byte)local_56);
      if (0x78 < uVar17) goto LAB_000116fc;
      if (uVar17 < 0x6e) {
        if (uVar17 < 0x6a) {
          if (0x57 < uVar17) {
            uVar18 = 1 << (uVar17 - 0x58 & 0xff);
            if ((uVar18 & 0xe200) != 0) goto LAB_0001151a;
            if ((uVar18 & 0x801) != 0) {
              uVar18 = local_58._1_1_ & 0x78;
              local_56 = local_56 & 0xfff8 | 2;
              if (uVar18 == 0x40) {
                local_58._0_1_ = (byte)local_58 | 1;
              }
              if (uVar17 == 99) {
                if ((local_58._1_1_ & 0x78) != 0) {
                  uVar18 = 1;
                }
                goto LAB_00011744;
              }
              goto LAB_0001155a;
            }
            if ((uVar18 & 0x21000) != 0) {
              bVar16 = (byte)local_56 & 0xf8 | 1;
              goto LAB_000116ee;
            }
            goto LAB_000116fc;
          }
          if ((uVar17 != 0x41) && (2 < uVar17 - 0x45)) goto LAB_000116fc;
LAB_0001151a:
          bVar9 = ((uVar17 & 0xdf) == 0x41) << 7;
          bVar16 = local_58._1_1_ & 0x7f | bVar9;
          local_56 = local_56 & 0xfff8 | 4;
          if ((int)((uint)bVar16 << 0x18) < 0) {
            uVar18 = 1;
            local_58._1_1_ = bVar16;
            goto LAB_00011744;
          }
          if ((local_58._1_1_ & 0x78) == 0x18) {
            local_58._1_1_ = local_58._1_1_ & 7 | bVar9;
          }
          else {
            bVar9 = local_58._1_1_ & 0x38;
            local_58._1_1_ = bVar16;
            if (bVar9 != 0) goto LAB_000116fc;
          }
        }
        else {
LAB_000116fc:
          local_58._0_1_ = (byte)local_58 | 1;
        }
LAB_0001155a:
        uVar18 = 0;
      }
      else {
        uVar17 = 1 << (uVar17 - 0x6e & 0xff);
        if ((uVar17 & 0x482) != 0) {
          bVar16 = (byte)local_56 & 0xf8 | 2;
LAB_000116ee:
          local_56 = CONCAT11(bVar9,bVar16);
          if ((local_58._1_1_ & 0x78) == 0x40) goto LAB_000116fc;
          goto LAB_0001155a;
        }
        if ((uVar17 & 0x24) == 0) {
          if (-1 < (int)(uVar17 << 0x1f)) goto LAB_000116fc;
          local_56 = local_56 & 0xfff8 | 3;
          uVar18 = (uint)((local_58._1_1_ & 0x78) == 0x40);
        }
        else {
          uVar18 = (uint)((local_58._1_1_ & 0x78) != 0);
          local_56 = local_56 & 0xfff8 | 3;
        }
      }
LAB_00011744:
      local_58 = CONCAT11(local_58._1_1_,
                          (byte)local_58 & 0xfd |
                          (byte)((uVar18 & 1 | ((uint)(byte)local_58 << 0x1e) >> 0x1f) << 1));
    }
    uVar17 = (uint)local_58._1_1_;
    if ((int)(uVar17 << 0x1f) < 0) {
      local_90 = (byte *)*param_4;
      puVar24 = param_4 + 1;
      if ((int)local_90 < 0) {
        local_58 = local_58 | 4;
        local_90 = (byte *)-(int)local_90;
      }
    }
    else {
      puVar24 = param_4;
      local_90 = local_54;
      if (-1 < (char)(byte)local_58) {
        local_90 = (byte *)0xffffffff;
      }
    }
    if ((int)(uVar17 << 0x1d) < 0) {
      puVar23 = puVar24 + 1;
      pbVar10 = (byte *)*puVar24;
      puVar24 = puVar23;
      if ((int)pbVar10 < 0) {
        local_58 = local_58 & 0xfdff;
LAB_000115a8:
        pbVar10 = (byte *)0xffffffff;
      }
    }
    else {
      pbVar10 = local_50;
      if (-1 < (int)(uVar17 << 0x1e)) goto LAB_000115a8;
    }
    uVar7 = local_58;
    local_54 = (byte *)0x0;
    local_50 = (byte *)0x0;
    if ((((byte)local_56 & 7) == 4) && (-1 < (int)((uint)local_58._1_1_ << 0x1e))) {
      if ((short)local_58 < 0) {
        pbVar10 = (byte *)0xd;
      }
      else {
        pbVar10 = (byte *)0x6;
      }
    }
    bVar9 = (byte)local_56 & 7;
    uVar17 = ((uint)local_58._1_1_ << 0x19) >> 0x1c;
    if (bVar9 == 1) {
      switch(uVar17) {
      case 3:
      case 6:
      case 7:
        local_60 = (byte *)*puVar24;
        local_5c = (int)local_60 >> 0x1f;
LAB_0001181a:
        param_4 = puVar24 + 1;
        break;
      case 4:
      case 5:
switchD_000117ce_caseD_4:
        puVar25 = (undefined4 *)((int)puVar24 + 7U & 0xfffffff8);
        param_4 = puVar25 + 2;
        local_60 = (byte *)*puVar25;
        local_5c = puVar25[1];
        break;
      default:
        pbVar15 = (byte *)*puVar24;
        local_5c = (int)pbVar15 >> 0x1f;
        if (uVar17 == 1) {
          local_60._0_1_ = (char)pbVar15;
          local_5c = (int)(char)local_60 >> 0x1f;
          local_60 = (byte *)(int)(char)local_60;
        }
        else {
          local_60 = pbVar15;
          if (uVar17 == 2) {
            local_60 = (byte *)(int)(short)pbVar15;
            local_5c = ((int)pbVar15 << 0x10) >> 0x1f;
          }
        }
        param_4 = puVar24 + 1;
      }
    }
    else if (bVar9 == 2) {
      switch(uVar17) {
      case 3:
      case 6:
      case 7:
        param_4 = puVar24 + 1;
        local_60 = (byte *)*puVar24;
        local_5c = 0;
        break;
      case 4:
      case 5:
        goto switchD_000117ce_caseD_4;
      default:
        local_5c = 0;
        local_60 = (byte *)*puVar24;
        if (uVar17 == 1) {
          local_60 = (byte *)((uint)local_60 & 0xff);
          goto LAB_0001181a;
        }
        local_5c = 0;
        param_4 = puVar24 + 1;
        if (uVar17 == 2) {
          local_60 = (byte *)((uint)local_60 & 0xffff);
          goto LAB_0001185a;
        }
      }
    }
    else if (bVar9 == 4) {
      puVar25 = (undefined4 *)((int)puVar24 + 7U & 0xfffffff8);
      local_60 = (byte *)*puVar25;
      local_5c = puVar25[1];
      param_4 = puVar25 + 2;
    }
    else {
      param_4 = puVar24;
      if (bVar9 == 3) {
        local_60 = (byte *)*puVar24;
LAB_0001185a:
        param_4 = puVar24 + 1;
      }
    }
    pbVar15 = local_60;
    uVar18 = (uint)(byte)local_58;
    if ((local_58 & 3) != 0) {
      pbVar10 = (byte *)FUN_0007e2be(param_1,param_2,param_3,local_88);
      if ((int)pbVar10 < 0) {
        return pbVar10;
      }
      pbVar26 = pbVar26 + (int)pbVar10;
      goto switchD_0001194e_caseD_59;
    }
    uVar30 = (uint)local_56._1_1_;
    if (0x78 < uVar30) goto switchD_0001194e_caseD_59;
    if (uVar30 < 0x58) {
      if (uVar30 == 0x25) {
        bVar9 = 0x25;
        goto LAB_000113cc;
      }
      if ((0x24 < uVar30) && ((uVar30 == 0x41 || (uVar30 - 0x45 < 3))))
      goto switchD_0001194e_caseD_61;
      goto switchD_0001194e_caseD_59;
    }
    switch(uVar30) {
    case 0x58:
    case 0x6f:
    case 0x75:
    case 0x78:
      uVar17 = 0;
      goto LAB_00011aa2;
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
switchD_0001194e_caseD_61:
      if ((int)local_5c < 0) {
        uVar17 = 0x2d;
      }
      else if ((int)(uVar18 << 0x1c) < 0) {
        uVar17 = 0x2b;
      }
      else {
        uVar17 = ((uVar18 << 0x1b) >> 0x1f) << 5;
      }
      uVar11 = (local_5c << 1) >> 0x15;
      uVar19 = local_5c & 0xfffff;
      if (uVar11 == 0) {
        if (local_60 == (byte *)0x0 && uVar19 == 0) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
LAB_000118fc:
        local_6c = uVar19 << 0xb | (uint)local_60 >> 0x15;
        local_70 = (int)local_60 << 0xb;
        if (uVar30 == 0x46) {
          uVar30 = 0x66;
        }
        if ((uVar11 == 0 && local_70 == 0) && (local_6c == 0 && -1 < (int)uVar11)) {
          iVar27 = 0;
        }
        else {
          if (bVar31) {
            while( true ) {
              bVar31 = CARRY4(local_70,local_70);
              local_70 = local_70 * 2;
              local_6c = local_6c * 2 + (uint)bVar31;
              if ((int)local_6c < 0) break;
              uVar11 = uVar11 - 1;
            }
          }
          iVar27 = uVar11 - 0x3fe;
          local_6c = local_6c | 0x80000000;
        }
        bVar31 = false;
        pbVar15 = (byte *)0x0;
        uVar11 = local_70;
        uVar19 = local_6c;
        while (iVar27 + 2 < 0 != SCARRY4(iVar27,2)) {
          do {
            iVar28 = iVar27;
            uVar11 = uVar11 >> 1 | uVar19 << 0x1f;
            uVar19 = uVar19 >> 1;
            iVar27 = iVar28 + 1;
          } while (0x33333332 < uVar19);
          bVar31 = true;
          uVar1 = (ulonglong)uVar11;
          uVar11 = (uint)(uVar1 * 5);
          pbVar15 = pbVar15 + -1;
          uVar19 = (int)(uVar1 * 5 >> 0x20) + uVar19 * 5;
          iVar27 = iVar28 + 2;
        }
        if (bVar31) {
          local_70 = uVar11;
          local_6c = uVar19;
        }
        while (0 < iVar27) {
          bVar31 = 0xfffffffd < local_70;
          local_70 = local_70 + 2;
          local_6c = local_6c + bVar31;
          iVar27 = iVar27 + -1;
          pbVar15 = pbVar15 + 1;
          FUN_0007e260(&local_70);
          do {
            bVar31 = CARRY4(local_70,local_70);
            local_70 = local_70 * 2;
            local_6c = local_6c * 2 + (uint)bVar31;
            iVar27 = iVar27 + -1;
          } while (-1 < (int)local_6c);
        }
        uVar11 = -iVar27 + 4;
        uVar19 = local_6c >> (uVar11 & 0xff);
        uVar11 = local_70 >> (uVar11 & 0xff) | local_6c << (iVar27 + 0x1cU & 0xff) |
                 local_6c >> (-iVar27 - 0x1cU & 0xff);
        if ((uVar30 & 0xdf) == 0x47) {
          if (((int)(pbVar15 + 3) < 0 == SCARRY4((int)pbVar15,3)) && ((int)pbVar15 <= (int)pbVar10))
          {
            pbVar10 = pbVar10 + -(int)pbVar15;
            if ((int)((uint)(byte)local_58 << 0x1a) < 0) {
              local_8c = (byte *)0x0;
            }
            else {
              local_8c = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                local_8c = (byte *)0x1;
              }
            }
            goto LAB_00011caa;
          }
          uVar30 = uVar30 - 2 & 0xff;
          if (((int)pbVar10 < 1) ||
             (pbVar10 = pbVar10 + -1, (int)((uint)(byte)local_58 << 0x1a) < 0)) {
            local_8c = (byte *)0x0;
          }
          else {
            local_8c = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              local_8c = (byte *)0x1;
            }
          }
LAB_00011c54:
          pbVar29 = pbVar10 + 1;
LAB_00011cb4:
          if (0xf < (int)pbVar29) {
            pbVar29 = (byte *)0x10;
          }
        }
        else {
          local_8c = (byte *)0x0;
          if (uVar30 != 0x66) goto LAB_00011c54;
LAB_00011caa:
          pbVar29 = pbVar10 + (int)pbVar15;
          uVar30 = 0x66;
          if (-1 < (int)pbVar29) goto LAB_00011cb4;
          pbVar29 = (byte *)0x0;
        }
        local_68 = 0x800000000000000;
        local_74 = 0x10;
        while( true ) {
          if (pbVar29 == (byte *)0x0) break;
          local_68 = CONCAT44(local_68._4_4_ >> 1,
                              (uint)(byte *)local_68 >> 1 | local_68._4_4_ << 0x1f);
          pbVar29 = pbVar29 + -1;
          FUN_0007e260(&local_68);
        }
        uVar13 = (int)(byte *)local_68 + uVar11;
        local_6c = local_68._4_4_ + uVar19 + CARRY4((uint)(byte *)local_68,uVar11);
        local_70 = uVar13;
        if (0xfffffff < local_6c) {
          local_70 = uVar13 >> 1 | local_6c * -0x80000000;
          local_6c = local_6c >> 1;
          uVar13 = FUN_0007e260(&local_70);
          pbVar15 = pbVar15 + 1;
        }
        bVar9 = (byte)uVar13;
        pbVar22 = (byte *)(uVar18 & 0x20);
        if (uVar30 == 0x66) {
          if ((int)pbVar15 < 1) {
            uVar18 = 0x30;
            uVar32 = CONCAT44(0x30,uVar13);
            local_44[0] = 0x30;
            pbVar22 = pbVar15;
            if ((uVar7 & 0x20) == 0) {
              if ((int)pbVar10 < 1) goto LAB_0001206e;
              local_44[1] = 0x2e;
              uVar32 = CONCAT44(0x30,uVar13);
              if (pbVar15 != (byte *)0x0) goto LAB_00011d0e;
            }
            else {
              local_44[1] = 0x2e;
              uVar32 = CONCAT44(0x30,uVar13);
              if (pbVar15 != (byte *)0x0) {
                if ((int)pbVar10 < 1) {
                  pbVar29 = local_44 + 2;
                  goto LAB_00011dee;
                }
LAB_00011d0e:
                local_54 = (byte *)-(int)pbVar15;
                if ((int)pbVar10 <= -(int)pbVar15) {
                  local_54 = pbVar10;
                }
                pbVar10 = pbVar10 + -(int)local_54;
                uVar18 = (byte)local_56 & 0xffffffdf | (uint)(0 < (int)local_54) << 5;
                local_56 = CONCAT11(local_56._1_1_,(char)uVar18);
                uVar32 = CONCAT44(uVar18,uVar13);
              }
            }
LAB_00011d30:
            local_44[1] = 0x2e;
            pbVar29 = local_44 + 2;
          }
          else {
            pbVar20 = local_44;
            do {
              uVar32 = CONCAT44(local_74,uVar13);
              pbVar29 = pbVar20;
              if ((int)local_74 < 1) break;
              uVar32 = FUN_0007e290(&local_70,&local_74);
              uVar13 = (uint)uVar32;
              pbVar15 = pbVar15 + -1;
              pbVar29 = pbVar20 + 1;
              *pbVar20 = (byte)uVar32;
              pbVar20 = pbVar29;
            } while (pbVar15 != (byte *)0x0);
            uVar18 = (uint)((ulonglong)uVar32 >> 0x20);
            bVar9 = (byte)uVar32;
            local_54 = pbVar15;
            if ((uVar7 & 0x20) == 0) {
              if ((int)pbVar10 < 1) goto LAB_00011dee;
              uVar18 = 0x2e;
              *pbVar29 = 0x2e;
            }
            else {
              *pbVar29 = 0x2e;
            }
            uVar32 = CONCAT44(uVar18,(int)uVar32);
            pbVar29 = pbVar29 + 1;
            pbVar22 = (byte *)0x0;
          }
          while( true ) {
            uVar18 = (uint)((ulonglong)uVar32 >> 0x20);
            bVar9 = (byte)uVar32;
            if (((int)pbVar10 < 1) || ((int)local_74 < 1)) break;
            uVar32 = FUN_0007e290(&local_70,&local_74);
            pbVar10 = pbVar10 + -1;
            *pbVar29 = (byte)uVar32;
            pbVar29 = pbVar29 + 1;
          }
        }
        else {
          uVar32 = FUN_0007e290(&local_70,&local_74);
          local_44[0] = (byte)uVar32;
          if ((int)uVar32 != 0x30) {
            pbVar15 = pbVar15 + -1;
          }
          if (((uVar7 & 0x20) != 0) || (0 < (int)pbVar10)) {
            local_44[1] = 0x2e;
            pbVar22 = pbVar15;
            goto LAB_00011d30;
          }
LAB_0001206e:
          uVar18 = (uint)((ulonglong)uVar32 >> 0x20);
          bVar9 = (byte)uVar32;
          pbVar29 = local_44 + 1;
          pbVar22 = pbVar15;
        }
LAB_00011dee:
        if (local_8c != (byte *)0x0) {
          do {
            pbVar15 = pbVar29;
            pbVar29 = pbVar15 + -1;
          } while (pbVar15[-1] == 0x30);
          pbVar29 = pbVar15;
          pbVar10 = local_50;
          if (pbVar15[-1] == 0x2e) {
            pbVar29 = pbVar15 + -1;
          }
        }
        local_50 = pbVar10;
        if ((uVar30 & 0xdf) == 0x45) {
          if ((int)pbVar22 < 0) {
            pbVar22 = (byte *)-(int)pbVar22;
            bVar16 = 0x2d;
          }
          else {
            bVar16 = 0x2b;
          }
          if (99 < (int)pbVar22) {
            uVar18 = 100;
          }
          pbVar29[1] = bVar16;
          pbVar10 = pbVar22;
          if (99 < (int)pbVar22) {
            pbVar10 = pbVar22 + -(uVar18 * ((uint)pbVar22 / uVar18));
            bVar9 = (char)((uint)pbVar22 / uVar18) + 0x30;
          }
          if ((int)pbVar22 < 100) {
            pbVar15 = pbVar29 + 2;
          }
          else {
            pbVar15 = pbVar29 + 3;
          }
          if (99 < (int)pbVar22) {
            pbVar29[2] = bVar9;
          }
          *pbVar29 = (byte)uVar30;
          cVar14 = (char)((uint)pbVar10 / 10);
          pbVar29 = pbVar15 + 2;
          *pbVar15 = cVar14 + 0x30;
          pbVar15[1] = (char)pbVar10 + cVar14 * -10 + 0x30;
        }
        if ((int)local_54 < 1) {
          if ((int)local_50 < 1) {
            cVar14 = '\0';
          }
          else {
            cVar14 = '\x01';
          }
        }
        else {
          cVar14 = '\x01';
        }
        local_56 = CONCAT11(local_56._1_1_,(byte)local_56 & 0xbf | cVar14 << 6);
        *pbVar29 = 0;
      }
      else {
        if (uVar11 != 0x7ff) {
          bVar31 = false;
          goto LAB_000118fc;
        }
        uVar19 = uVar19 | (uint)local_60;
        bVar9 = (&DAT_000f8a6a)[uVar30 + 1 & 0xff] & 3;
        if (uVar19 == 0) {
          if (bVar9 == 1) {
            local_44[0] = 0x49;
            pbVar10 = (byte *)0x4e;
          }
          else {
            local_44[0] = 0x69;
            pbVar10 = local_60;
          }
          local_44[1] = (byte)pbVar10;
          if (bVar9 == 1) {
            local_44[2] = 0x46;
          }
          else {
            local_44[1] = 0x6e;
            local_44[2] = 0x66;
          }
        }
        else {
          bVar31 = bVar9 != 1;
          if (bVar31) {
            uVar19 = 0x6e;
          }
          local_44[0] = (byte)uVar19;
          if (bVar31) {
            pbVar10 = (byte *)0x61;
          }
          else {
            local_44[0] = 0x4e;
            pbVar10 = local_60;
          }
          local_44[1] = (byte)pbVar10;
          local_44[2] = local_44[0];
          if (!bVar31) {
            local_44[1] = 0x41;
          }
        }
        local_58 = local_58 & 0xffbf;
        pbVar29 = local_44 + 3;
      }
      pbVar15 = local_44;
      goto LAB_00011b98;
    case 99:
      uVar17 = 0;
      local_44[0] = (byte)local_60;
      pbVar29 = local_44 + 1;
      iVar27 = 1;
      pbVar15 = local_44;
      goto LAB_000119fa;
    case 100:
    case 0x69:
      if ((int)(uVar18 << 0x1c) < 0) {
        uVar17 = 0x2b;
      }
      else {
        uVar17 = ((uVar18 << 0x1b) >> 0x1f) << 5;
      }
      if ((int)local_5c < 0) {
        uVar17 = 0x2d;
        bVar31 = local_60 != (byte *)0x0;
        local_60 = (byte *)-(int)local_60;
        local_5c = -local_5c - (uint)bVar31;
      }
LAB_00011aa2:
      pbVar15 = (byte *)FUN_0004bb90(local_60,local_5c,&local_58,local_44,abStack_2b);
LAB_00011ab6:
      if (-1 < (int)pbVar10) {
        local_58 = local_58 & 0xffbf;
        if (abStack_2b + -(int)pbVar15 < pbVar10) {
          local_54 = pbVar10 + -(int)(abStack_2b + -(int)pbVar15);
        }
      }
      if (pbVar15 != (byte *)0x0) {
        pbVar29 = abStack_2b;
LAB_00011b98:
        iVar27 = (int)pbVar29 - (int)pbVar15;
        if (uVar17 != 0) {
          iVar27 = iVar27 + 1;
        }
        goto LAB_000119fa;
      }
      break;
    case 0x6e:
      switch(uVar17) {
      case 0:
      case 3:
      case 6:
      case 7:
        *(byte **)local_60 = pbVar26;
        break;
      case 1:
        *local_60 = (byte)pbVar26;
        break;
      case 2:
        *(short *)local_60 = (short)pbVar26;
        break;
      case 4:
      case 5:
        *(byte **)local_60 = pbVar26;
        *(int *)(local_60 + 4) = (int)pbVar26 >> 0x1f;
      }
      break;
    case 0x70:
      if (local_60 == (byte *)0x0) {
        pbVar29 = &UNK_000f0981;
        iVar27 = 5;
        pbVar15 = &UNK_000f097c;
        uVar17 = 0;
        goto LAB_000119fa;
      }
      pbVar15 = (byte *)FUN_0004bb90(local_60,0,&local_58,local_44,abStack_2b);
      local_56 = local_56 & 0xef | 0x7810;
      uVar17 = 0;
      goto LAB_00011ab6;
    case 0x73:
      if ((int)pbVar10 < 0) {
        iVar27 = FUN_0000ef12(local_60);
      }
      else {
        iVar27 = FUN_000870a6(local_60,pbVar10);
        if (pbVar15 == (byte *)0x0) break;
      }
      uVar17 = 0;
      pbVar29 = pbVar15 + iVar27;
      iVar27 = (int)pbVar29 - (int)pbVar15;
LAB_000119fa:
      pbVar10 = local_54;
      uVar7 = local_56 & 0x10;
      if ((local_56 & 0x10) == 0) {
        if ((int)((uint)(byte)local_56 << 0x1c) < 0) {
          iVar27 = iVar27 + 1;
        }
      }
      else {
        iVar27 = iVar27 + 2;
      }
      uVar6 = local_56 & 0x40;
      bVar31 = (local_56 & 0x40) != 0;
      pbVar22 = (byte *)((byte)local_56 & 0x40);
      if (bVar31) {
        pbVar22 = local_50;
      }
      pbVar20 = local_54 + iVar27;
      if (bVar31) {
        pbVar20 = pbVar20 + (int)pbVar22;
      }
      if (0 < (int)local_90) {
        pbVar22 = local_90 + -(int)pbVar20;
        uVar18 = (uint)(byte)local_58;
        local_90 = pbVar22;
        if (-1 < (int)(uVar18 << 0x1d)) {
          pbVar20 = pbVar22;
          if ((int)(uVar18 << 0x19) < 0) {
            if (uVar17 != 0) {
              pbVar12 = (byte *)(*param_1)(uVar17,param_2);
              if ((int)pbVar12 < 0) {
                return pbVar12;
              }
              pbVar26 = pbVar26 + 1;
              uVar17 = (uVar18 << 0x1d) >> 0x1f;
            }
            uVar21 = 0x30;
          }
          else {
            uVar21 = 0x20;
          }
          while (local_90 = pbVar20 + -1, 0 < (int)pbVar20) {
            pbVar12 = (byte *)(*param_1)(uVar21,param_2);
            pbVar20 = local_90;
            if ((int)pbVar12 < 0) {
              return pbVar12;
            }
          }
          pbVar26 = pbVar22 + ((int)pbVar26 - (int)pbVar20);
        }
      }
      if (uVar17 != 0) {
        pbVar22 = (byte *)(*param_1)(uVar17,param_2);
        if ((int)pbVar22 < 0) {
          return pbVar22;
        }
        pbVar26 = pbVar26 + 1;
      }
      if (uVar6 == 0) {
        if (((int)((uint)(byte)local_56 << 0x1b) < 0) || ((int)((uint)(byte)local_56 << 0x1c) < 0))
        {
          pbVar22 = (byte *)(*param_1)(0x30,param_2);
          if ((int)pbVar22 < 0) {
            return pbVar22;
          }
          pbVar26 = pbVar26 + 1;
        }
        pbVar22 = pbVar26;
        if (uVar7 != 0) {
          pbVar22 = (byte *)(*param_1)(local_56._1_1_,param_2);
          if ((int)pbVar22 < 0) {
            return pbVar22;
          }
          pbVar26 = pbVar26 + 1;
          pbVar22 = pbVar26;
        }
        for (; 0 < (int)(pbVar10 + ((int)pbVar22 - (int)pbVar26)); pbVar26 = pbVar26 + 1) {
          pbVar20 = (byte *)(*param_1)(0x30,param_2);
          if ((int)pbVar20 < 0) {
            return pbVar20;
          }
        }
        pbVar10 = (byte *)FUN_0007e2be(param_1,param_2,pbVar15,pbVar29);
        if ((int)pbVar10 < 0) {
          return pbVar10;
        }
        pbVar26 = pbVar10 + (int)pbVar26;
        pbVar10 = pbVar26;
      }
      else {
        pbVar22 = pbVar15;
        if ((short)local_58 < 0) {
          while( true ) {
            if (*pbVar22 == 0x70) break;
            pbVar10 = (byte *)(*param_1)(*pbVar22,param_2);
            pbVar22 = pbVar22 + 1;
            if ((int)pbVar10 < 0) {
              return pbVar10;
            }
          }
          iVar27 = (int)pbVar26 - (int)pbVar15;
        }
        else {
          while( true ) {
            if (-1 < (int)((uint)(byte)(&DAT_000f8a6b)[*pbVar22] << 0x1d)) break;
            pbVar20 = (byte *)(*param_1)((uint)*pbVar22,param_2);
            pbVar22 = pbVar22 + 1;
            if ((int)pbVar20 < 0) {
              return pbVar20;
            }
          }
          pbVar20 = pbVar22 + ((int)pbVar26 - (int)pbVar15);
          pbVar26 = pbVar10;
          pbVar15 = pbVar10;
          if (-1 < (int)((uint)(byte)local_56 << 0x1a)) {
            while (pbVar15 = pbVar26 + -1, 0 < (int)pbVar26) {
              pbVar12 = (byte *)(*param_1)(0x30,param_2);
              pbVar26 = pbVar15;
              if ((int)pbVar12 < 0) {
                return pbVar12;
              }
            }
            pbVar20 = pbVar20 + ((int)pbVar10 - (int)pbVar26);
          }
          pbVar26 = pbVar22;
          if (*pbVar22 == 0x2e) {
            pbVar26 = (byte *)(*param_1)(0x2e,param_2);
            while( true ) {
              if ((int)pbVar26 < 0) {
                return pbVar26;
              }
              pbVar20 = pbVar20 + 1;
              if ((int)pbVar15 < 1) break;
              pbVar26 = (byte *)(*param_1)(0x30,param_2);
              pbVar15 = pbVar15 + -1;
            }
            pbVar22 = pbVar22 + 1;
            pbVar26 = pbVar22;
          }
          while( true ) {
            if (-1 < (int)((uint)(byte)(&DAT_000f8a6b)[*pbVar22] << 0x1d)) break;
            pbVar10 = (byte *)(*param_1)((uint)*pbVar22,param_2);
            pbVar22 = pbVar22 + 1;
            if ((int)pbVar10 < 0) {
              return pbVar10;
            }
          }
          iVar27 = (int)pbVar20 - (int)pbVar26;
        }
        pbVar26 = local_50;
        for (pbVar10 = pbVar22 + iVar27; 0 < (int)(pbVar22 + iVar27 + ((int)pbVar26 - (int)pbVar10))
            ; pbVar10 = pbVar10 + 1) {
          pbVar15 = (byte *)(*param_1)(0x30,param_2);
          if ((int)pbVar15 < 0) {
            return pbVar15;
          }
        }
        pbVar26 = (byte *)FUN_0007e2be(param_1,param_2,pbVar22,pbVar29);
        if ((int)pbVar26 < 0) {
          return pbVar26;
        }
        pbVar26 = pbVar26 + (int)pbVar10;
        pbVar10 = pbVar26;
      }
      for (; 0 < (int)(local_90 + ((int)pbVar10 - (int)pbVar26)); pbVar26 = pbVar26 + 1) {
        pbVar15 = (byte *)(*param_1)(0x20,param_2);
        if ((int)pbVar15 < 0) {
          return pbVar15;
        }
      }
    }
switchD_0001194e_caseD_59:
    param_3 = local_88;
  } while( true );
}


