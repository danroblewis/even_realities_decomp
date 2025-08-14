/*
 * Function: FUN_0007de5c
 * Entry:    0007de5c
 * Prototype: undefined FUN_0007de5c()
 */


uint FUN_0007de5c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) < 0x8000) {
    iVar1 = 4;
  }
  else {
    iVar1 = 8;
  }
  return (uint)((param_2 - iVar1) - param_1) >> 3;
}


