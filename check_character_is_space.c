/*
 * Function: check_character_is_space
 * Entry:    000850c8
 * Prototype: undefined check_character_is_space()
 */


uint check_character_is_space(uint param_1)

{
  if (param_1 != 0) {
    param_1 = (uint)(*(char *)(param_1 + 0xc) == ' ');
  }
  return param_1;
}


