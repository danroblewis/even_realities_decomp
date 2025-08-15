/*
 * Function: trigger_system_service_call
 * Entry:    0007e2ec
 * Prototype: undefined trigger_system_service_call()
 */


undefined4 trigger_system_service_call(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  return 4;
}


