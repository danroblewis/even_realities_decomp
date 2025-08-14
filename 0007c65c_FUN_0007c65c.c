/*
 * Function: FUN_0007c65c
 * Entry:    0007c65c
 * Prototype: undefined FUN_0007c65c()
 */


undefined4 FUN_0007c65c(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    param_2[1] = *(undefined4 *)(param_1 + 0x10);
    return 0;
  }
  return 7;
}


