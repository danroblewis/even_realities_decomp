/*
 * Function: FUN_0007efd4
 * Entry:    0007efd4
 * Prototype: undefined FUN_0007efd4()
 */


undefined4 FUN_0007efd4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((-1 < param_2) && ((uint)(param_3 + param_2) <= *(uint *)(param_1 + 8))) {
                    /* WARNING: Could not recover jumptable at 0x0007eff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 8))
                      (*(int *)(param_1 + 0xc),param_2 + *(int *)(param_1 + 4));
    return uVar1;
  }
  return 0xffffffea;
}


