/*
 * Function: FUN_00085974
 * Entry:    00085974
 * Prototype: undefined FUN_00085974()
 */


void FUN_00085974(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    if (((*param_1 != '\0') && (*(char *)(*(int *)(param_1 + 0x20) + 0x90) != '\0')) &&
       (0x3ff < *(uint *)(param_1 + 0x24))) {
      FUN_00085898(param_1,1);
    }
    FUN_00085846(param_1);
    return;
  }
  return;
}


