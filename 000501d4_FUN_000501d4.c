/*
 * Function: FUN_000501d4
 * Entry:    000501d4
 * Prototype: undefined FUN_000501d4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000501d4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_2000b450;
  *(undefined4 *)(DAT_2000b450 + 0x8c) = param_1;
  *(undefined4 *)(iVar2 + 0x90) = 0xfffffff5;
  _DAT_e000ed04 = _DAT_e000ed04 | 0x10000000;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  return *(undefined4 *)(DAT_2000b450 + 0x90);
}


