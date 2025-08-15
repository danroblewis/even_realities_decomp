/*
 * Function: set_work_mode_flag_bit_1
 * Entry:    000432d0
 * Prototype: undefined set_work_mode_flag_bit_1()
 */


undefined4 set_work_mode_flag_bit_1(void)

{
  SYSTEM_FLAGS_REGISTER = SYSTEM_FLAGS_REGISTER | 2;
  return 0;
}


