/*
 * Function: FUN_0007f438
 * Entry:    0007f438
 * Prototype: undefined FUN_0007f438()
 */


void FUN_0007f438(undefined4 *param_1)

{
  FUN_0007f3c2();
  FUN_0007f3f0(param_1 + 0x4e,0xfffffffe);
  if (*(code **)(param_1[0x57] + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x57] + 4))(*param_1,param_1[1]);
    return;
  }
  return;
}


