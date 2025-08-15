/*
 * Function: handle_data_processing_callback_with_validation
 * Entry:    0007ecc4
 * Prototype: undefined __stdcall handle_data_processing_callback_with_validation(undefined4 context, undefined4 data, undefined4 status_flag, undefined4 additional_context, undefined4 data_structure)
 */


undefined4
handle_data_processing_callback_with_validation
          (undefined4 param_1,undefined4 data,int status_flag,undefined4 param_4,int data_structure)

{
  code *pcVar1;
  
  if (status_flag == 0) {
    if (*(char *)(data_structure + 100) == '\0') {
      *(undefined1 *)(data_structure + 100) = 1;
      process_data_with_validation_and_retry(data_structure);
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)(data_structure + 0x68) + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(data,status_flag,*(undefined4 *)(data_structure + 0x6c));
    }
  }
  return 0;
}


