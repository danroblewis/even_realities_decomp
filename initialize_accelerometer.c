/*
 * Function: initialize_accelerometer
 * Entry:    000865fc
 * Prototype: undefined initialize_accelerometer()
 */


int initialize_accelerometer(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00072f28();
  if (0 < iVar3) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    initialize_magnetometer(uVar4);
  }
  return iVar3;
}


