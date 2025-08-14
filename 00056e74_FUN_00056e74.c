/*
 * Function: FUN_00056e74
 * Entry:    00056e74
 * Prototype: undefined FUN_00056e74()
 */


int FUN_00056e74(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00056654(&DAT_20006138);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 2) == '\x01') &&
       (iVar2 = FUN_000814e6(iVar1,param_1,param_2), iVar2 != 0)) {
      return iVar1;
    }
    FUN_000566a4(iVar1);
  }
  return 0;
}


