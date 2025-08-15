/*
 * Function: FUN_0005ea64
 * Entry:    0005ea64
 * Prototype: undefined FUN_0005ea64()
 */


undefined4 FUN_0005ea64(int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_88;
  char *local_84;
  int iStack_80;
  undefined4 local_7c;
  int local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined4 local_58;
  char *local_54;
  
  if (param_1 == 0) {
    local_54 = "Insufficient number of arguments";
    local_58 = 2;
    process_and_compress_data_with_validation(&DAT_00088158,0x1040,&local_58,0);
  }
  else {
    iVar1 = (*param_3)(param_4,auStack_68,0x50);
    if (iVar1 < 0) {
      local_84 = "Failed to read value (err %zd)";
      local_88 = 3;
      iStack_80 = iVar1;
      process_and_compress_data_with_validation(&DAT_00088158,0x1840,&local_88,0);
    }
    else {
      iVar2 = parse_config_data(param_1,auStack_70);
      if (iVar2 == 0) {
        FUN_0007f1e8(param_1,&local_74);
        if ((local_74 == 0) || (iStack_80 = FUN_00077c1c(local_74,0,10), iStack_80 == 0)) {
          if (iVar1 == 0) {
            iVar1 = FUN_0005e7c8(0x3f,0,auStack_70);
            if (iVar1 == 0) {
              iStack_80 = process_data_with_callback_validation_alt6(auStack_70);
              local_84 = "Unable to find deleted keys for %s";
              local_7c = CONCAT22(local_7c._2_2_,0x200);
              local_88 = 0x1000003;
              process_and_compress_data_with_validation(&DAT_00088158,0x1c80,&local_88,0);
              return 0;
            }
            fill_memory_buffer(iVar1,0,0x5c);
            return 0;
          }
          iVar2 = FUN_0005e614(0,auStack_70);
          if (iVar2 != 0) {
            if (iVar1 != 0x50) {
              local_84 = "Invalid key length %zd != %zu";
              local_7c = 0x50;
              local_88 = 4;
              iStack_80 = iVar1;
              process_and_compress_data_with_validation(&DAT_00088158,0x2040,&local_88,0);
              FUN_0005ea18(iVar2);
              return 0xffffffea;
            }
            memcpy(iVar2 + 0xc,auStack_68,0x50);
            return 0;
          }
          iStack_80 = process_data_with_callback_validation_alt6(auStack_70);
          local_84 = "Failed to allocate keys for %s";
          local_7c = CONCAT22(local_7c._2_2_,0x200);
          local_88 = 0x1000003;
          process_and_compress_data_with_validation(&DAT_00088158,0x1c40,&local_88,0);
          return 0xfffffff4;
        }
        local_84 = "Invalid local identity %lu";
        local_88 = 3;
        uVar3 = 0x1840;
      }
      else {
        local_84 = "Unable to decode address %s";
        local_7c = CONCAT22(local_7c._2_2_,0x200);
        local_88 = 0x1000003;
        uVar3 = 0x1c40;
        iStack_80 = param_1;
      }
      process_and_compress_data_with_validation(&DAT_00088158,uVar3,&local_88,0);
    }
  }
  return 0xffffffea;
}


