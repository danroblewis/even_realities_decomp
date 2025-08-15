/*
 * Function: handle_attitude_trigger
 * Entry:    0000fe88
 * Prototype: undefined handle_attitude_trigger()
 */


/* WARNING: Removing unreachable block (ram,0x00010626) */

void handle_attitude_trigger(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float y;
  undefined4 uVar5;
  undefined4 uVar6;
  float q0;
  float q1;
  float q2;
  float *pfVar7;
  int *piVar8;
  undefined2 extraout_var;
  uint *extraout_r3;
  char *timing_data;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  float *pfVar12;
  float z;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_a4;
  float local_a0 [9];
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  local_a0[0] = 0.0;
  fill_memory_buffer(&local_70,0,0x18);
  fill_memory_buffer(&local_58,0,0x18);
  if (param_1[0x14] == '\0') {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): start imu looper\n\n","imu_fusion_thread");
      }
      else {
        handle_heartbeat();
      }
    }
    *param_1 = '\x01';
    pcVar11 = param_1 + -0xee4;
    local_a4 = 0;
    while (param_1[0x15] != '\0') {
      while ((param_1[-0xee3] == '\x01' || (param_1[-0xee3] == '\b'))) {
        calculate_ble_schedule_timing(0x28000,0);
      }
      iVar1 = get_system_ready_state();
      if (iVar1 == 0) {
        if (param_1[0x106] == '\v') {
          *param_1 = '\x02';
        }
        else {
          if (param_1[0x106] != '\f') {
            if ((int)((uint)*(ushort *)(param_1 + 0x178) << 0x1a) < 0) {
              lVar16 = calculate_ble_connection_timing_with_validation();
              local_a4 = (uint)(lVar16 * 1000) >> 0xf |
                         (int)((ulonglong)(lVar16 * 1000) >> 0x20) * 0x20000;
              if (1000 < local_a4 - DAT_20007a94) {
                initialize_attitude_data_structure((undefined4 *)(param_1 + 0x28));
              }
              goto LAB_0000ffb4;
            }
            uVar2 = 0xccd;
            *param_1 = '\x01';
            goto LAB_0000ff38;
          }
          *param_1 = '\x01';
          handle_work_mode_finish(pcVar11,1);
          if (param_1[-0xe0f] != '\a') {
            sync_to_slave(pcVar11,1,0,0);
            iVar1 = get_system_byte_1();
            if (iVar1 == 2) {
              change_work_mode_to(3);
            }
          }
        }
        uVar2 = 0x8000;
      }
      else {
LAB_0000ffb4:
        iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0xc))
                          (*(int *)(param_1 + 0x1c),0x3a);
        if (iVar1 < 0) {
          uVar2 = 0x290;
        }
        else {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0x10))
                    (*(int *)(param_1 + 0x1c),3,&local_70);
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0x10))
                    (*(int *)(param_1 + 0x1c),7,&local_58);
          uVar17 = int_to_float_64bit_signed(local_6c);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_70);
          uVar17 = float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                                       (int)((ulonglong)uVar18 >> 0x20));
          float_multiply_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x40240000);
          fVar3 = (float)complex_float_conversion();
          uVar17 = int_to_float_64bit_signed(local_64);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_68);
          uVar17 = float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                                       (int)((ulonglong)uVar18 >> 0x20));
          float_multiply_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x40240000);
          fVar4 = (float)complex_float_conversion();
          uVar17 = int_to_float_64bit_signed(local_5c);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_60);
          uVar17 = float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                                       (int)((ulonglong)uVar18 >> 0x20));
          float_multiply_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x40240000);
          y = (float)complex_float_conversion();
          uVar17 = int_to_float_64bit_signed(local_54);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_58);
          float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                              (int)((ulonglong)uVar18 >> 0x20));
          uVar2 = complex_float_conversion();
          uVar17 = int_to_float_64bit_signed(local_4c);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_50);
          float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                              (int)((ulonglong)uVar18 >> 0x20));
          uVar5 = complex_float_conversion();
          uVar17 = int_to_float_64bit_signed(local_44);
          uVar17 = float_multiply_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x412e8480);
          uVar18 = int_to_float_64bit_signed(local_48);
          float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                              (int)((ulonglong)uVar18 >> 0x20));
          uVar6 = complex_float_conversion();
          *(int *)(param_1 + 0x198) = (int)fVar3;
          *(int *)(param_1 + 0x19c) = (int)fVar4;
          *(int *)(param_1 + 0x1a0) = (int)y;
          uVar17 = float_divide_64bit_complex(uVar2);
          float_add_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0x45a1cac1,0x3fadf3b6);
          q0 = (float)complex_float_conversion();
          uVar17 = float_divide_64bit_complex(uVar5);
          float_add_64bit_alt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0xa3d70a4,0x3fa0a3d7);
          q1 = (float)complex_float_conversion();
          uVar17 = float_divide_64bit_complex(uVar6);
          float_add_64bit((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0x47ae147b,0x3f847ae1);
          q2 = (float)complex_float_conversion();
          timing_data = param_1 + 0x28;
          update_timing_and_calculate_rate((int)timing_data);
          normalize_and_update_quaternion_attitude(q0,q1,q2,fVar3,fVar4,y,z,(int)timing_data);
          fVar3 = get_quaternion_component_scaled_with_offset((int)timing_data);
          local_a0[0] = fVar3;
          fVar4 = get_quaternion_component_scaled_alt((int)timing_data);
          local_a0[1] = fVar4;
          local_a0[2] = get_quaternion_component_scaled((int)timing_data);
          iVar13 = (int)(fVar4 * 100.0);
          iVar14 = (int)(fVar3 * 100.0);
          iVar15 = (int)(local_a0[2] * 100.0);
          SYSTEM_LEVEL_CONFIG = iVar15;
          SYSTEM_BASE_VALUE_CONFIG = iVar14;
          ATTITUDE_PITCH_VALUE = iVar13;
          iVar1 = get_system_ready_state();
          if ((iVar1 == 1) && (param_1[0x106] == '\v')) {
            *param_1 = '\x02';
LAB_0001021e:
            uVar2 = 0x148;
          }
          else {
            DAT_20007a94 = local_a4;
            DAT_20007ab4 = DAT_20007ab4 + 1;
            if (DAT_20007ab0 == '\0') {
              if (DAT_20007ab4 < 0xc9) goto LAB_0001021e;
              DAT_20007ab0 = '\x01';
              DAT_20007acc = local_a0[0];
              DAT_20007ad0 = local_a0[1];
              DAT_20007ad4 = local_a0[2];
            }
            calculate_work_mode_parameters(param_1);
            if ((byte)param_1[-0xe0f] == 0) {
              if (iVar13 < SYSTEM_PITCH_CONFIG) {
                iVar1 = SYSTEM_PITCH_CONFIG - iVar13;
              }
              else {
                iVar1 = iVar13 - SYSTEM_PITCH_CONFIG;
              }
              if (0x31 < iVar1) goto LAB_000102e0;
              SYSTEM_NAVIGATION_CONFIG = (uint)(byte)param_1[-0xe0f];
              SYSTEM_PITCH_CONFIG = iVar13;
              SendDashboardLockInfoToApp();
              goto LAB_0001027a;
            }
LAB_000102e0:
            SYSTEM_PITCH_CONFIG = iVar13;
            if (param_1[-0xe0f] == '\r') {
              param_1[-0xdf7] = '\f';
              param_1[-0xdf6] = '\0';
              *(float *)(param_1 + -0xdf5) = local_a0[0];
              *(float *)(param_1 + -0xdf1) = local_a0[1];
              *(float *)(param_1 + -0xded) = local_a0[2];
            }
            if (*param_1 == '\x02') {
              if ((iVar13 <= *(int *)(param_1 + 8) + 100) && (*(int *)(param_1 + 0xc) <= iVar13))
              goto LAB_00010734;
              SYSTEM_NAVIGATION_CONFIG = SYSTEM_NAVIGATION_CONFIG + 1;
              SYSTEM_LEVEL_CONFIG = iVar15;
              SYSTEM_BASE_VALUE_CONFIG = iVar14;
              ATTITUDE_PITCH_VALUE = iVar13;
              if ((int)SYSTEM_NAVIGATION_CONFIG < 2) goto LAB_0001027a;
              SYSTEM_NAVIGATION_CONFIG = 0xfffffffd;
              DISPLAY_UI_STATE = 1;
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("bow head################################################\n");
              }
              else {
                handle_heartbeat();
              }
              send_event_status(3);
              *param_1 = '\x01';
              if (((((param_1[-0xe0f] == '\t') || (param_1[-0xe0f] == '\f')) ||
                   (param_1[-0xe0f] == '\n')) ||
                  (((param_1[-0xe0f] == '\v' || (param_1[-0xe0f] == '\a')) ||
                   ((param_1[-0xe0f] == '\x0e' ||
                    ((param_1[-0xe0f] == '\x0f' || (param_1[-0xe0f] == '\x10')))))))) ||
                 ((param_1[-0xe0f] == '\x11' ||
                  (iVar1 = now_has_persist_task(pcVar11,param_1[-0xe0f]), iVar1 != 0)))) {
                DISPLAY_UI_STATE = 0;
                goto LAB_000103ea;
              }
              param_1[-0xe19] = param_1[-0xf];
              if (param_1[-0xe0f] == '\x01') {
                uVar2 = 8;
LAB_000106f2:
                sync_to_slave(pcVar11,uVar2,0,0);
              }
              else if (((param_1[0x1ab] == '\0') || (iVar1 = is_msg_expiration(), iVar1 != 1)) &&
                      (iVar1 = get_system_byte_2(), iVar1 == 0)) {
                uVar2 = 1;
                goto LAB_000106f2;
              }
              if ((param_1[0x1ab] == '\0') && (iVar1 = get_system_byte_2(), iVar1 == 0)) {
                update_task_status_and_clear_buffer(pcVar11,0);
              }
LAB_00010544:
              DISPLAY_UI_STATE = 0;
LAB_0001027a:
              if ((*param_1 == '\x01') && ((int)SYSTEM_NAVIGATION_CONFIG < 1)) {
                calculate_ble_connection_timing_with_validation();
                DAT_20007a88 = iVar13;
              }
            }
            else {
              if ((iVar13 <= *(int *)(param_1 + 8)) && (*(int *)(param_1 + 0xc) <= iVar13)) {
                SYSTEM_LEVEL_CONFIG = iVar15;
                SYSTEM_BASE_VALUE_CONFIG = iVar14;
                ATTITUDE_PITCH_VALUE = iVar13;
                calculate_ble_connection_timing_with_validation();
                SYSTEM_NAVIGATION_CONFIG = SYSTEM_NAVIGATION_CONFIG + 1;
                if (1 < (int)SYSTEM_NAVIGATION_CONFIG) {
                  SYSTEM_NAVIGATION_CONFIG = 0xfffffffd;
                  if ((param_1[-0xe0f] != '\0') || (iVar13 < DAT_20007a88)) {
                    DISPLAY_UI_STATE = 1;
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("look up################################################,screen_id is %d, pitch_y is %d, pitch_threshold_bow_head is %d, pitch_threshold_level is %d\n"
                                  ,(uint)(byte)param_1[-0xe0f],iVar13,*(undefined4 *)(param_1 + 8),
                                  (uint)(byte)param_1[0x10]);
                    }
                    else {
                      handle_heartbeat("look up################################################,screen_id is %d, pitch_y is %d, pitch_threshold_bow_head is %d, pitch_threshold_level is %d\n"
                                       ,param_1[-0xe0f],iVar13,*(undefined4 *)(param_1 + 8),
                                       (uint)(byte)param_1[0x10]);
                    }
                    iVar1 = 0x65;
                    while (((iVar14 = get_work_mode(), *(char *)(iVar14 + 0x108f) == '\0' &&
                            (DISPLAY_UI_CONFIG != '\0')) && (iVar1 = iVar1 + -1, iVar1 != 0))) {
                      calculate_ble_schedule_timing(0x148,0);
                    }
                    send_event_status(2);
                    if (((((param_1[-0xe0f] == '\t') || (param_1[-0xe0f] == '\f')) ||
                         ((param_1[-0xe0f] == '\n' ||
                          ((param_1[-0xe0f] == '\v' || (param_1[-0xe0f] == '\x05')))))) ||
                        (param_1[-0xe0f] == '\x04')) ||
                       ((((param_1[-0xe0f] == '\a' || (param_1[-0xe0f] == '\x0e')) ||
                         (param_1[-0xe0f] == '\x0f')) ||
                        ((param_1[-0xe0f] == '\x10' || (param_1[-0xe0f] == '\x11')))))) {
                      *param_1 = '\x02';
                      DISPLAY_UI_STATE = 0;
                      goto LAB_000103ea;
                    }
                    iVar1 = get_system_byte_2();
                    if (iVar1 == 0) {
                      iVar1 = get_pointer_value(&DASHBOARD_LOCK_STATUS);
                      if (iVar1 << 0x1e < 0) {
                        iVar1 = get_pointer_value(&DAT_20007aa0);
                        if (((-1 < iVar1 << 0x1e) &&
                            (iVar1 = get_pointer_value(&DASHBOARD_LOCK_CONTROL), -1 < iVar1 << 0x1e)
                            ) && (iVar1 = get_pointer_value(&DASHBOARD_LOCK_STATUS),
                                 iVar1 << 0x1e < 0)) {
                          local_7c = (float)CONCAT22(extraout_var,0x650);
                          local_78 = 0x101;
                          if (2 < LOG_LEVEL) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): send dashboard lock info to app ,status = %d \n",
                                          "handle_attitude_trigger",1);
                            }
                            else {
                              handle_heartbeat();
                            }
                          }
                          send_response_data_to_msgqueue(&local_7c,6);
                          enqueue_message_to_queue_with_work_mode_check();
                          DASHBOARD_LOCK_CONTROL = DASHBOARD_LOCK_CONTROL | 2;
                        }
                      }
                      else {
                        *param_1 = '\x02';
                        param_1[0x102] = '\x05';
                        param_1[-0xe19] = param_1[-0xf];
                        if (param_1[-0xee4] == '\x01') {
                          if (1 < LOG_LEVEL) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): master sync canvas_distance_gear:%d,raster_height_gear:%d\n"
                                          ,"handle_attitude_trigger",(uint)(byte)param_1[-0x23],
                                          (uint)(byte)param_1[-0x24]);
                            }
                            else {
                              handle_heartbeat("%s(): master sync canvas_distance_gear:%d,raster_height_gear:%d\n"
                                               ,"handle_attitude_trigger");
                            }
                          }
                          fVar3 = local_7c;
                          local_7c._3_1_ = SUB41(fVar3,3);
                          local_7c._0_3_ = CONCAT12(param_1[-0x24],CONCAT11(param_1[-0x23],0xb));
                          sync_to_slave(pcVar11,2,&local_7c,3);
                          cal_panel_canvas_coord(param_1 + -0x20,param_1 + -0x2c);
                        }
                        change_work_mode_to(2);
                        iVar1 = get_pointer_value(&DAT_20007aa0);
                        if (-1 < iVar1 << 0x1e) {
                          *extraout_r3 = *extraout_r3 | 2;
                        }
                      }
                    }
                    else {
                      *param_1 = '\x02';
                    }
                    goto LAB_00010544;
                  }
                }
                goto LAB_0001027a;
              }
LAB_00010734:
              if ((int)SYSTEM_NAVIGATION_CONFIG < 0) {
                SYSTEM_NAVIGATION_CONFIG = SYSTEM_NAVIGATION_CONFIG + 1;
                SYSTEM_LEVEL_CONFIG = iVar15;
                SYSTEM_BASE_VALUE_CONFIG = iVar14;
                ATTITUDE_PITCH_VALUE = iVar13;
              }
              else {
                SYSTEM_NAVIGATION_CONFIG = 0;
                SYSTEM_LEVEL_CONFIG = iVar15;
                SYSTEM_BASE_VALUE_CONFIG = iVar14;
                ATTITUDE_PITCH_VALUE = iVar13;
              }
            }
LAB_000103ea:
            iVar1 = 0;
            local_a0[3] = local_a0[0] - DAT_20007acc;
            local_a0[4] = local_a0[1] - DAT_20007ad0;
            local_a0[5] = local_a0[2] - DAT_20007ad4;
            local_a0[6] = 0.0;
            local_a0[7] = 0.0;
            local_a0[8] = 0.0;
            if (DAT_20007ab1 == '\x01') {
              pfVar7 = (float *)&local_7c;
              pfVar12 = local_a0 + 6;
              pfVar9 = &DAT_20007ad8;
              pfVar10 = local_a0;
              do {
                fVar3 = *pfVar10;
                pfVar10 = pfVar10 + 1;
                fVar3 = fVar3 - *pfVar9;
                if (180.0 < ABS(fVar3)) {
                  if (0.0 < fVar3) {
                    fVar3 = fVar3 - 360.0;
                  }
                  else {
                    fVar3 = fVar3 + 360.0;
                  }
                }
                *pfVar7 = fVar3;
                fVar3 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                iVar1 = iVar1 + 1;
                *pfVar12 = pfVar9[3] + fVar3;
                pfVar12 = pfVar12 + 1;
                pfVar9 = pfVar9 + 1;
              } while (iVar1 != 3);
              if (((0.1 < ABS(local_a0[0] - DAT_20007acc)) ||
                  (0.1 < ABS(local_a0[1] - DAT_20007ad0))) ||
                 (0.1 < ABS(local_a0[2] - DAT_20007ad4))) {
                DAT_20007abc = 0;
              }
              else {
                DAT_20007abc = DAT_20007abc + 1;
                if (4 < DAT_20007abc) {
                  DAT_20007ab1 = '\x02';
                  DAT_20007ae4 = local_a0[6];
                  DAT_20007ae8 = local_a0[7];
                  DAT_20007aec = local_a0[8];
                }
              }
            }
            else if (DAT_20007ab1 == '\x02') {
              DAT_20007ab8 = 0;
              DAT_20007abc = 0;
              DAT_20007ac0 = 0;
              DAT_20007ac4 = 0;
              DAT_20007ac8 = 0;
              DAT_20007ab1 = '\0';
            }
            else if (DAT_20007ab1 == '\0') {
              pfVar12 = (float *)&DAT_00088a44;
              pfVar7 = local_a0 + 3;
              piVar8 = &DAT_20007ac0;
              iVar1 = 0;
              iVar13 = 0;
              do {
                fVar4 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                fVar3 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                if (fVar3 < ABS(fVar4)) {
                  if (0.0 < fVar4) {
                    iVar14 = 1;
                  }
                  else {
                    iVar14 = -1;
                  }
                  iVar15 = *piVar8;
                  *piVar8 = iVar14;
                  if (iVar15 == iVar14) {
                    iVar1 = iVar1 + 1;
                  }
                }
                iVar13 = iVar13 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar13 != 3);
              if (iVar1 != 0) {
                if (DAT_20007ab8 == 0) {
                  DAT_20007ad8 = local_a0[0];
                  DAT_20007adc = local_a0[1];
                  DAT_20007ae0 = local_a0[2];
                  DAT_20007ab8 = 1;
                }
                else {
                  DAT_20007ab8 = DAT_20007ab8 + 1;
                  if (4 < DAT_20007ab8) {
                    DAT_20007ab1 = '\x01';
                  }
                }
              }
            }
            DAT_20007acc = local_a0[0];
            DAT_20007ad0 = local_a0[1];
            DAT_20007ad4 = local_a0[2];
            if (*param_1 == '\x02') {
              uVar2 = 0x4de;
            }
            else {
              uVar2 = 0xa3e;
            }
          }
        }
      }
LAB_0000ff38:
      calculate_ble_schedule_timing(uVar2,0);
    }
  }
  else if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): error\n\n","imu_fusion_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  return;
}


