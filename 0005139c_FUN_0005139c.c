/*
 * Function: FUN_0005139c
 * Entry:    0005139c
 * Prototype: undefined FUN_0005139c()
 */


undefined4 FUN_0005139c(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_2000a94c;
  puVar2 = DAT_2000a94c;
  if (DAT_2000a94c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*DAT_2000a94c;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(ushort *)((int)puVar2 + 10) == param_1) break;
    puVar2 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return puVar2[3];
}


