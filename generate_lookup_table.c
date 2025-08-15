/*
 * Function: generate_lookup_table
 * Entry:    000235dc
 * Prototype: undefined generate_lookup_table()
 */


void generate_lookup_table(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  puVar1 = &DAT_200075a0;
  do {
    iVar2 = 8;
    uVar4 = uVar3;
    do {
      uVar5 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      if (uVar5 != 0) {
        uVar4 = uVar4 ^ 0xedb88320;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar3 = uVar3 + 1;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 1;
  } while (uVar3 != 0x100);
  return;
}


