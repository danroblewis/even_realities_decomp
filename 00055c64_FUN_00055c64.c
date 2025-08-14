/*
 * Function: FUN_00055c64
 * Entry:    00055c64
 * Prototype: undefined FUN_00055c64()
 */


int FUN_00055c64(void)

{
  int iVar1;
  undefined1 auStack_28 [24];
  undefined4 local_10;
  char *local_c;
  
  iVar1 = FUN_00053e74(auStack_28,8);
  if (iVar1 == 0) {
    iVar1 = FUN_00080652(&DAT_20006000,auStack_28,8);
    if (iVar1 == 0) {
      local_c = "Failed to initialize PRNG";
      local_10 = 2;
      iVar1 = -5;
      FUN_0004d944(&DAT_00088148,0x1040,&local_10,0);
    }
    else {
      iVar1 = FUN_00055bf8();
    }
  }
  return iVar1;
}


