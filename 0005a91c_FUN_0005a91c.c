/*
 * Function: FUN_0005a91c
 * Entry:    0005a91c
 * Prototype: undefined FUN_0005a91c()
 */


void FUN_0005a91c(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_2000aed4;
  do {
    iVar1 = FUN_000826b2(puVar2 + 1,&DAT_000f2b3a);
    if (iVar1 == 0) {
      FUN_00082b98(puVar2,0);
      FUN_0005a8bc(*puVar2,puVar2 + 1);
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 != 3);
  return;
}


