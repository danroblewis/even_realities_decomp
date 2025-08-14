/*
 * Function: FUN_00083896
 * Entry:    00083896
 * Prototype: undefined FUN_00083896()
 */


undefined4 FUN_00083896(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00054c64();
  if (iVar1 != 0) {
    uVar2 = FUN_00053e74(param_2,param_3);
    return uVar2;
  }
  return 0xfffffff5;
}


