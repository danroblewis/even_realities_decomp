/*
 * Function: FUN_0004fe34
 * Entry:    0004fe34
 * Prototype: undefined FUN_0004fe34()
 */


void FUN_0004fe34(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    (*DAT_20002ef4)("mutex_init called with NULL parameter");
  }
  uVar3 = param_1[1];
  if (uVar3 == 0x3a000) {
    return;
  }
  if (uVar3 == 0xe80000) {
    return;
  }
  if (uVar3 == 0xa95c5f2c) {
    if (*param_1 != 0) goto LAB_0004fe9c;
  }
  else {
    if (uVar3 < 0x3a001) {
      if (uVar3 == 0x3a) goto LAB_0004fe9c;
      uVar2 = 0xeba;
    }
    else {
      uVar2 = 0x3a00003a;
    }
    if (uVar3 == uVar2) goto LAB_0004fe9c;
  }
  iVar1 = FUN_00071c20(&DAT_2000a7d4,param_1,0xffffffff,0xffffffff);
  if ((iVar1 != 0) || (*param_1 == 0)) {
    (*DAT_20002ef4)("Could not allocate mutex before initializing");
  }
  fill_memory_buffer(*param_1,0,0x14);
  param_1[1] = 0xe80;
LAB_0004fe9c:
  FUN_000864c2(*param_1);
  param_1[1] = param_1[1] | 0x3a;
  return;
}


