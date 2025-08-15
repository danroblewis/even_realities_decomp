/*
 * Function: FUN_00081940
 * Entry:    00081940
 * Prototype: undefined FUN_00081940()
 */


void FUN_00081940(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00081820(param_1,5,param_2,0,0,param_2);
  if (iVar1 != 0) {
    decrement_reference_count_and_cleanup_memory(param_2);
    return;
  }
  return;
}


