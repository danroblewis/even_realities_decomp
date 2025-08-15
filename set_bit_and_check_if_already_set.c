/*
 * Function: set_bit_and_check_if_already_set
 * Entry:    00082236
 * Prototype: undefined set_bit_and_check_if_already_set()
 */


bool set_bit_and_check_if_already_set(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar2 = *param_1;
  *param_1 = uVar2 | uVar1;
  return (uVar1 & uVar2) != 0;
}


