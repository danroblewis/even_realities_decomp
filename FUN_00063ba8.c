/*
 * Function: FUN_00063ba8
 * Entry:    00063ba8
 * Prototype: undefined FUN_00063ba8()
 */


void FUN_00063ba8(int param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    if ((&DAT_2000b308)[iVar1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00063bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0);
      return;
    }
    iVar2 = 0;
  } while (iVar1 < param_1);
                    /* WARNING: Could not recover jumptable at 0x00063bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(1);
  return;
}


