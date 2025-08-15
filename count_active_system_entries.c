/*
 * Function: count_active_system_entries
 * Entry:    00033cdc
 * Prototype: undefined count_active_system_entries()
 */


uint count_active_system_entries(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_20007dac;
  do {
    if (*(char *)(puVar2 + 4) == '\0') {
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x6d;
  } while (uVar1 != 10);
  return 10;
}


