/*
 * Function: get_work_mode_config_value
 * Entry:    0002efa8
 * Prototype: undefined get_work_mode_config_value()
 */


undefined1 get_work_mode_config_value(void)

{
  undefined1 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)get_work_mode();
  uVar1 = DMIC_STREAM_STATE;
  if (*pcVar2 != '\x01') {
    uVar1 = 0;
  }
  return uVar1;
}


