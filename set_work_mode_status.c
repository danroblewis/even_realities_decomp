/*
 * Function: set_work_mode_status
 * Entry:    0007c1dc
 * Prototype: undefined __stdcall set_work_mode_status(undefined1 status_value1, undefined1 status_value2, undefined4 operation_mode)
 */


undefined4
set_work_mode_status(undefined1 status_value1,undefined1 status_value2,int operation_mode)

{
  int iVar1;
  
  if (operation_mode == 0) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0xcf) = status_value2;
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0xcd) = status_value1;
  }
  else {
    set_work_mode_flags();
  }
  return 0;
}


