/*
 * Function: FUN_00076a94
 * Entry:    00076a94
 * Prototype: undefined FUN_00076a94()
 */


void FUN_00076a94(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_20002d20 + 0xc);
  do {
    FUN_00076cc8(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n");
    uVar1 = FUN_00051180();
  } while( true );
}


