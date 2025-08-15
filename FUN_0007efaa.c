/*
 * Function: FUN_0007efaa
 * Entry:    0007efaa
 * Prototype: undefined FUN_0007efaa()
 */


undefined4 FUN_0007efaa(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((-1 < param_2) && ((uint)(param_4 + param_2) <= *(uint *)(param_1 + 8))) {
                    /* WARNING: Could not recover jumptable at 0x0007efca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 4))
                      (*(int *)(param_1 + 0xc),param_2 + *(int *)(param_1 + 4));
    return uVar1;
  }
  return 0xffffffea;
}


