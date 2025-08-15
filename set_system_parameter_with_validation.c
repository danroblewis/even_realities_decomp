/*
 * Function: set_system_parameter_with_validation
 * Entry:    0007a290
 * Prototype: undefined set_system_parameter_with_validation()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_system_parameter_with_validation(int param_1)

{
  if (param_1 << 0x15 < 0) {
    _DAT_50845108 = 0xffffffff;
  }
  _DAT_50845a08 = param_1;
  return;
}


