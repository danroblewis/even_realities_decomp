/*
 * Function: FUN_000230bc
 * Entry:    000230bc
 * Prototype: undefined FUN_000230bc()
 */


undefined4 FUN_000230bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fill_memory_buffer(param_1 + 0x10c6,0xff,0xc0,param_1 + 0x10c6,param_4);
  FUN_00022658(0x135000,uVar1,0xc0);
  return 0;
}


