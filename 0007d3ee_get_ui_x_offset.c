/*
 * Function: get_ui_x_offset
 * Entry:    0007d3ee
 * Prototype: undefined get_ui_x_offset()
 */


int get_ui_x_offset(void)

{
  ushort uVar1;
  int work_mode;
  
  work_mode = get_work_mode();
  if (*(short *)(work_mode + 0x1072) == 0) {
    work_mode = get_work_mode();
    if (*(short *)(work_mode + 0x1074) != 0) goto LAB_0007d3fe;
  }
  else {
LAB_0007d3fe:
    work_mode = get_work_mode();
    if (*(ushort *)(work_mode + 0x1072) < 0x41) goto LAB_0007d40e;
  }
  work_mode = get_work_mode();
  *(undefined2 *)(work_mode + 0x1072) = 0x20;
LAB_0007d40e:
  work_mode = get_work_mode();
  uVar1 = *(ushort *)(work_mode + 0x1072);
  work_mode = get_work_mode();
  return *(int *)(work_mode + 0xec4) + (uint)uVar1;
}


