/*
 * Function: FUN_0004df88
 * Entry:    0004df88
 * Prototype: undefined FUN_0004df88()
 */


void FUN_0004df88(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = FUN_0008638c(&DAT_00087bc0);
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(uart_dev)",
                 "WEST_TOPDIR/zephyr/subsys/logging/backends/log_backend_uart.c",0x7f,in_r3);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/backends/log_backend_uart.c",0x7f);
  }
  return;
}


