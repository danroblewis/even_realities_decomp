/*
 * Function: clear_system_flags
 * Entry:    00018ab0
 * Prototype: undefined clear_system_flags()
 */


void clear_system_flags(void)

{
  clear_system_flags_with_bitwise_and(&DAT_20006ab4,0xfffffffe);
  clear_system_flags_with_bitwise_and(&DAT_20006ab4,0xfffffffd);
  clear_system_flags_with_bitwise_and(&DAT_20006ab4,0xfffffffb);
  return;
}


