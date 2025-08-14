/*
 * Function: FUN_0007de70
 * Entry:    0007de70
 * Prototype: undefined FUN_0007de70()
 */


uint FUN_0007de70(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x8000) {
    iVar1 = 4;
  }
  else {
    iVar1 = 8;
  }
  return (uint)(param_2 + 7 + iVar1) >> 3;
}


