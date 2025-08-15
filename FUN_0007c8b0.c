/*
 * Function: FUN_0007c8b0
 * Entry:    0007c8b0
 * Prototype: undefined FUN_0007c8b0()
 */


void FUN_0007c8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    resource_mutex_acquire(*(undefined4 *)(param_1 + 0x10),param_2,0xffffffff,0xffffffff,param_4);
  }
  return;
}


