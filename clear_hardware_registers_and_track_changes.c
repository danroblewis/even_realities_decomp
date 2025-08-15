/*
 * Function: clear_hardware_registers_and_track_changes
 * Entry:    00065620
 * Prototype: undefined __stdcall clear_hardware_registers_and_track_changes(undefined4 bit_mask)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint clear_hardware_registers_and_track_changes(uint bit_mask)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = validate_index_and_calculate_offset(uVar3 & 0xff);
    uVar2 = 1 << (iVar1 - 0x100U >> 2 & 0xff);
    if ((bit_mask & uVar2) != 0) {
      if (*(int *)(iVar1 + 0x5000d000) != 0) {
        *(int *)(iVar1 + 0x5000d000) = 0;
        uVar4 = uVar4 | uVar2;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 8);
  if (_DAT_5000d17c != 0) {
    _DAT_5000d17c = 0;
    uVar4 = uVar4 | 0x80000000;
  }
  return uVar4;
}


