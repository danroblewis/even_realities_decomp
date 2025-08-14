/*
 * Function: load_sys_setting
 * Entry:    00022bd0
 * Prototype: undefined load_sys_setting()
 */


undefined4 load_sys_setting(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int local_9c [2];
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  char local_87 [16];
  char acStack_77 [16];
  char local_67 [16];
  char acStack_57 [16];
  undefined1 local_47;
  undefined1 local_46;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fill_memory_buffer(local_9c,0,0x84);
  iVar1 = flash_settings_read(0x130000,local_9c,0x84);
  if (iVar1 != 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): sys_flash_settings_read error!\n","load_sys_setting");
      }
      else {
        handle_heartbeat();
      }
    }
    return 0xffffffff;
  }
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): read sys settings success!\n","load_sys_setting");
    }
    else {
      handle_heartbeat();
    }
  }
  *(int *)(param_1 + 0x1050) = local_9c[0];
  *(undefined1 *)(param_1 + 2) = local_94;
  *(undefined4 *)(param_1 + 0xf64) = local_90;
  *(undefined4 *)(param_1 + 0xf94) = local_8c;
  *(undefined1 *)(param_1 + 0xed4) = local_88;
  if (local_87[0] != -1) {
    puVar2 = &DAT_20003003;
    pcVar7 = local_87;
    do {
      pcVar6 = pcVar7 + 4;
      *puVar2 = *(undefined4 *)pcVar7;
      puVar2 = puVar2 + 1;
      pcVar7 = pcVar6;
    } while (pcVar6 != acStack_77);
  }
  if (local_67[0] != -1) {
    puVar2 = &DAT_20002fe3;
    pcVar7 = local_67;
    do {
      pcVar6 = pcVar7 + 4;
      *puVar2 = *(undefined4 *)pcVar7;
      puVar2 = puVar2 + 1;
      pcVar7 = pcVar6;
    } while (pcVar6 != acStack_57);
  }
  *(undefined1 *)(param_1 + 3) = local_47;
  *(undefined1 *)(param_1 + 4) = local_46;
  *(undefined2 *)(param_1 + 0x1072) = local_3c;
  *(undefined2 *)(param_1 + 0x1074) = local_3a;
  *(undefined4 *)(param_1 + 4000) = local_34;
  *(undefined4 *)(param_1 + 0xfa4) = local_38;
  *(undefined4 *)(param_1 + 0xfa8) = local_30;
  *(undefined4 *)(param_1 + 0xfac) = local_2c;
  *(undefined4 *)(param_1 + 0xfb0) = local_20;
  *(undefined4 *)(param_1 + 0xfb4) = local_1c;
  *(undefined2 *)(param_1 + 0xeda) = local_28;
  *(undefined2 *)(param_1 + 0xedc) = local_26;
  *(undefined2 *)(param_1 + 0xede) = local_24;
  if (local_9c[0] != 1) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): FIRST BOOT, full default sys value!\n","load_sys_setting");
      }
      else {
        handle_heartbeat();
      }
    }
    *(undefined1 *)(param_1 + 2) = 0xff;
    *(undefined4 *)(param_1 + 0xf94) = 80000;
    *(undefined4 *)(param_1 + 0xf64) = 0;
    *(undefined1 *)(param_1 + 0xed4) = 0;
    *(undefined2 *)(param_1 + 0x1072) = 0x20;
    *(undefined2 *)(param_1 + 0x1074) = 0x20;
    *(undefined4 *)(param_1 + 0xfb0) = 0x1f400;
    *(undefined2 *)(param_1 + 0xeda) = 0x3f;
    *(undefined4 *)(param_1 + 4000) = 0;
    *(undefined4 *)(param_1 + 0xfa4) = 0;
    *(undefined4 *)(param_1 + 0xfa8) = 0;
    *(undefined4 *)(param_1 + 0xfac) = 0;
    *(undefined4 *)(param_1 + 0xfb4) = 0;
    *(undefined4 *)(param_1 + 0xedc) = 0x3f003f;
    FUN_00022b00(param_1);
  }
  *(undefined4 *)(param_1 + 0x1050) = 1;
  if (*(char *)(param_1 + 0xed4) != '\x01') {
    *(undefined1 *)(param_1 + 0xed4) = 0;
  }
  uVar8 = *(int *)(param_1 + 0xfb0) + 1;
  uVar9 = uVar8;
  if (uVar8 < 2) {
    uVar9 = 0x1f400;
  }
  if (uVar8 < 2) {
    *(uint *)(param_1 + 0xfb0) = uVar9;
  }
  uVar3 = *(short *)(param_1 + 0x1072) - 0x16;
  uVar4 = uVar3;
  if (0x14 < uVar3) {
    uVar4 = 0x20;
  }
  if (0x14 < uVar3) {
    *(ushort *)(param_1 + 0x1072) = uVar4;
  }
  if (*(ushort *)(param_1 + 0x1074) < 0x41) {
    if (3 < *(ushort *)(param_1 + 0x1074)) goto LAB_00022d8a;
    uVar5 = 4;
  }
  else {
    uVar5 = 0x20;
  }
  *(undefined2 *)(param_1 + 0x1074) = uVar5;
LAB_00022d8a:
  if (0x3e < (ushort)(*(short *)(param_1 + 0xede) - 1U)) {
    *(undefined2 *)(param_1 + 0xede) = 0x3f;
  }
  return 0;
}


