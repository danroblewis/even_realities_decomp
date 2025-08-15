/*
 * Function: handle_message_enqueue_alt
 * Entry:    00019bfc
 * Prototype: undefined handle_message_enqueue_alt()
 */


int handle_message_enqueue_alt(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_20007540 == 0x14) {
    manage_ble_connection_state_comprehensive(&DAT_2000751c,&DAT_20010257,0,0);
  }
  memcpy(&DAT_20010257,param_1,200);
  iVar1 = enqueue_message_to_queue(&DAT_2000751c,&DAT_20010257,0,0);
  if (iVar1 != 0) {
    DEBUG_PRINT("enqueue_debug failed\r\n");
  }
  return iVar1;
}


