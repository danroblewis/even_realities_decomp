/*
 * Function: process_data_with_initialization_and_callback_validation
 * Entry:    000543d8
 * Prototype: undefined process_data_with_initialization_and_callback_validation()
 */


int process_data_with_initialization_and_callback_validation
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if ((param_2 == 0) && (param_2 = process_data_with_initialization_and_store(), param_2 == 0)) {
    iVar1 = -0x69;
  }
  else if (param_1 == 0xc35) {
    iVar1 = process_data_with_initialization_and_state_validation(param_2);
    if (iVar1 != 0) {
      local_24 = "Unable to send to driver (err %d)";
      local_28 = 3;
      iStack_20 = iVar1;
      call_system_cleanup_alt(&DAT_00088138,0x1840,&local_28);
      FUN_0005f24c(param_2);
    }
  }
  else {
    FUN_0005f200(&DAT_2000214c,param_2);
    iVar1 = 0;
  }
  return iVar1;
}


