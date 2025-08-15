/*
 * Function: set_work_mode_flags
 * Entry:    0007c176
 * Prototype: undefined __stdcall set_work_mode_flags(undefined1 flag1, undefined1 flag2)
 */


void set_work_mode_flags(undefined1 flag1,undefined1 flag2)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xce) = flag2;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcc) = flag1;
  return;
}


