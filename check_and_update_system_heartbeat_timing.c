/*
 * Function: check_and_update_system_heartbeat_timing
 * Entry:    0004c1f0
 * Prototype: undefined check_and_update_system_heartbeat_timing()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 check_and_update_system_heartbeat_timing(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_2001d44a + 1) % 5;
  iVar1 = get_high_resolution_timer_wrapper();
  if ((DAT_2001d449 == '\0') || (7 < (uint)(iVar1 - *(int *)(&DAT_2000a0b4 + uVar3 * 4)))) {
    if (_DAT_50005114 != 0) {
      _DAT_50005114 = 0;
      DAT_2001d44a = (byte)uVar3;
      if (uVar3 == 0) {
        DAT_2001d449 = '\x01';
      }
    }
    uVar3 = (uint)DAT_2001d44a;
    uVar2 = get_high_resolution_timer_wrapper();
    *(undefined4 *)(&DAT_2000a0b4 + uVar3 * 4) = uVar2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


