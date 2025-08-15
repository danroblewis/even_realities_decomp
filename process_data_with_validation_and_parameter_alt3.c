/*
 * Function: process_data_with_validation_and_parameter_alt3
 * Entry:    00051a5c
 * Prototype: undefined process_data_with_validation_and_parameter_alt3()
 */


undefined4 process_data_with_validation_and_parameter_alt3(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  int local_24;
  undefined4 local_1c [2];
  
  uVar3 = process_data_with_state_management_alt3();
  uStack_28 = (uint)uVar3;
  if ((int)uStack_28 < 0) {
    uVar2 = 0xe;
  }
  else {
    local_24 = setup_device_buffer_with_validation(uStack_28 & 0xff,local_1c);
    if (local_24 == 0) {
      uVar1 = FUN_0007f012(local_1c[0]);
      *(undefined1 *)((ulonglong)uVar3 >> 0x20) = uVar1;
      FUN_0007ef7e(local_1c[0]);
      uVar2 = 0;
    }
    else {
      local_2c = "Failed to open flash area ID %u: %d";
      local_30 = 4;
      call_system_cleanup(&DAT_00088208,0x2040,&local_30);
      uVar2 = 10;
    }
  }
  return uVar2;
}


