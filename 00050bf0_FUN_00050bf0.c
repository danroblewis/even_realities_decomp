/*
 * Function: FUN_00050bf0
 * Entry:    00050bf0
 * Prototype: undefined FUN_00050bf0()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050bf0(undefined4 param_1,uint *param_2)

{
  _DAT_e000ed98 = param_1;
  _DAT_e000ed9c = (byte)param_2[2] & 0x1f | *param_2 & 0xffffffe0;
  _DAT_e000eda0 = param_2[3] & 0xffffffe0 | (uint)(byte)((byte)param_2[2] >> 5) << 1 | 1;
  return;
}


