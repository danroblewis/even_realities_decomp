/*
 * Function: FUN_000500c8
 * Entry:    000500c8
 * Prototype: undefined FUN_000500c8()
 */


void FUN_000500c8(char param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (-1 < (int)uVar1) {
    *(int *)(((uVar1 >> 5) + 0x20) * 4 + -0x1fff1f00) = 1 << (uVar1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


