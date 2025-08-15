/*
 * Function: clear_work_mode_flag_bit_1
 * Entry:    000432ec
 * Prototype: undefined clear_work_mode_flag_bit_1()
 */


undefined4 clear_work_mode_flag_bit_1(void)

{
  SYSTEM_FLAGS_REGISTER = SYSTEM_FLAGS_REGISTER & 0xfffffffd;
  return 0;
}


