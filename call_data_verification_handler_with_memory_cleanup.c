/*
 * Function: call_data_verification_handler_with_memory_cleanup
 * Entry:    00076d7c
 * Prototype: undefined __stdcall call_data_verification_handler_with_memory_cleanup(undefined4 verification_data)
 */


void call_data_verification_handler_with_memory_cleanup(undefined4 verification_data)

{
  memory_free_with_mutex_protection(DAT_20002d20,verification_data);
  return;
}


