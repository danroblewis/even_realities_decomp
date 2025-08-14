/*
 * Function: FUN_0002efa8
 * Entry:    0002efa8
 * Prototype: undefined FUN_0002efa8()
 */


undefined1 FUN_0002efa8(void)

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


