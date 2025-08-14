/*
 * Function: FUN_000836f8
 * Entry:    000836f8
 * Prototype: undefined FUN_000836f8()
 */


void FUN_000836f8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_0005f518(param_1,2);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  return;
}


