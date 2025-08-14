/*
 * Function: FUN_00047148
 * Entry:    00047148
 * Prototype: undefined FUN_00047148()
 */


void FUN_00047148(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_000864c2(&JBD_DISPLAY_CONFIG);
  *param_1 = 0x46fc1;
  param_1[1] = &LAB_00046d8c_1;
  param_1[2] = &LAB_00046f20_1;
  param_1[3] = 0x46d2d;
  param_1[4] = 0x46dd9;
  param_1[5] = &LAB_00035774_1;
  param_1[6] = &LAB_0007d4d6_1;
  param_1[7] = &LAB_0007d4ca_1;
  param_1[8] = &LAB_00046ce8_1;
  iVar1 = malloc_maybe(0xfa08);
  iVar3 = iVar1 + 5;
  param_1[0xd1] = iVar3;
  piVar2 = param_1 + 8;
  do {
    piVar2 = piVar2 + 1;
    *piVar2 = iVar3;
    iVar3 = iVar3 + 0x140;
  } while (iVar3 != iVar1 + 0xfa05);
  param_1[0xd4] = 64000;
  return;
}


