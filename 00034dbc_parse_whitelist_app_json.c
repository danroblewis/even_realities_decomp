/*
 * Function: parse_whitelist_app_json
 * Entry:    00034dbc
 * Prototype: undefined __stdcall parse_whitelist_app_json(undefined4 json_buffer, undefined4 user_data1, undefined4 user_data2)
 */


undefined4
parse_whitelist_app_json(undefined4 json_buffer,undefined4 user_data1,undefined4 user_data2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  undefined4 uVar10;
  
  uVar10 = json_buffer;
  iVar1 = FUN_0008500c();
  if (iVar1 == 0) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("error root JSON NODE,json_buffer is %s\n",json_buffer);
    }
    else {
      handle_heartbeat();
    }
  }
  else {
    fill_memory_buffer(&DAT_2001a22c,0,0x15e2);
    iVar2 = FUN_0008503c(iVar1,"call_enable");
    if (iVar2 == 0) {
      pcVar3 = "callEnable is NULL !\n";
    }
    else {
      bVar9 = *(int *)(iVar2 + 0xc) == 2;
      DAT_2001a22c = DAT_2001a22c & 0xfe | bVar9;
      iVar2 = FUN_0008503c(iVar1,"msg_enable",DAT_2001a22c,bVar9,uVar10,user_data1,user_data2);
      if (iVar2 == 0) {
        pcVar3 = "msgEnable is NULL !\n";
      }
      else {
        bVar9 = *(int *)(iVar2 + 0xc) == 2;
        DAT_2001a22c = DAT_2001a22c & 0xfd | bVar9 << 1;
        iVar2 = FUN_0008503c(iVar1,"calendar_enable",DAT_2001a22c,bVar9,uVar10,user_data1,user_data2
                            );
        if (iVar2 == 0) {
          pcVar3 = "jsonCaledarEnable is NULL !\n";
        }
        else {
          DAT_2001a22c = DAT_2001a22c & 0xf7 | (*(int *)(iVar2 + 0xc) == 2) << 3;
          iVar2 = FUN_0008503c(iVar1,"ios_mail_enable");
          if (iVar2 == 0) {
            pcVar3 = "jsonIosMailEnable is NULL !\n";
          }
          else {
            DAT_2001a22c = DAT_2001a22c & 0xfb | (*(int *)(iVar2 + 0xc) == 2) << 2;
            iVar2 = FUN_0008503c(iVar1,"app");
            if (iVar2 == 0) {
              pcVar3 = "appJson is NULL !\n";
            }
            else {
              iVar4 = FUN_0008503c(iVar2,"enable");
              if (iVar4 == 0) {
                pcVar3 = "appEnableJson is NULL !\n";
              }
              else {
                DAT_2001a22c = DAT_2001a22c & 0xef | (*(int *)(iVar4 + 0xc) == 2) << 4;
                iVar2 = FUN_0008503c(iVar2,"list");
                if (iVar2 != 0) {
                  iVar4 = FUN_000850c8();
                  if (iVar4 != 0) {
                    DAT_2001a22d = FUN_00085020(iVar2);
                    bVar8 = 0;
                    if (99 < DAT_2001a22d) {
                      DAT_2001a22d = 100;
                    }
                    uVar7 = 0;
                    for (; bVar8 < DAT_2001a22d; bVar8 = bVar8 + 1) {
                      iVar4 = FUN_00085030(iVar2);
                      if (iVar4 == 0) {
                        pcVar3 = "singleAppJson is NULL !\n";
LAB_00034f1c:
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT(pcVar3);
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                      else {
                        iVar5 = FUN_0008503c(iVar4,"id");
                        if (iVar5 == 0) {
                          pcVar3 = "appIdJson is NULL !\n";
                          goto LAB_00034f1c;
                        }
                        iVar4 = FUN_0008503c(iVar4,"name");
                        if (iVar4 == 0) {
                          pcVar3 = "appNameJson is NULL !\n";
                          goto LAB_00034f1c;
                        }
                        puVar6 = &DAT_2001a22e + uVar7 * 0x38;
                        fill_memory_buffer(puVar6,0,0x28);
                        fill_memory_buffer(&DAT_2001a256 + uVar7 * 0x38,0,0x10);
                        FUN_0008705a(puVar6,*(undefined4 *)(iVar5 + 0x10),0x27);
                        FUN_0008705a(&DAT_2001a256 + uVar7 * 0x38,*(undefined4 *)(iVar4 + 0x10),0xf)
                        ;
                        uVar7 = uVar7 + 1 & 0xff;
                      }
                    }
                  }
                  FUN_00064b1c(iVar1);
                  return 1;
                }
                pcVar3 = "appListJson is NULL !\n";
              }
            }
          }
        }
      }
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar3);
    }
    else {
      handle_heartbeat();
    }
    FUN_00064b1c(iVar1);
  }
  return 0;
}


