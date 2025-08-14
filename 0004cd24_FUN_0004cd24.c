/*
 * Function: FUN_0004cd24
 * Entry:    0004cd24
 * Prototype: undefined FUN_0004cd24()
 */


bool FUN_0004cd24(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0007eae4(param_1,param_3,param_3,param_4,param_4);
  bVar1 = iVar2 != 0;
  if (!bVar1) {
    iVar2 = FUN_0007eae4(param_1,&LAB_000a8ea0);
  }
  *param_2 = iVar2;
  return bVar1;
}


