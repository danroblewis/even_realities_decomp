/*
 * Function: FUN_0007e212
 * Entry:    0007e212
 * Prototype: undefined FUN_0007e212()
 */


undefined4 FUN_0007e212(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    fill_memory_buffer(param_1,0,0x20,param_2[1],param_4);
    uVar1 = 0;
    *(int **)(param_1 + 0x10) = param_2;
  }
  return uVar1;
}


