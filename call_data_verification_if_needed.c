/*
 * Function: call_data_verification_if_needed
 * Entry:    00047ab8
 * Prototype: undefined call_data_verification_if_needed()
 */


void call_data_verification_if_needed(void)

{
  if (BMP_PROCESSED_DATA != 0) {
    call_data_verification_handler_with_memory_cleanup();
    BMP_PROCESSED_DATA = 0;
  }
  return;
}


