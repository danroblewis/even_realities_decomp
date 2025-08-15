/*
 * Function: read_and_validate_whitelist_app_flash_settings
 * Entry:    00034b34
 * Prototype: undefined read_and_validate_whitelist_app_flash_settings()
 */


undefined4 read_and_validate_whitelist_app_flash_settings(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 uStack_15ec;
  byte local_15eb;
  
  fill_memory_buffer(&uStack_15ec,0,0x15e2);
  uVar1 = flash_settings_read(0x131000,&uStack_15ec,0x15e2);
  if (uVar1 == 0) {
    uVar1 = (uint)local_15eb;
    if (uVar1 < 0x65) {
      memcpy(&WHITELIST_APP_JSON_DATA_BUFFER,&uStack_15ec,0x15e2);
      return 0;
    }
    if (IS_DEBUG != 0) {
      uVar3 = 0x36;
      pcVar2 = "[%s-%d] error,appCounts is %d \n";
      goto LAB_00034b66;
    }
    uVar3 = 0x36;
    pcVar2 = "[%s-%d] error,appCounts is %d \n";
  }
  else {
    if (IS_DEBUG != 0) {
      uVar3 = 0x30;
      pcVar2 = "[%s-%d] flash_settings_read error,ret is %d \n";
LAB_00034b66:
      handle_heartbeat(pcVar2,"load_whitelist",uVar3,uVar1);
      return 0xffffffff;
    }
    uVar3 = 0x30;
    pcVar2 = "[%s-%d] flash_settings_read error,ret is %d \n";
  }
  DEBUG_PRINT(pcVar2,"load_whitelist",uVar3,uVar1);
  return 0xffffffff;
}


