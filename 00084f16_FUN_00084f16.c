/*
 * Function: FUN_00084f16
 * Entry:    00084f16
 * Prototype: undefined FUN_00084f16()
 */


void FUN_00084f16(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = param_1[2];
    iVar1 = FUN_0000ef12(*param_1 + iVar2);
    param_1[2] = iVar2 + iVar1;
  }
  return;
}


