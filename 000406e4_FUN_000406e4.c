/*
 * Function: FUN_000406e4
 * Entry:    000406e4
 * Prototype: undefined FUN_000406e4()
 */


undefined4 FUN_000406e4(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  fill_memory_buffer(*(undefined4 *)(iVar1 + 0x1014),0,0x21);
  DAT_2001cdd3 = 1;
  return 0;
}


