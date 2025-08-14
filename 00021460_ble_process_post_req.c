/*
 * Function: ble_process_post_req
 * Entry:    00021460
 * Prototype: undefined __stdcall ble_process_post_req(undefined4 param_1, undefined4 packet, undefined4 param_3)
 */


undefined4 ble_process_post_req(int param_1,byte *packet,int param_3)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 returnStatus;
  byte bVar8;
  code *pcVar9;
  undefined1 *puVar10;
  byte command_id;
  int iVar11;
  undefined4 *puVar12;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined1 auStack_9c [128];
  
  _command_id = (uint)*packet;
  if (_command_id - 1 < 0x27) {
    ble_process_put_req(param_1,packet,param_3);
    return 0;
  }
  if (_command_id - 0x29 < 0x1d) {
    ble_process_get_req((byte)param_1,packet,(byte)param_3);
    return 0;
  }
  if (9 < _command_id - 0x47) {
    if (5 < (_command_id + 0xf & 0xff)) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): tx error req_type. %d\n","ble_process_req_dispatch",_command_id);
        }
        else {
          handle_heartbeat();
        }
      }
      uVar7 = 3;
      pcVar9 = *(code **)(param_1 + 0xc);
      puVar6 = (undefined4 *)&DAT_0009d69e;
      goto LAB_0002151a;
    }
    local_a0 = 0;
    fill_memory_buffer(auStack_9c,0,0x11);
    if (_command_id == 0xf4) {
      FUN_0007c20a(param_1);
      return 0;
    }
    if (_command_id == 0xf5) {
      FUN_00021334(param_1,param_3);
      return 0;
    }
    if (_command_id == 0xf1) {
      if ((*(byte *)(param_3 + 2) & 0xfd) == 0xc9) {
        return 0;
      }
      if (*(byte *)(param_3 + 2) == 0xcc) {
        send_dmic_msg(param_1);
        return 0;
      }
      if (1 < LOG_LEVEL) {
        _command_id = 0xf1;
LAB_00021986:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): @tx error post req_type: %d\n","ble_process_report_response",
                      _command_id);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else if (1 < LOG_LEVEL) goto LAB_00021986;
    uVar7 = local_a0;
    local_a0._3_1_ = SUB41(uVar7,3);
    local_a0._0_3_ = CONCAT12(0x15,CONCAT11(0xca,(undefined1)local_a0));
    strcpy_safe((int)&local_a0 + 2,"error post req.");
    uVar7 = 0x14;
    pcVar9 = *(code **)(param_1 + 0xc);
    puVar6 = &local_a0;
    goto LAB_0002151a;
  }
  puVar12 = *(undefined4 **)(param_1 + 0x10);
  local_b4 = 0;
  fill_memory_buffer(local_b0);
  puVar6 = puVar12 + 1;
  *puVar12 = *(undefined4 *)packet;
  *(uint *)(param_1 + 0x14) = *(ushort *)(packet + 2) + 4;
  local_b4 = CONCAT31(local_b4._1_3_,*packet);
  switch(*packet) {
  case 0x47:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): *****will unbond current bt connection*****\n\n","ble_process_post_req");
      }
      else {
        handle_heartbeat();
      }
    }
    local_b4._0_2_ = CONCAT11(0xc9,(undefined1)local_b4);
    (**(code **)(param_1 + 0xc))(&local_b4,0x14);
    iVar4 = get_ancs_connection_handle();
    if (iVar4 == 0) {
      return 0;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): bt_conn_disconnect because recv unpair\n","ble_process_post_req");
      }
      else {
        handle_heartbeat();
      }
    }
    bt_connection_disconnect(iVar4,0x13);
    return 0;
  default:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): @tx error post req_type: %d\n","ble_process_post_req");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar7 = local_b4;
    local_b4._0_2_ = CONCAT11(0xca,(undefined1)local_b4);
    local_b4._3_1_ = SUB41(uVar7,3);
    local_b4._0_3_ = CONCAT12(0x15,(undefined2)local_b4);
    strcpy_safe((int)&local_b4 + 2,"error post req.");
    break;
  case 0x49:
  case 0x4d:
    goto switchD_000214c8_caseD_49;
  case 0x4a:
    **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)packet;
    memcpy(puVar6,param_3 + 1,*(ushort *)(packet + 2) - 1);
    *(uint *)(param_1 + 0x14) = *(ushort *)(packet + 2) + 4;
    goto switchD_000214c8_caseD_49;
  case 0x4b:
    post_notification_cmd_process(param_1,packet,param_3);
    return 0;
  case 0x4c:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ble_process_post_req BLE_REQ_POST_DELETE_NOTIFICATION_MSG\n",
                    "ble_process_post_req");
      }
      else {
        handle_heartbeat();
      }
    }
    memcpy(puVar6,param_3 + 1,*(ushort *)(packet + 2) - 1);
switchD_000214c8_caseD_49:
    spi_master_transaction_debug(param_1,&local_a0,8);
    local_b4._0_2_ = CONCAT11(0xc9,(undefined1)local_b4);
    break;
  case 0x4e:
    if (*(short *)(packet + 2) != 0) {
      fill_memory_buffer(&DAT_2000ffa7,0,0x158);
      if ((uint)*(byte *)(param_3 + 3) == *(byte *)(param_3 + 2) - 1) {
        returnStatus = 0xc9;
      }
      else {
        iVar4 = get_work_mode();
        uVar7 = *(undefined4 *)(iVar4 + 0x100c);
        iVar4 = get_work_mode();
        copy_to_work_mode_buffer(uVar7,0x199,*(undefined1 *)(iVar4 + 0xcc),1);
        set_work_mode_flags(*(undefined1 *)(param_3 + 1),1);
        returnStatus = 0xcb;
      }
      local_b4._0_2_ = CONCAT11(returnStatus,(undefined1)local_b4);
      validate_memory_bounds(&DAT_2000ffa7,param_3 + 9,*(ushort *)(packet + 2) - 9,0x158);
    }
    if (*(char *)(param_3 + 3) == '\0') {
      iVar4 = get_work_mode();
      fill_memory_buffer(*(int *)(iVar4 + 0x100c) + 7,0,400);
      iVar4 = get_work_mode();
      iVar4 = *(int *)(iVar4 + 0x100c);
      *(undefined1 *)(iVar4 + 0x197) = 0;
      *(undefined1 *)(iVar4 + 0x198) = 0;
      iVar4 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar4 + 0x100c) + 1) = *(undefined1 *)(param_3 + 4);
      bVar8 = *(byte *)(param_3 + 5);
      bVar3 = *(byte *)(param_3 + 6);
      iVar4 = get_work_mode();
      *(ushort *)(*(int *)(iVar4 + 0x100c) + 2) = (ushort)bVar8 * 0x100 + (ushort)bVar3;
      iVar4 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar4 + 0x100c) + 4) = *(undefined1 *)(param_3 + 7);
      iVar4 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar4 + 0x100c) + 5) = *(undefined1 *)(param_3 + 8);
    }
    iVar4 = get_work_mode();
    iVar11 = *(int *)(iVar4 + 0x100c);
    iVar4 = get_work_mode();
    memcpy(*(ushort *)(*(int *)(iVar4 + 0x100c) + 0x197) + 7 + iVar11,&DAT_2000ffa7,
           *(ushort *)(packet + 2) - 9);
    iVar4 = get_work_mode();
    *(short *)(*(int *)(iVar4 + 0x100c) + 0x197) =
         *(short *)(*(int *)(iVar4 + 0x100c) + 0x197) + *(short *)(packet + 2) + -9;
    uVar2 = *(ushort *)(packet + 2);
    *(ushort *)((int)puVar12 + 2) = uVar2;
    *(uint *)(param_1 + 0x14) = uVar2 + 4;
    if ((uint)*(byte *)(param_3 + 3) == *(byte *)(param_3 + 2) - 1) {
      spi_master_transaction_debug(param_1,&local_a0,8);
      bVar8 = *(byte *)(param_3 + 4) & 0xf0;
      if (bVar8 == 0x60) {
        enable_dmic_stream();
        iVar4 = get_work_mode();
        **(undefined1 **)(iVar4 + 0x100c) = 10;
      }
      else {
        if (bVar8 == 0x70) {
          iVar4 = get_work_mode();
          returnStatus = 0xf;
          puVar10 = *(undefined1 **)(iVar4 + 0x100c);
LAB_00021706:
          *puVar10 = returnStatus;
          iVar4 = get_work_mode();
          returnStatus = 0;
        }
        else {
          iVar4 = get_work_mode();
          bVar8 = *(byte *)(param_3 + 4) & 0xf0;
          if (**(char **)(iVar4 + 0x100c) == '\x06') {
            if (bVar8 == 0x40) goto LAB_0002175e;
          }
          else if (bVar8 != 0x30) {
            if (bVar8 == 0x40) {
LAB_0002175e:
              iVar4 = get_work_mode();
              **(undefined1 **)(iVar4 + 0x100c) = 8;
              iVar4 = get_work_mode();
              *(undefined1 *)(iVar4 + 0xdb) = 8;
            }
            else {
              iVar4 = get_work_mode();
              if (6 < **(byte **)(iVar4 + 0x100c)) {
                bVar8 = *(byte *)(param_3 + 4) & 0xf0;
                if (bVar8 == 0x40) goto LAB_0002175e;
                if (bVar8 == 0x50) {
                  iVar4 = get_work_mode();
                  returnStatus = 9;
                  puVar10 = *(undefined1 **)(iVar4 + 0x100c);
                  goto LAB_00021706;
                }
              }
            }
            goto LAB_000216b4;
          }
          iVar4 = get_work_mode();
          **(undefined1 **)(iVar4 + 0x100c) = 7;
          iVar4 = get_work_mode();
          returnStatus = 0x10;
        }
        *(undefined1 *)(iVar4 + 0xdb) = returnStatus;
      }
    }
LAB_000216b4:
    local_b4._0_3_ = CONCAT12(*(undefined1 *)(param_3 + 1),(undefined2)local_b4);
    local_b4 = CONCAT13(*(undefined1 *)(param_3 + 2),(undefined3)local_b4);
    local_b0[0] = *(undefined1 *)(param_3 + 3);
    iVar4 = get_work_mode();
    bVar8 = *(byte *)(param_3 + 3);
    bVar3 = *(byte *)(param_3 + 2);
    if (iVar4 == 1) {
      if ((uint)bVar8 == bVar3 - 1) {
        DISPLAY_EVENT_TYPE = 0x4e;
        PACKET_COUNT = bVar8;
        CURRENT_PACKET_INDEX = bVar3;
        set_work_mode_flags(*(undefined1 *)(param_3 + 1),0);
        return 0;
      }
    }
    else if ((uint)bVar8 == bVar3 - 1) {
      set_work_mode_flags(*(undefined1 *)(param_3 + 1),0);
    }
    break;
  case 0x4f:
    **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)packet;
    memcpy(puVar6,param_3 + 1,*(ushort *)(packet + 2) - 1);
    spi_master_transaction_debug(param_1,&local_a0,8);
    uVar7 = local_b4;
    local_b4._0_2_ = CONCAT11((undefined1)local_a0,(undefined1)local_b4);
    local_b4._3_1_ = SUB41(uVar7,3);
    local_b4._0_3_ = CONCAT12(local_a0._1_1_,(undefined2)local_b4);
    break;
  case 0x50:
    if (*(short *)(param_3 + 1) == *(short *)(packet + 2)) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received Dashboard lock command.\n","ble_process_post_req");
        }
        else {
          handle_heartbeat();
        }
      }
      cVar1 = *(char *)(param_3 + 4);
      pcVar5 = (char *)get_work_mode();
      if (*pcVar5 == '\x01') {
        if (cVar1 == '\x01') {
          if ((int)(DASHBOARD_LOCK_STATUS << 0x1e) < 0) {
            return 0;
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master exec dashboard lock process.\n","ble_process_post_req");
            }
            else {
              handle_heartbeat();
            }
          }
          DASHBOARD_LOCK_STATUS = DASHBOARD_LOCK_STATUS | 2;
          DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL & 0xfffffffd;
          schedule_dashboard_lock_task(&DASHBOARD_LOCK_CONTEXT,DASHBOARD_LOCK_CONTROL,0x8000,0,0,0);
          return 0;
        }
        if (LOG_LEVEL < 1) {
          return 0;
        }
        pcVar5 = "%s(): received error dashboard lock action command.\n";
      }
      else {
        if (LOG_LEVEL < 1) {
          return 0;
        }
        pcVar5 = "%s(): slave received error dashboard lock command! can\'t exec\n";
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0;
      }
      DEBUG_PRINT(pcVar5,"ble_process_post_req");
      return 0;
    }
    if (LOG_LEVEL < 2) {
      return 0;
    }
    if (IS_DEBUG != 0) {
      handle_heartbeat("%s(): packet length error,input data length = %d,packet data length = %d\n",
                       "ble_process_post_req");
      return 0;
    }
    DEBUG_PRINT("%s(): packet length error,input data length = %d,packet data length = %d\n",
                "ble_process_post_req");
    return 0;
  }
  uVar7 = 0x14;
  pcVar9 = *(code **)(param_1 + 0xc);
  puVar6 = &local_b4;
LAB_0002151a:
  (*pcVar9)(puVar6,uVar7);
  return 0;
}


