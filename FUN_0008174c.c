/*
 * Function: FUN_0008174c
 * Entry:    0008174c
 * Prototype: undefined FUN_0008174c()
 */


void FUN_0008174c(int param_1,int param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_2;
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  if ((-1 < (int)(uVar1 << 0x1f)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x1c),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00081782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


