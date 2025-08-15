/*
 * Function: parse_ncs_notification
 * Entry:    00034980
 * Prototype: undefined parse_ncs_notification()
 */


void parse_ncs_notification(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar1 = parse_json_string_wrapper();
  if (iVar1 != 0) {
    iVar2 = search_linked_list_by_string_value(iVar1,"ncs_notification");
    if (iVar2 == 0) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): NOT FOUND NCS JSON NODE!\n","parse_ncs_notification");
        }
        else {
          handle_heartbeat();
        }
      }
      cleanup_json_node(iVar1);
      return;
    }
    iVar3 = search_linked_list_by_string_value(iVar2,"app_identifier");
    iVar4 = search_linked_list_by_string_value(iVar2,"title");
    iVar5 = search_linked_list_by_string_value(iVar2,"subtitle");
    iVar6 = search_linked_list_by_string_value(iVar2,"message");
    iVar7 = search_linked_list_by_string_value(iVar2,"date");
    iVar8 = search_linked_list_by_string_value(iVar2,"display_name");
    iVar9 = search_linked_list_by_string_value(iVar2,"msg_id");
    iVar2 = search_linked_list_by_string_value(iVar2,"action");
    fill_memory_buffer(param_2,0,0x1b4);
    if (iVar3 != 0) {
      safe_string_copy_with_padding(param_2 + 4,*(undefined4 *)(iVar3 + 0x10),0x1f);
      iVar3 = compare_byte_arrays(*(undefined4 *)(iVar3 + 0x10),"com.android.phone_incall");
      if (iVar3 == 0) {
        uVar10 = get_work_mode_timestamp();
        param_2[1] = uVar10;
      }
    }
    if (iVar4 != 0) {
      safe_string_copy_with_padding(param_2 + 0x14,*(undefined4 *)(iVar4 + 0x10),0x1f);
    }
    if (iVar6 != 0) {
      safe_string_copy_with_padding(param_2 + 0x24,*(undefined4 *)(iVar6 + 0x10),0xff);
    }
    if (iVar5 != 0) {
      safe_string_copy_with_padding(param_2 + 0x1c,*(undefined4 *)(iVar5 + 0x10),0x1f);
    }
    if (iVar7 != 0) {
      safe_string_copy_with_padding(param_2 + 100,*(undefined4 *)(iVar7 + 0x10),0x20);
    }
    if (iVar8 != 0) {
      safe_string_copy_with_padding(param_2 + 0xc,*(undefined4 *)(iVar8 + 0x10),0x1f);
    }
    if (iVar9 != 0) {
      param_2[2] = *(undefined4 *)(iVar9 + 0x14);
    }
    if (iVar2 != 0) {
      param_2[0x6c] = *(undefined4 *)(iVar2 + 0x14);
    }
    uVar10 = get_work_mode_timestamp();
    *param_2 = uVar10;
    cleanup_json_node(iVar1);
    log_notification_data("#device-receiver",param_2);
    return;
  }
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return;
    }
    DEBUG_PRINT("%s(): error root JSON NODE!\n","parse_ncs_notification");
    return;
  }
  return;
}


