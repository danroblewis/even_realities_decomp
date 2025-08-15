/*
 * Function: determine_work_mode_state
 * Entry:    00025364
 * Prototype: undefined determine_work_mode_state()
 */


undefined4 determine_work_mode_state(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_20007a24 < 0x13ed) {
    uVar2 = 2;
  }
  else {
    iVar1 = get_work_mode();
    if (*(byte *)(iVar1 + 0xfc0) < 100) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


