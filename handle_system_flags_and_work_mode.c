/*
 * Function: handle_system_flags_and_work_mode
 * Entry:    00016854
 * Prototype: undefined handle_system_flags_and_work_mode()
 */


uint handle_system_flags_and_work_mode(uint param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 uStack_48;
  undefined1 auStack_44 [28];
  char *pcStack_28;
  
  pcVar2 = WORK_MODE;
  if (param_1 == 0) {
    *(ushort *)(WORK_MODE + 0x105c) = *(ushort *)(WORK_MODE + 0x105c) & ~(ushort)param_2;
    if (pcVar2[1] == '\0') {
      return 0;
    }
    if (param_2 == 0x80) {
      uVar4 = update_work_mode_state();
      return uVar4;
    }
  }
  else {
    *(ushort *)(WORK_MODE + 0x105c) = *(ushort *)(WORK_MODE + 0x105c) | (ushort)param_2;
    if (pcVar2[1] == '\0') {
      return param_1;
    }
    if (param_2 == 0x80) {
      uVar4 = bt_start();
      return uVar4;
    }
  }
  pcVar1 = WORK_MODE;
  if (0x80 < param_2) {
    if (param_2 != 0x400) {
      uVar4 = param_1;
      if (param_2 == 0x800) {
        if (param_1 == 0) {
          uVar4 = power_down_and_execute(1);
          return uVar4;
        }
      }
      else if ((param_2 == 0x100) &&
              (uVar4 = get_system_ready_state(), pcVar2 = WORK_MODE, uVar4 == 0)) {
        if (param_1 == 0) {
          uVar4 = global_system_suspend();
          return uVar4;
        }
        if ((WORK_MODE[0xfe6] & 0xfbU) == 1) {
          WORK_MODE[0xfe6] = '\x03';
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): begin.\n","global_system_resume");
            }
            else {
              handle_heartbeat();
            }
          }
          (**(code **)(pcVar2 + 0xb74))(pcVar2 + 0xb6c);
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): end.\n","global_system_resume");
            }
            else {
              handle_heartbeat();
            }
          }
          pcVar2[0xfe6] = '\0';
        }
        return 0;
      }
      return uVar4;
    }
    if (param_1 == 0) {
      uVar8 = 1;
      puVar5 = (undefined4 *)&UNK_000889f0;
    }
    else {
      uVar8 = 0;
      puVar5 = (undefined4 *)&UNK_000889f0;
    }
LAB_0007c084:
    uVar4 = handle_conditional_event(*puVar5,*(undefined1 *)(puVar5 + 1),uVar8);
    return uVar4;
  }
  if (param_2 != 0x20) {
    if (param_2 == 0x40) {
      if (param_1 == 1) {
        uVar3 = 0xb;
      }
      else if (param_1 == 2) {
        uVar3 = 10;
      }
      else {
        uVar3 = 0xc;
      }
      uStack_48 = 0;
      fill_memory_buffer(auStack_44,0,0x3c);
      uStack_48._0_2_ = CONCAT11(uVar3,1);
      uVar4 = global_ipc_service_send(&uStack_48,4);
      return uVar4;
    }
    if (param_2 != 1) {
      return param_1;
    }
    if (param_1 == 0) {
      uVar8 = 0;
      puVar5 = (undefined4 *)&UNK_000889e8;
    }
    else {
      uVar8 = 1;
      puVar5 = (undefined4 *)&UNK_000889e8;
    }
    goto LAB_0007c084;
  }
  if (*pcVar2 != '\x01') {
    uVar4 = FUN_0007c038(0x32);
    return uVar4;
  }
  if (param_1 != 1) {
    param_1 = (uint)(param_1 == 2) * 2;
  }
  param_1 = param_1 & 0xff;
  pcStack_28 = WORK_MODE;
  iVar6 = get_work_mode();
  if (iVar6 != 1) {
    return 0;
  }
  if (pcVar1[0xef8] != '\0') {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): imu_fusion: algo is existed\n\n","update_imu_mode");
      }
      else {
        handle_heartbeat();
      }
    }
    return 0xffffffff;
  }
  get_work_mode();
  *(undefined ***)(pcVar1 + 0xf00) = &PTR_s_lsm6dso_6b_00087d58;
  if (param_1 == 1) {
    uVar8 = 0xc;
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 0) {
        pcVar1[0xf04] = '\0';
        pcVar1[0xf05] = '\0';
        pcVar1[0xf06] = '\0';
        pcVar1[0xf07] = '\0';
        pcVar1[0xf08] = '\0';
        pcVar1[0xf09] = '\0';
        pcVar1[0xf0a] = '\0';
        pcVar1[0xf0b] = '\0';
      }
      goto LAB_00026156;
    }
    uVar8 = 0x1a;
  }
  *(undefined4 *)(pcVar1 + 0xf04) = uVar8;
  pcVar1[0xf08] = '\0';
  pcVar1[0xf09] = '\0';
  pcVar1[0xf0a] = '\0';
  pcVar1[0xf0b] = '\0';
LAB_00026156:
  iVar6 = 1;
  while( true ) {
    iVar7 = FUN_0007ca54(*(undefined4 *)(pcVar1 + 0xf00),3,pcVar1 + 0xf04);
    if (-1 < iVar7) {
      uVar8 = extraout_r3;
      if (param_1 < 3) {
        uVar8 = 0;
      }
      iVar6 = 1;
      if (param_1 < 3) {
        *(undefined4 *)(pcVar1 + 0xf04) = uVar8;
        *(undefined4 *)(pcVar1 + 0xf08) = uVar8;
      }
      while( true ) {
        iVar7 = FUN_0007ca54(*(undefined4 *)(pcVar1 + 0xf00),7,pcVar1 + 0xf04);
        if (-1 < iVar7) {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): imu sensor update to mode %d\n","update_imu_mode",param_1);
            }
            else {
              handle_heartbeat();
            }
          }
          return 0;
        }
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): c->imu_fusion: Cannot set sampling frequency for gyro %d.\n\n",
                        "update_imu_mode",iVar6);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == 0x15) break;
        get_schedule_timing(0xa4,0);
      }
      return 0xfffffffc;
    }
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): c->imu_fusion: Cannot set sampling frequency for accelerometer ret %d retry_time %d.\n\n"
                    ,"update_imu_mode",iVar7,iVar6);
      }
      else {
        handle_heartbeat("%s(): c->imu_fusion: Cannot set sampling frequency for accelerometer ret %d retry_time %d.\n\n"
                         ,"update_imu_mode",iVar7,iVar6);
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x15) break;
    get_schedule_timing(0xa4,0);
  }
  return 0xfffffffd;
}


