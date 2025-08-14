/*
 * Function: FUN_0003384c
 * Entry:    0003384c
 * Prototype: undefined FUN_0003384c()
 */


undefined4 FUN_0003384c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r0;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_178;
  undefined1 auStack_174 [20];
  undefined1 auStack_160 [288];
  undefined4 uStack_40;
  char *local_3c [4];
  char *local_2c;
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *local_1c;
  
  puVar10 = &uStack_40;
  if (param_1 == 0) {
    return 0;
  }
  local_3c[0] = "com.android.phone_missed";
  local_3c[1] = "com.android.phone_incall";
  local_3c[2] = "com.apple.mobilephone";
  local_3c[3] = "com.apple.mobilephone_missed";
  local_2c = "com.apple.MobileSMS";
  pcStack_28 = "com.android.even_sms";
  pcStack_24 = "com.apple.mobilemail";
  pcStack_20 = "com.apple.mobilecal";
  local_1c = "com.android.even_calendar";
  cVar4 = '\t';
  iVar7 = param_1 + 0x10;
  do {
    puVar10 = puVar10 + 1;
    uVar8 = *puVar10;
    uVar2 = FUN_0000ef12(uVar8);
    iVar3 = compare_string_offsets(uVar8,iVar7,uVar2);
    if (iVar3 == 0) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("[%s-%d] special package nane:%s,need not send to app !\n",
                    "send_whilelist_app_info_wrapper",0x137,iVar7);
        return extraout_r0;
      }
      uVar2 = handle_heartbeat("[%s-%d] special package nane:%s,need not send to app !\n",
                               "send_whilelist_app_info_wrapper",0x137,iVar7);
      return uVar2;
    }
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  iVar3 = get_work_mode();
  local_178 = 0;
  fill_memory_buffer(auStack_174,0,0x11);
  fill_memory_buffer(auStack_160,0,0x140);
  uVar1 = FUN_00086f00(auStack_160,0,0x140,
                       "{\"whitelist_app_add\": {\"%s\":  \"%s\",\"%s\": \"%s\"}}","app_identifier",
                       iVar7,"display_name",param_1 + 0x30);
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("[csh_debug]:send_notifi_app_white_list app buf is: %s \n",auStack_160);
  }
  else {
    handle_heartbeat();
  }
  uVar5 = (uVar1 & 0xffff) / 0x11 & 0xff;
  if ((uVar1 & 0xffff) % 0x11 != 0) {
    uVar5 = uVar5 + 1 & 0xff;
  }
  cVar4 = '\0';
  uVar6 = 0;
  do {
    if (uVar5 <= uVar6) {
      return 0;
    }
    fill_memory_buffer((int)&local_178 + 3,0,0x12);
    uVar2 = local_178;
    uVar9 = uVar5 * 0xef + uVar1 + 0x11 & 0xff;
    if ((int)uVar6 < (int)(uVar5 - 1)) {
      uVar9 = 0x11;
    }
    local_178._3_1_ = SUB41(uVar2,3);
    local_178._0_3_ = CONCAT12((char)uVar6,CONCAT11((char)uVar5,0xf6));
    validate_memory_bounds((int)&local_178 + 3,auStack_160 + uVar6 * 0x11,uVar9,0x12);
    iVar7 = (**(code **)(iVar3 + 0x788))(&local_178,uVar9 + 3);
    if (iVar7 == 0) {
      uVar6 = uVar6 + 1 & 0xff;
      cVar4 = '\0';
    }
    else {
      cVar4 = cVar4 + '\x01';
      if (cVar4 == '\x06') {
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0;
        }
        DEBUG_PRINT("[csh_debug] failed to send whitelist !!\n");
        return 0;
      }
    }
    get_schedule_timing(0xa4,0);
  } while( true );
}


