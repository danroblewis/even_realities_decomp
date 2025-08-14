/*
 * Function: FUN_00050304
 * Entry:    00050304
 * Prototype: undefined FUN_00050304()
 */


longlong FUN_00050304(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_2000b450 == param_1) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getCurrentExceptionNumber();
      uVar4 = uVar4 & 0x1f;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      *(byte *)(DAT_2000b450 + 0xc) = *(byte *)(DAT_2000b450 + 0xc) & 0xfd;
      cVar2 = isThreadModePrivileged();
      isUsingMainStack();
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setThreadModePrivileged(cVar2 == '\x01');
        bVar1 = (bool)isThreadMode();
        if (bVar1) {
          cVar2 = isUsingMainStack();
          setStackMode(cVar2 == '\x01');
        }
      }
      InstructionSynchronizationBarrier(0xf);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      return (ulonglong)uVar4 << 0x20;
    }
  }
  return CONCAT44(param_2,0xffffffea);
}


