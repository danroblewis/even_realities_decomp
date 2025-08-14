/*
 * Function: FUN_0004ff38
 * Entry:    0004ff38
 * Prototype: undefined FUN_0004ff38()
 */


undefined4 FUN_0004ff38(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  iVar2 = FUN_0004c1f0(param_1,0);
  if (iVar2 != 0) {
    DataSynchronizationBarrier(0xf);
    WaitForEvent();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_1);
  }
  enableIRQinterrupts();
  return param_1;
}


