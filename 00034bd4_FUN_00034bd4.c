/*
 * Function: FUN_00034bd4
 * Entry:    00034bd4
 * Prototype: undefined FUN_00034bd4()
 */


undefined4 FUN_00034bd4(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  byte bVar7;
  
  iVar4 = IS_DEBUG;
  if (param_1 == 0) {
    uVar5 = 0x46;
    pcVar1 = "[%s-%d] pkg_name is NULL !\n";
  }
  else {
    uVar2 = FUN_0000ef12();
    if (uVar2 < 0x28) {
      if (iVar4 == 0) {
        DEBUG_PRINT("pkg_name is %s \n",param_1);
      }
      else {
        handle_heartbeat();
      }
      iVar3 = compare_string_offsets("com.apple.mobilephone",param_1,0x15);
      iVar4 = IS_DEBUG;
      if ((((iVar3 == 0) ||
           (iVar3 = compare_string_offsets("com.apple.mobilephone_missed",param_1,0x1c), iVar3 == 0)
           ) || (iVar3 = compare_string_offsets("com.android.phone_incall",param_1,0x18), iVar3 == 0
                )) ||
         (iVar3 = compare_string_offsets("com.android.phone_missed",param_1,0x18), iVar3 == 0)) {
        if (-1 < (int)((uint)DAT_2001a22c << 0x1f)) {
          pcVar1 = "whitelist type call is disable ! \n";
          goto LAB_00034c68;
        }
        pcVar1 = "whitelist type call is enable ! \n";
      }
      else {
        iVar3 = compare_string_offsets("com.apple.MobileSMS",param_1,0x13);
        if ((iVar3 == 0) ||
           (iVar3 = compare_string_offsets("com.android.even_sms",param_1,0x14), iVar3 == 0)) {
          if (-1 < (int)((uint)DAT_2001a22c << 0x1e)) {
            pcVar1 = "whitelist type message is disable ! \n";
            goto LAB_00034c68;
          }
          pcVar1 = "whitelist type message is enable ! \n";
        }
        else {
          iVar3 = compare_string_offsets("com.apple.mobilecal",param_1,0x13);
          if ((iVar3 == 0) ||
             (iVar3 = compare_string_offsets("com.android.even_calendar",param_1,0x19), iVar3 == 0))
          {
            if (-1 < (int)((uint)DAT_2001a22c << 0x1c)) {
              pcVar1 = "whitelist type calendar is disable ! \n";
              goto LAB_00034c68;
            }
            pcVar1 = "whitelist type calendar is enable ! \n";
          }
          else {
            iVar3 = compare_string_offsets("com.apple.mobilemail",param_1,0x14);
            if (iVar3 != 0) {
              if (iVar4 == 0) {
                DEBUG_PRINT("appcounts is %d \n",(uint)DAT_2001a22d);
              }
              else {
                handle_heartbeat();
              }
              if (((int)((uint)DAT_2001a22c << 0x1b) < 0) && (DAT_2001a22d != 0)) {
                bVar7 = 0;
                while (uVar2 = (uint)bVar7, uVar2 < DAT_2001a22d) {
                  puVar6 = &DAT_2001a22e + uVar2 * 0x38;
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("g_appWhiteListInfo.listAppInfo[%d].id is %s \n",uVar2,puVar6);
                  }
                  else {
                    handle_heartbeat();
                  }
                  uVar5 = FUN_0000ef12(puVar6);
                  iVar4 = compare_string_offsets(puVar6,param_1,uVar5);
                  bVar7 = bVar7 + 1;
                  if (iVar4 == 0) {
                    return 2;
                  }
                }
              }
              iVar4 = strstr("com.apple.mobilecal",param_1);
              if (iVar4 == 0) {
                return 1;
              }
              return 3;
            }
            if (-1 < (int)((uint)DAT_2001a22c << 0x1d)) {
              pcVar1 = "whitelist type mail is disable ! \n";
LAB_00034c68:
              if (iVar4 == 0) {
                DEBUG_PRINT(pcVar1);
              }
              else {
                handle_heartbeat();
              }
              return 1;
            }
            pcVar1 = "whitelist type mail is enable ! \n";
          }
        }
      }
      if (iVar4 == 0) {
        DEBUG_PRINT(pcVar1);
      }
      else {
        handle_heartbeat();
      }
      return 2;
    }
    uVar5 = 0x4a;
    pcVar1 = "[%s-%d] pkg_name length is too long !\n";
  }
  if (iVar4 == 0) {
    DEBUG_PRINT(pcVar1,"is_on_whitelist_by_identifier",uVar5);
  }
  else {
    handle_heartbeat();
  }
  return 0;
}


