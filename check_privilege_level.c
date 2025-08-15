/*
 * Function: check_privilege_level
 * Entry:    00086406
 * Prototype: undefined check_privilege_level()
 */


uint check_privilege_level(void)

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


