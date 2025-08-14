/*
 * Function: FUN_00054444
 * Entry:    00054444
 * Prototype: undefined FUN_00054444()
 */


void FUN_00054444(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 local_50;
  char *local_4c;
  uint local_48;
  undefined4 *local_44;
  undefined4 local_40 [4];
  undefined4 auStack_30 [4];
  undefined4 local_20;
  char *local_1c;
  
  puVar8 = *(ushort **)(param_1 + 0xc);
  uVar1 = *puVar8;
  puVar6 = local_40;
  iVar2 = FUN_00056908((uint)uVar1,1);
  if (iVar2 == 0) {
    local_4c = "Unable to lookup conn for handle %u";
    local_50 = 3;
    local_48 = (uint)uVar1;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_50);
    return;
  }
  local_48 = (uint)puVar8[5];
  local_44 = puVar6;
  iVar3 = FUN_00083370(iVar2,local_48,*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 3));
  if (iVar3 == 0) {
    iVar3 = FUN_00053cd4(0x201b,2);
    if (iVar3 == 0) goto LAB_000544a8;
    puVar8 = (ushort *)FUN_0005f5d0(iVar3 + 0xc,2);
    *puVar8 = uVar1;
    uVar4 = 0x201b;
  }
  else {
    iVar3 = FUN_00053cd4(0x201a,0x12);
    if (iVar3 == 0) {
LAB_000544a8:
      local_1c = "Out of command buffers";
      local_20 = 2;
      FUN_00080ea2(&DAT_00088138,0x1040,&local_20);
      goto LAB_000544be;
    }
    puVar8 = (ushort *)FUN_0005f5d0(iVar3 + 0xc,0x12);
    puVar7 = puVar8 + 1;
    *puVar8 = uVar1;
    do {
      uVar4 = *puVar6;
      uVar5 = puVar6[1];
      puVar6 = puVar6 + 2;
      *(undefined4 *)puVar7 = uVar4;
      *(undefined4 *)(puVar7 + 2) = uVar5;
      puVar7 = puVar7 + 4;
    } while (puVar6 != auStack_30);
    uVar4 = 0x201a;
  }
  FUN_000543d8(uVar4,iVar3);
LAB_000544be:
  FUN_000566a4(iVar2);
  return;
}


