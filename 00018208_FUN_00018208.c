/*
 * Function: FUN_00018208
 * Entry:    00018208
 * Prototype: undefined FUN_00018208()
 */


void FUN_00018208(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[0x93] = param_1 + 0xe5;
  *param_1 = 0x2201d;
  FUN_000864c2(&DAT_20006a1c);
  param_1[3] = 0x17e85;
  FUN_00086534(param_1 + 0x86,0,1);
  FUN_00086534(param_1 + 0x8c,0,2);
  param_1[0x94] = param_1 + 0x230;
  *(undefined1 *)((int)param_1 + 0x365) = 0;
  *(undefined1 *)((int)param_1 + 0x366) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  BLUETOOTH_MANAGER = param_1;
  uVar1 = malloc_maybe(0x15);
  param_1[0x95] = uVar1;
  fill_memory_buffer(uVar1,0,0x15,param_4);
  return;
}


