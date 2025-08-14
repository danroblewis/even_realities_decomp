/*
 * Function: FUN_00054308
 * Entry:    00054308
 * Prototype: undefined FUN_00054308()
 */


void FUN_00054308(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  pcVar6 = *(char **)(param_1 + 0xc);
  uVar1 = *(ushort *)(pcVar6 + 1);
  cVar5 = *pcVar6;
  iVar2 = FUN_00056908((uint)uVar1,0xf);
  if (iVar2 == 0) {
    local_3c = "Unable to look up conn with handle %u";
    local_40 = 3;
    uStack_38 = (uint)uVar1;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_40);
    return;
  }
  if (cVar5 == '\0') {
    cVar5 = pcVar6[3];
    *(char *)(iVar2 + 0xb) = cVar5;
    if (*(char *)(iVar2 + 2) == '\x01') {
      if (cVar5 != '\0') {
        FUN_0005e47c();
      }
      iVar4 = FUN_00080e38(iVar2);
      if (iVar4 == 0) {
        uVar3 = FUN_00054250(5);
        FUN_00056da8(iVar2,5,uVar3);
        local_1c = "Failed to set required security level";
        local_20 = 2;
        FUN_00080ea2(&DAT_00088138,0x1040,&local_20);
        bt_connection_disconnect(iVar2,5);
        goto LAB_0005435c;
      }
    }
    uVar3 = FUN_00054250(0);
    cVar5 = '\0';
  }
  else {
    uVar3 = FUN_00054250(cVar5);
  }
  FUN_00056da8(iVar2,cVar5,uVar3);
LAB_0005435c:
  FUN_000566a4(iVar2);
  return;
}


