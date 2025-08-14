/*
 * Function: master_process_get_req
 * Entry:    0002af4c
 * Prototype: undefined master_process_get_req()
 */


int master_process_get_req(char *param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  byte bVar14;
  code *pcVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 local_124;
  undefined4 local_123;
  undefined4 local_11f;
  undefined2 local_11b;
  char local_119;
  undefined1 auStack_118 [244];
  
  pbVar16 = param_2 + 4;
  if (param_2[1] == 3) {
    uVar21 = *(undefined4 *)(param_2 + 8);
    iVar17 = *(int *)(param_2 + 0xc);
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): recev: pack_index:%d, start_addr:0x%x, rx_buf_len:%d\n",
                    "master_process_audio_fw_load_req",*(undefined4 *)(param_2 + 4),uVar21,iVar17);
      }
      else {
        handle_heartbeat("%s(): recev: pack_index:%d, start_addr:0x%x, rx_buf_len:%d\n",
                         "master_process_audio_fw_load_req",*(undefined4 *)(param_2 + 4),uVar21);
      }
    }
    if (iVar17 - 0x13U < 0x800d) {
      iVar4 = get_work_mode();
      if (*(int *)(iVar4 + 0x1030) != 0) {
        iVar4 = get_work_mode();
        iVar19 = iVar17 + -0x12;
        pcVar15 = *(code **)(iVar4 + 0x1030);
        uVar5 = get_work_mode();
        iVar6 = (*pcVar15)(uVar5,uVar21,param_3 + 0x12,iVar19);
        iVar4 = iVar19;
        if ((iVar6 != 0) && (iVar4 = iVar6, 0 < (int)LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): read flash fail: %d\n\n","read_fw_pack_from_nor_flash_by_qspi",iVar6)
            ;
          }
          else {
            handle_heartbeat();
          }
        }
        if (iVar19 == iVar4) {
          *param_3 = 0x6f;
          param_3[1] = 0x6b;
          FUN_0007d968(param_3 + 0x12,iVar19,param_3 + 2);
          dump_hex_data("flash_md5",param_3 + 2,0x10);
          return iVar17;
        }
      }
    }
    *param_3 = 0x6e;
    param_3[1] = 0x6f;
    return 0;
  }
  uVar13 = (uint)*param_2;
  if (0x26 < (uVar13 - 1 & 0xff)) {
    if (0x1c < (uVar13 - 0x29 & 0xff)) {
      if (9 < uVar13 - 0x47) {
        if (0 < (int)LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): tx error req_type head->req_type %d.\n\n","process_recv_ble_req");
          }
          else {
            handle_heartbeat();
          }
        }
        param_3[0] = 'e';
        param_3[1] = 'r';
        param_3[2] = 'r';
        param_3[3] = 'o';
        param_3[4] = 'r';
        param_3[5] = '\0';
        return 6;
      }
      switch(uVar13) {
      case 0x4a:
        uVar13 = (uint)param_2[4];
        if (2 < (int)LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): receive dfu_soc=0x%02x\n\n","master_process_post_req",uVar13);
          }
          else {
            handle_heartbeat();
          }
        }
        if ((int)(uVar13 << 0x1e) < 0) {
          param_1[0xc9] = -0x7d;
          param_1[0xca] = '\x01';
          fill_memory_buffer((int)&local_123 + 3,0,0xf8);
          local_124 = 2;
          local_123 = *(undefined4 *)(param_1 + 0xc9);
          local_11f = *(undefined4 *)(param_1 + 0xcd);
          local_11b = *(undefined2 *)(param_1 + 0xd1);
          local_119 = param_1[0xd3];
          fill_memory_buffer(auStack_118,0,0x15);
          (**(code **)(param_1 + 0x774))(&local_124,0xfc);
        }
        if ((int)(uVar13 << 0x1f) < 0) {
          if (2 < (int)LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master enter dfu mode\n","master_process_post_req");
            }
            else {
              handle_heartbeat();
            }
          }
          (**(code **)(param_1 + 0x102c))(param_1 + 0x68);
        }
        break;
      case 0x4b:
        iVar17 = post_notification_cmd_response
                           (param_1,param_2,param_1 + 0xd4,param_2,pbVar16,param_3,param_4);
        return iVar17;
      case 0x4c:
        uVar13 = *(uint *)(param_2 + 4);
        FUN_0007c0e2(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18);
        break;
      case 0x4d:
        iVar17 = get_work_mode();
        param_1 = (char *)(iVar17 + 0x9ac);
        goto LAB_0002b188;
      case 0x4e:
        *(undefined1 *)(*(int *)(param_1 + 0x100c) + 0x196) = 0;
        if (*(char *)(*(int *)(param_1 + 0x100c) + 7) == '\0') {
          *(undefined1 *)(*(int *)(param_1 + 0x100c) + 7) = 10;
        }
        *param_3 = 0xc9;
        if (**(int **)(param_1 + 0x1054) == 0x10) {
          return 1;
        }
        uVar21 = 0x10;
        goto LAB_0002b404;
      case 0x4f:
        iVar17 = get_work_mode();
        *(byte *)(iVar17 + 0x108f) = param_2[4];
        bVar14 = *param_2;
        iVar17 = get_work_mode();
        *(uint *)(iVar17 + 0x104c) = (uint)bVar14;
        iVar17 = get_work_mode();
        z_spin_lock_valid(iVar17 + 0x80);
        *param_3 = 0xc9;
        param_3[1] = param_2[4];
        return 2;
      default:
        goto switchD_0002b03a_caseD_3;
      }
      goto LAB_0002b1ac;
    }
    switch(uVar13 - 0x29) {
    case 0:
      *param_3 = param_1[0xed5];
      param_3[1] = param_1[0xf98];
      if ((int)LOG_LEVEL < 3) {
        return 2;
      }
      if (IS_DEBUG != 0) {
        pcVar7 = "%s(): BLE_REQ_GET_BRIGHTNESS:0x%02x, 0x%02x,\n";
LAB_0002b752:
        handle_heartbeat(pcVar7,"master_process_get_req");
        return 2;
      }
      pcVar7 = "%s(): BLE_REQ_GET_BRIGHTNESS:0x%02x, 0x%02x,\n";
      break;
    case 1:
      bVar14 = param_1[0xf60];
      *param_3 = bVar14;
      if ((int)LOG_LEVEL < 3) {
        return 1;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): BLE_REQ_GET_ANTI_SHAKE_ENABLE:0x%02x, 0x%02x,\n",
                         "master_process_get_req");
        return 1;
      }
      DEBUG_PRINT("%s(): BLE_REQ_GET_ANTI_SHAKE_ENABLE:0x%02x, 0x%02x,\n","master_process_get_req",
                  (uint)bVar14,(uint)param_3[1]);
      return 1;
    case 2:
      *param_3 = param_1[0xfea];
      uVar21 = FUN_000269fc();
      param_3[1] = (byte)uVar21;
      if ((int)LOG_LEVEL < 3) {
        return 2;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 2;
      }
      DEBUG_PRINT("%s(): BLE_REQ_GET_DISPLAY_MODE:0x%02x, 0x%02x, 0x%02x, 0x%02x,\n",
                  "master_process_get_req",(uint)*param_3,uVar21,(uint)param_3[2],(uint)param_3[3]);
      return 2;
    case 3:
      uVar13 = (uint)(byte)param_1[0xfc0];
      uVar18 = (uint)(byte)param_1[0xfc1];
      if (uVar13 == 0x5d) {
        if (param_1[0xfc2] == '\0') {
          if (uVar18 == 0x5d) {
            uVar13 = 0x5e;
            uVar18 = uVar13;
            goto LAB_0002b7fe;
          }
          uVar13 = 0x5e;
          uVar20 = uVar18 - 0x5e & 0xff;
        }
        else {
          if (uVar18 == 0x5d) {
            uVar13 = 0x5f;
            goto LAB_0002b8ee;
          }
          uVar13 = 0x5f;
          uVar20 = uVar18 - 0x5e & 0xff;
        }
      }
      else if (uVar13 == 0x5e) {
        if (param_1[0xfc2] == '\0') {
          if (uVar18 == 0x5d) {
            uVar13 = 0x60;
            uVar18 = 0x5e;
            goto LAB_0002b7fe;
          }
          uVar13 = 0x60;
          uVar20 = uVar18 - 0x5e & 0xff;
        }
        else {
          if (uVar18 == 0x5d) {
            uVar13 = 0x61;
            uVar18 = 0x5e;
            goto LAB_0002b7fe;
          }
          uVar13 = 0x61;
          uVar20 = uVar18 - 0x5e & 0xff;
        }
      }
      else if (uVar13 == 0x5f) {
        if (uVar18 == 0x5d) {
          uVar13 = 0x62;
          goto LAB_0002b8ee;
        }
        uVar13 = 0x62;
        uVar20 = uVar18 - 0x5e & 0xff;
      }
      else if (uVar13 == 0x60) {
        if (uVar18 == 0x5d) {
          uVar13 = 99;
          goto LAB_0002b8ee;
        }
        uVar13 = 99;
        uVar20 = uVar18 - 0x5e & 0xff;
      }
      else if (uVar13 < 0x61) {
        if (uVar18 == 0x5d) goto LAB_0002b8ee;
        uVar20 = uVar18 - 0x5e & 0xff;
      }
      else {
        if (uVar18 == 0x5d) {
          uVar13 = 100;
LAB_0002b8ee:
          uVar18 = 0x5e;
          goto LAB_0002b7fe;
        }
        uVar20 = uVar18 - 0x5e & 0xff;
        uVar13 = 100;
        uVar18 = 100;
      }
      if (uVar20 < 3) {
        uVar18 = (int)"`bcmaster_process_post_req"[uVar20];
      }
LAB_0002b7fe:
      *param_3 = (byte)uVar13;
      param_3[1] = (byte)uVar18;
      bVar14 = param_1[0xfc4];
      param_3[2] = bVar14;
      bVar1 = param_1[0xfc5];
      param_3[3] = bVar1;
      bVar2 = param_1[0xfc6];
      param_3[4] = bVar2;
      pbVar16 = param_3 + 5;
      pcVar7 = param_1 + 0xfcc;
      do {
        pcVar12 = pcVar7 + 4;
        pbVar8 = pbVar16 + 4;
        *(undefined4 *)pbVar16 = *(undefined4 *)pcVar7;
        pbVar16 = pbVar8;
        pcVar7 = pcVar12;
      } while (pcVar12 != param_1 + 0xfd8);
      *(undefined2 *)pbVar8 = *(undefined2 *)pcVar12;
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_GET_DEVICE_INFO:0x%02x,0x%02x,0x%02x,0x%02x, 0x%02x,0x%02x,0x%02x,0x%02x, 0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x\n"
                      ,"master_process_get_req",uVar13,uVar18,(uint)bVar14,(uint)bVar1,(uint)bVar2,
                      (uint)param_3[5],(uint)param_3[6],(uint)param_3[7],(uint)param_3[8],
                      (uint)param_3[9],(uint)param_3[10],(uint)param_3[0xb],(uint)param_3[0xc],
                      (uint)param_3[0xd],(uint)param_3[0xe],(uint)param_3[0xf]);
        }
        else {
          handle_heartbeat();
        }
      }
      return 0x13;
    case 4:
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0xfda);
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_1 + 0xfde);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 0xfe0);
      *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_1 + 0xfe4);
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_GET_M_N_S_MAC:master[0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x], [0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x]\n"
                      ,"master_process_get_req",(uint)*param_3,(uint)param_3[1],(uint)param_3[2],
                      (uint)param_3[3],(uint)param_3[4],(uint)param_3[5],(uint)param_3[6],
                      (uint)param_3[7],(uint)param_3[8],(uint)param_3[9],(uint)param_3[10],
                      (uint)param_3[0xb]);
        }
        else {
          handle_heartbeat();
        }
      }
      return 0xc;
    default:
      goto switchD_0002b03a_caseD_3;
    case 9:
      *param_3 = param_1[0xef4];
      param_3[1] = param_1[0xef5];
      if ((int)LOG_LEVEL < 3) {
        return 2;
      }
      if (IS_DEBUG != 0) {
        pcVar7 = "%s(): BLE_REQ_GET_WAKEUP_ANGLE:0x%02x, 0x%02x,\n";
        goto LAB_0002b752;
      }
      pcVar7 = "%s(): BLE_REQ_GET_WAKEUP_ANGLE:0x%02x, 0x%02x,\n";
      break;
    case 10:
      puVar9 = (undefined4 *)FUN_000232b8();
      puVar11 = puVar9;
      pbVar16 = param_3;
      do {
        puVar10 = puVar11 + 1;
        *(undefined4 *)pbVar16 = *puVar11;
        puVar11 = puVar10;
        pbVar16 = pbVar16 + 4;
      } while (puVar10 != puVar9 + 4);
      if ((int)LOG_LEVEL < 3) {
        return 0x10;
      }
      pcVar7 = "%s(): BLE_REQ_GET_GLASSES_SN: %s\n";
      goto LAB_0002b9d8;
    case 0xb:
      puVar9 = (undefined4 *)FUN_000232b0();
      puVar11 = puVar9;
      pbVar16 = param_3;
      do {
        puVar10 = puVar11 + 1;
        *(undefined4 *)pbVar16 = *puVar11;
        puVar11 = puVar10;
        pbVar16 = pbVar16 + 4;
      } while (puVar10 != puVar9 + 4);
      if ((int)LOG_LEVEL < 3) {
        return 0x10;
      }
      pcVar7 = "%s(): BLE_REQ_GET_DEVICE_SN: %s\n";
LAB_0002b9d8:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar7,"master_process_get_req",param_3);
      }
      else {
        handle_heartbeat();
      }
      return 0x10;
    case 0xc:
      *param_3 = param_1[2];
      if ((int)LOG_LEVEL < 3) {
        return 1;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 1;
      }
      DEBUG_PRINT("%s(): BLE_REQ_GET_ESB_CHANNEL: %d\n","master_process_get_req");
      return 1;
    case 0xd:
      if ((param_1 == (char *)0x0) || (param_3 == (byte *)0x0)) {
        if (1 < (int)LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): input param is error !\n","get_notification_counts_cmd_response");
          }
          else {
            handle_heartbeat();
          }
        }
        iVar17 = 0;
      }
      else {
        *param_3 = param_1[0xdd];
        if (2 < (int)LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): [csh_debug]unread_msg_num is: %d\n",
                        "get_notification_counts_cmd_response");
          }
          else {
            handle_heartbeat();
          }
        }
        iVar17 = 1;
      }
      return iVar17;
    case 0xe:
      uVar21 = get_boot_seconds();
      uint32_to_little_endian(param_3,uVar21);
      if (param_1[0xae3] == '\0') {
        iVar17 = *(int *)(param_1 + 0x9b4);
        if (iVar17 != 0) {
          iVar17 = 1;
        }
        bVar14 = (byte)iVar17;
      }
      else {
        bVar14 = 0;
      }
      goto LAB_0002b31a;
    }
    DEBUG_PRINT(pcVar7,"master_process_get_req");
    return 2;
  }
  switch(uVar13 - 1) {
  case 0:
    uVar13 = (uint)param_2[4];
    if (((byte)param_1[0xed5] == uVar13) && (param_1[0xf98] == param_2[5])) {
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_PUT_BRIGHTNESS ignore:%d\n","master_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else {
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_PUT_BRIGHTNESS new level:%d\n","master_process_put_req",uVar13)
          ;
        }
        else {
          handle_heartbeat();
        }
      }
      (**(code **)(param_1 + 0xb8c))(param_1 + 0xb6c,uVar13);
      param_1[0xf98] = param_2[5];
      *(uint *)(param_1 + 0x104c) = (uint)*param_2;
      z_spin_lock_valid(param_1 + 0x80);
    }
    *param_3 = param_2[4];
    param_3[1] = param_2[5];
    param_3[2] = 0xc9;
    return 3;
  case 1:
    bVar14 = param_2[4];
    uVar13 = (uint)(byte)param_1[0xf60];
    if (uVar13 != bVar14) {
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_PUT_ANTI_SHAKE_ENABLE: new state: %d\n",
                      "master_process_put_req",(uint)bVar14);
        }
        else {
          handle_heartbeat();
        }
      }
      param_1[0xf60] = bVar14;
      goto LAB_0002b17c;
    }
    if (2 < (int)LOG_LEVEL) {
      pcVar7 = "%s(): BLE_REQ_PUT_ANTI_SHAKE_ENABLE: ignore: %d\n";
LAB_0002b1a0:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar7,"master_process_put_req",uVar13);
      }
      else {
        handle_heartbeat();
      }
    }
    break;
  case 2:
    bVar14 = param_2[4];
    uVar13 = (uint)bVar14;
    uVar18 = (uint)param_2[5];
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_REQ_PUT_DISPLAY_MODE: %d, flag_show_tip: %d\n",
                    "master_process_put_req",uVar13,uVar18);
      }
      else {
        handle_heartbeat("%s(): BLE_REQ_PUT_DISPLAY_MODE: %d, flag_show_tip: %d\n",
                         "master_process_put_req",uVar13,uVar18);
      }
    }
    if (2 < uVar13 - 10) {
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_PUT_DISPLAY_MODE error mode:%d\n","master_process_put_req",
                      uVar13);
        }
        else {
          handle_heartbeat();
        }
      }
      bVar14 = 0xca;
      goto LAB_0002b2d8;
    }
    if (uVar13 != (byte)param_1[0xfea]) {
      if (*param_1 == '\x01') {
        if ((byte)param_1[0xfea] == 0xc) {
          if ((uVar13 != 0xc) && (uVar3 = 1, uVar18 != 1)) goto LAB_0002b1f2;
        }
        else if (uVar13 == 0xc) {
          uVar3 = 0;
LAB_0002b1f2:
          FUN_0007d2f8(uVar3);
        }
      }
      param_1[0xfea] = bVar14;
      *(uint *)(param_1 + 0x104c) = (uint)*param_2;
      z_spin_lock_valid(param_1 + 0x80);
      if (param_1[0xb0c] == '\0') {
        if (uVar13 == 0xb) {
          if (2 < (int)LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&DAT_000a1df5,"master_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          pcVar7 = param_1 + 0xaf4;
          param_1[0xfe9] = '\x03';
LAB_0002b282:
          z_spin_lock_valid(pcVar7);
          return 0;
        }
      }
      else if (uVar13 == 0xc) {
        if (2 < (int)LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&DAT_000a1e66,"master_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        break;
      }
      if (2 < (int)LOG_LEVEL) {
        pcVar7 = "%s(): BLE_REQ_PUT_DISPLAY_MODE new mode:%d\n";
        goto LAB_0002b1a0;
      }
    }
    break;
  default:
    goto switchD_0002b03a_caseD_3;
  case 4:
    uVar18 = (uint)param_2[4];
    bVar14 = param_2[5];
    uVar13 = (uint)bVar14;
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_REQ_PUT_INTERNAL_DEBUG:op_code=0x%02x,op_val=0x%02x\n",
                    "master_process_put_req",uVar18,uVar13);
      }
      else {
        handle_heartbeat("%s(): BLE_REQ_PUT_INTERNAL_DEBUG:op_code=0x%02x,op_val=0x%02x\n",
                         "master_process_put_req",uVar18,uVar13);
      }
    }
    uVar20 = LOG_LEVEL;
    if (uVar18 == 1) {
      if (uVar13 != 0) {
        uVar13 = 1;
      }
      FUN_0002bd4c("debug-ble",param_1,uVar13);
    }
    else if (uVar18 == 2) {
      LOG_LEVEL = uVar13;
      DEBUG_PRINT("log_level_set=%d",uVar13);
    }
    else if ((uVar18 == 3) && (param_1[0xd5] = bVar14, 2 < (int)uVar20)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): screen_id=%d\n","master_process_put_req",uVar13);
      }
      else {
        handle_heartbeat();
      }
    }
    bVar14 = 0;
    param_3[0] = 0x47;
    param_3[1] = 0x6f;
    param_3[2] = 0x6f;
    param_3[3] = 100;
LAB_0002b31a:
    param_3[4] = bVar14;
    return 5;
  case 6:
    bVar14 = param_2[8];
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): playload: %02x,%02x,%02x,%02x,%02x,%02x\n","master_process_put_req",
                    (uint)param_2[4],(uint)param_2[5],(uint)param_2[6],(uint)param_2[7],(uint)bVar14
                    ,(uint)param_2[9]);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar13 = *(uint *)(param_2 + 4);
    *(byte *)(*(int *)(param_1 + 0xff0) + 5) = bVar14;
    **(uint **)(param_1 + 0xff0) = uVar13;
    *(undefined1 *)(*(int *)(param_1 + 0xff0) + 6) = 1;
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): update->BLE_REQ_PUT_COUNTDOWN_TIMER: %d(%02d:%02d:%02d), enable:%d\n",
                    "master_process_put_req",**(undefined4 **)(param_1 + 0xff0),uVar13 / 0xe10,
                    (uVar13 % 0xe10) / 0x3c,(uVar13 % 0xe10) % 0x3c,(uint)bVar14);
      }
      else {
        handle_heartbeat();
      }
    }
    *(uint *)(param_1 + 0x104c) = (uint)*param_2;
    z_spin_lock_valid(param_1 + 0x80);
    *param_3 = 0xc9;
    if (*(char *)(*(int *)(param_1 + 0xff0) + 5) == '\0') {
      return 1;
    }
    uVar21 = 2;
    goto LAB_0002b404;
  case 7:
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): recv#BLE_REQ_PUT_SCHEDULE_TASK\n","master_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
    memcpy(*(undefined4 *)(param_1 + 0xff4),pbVar16,0x16a);
    **(undefined4 **)(param_1 + 0xfec) = *(undefined4 *)(*(int *)(param_1 + 0xff4) + 0x164);
    update_timer_interval(*(undefined4 *)(param_1 + 0xfec),0,1);
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): recv#SCHEDULE_TASK: save\n","master_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0002b17c:
    *(uint *)(param_1 + 0x104c) = (uint)*param_2;
    param_1 = param_1 + 0x80;
LAB_0002b188:
    z_spin_lock_valid(param_1);
    break;
  case 8:
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): recv#BLE_REQ_PUT_TELEPROMPTER_INFO:\n","master_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
    memcpy(*(undefined4 *)(param_1 + 0xffc),pbVar16,0x217);
    if ((param_2[5] == 0) &&
       (fill_memory_buffer(*(undefined4 *)(param_1 + 0xffc),0,0x217), param_2[5] == 0)) {
      return 0;
    }
    uVar21 = 9;
    goto LAB_0002b446;
  case 9:
    if ((int)LOG_LEVEL < 3) {
      return 0;
    }
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return 0;
    }
    DEBUG_PRINT("%s(): recv#BLE_REQ_PUT_NAVIGATION_INFO:\n","master_process_put_req");
    return 0;
  case 10:
    bVar14 = param_2[4];
    uVar20 = (uint)bVar14;
    uVar13 = (uint)(byte)param_1[0xef4];
    bVar1 = param_2[5];
    uVar18 = (uint)bVar1;
    if ((uVar13 != uVar20) || ((byte)param_1[0xef5] != uVar18)) {
      if (2 < (int)LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE_REQ_PUT_WAKEUP_ANGLE new level:%d offset %d\n",
                      "master_process_put_req",uVar20,uVar18);
        }
        else {
          handle_heartbeat("%s(): BLE_REQ_PUT_WAKEUP_ANGLE new level:%d offset %d\n",
                           "master_process_put_req",uVar20,uVar18);
        }
      }
      param_1[0xef4] = bVar14;
      param_1[0xef5] = bVar1;
      goto LAB_0002b17c;
    }
    if (2 < (int)LOG_LEVEL) {
      pcVar7 = "%s(): BLE_REQ_PUT_WAKEUP_ANGLE ignore:%d\n";
      goto LAB_0002b1a0;
    }
    break;
  case 0xc:
    iVar17 = FUN_0002efa8();
    if (iVar17 != 0) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x1004) + 0x195) = 0;
    iVar17 = *(int *)(param_1 + 0x1004);
    goto LAB_0002b4a0;
  case 0xe:
    iVar17 = FUN_0002efa8();
    if (iVar17 != 0) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x1008) + 0x195) = 0;
    iVar17 = *(int *)(param_1 + 0x1008);
LAB_0002b4a0:
    if (*(char *)(iVar17 + 6) == '\0') {
      *(undefined1 *)(iVar17 + 6) = 10;
    }
    *param_3 = 0xc9;
    if (**(int **)(param_1 + 0x1054) == 0xb) {
      return 1;
    }
    uVar21 = 0xb;
LAB_0002b404:
    update_persist_task_status(param_1,uVar21,2);
    return 1;
  case 0x10:
    param_1[0x104c] = '\a';
    param_1[0x104d] = '\0';
    param_1[0x104e] = '\0';
    param_1[0x104f] = '\0';
    pcVar7 = param_1 + 0x80;
    goto LAB_0002b282;
  case 0x13:
    bVar14 = param_2[4];
    if (0 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_REQ_PUT_NOTIFY_EN enable:%d\n","master_process_put_req",(uint)bVar14)
        ;
      }
      else {
        handle_heartbeat();
      }
    }
    FUN_00019ac0((uint)bVar14);
    break;
  case 0x25:
    if (2 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): recv#BLE_REQ_PUT_GLASSES_SETTING,type is 0x%x\n","master_process_put_req"
                    ,(uint)param_2[8]);
      }
      else {
        handle_heartbeat();
      }
    }
    if (param_2[8] != 2) {
      return 0;
    }
    if (1 < (int)LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ble recv raster_config_info:enable is %d, raster_height_gear is %d, canvas_distance_gear is %d\n"
                    ,"master_process_put_req",(uint)param_2[9],(uint)param_2[10],(uint)param_2[0xb])
        ;
      }
      else {
        handle_heartbeat(
                        "%s(): ble recv raster_config_info:enable is %d, raster_height_gear is %d, canvas_distance_gear is %d\n"
                        );
      }
    }
    if (param_2[9] != 1) {
      **(undefined1 **)(param_1 + 0x1018) = 0;
      return 0;
    }
    **(undefined1 **)(param_1 + 0x1018) = 1;
    param_1[0xec0] = param_2[10];
    param_1[0xec1] = param_2[0xb];
    iVar17 = is_panoramic_mode_active();
    if (iVar17 == 0) {
      return 0;
    }
    uVar21 = 0xf;
LAB_0002b446:
    update_persist_task_status(param_1,uVar21,2);
switchD_0002b03a_caseD_3:
    return 0;
  }
LAB_0002b1ac:
  bVar14 = 0xc9;
LAB_0002b2d8:
  *param_3 = bVar14;
  return 1;
}


