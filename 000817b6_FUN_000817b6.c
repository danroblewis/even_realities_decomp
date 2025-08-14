/*
 * Function: FUN_000817b6
 * Entry:    000817b6
 * Prototype: undefined FUN_000817b6()
 */


void FUN_000817b6(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = param_1[1];
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 4);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)();
    }
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((int)param_1 + 0xb6) = 0;
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000817e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}


