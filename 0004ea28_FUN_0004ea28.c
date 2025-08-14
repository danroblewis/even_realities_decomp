/*
 * Function: FUN_0004ea28
 * Entry:    0004ea28
 * Prototype: undefined FUN_0004ea28()
 */


int FUN_0004ea28(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  char *local_14;
  
  if (param_1 == (undefined1 *)0x0) {
    local_14 = "Uninitialized UUID.";
  }
  else {
    uVar1 = FUN_0004e98c(*param_1);
    iVar2 = FUN_0004e8e8();
    if (iVar2 != 0) {
      memcpy(iVar2,param_1,uVar1);
      return iVar2;
    }
    local_14 = "No space for a UUID.";
  }
  local_18 = 2;
  FUN_0007f406(&DAT_00088130,0x1040,&local_18);
  return 0;
}


