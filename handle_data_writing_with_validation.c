/*
 * Function: handle_data_writing_with_validation
 * Entry:    00024f40
 * Prototype: undefined handle_data_writing_with_validation()
 */


void handle_data_writing_with_validation
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0007c8d0(SYSTEM_CONFIGURATION_PARAMETER,param_1 & 0xff,param_3,param_4,param_1,param_2
                      );
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0007c8e8(SYSTEM_CONFIGURATION_PARAMETER,&stack0xffffffef), iVar1 == 0)) {
    FUN_0007c8fa(SYSTEM_CONFIGURATION_PARAMETER);
  }
  return;
}


