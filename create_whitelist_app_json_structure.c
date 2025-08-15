/*
 * Function: create_whitelist_app_json_structure
 * Entry:    000352e8
 * Prototype: undefined create_whitelist_app_json_structure()
 */


undefined2 create_whitelist_app_json_structure(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    uVar7 = 0x1f1;
    pcVar2 = "[%s-%d]buf is null \n";
  }
  else {
    iVar3 = create_json_obj();
    if (iVar3 != 0) {
      FUN_0008504c(iVar3,"call_enable",DAT_2001a22c & 1);
      FUN_0008504c(iVar3,"msg_enable",((uint)DAT_2001a22c << 0x1e) >> 0x1f);
      FUN_0008504c(iVar3,"ios_mail_enable",((uint)DAT_2001a22c << 0x1d) >> 0x1f);
      FUN_0008504c(iVar3,"calendar_enable",((uint)DAT_2001a22c << 0x1c) >> 0x1f);
      iVar4 = create_json_obj();
      if (iVar4 == 0) {
        uVar7 = 0x206;
        pcVar2 = "[%s-%d]appJson is null \n";
      }
      else {
        FUN_0008504c(iVar4,"enable",((uint)DAT_2001a22c << 0x1b) >> 0x1f);
        iVar5 = FUN_00064c8c();
        if (iVar5 == 0) {
          uVar7 = 0x20e;
          pcVar2 = "[%s-%d]appListInfoJson is null \n";
        }
        else {
          uVar9 = 0;
          while( true ) {
            uVar8 = uVar9 & 0xff;
            if (DAT_2001a22d <= uVar8) {
              add_json_named_object(iVar4,"list",iVar5);
              add_json_named_object(iVar3,"app",iVar4);
              uVar7 = FUN_0008501a(iVar3);
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("cJsonStr is %s \n",uVar7);
              }
              else {
                handle_heartbeat();
              }
              strcpy_safe(param_1,uVar7);
              uVar1 = calculate_string_length(uVar7);
              call_data_verification_handler(uVar7);
              cleanup_json_node(iVar3);
              return uVar1;
            }
            iVar6 = create_json_obj();
            uVar9 = uVar9 + 1;
            if (iVar6 == 0) break;
            add_json_field_complex(iVar6,"id",&DAT_2001a22e + uVar8 * 0x38);
            add_json_field_complex(iVar6,"name",&DAT_2001a256 + uVar8 * 0x38);
            thunk_FUN_00084f2e(iVar5,iVar6);
          }
          uVar7 = 0x219;
          pcVar2 = "[%s-%d]appItem is null \n";
        }
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar2,"convert_app_whitelist_to_json",uVar7);
      }
      else {
        handle_heartbeat();
      }
      cleanup_json_node(iVar3);
      return 0;
    }
    uVar7 = 0x1fa;
    pcVar2 = "[%s-%d]jsonRoot is null \n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar2,"convert_app_whitelist_to_json",uVar7,0,iVar4,param_2,param_3);
  }
  else {
    handle_heartbeat();
  }
  return 0;
}


