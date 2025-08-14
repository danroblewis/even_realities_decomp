/*
 * Function: read_sys_settting_from_flash
 * Entry:    000232f8
 * Prototype: undefined read_sys_settting_from_flash()
 */


undefined4 read_sys_settting_from_flash(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_94 [2];
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  char local_7f [16];
  char acStack_6f [16];
  char local_5f [16];
  char acStack_4f [16];
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fill_memory_buffer(local_94,0,0x84);
  iVar1 = flash_settings_read(0x130000,local_94,0x84);
  if (iVar1 == 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): read sys settings success!\n","read_sys_settting_from_flash");
      }
      else {
        handle_heartbeat();
      }
    }
    *param_1 = local_94[0];
    *(undefined1 *)(param_1 + 2) = local_8c;
    param_1[3] = local_88;
    param_1[4] = local_84;
    *(undefined1 *)(param_1 + 5) = local_80;
    if (local_7f[0] != -1) {
      puVar2 = (undefined4 *)((int)param_1 + 0x15);
      pcVar4 = local_7f;
      do {
        pcVar3 = pcVar4 + 4;
        *puVar2 = *(undefined4 *)pcVar4;
        puVar2 = puVar2 + 1;
        pcVar4 = pcVar3;
      } while (pcVar3 != acStack_6f);
    }
    if (local_5f[0] != -1) {
      puVar2 = (undefined4 *)((int)param_1 + 0x35);
      pcVar4 = local_5f;
      do {
        pcVar3 = pcVar4 + 4;
        *puVar2 = *(undefined4 *)pcVar4;
        puVar2 = puVar2 + 1;
        pcVar4 = pcVar3;
      } while (pcVar3 != acStack_4f);
    }
    param_1[0x18] = local_34;
    *(undefined1 *)((int)param_1 + 0x55) = local_3f;
    param_1[0x19] = local_30;
    *(undefined1 *)((int)param_1 + 0x56) = local_3e;
    param_1[0x1a] = local_2c;
    param_1[0x1f] = local_18;
    param_1[0x1b] = local_28;
    param_1[0x20] = local_14;
    param_1[0x1c] = local_24;
    *(undefined2 *)(param_1 + 0x1e) = local_1c;
    param_1[0x1d] = local_20;
    uVar5 = 0;
  }
  else {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): sys_flash_settings_read error!\n","read_sys_settting_from_flash");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


