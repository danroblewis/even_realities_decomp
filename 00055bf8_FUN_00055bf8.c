/*
 * Function: FUN_00055bf8
 * Entry:    00055bf8
 * Prototype: undefined FUN_00055bf8()
 */


int FUN_00055bf8(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint local_50;
  uint uStack_4c;
  undefined4 local_38;
  char *local_34;
  undefined1 auStack_30 [36];
  
  iVar1 = FUN_00053e74(auStack_30,0x20);
  if (iVar1 == 0) {
    lVar3 = thunk_FUN_00074f68();
    uStack_4c = (uint)((ulonglong)(lVar3 * 1000) >> 0x20);
    local_50 = (uint)(lVar3 * 1000) >> 0xf | uStack_4c * 0x20000;
    uStack_4c = uStack_4c >> 0xf;
    iVar2 = FUN_00080692(&DAT_20006000,auStack_30,0x20,&local_50,8);
    if (iVar2 == 0) {
      local_34 = "Failed to re-seed PRNG";
      local_38 = 2;
      iVar1 = -5;
      FUN_0004d944(&DAT_00088148,0x1040,&local_38,0);
    }
  }
  return iVar1;
}


