/*
 * Function: FUN_00080692
 * Entry:    00080692
 * Prototype: undefined FUN_00080692(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4 FUN_00080692(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 0x20)) {
    uVar1 = 0;
  }
  else if ((param_4 == 0) || (param_5 != 0)) {
    FUN_00080530();
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


