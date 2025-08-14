/*
 * Function: FUN_0007d53a
 * Entry:    0007d53a
 * Prototype: undefined FUN_0007d53a(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


int FUN_0007d53a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  
  if (199 < param_6) {
    param_6 = 200;
  }
  if (0x27f < param_5) {
    param_5 = 0x280;
  }
  piVar1 = (int *)(param_1 + param_6 * 4);
  for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
    memcpy(*piVar1 + param_5 / 2,param_2,param_3);
    param_2 = param_2 + param_3;
    piVar1 = piVar1 + 1;
  }
  return param_6;
}


