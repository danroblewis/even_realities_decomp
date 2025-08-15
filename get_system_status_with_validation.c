/*
 * Function: get_system_status_with_validation
 * Entry:    00033bc4
 * Prototype: undefined get_system_status_with_validation()
 */


undefined4 * get_system_status_with_validation(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(uint)MESSAGE_BUFFER_SYSTEM_STATUS_DATA;
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_20008ec2 == '\0') {
      puVar1 = (undefined4 *)0x0;
      if (MESSAGE_BUFFER_CONFIRMATION_DATA < 4) {
        DAT_20008ec0 = 10;
        return &MESSAGE_BUFFER_MANAGEMENT_SYSTEM;
      }
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


