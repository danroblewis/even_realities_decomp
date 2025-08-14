/*
 * Function: FUN_000538f8
 * Entry:    000538f8
 * Prototype: undefined FUN_000538f8()
 */


void FUN_000538f8(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  uint local_30;
  char *local_2c;
  uint uStack_28;
  undefined *local_24;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  puVar2 = (undefined *)FUN_0005ee08(*(undefined1 *)(param_3 + 10));
  if (puVar2 == &DAT_20003b4c) {
    iVar3 = FUN_0005ee18(param_3);
    if (*(ushort *)(&DAT_2000abf6 + iVar3 * 0xc) == param_1) {
      if (DAT_20002140 != 0) {
        FUN_0005f24c();
        DAT_20002140 = 0;
      }
      iVar3 = FUN_0005ee18(param_3);
      if ((*(int *)(&DAT_2000abf8 + iVar3 * 0xc) != 0) && (param_2 == 0)) {
        iVar3 = FUN_0005ee18(param_3);
        piVar4 = *(int **)(&DAT_2000abf8 + iVar3 * 0xc);
        uVar5 = (uint)piVar4[1] >> 5;
        if ((char)piVar4[2] == '\0') {
          FUN_00080ea8(*piVar4 + uVar5 * 4,~(1 << (piVar4[1] & 0x1fU)));
        }
        else {
          FUN_00080e6a(*piVar4 + uVar5 * 4);
        }
      }
      iVar3 = FUN_0005ee18(param_3);
      if (*(int *)(&DAT_2000abfc + iVar3 * 0xc) != 0) {
        iVar3 = FUN_0005ee18(param_3);
        (&DAT_2000abf4)[iVar3 * 0xc] = (char)param_2;
        iVar3 = FUN_0005ee18(param_3);
        z_spin_lock_valid(*(undefined4 *)(&DAT_2000abfc + iVar3 * 0xc));
      }
    }
    else {
      iVar3 = FUN_0005ee18(param_3);
      local_24 = (undefined *)(uint)*(ushort *)(&DAT_2000abf6 + iVar3 * 0xc);
      local_2c = "OpCode 0x%04x completed instead of expected 0x%04x";
      local_30 = 4;
      uStack_28 = param_1;
      FUN_00080ea2(&DAT_00088138,0x2080,&local_30);
    }
  }
  else {
    bVar1 = *(byte *)(param_3 + 10);
    uStack_28 = FUN_0005ee08((uint)bVar1);
    local_34 = "opcode 0x%04x pool id %u pool %p != &hci_cmd_pool %p";
    local_24 = &DAT_20003b4c;
    local_38 = 6;
    local_30 = param_1;
    local_2c = (char *)(uint)bVar1;
    FUN_00080ea2(&DAT_00088138,0x3080,&local_38);
  }
  return;
}


