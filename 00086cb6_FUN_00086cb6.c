/*
 * Function: FUN_00086cb6
 * Entry:    00086cb6
 * Prototype: undefined FUN_00086cb6()
 */


int FUN_00086cb6(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = FUN_00086c88(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


