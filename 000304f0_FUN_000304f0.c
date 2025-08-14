/*
 * Function: FUN_000304f0
 * Entry:    000304f0
 * Prototype: undefined FUN_000304f0()
 */


int FUN_000304f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  iVar1 = FUN_000302f8(0xff00,&local_c,param_3,0,param_1);
  if ((iVar1 < 0) || (4 < local_c + 0xdfddcdfdU)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (0x15U >> (local_c + 0xdfddcdfdU & 0xff) & 1) - 1;
  }
  return iVar1;
}


