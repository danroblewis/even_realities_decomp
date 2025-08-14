/*
 * Function: FUN_000521fc
 * Entry:    000521fc
 * Prototype: undefined FUN_000521fc()
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000521fc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_108;
  char *local_104;
  uint uStack_100;
  undefined4 local_f4;
  int local_f0 [2];
  int local_e8;
  undefined4 local_e4;
  char local_e0;
  undefined1 auStack_d8 [4];
  int local_d4 [3];
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *puStack_8c;
  undefined1 local_88;
  char *local_84;
  undefined4 local_80;
  undefined *local_7c;
  int *local_78;
  undefined1 local_74;
  char *local_70;
  undefined4 local_6c;
  undefined *local_68;
  int *local_64;
  undefined1 local_60;
  undefined *local_5c;
  undefined4 uStack_58;
  undefined *local_54;
  int *local_50;
  undefined1 local_4c;
  char *local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_24;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  local_f4 = 0;
  fill_memory_buffer(auStack_d8,0,0x20);
  local_d4[0] = -1;
  local_d4[1] = 0xffffffff;
  local_98 = "image";
  local_94 = 5;
  local_78 = local_d4 + 2;
  local_90 = &LAB_00085f8c_1;
  local_84 = "data";
  local_80 = 4;
  local_7c = &DAT_00085f97;
  local_40 = &DAT_00085f97;
  local_3c = &local_c4;
  local_70 = "len";
  local_34 = "upgrade";
  local_64 = local_d4 + 1;
  local_68 = &DAT_00085f93;
  local_54 = &DAT_00085f93;
  local_30 = 7;
  local_50 = local_d4;
  local_2c = 0x86007;
  local_28 = auStack_bc;
  local_5c = &DAT_000a24e0;
  uStack_58 = 3;
  local_48 = "sha";
  uStack_44 = 3;
  local_88 = 0;
  local_74 = 0;
  local_60 = 0;
  local_4c = 0;
  local_38 = 0;
  local_24 = 0;
  local_6c = 3;
  puStack_8c = auStack_d8;
  iVar2 = FUN_00080872(iVar2 + 4,&local_98,6,&local_f4);
  if (iVar2 != 0) {
    return 3;
  }
  uVar1 = FUN_000518a8(auStack_d8,local_f0);
  iVar2 = local_d4[0];
  uVar3 = 0;
  if (uVar1 == 0) {
    if (local_e0 == '\0') {
      uVar3 = FUN_00052000(*(undefined4 *)(param_1 + 8));
      return uVar3;
    }
    DAT_2000ab7c = local_e4;
    DAT_2000ab84 = local_f0[0];
    if (local_d4[0] == 0) {
      DAT_2000ab80 = local_d4[0];
      DAT_2000ab88 = (undefined1)local_c0;
      validate_memory_bounds(&DAT_2000ab89,local_c4,local_c0,0x23);
      fill_memory_buffer(&DAT_2000ab89 + local_c0,0,0x20 - local_c0);
    }
    if (local_c8 == 0) {
      if (DAT_2000ab84 == DAT_2000ab80) {
        FUN_00052038(1,0,auStack_b8);
      }
    }
    else {
      uVar1 = FUN_00051870(iVar2,local_d4[2],local_e8,local_c8 + DAT_2000ab80 == DAT_2000ab84);
      if (uVar1 != 0) {
        local_104 = "Irrecoverable error: flash write failed: %d";
        local_108 = 3;
        uStack_100 = uVar1;
        FUN_0004d944(&DAT_00088208,0x1840,&local_108,0);
        goto LAB_00052300;
      }
      DAT_2000ab80 = DAT_2000ab80 + local_e8;
      if (DAT_2000ab80 == DAT_2000ab84) {
        FUN_00052038(1,0,auStack_b8,0);
        FUN_00052000(*(undefined4 *)(param_1 + 8));
        FUN_00051fe4();
        return 0;
      }
    }
    FUN_00052000(*(undefined4 *)(param_1 + 8));
  }
  else {
    local_104 = "Image upload inspect failed: %d";
    local_108 = 3;
    uStack_100 = uVar1;
    FUN_0004d944(&DAT_00088208,0x1840,&local_108,0);
LAB_00052300:
    iVar2 = FUN_0005160c(iVar4 + 4,1,uVar1 & 0xffff);
    FUN_00052038(1,0,auStack_b8);
    FUN_00051fe4();
    if (iVar2 == 0) {
      uVar3 = 7;
    }
  }
  return uVar3;
}


