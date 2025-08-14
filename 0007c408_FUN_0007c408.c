/*
 * Function: FUN_0007c408
 * Entry:    0007c408
 * Prototype: undefined FUN_0007c408()
 */


undefined4 FUN_0007c408(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0007c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


