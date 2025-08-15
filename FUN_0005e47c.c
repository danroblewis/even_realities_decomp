/*
 * Function: FUN_0005e47c
 * Entry:    0005e47c
 * Prototype: undefined FUN_0005e47c()
 */


void FUN_0005e47c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined4 *puVar5;
  
  iVar1 = FUN_0008307a();
  if (iVar1 == 0) {
    return;
  }
  iVar9 = iVar1 + 4;
  iVar2 = FUN_00082ff6(iVar9,3);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_0005ea18();
  }
  iVar2 = FUN_0005e6a8(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
  *(int *)(param_1 + 0xc0) = iVar2;
  if (iVar2 == 0) {
    uStack_20 = process_data_with_callback_validation_alt6(param_1 + 0x90);
    local_24 = "Unable to get keys for %s";
    local_1c = 0x200;
    local_28 = 0x1000003;
    FUN_00083074(&DAT_00088180,0x1c40,&local_28);
    FUN_0005dc2c(iVar1,8);
    return;
  }
  iVar2 = FUN_00082ff6(iVar9,0xe);
  if (iVar2 != 0) {
    *(byte *)(*(int *)(param_1 + 0xc0) + 0xd) = *(byte *)(*(int *)(param_1 + 0xc0) + 0xd) | 2;
  }
  uVar3 = (uint)*(byte *)(iVar1 + 8);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (uVar3 < 4) {
    if (uVar3 != 0) {
LAB_0005e512:
      iVar2 = *(int *)(param_1 + 0xc0);
      bVar6 = *(byte *)(iVar2 + 0xd) | 1;
      goto LAB_0005e51c;
    }
  }
  else if (uVar3 - 5 < 2) {
    *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 0x20;
    goto LAB_0005e512;
  }
  *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) & 0xdf;
  iVar2 = *(int *)(param_1 + 0xc0);
  bVar6 = *(byte *)(iVar2 + 0xd) & 0xfe;
LAB_0005e51c:
  *(byte *)(iVar2 + 0xd) = bVar6;
  bVar6 = *(byte *)(iVar1 + 0x14);
  if (*(byte *)(iVar1 + 0xd) <= *(byte *)(iVar1 + 0x14)) {
    bVar6 = *(byte *)(iVar1 + 0xd);
  }
  *(byte *)(*(int *)(param_1 + 0xc0) + 0xc) = bVar6;
  iVar2 = FUN_00082ff6(iVar9,5);
  iVar7 = *(int *)(param_1 + 0xc0);
  if (iVar2 == 0) {
    *(byte *)(iVar7 + 0xd) = *(byte *)(iVar7 + 0xd) & 0xef;
  }
  else {
    *(byte *)(iVar7 + 0xd) = *(byte *)(iVar7 + 0xd) | 0x10;
    iVar2 = FUN_00082ff6(iVar9,0xd);
    if (iVar2 != 0) {
      FUN_0005e9a0(*(undefined4 *)(param_1 + 0xc0),0x20);
      puVar4 = (undefined4 *)(iVar1 + 0x47);
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0xc0) + 0x1a);
      do {
        puVar5 = puVar4 + 1;
        *puVar8 = *puVar4;
        puVar4 = puVar5;
        puVar8 = puVar8 + 1;
      } while (puVar5 != (undefined4 *)(iVar1 + 0x57));
      iVar1 = *(int *)(param_1 + 0xc0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x18) = 0;
    }
  }
  return;
}


