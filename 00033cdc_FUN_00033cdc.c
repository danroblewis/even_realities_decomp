/*
 * Function: FUN_00033cdc
 * Entry:    00033cdc
 * Prototype: undefined FUN_00033cdc()
 */


uint FUN_00033cdc(void)

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


