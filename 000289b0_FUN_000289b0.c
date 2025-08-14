/*
 * Function: FUN_000289b0
 * Entry:    000289b0
 * Prototype: undefined FUN_000289b0()
 */


void FUN_000289b0(void)

{
  int iVar1;
  
  FUN_00047ab8();
  get_work_mode();
  global_system_suspend();
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xee4) = 1;
  display_close_screen(3);
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xd5) = 0;
  DAT_20018d8b = 0;
  return;
}


