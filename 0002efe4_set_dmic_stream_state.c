/*
 * Function: set_dmic_stream_state
 * Entry:    0002efe4
 * Prototype: undefined __stdcall set_dmic_stream_state(undefined4 stream_mode)
 */


undefined4 set_dmic_stream_state(int stream_mode)

{
  char *pcVar1;
  
  pcVar1 = (char *)get_work_mode();
  if (*pcVar1 == '\x01') {
    if (stream_mode == 0) {
      DMIC_STREAM_STATE = 0;
    }
    else {
      DMIC_STREAM_STATE = 2;
    }
  }
  return 0;
}


