/*
 * Function: process_message_with_timeout_and_sync
 * Entry:    0002c3dc
 * Prototype: undefined process_message_with_timeout_and_sync()
 */


undefined4 process_message_with_timeout_and_sync(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  
  sVar5 = 1000;
  DAT_20018d9f = 1;
  do {
    iVar2 = get_message_state_table_entry(10);
    if ((*(char *)(iVar2 + 0x10) == '\0') || (*(char *)(iVar2 + 0xc) == '\0')) break;
    sVar5 = sVar5 + -1;
    get_schedule_timing(0x21,0);
  } while (sVar5 != 0);
  uVar3 = get_work_mode();
  uVar4 = process_message_and_sync(uVar3,9,0);
  if ((uVar4 < 2000) && (iVar2 = get_work_mode(), *(char *)(iVar2 + 0x105a) == '\x02')) {
    iVar2 = 0;
    do {
      if (DAT_20018d8d != '\0') goto LAB_0002c446;
      iVar2 = iVar2 + 1;
      get_schedule_timing(0xccd,0);
    } while (iVar2 != 10);
    if (DAT_20018d8d != '\0') {
LAB_0002c446:
      DAT_20018d8d = 0;
      iVar2 = get_work_mode();
      uVar1 = calculate_next_timeout_message_state();
      *(undefined1 *)(iVar2 + 0xdd) = uVar1;
      manage_system_status_and_timeout_transitions();
      iVar2 = get_work_mode();
      z_spin_lock_valid(iVar2 + 0x38);
      DAT_20018d9f = 0;
      return 0;
    }
  }
  else if (IS_DEBUG == 0) {
    DEBUG_PRINT("#########timeout,should retry !");
  }
  else {
    handle_heartbeat();
  }
  DAT_20018d9f = 0;
  return 0xffffffff;
}


