/*
 * Function: FUN_00082114
 * Entry:    00082114
 * Prototype: undefined FUN_00082114()
 */


int FUN_00082114(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_000727ac(param_2,param_2,0,0);
  if (iVar1 == 0) {
    iVar2 = -2;
  }
  else {
    iVar2 = FUN_00058a54(param_1,iVar1);
    if (iVar2 != 0) {
      FUN_00086518(param_2,iVar1);
    }
  }
  return iVar2;
}


