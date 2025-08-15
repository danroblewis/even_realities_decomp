/*
 * Function: FUN_00073788
 * Entry:    00073788
 * Prototype: undefined FUN_00073788()
 */


void FUN_00073788(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_2000b458;
  iVar2 = uVar3 * 0x18 + 0x200069c8;
  FUN_00074d74(iVar2);
  (&DAT_2001d565)[uVar3] = 0;
  iVar1 = FUN_000736ec(param_1);
  if (iVar1 != 0) {
    FUN_00074bf4(iVar2,&LAB_00073728_1,DAT_2000b48c + -1,DAT_2000b48c + -1 >> 0x1f);
    return;
  }
  return;
}


