/*
 * Function: load_burial_point
 * Entry:    000230e0
 * Prototype: undefined load_burial_point()
 */


undefined4 load_burial_point(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = flash_settings_read(0x135000,param_1 + 0x10c6,0xc0,param_4,param_4);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((*(short *)(param_1 + 0x10da) == -1) || (*(char *)(param_1 + 0x10dc) == '\0')) {
      uVar2 = process_data_with_state_management_alt7();
      fill_memory_buffer(param_1 + 0x10ca,0,0xbc);
      *(undefined1 *)(param_1 + 0x10da) = 7;
      *(undefined4 *)(param_1 + 0x10c6) = uVar2;
      *(undefined1 *)(param_1 + 0x10dc) = 1;
    }
  }
  else {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): burial_point read error!\n","load_burial_point");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


