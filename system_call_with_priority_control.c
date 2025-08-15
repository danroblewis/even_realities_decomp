/*
 * Function: system_call_with_priority_control
 * Entry:    0007e526
 * Prototype: undefined system_call_with_priority_control()
 */


void system_call_with_priority_control(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  enter_system_wait_state_with_data_synchronization();
  return;
}


