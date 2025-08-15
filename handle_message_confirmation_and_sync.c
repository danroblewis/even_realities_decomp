/*
 * Function: handle_message_confirmation_and_sync
 * Entry:    000275fc
 * Prototype: undefined handle_message_confirmation_and_sync()
 */


void handle_message_confirmation_and_sync(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = get_work_mode();
  if (-1 < (int)((uint)*(byte *)(iVar3 + 0xe4) << 0x1d)) {
    iVar3 = get_work_mode();
    bVar2 = *(byte *)(iVar3 + 0x6de);
    if (((bVar2 & 4) == 0) && (iVar3 = get_message_buffer_data(), iVar3 != 0)) {
      pcVar4 = (char *)get_work_mode();
      if (*pcVar4 == '\x01') {
        bVar1 = *(byte *)(iVar3 + 0xd);
        if (bVar1 == 1) {
          DISPLAY_UI_CONFIG = bVar1;
          uVar5 = get_work_mode();
          iVar6 = sync_to_slave(uVar5,10,iVar3 + 8,4);
          if (iVar6 < 3000) {
            set_message_state(*(undefined1 *)(iVar3 + 0xc),2);
            return;
          }
        }
        else if (bVar1 == 3) {
          uVar5 = get_work_mode();
          iVar6 = sync_to_slave(uVar5,0xb,iVar3 + 8,4);
          if (iVar6 < 3000) {
            set_message_state(*(undefined1 *)(iVar3 + 0xc),4);
            confirm_message(*(undefined4 *)(iVar3 + 8));
            DISPLAY_UI_CONFIG = bVar2 & 4;
          }
        }
      }
      else if (MESSAGE_CONFIRMATION_FLAG == '\0') {
        if (*(char *)(iVar3 + 0xd) == '\0') {
          DISPLAY_UI_CONFIG = 1;
          uVar5 = get_work_mode();
          process_message_and_sync(uVar5,0xb,iVar3,0xda);
          DAT_20018d82 = '\0';
        }
        else if (*(char *)(iVar3 + 0xd) == '\x02') {
          DAT_20018d82 = DAT_20018d82 + 1;
          if (DAT_20018d82 < 10) {
            uVar5 = get_work_mode();
            process_message_and_sync(uVar5,0xc,iVar3 + 0xda);
            return;
          }
          DAT_20018d82 = MESSAGE_CONFIRMATION_FLAG;
          set_message_state(*(undefined1 *)(iVar3 + 0xc),0);
          DISPLAY_UI_CONFIG = 0;
        }
      }
    }
  }
  return;
}


