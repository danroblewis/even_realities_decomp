/*
 * Function: FUN_00082ff6
 * Entry:    00082ff6
 * Prototype: undefined FUN_00082ff6()
 */


uint FUN_00082ff6(int *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 0xff) & 1;
}


