/*
 * Function: call_function_with_parameters
 * Entry:    000232c0
 * Prototype: undefined call_function_with_parameters()
 */


undefined4
call_function_with_parameters
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  process_string_with_error_handling_and_validation
            (&SYSTEM_SETTINGS_LOADING_BUFFER,0x10,&DAT_000a8c37,param_1,param_4);
  return 0;
}


