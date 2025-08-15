/*
 * Function: calculate_mathematical_result_alt2
 * Entry:    00024d50
 * Prototype: undefined calculate_mathematical_result_alt2()
 */


int calculate_mathematical_result_alt2(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  send_multiple_control_messages_with_data_manipulation
            (SYSTEM_CONFIGURATION_PARAMETER,&local_c,param_3,&SYSTEM_CONFIGURATION_PARAMETER,param_1
            );
  iVar1 = (local_c >> 0x10) + 1;
  return (local_c & 0xff) * iVar1 + iVar1;
}


