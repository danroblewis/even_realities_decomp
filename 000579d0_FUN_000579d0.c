/*
 * Function: FUN_000579d0
 * Entry:    000579d0
 * Prototype: undefined FUN_000579d0()
 */


void FUN_000579d0(void)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_000864e8(&DAT_20003a44);
  iVar2 = 0;
  puVar1 = &DAT_2000ad34;
  do {
    fill_memory_buffer(puVar1,0,0x10);
    iVar2 = iVar2 + 1;
    FUN_00086502(&DAT_20003a44,puVar1);
    puVar1 = puVar1 + 0x10;
  } while (iVar2 != 10);
  return;
}


