/*
 * Function: update_burial_point_to_flash
 * Entry:    00023014
 * Prototype: undefined update_burial_point_to_flash()
 */


undefined4 update_burial_point_to_flash(int param_1)

{
  int iVar1;
  char *format_string;
  undefined1 auStack_d0 [196];
  
  fill_memory_buffer(auStack_d0,0,0xc0);
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): update_burial_point_to_flash!!!\n","update_burial_point_to_flash");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = flash_settings_read(0x135000,auStack_d0,0xc0);
  if (iVar1 == 0) {
    iVar1 = memcmp_byte_arrays(auStack_d0,param_1 + 0x10c6,0xc0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = handle_data_verification(0x135000,param_1 + 0x10c6,0xc0);
    if (iVar1 == 0) {
      return 0;
    }
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): burial_point flash_settings_write_and_verify error!\n";
  }
  else {
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): burial_point read error!\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"update_burial_point_to_flash");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}


