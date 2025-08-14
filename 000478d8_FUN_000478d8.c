/*
 * Function: FUN_000478d8
 * Entry:    000478d8
 * Prototype: undefined FUN_000478d8()
 */


undefined * FUN_000478d8(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  fill_memory_buffer(&DAT_2000f704,0,0x800);
  uVar2 = FUN_0000ef12(param_1);
  uVar1 = FUN_00047844(param_1,uVar2,&DAT_2000f704,0x400);
  *param_2 = uVar1;
  return &DAT_2000f704;
}


