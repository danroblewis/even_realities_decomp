/*
 * Function: process_data_loop_with_validation_and_retry
 * Entry:    00076a94
 * Prototype: undefined process_data_loop_with_validation_and_retry()
 */


void process_data_loop_with_validation_and_retry(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(STRING_PROCESSING_AND_PRINTF_CONFIGURATION + 0xc);
  do {
    handle_printf_format_string(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n");
    uVar1 = process_data_with_validation_and_retry_alt2();
  } while( true );
}


