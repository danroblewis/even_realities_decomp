/*
 * Function: FUN_00030af0
 * Entry:    00030af0
 * Prototype: undefined FUN_00030af0()
 */


void FUN_00030af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  iVar1 = FUN_000302f8(0x4410,&local_c,param_3,0,param_1);
  if (-1 < iVar1) {
    if ((int)(local_c << 0x1d) < 0) {
      DAT_20019dac = 2;
    }
    if ((local_c & 2) != 0) {
      DAT_20019dac = 1;
    }
    if ((local_c & 1) != 0) {
      FUN_00030224();
      return;
    }
  }
  return;
}


