/*
 * Function: clear_system_flags_with_bitwise_and
 * Entry:    0007c08e
 * Prototype: undefined clear_system_flags_with_bitwise_and()
 */


void clear_system_flags_with_bitwise_and(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & param_2;
  return;
}


