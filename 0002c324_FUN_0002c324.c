/*
 * Function: FUN_0002c324
 * Entry:    0002c324
 * Prototype: undefined FUN_0002c324()
 */


void FUN_0002c324(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0007ce40();
  if (IS_DEBUG == 0) {
    uVar2 = FUN_00034410();
    DEBUG_PRINT("[csh_debug_msg] set touch key flag get_msg_show_state() %d\n",uVar2);
  }
  else {
    uVar2 = FUN_00034410();
    handle_heartbeat("[csh_debug_msg] set touch key flag get_msg_show_state() %d\n",uVar2);
  }
  iVar3 = FUN_00034410();
  if ((iVar3 == 2) || (iVar3 = FUN_00034410(), iVar3 == 4)) {
    FUN_00034274();
    iVar3 = get_work_mode();
    uVar1 = FUN_0002c30c(*(undefined1 *)(iVar3 + 0xfea),0xf);
    iVar3 = get_work_mode();
    *(undefined1 *)(iVar3 + 0xdb) = uVar1;
  }
  iVar3 = get_work_mode();
  if (*(char *)(iVar3 + 0xdd) == '\0') {
    FUN_0003443c(0);
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
    FUN_0003439c();
    DAT_20018d9e = 1;
  }
  return;
}


