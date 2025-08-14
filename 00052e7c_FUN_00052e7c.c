/*
 * Function: FUN_00052e7c
 * Entry:    00052e7c
 * Prototype: undefined FUN_00052e7c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00052e7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 int param_5)

{
  if (param_5 == 0) {
    FUN_0007ddbe(param_1,param_2,"bt/%s/%02x%02x%02x%02x%02x%02x%u",param_3,param_4[6],param_4[5],
                 param_4[4],param_4[3],param_4[2],param_4[1],*param_4);
  }
  else {
    FUN_0007ddbe(param_1,param_2,"bt/%s/%02x%02x%02x%02x%02x%02x%u/%s",param_3,param_4[6],param_4[5]
                 ,param_4[4],param_4[3],param_4[2],param_4[1],*param_4,param_5);
  }
  return;
}


