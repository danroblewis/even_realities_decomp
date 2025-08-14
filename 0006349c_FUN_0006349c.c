/*
 * Function: FUN_0006349c
 * Entry:    0006349c
 * Prototype: undefined FUN_0006349c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0006349c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_2000b2d8;
  uVar2 = 1 << (param_1 & 0xff);
  DAT_2000b2d8 = DAT_2000b2d8 & ~uVar2;
  _DAT_50015308 = 0x10000 << (param_1 & 0xff);
  DataMemoryBarrier(0x1f);
  InstructionSynchronizationBarrier(0xf);
  return (uVar2 & uVar1) != 0;
}


