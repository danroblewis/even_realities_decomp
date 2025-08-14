/*
 * Function: FUN_00086976
 * Entry:    00086976
 * Prototype: undefined FUN_00086976()
 */


float FUN_00086976(float param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_000869f2();
  if ((iVar1 != 0) && (param_1 != 0.0)) {
    param_1 = (float)FUN_00075a0c(param_1,param_2);
    iVar1 = FUN_000869f2();
    if ((iVar1 == 0) || (param_1 == 0.0)) {
      puVar2 = (undefined4 *)thunk_FUN_00071678();
      *puVar2 = 0x22;
    }
  }
  return param_1;
}


