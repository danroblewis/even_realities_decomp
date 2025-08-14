/*
 * Function: FUN_0007f8c6
 * Entry:    0007f8c6
 * Prototype: undefined FUN_0007f8c6()
 */


undefined4 FUN_0007f8c6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    fill_memory_buffer(param_1,0,0x2c,param_4,param_4);
    uVar1 = 0;
  }
  return uVar1;
}


