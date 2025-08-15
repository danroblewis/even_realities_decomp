/*
 * Function: FUN_000759b8
 * Entry:    000759b8
 * Prototype: undefined FUN_000759b8()
 */


float FUN_000759b8(float param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = ABS(param_1);
  *param_2 = 0;
  if ((int)fVar1 - 1U < 0x7f7fffff) {
    if (((uint)param_1 & 0x7f800000) == 0) {
      param_1 = param_1 * 33554432.0;
      *param_2 = -0x19;
      fVar1 = ABS(param_1);
    }
    param_1 = (float)((uint)param_1 & 0x807fffff | 0x3f000000);
    *param_2 = *param_2 + ((int)fVar1 >> 0x17) + -0x7e;
  }
  return param_1;
}


