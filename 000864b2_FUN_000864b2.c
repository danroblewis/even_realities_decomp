/*
 * Function: FUN_000864b2
 * Entry:    000864b2
 * Prototype: undefined FUN_000864b2()
 */


undefined4 FUN_000864b2(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xe) != param_2) {
    uVar1 = FUN_00074060();
    return uVar1;
  }
  return 0;
}


