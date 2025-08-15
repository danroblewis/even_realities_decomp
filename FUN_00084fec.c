/*
 * Function: FUN_00084fec
 * Entry:    00084fec
 * Prototype: undefined FUN_00084fec()
 */


void FUN_00084fec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = calculate_string_length();
    parse_json_value_with_memory_allocation(param_1,iVar1 + 1,param_2,param_3);
    return;
  }
  return;
}


