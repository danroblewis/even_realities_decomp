/*
 * Function: FUN_0004c0a8
 * Entry:    0004c0a8
 * Prototype: undefined FUN_0004c0a8()
 */


void FUN_0004c0a8(undefined4 param_1)

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
  FUN_00063954();
  FUN_00050af8(param_1);
  DEBUG_PRINT("Failed to reboot: spinning endlessly...\n");
  do {
    FUN_0004ff00();
  } while( true );
}


