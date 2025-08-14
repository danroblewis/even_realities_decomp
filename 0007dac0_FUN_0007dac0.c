/*
 * Function: FUN_0007dac0
 * Entry:    0007dac0
 * Prototype: undefined FUN_0007dac0()
 */


undefined1 FUN_0007dac0(void)

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


