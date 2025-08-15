/*
 * Function: FUN_0007f5d8
 * Entry:    0007f5d8
 * Prototype: undefined FUN_0007f5d8()
 */


void FUN_0007f5d8(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}


