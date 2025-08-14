/*
 * Function: update_temp_task_status
 * Entry:    0002bffc
 * Prototype: undefined update_temp_task_status()
 */


uint update_temp_task_status(int param_1,uint param_2,uint param_3)

{
  char *format_string;
  uint uVar1;
  undefined1 *puVar2;
  
  while (DAT_20018d9c != '\0') {
    FUN_0007cdf8();
  }
  DAT_20018d9c = 1;
  if (**(uint **)(param_1 + 0x1054) == param_2) {
    uVar1 = (uint)(byte)(*(uint **)(param_1 + 0x1054))[1];
    if (uVar1 == 1) {
      DAT_20018d9c = 0;
      return param_3;
    }
    if (uVar1 == param_3) {
      DAT_20018d9c = 0;
      return param_3;
    }
  }
  if (*(byte *)(param_1 + 0xd5) == param_2) {
    DAT_20018d9c = 0;
    return param_3;
  }
  if ((*(char *)(param_1 + 0xd5) == '\0') || (*(char *)(param_1 + 0xd5) == '\x01')) {
    if (param_3 == 2) goto LAB_0002c052;
LAB_0002c08a:
    if (param_3 == 3) {
      if (LOG_LEVEL < 1) goto LAB_0002c05a;
      format_string = "%s(): persist task [pause]: %d\n";
    }
    else {
      if (LOG_LEVEL < 1) goto LAB_0002c05a;
      format_string = "%s(): persist task [stop]: %d\n";
    }
  }
  else {
    display_close_screen(*(undefined1 *)(param_1 + 0xd5));
    if (param_3 != 2) goto LAB_0002c08a;
    if ((param_2 & 0xfffffffd) != 4) {
      DAT_20018d9c = 0;
      return 2;
    }
LAB_0002c052:
    if (LOG_LEVEL < 1) goto LAB_0002c05a;
    format_string = "%s(): persist task [running]: %d\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"update_temp_task_status",param_2);
  }
  else {
    handle_heartbeat();
  }
LAB_0002c05a:
  *(char *)(param_1 + 0xd5) = (char)param_2;
  puVar2 = *(undefined1 **)(param_1 + 0x1054);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1054) + 4) = 1;
  DAT_20018d9c = 0;
  return param_3;
}


