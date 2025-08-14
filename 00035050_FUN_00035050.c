/*
 * Function: FUN_00035050
 * Entry:    00035050
 * Prototype: undefined FUN_00035050()
 */


undefined4 FUN_00035050(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  undefined1 auStack_50 [39];
  undefined1 local_29;
  
  iVar2 = FUN_0008500c();
  if (iVar2 == 0) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("error root JSON NODE !\n");
    }
    else {
      handle_heartbeat();
    }
    return 0;
  }
  iVar3 = FUN_0008503c(iVar2,"call_enable");
  if (iVar3 == 0) {
    pcVar4 = "callEnable is NULL !\n";
LAB_00035088:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar4);
    }
    else {
      handle_heartbeat();
    }
  }
  else {
    if ((bool)(DAT_2001a22c & 1) != (*(int *)(iVar3 + 0xc) == 2)) {
      pcVar4 = "callEnable is not the same !\n";
      goto LAB_00035088;
    }
    iVar3 = FUN_0008503c(iVar2,"msg_enable");
    if (iVar3 == 0) {
      pcVar4 = "msgEnable is NULL !\n";
      goto LAB_00035088;
    }
    if (((uint)DAT_2001a22c << 0x1e) >> 0x1f != (uint)(*(int *)(iVar3 + 0xc) == 2)) {
      pcVar4 = "msgEnable is not the same !\n";
      goto LAB_00035088;
    }
    iVar3 = FUN_0008503c(iVar2,"calendar_enable");
    if (iVar3 == 0) {
      pcVar4 = "jsonCalendarEnable is NULL !\n";
      goto LAB_00035088;
    }
    if (((uint)DAT_2001a22c << 0x1c) >> 0x1f != (uint)(*(int *)(iVar3 + 0xc) == 2)) {
      pcVar4 = "calendarEnable is not the same !\n";
      goto LAB_00035088;
    }
    iVar3 = FUN_0008503c(iVar2,"ios_mail_enable");
    if (iVar3 == 0) {
      pcVar4 = "iosMailEnableJson is NULL !\n";
      goto LAB_00035088;
    }
    if (((uint)DAT_2001a22c << 0x1d) >> 0x1f != (uint)(*(int *)(iVar3 + 0xc) == 2)) {
      pcVar4 = "iosMailEnable is not the same !\n";
      goto LAB_00035088;
    }
    iVar3 = FUN_0008503c(iVar2,"app");
    if (iVar3 == 0) {
      pcVar4 = "appJson is NULL !\n";
      goto LAB_00035088;
    }
    iVar5 = FUN_0008503c(iVar3,"enable");
    if (iVar5 == 0) {
      pcVar4 = "appEnableJson is NULL !\n";
      goto LAB_00035088;
    }
    if (((uint)DAT_2001a22c << 0x1b) >> 0x1f != (uint)(*(int *)(iVar5 + 0xc) == 2)) {
      pcVar4 = "appEnable is not the same !\n";
      goto LAB_00035088;
    }
    iVar3 = FUN_0008503c(iVar3,"list");
    if (iVar3 == 0) {
      pcVar4 = "appListJson is NULL !\n";
      goto LAB_00035088;
    }
    iVar5 = FUN_000850c8();
    if (iVar5 != 0) {
      bVar1 = FUN_00085020(iVar3);
      uVar8 = (uint)bVar1;
      if (DAT_2001a22d != uVar8) {
        pcVar4 = "appCounts is not the same !\n";
        goto LAB_00035088;
      }
      uVar10 = 0;
      for (uVar9 = uVar10; (uVar9 & 0xff) < uVar8; uVar9 = uVar9 + 1) {
        iVar5 = FUN_00085030(iVar3,uVar9);
        if (iVar5 == 0) {
          pcVar4 = "singleAppJson is NULL !\n";
LAB_000351c4:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(pcVar4);
          }
          else {
            handle_heartbeat();
          }
        }
        else {
          iVar6 = FUN_0008503c(iVar5,"id");
          if (iVar6 == 0) {
            pcVar4 = "appIdJson is NULL !\n";
            goto LAB_000351c4;
          }
          iVar5 = FUN_0008503c(iVar5,"name");
          if (iVar5 == 0) {
            pcVar4 = "appNameJson is NULL !\n";
            goto LAB_000351c4;
          }
          local_29 = 0;
          local_51 = 0;
          FUN_0008705a(auStack_50,*(undefined4 *)(iVar6 + 0x10),0x27);
          FUN_0008705a(auStack_60,*(undefined4 *)(iVar5 + 0x10),0xf);
          iVar5 = FUN_00034ff0(auStack_50,auStack_60);
          if (iVar5 == 0) break;
          uVar10 = uVar10 + 1 & 0xff;
        }
      }
      if (uVar10 == uVar8) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("the same whitelist ! \n");
        }
        else {
          handle_heartbeat();
        }
        uVar7 = 1;
        goto LAB_0003523e;
      }
    }
  }
  uVar7 = 0;
LAB_0003523e:
  FUN_00064b1c(iVar2);
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("is_the_same_whitelist_app ret is %d\n",uVar7);
  }
  else {
    handle_heartbeat();
  }
  return uVar7;
}


