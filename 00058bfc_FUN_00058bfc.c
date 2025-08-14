/*
 * Function: FUN_00058bfc
 * Entry:    00058bfc
 * Prototype: undefined FUN_00058bfc()
 */


void FUN_00058bfc(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_50;
  char *local_4c;
  undefined1 *local_48;
  undefined1 auStack_40 [4];
  int local_3c;
  byte local_38;
  undefined1 auStack_34 [40];
  
  param_1[0x46] = param_1[0x46] | 4;
  FUN_00081c22(param_1 + -2);
  FUN_000732d4(param_1 + 0x56,0x59921);
  iVar1 = *param_1;
  local_38 = 1;
  local_3c = iVar1;
  iVar2 = FUN_00080f92(*(undefined1 *)(iVar1 + 8),iVar1 + 0x90);
  if (iVar2 != 0) {
    if (*(char *)(iVar1 + 8) == '\0') {
      local_48 = (undefined1 *)0x0;
    }
    else {
      FUN_0007dc4a(auStack_40,4);
      local_48 = auStack_40;
    }
    FUN_00052e7c(auStack_34,0x24,"ccc",iVar1 + 0x90);
    FUN_0004e434(auStack_34,0x5af8d);
  }
  FUN_00082c9c(1,0xffff,0x5b555,&local_3c);
  uVar3 = FUN_000814e2(iVar1);
  if ((uVar3 < local_38) &&
     (local_48 = (undefined1 *)FUN_0008149a(iVar1), local_48 != (undefined1 *)0x0)) {
    local_4c = "Failed to set security for bonded peer (%d)";
    local_50 = 3;
    FUN_00082a42(&DAT_00088128,0x1880,&local_50);
  }
  return;
}


