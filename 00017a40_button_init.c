/*
 * Function: button_init
 * Entry:    00017a40
 * Prototype: undefined button_init()
 */


byte button_init(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 uStack_54;
  undefined *local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 uStack_3c;
  undefined *local_38;
  undefined4 uStack_34;
  undefined *local_30;
  undefined4 uStack_2c;
  
  local_70 = &DAT_00087b60;
  uStack_6c = 0x1a;
  FUN_00017688(&local_70,0x10000);
  local_68 = &DAT_00087b60;
  uStack_64 = 0x19;
  FUN_00017688(&local_68,0x10000);
  local_60 = &DAT_00087b60;
  uStack_5c = 0x1c;
  FUN_00017688(&local_60,0x10000);
  local_58 = &DAT_00087b60;
  uStack_54 = 0x1b;
  FUN_00017688(&local_58,0x10000);
  local_50 = &DAT_00087b60;
  uStack_4c = 0x18;
  FUN_00017688(&local_50,0x30000);
  FUN_00017768(&DAT_00087b60,0x18,1);
  local_48 = &DAT_00087b60;
  uStack_44 = 0x13;
  FUN_00017688(&local_48,0x30000);
  FUN_00017768(&DAT_00087b60,0x13,0);
  local_40 = &DAT_00087b60;
  uStack_3c = 0x15;
  FUN_00017688(&local_40,0x30000);
  FUN_00017768(&DAT_00087b60,0x15,0);
  local_38 = &DAT_00087b60;
  uStack_34 = 0x1e;
  FUN_00017688(&local_38,0x30000);
  FUN_00017768(&DAT_00087b60,0x1e,1);
  local_30 = &DAT_00087b60;
  uStack_2c = 0x17;
  FUN_00017688(&local_30,0x30000);
  FUN_00017768(&DAT_00087b60,0x17,0);
  iVar2 = FUN_0008638c(&DAT_00087b48);
  if (iVar2 == 0) {
    if (1 < LOG_LEVEL) {
      pcVar3 = "%s(): SW0 GPIO port device not ready\n\n";
LAB_00017b48:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar3,"button_init");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    iVar2 = FUN_00017688(&DAT_000889d0,0x10000);
    if (-1 < iVar2) {
      DAT_20006a14 = 0x1793d;
      DAT_20006a18 = 0x200;
      iVar2 = FUN_000613c4(&DAT_00087b48,&DAT_20006a10,1);
      if (iVar2 < 0) {
        if (1 < LOG_LEVEL) {
          pcVar3 = "%s(): Unable to configure SW0 GPIO pin!\n\n";
          goto LAB_00017b48;
        }
      }
      else {
        FUN_00017858(&DAT_000889d0,0x5c00000);
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): done, pin= %d\n\n","button_init",9);
          }
          else {
            handle_heartbeat();
          }
        }
      }
    }
  }
  iVar2 = FUN_0008638c(&DAT_00087b48);
  if (iVar2 == 0) {
    if (LOG_LEVEL < 2) goto LAB_00017c40;
    pcVar3 = "%s(): SW0 GPIO port device not ready\n\n";
  }
  else {
    iVar2 = FUN_00017688(&DAT_000889e0,0x10000);
    if (iVar2 < 0) goto LAB_00017c40;
    DAT_20006a08 = &LAB_00017818_1;
    DAT_20006a0c = 0x400;
    iVar2 = FUN_000613c4(&DAT_00087b48,&DAT_20006a04,1);
    if (-1 < iVar2) {
      iVar2 = FUN_00025284();
      if (iVar2 == 0) {
        uVar11 = 0x5c00000;
      }
      else {
        uVar11 = 0x3c00000;
      }
      FUN_00017858(&DAT_000889e0,uVar11);
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): done, pin= %d\n\n","nfc_gpo_init",10);
        }
        else {
          handle_heartbeat();
        }
      }
      goto LAB_00017c40;
    }
    if (LOG_LEVEL < 2) goto LAB_00017c40;
    pcVar3 = "%s(): Unable to configure SW0 GPIO pin!\n\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar3,"nfc_gpo_init");
  }
  else {
    handle_heartbeat();
  }
LAB_00017c40:
  bVar1 = FUN_00017980(0x1a);
  uVar4 = FUN_00017980(0x19);
  uVar5 = FUN_00017980(0x1c);
  uVar6 = FUN_00017980(0x1b);
  uVar7 = FUN_000177c4(&DAT_00087b60,0x18);
  uVar8 = FUN_000177c4(&DAT_00087b60,0x13);
  uVar9 = FUN_000177c4(&DAT_00087b60,0x15);
  uVar10 = FUN_000177c4(&DAT_00087b60,0x1e);
  if (1 < LOG_LEVEL) {
    uVar12 = (uint)bVar1;
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): DEVICE_ID1_PIN: %d, device1_status: %d\n","get_device_hw_id",0x1a,uVar12);
    }
    else {
      handle_heartbeat("%s(): DEVICE_ID1_PIN: %d, device1_status: %d\n","get_device_hw_id",0x1a,
                       uVar12);
    }
    if (1 < LOG_LEVEL) {
      uVar4 = uVar4 & 0xff;
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): DEVICE_ID2_PIN: %d, device2_status: %d\n","get_device_hw_id",0x19,uVar4);
      }
      else {
        handle_heartbeat("%s(): DEVICE_ID2_PIN: %d, device2_status: %d\n","get_device_hw_id",0x19,
                         uVar4);
      }
      if (1 < LOG_LEVEL) {
        uVar5 = uVar5 & 0xff;
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): DEVICE_ID3_PIN: %d, device3_status: %d\n","get_device_hw_id",0x1c,uVar5
                     );
        }
        else {
          handle_heartbeat("%s(): DEVICE_ID3_PIN: %d, device3_status: %d\n","get_device_hw_id",0x1c,
                           uVar5);
        }
        if (1 < LOG_LEVEL) {
          uVar6 = uVar6 & 0xff;
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): DEVICE_ID4_PIN: %d, device4_status: %d\n","get_device_hw_id",0x1b,
                        uVar6);
          }
          else {
            handle_heartbeat("%s(): DEVICE_ID4_PIN: %d, device4_status: %d\n","get_device_hw_id",
                             0x1b,uVar6);
          }
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): device_compat_val: %d %d %d %d\n","get_device_hw_id",uVar12,uVar4,
                          uVar5,uVar6);
            }
            else {
              handle_heartbeat("%s(): device_compat_val: %d %d %d %d\n","get_device_hw_id",uVar12,
                               uVar4);
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): panel_power_status %d tmr_status %d nfc_lpd_status %d touch_power_status %d\n"
                            ,"get_device_hw_id",uVar7 & 0xff,uVar8 & 0xff,uVar9 & 0xff,uVar10 & 0xff
                           );
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
      }
    }
  }
  return bVar1;
}


