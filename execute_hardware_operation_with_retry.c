/*
 * Function: execute_hardware_operation_with_retry
 * Entry:    0002ae84
 * Prototype: int execute_hardware_operation_with_retry(undefined4 param1, undefined4 param2, undefined4 param3, undefined4 param4)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int execute_hardware_operation_with_retry(undefined4 param1, undefined4
   param2, undefined4 param3, undefined4 param4) */

int execute_hardware_operation_with_retry
              (undefined4 param1,undefined4 param2,undefined4 param3,undefined4 param4)

{
  int function_result;
  int operation_result;
  
  operation_result = 5;
  do {
    function_result =
         conditional_callback_execution_with_parameter_packing
                   (&HARDWARE_OPERATION_MESSAGE,
                    DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE);
    if (function_result == 0) {
      return 0;
    }
    calculate_ble_schedule_timing(0x667,0);
    operation_result = operation_result + -1;
  } while (operation_result != 0);
  return function_result;
}


