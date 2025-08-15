/*
 * Function: FUN_0007ee48
 * Entry:    0007ee48
 * Prototype: undefined FUN_0007ee48()
 */


uint FUN_0007ee48(undefined4 param_1,uint param_2,int *param_3)

{
  if ((uint)(param_3[1] - param_3[2]) < param_2) {
    param_2 = 0xffffffe4;
  }
  else {
    memcpy(*param_3 + param_3[2],param_1,param_2);
    param_3[2] = param_3[2] + param_2;
  }
  return param_2;
}


