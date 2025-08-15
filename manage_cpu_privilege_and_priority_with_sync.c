/*
 * Function: manage_cpu_privilege_and_priority_with_sync
 * Entry:    000837c2
 * Prototype: undefined manage_cpu_privilege_and_priority_with_sync()
 */


void manage_cpu_privilege_and_priority_with_sync(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  *param_1 = *param_1 & 0xc0 | 2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


