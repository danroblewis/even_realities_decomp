/*
 * Function: call_data_verification_handler
 * Entry:    00076d7c
 * Prototype: undefined __stdcall call_data_verification_handler(undefined4 verification_data)
 */


void call_data_verification_handler(undefined4 verification_data)

{
  memory_free(DAT_20002d20,verification_data);
  return;
}


