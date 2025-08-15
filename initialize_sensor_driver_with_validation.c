/*
 * Function: initialize_sensor_driver_with_validation
 * Entry:    000332dc
 * Prototype: undefined initialize_sensor_driver_with_validation()
 */


undefined4 initialize_sensor_driver_with_validation(void)

{
  char cVar1;
  int iVar2;
  undefined4 in_r3;
  
  cVar1 = DAT_2001a127;
  if (DAT_2001a127 == '\0') {
    iVar2 = check_driver_ready(&DAT_00087bc0);
    if (iVar2 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(lpuart)",
                   "../src/production_test/serial_thread.c",0x2e,in_r3);
      DEBUG_PRINT2("\tLPUART device not ready\n");
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("../src/production_test/serial_thread.c",0x2e);
    }
    iVar2 = configure_sensor_driver_interface(&DAT_00087bc0);
    if (iVar2 != 0) {
      DAT_2001a127 = cVar1;
      DEBUG_PRINT("init_serial_port is failed\n");
      return 0xffffffff;
    }
    DAT_2001a127 = '\x01';
  }
  return 0;
}


