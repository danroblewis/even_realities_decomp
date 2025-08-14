/*
 * Function: FUN_0004cb90
 * Entry:    0004cb90
 * Prototype: undefined FUN_0004cb90()
 */


undefined4 FUN_0004cb90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    FUN_0007e9ea(&DAT_000881d8,0x1040,&stack0xfffffff0,2,0,param_2,param_3,param_4);
    uVar1 = 0xffffffea;
  }
  else if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    FUN_0007e9ea(&DAT_000881d8,0x1040,&stack0xfffffff0,2,param_1,param_2,param_3,param_4);
    uVar1 = 0xfffffffb;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(param_1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0004cbda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


