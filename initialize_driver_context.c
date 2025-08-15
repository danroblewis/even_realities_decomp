/*
 * Function: initialize_driver_context
 * Entry:    000259d4
 * Prototype: undefined initialize_driver_context()
 */


undefined * initialize_driver_context(void)

{
  int driver_context;
  char *debug_message;
  undefined *puVar1;
  
  DAT_20007a50 = &PTR_send_control_message_with_retry_and_mutex_1_00088a38;
  DAT_200023d0 = 0x53;
  DAT_200023d4 = 0x53;
  DAT_200023d8 = 0x1000;
  DAT_20007a58 = &DAT_20007a60;
  DAT_20007a4c = &DAT_200023cc;
  init_mutex();
  driver_context = check_driver_ready(DAT_200023cc);
  if (driver_context == 0) {
    debug_message = "parent bus device not ready\r\n";
  }
  else {
    debug_message = "eeprom_st25dv_init ready\r\n";
  }
  DEBUG_PRINT(debug_message);
  driver_context = check_driver_ready(DAT_200023cc);
  if (driver_context == 0) {
    DEBUG_PRINT("\nError: Device \"%s\" is not ready; check the driver initialization logs for errors.\n"
                ,*DAT_200023cc);
    puVar1 = (undefined *)0x0;
  }
  else {
    DEBUG_PRINT("update_eeprom_interface\r\n");
    puVar1 = &DAT_20007a48;
  }
  return puVar1;
}


