/*
 * Function: FUN_000347cc
 * Entry:    000347cc
 * Prototype: undefined FUN_000347cc()
 */


int FUN_000347cc(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_work_mode();
  iVar1 = (&DAT_20007dac)[(*(byte *)(iVar1 + 0xdd) - 1) * 0x6d];
  if (iVar1 != 0) {
    uVar2 = FUN_0007d224();
    iVar1 = get_work_mode();
    if ((&DAT_20007dac)[(*(byte *)(iVar1 + 0xdd) - 1) * 0x6d] + 0xf < uVar2) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}


