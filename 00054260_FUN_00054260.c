/*
 * Function: FUN_00054260
 * Entry:    00054260
 * Prototype: undefined FUN_00054260()
 */


void FUN_00054260(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  uVar5 = (uint)*(ushort *)(*(char **)(param_1 + 0xc) + 1);
  cVar1 = **(char **)(param_1 + 0xc);
  iVar2 = FUN_00056908(uVar5,0xf);
  if (iVar2 == 0) {
    local_3c = "Unable to look up conn with handle %u";
    local_40 = 3;
    uStack_38 = uVar5;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_40);
    return;
  }
  if ((cVar1 == '\0') && (*(char *)(iVar2 + 2) == '\x01')) {
    FUN_0005e47c();
    iVar4 = FUN_00080e38(iVar2);
    if (iVar4 == 0) {
      uVar3 = FUN_00054250(5);
      FUN_00056da8(iVar2,5,uVar3);
      local_1c = "Failed to set required security level";
      local_20 = 2;
      FUN_00080ea2(&DAT_00088138,0x1040,&local_20);
      bt_connection_disconnect(iVar2,5);
      goto LAB_000542b0;
    }
  }
  uVar3 = FUN_00054250(cVar1);
  FUN_00056da8(iVar2,cVar1,uVar3);
LAB_000542b0:
  FUN_000566a4(iVar2);
  return;
}


