/*
 * Function: handle_printf_format_string
 * Entry:    00076cc8
 * Prototype: undefined handle_printf_format_string()
 */


void handle_printf_format_string
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  printf_format_string_processor
            (STRING_PROCESSING_AND_PRINTF_CONFIGURATION,param_1,param_2,&uStack_8,param_1,&uStack_8)
  ;
  return;
}


