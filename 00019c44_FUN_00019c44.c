/*
 * Function: FUN_00019c44
 * Entry:    00019c44
 * Prototype: undefined FUN_00019c44()
 */


int FUN_00019c44(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_d8 [204];
  
  iVar1 = FUN_00072240(&DAT_2000751c,auStack_d8,0,0);
  if (iVar1 == 0) {
    memcpy(param_1,auStack_d8,200);
  }
  return iVar1;
}


