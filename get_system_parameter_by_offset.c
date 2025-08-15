/*
 * Function: get_system_parameter_by_offset
 * Entry:    0004d8dc
 * Prototype: undefined __stdcall get_system_parameter_by_offset(undefined4 unused_param, undefined4 parameter_offset)
 */


undefined4 get_system_parameter_by_offset(undefined4 param_1,uint parameter_offset)

{
  undefined4 uVar1;
  
  if (parameter_offset < 0x46) {
    uVar1 = *(undefined4 *)(&DAT_00088070 + parameter_offset * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


