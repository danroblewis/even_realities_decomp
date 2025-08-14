/*
 * Function: FUN_00083090
 * Entry:    00083090
 * Prototype: undefined FUN_00083090()
 */


void FUN_00083090(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0xff);
  return;
}


