/*
 * Function: handle_audio_structure_cleanup
 * Entry:    00085974
 * Prototype: undefined handle_audio_structure_cleanup()
 */


void handle_audio_structure_cleanup(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    if (((*param_1 != '\0') && (*(char *)(*(int *)(param_1 + 0x20) + 0x90) != '\0')) &&
       (0x3ff < *(uint *)(param_1 + 0x24))) {
      execute_audio_callback_with_validation(param_1,1);
    }
    cleanup_audio_data_structure(param_1);
    return;
  }
  return;
}


