/*
 * Function: assertion_failure
 * Entry:    0007e2ec
 * Prototype: undefined assertion_failure()
 */


undefined4 assertion_failure(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  return 4;
}


