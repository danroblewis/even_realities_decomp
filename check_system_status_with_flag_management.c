/*
 * Function: check_system_status_with_flag_management
 * Entry:    0007a2c4
 * Prototype: undefined check_system_status_with_flag_management()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 check_system_status_with_flag_management(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _DAT_50845104;
  if (param_1 == 0) {
    return 0xf50000;
  }
  do {
    if ((_DAT_50845a00 & 0x100) != 0) {
      uVar2 = 1;
      param_1 = param_1 | 0x100;
      break;
    }
    uVar2 = 0;
  } while ((_DAT_50845a00 & param_1) == 0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _DAT_50845104;
    _DAT_50845108 = uVar1;
  }
  _DAT_50845a08 = param_1;
  return uVar2;
}


