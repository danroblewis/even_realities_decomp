/*
 * Function: initialize_buffer_structure_with_flags
 * Entry:    0004e3c0
 * Prototype: undefined initialize_buffer_structure_with_flags()
 */


void initialize_buffer_structure_with_flags(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_2000a108 == (undefined4 *)0x0) {
    BUFFER_STRUCTURE_INITIALIZATION_BUFFER = param_1;
    DAT_2000a108 = param_1;
    return;
  }
  *DAT_2000a108 = param_1;
  DAT_2000a108 = param_1;
  return;
}


