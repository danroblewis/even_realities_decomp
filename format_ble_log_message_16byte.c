/*
 * Function: format_ble_log_message_16byte
 * Entry:    0005a250
 * Prototype: undefined format_ble_log_message_16byte()
 */


void format_ble_log_message_16byte(void)

{
  undefined4 in_r3;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  iStack_18 = format_bluetooth_log_message_with_size(&BLE_LOG_MESSAGE_FORMATTING_BUFFER,0x10);
  if (iStack_18 != 0) {
    local_1c = "Failed to save Database Hash (err %d)";
    local_20 = 3;
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_20);
  }
  return;
}


