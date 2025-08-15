/*
 * Function: process_timeout_message_state_and_send_response
 * Entry:    0003ae6c
 * Prototype: undefined process_timeout_message_state_and_send_response()
 */


void process_timeout_message_state_and_send_response
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  pcVar3 = (char *)get_work_mode();
  if (*pcVar3 == '\x02') {
    return;
  }
  local_18 = 0xa22;
  local_10 = 0;
  uStack_c = 0;
  local_14 = 1;
  uVar1 = calculate_next_timeout_message_state();
  local_14._0_2_ = CONCAT11(uVar1,(undefined1)local_14);
  iVar4 = get_work_mode();
  local_14._0_3_ = CONCAT12(*(undefined1 *)(*(int *)(iVar4 + 0xfec) + 0x5f),(undefined2)local_14);
  iVar4 = get_work_mode();
  local_14 = CONCAT13(*(undefined1 *)(*(int *)(iVar4 + 0xfec) + 100),(undefined3)local_14);
  iVar4 = get_work_mode();
  local_10 = CONCAT31(local_10._1_3_,*(undefined1 *)(*(int *)(iVar4 + 0xfec) + 0x65));
  if (DASHBOARD_DATA_VERSION == '\0') {
    cVar2 = get_work_mode_status();
  }
  else if (DASHBOARD_DATA_VERSION == '\x01') {
    cVar2 = get_and_log_system_parameter();
  }
  else {
    if (DASHBOARD_DATA_VERSION != '\x02') goto LAB_0003aed8;
    cVar2 = get_and_log_system_parameter_alt();
  }
  local_10._0_2_ = CONCAT11(cVar2 + '\x01',(undefined1)local_10);
LAB_0003aed8:
  send_response_data_to_msgqueue(&local_18,10);
  enqueue_message_to_queue_with_work_mode_check();
  return;
}


