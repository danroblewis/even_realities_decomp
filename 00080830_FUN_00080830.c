/*
 * Function: FUN_00080830
 * Entry:    00080830
 * Prototype: undefined FUN_00080830()
 */


void FUN_00080830(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  FUN_0005ee6c(param_2);
  *param_1 = param_2;
  *(undefined2 *)(param_2 + 0x10) = 8;
  iVar2 = *(int *)(param_2 + 0xc);
  uVar1 = FUN_00083730((int *)(param_2 + 0xc));
  thunk_FUN_00085cf2(param_1 + 1,2,iVar2 + 8,uVar1,0,iVar3,param_3);
  return;
}


