/*
 * Function: FUN_00052854
 * Entry:    00052854
 * Prototype: undefined FUN_00052854()
 */


int FUN_00052854(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00080b32(&DAT_2000abac);
  if ((-1 < iVar1) && (param_2 == 0)) {
    puVar2 = (undefined4 *)FUN_00080bfe(&DAT_2000abac);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    if (DAT_2000abec == 0) {
      iVar1 = -0x16;
    }
    else {
      thunk_FUN_0005f24c();
      iVar1 = 0;
      DAT_2000abf0 = 0;
      DAT_2000abec = 0;
    }
    return iVar1;
  }
  return iVar1;
}


