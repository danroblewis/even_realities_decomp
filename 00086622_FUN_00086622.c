/*
 * Function: FUN_00086622
 * Entry:    00086622
 * Prototype: undefined FUN_00086622()
 */


int FUN_00086622(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)*(char *)(param_1 + 0xe) == (int)*(char *)(param_2 + 0xe)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_2 + 0xe) - (int)*(char *)(param_1 + 0xe);
  }
  return iVar1;
}


