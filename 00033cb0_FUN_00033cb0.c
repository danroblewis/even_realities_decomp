/*
 * Function: FUN_00033cb0
 * Entry:    00033cb0
 * Prototype: undefined FUN_00033cb0()
 */


uint FUN_00033cb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 9;
  puVar2 = &DAT_20007dac;
  do {
    if (*(char *)((int)puVar2 + 0xf63) != '\0') {
      DAT_2001a22a = (char)uVar1;
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 - 1;
    puVar2 = puVar2 + -0x6d;
  } while (uVar1 != 0xffffffff);
  DAT_2001a22a = 0;
  return 0xff;
}


