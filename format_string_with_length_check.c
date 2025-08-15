/*
 * Function: format_string_with_length_check
 * Entry:    0004b1e8
 * Prototype: undefined format_string_with_length_check()
 */


void format_string_with_length_check(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = param_1;
  local_18 = param_2;
  format_string_with_printf(0x7dd7f,&local_1c,param_3,param_4,0);
  if (local_14 < local_18) {
    *(undefined1 *)(param_1 + local_14) = 0;
  }
  return;
}


