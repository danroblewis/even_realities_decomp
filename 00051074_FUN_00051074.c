/*
 * Function: FUN_00051074
 * Entry:    00051074
 * Prototype: undefined FUN_00051074()
 */


int FUN_00051074(int param_1)

{
  int iVar1;
  
  if (param_1 + DAT_2000a808 < 0x1ceb4) {
    iVar1 = DAT_2000a808 + 0x2005314c;
    DAT_2000a808 = param_1 + DAT_2000a808;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


