/*
 * Function: FUN_000469a8
 * Entry:    000469a8
 * Prototype: undefined FUN_000469a8()
 */


int FUN_000469a8(int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < 0x10) {
    iVar1 = (int)"%s(): can\'t find resource ,exit .....\n"[param_1 + 0x26];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


