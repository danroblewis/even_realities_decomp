/*
 * Function: FUN_0000ec34
 * Entry:    0000ec34
 * Prototype: undefined FUN_0000ec34()
 */


int FUN_0000ec34(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000dddc(param_1,param_2,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0000e274(param_1,param_2);
    return iVar1;
  }
  iVar1 = FUN_0000e274(param_1,param_2 + -0x80000000);
  return -iVar1;
}


