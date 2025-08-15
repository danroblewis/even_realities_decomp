/*
 * Function: jbd_get_manager
 * Entry:    0007d4ec
 * Prototype: undefined jbd_get_manager()
 */


int jbd_get_manager(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  return iVar1 + 0xb6c;
}


