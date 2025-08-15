/*
 * Function: process_data_with_callback_validation_alt2
 * Entry:    000517d8
 * Prototype: undefined process_data_with_callback_validation_alt2()
 */


int process_data_with_callback_validation_alt2(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  int iVar1;
  undefined8 uVar2;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  int local_24;
  undefined4 local_1c;
  
  uVar2 = process_data_with_state_management_alt3();
  uStack_28 = (uint)uVar2;
  if ((int)uStack_28 < 0) {
    iVar1 = 0xe;
  }
  else {
    local_24 = setup_device_buffer_with_validation(uStack_28 & 0xff,&local_1c);
    if (local_24 == 0) {
      iVar1 = FUN_0007ef80(local_1c,(int)((ulonglong)uVar2 >> 0x20),extraout_r2,in_r3);
      FUN_0007ef7e(local_1c);
      if (iVar1 != 0) {
        local_2c = "Failed to read data from flash: %d";
        local_30 = 3;
        uStack_28 = iVar1;
        call_system_cleanup(&DAT_00088208,0x1840,&local_30);
        iVar1 = 0xb;
      }
    }
    else {
      local_2c = "Failed to open flash area ID %u: %d";
      local_30 = 4;
      call_system_cleanup(&DAT_00088208,0x2040,&local_30);
      iVar1 = 10;
    }
  }
  return iVar1;
}


