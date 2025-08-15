/*
 * Function: FUN_00066850
 * Entry:    00066850
 * Prototype: undefined FUN_00066850()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00066850(undefined4 *param_1)

{
  if ((*(char *)((int)param_1 + 0x29) == '\0') || (*(char *)((int)param_1 + 0x2a) == '\0')) {
    if (((param_1[1] == 0xff) ||
        ((((param_1[2] == 0xff || (param_1[3] == 0xff)) || (param_1[4] != 0xe)) ||
         ((param_1[1] != 0x11 || (param_1[2] != 0x12)))))) ||
       ((param_1[3] != 0xd ||
        (((param_1[5] != 0xff && (param_1[5] != 0xf)) ||
         ((param_1[6] != 0xff && (param_1[6] != 0x10)))))))) {
      return 0xbad0004;
    }
    if (*(char *)((int)param_1 + 0x29) == '\0') {
      FUN_0006666c(0x11,3);
      FUN_0006666c(param_1[2],3);
      FUN_0006666c(param_1[3],3);
      FUN_0006666c(param_1[4],3);
      if (param_1[5] != 0xff) {
        FUN_0006666c(param_1[5],3);
      }
      if (param_1[6] != 0xff) {
        FUN_0006666c(param_1[6],3);
      }
    }
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      FUN_00066784(param_1 + 1);
    }
  }
  DAT_2000b37c = param_1[9];
  DAT_2000b382 = *(undefined1 *)((int)param_1 + 0x29);
  _DAT_5002b308 = 1;
  FUN_000667e0();
  _DAT_5002b540 = *param_1;
  _DAT_5002b544 =
       (uint)*(byte *)((int)param_1 + 0x1e) << 6 | (uint)*(byte *)((int)param_1 + 0x1d) << 3 |
       (uint)*(byte *)(param_1 + 7) | (uint)*(byte *)((int)param_1 + 0x1f) << 7;
  if (*(char *)((int)param_1 + 0x23) == '\0') {
    _DAT_5002b544 = _DAT_5002b544 | 0x30000;
  }
  else {
    _DAT_5002b544 = _DAT_5002b544 | 0x10000;
  }
  _DAT_5002b640 = 0x600;
  _DAT_5002b600 =
       (uint)*(byte *)(param_1 + 8) | _DAT_5002b600 & 0xffff00 |
       (uint)*(byte *)((int)param_1 + 0x21) << 0x18 | (uint)*(byte *)((int)param_1 + 0x22) << 0x19 |
       (uint)*(byte *)((int)param_1 + 0x23) << 0x1c;
  if (DAT_2000b348 != 0) {
    process_data_with_parameter_validation_alt4(0x2b);
  }
  return 0xbad0000;
}


