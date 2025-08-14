/*
 * Function: FUN_00080a4e
 * Entry:    00080a4e
 * Prototype: undefined FUN_00080a4e()
 */


int FUN_00080a4e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  iVar2 = 0;
  while ((iVar1 = FUN_00052038(iVar2,param_2,auStack_30,0), iVar1 != 0 ||
         (iVar1 = memcmp_byte_arrays(auStack_30,param_1,0x20), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return -1;
    }
  }
  return iVar2;
}


