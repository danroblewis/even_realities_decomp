/*
 * Function: FUN_0007e238
 * Entry:    0007e238
 * Prototype: undefined FUN_0007e238()
 */


undefined4 FUN_0007e238(int *param_1)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = param_1[1] & 3;
    if ((uVar1 == 2) || (uVar1 == 3)) {
      if (*param_1 != 0) goto LAB_0007e25a;
    }
    else if (uVar1 == 1) {
LAB_0007e25a:
      param_1[2] = 0;
      return 0;
    }
  }
  return 0xffffffea;
}


