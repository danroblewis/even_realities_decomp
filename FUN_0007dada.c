/*
 * Function: FUN_0007dada
 * Entry:    0007dada
 * Prototype: undefined FUN_0007dada()
 */


void FUN_0007dada(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x10ac) != '\0') && (uVar2 = FUN_0007dac0(), uVar2 < 7)) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x10ac) = 0;
  }
  return;
}


