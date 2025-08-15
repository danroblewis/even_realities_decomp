/*
 * Function: process_data_with_callback_validation
 * Entry:    0004df40
 * Prototype: undefined process_data_with_callback_validation()
 */


void process_data_with_callback_validation(undefined4 param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)get_system_parameter_by_index(DATA_CALLBACK_VALIDATION_PROCESSING_STATE);
                    /* WARNING: Could not recover jumptable at 0x0004df58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DATA_PROCESSING_VALIDATION_AND_CALLBACK,param_2,0xf);
  return;
}


