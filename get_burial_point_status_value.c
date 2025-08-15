/*
 * Function: get_burial_point_status_value
 * Entry:    0007dac0
 * Prototype: undefined get_burial_point_status_value()
 */


undefined1 get_burial_point_status_value(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = update_burial_point_day_index();
  if (iVar2 == 0) {
    iVar2 = get_work_mode();
    uVar1 = *(undefined1 *)(iVar2 + 0x10db);
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


