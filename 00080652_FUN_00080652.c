/*
 * Function: FUN_00080652
 * Entry:    00080652
 * Prototype: undefined FUN_00080652()
 */


int FUN_00080652(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      fill_memory_buffer(param_1 + 0xf0,0,0x20,param_4,param_1,param_2,param_3);
      fill_memory_buffer(param_1 + 0x110,1,0x20);
      FUN_00080530(param_1,param_2,param_3,0,0);
      iVar1 = 1;
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
  }
  return iVar1;
}


