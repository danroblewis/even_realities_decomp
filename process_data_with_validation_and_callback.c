/*
 * Function: process_data_with_validation_and_callback
 * Entry:    0004def8
 * Prototype: undefined process_data_with_validation_and_callback()
 */


void process_data_with_validation_and_callback
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = extract_byte_from_nested_data_structure
                    (&DAT_00087bc0,(int)&uStack_c + 3,param_3,param_4,param_1);
  if ((iVar1 == 0) && (uStack_c._3_1_ == '\x01')) {
    process_data_with_callback_and_parameter(&DAT_00087bc0);
  }
  DATA_VALIDATION_AND_CALLBACK_PROCESSING_STATE_1 = 1;
  execute_callbacks_and_clear_reference(&DATA_PROCESSING_VALIDATION_AND_CALLBACK);
  return;
}


