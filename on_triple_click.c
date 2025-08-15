/*
 * Function: on_triple_click
 * Entry:    000289e4
 * Prototype: undefined on_triple_click()
 */


void on_triple_click(void)

{
  int iVar1;
  
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("#############################on_triple_click################################\n");
  }
  else {
    handle_heartbeat();
  }
  if (DAT_20018d8b == '\0') {
    if (DISPLAY_UPDATE_FLAG != '\0') {
      DISPLAY_UPDATE_FLAG = '\0';
    }
    change_work_mode_to(2);
    get_work_mode();
    func_0x0002bdf0();
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0xee4) = 2;
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0xd5) = 3;
    iVar1 = get_work_mode();
    FUN_0007d874(*(undefined1 *)(iVar1 + 0xd5));
    DAT_20018d8b = 1;
    return;
  }
  call_data_verification_if_needed();
  get_work_mode();
  global_system_suspend();
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xee4) = 1;
  display_close_screen(3);
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xd5) = 0;
  DAT_20018d8b = 0;
  return;
}


