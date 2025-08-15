/*
 * Function: FUN_0007e290
 * Entry:    0007e290
 * Prototype: undefined FUN_0007e290()
 */


int FUN_0007e290(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 < 1) {
    iVar1 = 0x30;
  }
  else {
    *param_2 = *param_2 + -1;
    uVar2 = param_1[1] * 10 + (int)((ulonglong)*param_1 * 10 >> 0x20);
    *param_1 = (uint)((ulonglong)*param_1 * 10);
    param_1[1] = uVar2 & 0xfffffff;
    iVar1 = (uVar2 >> 0x1c) + 0x30;
  }
  return iVar1;
}


