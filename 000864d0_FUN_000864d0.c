/*
 * Function: FUN_000864d0
 * Entry:    000864d0
 * Prototype: undefined FUN_000864d0()
 */


uint * FUN_000864d0(uint *param_1,int param_2)

{
  if (param_1 != (uint *)0x0) {
    if (((*param_1 & 3) != 0) && (param_1 = (uint *)param_1[1], param_2 != 0)) {
      FUN_000868b4();
    }
  }
  return param_1;
}


