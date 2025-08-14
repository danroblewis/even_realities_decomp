/*
 * Function: FUN_000804e0
 * Entry:    000804e0
 * Prototype: undefined FUN_000804e0()
 */


undefined4 FUN_000804e0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 != 0x20)) {
    uVar1 = 0;
  }
  else if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_0008034c(param_1,param_3);
    FUN_0004fca0(param_3);
    FUN_00080300(param_3,param_3 + 0xb0,0x40);
    FUN_00080300(param_3,param_1,0x20);
    FUN_0008034c(param_1,param_3);
    fill_memory_buffer(param_3,0,0xf0);
    uVar1 = 1;
  }
  return uVar1;
}


