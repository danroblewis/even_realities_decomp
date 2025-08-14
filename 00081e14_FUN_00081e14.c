/*
 * Function: FUN_00081e14
 * Entry:    00081e14
 * Prototype: undefined FUN_00081e14()
 */


void FUN_00081e14(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}


