/*
 * Function: FUN_0004c1f0
 * Entry:    0004c1f0
 * Prototype: undefined FUN_0004c1f0()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004c1f0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_2001d44a + 1) % 5;
  iVar1 = FUN_00084c76();
  if ((DAT_2001d449 == '\0') || (7 < (uint)(iVar1 - *(int *)(&DAT_2000a0b4 + uVar3 * 4)))) {
    if (_DAT_50005114 != 0) {
      _DAT_50005114 = 0;
      DAT_2001d44a = (byte)uVar3;
      if (uVar3 == 0) {
        DAT_2001d449 = '\x01';
      }
    }
    uVar3 = (uint)DAT_2001d44a;
    uVar2 = FUN_00084c76();
    *(undefined4 *)(&DAT_2000a0b4 + uVar3 * 4) = uVar2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


