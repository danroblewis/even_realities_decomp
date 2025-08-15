/*
 * Function: setup_gyroscope
 * Entry:    00086622
 * Prototype: undefined setup_gyroscope()
 */


int setup_gyroscope(int param_1,int param_2)

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


