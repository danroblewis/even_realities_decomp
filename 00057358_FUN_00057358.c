/*
 * Function: FUN_00057358
 * Entry:    00057358
 * Prototype: undefined FUN_00057358()
 */


int FUN_00057358(void)

{
  int iVar1;
  undefined *puVar2;
  
  FUN_000864e8(&DAT_20003a60);
  iVar1 = 0;
  puVar2 = &DAT_2000ac7c;
  do {
    iVar1 = iVar1 + 1;
    FUN_00086502(&DAT_20003a60,puVar2);
    puVar2 = puVar2 + 0x10;
  } while (iVar1 != 10);
  FUN_00059690();
  iVar1 = FUN_0005e5b8();
  if (iVar1 == 0) {
    FUN_000579d0();
  }
  return iVar1;
}


