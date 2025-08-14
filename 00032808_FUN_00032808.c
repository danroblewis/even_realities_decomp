/*
 * Function: FUN_00032808
 * Entry:    00032808
 * Prototype: undefined FUN_00032808()
 */


byte FUN_00032808(byte param_1)

{
  DAT_20019ef4 = DAT_20019ef4 & 0x80 | param_1 & 0x7f;
  return param_1 & 0x7f;
}


