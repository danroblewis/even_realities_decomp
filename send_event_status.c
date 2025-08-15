/*
 * Function: send_event_status
 * Entry:    000276ec
 * Prototype: undefined send_event_status()
 */


void send_event_status(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = get_bluetooth_manager();
  if ((2 < param_1 - 0xf0U) || (PENDING_EVENT_STATUS == -1)) {
    PENDING_EVENT_STATUS = (char)param_1;
    if ((*(char *)(iVar1 + 0x248) == '\0') && (*(int *)(iVar1 + 0x220) == 0)) {
      if (*(char *)(iVar1 + 0x248) == '\0') {
        z_spin_lock_valid(iVar1 + 0x218);
        delay_with_timing(1);
        return;
      }
    }
    else {
      local_14 = CONCAT13(local_14._3_1_,0xcb0000);
      local_14._0_2_ = CONCAT11(PENDING_EVENT_STATUS,0xf5);
      handle_message_enqueue(&local_14,3);
      PENDING_EVENT_STATUS = -1;
    }
  }
  return;
}


