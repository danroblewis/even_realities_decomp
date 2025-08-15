/*
 * Function: ancs_main
 * Entry:    00019950
 * Prototype: undefined ancs_main()
 */


undefined4 ancs_main(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  ANCS_CONNECTION_HANDLE = param_1;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Starting Apple Notification Center Service client\n\n","ancs_main",param_3,
                  0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  iVar4 = 0x32;
  iVar3 = 5;
  do {
    while( true ) {
      iVar1 = get_work_mode();
      if ((*(char *)(iVar1 + 0x1058) != '\0') || (iVar4 == 0)) break;
      iVar4 = iVar4 + -1;
      FUN_0007c0a8(100);
    }
    iVar1 = bluetooth_hci_command_processing_with_callback_execution(0);
    if (iVar1 == 0) break;
    bluetooth_hci_command_processing_with_validation_and_callback();
    DEBUG_PRINT("BLE init failed (err %d) bt_retry_count %d\n",iVar1,iVar3);
    iVar3 = iVar3 + -1;
    FUN_0007c0a8(1000);
  } while (iVar3 != 0);
  FUN_0005e6d4(0,0x183e5);
  FUN_0007f192();
  iVar3 = ancs_c_init(param_1 + 0x34);
  if (iVar3 == 0) goto LAB_00019a16;
  pcVar2 = "ANCS client init failed (err %d)\n";
  do {
    DEBUG_PRINT(pcVar2,iVar3);
    while( true ) {
      DEBUG_PRINT("ancs or ncs init failure, reboot it\n");
      FUN_0007c0a8(1000);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): reboot because ancs start failed\r\n\n","ancs_main");
        }
        else {
          handle_heartbeat();
        }
      }
      FUN_0007c0a8(500);
      system_fatal_error_handler_with_priority_control(1);
LAB_00019a16:
      iVar3 = call_function_with_data();
      if (iVar3 != 0) break;
      iVar3 = bt_connection_disconnect_with_callback_validation_and_parameter(&DAT_20002338);
      if (iVar3 == 0) {
        iVar3 = bt_connection_disconnect_with_parameter_validation_and_callback(&DAT_20002328);
        if (iVar3 != 0) {
          pcVar2 = "Failed to register authorization info callbacks.\n";
          goto LAB_00019a2c;
        }
        FUN_0005a9d8(&DAT_20002320);
        iVar3 = copy_data_structure();
        if (iVar3 != 0) {
          pcVar2 = "Failed to init nus.\n";
          goto LAB_00019a2c;
        }
        iVar3 = bt_start();
        if (iVar3 == 0) {
          start_ancs_work_thread(param_1);
          return 0;
        }
        DEBUG_PRINT("Advertising %s failed to start (err %d)\n",&DAT_2000ff87,iVar3);
      }
      else {
        pcVar2 = "Failed to register authorization callbacks\n";
LAB_00019a2c:
        DEBUG_PRINT(pcVar2);
      }
    }
    pcVar2 = "GATT Service client init failed (err %d)\n";
  } while( true );
}


