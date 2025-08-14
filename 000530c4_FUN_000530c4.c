/*
 * Function: FUN_000530c4
 * Entry:    000530c4
 * Prototype: undefined FUN_000530c4()
 */


int FUN_000530c4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20;
  char *local_1c;
  
  if ((DAT_200020d4 & 1) != 0) {
    if (DAT_2000216c == '\0') {
      FUN_00054c74("Even G1");
    }
    if ((DAT_20002007 == '\0') &&
       ((iVar1 = FUN_00055330(), iVar1 != 0 ||
        ((DAT_20002007 == '\0' && (iVar1 = FUN_000553f8(), iVar1 != 0)))))) {
      local_1c = "Unable to setup an identity address";
      local_20 = 2;
      FUN_0004d944(&DAT_00088178,0x1040,&local_20,0);
      return iVar1;
    }
    if (-1 < (int)(DAT_200020d4 << 0x1d)) {
      FUN_000548b8();
    }
    uVar2 = DAT_200020d4 & 0xfffeffff;
    iVar1 = DAT_200020d4 << 0xf;
    DAT_200020d4 = uVar2;
    if (iVar1 < 0) {
      FUN_000530b4();
    }
  }
  return 0;
}


