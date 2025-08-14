/*
 * Function: FUN_000804ba
 * Entry:    000804ba
 * Prototype: undefined FUN_000804ba()
 */


int FUN_000804ba(int param_1)

{
  if (param_1 != 0) {
    FUN_0004fca0();
    FUN_00080300(param_1,param_1 + 0x70,0x40);
    param_1 = 1;
  }
  return param_1;
}


