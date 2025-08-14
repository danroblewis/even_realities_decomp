/*
 * Function: FUN_0004d0c4
 * Entry:    0004d0c4
 * Prototype: undefined FUN_0004d0c4()
 */


undefined4 FUN_0004d0c4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0xffffffea;
  }
  else if (param_2 == 1) {
    uVar1 = FUN_00070fb4(param_3,param_1 + 0xe0,param_3 + 0x40,0xffffffff,0xffffffff,
                         *(undefined4 *)(param_1 + 0x1ac),&LAB_0007ed26_1,param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


