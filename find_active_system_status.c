/*
 * Function: find_active_system_status
 * Entry:    00033cb0
 * Prototype: undefined find_active_system_status()
 */


uint find_active_system_status(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 9;
  puVar2 = &DAT_20007dac;
  do {
    if (*(char *)((int)puVar2 + 0xf63) != '\0') {
      TIMEOUT_MESSAGE_STATE = (char)uVar1;
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 - 1;
    puVar2 = puVar2 + -0x6d;
  } while (uVar1 != 0xffffffff);
  TIMEOUT_MESSAGE_STATE = 0;
  return 0xff;
}


