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
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  undefined2 extraout_var;
  uint *extraout_r3;
  char *pcVar10;
  float *pfVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
    pcVar13 = param_1 + -0xee4;
    local_a4 = 0;
    while (param_1[0x15] != '\0') {
      while ((param_1[-0xee3] == '\x01' || (param_1[-0xee3] == '\b'))) {
        get_schedule_timing(0x28000,0);
      }
      iVar1 = get_system_ready_state();
      if (iVar1 == 0) {
        if (param_1[0x106] == '\v') {
          *param_1 = '\x02';
        }
        else {
          if (param_1[0x106] != '\f') {
            if ((int)((uint)*(ushort *)(param_1 + 0x178) << 0x1a) < 0) {
              lVar19 = thunk_FUN_00074f68();
              local_a4 = (uint)(lVar19 * 1000) >> 0xf |
                         (int)((ulonglong)(lVar19 * 1000) >> 0x20) * 0x20000;
              if (1000 < local_a4 - DAT_20007a94) {
                FUN_000265b8(param_1 + 0x28);
              }
              goto LAB_0000ffb4;
            }
            uVar2 = 0xccd;
            *param_1 = '\x01';
            goto LAB_0000ff38;
          }
          *param_1 = '\x01';
          handle_work_mode_finish(pcVar13,1);
          if (param_1[-0xe0f] != '\a') {
            sync_to_slave(pcVar13,1,0,0);
            iVar1 = FUN_00016940();
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
          uVar20 = FUN_0000d824(local_6c);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_70);
          uVar20 = FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                                (int)((ulonglong)uVar21 >> 0x20));
          FUN_0000d8f8((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x40240000);
          fVar3 = (float)FUN_0000dee8();
          uVar20 = FUN_0000d824(local_64);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_68);
          uVar20 = FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                                (int)((ulonglong)uVar21 >> 0x20));
          FUN_0000d8f8((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x40240000);
          fVar4 = (float)FUN_0000dee8();
          uVar20 = FUN_0000d824(local_5c);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_60);
          uVar20 = FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                                (int)((ulonglong)uVar21 >> 0x20));
          FUN_0000d8f8((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x40240000);
          fVar5 = (float)FUN_0000dee8();
          uVar20 = FUN_0000d824(local_54);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_58);
          FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                       (int)((ulonglong)uVar21 >> 0x20));
          uVar2 = FUN_0000dee8();
          uVar20 = FUN_0000d824(local_4c);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_50);
          FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                       (int)((ulonglong)uVar21 >> 0x20));
          uVar6 = FUN_0000dee8();
          uVar20 = FUN_0000d824(local_44);
          uVar20 = float_multiply_64bit((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,0x412e8480);
          uVar21 = FUN_0000d824(local_48);
          FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
                       (int)((ulonglong)uVar21 >> 0x20));
          uVar7 = FUN_0000dee8();
          *(int *)(param_1 + 0x198) = (int)fVar3;
          *(int *)(param_1 + 0x19c) = (int)fVar4;
          *(int *)(param_1 + 0x1a0) = (int)fVar5;
          uVar20 = FUN_0000d848(uVar2);
          FUN_0000d588((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x45a1cac1,0x3fadf3b6);
          uVar2 = FUN_0000dee8();
          uVar20 = FUN_0000d848(uVar6);
          FUN_0000d58c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0xa3d70a4,0x3fa0a3d7);
          uVar6 = FUN_0000dee8();
          uVar20 = FUN_0000d848(uVar7);
          FUN_0000d588((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x47ae147b,0x3f847ae1);
          uVar7 = FUN_0000dee8();
          pcVar10 = param_1 + 0x28;
          uVar15 = FUN_000267ac(pcVar10);
          FUN_00026624(uVar2,uVar6,uVar7,fVar3,fVar4,fVar5,uVar15,pcVar10);
          fVar3 = (float)FUN_00026828(pcVar10);
          local_a0[0] = fVar3;
          fVar4 = (float)FUN_00026808(pcVar10);
          local_a0[1] = fVar4;
          local_a0[2] = (float)FUN_000267e8(pcVar10);
          iVar16 = (int)(fVar4 * 100.0);
          iVar17 = (int)(fVar3 * 100.0);
          iVar18 = (int)(local_a0[2] * 100.0);
          DAT_20007aa4 = iVar18;
          DAT_20007aa8 = iVar17;
          ATTITUDE_PITCH_VALUE = iVar16;
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
            FUN_00025ecc(param_1);
            if ((byte)param_1[-0xe0f] == 0) {
              if (iVar16 < DAT_20007a90) {
                iVar1 = DAT_20007a90 - iVar16;
              }
              else {
                iVar1 = iVar16 - DAT_20007a90;
              }
              if (0x31 < iVar1) goto LAB_000102e0;
              DAT_20007a8c = (uint)(byte)param_1[-0xe0f];
              DAT_20007a90 = iVar16;
              SendDashboardLockInfoToApp();
              goto LAB_0001027a;
            }
LAB_000102e0:
            DAT_20007a90 = iVar16;
            if (param_1[-0xe0f] == '\r') {
              param_1[-0xdf7] = '\f';
              param_1[-0xdf6] = '\0';
              *(float *)(param_1 + -0xdf5) = local_a0[0];
              *(float *)(param_1 + -0xdf1) = local_a0[1];
              *(float *)(param_1 + -0xded) = local_a0[2];
            }
            if (*param_1 == '\x02') {
              if ((iVar16 <= *(int *)(param_1 + 8) + 100) && (*(int *)(param_1 + 0xc) <= iVar16))
              goto LAB_00010734;
              DAT_20007a8c = DAT_20007a8c + 1;
              DAT_20007aa4 = iVar18;
              DAT_20007aa8 = iVar17;
              ATTITUDE_PITCH_VALUE = iVar16;
              if ((int)DAT_20007a8c < 2) goto LAB_0001027a;
              DAT_20007a8c = 0xfffffffd;
              DAT_20018d96 = 1;
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
                  (iVar1 = now_has_persist_task(pcVar13,param_1[-0xe0f]), iVar1 != 0)))) {
                DAT_20018d96 = 0;
                goto LAB_000103ea;
              }
              param_1[-0xe19] = param_1[-0xf];
              if (param_1[-0xe0f] == '\x01') {
                uVar2 = 8;
LAB_000106f2:
                sync_to_slave(pcVar13,uVar2,0,0);
              }
              else if (((param_1[0x1ab] == '\0') || (iVar1 = is_msg_expiration(), iVar1 != 1)) &&
                      (iVar1 = FUN_00023eec(), iVar1 == 0)) {
                uVar2 = 1;
                goto LAB_000106f2;
              }
              if ((param_1[0x1ab] == '\0') && (iVar1 = FUN_00023eec(), iVar1 == 0)) {
                FUN_0007cdb6(pcVar13,0);
              }
LAB_00010544:
              DAT_20018d96 = 0;
LAB_0001027a:
              if ((*param_1 == '\x01') && ((int)DAT_20007a8c < 1)) {
                thunk_FUN_00074f68();
                DAT_20007a88 = iVar16;
              }
            }
            else {
              if ((iVar16 <= *(int *)(param_1 + 8)) && (*(int *)(param_1 + 0xc) <= iVar16)) {
                DAT_20007aa4 = iVar18;
                DAT_20007aa8 = iVar17;
                ATTITUDE_PITCH_VALUE = iVar16;
                thunk_FUN_00074f68();
                DAT_20007a8c = DAT_20007a8c + 1;
                if (1 < (int)DAT_20007a8c) {
                  DAT_20007a8c = 0xfffffffd;
                  if ((param_1[-0xe0f] != '\0') || (iVar16 < DAT_20007a88)) {
                    DAT_20018d96 = 1;
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("look up################################################,screen_id is %d, pitch_y is %d, pitch_threshold_bow_head is %d, pitch_threshold_level is %d\n"
                                  ,(uint)(byte)param_1[-0xe0f],iVar16,*(undefined4 *)(param_1 + 8),
                                  (uint)(byte)param_1[0x10]);
                    }
                    else {
                      handle_heartbeat("look up################################################,screen_id is %d, pitch_y is %d, pitch_threshold_bow_head is %d, pitch_threshold_level is %d\n"
                                       ,param_1[-0xe0f],iVar16,*(undefined4 *)(param_1 + 8),
                                       (uint)(byte)param_1[0x10]);
                    }
                    iVar1 = 0x65;
                    while (((iVar17 = get_work_mode(), *(char *)(iVar17 + 0x108f) == '\0' &&
                            (DAT_20018d98 != '\0')) && (iVar1 = iVar1 + -1, iVar1 != 0))) {
                      get_schedule_timing(0x148,0);
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
                      DAT_20018d96 = 0;
                      goto LAB_000103ea;
                    }
                    iVar1 = FUN_00023eec();
                    if (iVar1 == 0) {
                      iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_STATUS);
                      if (iVar1 << 0x1e < 0) {
                        iVar1 = FUN_0007ca4e(&DAT_20007aa0);
                        if (((-1 < iVar1 << 0x1e) &&
                            (iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_CONTROL), -1 < iVar1 << 0x1e)) &&
                           (iVar1 = FUN_0007ca4e(&DASHBOARD_LOCK_STATUS), iVar1 << 0x1e < 0)) {
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
                          FUN_00047ba8();
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
                          sync_to_slave(pcVar13,2,&local_7c,3);
                          cal_panel_canvas_coord(param_1 + -0x20,param_1 + -0x2c);
                        }
                        change_work_mode_to(2);
                        iVar1 = FUN_0007ca4e(&DAT_20007aa0);
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
              if ((int)DAT_20007a8c < 0) {
                DAT_20007a8c = DAT_20007a8c + 1;
                DAT_20007aa4 = iVar18;
                DAT_20007aa8 = iVar17;
                ATTITUDE_PITCH_VALUE = iVar16;
              }
              else {
                DAT_20007a8c = 0;
                DAT_20007aa4 = iVar18;
                DAT_20007aa8 = iVar17;
                ATTITUDE_PITCH_VALUE = iVar16;
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
              pfVar8 = (float *)&local_7c;
              pfVar14 = local_a0 + 6;
              pfVar11 = &DAT_20007ad8;
              pfVar12 = local_a0;
              do {
                fVar3 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                fVar3 = fVar3 - *pfVar11;
                if (180.0 < ABS(fVar3)) {
                  if (0.0 < fVar3) {
                    fVar3 = fVar3 - 360.0;
                  }
                  else {
                    fVar3 = fVar3 + 360.0;
                  }
                }
                *pfVar8 = fVar3;
                fVar3 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                iVar1 = iVar1 + 1;
                *pfVar14 = pfVar11[3] + fVar3;
                pfVar14 = pfVar14 + 1;
                pfVar11 = pfVar11 + 1;
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
              pfVar14 = (float *)&DAT_00088a44;
              pfVar8 = local_a0 + 3;
              piVar9 = &DAT_20007ac0;
              iVar1 = 0;
              iVar16 = 0;
              do {
                fVar4 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                fVar3 = *pfVar14;
                pfVar14 = pfVar14 + 1;
                if (fVar3 < ABS(fVar4)) {
                  if (0.0 < fVar4) {
                    iVar17 = 1;
                  }
                  else {
                    iVar17 = -1;
                  }
                  iVar18 = *piVar9;
                  *piVar9 = iVar17;
                  if (iVar18 == iVar17) {
                    iVar1 = iVar1 + 1;
                  }
                }
                iVar16 = iVar16 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar16 != 3);
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
      get_schedule_timing(uVar2,0);
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


