/*
 * Function: process_data_with_parameter_validation
 * Entry:    0004df88
 * Prototype: undefined process_data_with_parameter_validation()
 */


void process_data_with_parameter_validation(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = check_driver_ready(&DAT_00087bc0);
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(uart_dev)",
                 "WEST_TOPDIR/zephyr/subsys/logging/backends/log_backend_uart.c",0x7f,in_r3);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/logging/backends/log_backend_uart.c",0x7f);
  }
  return;
}


