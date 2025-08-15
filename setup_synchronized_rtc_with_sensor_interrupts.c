/*
 * Function: setup_synchronized_rtc_with_sensor_interrupts
 * Entry:    0004c2d4
 * Prototype: undefined setup_synchronized_rtc_with_sensor_interrupts()
 */


/* WARNING: Removing unreachable block (ram,0x0004c328) */

int setup_synchronized_rtc_with_sensor_interrupts(void)

{
  int iVar1;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 local_1c;
  
  iVar1 = FUN_0006540c(&local_1c);
  if (iVar1 == 0xbad0000) {
    iVar1 = FUN_0006385c();
    if (iVar1 < 0) {
      FUN_00065418(local_1c & 0xff);
    }
    else {
      local_1c = CONCAT22(0x807,CONCAT11((char)iVar1,(sbyte)local_1c));
      iVar1 = FUN_00083d34(&DAT_00087bd8,8,0x4c419,local_1c);
      if ((-1 < iVar1) && (iVar1 = FUN_00061ba0(&DAT_00087bd8,8,1), -1 < iVar1)) {
        FUN_00064f30(1 << (sbyte)local_1c);
        manage_sensor_interrupt_configuration(local_1c & 0xff,local_1c._1_1_,local_1c._3_1_,1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = -0x13;
  }
  local_2c = "Failed synchronized RTC setup (err: %d)";
  local_30 = 3;
  iStack_28 = iVar1;
  process_and_compress_data_with_validation(&DAT_00088288,0x1840,&local_30,0);
  return iVar1;
}


