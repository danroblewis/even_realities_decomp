/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter_and_state_validation
 * Entry:    00057db0
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter_and_state_validation()
 */


/* WARNING: Removing unreachable block (ram,0x0005811a) */

undefined4
bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter_and_state_validation
          (int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar13;
  uint uVar14;
  undefined2 *puVar15;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  short sVar19;
  int iVar20;
  undefined4 local_60;
  char *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_30;
  char *local_2c;
  
  if (*(ushort *)(param_2 + 0x10) < 4) {
    local_2c = "Too small L2CAP signaling PDU";
    goto LAB_00057dc4;
  }
  pbVar7 = (byte *)FUN_0005f594(param_2 + 0xc,4);
  uVar16 = (uint)*(ushort *)(param_2 + 0x10);
  local_54 = (uint)*(ushort *)(pbVar7 + 2);
  if (uVar16 != local_54) {
    local_5c = "L2CAP length mismatch (%u != %u)";
    local_58 = uVar16;
LAB_00057e04:
    local_60 = 4;
    FUN_00081746(&DAT_00088160,0x2040,&local_60);
    return 0;
  }
  uVar17 = (uint)pbVar7[1];
  if (uVar17 == 0) {
    local_2c = "Invalid ident value in L2CAP PDU";
    goto LAB_00057dc4;
  }
  uVar14 = (uint)*pbVar7;
  if (uVar14 == 1) {
    puVar10 = (undefined4 *)FUN_00081626(*param_1,uVar17);
LAB_000581ee:
    if (puVar10 == (undefined4 *)0x0) {
      return 0;
    }
    goto LAB_00058136;
  }
  if ((uVar14 - 6 & 0xff) < 0x11) {
    switch(uVar14 - 6) {
    case 0:
      iVar20 = *param_1;
      puVar15 = *(undefined2 **)(param_2 + 0xc);
      if (uVar16 < 4) goto LAB_00057e70;
      iVar8 = FUN_00081660(iVar20,*puVar15);
      if (iVar8 == 0) {
        local_40 = puVar15[1];
        local_3e = *puVar15;
        iVar11 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                           (1,uVar17,6);
        if (iVar11 == 0) {
          return 0;
        }
        puVar12 = (undefined1 *)FUN_0005f5d0(iVar11 + 0xc,2);
        puVar12[1] = 0;
        *puVar12 = 2;
        FUN_00083740(iVar11 + 0xc,&local_40,4);
      }
      else {
        iVar11 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                           (7,uVar17,4);
        if (iVar11 == 0) {
          return 0;
        }
        puVar15 = (undefined2 *)FUN_0005f5d0(iVar11 + 0xc,4);
        *puVar15 = *(undefined2 *)(iVar8 + 0x14);
        puVar15[1] = *(undefined2 *)(iVar8 + 0x24);
        FUN_000817b6(iVar8);
      }
      goto LAB_000581ac;
    case 1:
      if (3 < uVar16) {
        puVar10 = (undefined4 *)FUN_00081660(*param_1,*(undefined2 *)(*(int *)(param_2 + 0xc) + 2));
        goto LAB_000581ee;
      }
      local_2c = "Too small LE disconn rsp packet size";
      break;
    default:
      goto switchD_00057e38_caseD_2;
    case 0xd:
      if (1 < uVar16) {
        return 0;
      }
      local_2c = "Too small LE conn param rsp";
      break;
    case 0xe:
      iVar20 = *param_1;
      puVar15 = *(undefined2 **)(param_2 + 0xc);
      if (9 < uVar16) {
        local_58 = (uint)(ushort)puVar15[2];
        uVar2 = puVar15[1];
        uVar3 = puVar15[3];
        uVar4 = *puVar15;
        local_50 = (uint)(ushort)puVar15[4];
        local_54 = (uint)uVar3;
        local_4c = local_58;
        if ((local_58 < 0x17) || (local_54 < 0x17)) {
          local_5c = "Invalid LE-Conn Req params: mtu %u mps %u";
          goto LAB_00057e04;
        }
        iVar11 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                           (0x15,uVar17,10);
        if (iVar11 == 0) {
          return 0;
        }
        puVar10 = (undefined4 *)FUN_0005f5d0(iVar11 + 0xc,10);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined2 *)(puVar10 + 2) = 0;
        puVar15 = (undefined2 *)
                  bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution
                            (uVar4);
        if (puVar15 == (undefined2 *)0x0) {
LAB_00057ed4:
          sVar19 = 2;
          goto LAB_00057ed6;
        }
        if (*(byte *)(iVar20 + 9) < *(byte *)(puVar15 + 1)) {
          if ((*(byte *)(iVar20 + 9) < 2) && (iVar8 = FUN_0008145c(iVar20), iVar8 != 0)) {
            sVar19 = 8;
          }
          else {
            sVar19 = 5;
          }
          goto LAB_00057ed6;
        }
        if (0x3f < uVar2 - 0x40) {
          sVar19 = 9;
          goto LAB_00057ed6;
        }
        local_44 = FUN_00081a4e(iVar20,(uint)uVar2);
        if (local_44 != 0) {
          sVar19 = 10;
          goto LAB_00057ed6;
        }
        iVar9 = (**(code **)(puVar15 + 2))(iVar20,&local_44);
        iVar8 = local_44;
        if (iVar9 < 0) {
          if (iVar9 == -0xc) {
LAB_00057f58:
            sVar19 = 4;
            goto LAB_00057ed6;
          }
          if (iVar9 + 0xb < 0 == SCARRY4(iVar9,0xb)) {
            if (iVar9 == -1) {
              sVar19 = 7;
              goto LAB_00057ed6;
            }
          }
          else {
            if (iVar9 == -0x86) goto LAB_00057ed4;
            if (iVar9 == -0xd) {
              sVar19 = 6;
              goto LAB_00057ed6;
            }
          }
        }
        else {
          if (*(int *)(*(int *)(local_44 + 4) + 0x14) != 0) {
            *(undefined1 *)(local_44 + 0xb9) = *(undefined1 *)(puVar15 + 1);
            iVar9 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution
                              (iVar20,local_44,&LAB_000816ae_1);
            if (iVar9 != 0) {
              bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter
                        (iVar8);
              *(undefined2 *)(iVar8 + 0x26) = (undefined2)local_4c;
              *(ushort *)(iVar8 + 0x24) = uVar2;
              *(ushort *)(iVar8 + 0x28) = uVar3;
              FUN_0008174c(iVar8,local_50);
              bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation
                        (iVar8);
              sVar19 = 0;
              *(undefined2 *)(iVar8 + 0xb6) = *puVar15;
              *(undefined1 *)(local_44 + 0xb4) = 3;
              *(undefined2 *)puVar10 = *(undefined2 *)(local_44 + 0x14);
              *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(local_44 + 0x18);
              *(undefined2 *)((int)puVar10 + 2) = *(undefined2 *)(local_44 + 0x16);
              *(short *)((int)puVar10 + 6) = (short)*(undefined4 *)(local_44 + 0x1c);
              goto LAB_00057ed6;
            }
            goto LAB_00057f58;
          }
          local_2c = "Mandatory callback \'recv\' missing";
          local_30 = 2;
          FUN_00081746(&DAT_00088160,0x1040,&local_30);
        }
        sVar19 = 0xb;
LAB_00057ed6:
        *(short *)(puVar10 + 2) = sVar19;
        local_58 = 0;
        iVar20 = FUN_00081820(iVar20,5,iVar11);
        if (iVar20 != 0) {
          FUN_0005f24c(iVar11);
          return 0;
        }
        if (sVar19 != 0) {
          return 0;
        }
        if ((code *)**(undefined4 **)(local_44 + 4) == (code *)0x0) {
          return 0;
        }
        (*(code *)**(undefined4 **)(local_44 + 4))();
        return 0;
      }
LAB_00057e70:
      local_2c = "Too small LE conn req packet size";
      break;
    case 0xf:
      iVar20 = *param_1;
      puVar15 = *(undefined2 **)(param_2 + 0xc);
      if (9 < uVar16) {
        local_4c = (uint)(ushort)puVar15[3];
        uVar4 = puVar15[1];
        uVar5 = puVar15[2];
        uVar2 = puVar15[4];
        uVar6 = *puVar15;
        if (((uVar2 & 0xfff7) == 0) || (uVar2 == 5)) {
          puVar10 = (undefined4 *)FUN_00081626(iVar20,uVar17,0);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00058032;
          FUN_00073518(puVar10 + 0x30);
          *(undefined1 *)(puVar10 + 0x2e) = 0;
          uVar13 = extraout_r1_00;
          if (uVar2 != 5) goto LAB_0005809c;
          puVar18 = puVar10 + 4;
          iVar11 = FUN_000816a2(puVar18,extraout_r1_00,*puVar10);
          if (-1 < iVar11 << 0x1d) {
            bVar1 = *(byte *)(extraout_r2 + 9);
            if (bVar1 < 2) goto LAB_00058142;
            if (bVar1 == 2) {
              uVar13 = 3;
            }
            else {
              if (bVar1 != 3) goto LAB_0005812c;
              uVar13 = 4;
            }
            goto LAB_000580fc;
          }
        }
        else {
          puVar10 = (undefined4 *)FUN_00081626(iVar20,uVar17,1);
          if (puVar10 == (undefined4 *)0x0) {
LAB_00058032:
            local_5c = "Cannot find channel for ident %u";
            local_60 = 3;
            local_58 = uVar17;
            FUN_00081746(&DAT_00088160,0x1840,&local_60);
            return 0;
          }
          FUN_00073518(puVar10 + 0x30);
          *(undefined1 *)(puVar10 + 0x2e) = 0;
          uVar13 = extraout_r1;
LAB_0005809c:
          if (uVar2 != 8) {
            if (uVar2 == 0) {
              *(undefined1 *)(puVar10 + 0x2d) = 3;
              *(undefined2 *)(puVar10 + 9) = uVar6;
              *(undefined2 *)((int)puVar10 + 0x26) = uVar4;
              *(undefined2 *)(puVar10 + 10) = uVar5;
              if (*(code **)puVar10[1] != (code *)0x0) {
                (**(code **)puVar10[1])(puVar10);
              }
              FUN_0008174c(puVar10,local_4c);
              return 0;
            }
            goto LAB_00058136;
          }
          puVar18 = puVar10 + 4;
          iVar11 = FUN_000816a2(puVar18,uVar13,*puVar10);
          if ((-1 < iVar11 << 0x1d) && (*(byte *)(extraout_r2_00 + 9) < 2)) {
LAB_00058142:
            uVar13 = 2;
LAB_000580fc:
            iVar11 = FUN_0008149a(*puVar10,uVar13);
            if (-1 < iVar11) {
              *puVar18 = *puVar18 | 4;
              return 0;
            }
          }
        }
LAB_0005812c:
        FUN_00081788(iVar20,puVar10);
LAB_00058136:
        FUN_000817b6(puVar10);
        return 0;
      }
      local_2c = "Too small LE conn rsp packet size";
      break;
    case 0x10:
      if (uVar16 < 4) {
        local_2c = "Too small LE Credits packet size";
      }
      else {
        iVar20 = FUN_00081a4e(*param_1,**(undefined2 **)(param_2 + 0xc),
                              (*(undefined2 **)(param_2 + 0xc))[1]);
        if (iVar20 != 0) {
          iVar11 = FUN_000816a2(iVar20 + 0x2c);
          if (0xffff < iVar11 + extraout_r2_01) {
            local_2c = "Credits overflow";
            local_30 = 2;
            FUN_00081746(&DAT_00088160,0x1040,&local_30);
            FUN_00081b30(iVar20);
            return 0;
          }
          FUN_0008174c(iVar20,extraout_r2_01);
          FUN_00081720(iVar20);
          return 0;
        }
        local_2c = "Unable to find channel of LE Credits packet";
      }
    }
LAB_00057dc4:
    local_30 = 2;
    FUN_00081746(&DAT_00088160,0x1040,&local_30);
  }
  else {
switchD_00057e38_caseD_2:
    local_5c = "Rejecting unknown L2CAP PDU code 0x%02x";
    local_60 = 3;
    local_58 = uVar14;
    FUN_00081746(&DAT_00088160,0x1880,&local_60);
    iVar20 = *param_1;
    iVar11 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                       (1,pbVar7[1],2);
    if (iVar11 == 0) {
      return 0;
    }
    puVar12 = (undefined1 *)FUN_0005f5d0(iVar11 + 0xc,2);
    *puVar12 = 0;
    puVar12[1] = 0;
LAB_000581ac:
    FUN_00081940(iVar20,iVar11);
  }
  return 0;
}


