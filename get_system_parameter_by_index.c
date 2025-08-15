/*
 * Function: get_system_parameter_by_index
 * Entry:    0004d420
 * Prototype: undefined __stdcall get_system_parameter_by_index(undefined4 parameter_index)
 */


undefined4 get_system_parameter_by_index(int parameter_index)

{
  return *(undefined4 *)(&DAT_0008acb4 + parameter_index * 4);
}


