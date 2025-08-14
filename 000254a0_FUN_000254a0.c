/*
 * Function: FUN_000254a0
 * Entry:    000254a0
 * Prototype: undefined FUN_000254a0()
 */


void FUN_000254a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00025474();
  *(bool *)param_2 = iVar1 != 0;
  if (iVar1 != 0) {
    if (DAT_20018c68 == '\0') {
      DAT_20018c68 = '\x01';
    }
  }
  else if ((DAT_20018c68 != '\0') && (DAT_20018c68 = '\0', *(char *)(param_1 + 2) == '\0')) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


