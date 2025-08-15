/*
 * Function: process_data_with_parameter_validation_alt3
 * Entry:    00051870
 * Prototype: undefined process_data_with_parameter_validation_alt3()
 */


int process_data_with_parameter_validation_alt3
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) &&
     (iVar1 = setup_device_buffer_with_validation_and_initialization
                        (&DAT_2000a954,(undefined1)DAT_2000ab7c), iVar1 != 0)) {
    iVar1 = 10;
  }
  else {
    iVar1 = manage_device_buffer_operations(&DAT_2000a954,param_2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = 0xc;
    }
  }
  return iVar1;
}


