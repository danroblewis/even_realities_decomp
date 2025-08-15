/*
 * Function: reset_system_status_flags_and_memory
 * Entry:    0007b098
 * Prototype: undefined reset_system_status_flags_and_memory()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_system_status_flags_and_memory
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  check_system_status_with_flag_management(0x400,param_1,param_3,param_4,param_4);
  _DAT_508451c8 = 0;
  _DAT_5084512c = 0;
  return;
}


