/*
 * Function: FUN_0007d850
 * Entry:    0007d850
 * Prototype: undefined FUN_0007d850()
 */


int FUN_0007d850(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 - 0x20U & 0xffff) < 0x60) {
    iVar1 = param_3 * param_2 * (param_1 - 0x20U);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


