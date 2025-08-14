/*
 * Function: FUN_0007e4bc
 * Entry:    0007e4bc
 * Prototype: undefined FUN_0007e4bc()
 */


void FUN_0007e4bc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0007e35c();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (*param_1 == (int)uVar2) {
    *param_1 = iVar1;
    param_1[4] = param_1[4] & 0xfffffff7;
  }
  else {
    *(uint *)(param_1[8] + iVar1 * 4) = param_3 << 2 | 2;
    iVar1 = FUN_0007e35c(param_1,param_1[1],param_3);
    param_1[1] = iVar1;
  }
  return;
}


