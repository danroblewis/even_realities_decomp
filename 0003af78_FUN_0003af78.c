/*
 * Function: FUN_0003af78
 * Entry:    0003af78
 * Prototype: undefined FUN_0003af78()
 */


/* WARNING: Removing unreachable block (ram,0x0003b4c6) */
/* WARNING: Removing unreachable block (ram,0x0003b202) */

undefined4 FUN_0003af78(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = get_work_mode();
  iVar11 = iVar3 + 0xef;
  FUN_000431b4(param_1 + 0x24);
  if (DAT_20004950 == '\0') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9242_1,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
    enter_dashboard_burial_point();
    if (param_3 == 2) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a926e_1,&LAB_000a957c_1);
        }
        else {
          handle_heartbeat();
        }
      }
      gui_screen_clear();
      fill_memory_buffer(&DAT_20004950,0,0x28);
      goto LAB_0003affc;
    }
    if ((param_3 != 1) || (DAT_20004959 != '\0')) goto LAB_0003b198;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a9292,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
    send_event_status(0x1e);
    fill_memory_buffer(&DAT_20004950,0,0x28);
    gui_screen_clear();
    DAT_20004959 = '\x01';
    DAT_20004970 = *(undefined1 *)(iVar3 + 0x155);
    uVar4 = (uint)DAT_2001b814;
    DAT_20004951 = DAT_2001b816;
    DAT_20004953 = DAT_2001b815;
    DAT_20004955 = DAT_2001b814;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a92b0,&LAB_000a957c_1,(uint)DAT_2001b816,(uint)DAT_2001b815,uVar4);
      }
      else {
        handle_heartbeat(&LAB_000a92b0);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a92ee,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x155),0,uVar4);
        }
        else {
          handle_heartbeat();
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9126_1,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x157),0,uVar4);
          }
          else {
            handle_heartbeat();
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9318,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x158));
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
    }
    pcVar6 = (char *)get_work_mode();
    if (*pcVar6 == '\x01') {
      local_30 = CONCAT22(local_30._2_2_,0x202);
      if (DAT_2000496a == '\0') {
        cVar2 = get_work_mode_status();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = &LAB_000a933c;
LAB_0003b116:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(puVar7,&LAB_000a957c_1);
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else if (DAT_2000496a == '\x01') {
        local_30 = CONCAT22(local_30._2_2_,0x402);
        cVar2 = FUN_000370bc();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = (undefined1 *)0xa9374;
          goto LAB_0003b116;
        }
      }
      else if (DAT_2000496a == '\x02') {
        local_30 = CONCAT22(local_30._2_2_,0x602);
        cVar2 = FUN_0003719c();
        local_30._0_2_ = CONCAT11(cVar2 << 4 | local_30._1_1_,(undefined1)local_30);
        if (2 < LOG_LEVEL) {
          puVar7 = &LAB_000a93a8;
          goto LAB_0003b116;
        }
      }
      uVar8 = get_work_mode();
      iVar5 = sync_to_slave(uVar8,6,&local_30,2);
      if (iVar5 < 5000) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            uVar8 = FUN_0007d224();
            DEBUG_PRINT("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                        &LAB_000a957c_1,iVar5,uVar8);
          }
          else {
            uVar8 = FUN_0007d224();
            handle_heartbeat("%s(): sync to slave return value = %d,exec key function. ts = %d\n",
                             &LAB_000a957c_1,iVar5,uVar8);
          }
        }
      }
      else if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): SYNC TO Slave failed...,don\'t exec key function.\n",&LAB_000a957c_1);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    FUN_000432ec();
    DAT_20009fd0 = 0;
    while (DAT_20009fd0 < 4) {
      uVar8 = get_work_mode();
      render_dashboard_ui(iVar11,uVar8,1,*(undefined1 *)(iVar3 + 0x153));
      uVar4 = 0;
      do {
        iVar5 = 0;
        do {
          local_30 = 0x7050301;
          local_2c = 0x7070707;
          iVar12 = *(int *)(param_1 + 0x24 + uVar4 * 4);
          bVar1 = *(byte *)(iVar12 + iVar5);
          if (bVar1 != 0) {
            *(byte *)(iVar12 + iVar5) =
                 bVar1 & (&DAT_000aae20)
                         [iVar5 + (uint)*(byte *)((int)&local_30 + DAT_20009fd0) * 0x140 +
                                  (uVar4 % 0x1a) * 0xa00];
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x140);
        uVar4 = uVar4 + 1;
      } while (uVar4 != 199);
      DAT_20009fd0 = DAT_20009fd0 + 1;
      iVar5 = get_work_mode();
      uVar8 = *(undefined4 *)(iVar5 + 0xeb4);
      iVar5 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar8,*(undefined4 *)(iVar5 + 0xeb8),0,0,0x280,199);
    }
    FUN_000432d0();
    lVar13 = thunk_FUN_00074f68();
    uVar4 = (uint)((ulonglong)(lVar13 * 1000) >> 0x20);
    DAT_20004960 = (uint)(lVar13 * 1000) >> 0xf | uVar4 * 0x20000;
    DAT_20004964 = uVar4 >> 0xf;
    DAT_20004950 = '\x01';
    FUN_00048b44(0x42);
    FUN_0003ae6c();
LAB_0003b198:
    iVar3 = FUN_0007d1d0(&DASHBOARD_LOCK_STATUS);
    if (-1 < iVar3 << 0x1e) {
      return 0;
    }
    iVar3 = FUN_0007d1d0(&DASHBOARD_LOCK_CONTROL);
    if (iVar3 << 0x1e < 0) {
      return 0;
    }
    local_30 = 0x650;
    local_2c = CONCAT22(local_2c._2_2_,0x201);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d \n",&LAB_000a957c_1,2);
      }
      else {
        handle_heartbeat();
      }
    }
    send_response_data_to_msgqueue(&local_30,6);
    FUN_00047ba8();
    DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
    return 0;
  }
  if (DAT_20004950 != '\x01') {
    return 0;
  }
  uVar4 = FUN_0007d1d0(&DASHBOARD_LOCK_STATUS);
  if (((uVar4 & 2) != 0) && (iVar5 = FUN_0007d1d0(&DASHBOARD_LOCK_CONTROL), -1 < iVar5 << 0x1e)) {
    local_30 = 0x650;
    local_2c = CONCAT22(local_2c._2_2_,0x201);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d \n",&LAB_000a957c_1,2);
      }
      else {
        handle_heartbeat();
      }
    }
    send_response_data_to_msgqueue(&local_30,6);
    FUN_00047ba8();
    DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
  }
  uVar4 = FUN_00033cf8();
  if (uVar4 != DAT_20004973) {
    DAT_20004973 = FUN_00033cf8();
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a93da,&LAB_000a957c_1,(uint)DAT_20004973);
      }
      else {
        handle_heartbeat();
      }
    }
    FUN_0003ae6c();
  }
  FUN_000432d0();
  if (LOG_LEVEL < 3) {
    if (param_3 != 2) goto LAB_0003b742;
  }
  else {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(&LAB_000a9436_1,&LAB_000a957c_1);
    }
    else {
      handle_heartbeat();
    }
    if (param_3 != 2) {
LAB_0003b742:
      if (param_3 == 1) {
        uVar8 = get_work_mode();
        render_dashboard_ui(iVar11,uVar8,1,*(undefined1 *)(iVar3 + 0x153));
        return 0;
      }
      if (param_3 == 0) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(&LAB_000a9464_1,&LAB_000a957c_1,(uint)*(byte *)(iVar3 + 0x153));
          }
          else {
            handle_heartbeat();
          }
        }
        uVar8 = get_work_mode();
        render_dashboard_ui(iVar11,uVar8,0,*(undefined1 *)(iVar3 + 0x153));
        goto LAB_0003b512;
      }
      if (param_3 != 4) {
        if (param_3 == 6) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9528_1,&LAB_000a957c_1);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = get_work_mode();
          uVar9 = 1;
          iVar3 = *(int *)(iVar3 + 0xfec);
        }
        else {
          if (param_3 != 7) goto LAB_0003b512;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(&LAB_000a9550_1,&LAB_000a957c_1);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar3 = get_work_mode();
          uVar9 = 0;
          iVar3 = *(int *)(iVar3 + 0xfec);
        }
        *(undefined1 *)(iVar3 + 0x5f) = uVar9;
        FUN_0003ae6c();
        goto LAB_0003b512;
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&LAB_000a947e_1,&LAB_000a957c_1,(uint)DAT_20004969);
        }
        else {
          handle_heartbeat();
        }
      }
      if (DAT_2000496a == '\0') {
        if (1 < DAT_20004952) {
          DAT_20004951 = (DAT_20004951 + 1) -
                         DAT_20004952 * ((byte)(DAT_20004951 + 1) / DAT_20004952);
          DAT_2001b816 = DAT_20004951;
          FUN_0001672c();
          if (2 < LOG_LEVEL) {
            uVar4 = (uint)DAT_20004951;
            puVar7 = &LAB_000a94c4_1;
            goto LAB_0003b614;
          }
        }
      }
      else if (DAT_2000496a == '\x01') {
        uVar4 = (uint)DAT_20004954;
        if (1 < uVar4) {
          uVar10 = (uint)(byte)(DAT_20004953 + 1) - uVar4 * ((byte)(DAT_20004953 + 1) / uVar4);
          uVar4 = uVar10 & 0xff;
          DAT_20004953 = (byte)uVar10;
          DAT_2001b815 = DAT_20004953;
          if (2 < LOG_LEVEL) {
            puVar7 = (undefined1 *)0xa94e9;
LAB_0003b614:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(puVar7,&LAB_000a957c_1,uVar4);
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (((DAT_2000496a == '\x02') && (uVar4 = (uint)DAT_20004956, 1 < uVar4)) &&
              (DAT_20004955 != 3)) {
        uVar10 = (uint)(byte)(DAT_20004955 + 1) - uVar4 * ((byte)(DAT_20004955 + 1) / uVar4);
        uVar4 = uVar10 & 0xff;
        DAT_20004955 = (byte)uVar10;
        DAT_2001b814 = DAT_20004955;
        if (2 < LOG_LEVEL) {
          puVar7 = (undefined1 *)0xa950a;
          goto LAB_0003b614;
        }
      }
      uVar8 = get_work_mode();
      render_dashboard_ui(iVar11,uVar8,4,*(undefined1 *)(iVar3 + 0x153));
      FUN_0003af04();
LAB_0003b512:
      pcVar6 = (char *)get_work_mode();
      if (*pcVar6 != '\x01') {
        return 0;
      }
      iVar3 = FUN_0007d248();
      lVar13 = thunk_FUN_00074f68();
      uVar10 = (uint)((ulonglong)(lVar13 * 1000) >> 0x20);
      uVar4 = (uint)(lVar13 * 1000) >> 0xf | uVar10 * 0x20000;
      uVar10 = uVar10 >> 0xf;
      if (iVar3 == 0) {
        iVar3 = get_work_mode();
        if (*(char *)(*(int *)(iVar3 + 0xfec) + 0x5f) != '\0') {
          if (DAT_2000495b != '\0') {
            return 0;
          }
          if ((int)((uVar10 - DAT_20004964) - (uint)(uVar4 < DAT_20004960)) <
              (int)(uint)(uVar4 - DAT_20004960 < 0x5dd)) {
            return 0;
          }
        }
        uVar8 = 1;
      }
      else {
        iVar3 = get_work_mode();
        if (*(char *)(*(int *)(iVar3 + 0xfec) + 0x5f) != '\x01') {
          if (DAT_2000495b != '\0') {
            return 0;
          }
          if ((int)((uVar10 - DAT_20004964) - (uint)(uVar4 < DAT_20004960)) <
              (int)(uint)(uVar4 - DAT_20004960 < 0x5dd)) {
            return 0;
          }
        }
        uVar8 = 0;
      }
      SendPowerInfoToSlave(uVar8);
      DAT_2000495b = 1;
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a926e_1,&LAB_000a957c_1);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  send_event_status(0x1f);
  FUN_0004382c();
  fill_memory_buffer(&DAT_20004950,0,0x28);
LAB_0003affc:
  DAT_20007aa0 = DAT_20007aa0 & 0xfffffffd;
  exit_dashboard_burial_point();
  return 0;
}


