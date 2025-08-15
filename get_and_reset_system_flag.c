/*
 * Function: get_and_reset_system_flag
 * Entry:    0004d490
 * Prototype: undefined get_and_reset_system_flag()
 */


undefined4 get_and_reset_system_flag(void)

{
  undefined4 uVar1;
  
  uVar1 = SYSTEM_FLAG_GET_AND_RESET_BUFFER;
  SYSTEM_FLAG_GET_AND_RESET_BUFFER = 0;
  return uVar1;
}


