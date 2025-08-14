/*
 * Function: FUN_0007e2ec
 * Entry:    0007e2ec
 * Prototype: undefined FUN_0007e2ec()
 */


undefined4 FUN_0007e2ec(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  return 4;
}


