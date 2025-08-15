/*
 * Function: handle_data_writing_with_validation
 * Entry:    00024f40
 * Prototype: undefined handle_data_writing_with_validation()
 */


void handle_data_writing_with_validation
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = execute_resource_operation_with_retry_wrapper
                    (SYSTEM_CONFIGURATION_PARAMETER,param_1 & 0xff,param_3,param_4,param_1,param_2);
  if ((iVar1 == 0) &&
     (iVar1 = send_control_message_with_retry_if_valid
                        (SYSTEM_CONFIGURATION_PARAMETER,&stack0xffffffef), iVar1 == 0)) {
    send_control_message_and_execute_resource_operation(SYSTEM_CONFIGURATION_PARAMETER);
  }
  return;
}


