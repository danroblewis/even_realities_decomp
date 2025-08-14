/*
 * Function: FUN_0008016a
 * Entry:    0008016a
 * Prototype: undefined FUN_0008016a()
 */


int FUN_0008016a(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      fill_memory_buffer(param_1,0,0x58);
      *(undefined4 *)(param_1 + 0x48) = param_3;
      FUN_0004fa34(param_3,param_2);
      fill_memory_buffer(param_1,0,0x10);
      FUN_00080058(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
      FUN_00080104(param_1 + 0x10,param_1);
      FUN_00080104(param_1 + 0x20,param_1 + 0x10);
      FUN_0008013e(param_1);
      param_1 = 1;
    }
  }
  return param_1;
}


