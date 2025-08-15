/*
 * Function: local_esbs_ipc_service_recv
 * Entry:    00015960
 * Prototype: undefined local_esbs_ipc_service_recv()
 */


undefined4 local_esbs_ipc_service_recv(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  char *format_string;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  byte local_24 [4];
  byte local_20;
  undefined4 local_1f;
  
  local_30 = 0;
  fill_memory_buffer(&uStack_2c,0,0x12);
  puVar2 = &local_30;
  pbVar7 = param_2 + 0xb;
  do {
    pbVar8 = pbVar7;
    puVar6 = puVar2;
    uVar4 = *(undefined4 *)(pbVar8 + 4);
    pbVar7 = pbVar8 + 8;
    *puVar6 = *(undefined4 *)pbVar8;
    puVar6[1] = uVar4;
    puVar2 = puVar6 + 2;
  } while (pbVar7 != param_2 + 0x1b);
  puVar6[2] = *(undefined4 *)pbVar7;
  *(byte *)(puVar6 + 3) = pbVar8[0xc];
  if (uStack_2c._2_1_ == *(char *)(param_1 + 0xda)) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    format_string = "%s(): slave recv same package\n";
    goto LAB_000159b4;
  }
  if ((uStack_2c._2_1_ != (char)(*(char *)(param_1 + 0xda) + '\x01')) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): ###############loss package new_data_pkg->package_id %d data_pkg->package_id %d\n"
                  ,"local_esbs_ipc_service_recv");
    }
    else {
      handle_heartbeat("%s(): ###############loss package new_data_pkg->package_id %d data_pkg->package_id %d\n"
                       ,"local_esbs_ipc_service_recv");
    }
  }
  if ((local_30 & 0x3f) == 1) {
    if (*(char *)(param_1 + 0xfe6) == '\x01') {
      *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
      if (LOG_LEVEL < 1) {
        return 0;
      }
      format_string = "%s(): slave recv suspend package\n";
      goto LAB_000159b4;
    }
  }
  else if (((local_30 & 0x3f) == 2) && (*(char *)(param_1 + 0xfe6) == '\0')) {
    *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
    if (LOG_LEVEL < 1) {
      return 0;
    }
    format_string = "%s(): slave recv resume package\n";
    goto LAB_000159b4;
  }
  if (((*(char *)(param_1 + 0xd5) == '\t') || (*(char *)(param_1 + 0xd5) == '\v')) ||
     (*(char *)(param_1 + 0xd5) == '\n')) {
    if ((local_30 & 0xc0) == 0x80) {
      if (*(char *)(param_1 + 0xce) != '\0') {
        *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
        if (LOG_LEVEL < 1) {
          return 0;
        }
        format_string = "%s(): slave recv up recving\n";
        goto LAB_000159b4;
      }
    }
    else if (((local_30 & 0xc0) == 0x40) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
      if (LOG_LEVEL < 1) {
        return 0;
      }
      format_string = "%s(): slave recv down recving\n";
      goto LAB_000159b4;
    }
  }
  else if ((*(char *)(param_1 + 0xd5) == '\x10') && (*(char *)(param_1 + 0xce) != '\0')) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): slave even ai recv down recving\n","local_esbs_ipc_service_recv");
      }
      else {
        handle_heartbeat();
      }
    }
    *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
    return 0;
  }
  if ((local_30._1_1_ != '\x06') && (local_30._1_1_ != '\0')) {
    *(byte *)(param_1 + 0xe9) = param_2[3];
    bVar1 = param_2[4];
    *(byte *)(param_1 + 0xea) = bVar1;
    if ((local_30 & 0x3f) == 0) {
      if (((local_30 & 0xc0) == 0x80) ||
         ((local_30._1_1_ == '\x10' && (**(byte **)(WORK_MODE + 0x100c) - 6 < 4)))) {
        if ((*(byte *)(param_1 + 0xcc) != param_2[3]) &&
           (*(byte *)(*(int *)(param_1 + 0x1024) + 0x200) != param_2[3])) {
          *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
          if (LOG_LEVEL < 1) {
            return 0;
          }
          format_string = "%s(): slave recv wrong up package\n";
          goto LAB_000159b4;
        }
      }
      else if ((*(byte *)(param_1 + 0xcd) != bVar1) &&
              (*(byte *)(*(int *)(param_1 + 0x1028) + 0x200) != bVar1)) {
        *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
        if (LOG_LEVEL < 1) {
          return 0;
        }
        format_string = "%s(): slave recv wrong down package\n";
LAB_000159b4:
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0;
        }
        DEBUG_PRINT(format_string,"local_esbs_ipc_service_recv");
        return 0;
      }
    }
  }
  *(byte *)(param_1 + 0xc9) = *(byte *)(param_1 + 0xc9) & 0xc0 | *param_2 & 0x3f;
  *(byte *)(param_1 + 0xca) = param_2[1];
  *(byte *)(param_1 + 0xcb) = param_2[2];
  set_work_mode_timestamp(*(undefined4 *)(param_2 + 7));
  uVar5 = *(undefined1 *)(param_1 + 0xd5);
  local_30._0_2_ = CONCAT11(uVar5,(byte)local_30);
  puVar2 = (undefined4 *)(param_1 + 0xd4);
  pbVar7 = (byte *)&local_30;
  do {
    pbVar8 = pbVar7;
    puVar6 = puVar2;
    uVar4 = *(undefined4 *)(pbVar8 + 4);
    pbVar7 = pbVar8 + 8;
    *puVar6 = *(undefined4 *)pbVar8;
    puVar6[1] = uVar4;
    puVar2 = puVar6 + 2;
  } while (pbVar7 != &local_20);
  puVar6[2] = *(undefined4 *)pbVar7;
  *(byte *)(puVar6 + 3) = pbVar8[0xc];
  *(byte *)(param_1 + 0xee4) = (byte)local_30 >> 6;
  **(undefined4 **)(param_1 + 0xfec) = *(undefined4 *)(param_2 + 7);
  if (*(int *)(*(int *)(param_1 + 0xff4) + 0x164) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xff4) + 0x164) = **(undefined4 **)(param_1 + 0xfec);
  }
  *(byte *)(param_1 + 0xeb) = (byte)local_30 >> 6;
  *(undefined1 *)(param_1 + 0xec) = uVar5;
  if ((int)((uint)local_20 << 0x1d) < 0) {
    initialize_system_data_structures();
    *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xfb;
  }
  iVar3 = WORK_MODE;
  switch(local_30 & 0x3f) {
  case 10:
    if ((int)((uint)*(byte *)(WORK_MODE + 0x6de) << 0x1d) < 0) {
      return 0;
    }
    iVar3 = find_data_by_parameter(local_1f);
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ##########%s %d SYNC_DISPLAY_CMD_COMFIRM_NOTIFY_FIRST slave before\n",
                    "local_esbs_ipc_service_recv","local_esbs_ipc_service_recv",0x2fd);
      }
      else {
        handle_heartbeat("%s(): ##########%s %d SYNC_DISPLAY_CMD_COMFIRM_NOTIFY_FIRST slave before\n"
                         ,"local_esbs_ipc_service_recv","local_esbs_ipc_service_recv",0x2fd);
      }
    }
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0xd) == '\0')) {
      *(undefined1 *)(iVar3 + 0xd) = 2;
    }
    goto switchD_00015c70_caseD_c;
  case 0xb:
    if ((int)((uint)*(byte *)(WORK_MODE + 0x6de) << 0x1d) < 0) {
      return 0;
    }
    iVar3 = find_data_by_parameter(local_1f);
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ##########%s %d SYNC_DISPLAY_CMD_COMFIRM_NOTIFY_END slave before\n",
                    "local_esbs_ipc_service_recv","local_esbs_ipc_service_recv",0x30a);
      }
      else {
        handle_heartbeat("%s(): ##########%s %d SYNC_DISPLAY_CMD_COMFIRM_NOTIFY_END slave before\n",
                         "local_esbs_ipc_service_recv","local_esbs_ipc_service_recv",0x30a);
      }
    }
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0xd) != '\x02')) goto switchD_00015c70_caseD_c;
    *(undefined1 *)(iVar3 + 0xd) = 4;
    confirm_message(local_1f);
    uVar5 = 0;
    puVar9 = &DISPLAY_UI_CONFIG;
    break;
  case 0xc:
    goto switchD_00015c70_caseD_c;
  case 0xd:
    clear_work_mode_flags_and_buffers(0);
    iVar3 = WORK_MODE;
    **(undefined1 **)(WORK_MODE + 0x100c) = 2;
    if (**(int **)(iVar3 + 0x1054) != 0x10) {
      update_persist_task_status(iVar3,0x10);
    }
    goto switchD_00015c70_caseD_c;
  case 0xe:
    uVar5 = 4;
    puVar9 = *(undefined1 **)(WORK_MODE + 0x100c);
    break;
  case 0xf:
    uVar5 = 6;
    puVar9 = *(undefined1 **)(WORK_MODE + 0x100c);
    break;
  case 0x10:
    **(undefined1 **)(WORK_MODE + 0x100c) = 0xb;
    *(undefined1 *)(iVar3 + 0xdb) = 8;
    goto switchD_00015c70_caseD_c;
  case 0x11:
    uVar5 = 0xe;
    puVar9 = *(undefined1 **)(WORK_MODE + 0x100c);
    break;
  case 0x12:
    uVar5 = 0x10;
    puVar9 = *(undefined1 **)(WORK_MODE + 0x100c);
    break;
  default:
    z_spin_lock_valid(param_1 + 0x20);
    goto switchD_00015c70_caseD_c;
  }
  *puVar9 = uVar5;
switchD_00015c70_caseD_c:
  if ((((*(byte *)(param_1 + 0xc9) & 0x3f) == 3) && ((*(byte *)(param_1 + 0xc9) & 0xc0) == 0x80)) &&
     (*(char *)(param_1 + 0xca) == '\x01')) {
    switch_to_dfu_mode(param_1 + 0x68);
  }
  return 0;
}


