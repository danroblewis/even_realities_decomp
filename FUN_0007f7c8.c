/*
 * Function: FUN_0007f7c8
 * Entry:    0007f7c8
 * Prototype: undefined FUN_0007f7c8()
 */


void FUN_0007f7c8(int param_1)

{
  if (*(code **)(param_1 + 0x864) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007f7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x864))();
    return;
  }
  return;
}


