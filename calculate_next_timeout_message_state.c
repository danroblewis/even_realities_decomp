/*
 * Function: calculate_next_timeout_message_state
 * Entry:    00033cf8
 * Prototype: undefined calculate_next_timeout_message_state()
 */


uint calculate_next_timeout_message_state(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  bVar1 = false;
  uVar5 = 0;
  puVar6 = &DAT_20007dac;
  do {
    uVar2 = uVar3 & 0xff;
    if (*(char *)(puVar6 + 4) == '\0') {
      if (bVar1) {
        TIMEOUT_MESSAGE_STATE = (undefined1)uVar4;
      }
      if (uVar5 != 0) goto LAB_00033d12;
      if (uVar2 != 0) goto LAB_00033d3a;
      TIMEOUT_MESSAGE_STATE = 0xff;
      goto LAB_00033d12;
    }
    if (*(char *)((int)puVar6 + 0xf) != '\0') {
      bVar1 = true;
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = uVar2;
    }
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 0x6d;
  } while (uVar3 != 10);
  if (bVar1) {
    TIMEOUT_MESSAGE_STATE = (undefined1)uVar4;
  }
  uVar2 = 10;
  if (uVar5 == 0) {
LAB_00033d3a:
    uVar5 = 0;
    TIMEOUT_MESSAGE_STATE = 0;
  }
LAB_00033d12:
  return uVar2 - uVar5 & 0xff;
}


