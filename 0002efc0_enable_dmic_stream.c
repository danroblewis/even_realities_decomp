/*
 * Function: enable_dmic_stream
 * Entry:    0002efc0
 * Prototype: undefined enable_dmic_stream()
 */


undefined4 enable_dmic_stream(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_system_ready_state();
  if ((iVar1 == 1) || (pcVar2 = (char *)get_work_mode(), *pcVar2 == '\x01')) {
    DMIC_STREAM_STATE = 1;
  }
  return 0;
}


