/*
 * Function: handle_state_checking
 * Entry:    00024cc8
 * Prototype: undefined handle_state_checking()
 */


char handle_state_checking(int param_1)

{
  char local_19;
  undefined4 local_18;
  undefined4 local_14;
  
  local_19 = '\0';
  send_control_message_and_process_status_response(SYSTEM_CONFIGURATION_PARAMETER,&local_19);
  if (local_19 == '\0') {
    if (param_1 == 0) goto LAB_00024cf4;
    local_14 = 0;
    local_18 = 0;
  }
  else {
    if ((local_19 != '\x01') || (param_1 != 0)) goto LAB_00024cf4;
    local_18 = 0x12345678;
    local_14 = 0x13245678;
  }
  process_data_and_execute_resource_operation(SYSTEM_CONFIGURATION_PARAMETER,&local_18);
LAB_00024cf4:
  send_control_message_and_process_status_response(SYSTEM_CONFIGURATION_PARAMETER,&local_19);
  return local_19;
}


