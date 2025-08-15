/*
 * Function: get_value_by_index_limited_range
 * Entry:    000469a8
 * Prototype: undefined get_value_by_index_limited_range()
 */


int get_value_by_index_limited_range(int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < 0x10) {
    iVar1 = (int)"%s(): can\'t find resource ,exit .....\n"[param_1 + 0x26];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


