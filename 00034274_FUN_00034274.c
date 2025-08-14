/*
 * Function: FUN_00034274
 * Entry:    00034274
 * Prototype: undefined FUN_00034274()
 */


undefined1 FUN_00034274(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = get_work_mode();
  bVar1 = *(byte *)(iVar3 + 0xdd);
  if (bVar1 != 0) {
    iVar3 = bVar1 - 1;
    if ((&DAT_20007db0)[iVar3 * 0x6d] != 0) {
      clear_timeout_message(1);
      if (iVar3 == 0) {
        DAT_2001a22a = '\0';
      }
      else {
        DAT_2001a22a = bVar1 - 2;
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("[csh_debug_msg]msg_count_dec unread_msg_num is %d \n",iVar3);
      }
      else {
        handle_heartbeat();
      }
      iVar3 = get_work_mode();
      uVar2 = FUN_00033cf8();
      *(undefined1 *)(iVar3 + 0xdd) = uVar2;
    }
  }
  iVar3 = get_work_mode();
  return *(undefined1 *)(iVar3 + 0xdd);
}


