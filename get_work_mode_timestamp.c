/*
 * Function: get_work_mode_timestamp
 * Entry:    0007d224
 * Prototype: undefined get_work_mode_timestamp()
 */


undefined4 get_work_mode_timestamp(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  return *(undefined4 *)(iVar1 + 0xd0);
}


