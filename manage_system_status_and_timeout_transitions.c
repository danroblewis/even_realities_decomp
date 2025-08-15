/*
 * Function: manage_system_status_and_timeout_transitions
 * Entry:    0002c324
 * Prototype: undefined manage_system_status_and_timeout_transitions()
 */


void manage_system_status_and_timeout_transitions(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  get_high_resolution_timestamp();
  if (IS_DEBUG == 0) {
    uVar2 = get_system_status_value();
    DEBUG_PRINT("[csh_debug_msg] set touch key flag get_msg_show_state() %d\n",uVar2);
  }
  else {
    uVar2 = get_system_status_value();
    handle_heartbeat("[csh_debug_msg] set touch key flag get_msg_show_state() %d\n",uVar2);
  }
  iVar3 = get_system_status_value();
  if ((iVar3 == 2) || (iVar3 = get_system_status_value(), iVar3 == 4)) {
    manage_timeout_message_states();
    iVar3 = get_work_mode();
    uVar1 = map_work_mode_to_state_value(*(undefined1 *)(iVar3 + 0xfea),0xf);
    iVar3 = get_work_mode();
    *(undefined1 *)(iVar3 + 0xdb) = uVar1;
  }
  iVar3 = get_work_mode();
  if (*(char *)(iVar3 + 0xdd) == '\0') {
    control_timer_operation(0);
    iVar3 = get_work_mode();
    if ((*(char *)(iVar3 + 0xd5) != '\x01') &&
       (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xee4) == '\x02')) {
      iVar3 = get_work_mode();
      *(undefined1 *)(iVar3 + 0xdb) = 0;
      uVar2 = get_work_mode();
      trigger_screen_state_change("IMU:wakeup:dashboard",uVar2,1);
      return;
    }
  }
  else {
    clear_timeout_message(1);
    advance_timeout_message_state();
    DAT_20018d9e = 1;
  }
  return;
}


