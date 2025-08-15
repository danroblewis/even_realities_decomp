/*
 * Function: bluetooth_hci_command_processing_with_callback_execution
 * Entry:    00054a44
 * Prototype: undefined bluetooth_hci_command_processing_with_callback_execution()
 */


int bluetooth_hci_command_processing_with_callback_execution(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  char *local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_20;
  char *local_1c;
  
  if (BLUETOOTH_HCI_COMMAND_STATE == 0) {
    iVar2 = -0x13;
    local_1c = "No HCI driver registered";
    local_20 = 2;
    call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
  }
  else {
    uVar1 = clear_bit_in_bitmap(&BLUETOOTH_PRIVACY_MODE_CONFIGURATION,0xfffffffd);
    iVar2 = set_bits(uVar1,1);
    if (iVar2 << 0x1f < 0) {
      iVar2 = -0x78;
    }
    else {
      iVar2 = process_data_with_validation_and_parameter_alt7();
      if (iVar2 == 0) {
        BLUETOOTH_HCI_COMMAND_PROCESSING_CALLBACK_EXECUTION_STATE = param_1;
        setup_bluetooth_stack(&DAT_20002128,1);
        setup_error_handling(&DAT_2000214c);
        local_38 = 0;
        uStack_34 = 0;
        local_40 = iVar2;
        initialize_ble_connection_with_timeout
                  (&DAT_20005e30,&DAT_2002bb80,0x400,0x545f1,0,0,0,0xfffffff7);
        get_ble_uart_protocol_error_code(&DAT_20005e30,"BT TX");
        initialize_memory_buffer_with_zero_fill(&DAT_20005f08);
        initialize_ble_connection_with_timeout_and_state_management
                  (&DAT_20005f08,&DAT_2002bf80,0x898,0xfffffff8,0);
        get_ble_uart_protocol_error_code(&DAT_20005f08,"BT RX");
        iVar2 = (**(code **)(BLUETOOTH_HCI_COMMAND_STATE + 0xc))();
        if (iVar2 == 0) {
          if (param_1 == 0) {
            iVar2 = initialize_system_device();
          }
          else {
            initialize_accelerometer_wrapper(&DAT_200020c4);
          }
        }
        else {
          local_3c = "HCI driver open failed (%d)";
          local_40 = 3;
          local_38 = iVar2;
          call_system_cleanup_alt(&DAT_00088138,0x1840,&local_40);
        }
      }
    }
  }
  return iVar2;
}


