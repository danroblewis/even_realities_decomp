/*
 * Function: check_work_mode_timestamp_status
 * Entry:    000347cc
 * Prototype: undefined check_work_mode_timestamp_status()
 */


int check_work_mode_timestamp_status(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_work_mode();
  iVar1 = (&DAT_20007dac)[(*(byte *)(iVar1 + 0xdd) - 1) * 0x6d];
  if (iVar1 != 0) {
    uVar2 = get_work_mode_timestamp();
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


