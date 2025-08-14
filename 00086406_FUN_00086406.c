/*
 * Function: FUN_00086406
 * Entry:    00086406
 * Prototype: undefined FUN_00086406()
 */


uint FUN_00086406(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


