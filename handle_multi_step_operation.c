/*
 * Function: handle_multi_step_operation
 * Entry:    000188d8
 * Prototype: undefined handle_multi_step_operation()
 */


void handle_multi_step_operation(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *format_string;
  
  uVar1 = dereference_pointer_simple();
  DEBUG_PRINT("The discovery procedure for ANCS succeeded\n");
  iVar2 = process_data_with_state_management_alt(param_1,param_2);
  if (iVar2 == 0) {
    ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS = ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS | 2;
    iVar2 = process_data_with_parameter_validation_alt(param_2,&LAB_00018ef4_1);
    if (iVar2 != 0) {
      DEBUG_PRINT("Failed to enable Notification Source notification (err %d)\n",iVar2);
    }
    iVar2 = process_data_with_callback_execution_alt(param_2,0x18c49);
    if (iVar2 == 0) goto LAB_000188fc;
    format_string = "Failed to enable Data Source notification (err %d)\n";
  }
  else {
    format_string = "Could not init ANCS client object, error: %d\n";
  }
  DEBUG_PRINT(format_string,iVar2);
LAB_000188fc:
  iVar2 = manage_microphone_state_with_bitwise_operations(param_1);
  if (iVar2 != 0) {
    DEBUG_PRINT("Could not release the discovery data, error code: %d\n",iVar2);
  }
  clear_system_flags_with_bitwise_and(&ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS,0xfffffffe);
  handle_conditional_operation(uVar1,1);
  return;
}


