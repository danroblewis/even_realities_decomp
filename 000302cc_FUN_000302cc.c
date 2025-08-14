/*
 * Function: FUN_000302cc
 * Entry:    000302cc
 * Prototype: undefined FUN_000302cc()
 */


int FUN_000302cc(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 4;
  do {
    pbVar1 = &UNK_000a49a5 + iVar3;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (iVar3 != 0x1be4);
  iVar2 = iVar2 + -0x9244d;
  if (iVar2 != 0) {
    iVar2 = -1;
  }
  return iVar2;
}


