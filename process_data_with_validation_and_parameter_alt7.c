/*
 * Function: process_data_with_validation_and_parameter_alt7
 * Entry:    00052edc
 * Prototype: undefined process_data_with_validation_and_parameter_alt7()
 */


int process_data_with_validation_and_parameter_alt7(void)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = handle_configuration_setting_with_callback();
  if (iVar1 != 0) {
    local_1c = "settings_subsys_init failed (err %d)";
    local_20 = 3;
    iStack_18 = iVar1;
    process_and_compress_data_with_validation(&DAT_00088178,0x1840,&local_20,0);
  }
  return iVar1;
}


