/*
 * Function: FUN_0007fec8
 * Entry:    0007fec8
 * Prototype: undefined FUN_0007fec8()
 */


uint FUN_0007fec8(uint param_1)

{
  return ((param_1 >> 7) * 0x1b ^ param_1 << 1) & 0xff;
}


