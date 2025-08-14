/*
 * Function: FUN_00087862
 * Entry:    00087862
 * Prototype: undefined FUN_00087862()
 */


undefined4 FUN_00087862(undefined4 param_1,undefined4 *param_2)

{
  if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
    if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
      FUN_00076d8c();
    }
    param_2[0xd] = 0;
    param_2[1] = param_2[0x10];
    if (param_2[0x10] != 0) {
      *param_2 = param_2[0xf];
      return 0;
    }
  }
  *param_2 = param_2[4];
  param_2[1] = 0;
  *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x20;
  return 0xffffffff;
}


