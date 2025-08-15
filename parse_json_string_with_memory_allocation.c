/*
 * Function: parse_json_string_with_memory_allocation
 * Entry:    00084fec
 * Prototype: undefined parse_json_string_with_memory_allocation()
 */


void parse_json_string_with_memory_allocation(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = calculate_string_length();
    parse_json_value_with_memory_allocation(param_1,iVar1 + 1,param_2,param_3);
    return;
  }
  return;
}


