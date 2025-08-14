/*
 * Function: FUN_0005a044
 * Entry:    0005a044
 * Prototype: undefined FUN_0005a044()
 */


undefined4 FUN_0005a044(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  puVar1 = (undefined1 *)FUN_00059bcc();
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = FUN_00053024(*puVar1,puVar1 + 1);
    if (iVar2 != 0) {
      local_1c = "failed to delete SC (err %d)";
      local_20 = 3;
      iStack_18 = iVar2;
      FUN_00082a42(&DAT_00088128,0x1840,&local_20);
    }
    FUN_00082928(puVar1);
  }
  return 0;
}


