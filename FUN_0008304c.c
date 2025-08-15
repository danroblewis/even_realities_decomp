/*
 * Function: FUN_0008304c
 * Entry:    0008304c
 * Prototype: undefined FUN_0008304c()
 */


void FUN_0008304c(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}


