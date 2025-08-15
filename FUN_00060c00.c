/*
 * Function: FUN_00060c00
 * Entry:    00060c00
 * Prototype: undefined FUN_00060c00()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00060c00(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char **ppcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  uint local_34;
  undefined2 local_30;
  byte local_2e;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 **local_20;
  undefined1 **local_1c;
  
  pcVar1 = (char *)FUN_000838dc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x34),0);
  if ((int)pcVar1 < 0) {
    return pcVar1;
  }
  process_data_with_callback_execution_alt4(0x2b,1,0);
  iVar5 = *(int *)(param_1 + 4);
  _DAT_500055b8 = 0;
  FUN_00066994(iVar5,&LAB_000838ca_1,*(undefined4 *)(param_1 + 0x10));
  _DAT_500055b8 = 2;
  pcVar1 = (char *)FUN_00060990();
  if ((int)pcVar1 < 0) {
    return pcVar1;
  }
  pcVar1 = (char *)FUN_0008397e(param_1);
  if ((int)pcVar1 < 0) {
    return pcVar1;
  }
  if (*(byte *)(iVar5 + 0x1d) - 2 < 2) {
    uVar6 = 1;
  }
  else if (*(byte *)(iVar5 + 0x1c) - 3 < 2) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  pcVar1 = (char *)FUN_000839a6(param_1);
  if ((int)pcVar1 < 0) {
    uVar2 = 0x1840;
    local_3c = "RDSR failed: %d";
    ppcVar3 = &local_40;
    local_40 = (char *)0x3;
    local_38 = pcVar1;
LAB_00060c8e:
    FUN_000838d6(&DAT_00088270,uVar2,ppcVar3);
  }
  else {
    if (uVar6 != (uint)((int)pcVar1 << 0x19) >> 0x1f) {
      local_30 = (byte)pcVar1 ^ 0x40;
      local_28 = 1;
      local_1c = (undefined1 **)0x0;
      local_24 = 1;
      local_2c = (undefined1 *)&local_30;
      local_20 = &local_2c;
      pcVar1 = (char *)FUN_00060ab0(param_1,&local_24);
      if (pcVar1 != (char *)0x0) {
        if (-1 < (int)pcVar1) {
          return pcVar1;
        }
LAB_00060cdc:
        local_40 = "clear";
        if (uVar6 != 0) {
          local_40 = "set";
        }
        local_44 = "QE %s failed: %d";
        local_38 = (char *)CONCAT22(local_38._2_2_,0x200);
        uVar2 = 0x2440;
        ppcVar3 = &local_48;
        local_48 = (char *)0x1000004;
        local_3c = pcVar1;
        goto LAB_00060c8e;
      }
      do {
        pcVar1 = (char *)FUN_000839a6(param_1);
        if ((int)pcVar1 < 0) goto LAB_00060cdc;
      } while ((int)pcVar1 * -0x80000000 < 0);
    }
    FUN_00060a5c(param_1);
    local_28 = 3;
    local_20 = (undefined1 **)0x0;
    local_24 = 0x9f;
    local_2c = (undefined1 *)&local_30;
    local_1c = &local_2c;
    iVar5 = FUN_00060a10(param_1);
    if (iVar5 == 0) {
      iVar5 = FUN_00060ab0(param_1,&local_24,0);
      FUN_00060a5c(param_1);
      if (iVar5 == 0) {
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = memcmp_byte_arrays(iVar4 + 0x30,&local_30,3);
        if (iVar5 == 0) {
          return (char *)0x0;
        }
        local_48 = (char *)(uint)(byte)local_30;
        local_44 = (char *)(uint)local_30._1_1_;
        local_40 = (char *)(uint)local_2e;
        local_3c = (char *)(uint)*(byte *)(iVar4 + 0x30);
        local_38 = (char *)(uint)*(byte *)(iVar4 + 0x31);
        local_34 = (uint)*(byte *)(iVar4 + 0x32);
        local_4c = "JEDEC id [%02x %02x %02x] expect [%02x %02x %02x]";
        local_50 = 8;
        FUN_000838d6(&DAT_00088270,0x4040,&local_50);
      }
    }
    else {
      FUN_00060a5c(param_1);
    }
    pcVar1 = (char *)0xffffffed;
  }
  return pcVar1;
}


