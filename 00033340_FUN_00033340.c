/*
 * Function: FUN_00033340
 * Entry:    00033340
 * Prototype: undefined FUN_00033340()
 */


int FUN_00033340(void)

{
  int iVar1;
  
  iVar1 = FUN_000332dc();
  if (iVar1 == 0) {
    iVar1 = FUN_00033088(&DAT_00087bc0);
    if (iVar1 == 0) {
      iVar1 = enter_into_long_trip();
      if (iVar1 != 0) {
        iVar1 = -3;
      }
    }
    else {
      DEBUG_PRINT("init_serial_comm is failed\n");
      get_schedule_timing(0x4000,0);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


