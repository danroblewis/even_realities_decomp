/*
 * Function: handle_message_dequeue_alt
 * Entry:    00019c44
 * Prototype: undefined handle_message_dequeue_alt()
 */


int handle_message_dequeue_alt(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_d8 [204];
  
  iVar1 = manage_ble_connection_state_comprehensive(&DAT_2000751c,auStack_d8,0,0);
  if (iVar1 == 0) {
    memcpy(param_1,auStack_d8,200);
  }
  return iVar1;
}


