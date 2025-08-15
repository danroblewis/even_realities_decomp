/*
 * Function: format_bluetooth_log_message_with_validation
 * Entry:    00052f68
 * Prototype: undefined format_bluetooth_log_message_with_validation()
 */


void format_bluetooth_log_message_with_validation(void)

{
  undefined4 local_20;
  char *local_1c;
  int local_18;
  
  local_18 = (uint)BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE * 7;
  local_18 = format_bluetooth_log_message("id",0);
  if (local_18 != 0) {
    local_1c = "Failed to save ID (err %d)";
    local_20 = 3;
    process_and_compress_data_with_validation(&DAT_00088178,0x1840,&local_20,0);
  }
  return;
}


