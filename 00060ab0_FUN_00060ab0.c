/*
 * Function: FUN_00060ab0
 * Entry:    00060ab0
 * Prototype: undefined FUN_00060ab0()
 */


undefined4 FUN_00060ab0(undefined4 param_1,byte *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  uint local_24;
  byte local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
    iVar2 = puVar3[1];
  }
  puVar3 = *(undefined4 **)(param_2 + 8);
  if (puVar3 == (undefined4 *)0x0) {
    iVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
    iVar1 = puVar3[1];
    if ((iVar1 != 0) && (iVar2 != 0)) {
      if (iVar1 != iVar2) {
        return 0xffffffea;
      }
      local_24 = iVar2 + 1;
      goto LAB_00060ae0;
    }
  }
  local_24 = iVar2 + 1 + iVar1;
LAB_00060ae0:
  local_20 = *param_2;
  uStack_28 = (uint)local_20;
  if (9 < local_24) {
    local_2c = "cinstr %02x transfer too long: %zu";
    local_30 = 4;
    FUN_000838d6(&DAT_00088270,0x2080,&local_30);
    return 0xffffffea;
  }
  local_1f = (undefined1)local_24;
  local_1e = 0x101;
  local_1c = 0;
  local_1b = param_3;
  FUN_00083906(param_1);
  uVar4 = FUN_000669f4(&local_20,uVar4,uVar5);
  FUN_0008392e(param_1);
  uVar4 = FUN_00060990(uVar4);
  return uVar4;
}


