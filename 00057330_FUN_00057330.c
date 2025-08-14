/*
 * Function: FUN_00057330
 * Entry:    00057330
 * Prototype: undefined FUN_00057330()
 */


undefined4 FUN_00057330(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1 = param_1 + 0xc;
  iVar1 = param_1;
  if (DAT_2000ad24 != (int *)0x0) {
    *DAT_2000ad24 = param_1;
    iVar1 = DAT_2000ad20;
  }
  DAT_2000ad20 = iVar1;
  DAT_2000ad24 = (int *)param_1;
  return 0;
}


