/*
 * Function: FUN_00082856
 * Entry:    00082856
 * Prototype: undefined FUN_00082856()
 */


undefined4 FUN_00082856(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)
           FUN_0005f5d0(param_1 + 0xc,4,param_3,param_4,param_1,param_2,param_3,param_4);
  *puVar1 = *(undefined2 *)(param_3 + 4);
  puVar1[1] = *(undefined2 *)(param_3 + 6);
  iVar2 = FUN_0005f450(param_1,param_2 + -4,*(undefined4 *)(param_3 + 8),0,0,0,0,0);
  if (param_2 + -4 == iVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


