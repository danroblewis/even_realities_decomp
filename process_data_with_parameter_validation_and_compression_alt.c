/*
 * Function: process_data_with_parameter_validation_and_compression_alt
 * Entry:    00053530
 * Prototype: undefined process_data_with_parameter_validation_and_compression_alt()
 */


void process_data_with_parameter_validation_and_compression_alt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0005f074(&DAT_20002144,param_1);
  iStack_18 = initialize_accelerometer(&DAT_20005f08,&DAT_20002980);
  if (iStack_18 < 0) {
    local_1c = "Could not submit rx_work: %d";
    local_20 = 3;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_20);
  }
  return;
}


