/*
 * Function: reset_sha256_context_state_with_system_parameter_updates
 * Entry:    0007b10c
 * Prototype: undefined reset_sha256_context_state_with_system_parameter_updates()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_sha256_context_state_with_system_parameter_updates(void)

{
  _DAT_5084512c = 0;
  _DAT_508451c4 = 0;
  set_system_parameter_with_validation(0x400);
  _DAT_50845108 = 0xffffffff;
  return;
}


