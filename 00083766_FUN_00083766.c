/*
 * Function: FUN_00083766
 * Entry:    00083766
 * Prototype: undefined FUN_00083766()
 */


void FUN_00083766(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_0005f5d0(param_1,2);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  return;
}


