/*
 * Function: FUN_0007158c
 * Entry:    0007158c
 * Prototype: undefined FUN_0007158c()
 */


uint FUN_0007158c(int param_1,uint param_2)

{
  uint uVar1;
  sbyte sVar2;
  
  do {
    uVar1 = param_2;
    if (uVar1 == 0) {
      return 0;
    }
    param_2 = uVar1 - 1;
  } while (*(char *)(param_1 + (uVar1 - 1)) == '\0');
  if (2 < uVar1) {
    if (uVar1 - 2 < 7) {
      sVar2 = (&DAT_000f7c35)[uVar1];
    }
    else {
      sVar2 = 0;
    }
    uVar1 = 1 << sVar2;
  }
  return uVar1;
}


