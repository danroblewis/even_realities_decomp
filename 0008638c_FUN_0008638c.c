/*
 * Function: FUN_0008638c
 * Entry:    0008638c
 * Prototype: undefined FUN_0008638c()
 */


uint FUN_0008638c(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    bVar2 = ((char *)*puVar1)[1];
    param_1 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      param_1 = (uint)(*(char *)*puVar1 == '\0');
    }
  }
  return param_1;
}


