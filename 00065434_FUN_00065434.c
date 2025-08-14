/*
 * Function: FUN_00065434
 * Entry:    00065434
 * Prototype: undefined FUN_00065434()
 */


uint FUN_00065434(uint param_1)

{
  return (param_1 & 0x1f) + (uint)(byte)(&DAT_000f6ba7)[param_1 >> 5] & 0xff;
}


