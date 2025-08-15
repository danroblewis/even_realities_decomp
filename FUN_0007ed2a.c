/*
 * Function: FUN_0007ed2a
 * Entry:    0007ed2a
 * Prototype: undefined FUN_0007ed2a()
 */


undefined4 FUN_0007ed2a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_00085bf6(param_1 + 0xe0);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


