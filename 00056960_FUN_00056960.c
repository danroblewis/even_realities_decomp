/*
 * Function: FUN_00056960
 * Entry:    00056960
 * Prototype: undefined FUN_00056960()
 */


void FUN_00056960(byte param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00056654(&DAT_20006138);
  if (iVar1 != 0) {
    if ((param_1 & *(byte *)(iVar1 + 2)) != 0) {
      (*param_2)(iVar1,param_3);
    }
    FUN_000566a4(iVar1);
    return;
  }
  return;
}


