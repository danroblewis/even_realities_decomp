/*
 * Function: handle_data_writing_alt
 * Entry:    00024d74
 * Prototype: undefined handle_data_writing_alt()
 */


int handle_data_writing_alt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = send_control_message_with_retry_and_mutex
                    (SYSTEM_CONFIGURATION_PARAMETER,0,param_1,4,param_4);
  if (*(char *)(param_1 + 2) == '\0') {
    if (iVar1 != 0) {
      return -1;
    }
    iVar1 = send_control_message_with_retry_and_mutex
                      (SYSTEM_CONFIGURATION_PARAMETER,4,param_1 + 4,4,param_4);
  }
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return -iVar1;
}


