/*
 * Function: get_ui_y_offset
 * Entry:    0007d446
 * Prototype: undefined get_ui_y_offset()
 */


undefined2 get_ui_y_offset(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  if (*(short *)(iVar1 + 0x1072) == 0) {
    iVar1 = get_work_mode();
    if (*(short *)(iVar1 + 0x1074) != 0) goto LAB_0007d456;
  }
  else {
LAB_0007d456:
    iVar1 = get_work_mode();
    if (*(ushort *)(iVar1 + 0x1074) < 0x41) goto LAB_0007d466;
  }
  iVar1 = get_work_mode();
  *(undefined2 *)(iVar1 + 0x1074) = 0x20;
LAB_0007d466:
  iVar1 = get_work_mode();
  if (*(ushort *)(iVar1 + 0x1074) < 4) {
    iVar1 = get_work_mode();
    *(undefined2 *)(iVar1 + 0x1074) = 4;
  }
  iVar1 = get_work_mode();
  return *(undefined2 *)(iVar1 + 0x1074);
}


