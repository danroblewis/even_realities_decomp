/*
 * Function: _1b85815
 * Entry:    00016eb8
 * Prototype: undefined _1b85815()
 */


void _1b85815(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  char *pcVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  
  FUN_0004a500();
  iVar2 = FUN_0004f564(0x10);
  if (iVar2 != 0) {
    *(undefined **)(iVar2 + 4) = &DAT_000fa9b4;
  }
  *(undefined ***)(iVar2 + 8) = &PTR_DAT_000faa2c;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  FUN_0004f770();
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Synchronization using %s driver\n",&DAT_00099bb2,&DAT_00099830);
    }
    else {
      handle_heartbeat();
    }
  }
  schedule_dashboard_lock_task(&DAT_20003700);
  serialization_init();
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): [Build Info: Ver:v%d.%d.%d Commit:%s] [Build Time:%s]\n",&DAT_00099bb2,1,4,
                  5,"1b85815","2024-12-28 20:20:45");
    }
    else {
      handle_heartbeat("%s(): [Build Info: Ver:v%d.%d.%d Commit:%s] [Build Time:%s]\n",&DAT_00099bb2
                      );
    }
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): [cpuapp] global context init\n\n","init_context");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  pcVar3 = (char *)malloc_maybe(0x1188);
  fill_memory_buffer(pcVar3,0,0x1188);
  pcVar3[0xfda] = -1;
  pcVar3[0xfdb] = -1;
  pcVar3[0xfdc] = -1;
  pcVar3[0xfdd] = -1;
  pcVar3[0xfde] = -1;
  pcVar3[0xfdf] = -1;
  pcVar3[0xfe0] = -1;
  pcVar3[0xfe1] = -1;
  pcVar3[0xfe2] = -1;
  pcVar3[0xfe3] = -1;
  pcVar3[0xfe4] = -1;
  pcVar3[0xfe5] = -1;
  *pcVar3 = '\x01';
  WORK_MODE = pcVar3;
  FUN_0007c030(pcVar3 + 8,1);
  FUN_0007c030(pcVar3 + 0x20,10);
  FUN_0007c030(pcVar3 + 0x38,1);
  FUN_0007c030(pcVar3 + 0x50,1);
  pcVar11 = pcVar3 + 0x68;
  FUN_0007c030(pcVar3 + 0xaf4,1);
  FUN_0007c030(pcVar11,1);
  FUN_0007c030(pcVar3 + 0x80,1);
  FUN_0007c030(pcVar3 + 0x98,1);
  FUN_0007c030(pcVar3 + 0xb0,1);
  pcVar8 = WORK_MODE;
  WORK_MODE[1] = -1;
  pcVar8[0x105c] = '\0';
  pcVar8[0x105d] = '\0';
  change_work_mode_to(0);
  iVar2 = malloc_maybe(0x6a);
  *(int *)(pcVar3 + 0xfec) = iVar2;
  if (iVar2 != 0) {
    fill_memory_buffer(iVar2,0,0x6a);
  }
  FUN_0007d230(0x65920080);
  uVar4 = malloc_maybe(7);
  *(undefined4 *)(pcVar3 + 0xff0) = uVar4;
  puVar5 = (undefined4 *)malloc_maybe(5);
  *(undefined4 **)(pcVar3 + 0x1054) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 1) = 0;
  }
  iVar2 = malloc_maybe(0x217);
  *(int *)(pcVar3 + 0xffc) = iVar2;
  if (iVar2 != 0) {
    fill_memory_buffer(iVar2,0,0x217);
  }
  uVar4 = malloc_maybe(0xf5);
  *(undefined4 *)(pcVar3 + 0x1000) = uVar4;
  uVar4 = malloc_maybe(0x198);
  *(undefined4 *)(pcVar3 + 0x1004) = uVar4;
  uVar4 = malloc_maybe(0x198);
  *(undefined4 *)(pcVar3 + 0x1008) = uVar4;
  uVar4 = malloc_maybe(0x199);
  *(undefined4 *)(pcVar3 + 0x100c) = uVar4;
  iVar2 = malloc_maybe(0x50f);
  *(int *)(pcVar3 + 0x1020) = iVar2;
  if (iVar2 != 0) {
    fill_memory_buffer(iVar2,0,0x50f);
  }
  iVar2 = malloc_maybe(0x201);
  *(int *)(pcVar3 + 0x1024) = iVar2;
  if (iVar2 != 0) {
    fill_memory_buffer(iVar2,0,0x201);
  }
  iVar2 = malloc_maybe(0x201);
  *(int *)(pcVar3 + 0x1028) = iVar2;
  if (iVar2 != 0) {
    fill_memory_buffer(iVar2,0,0x201);
  }
  iVar2 = malloc_maybe(0x16a);
  *(int *)(pcVar3 + 0xff4) = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x168) = 0;
    *(undefined4 *)(iVar2 + 0x164) = 0;
  }
  uVar4 = malloc_maybe(0xaf);
  *(undefined4 *)(pcVar3 + 0xff8) = uVar4;
  puVar5 = (undefined4 *)malloc_maybe(0xb);
  *(undefined4 **)(pcVar3 + 0x1010) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)((int)puVar5 + 7) = 0;
  }
  uVar4 = malloc_maybe(0x21);
  *(undefined4 *)(pcVar3 + 0x1014) = uVar4;
  FUN_000406e4();
  puVar6 = (undefined1 *)malloc_maybe(1);
  *(undefined1 **)(pcVar3 + 0x1018) = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
  }
  puVar7 = (undefined2 *)malloc_maybe(2);
  *(undefined2 **)(pcVar3 + 0x101c) = puVar7;
  if (puVar7 != (undefined2 *)0x0) {
    *puVar7 = 0;
  }
  pcVar3[0x1069] = -1;
  pcVar3[0x106a] = -1;
  pcVar3[0x106b] = -1;
  pcVar3[0x106c] = -1;
  pcVar3[0x106c] = -1;
  pcVar3[0x106d] = -1;
  pcVar3[0x106e] = -1;
  pcVar3[0x106f] = -1;
  pcVar3[0x1070] = '\0';
  pcVar3[0x1071] = '\0';
  register_ipc_service_context(pcVar3 + 0x714);
  pcVar3[0x6e4] = '\x01';
  *(char **)(pcVar3 + 0x6e8) = "cpuapp-hw-id";
  *(undefined1 **)(pcVar3 + 0x6ec) = &LAB_000162ec_1;
  (**(code **)(pcVar3 + 0x778))(pcVar3 + 0x6e4);
  pcVar3[0x6f0] = '\x06';
  *(char **)(pcVar3 + 0x6f4) = "cpunet-esbm-cpu-sync";
  *(undefined1 **)(pcVar3 + 0x6f8) = &LAB_00016bf0_1;
  pcVar3[0x6fc] = '\x04';
  *(char **)(pcVar3 + 0x700) = "cpunet-esbs";
  pcVar3[0x704] = 'a';
  pcVar3[0x705] = 'Y';
  pcVar3[0x706] = '\x01';
  pcVar3[0x707] = '\0';
  pcVar3[0x708] = '\x05';
  *(char **)(pcVar3 + 0x70c) = "cpunet-esbs-ctrl";
  *(undefined1 **)(pcVar3 + 0x710) = &LAB_0007c00c_1;
  (**(code **)(pcVar3 + 0x778))(pcVar3 + 0x6f0);
  (**(code **)(pcVar3 + 0x778))(pcVar3 + 0x6fc);
  (**(code **)(pcVar3 + 0x778))(pcVar3 + 0x708);
  pcVar3[0xb24] = '\0';
  pcVar3[0xb25] = '\0';
  pcVar3[0xb26] = '\0';
  pcVar3[0xb27] = '\0';
  pcVar3[0xb28] = '\x04';
  pcVar3[0xb29] = '\b';
  pcVar3[0xb2a] = '\t';
  pcVar3[0xb2b] = '\n';
  pcVar3[0xb2c] = '\v';
  pcVar3[0xb2d] = ' ';
  FUN_0002659c(pcVar3 + 0xb10);
  DAT_200069f8 = button_init();
  cVar1 = ext_flash_api_init(pcVar3 + 0x1030,pcVar3 + 0x1034,pcVar3 + 0x1038);
  pcVar3[0x1089] = cVar1;
  pcVar3[1] = '\0';
  sett_init(pcVar3 + 0x103c);
  FUN_0007c360(pcVar3);
  iVar2 = LOG_LEVEL;
  if (DAT_200069f8 == 0) {
    *pcVar3 = '\x01';
    if (0 < iVar2) {
      pcVar8 = "%s(): Master!------\n";
LAB_000172a6:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar8,"role_init");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else if (DAT_200069f8 == 1) {
    *pcVar3 = '\x02';
    if (0 < LOG_LEVEL) {
      pcVar8 = "%s(): Slave!------\n";
      goto LAB_000172a6;
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): error --hw_id:0x%x\n","role_init");
    }
    else {
      handle_heartbeat();
    }
  }
  runtime_info_sync(pcVar3);
  if (*pcVar3 == '\x01') {
    pcVar3[0xfcc] = '\x01';
    pcVar3[0xfcd] = '\x04';
    pcVar3[0xfce] = '\x05';
    pcVar3[0xe4] = pcVar3[0xe4] | 4;
  }
  else if (*pcVar3 == '\x02') {
    pcVar3[0xfcf] = '\x01';
    pcVar3[0xfd0] = '\x04';
    pcVar3[0xfd1] = '\x05';
    pcVar3[0x6de] = pcVar3[0x6de] | 4;
  }
  FUN_00072908(pcVar3 + 8,extraout_r1,0xffffffff,0xffffffff);
  if (pcVar3[1] == '\x01') {
LAB_00017372:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enter\n","component_init");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    FUN_00018208(pcVar3 + 0x77c);
    power_for_panel();
    if (*pcVar3 == '\x01') {
      burial_point_record_info_init();
      schedule_dashboard_lock_task(&DAT_200036c8);
      power_for_imu_and_mic();
      *(undefined ***)(pcVar3 + 0xf00) = &PTR_s_lsm6dso_6b_00087d58;
      FUN_000622a0();
      register_imu_funsion_context(pcVar3 + 0xee4);
      FUN_0002e8fc(pcVar3 + 0xf80);
    }
    else if (*pcVar3 == '\x02') {
      power_for_imu_and_mic();
      *(undefined ***)(pcVar3 + 0xf00) = &PTR_s_lsm6dso_6b_00087d58;
      FUN_000622a0();
    }
    FUN_00047148(pcVar3 + 0xb6c);
    FUN_00025290();
    FUN_00036ed8(*(undefined4 *)(WORK_MODE + 0xfec));
    getDashboardStartUpModeInfofromFlash();
    getAppLanguageInfofromFlash();
    FUN_00023acc();
    FUN_000243fc();
    pcVar3[0x108e] = '\0';
    *(undefined2 *)(pcVar3 + 0xed8) = *(undefined2 *)(pcVar3 + 0xede);
    pcVar3[0x108c] = '\0';
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): exit!\n","init_context");
      }
      else {
        handle_heartbeat();
      }
      goto LAB_00017372;
    }
  }
  FUN_00023230(pcVar3);
  iVar2 = (**(code **)(pcVar3 + 0x77c))(pcVar3 + 0x77c);
  if ((iVar2 != 0) && (1 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): [ble_context init] fail: 0x%x\n\n","component_init",iVar2);
    }
    else {
      handle_heartbeat();
    }
  }
  if (*pcVar3 == '\x01') {
    iVar2 = (**(code **)(pcVar3 + 0xf70))(pcVar3 + 0xee4);
    if ((iVar2 != 0) && (1 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): [imu_context init] fail: 0x%x\n\n","component_init",iVar2);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar2 = (**(code **)(pcVar3 + 0xf80))(pcVar3 + 0xf80);
    if ((iVar2 != 0) && (1 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): [opt3007 init] fail: 0x%x\n\n","component_init",iVar2);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  iVar2 = FUN_0008638c(&PTR_s_regulators_00087cb0);
  if (iVar2 == 0) {
    pcVar8 = "pmic regulator not ready.\n";
  }
  else {
    DEBUG_PRINT("pmic regulator %s is ready to use.\n","regulators");
    iVar2 = FUN_0008638c(&PTR_s_charger_00087d70);
    if (iVar2 == 0) {
      pcVar8 = "Charger device not ready.\n";
    }
    else {
      iVar2 = FUN_0002ea28(&PTR_s_charger_00087d70);
      if (iVar2 < 0) {
        pcVar8 = "Could not initialise fuel gauge.\n";
      }
      else {
        iVar2 = FUN_00062644(&PTR_s_charger_00087d70);
        if (-1 < iVar2) {
          DEBUG_PRINT("Initialise charger.\n");
          DEBUG_PRINT("PMIC device ok\n");
          FUN_00016110();
          iVar2 = FUN_0007cefc();
          if (iVar2 != 0) {
            DEBUG_PRINT("Old board, need to restrain Vterm to 4.2V\n");
            FUN_0002ea78();
          }
          iVar2 = (**(code **)(pcVar3 + 0xb10))(pcVar3 + 0xb10);
          if ((iVar2 != 0) && (1 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): [spi_master init] fail: 0x%x\n\n","component_init",iVar2);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar2 = (**(code **)(pcVar3 + 0xb6c))(pcVar3 + 0xb6c);
          if ((iVar2 != 0) && (1 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): [panel_controler init] fail: 0x%x\n\n","component_init",iVar2);
            }
            else {
              handle_heartbeat();
            }
          }
          FUN_00030c90();
          FUN_00034944();
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): exit\n","component_init");
            }
            else {
              handle_heartbeat();
            }
          }
          pcVar3[0x1078] = '\0';
          pcVar3[0x1079] = '\0';
          pcVar3[0x107a] = '\0';
          pcVar3[0x107b] = '\0';
          FUN_0007d0aa(pcVar3 + 0x1078);
          FUN_00032808(DAT_2007fc70);
          goto LAB_00017414;
        }
        pcVar8 = "Could not initialise charger.\n";
      }
    }
  }
  DEBUG_PRINT(pcVar8);
LAB_00017414:
  run_main_dispatch_thread(pcVar3);
  FUN_0002eaa8();
  uVar4 = extraout_r1_00;
  do {
    FUN_00072908(pcVar11,uVar4,0xffffffff,0xffffffff);
    if (DAT_2000ff6e == '\x01') {
      switch_to_dfu_mode(pcVar11);
    }
    while( true ) {
      uVar10 = (uint)(byte)pcVar3[0x1059];
      if (uVar10 == 0) break;
      if ((int)(uVar10 << 0x1f) < 0) {
        FUN_0007c34a(pcVar3,0);
        bVar9 = pcVar3[0x1059] & 0xfe;
        goto LAB_0001762a;
      }
      if ((int)(uVar10 << 0x1e) < 0) {
        pcVar3[0xfea] = '\v';
        bVar9 = pcVar3[0x1059] & 0xfd;
        goto LAB_0001762a;
      }
      if ((int)(uVar10 << 0x1d) < 0) {
        do_pdm_transfer();
        bVar9 = pcVar3[0x1059] & 0xfb;
        goto LAB_0001762a;
      }
      if ((int)(uVar10 << 0x1c) < 0) {
        FUN_000167b4();
        bVar9 = pcVar3[0x1059] & 0xf7;
LAB_0001762a:
        pcVar3[0x1059] = bVar9;
      }
    }
    FUN_0007c038(1);
    uVar4 = extraout_r1_01;
  } while( true );
}


