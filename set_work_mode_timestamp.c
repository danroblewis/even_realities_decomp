/*
 * Function: set_work_mode_timestamp
 * Entry:    0007d230
 * Prototype: undefined set_work_mode_timestamp()
 */


undefined4 set_work_mode_timestamp(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  *(undefined4 *)(iVar1 + 0xd0) = param_1;
  return param_1;
}


