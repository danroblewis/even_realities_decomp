/*
 * Function: FUN_000664f0
 * Entry:    000664f0
 * Prototype: undefined FUN_000664f0()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000664f0(int param_1)

{
  int iVar1;
  
  _DAT_5002b500 = 1;
  _DAT_5002b100 = 0;
  _DAT_5002b000 = 1;
  if (param_1 != 0) {
    iVar1 = FUN_0006649c();
    if (iVar1 != 0xbad0000) {
      return iVar1;
    }
    DAT_2000b380 = 1;
  }
  return 0xbad0000;
}


