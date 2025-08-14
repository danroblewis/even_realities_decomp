/*
 * Function: FUN_0004ff00
 * Entry:    0004ff00
 * Prototype: undefined FUN_0004ff00()
 */


undefined4 FUN_0004ff00(void)

{
  bool bVar1;
  int iVar2;
  
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_0004c1f0();
  if (iVar2 != 0) {
    DataSynchronizationBarrier(0xf);
    WaitForInterrupt();
  }
  enableIRQinterrupts();
  InstructionSynchronizationBarrier(0xf);
  return 0;
}


