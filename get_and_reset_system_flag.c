/*
 * Function: get_and_reset_system_flag
 * Entry:    0004d490
 * Prototype: undefined get_and_reset_system_flag()
 */


undefined4 get_and_reset_system_flag(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2000a0d4;
  DAT_2000a0d4 = 0;
  return uVar1;
}


