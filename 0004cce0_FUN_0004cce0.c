/*
 * Function: FUN_0004cce0
 * Entry:    0004cce0
 * Prototype: undefined FUN_0004cce0()
 */


void FUN_0004cce0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00070fb4(param_2,param_1 + 0xe0,param_3,0xffffffff,param_4,
                       *(undefined4 *)(param_1 + 0x1ac),&LAB_0007eae0_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 100) = 1;
    if (*(code **)(param_1 + 0x1a8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0004cd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x1a8))(param_2);
      return;
    }
  }
  return;
}


