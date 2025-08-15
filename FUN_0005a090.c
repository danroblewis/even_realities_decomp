/*
 * Function: FUN_0005a090
 * Entry:    0005a090
 * Prototype: undefined FUN_0005a090()
 */


void FUN_0005a090(int param_1)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = FUN_00080f92(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
  if (iVar1 == 0) {
    iVar1 = FUN_00059bcc(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    if (iVar1 != 0) {
      FUN_00082928();
    }
  }
  else {
    iStack_18 = FUN_0005a044();
    if (iStack_18 != 0) {
      local_1c = "Failed to clear SC %d";
      local_20 = 3;
      FUN_00082a42(&DAT_00088128,0x1840,&local_20);
    }
  }
  return;
}


