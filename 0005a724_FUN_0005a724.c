/*
 * Function: FUN_0005a724
 * Entry:    0005a724
 * Prototype: undefined FUN_0005a724()
 */


int FUN_0005a724(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_58;
  char *local_54;
  uint uStack_50;
  undefined2 local_4c;
  undefined1 local_48;
  byte local_47;
  int local_44;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  char *local_24;
  
  if (param_1 == 0) {
    local_24 = "Insufficient number of arguments";
    local_28 = 2;
    FUN_00082a42(&DAT_00088128,0x1040,&local_28);
  }
  else {
    iVar1 = FUN_00080cf2(param_1,auStack_40);
    if (iVar1 == 0) {
      FUN_0007f1e8(param_1,&local_44);
      if ((local_44 == 0) || (iVar1 = FUN_00077c1c(local_44,0,10), iVar1 == 0)) {
        puVar2 = (undefined1 *)FUN_00059b5c(0,auStack_40);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)FUN_00059c04();
          if (puVar2 == (undefined1 *)0x0) {
            local_24 = "Unable to restore CF: no cfg left";
            local_28 = 2;
            FUN_00082a42(&DAT_00088128,0x1040,&local_28);
            return -0xc;
          }
          *puVar2 = 0;
          FUN_000828da(puVar2 + 1,auStack_40);
        }
        if (param_2 != 0) {
          iVar1 = (*param_3)(param_4,&local_48,2);
          if (iVar1 < 0) {
            local_54 = "Failed to decode value (err %zd)";
            local_58 = 3;
            uStack_50 = iVar1;
            FUN_00082a42(&DAT_00088128,0x1840,&local_58);
            return iVar1;
          }
          puVar2[8] = local_48;
          if (iVar1 == 2) {
            uStack_50 = (uint)local_47;
            if (uStack_50 < 2) {
              FUN_00082b98(puVar2,uStack_50 & 1);
              return 0;
            }
            local_54 = 
            "Read back bad change-aware value: 0x%x, defaulting peer status to change-unaware";
            local_58 = 3;
            FUN_00082a42(&DAT_00088128,0x1880,&local_58);
          }
          else {
            local_24 = 
            "Change-aware status not found in settings, defaulting peer status to change-unaware";
            local_28 = 2;
            FUN_00082a42(&DAT_00088128,0x1080,&local_28);
          }
          FUN_00082bb8(puVar2,0);
          return 0;
        }
        FUN_0005a39c(puVar2);
        return 0;
      }
      local_54 = "Invalid local identity %lu";
      local_58 = 3;
      uStack_50 = iVar1;
      FUN_00082a42(&DAT_00088128,0x1840,&local_58);
    }
    else {
      local_54 = "Unable to decode address %s";
      local_4c = 0x200;
      local_58 = 0x1000003;
      uStack_50 = param_1;
      FUN_00082a42(&DAT_00088128,0x1c40,&local_58);
    }
  }
  return -0x16;
}


