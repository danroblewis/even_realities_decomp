/*
 * Function: adc_nfc_run
 * Entry:    00024c14
 * Prototype: undefined adc_nfc_run()
 */


uint adc_nfc_run(void)

{
  int iVar1;
  uint uVar2;
  ushort local_2a;
  int local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  ushort *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  fill_memory_buffer(auStack_24,0,0x14);
  local_1c = &local_2a;
  local_18 = 2;
  local_20 = 8;
  local_14 = 0xc;
  iVar1 = FUN_0005f760(&DRIVER_READY_CHECK_MESSAGE,auStack_24);
  if (iVar1 < 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Could not read (%d)\n\n","adc_nfc_run");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    uVar2 = (uint)local_2a;
    local_28 = uVar2 * 600;
    iVar1 = FUN_0005f60c(0,&local_28);
    if (iVar1 == 0) {
      uVar2 = local_28 >> 0xc;
    }
    else if (iVar1 < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0;
      }
      DEBUG_PRINT("%s():  (value in mV not available)\n\n","adc_nfc_run");
      return 0;
    }
    if (uVar2 - 1 < 0x4af) {
      return uVar2;
    }
  }
  return 0;
}


