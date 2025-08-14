/*
 * Function: FUN_0006385c
 * Entry:    0006385c
 * Prototype: undefined FUN_0006385c()
 */


uint FUN_0006385c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    if (DAT_2000b2d4 == 0) {
      return 0xfffffff4;
    }
    uVar1 = 0x1f - LZCOUNT(DAT_2000b2d4);
    uVar3 = DAT_2000b2d4 & ~(1 << (uVar1 & 0xff));
    uVar2 = DAT_2000b2d4 >> (uVar1 & 0xff);
    DAT_2000b2d4 = uVar3;
  } while (-1 < (int)(uVar2 << 0x1f));
  return uVar1;
}


