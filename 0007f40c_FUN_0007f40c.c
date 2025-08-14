/*
 * Function: FUN_0007f40c
 * Entry:    0007f40c
 * Prototype: undefined FUN_0007f40c()
 */


void FUN_0007f40c(undefined4 *param_1,undefined4 param_2)

{
  FUN_0007f3c2();
  FUN_0007f3f0(param_1 + 0x4e,0xfffffffe);
  if (*(code **)(param_1[0x57] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x57] + 8))(*param_1,param_2,param_1[1]);
    return;
  }
  return;
}


