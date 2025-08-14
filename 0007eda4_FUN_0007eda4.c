/*
 * Function: FUN_0007eda4
 * Entry:    0007eda4
 * Prototype: undefined FUN_0007eda4()
 */


undefined4 FUN_0007eda4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fill_memory_buffer(param_1,0,0x30,param_4,param_4);
  fill_memory_buffer(param_1 + 0xbc,0,0x18);
  fill_memory_buffer(param_1 + 0xa4,0,0x18);
  FUN_00070ee4(*(undefined4 *)(param_1 + 0xd8));
  FUN_00070ee4(*(undefined4 *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_000681cc(param_1 + 0x34);
  FUN_00068280();
  if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
    (**(code **)(param_1 + 0x6c))(param_1 + 0x40);
  }
  fill_memory_buffer(param_1 + 0x40,0,0x38);
  return 0;
}


