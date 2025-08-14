/*
 * Function: FUN_00054c74
 * Entry:    00054c74
 * Prototype: undefined FUN_00054c74()
 */


undefined4 FUN_00054c74(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  char *local_14;
  
  uVar1 = FUN_0000ef12();
  if (uVar1 < 0x1d) {
    iVar2 = FUN_0000eefe(&DAT_2000216c,param_1);
    if (iVar2 != 0) {
      memcpy(&DAT_2000216c,param_1,uVar1);
      (&DAT_2000216c)[uVar1] = 0;
      iVar2 = FUN_00053098(&DAT_2000216c,uVar1);
      if (iVar2 != 0) {
        local_14 = "Unable to store name";
        local_18 = 2;
        FUN_00080ea2(&DAT_00088138,0x1080,&local_18);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


