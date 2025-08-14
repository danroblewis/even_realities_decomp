/*
 * Function: load_usr_setting
 * Entry:    00022e78
 * Prototype: undefined load_usr_setting()
 */


undefined4 load_usr_setting(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_38;
  undefined1 local_37;
  undefined1 local_36;
  byte local_35;
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  undefined1 local_23;
  undefined1 local_22;
  byte local_21;
  undefined1 local_20;
  undefined4 local_1c;
  
  fill_memory_buffer(&local_38,0,0x20);
  iVar1 = flash_settings_read(0x134000,&local_38,0x20);
  if (iVar1 == 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): read user settings success!\n","load_usr_setting");
      }
      else {
        handle_heartbeat();
      }
    }
    *(undefined1 *)(param_1 + 0xed5) = local_37;
    *(undefined1 *)(param_1 + 0xef4) = local_36;
    if (local_34 == 0) {
      local_34 = 400;
    }
    *(int *)(param_1 + 0xf6c) = local_34;
    *(byte *)(param_1 + 0xfea) = local_38;
    *(undefined1 *)(param_1 + 0xf98) = local_30;
    *(byte *)(param_1 + 0xf60) = local_35;
    *(undefined1 *)(param_1 + 0x1070) = local_2f;
    *(undefined1 *)(param_1 + 0x108d) = local_2e;
    *(undefined1 *)(param_1 + 0xec0) = local_2d;
    *(undefined4 *)(param_1 + 0x1069) = local_2c;
    *(undefined1 *)(param_1 + 0x106f) = local_26;
    *(undefined2 *)(param_1 + 0x106d) = local_28;
    *(undefined1 *)(param_1 + 0xef5) = local_25;
    if (1 < local_24) {
      local_24 = 0;
    }
    *(byte *)(param_1 + 0x108f) = local_24;
    *(undefined1 *)(param_1 + 0x1090) = local_23;
    *(undefined1 *)(param_1 + 0x1091) = local_22;
    *(undefined1 *)(param_1 + 0xec1) = local_20;
    *(undefined4 *)(param_1 + 0xf68) = local_1c;
    if ((local_38 & local_35) == 0xff) {
      reset_usr_setting(param_1);
    }
    if (8 < *(byte *)(param_1 + 0xec0)) {
      *(undefined1 *)(param_1 + 0xec0) = 3;
    }
    if (8 < *(byte *)(param_1 + 0xec1) - 1) {
      *(undefined1 *)(param_1 + 0xec1) = 3;
    }
    if (*(char *)(param_1 + 0xfea) == '\v') {
      *(undefined1 *)(param_1 + 0xfea) = 10;
      FUN_0007c28e(param_1,0);
    }
    if (1 < local_21) {
      local_21 = 0;
    }
    FUN_00032ef0(local_21);
    iVar1 = get_system_ready_state();
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xf98) = 0;
      *(undefined1 *)(param_1 + 0xfea) = 0xb;
      *(undefined1 *)(param_1 + 0xed5) = 0x15;
      *(undefined2 *)(param_1 + 0xec0) = 0x303;
    }
    else {
      *(undefined1 *)(param_1 + 0xfea) = 10;
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xf68) == -1) {
      *(undefined4 *)(param_1 + 0xf68) = 0;
    }
  }
  else {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): usr_flash_settings_read error!\n","load_usr_setting");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


