/*
 * Function: display_dispatch_thread
 * Entry:    00028bec
 * Prototype: undefined display_dispatch_thread()
 */


void display_dispatch_thread(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  byte bVar8;
  uint uVar9;
  char cVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  int iStack_34;
  uint uStack_30;
  
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","display_dispatch_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  param_1[0xecc] = '\x12';
  param_1[0xecd] = '\0';
  param_1[0xece] = '\0';
  param_1[0xecf] = '\0';
  param_1[0xfe8] = '\0';
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): raster_height_gear:%d, canvas_distance_gear:%d\n","display_dispatch_thread"
                  ,(uint)(byte)param_1[0xec0],(uint)(byte)param_1[0xec1]);
    }
    else {
      handle_heartbeat("%s(): raster_height_gear:%d, canvas_distance_gear:%d\n",
                       "display_dispatch_thread");
    }
  }
  param_1[0xeb4] = '\0';
  param_1[0xeb5] = '\0';
  param_1[0xeb6] = '\0';
  param_1[0xeb7] = '\0';
  iVar2 = get_work_mode();
  iVar3 = get_work_mode();
  cal_panel_canvas_coord(iVar2 + 0xec4,iVar3 + 0xeb8);
  *(short *)(param_1 + 0xd6) =
       (short)*(undefined4 *)(param_1 + 0xeb4) + *(short *)(param_1 + 0x1072);
  param_1[0xee8] = '\0';
  param_1[0xee9] = '\0';
  param_1[0xeea] = '\0';
  param_1[0xeeb] = '\0';
  *(short *)(param_1 + 0xd8) =
       (short)*(undefined4 *)(param_1 + 0xeb8) + *(short *)(param_1 + 0x1074);
  param_1[0xfe7] = '\x01';
  param_1[0xd5] = '\0';
  if (param_1[0xfea] == '\v') {
    change_work_mode_to(2);
    iVar2 = get_system_ready_state();
    if (iVar2 == 1) {
      suspend_system_and_close_display();
    }
  }
  iVar2 = 0;
  pbVar11 = (byte *)0x0;
  cVar13 = '\0';
  iStack_34 = 0;
  uStack_30 = 1;
LAB_00028cc8:
  do {
    while ((param_1[1] == '\x01' || (iVar3 = get_work_mode(), *(char *)(iVar3 + 1) == '\b'))) {
      calculate_ble_schedule_timing(0x28000,0);
    }
    if ((param_1[0xfe8] == '\0') && (iVar3 = check_work_mode_state_valid(param_1), iVar3 == 0)) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): master sync display suspend.\n","display_dispatch_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      param_1[0xcb] = param_1[0xed5];
      uVar14 = get_system_byte_1();
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if ((int)uVar14 != 3) {
        sync_to_slave(param_1,1,0);
        change_work_mode_to(3);
        uVar6 = extraout_r1;
      }
      if (*param_1 == '\x02') {
        while (*(int *)(param_1 + 0x40) != 0) {
          manage_ble_connection_state_comprehensive(param_1 + 0x38,uVar6,0xffffffff,0xffffffff);
          uVar6 = extraout_r1_00;
        }
        while (*(int *)(param_1 + 0x58) != 0) {
          manage_ble_connection_state_comprehensive(param_1 + 0x50,uVar6,0xffffffff,0xffffffff);
          uVar6 = extraout_r1_01;
        }
      }
      if (param_1[0xfe8] == '\0') {
        uVar14 = check_work_mode_state_valid(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 != 0) goto LAB_00028d42;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): thread goto sleep.\n","display_dispatch_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        DISPLAY_UI_STATE = 0;
        manage_ble_connection_state_comprehensive(param_1 + 0x50);
        if (*param_1 == '\x02') {
          uVar6 = extraout_r1_02;
          while (*(int *)(param_1 + 0x40) != 0) {
            manage_ble_connection_state_comprehensive(param_1 + 0x38,uVar6,0xffffffff,0xffffffff);
            uVar6 = extraout_r1_03;
          }
        }
        iStack_34 = 4;
      }
      else {
LAB_00028d42:
        while (*(int *)(param_1 + 0x58) != 0) {
          manage_ble_connection_state_comprehensive(param_1 + 0x50,uVar6,0xffffffff,0xffffffff);
          uVar6 = extraout_r1_04;
        }
      }
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): thread wakeup!.\n","display_dispatch_thread");
        }
        else {
          handle_heartbeat();
        }
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): sync display resume.\n","display_dispatch_thread");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      param_1[0xcb] = param_1[0xed5];
      change_work_mode_to(2);
      cVar13 = '\x01';
    }
    if (param_1[0xfe7] == '\0') {
      iVar3 = 0;
      goto LAB_0002933e;
    }
    if ((*param_1 == '\x01') && (iStack_34 = iStack_34 + 1, iStack_34 == 5)) {
      if ((param_1[0xf98] == '\0') ||
         ((*(int *)(param_1 + 0xf90) == 0 || (*(int *)(param_1 + 0xec8) == 0)))) {
        iStack_34 = 4;
      }
      else {
        uVar4 = calculate_brightness_level(param_1 + 0xf80);
        if (uVar4 == 0xff) {
          iStack_34 = 0;
        }
        else {
          bVar8 = param_1[0xed5];
          if (bVar8 < uVar4) {
            cVar1 = '\x01';
LAB_00028e52:
            param_1[0xed5] = bVar8 + cVar1;
          }
          else if (uVar4 < bVar8) {
            cVar1 = -1;
            goto LAB_00028e52;
          }
          iStack_34 = (byte)param_1[0xed5] - uVar4;
          if (iStack_34 != 0) {
            iStack_34 = 1;
          }
          iStack_34 = iStack_34 << 2;
        }
      }
      if (param_1[0xed6] != param_1[0xed5]) {
        cVar13 = '\x01';
        param_1[0xed6] = param_1[0xed5];
      }
    }
    *(undefined4 *)(param_1 + 0xdf) = **(undefined4 **)(param_1 + 0x1054);
    param_1[0xe3] = *(char *)(*(undefined4 **)(param_1 + 0x1054) + 1);
    if (*param_1 == '\x01') {
      param_1[0xe9] = param_1[0xcc];
      param_1[0xea] = param_1[0xcd];
      param_1[0xeb] = param_1[0xee4];
      param_1[0xec] = param_1[0xd5];
LAB_00028eae:
      if ((param_1[0xfea] == '\f') && (param_1[0xd5] != '\a')) goto LAB_000290ca;
      uVar14 = check_work_mode_state_valid(param_1);
      if ((int)uVar14 == 0) {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): no running task, goto next trun\n","display_dispatch_thread");
          }
          else {
            handle_heartbeat();
          }
        }
        goto LAB_000290ca;
      }
      resource_mutex_acquire(&DAT_20007b3c,(int)((ulonglong)uVar14 >> 0x20),0xffffffff,0xffffffff);
      cVar1 = param_1[0xd5];
      pbVar12 = pbVar11;
      switch(param_1[0xd5]) {
      case '\x02':
        update_timing_and_adjust_parameters(param_1,*(undefined4 *)(param_1 + 0xff0));
        iVar2 = 7;
        pbVar12 = *(byte **)(param_1 + 0xff0);
        break;
      case '\x03':
        iVar7 = calculate_mathematical_operation_with_bit_shifting();
        iVar3 = iVar7;
        if ((DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT != 0) &&
           (iVar3 = DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT,
           9999 < (uint)(iVar7 - DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT))) {
          DAT_20007af8 = (DAT_20007af8 + 1) % 7;
          DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT = 0;
          iVar3 = DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT;
        }
        DISPLAY_DISPATCH_THREAD_STATE_MANAGEMENT = iVar3;
        iVar3 = DAT_20007af8;
        DAT_20007af4 = DAT_20007af4 + 1;
        param_1[0xe6] = (char)DAT_20007af4;
        param_1[0xe5] = (char)iVar3;
        break;
      case '\x04':
        cVar10 = '3';
        while ((param_1[0xec] != param_1[0xd5] && (cVar10 = cVar10 + -1, cVar10 != '\0'))) {
          delay_with_timing(10);
        }
        get_system_initialization_flag();
        pbVar12 = (byte *)get_message_state_table_entry();
        iVar2 = reset_display_ai_show_flag();
        if ((iVar2 == 0) && (iVar2 = get_work_mode(), *(char *)(iVar2 + 0xdd) == DAT_20018c6e)) {
          if (cVar13 == '\0') {
            unlock_display_mutex();
            iVar2 = 0x1b4;
            pbVar11 = pbVar12;
            goto LAB_000290ca;
          }
        }
        else {
          iVar2 = get_work_mode();
          DAT_20018c6e = *(char *)(iVar2 + 0xdd);
        }
        iVar2 = 0x1b4;
        if (pbVar12 != (byte *)0x0) {
          cVar13 = '\x01';
          goto LAB_000290d2;
        }
        pbVar12 = (byte *)0x0;
        cVar10 = '\x01';
        goto LAB_0002902a;
      case '\x05':
        iVar2 = 0x6a;
        pbVar12 = *(byte **)(param_1 + 0xfec);
        break;
      case '\x06':
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): set dashboard data.\n","display_dispatch_thread");
          }
          else {
            handle_heartbeat();
          }
        }
      case '\x0f':
        pbVar12 = *(byte **)(param_1 + 0xfec);
        iVar2 = 0x6a;
        if (pbVar12 != (byte *)0x0) goto LAB_000290d2;
LAB_00029134:
        pbVar12 = (byte *)0x0;
        cVar10 = cVar13;
        goto LAB_0002902a;
      case '\a':
        iVar2 = 0xb;
        pbVar12 = *(byte **)(param_1 + 0x1010);
        break;
      case '\b':
        iVar2 = 0x16a;
        pbVar12 = *(byte **)(param_1 + 0xff4);
        break;
      case '\t':
        iVar2 = 0x217;
        pbVar12 = *(byte **)(param_1 + 0xffc);
        break;
      case '\n':
        bVar8 = param_1[0xee4];
        iVar2 = *(int *)(param_1 + 0x1000);
        if (bVar8 == 2) {
          if ((uStack_30 != 2) || (*(char *)(iVar2 + 7) != '\x02')) {
LAB_00029184:
            cVar13 = '\x01';
            *(byte *)(iVar2 + 7) = bVar8;
          }
        }
        else if (bVar8 != uStack_30) {
          bVar8 = 1;
          goto LAB_00029184;
        }
        iVar2 = 0xf5;
        pbVar12 = *(byte **)(param_1 + 0x1000);
        break;
      case '\v':
        bVar8 = param_1[0xee4];
        uVar4 = (uint)bVar8;
        pcVar5 = *(char **)(param_1 + 0x1008);
        if (uVar4 != 2) {
          if (pcVar5[1] == *pcVar5) goto LAB_000291a6;
          uVar9 = uStack_30;
          if (uVar4 != uStack_30) {
            bVar8 = 4;
            uVar9 = *(uint *)(param_1 + 0x1004);
          }
          if (uVar4 != uStack_30) {
            *(byte *)(uVar9 + 3) = bVar8;
          }
          if (((*param_1 != '\x02') || (param_1[0xcd] == param_1[0xea])) ||
             (pbVar12 = *(byte **)(param_1 + 0x1028), pbVar12[0x200] != param_1[0xea])) {
            pbVar12 = *(byte **)(param_1 + 0x1004);
            goto LAB_000291e2;
          }
LAB_000291d8:
          iVar2 = 0x198;
          goto LAB_000290d2;
        }
        if ((uStack_30 != 2) || (pcVar5[1] == *pcVar5)) {
LAB_000291a6:
          pcVar5[3] = '\x02';
        }
        if (((*param_1 == '\x02') && (param_1[0xcc] != param_1[0xe9])) &&
           (pbVar12 = *(byte **)(param_1 + 0x1024), pbVar12[0x200] == param_1[0xe9]))
        goto LAB_000291d8;
        pbVar12 = *(byte **)(param_1 + 0x1008);
LAB_000291e2:
        if (pbVar12 != (byte *)0x0) goto LAB_000291d8;
        iVar2 = 0x198;
        goto LAB_00029134;
      case '\f':
        iVar2 = 0x50f;
        pbVar12 = *(byte **)(param_1 + 0x1020);
        break;
      case '\x0e':
        iVar2 = get_work_mode();
        *(undefined1 *)(iVar2 + 0xed5) = 0x2a;
        iVar2 = 0x21;
        pbVar12 = *(byte **)(param_1 + 0x1014);
        break;
      case '\x10':
        pbVar12 = *(byte **)(param_1 + 0x100c);
        if ((*pbVar12 < 0xc) || ((*pbVar12 & 0xfd) != 0xd)) {
          if ((*param_1 == '\x02') &&
             ((bVar8 = param_1[0xe9], param_1[0xcc] != bVar8 &&
              (pbVar11 = *(byte **)(param_1 + 0x1024), bVar8 == pbVar11[0x200])))) {
            pbVar12[6] = bVar8;
            pbVar12 = pbVar11;
          }
          else {
            iVar2 = get_work_mode();
            *(undefined1 *)(*(int *)(param_1 + 0x100c) + 6) = *(undefined1 *)(iVar2 + 0xcc);
          }
          if (**(char **)(param_1 + 0x100c) == '\a') {
            (*(char **)(param_1 + 0x100c))[1] = '\x03';
          }
          iVar2 = 0x199;
          goto LAB_000290d2;
        }
        unlock_display_mutex();
        goto LAB_000290ca;
      case '\x11':
        iVar2 = 2;
        pbVar12 = *(byte **)(param_1 + 0x101c);
      }
      cVar10 = cVar13;
      if (pbVar12 != (byte *)0x0) {
LAB_000290d2:
        iVar3 = memcmp_byte_arrays(param_1 + 0xef,pbVar12,iVar2);
        if (((iVar3 != 0) || (cVar13 != '\0')) || ((byte)param_1[0xd5] != DAT_2000a098)) {
          memcpy(param_1 + 0xef,pbVar12,iVar2);
          cVar10 = cVar13;
          goto LAB_0002902a;
        }
        unlock_display_mutex();
        iVar3 = 0;
LAB_00029102:
        cVar13 = '\0';
        pbVar11 = pbVar12;
        goto LAB_0002933e;
      }
LAB_0002902a:
      fill_memory_buffer(param_1 + iVar2 + 0xef,0,0x5dc - iVar2);
      *(short *)(param_1 + 0xed) = (short)iVar2;
      unlock_display_mutex();
      pbVar11 = pbVar12;
      if ((param_1[0xfe6] == '\0') || (cVar13 = cVar10, param_1[0xfe6] == '\x05')) {
        if (*param_1 == '\x01') {
          if (param_1[0xcb] != param_1[0xed5]) {
            set_brightness_to_panel_reg_in_running();
            param_1[0xcb] = param_1[0xed5];
          }
          iVar3 = sync_to_slave(param_1,0,0);
          cVar13 = '\x01';
          if (4999 < iVar3) {
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): sync to slave exceed MAX_WAIT_COUNT, wait_time %d\n",
                            "display_dispatch_thread",iVar3);
              }
              else {
                handle_heartbeat();
              }
            }
            goto LAB_000290ca;
          }
          if (iVar3 < 3000) {
            if (iVar3 < 500) {
              uVar4 = (uint)(byte)param_1[0xec];
              if (((uVar4 == (byte)param_1[0xd5]) || ((byte)param_1[0xd5] < 7)) || (uVar4 < 7))
              goto LAB_000293fc;
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): screen id was changed, g->master_sync_pkg.new_screen_id %d pkg->screen_id %d\n"
                              ,"display_dispatch_thread",uVar4,(uint)(byte)param_1[0xd5]);
                }
                else {
                  handle_heartbeat("%s(): screen id was changed, g->master_sync_pkg.new_screen_id %d pkg->screen_id %d\n"
                                   ,"display_dispatch_thread",uVar4,param_1[0xd5]);
                }
              }
              iVar3 = 0x46;
            }
            else if (0 < LOG_LEVEL) {
              pcVar5 = "%s(): sync to slave exceed LOW_WAIT_COUNT, wait_time %d\n";
              goto LAB_00029336;
            }
          }
          else if (0 < LOG_LEVEL) {
            pcVar5 = "%s(): sync to slave exceed CMD_WAIT_COUNT, wait_time %d\n";
LAB_00029336:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(pcVar5,"display_dispatch_thread",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          iVar3 = 0;
LAB_000293fc:
          iVar7 = check_work_mode_state_valid(param_1);
          if (iVar7 == 0) {
            if (0 < LOG_LEVEL) {
              pcVar5 = "%s(): task was closed!!!\n";
LAB_00029414:
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(pcVar5,"display_dispatch_thread");
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else if (param_1[0xd5] == cVar1) {
            if (param_1[0xfe8] != '\0') {
              uVar9 = (uint)(byte)param_1[0xee4];
              uVar4 = uVar9;
              if ((((param_1[0xd5] == '\n') && (uVar4 = uStack_30, uStack_30 != uVar9)) &&
                  (uVar4 = uVar9, cVar10 != '\x01')) && (uVar4 = uStack_30, 1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): imu->attitude changed ....\n","display_dispatch_thread");
                }
                else {
                  handle_heartbeat();
                }
              }
              uStack_30 = uVar4;
              display_refresh_wrapper_with_parameters(param_1[0xd5]);
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): display_reflash_screen %d done\n","display_dispatch_thread",
                              (uint)(byte)param_1[0xd5]);
                }
                else {
                  handle_heartbeat();
                }
              }
              cVar13 = param_1[0xec];
              if ((cVar13 != '\x06') && (cVar13 == '\0')) goto LAB_0002933e;
              goto LAB_00029102;
            }
            if (0 < LOG_LEVEL) {
              pcVar5 = "%s(): trigger_on_screen is closed\n";
              goto LAB_00029414;
            }
          }
          else if (0 < LOG_LEVEL) {
            pcVar5 = "%s(): screen is closed\n";
            goto LAB_00029414;
          }
          cVar13 = '\x01';
        }
      }
      else {
LAB_000290ca:
        iVar3 = 0;
      }
LAB_0002933e:
      if (*param_1 == '\x01') {
        if (DISPLAY_EVENT_TYPE == '\x0f') {
          uVar6 = 0xf1;
LAB_0002935c:
          send_event_status(uVar6);
        }
        else {
          if (DISPLAY_EVENT_TYPE == 'N') {
            uVar6 = 0xf2;
            goto LAB_0002935c;
          }
          if (DISPLAY_EVENT_TYPE == '\r') {
            uVar6 = 0xf0;
            goto LAB_0002935c;
          }
        }
        DISPLAY_EVENT_TYPE = '\0';
        if (*param_1 != '\x01') goto LAB_000294ea;
        if (0x45 < iVar3) goto LAB_00028cc8;
        lVar15 = (longlong)(0x46 - iVar3) * 0x8000 + 999;
        uVar14 = handle_unsigned_division((int)lVar15,(int)((ulonglong)lVar15 >> 0x20),1000,0);
      }
      else {
LAB_000294ea:
        if ((param_1[0xfe6] == '\0') || (param_1[0xfe6] == '\x05')) goto LAB_00028cc8;
        uVar14 = 0x148;
      }
      calculate_ble_schedule_timing((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      goto LAB_00028cc8;
    }
    if ((1 < (byte)param_1[0xfe6] - 1) && ((byte)param_1[0xfe6] != 4)) {
      lVar15 = calculate_mathematical_operation_with_bit_shifting();
      manage_ble_connection_state_comprehensive
                (param_1 + 0x38,(int)((ulonglong)lVar15 >> 0x20),0x4000,0);
      lVar16 = calculate_mathematical_operation_with_bit_shifting();
      if ((int)((ulonglong)(lVar16 - lVar15) >> 0x20) < (int)(uint)((uint)(lVar16 - lVar15) < 500))
      goto LAB_00028eae;
      goto LAB_000290ca;
    }
    delay_with_timing(0x32);
  } while( true );
}


