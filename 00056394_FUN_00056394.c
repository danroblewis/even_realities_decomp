/*
 * Function: FUN_00056394
 * Entry:    00056394
 * Prototype: undefined FUN_00056394()
 */


void FUN_00056394(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  uint local_34;
  int local_20;
  char *local_1c;
  
  FUN_00056020();
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar1 = *(ushort *)(param_2 + 0x10);
      if (uVar1 != 0) {
        uVar2 = FUN_00083730(*(int *)(param_1 + 0x10) + 0xc);
        if (uVar1 <= uVar2) {
          FUN_00083740(*(int *)(param_1 + 0x10) + 0xc,*(undefined4 *)(param_2 + 0xc),
                       *(undefined2 *)(param_2 + 0x10));
          FUN_0005f24c(param_2);
          goto LAB_000563ce;
        }
        local_1c = "Not enough buffer space for L2CAP data";
        local_20 = 2;
        FUN_000813ca(&DAT_00088108,0x1040,&local_20);
        FUN_00057cc4(param_1,*(undefined4 *)(param_1 + 0x10),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto LAB_00056432;
    }
    local_1c = "Unexpected L2CAP continuation";
    local_20 = 2;
    FUN_000813ca(&DAT_00088108,0x1040,&local_20);
  }
  else {
    if (param_3 == 2) {
      if (*(int *)(param_1 + 0x10) != 0) {
        local_1c = "Unexpected first L2CAP frame";
        local_20 = param_3;
        FUN_000813ca(&DAT_00088108,0x1040,&local_20);
        FUN_000813d6(param_1);
      }
      *(int *)(param_1 + 0x10) = param_2;
LAB_000563ce:
      iVar3 = *(int *)(param_1 + 0x10);
      uStack_38 = (uint)*(ushort *)(iVar3 + 0x10);
      if (uStack_38 < 2) {
        return;
      }
      local_34 = (uint)(ushort)(**(short **)(iVar3 + 0xc) + 4);
      if (uStack_38 < local_34) {
        return;
      }
      if (local_34 < uStack_38) {
        local_3c = "ACL len mismatch (%u > %u)";
        local_40 = 4;
        FUN_000813ca(&DAT_00088108,0x2040,&local_40);
        FUN_000813d6(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_00057cc4(param_1,iVar3,1);
      return;
    }
    local_3c = "Unexpected ACL flags (0x%02x)";
    local_40 = 3;
    uStack_38 = param_3;
    FUN_000813ca(&DAT_00088108,0x1840,&local_40);
  }
  FUN_000813d6(param_1);
LAB_00056432:
  FUN_0005f24c(param_2);
  return;
}


