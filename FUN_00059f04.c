/*
 * Function: FUN_00059f04
 * Entry:    00059f04
 * Prototype: undefined FUN_00059f04()
 */


int FUN_00059f04(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58;
  char *local_54;
  int iStack_50;
  undefined2 local_4c;
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
    iVar1 = parse_config_data(param_1,auStack_40);
    if (iVar1 == 0) {
      FUN_0007f1e8(param_1,&local_44);
      if ((local_44 == 0) || (iStack_50 = FUN_00077c1c(local_44,0,10), iStack_50 == 0)) {
        puVar2 = (undefined4 *)FUN_00059bcc(0,auStack_40);
        if (puVar2 == (undefined4 *)0x0) {
          if (param_2 == 0) {
            return 0;
          }
          puVar2 = (undefined4 *)FUN_00059bcc(0,&DAT_000f2b3a);
          if (puVar2 == (undefined4 *)0x0) {
            local_24 = "Unable to restore SC: no cfg left";
            local_28 = 2;
            FUN_00082a42(&DAT_00088128,0x1040,&local_28);
            return -0xc;
          }
          *(undefined1 *)puVar2 = 0;
          FUN_000828da((undefined1 *)((int)puVar2 + 1),auStack_40);
        }
        else if (param_2 == 0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          return 0;
        }
        iVar1 = (*param_3)(param_4,puVar2 + 2,4);
        if (-1 < iVar1) {
          return 0;
        }
        local_54 = "Failed to decode value (err %zd)";
        local_58 = 3;
        iStack_50 = iVar1;
        FUN_00082a42(&DAT_00088128,0x1840,&local_58);
        return iVar1;
      }
      local_54 = "Invalid local identity %lu";
      local_58 = 3;
      FUN_00082a42(&DAT_00088128,0x1840,&local_58);
    }
    else {
      local_54 = "Unable to decode address %s";
      local_4c = 0x200;
      local_58 = 0x1000003;
      iStack_50 = param_1;
      FUN_00082a42(&DAT_00088128,0x1c40,&local_58);
    }
  }
  return -0x16;
}


