/*
 * Function: power_down_and_execute
 * Entry:    000167f4
 * Prototype: undefined power_down_and_execute()
 */


undefined4 power_down_and_execute(void)

{
  int iVar1;
  char *format_string;
  undefined4 in_r3;
  
  power_down_panel();
  power_down_imu_and_mic();
  FUN_0007c038(2000);
  iVar1 = FUN_00083dc8(&DAT_00087c80,0xb,2,1,in_r3);
  if (iVar1 < 0) {
    format_string = "Could not set shipmode.\n";
  }
  else {
    format_string = "enable for shipmode\n";
  }
  DEBUG_PRINT(format_string);
  return 0;
}


