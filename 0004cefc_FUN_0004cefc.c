/*
 * Function: FUN_0004cefc
 * Entry:    0004cefc
 * Prototype: undefined FUN_0004cefc()
 */


void FUN_0004cefc(int param_1)

{
  if (param_1 != 0) {
    FUN_00070f1c(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                 &LAB_000a8ea0,0,1);
  }
  if ((code *)**(undefined4 **)(param_1 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0004cf22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c));
    return;
  }
  return;
}


