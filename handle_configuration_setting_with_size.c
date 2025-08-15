/*
 * Function: handle_configuration_setting_with_size
 * Entry:    0004e98c
 * Prototype: undefined handle_configuration_setting_with_size()
 */


undefined1
handle_configuration_setting_with_size
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (2 < param_1) {
    process_and_compress_data_with_validation_wrapper
              (&DAT_00088130,0x1040,&stack0xfffffff0,2,param_1,param_2,param_3,param_4);
    return 0;
  }
  return (&DAT_000f1590)[param_1];
}


