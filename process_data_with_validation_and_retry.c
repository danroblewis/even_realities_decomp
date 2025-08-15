/*
 * Function: process_data_with_validation_and_retry
 * Entry:    0004cefc
 * Prototype: undefined process_data_with_validation_and_retry()
 */


void process_data_with_validation_and_retry(int param_1)

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


