/*
 * Function: get_message_buffer_data
 * Entry:    00033b88
 * Prototype: undefined get_message_buffer_data()
 */


undefined * get_message_buffer_data(void)

{
  undefined *puVar1;
  undefined4 in_r3;
  
  puVar1 = (undefined *)(uint)MESSAGE_BUFFER_SYSTEM_STATUS_DATA;
  if (puVar1 != (undefined *)0x0) {
    if (DAT_20008ec2 == '\0') {
      puVar1 = (undefined *)0x0;
      if (MESSAGE_BUFFER_CONFIRMATION_DATA < 4) {
        DAT_20008ec0 = 10;
        memcpy(&DAT_20007bf4,&MESSAGE_BUFFER_MANAGEMENT_SYSTEM,0x1b4,10,in_r3);
        puVar1 = &DAT_20007bf4;
      }
    }
    else {
      puVar1 = (undefined *)0x0;
    }
  }
  return puVar1;
}


