/*
 * Function: FUN_00033f24
 * Entry:    00033f24
 * Prototype: undefined FUN_00033f24()
 */


undefined4 FUN_00033f24(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (param_1 <= uVar2) {
      return 0;
    }
    if (((&DAT_20007dbc)[uVar2 * 0x1b4] != '\0') && ((&DAT_20007db4)[uVar2 * 0x6d] == param_2))
    break;
    bVar1 = bVar1 + 1;
  }
  return 1;
}


