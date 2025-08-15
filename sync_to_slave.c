/*
 * Function: sync_to_slave
 * Entry:    00026f74
 * Prototype: undefined sync_to_slave()
 */


uint sync_to_slave(char *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  char *format_str;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  ushort uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  undefined4 *puVar16;
  bool bVar17;
  longlong lVar18;
  undefined4 local_124;
  undefined1 uStack_120;
  undefined4 local_11f;
  undefined2 local_11b;
  char local_119;
  undefined4 local_118 [3];
  char local_10c [232];
  
  local_124 = 0;
  fill_memory_buffer(&uStack_120,0,0xf8);
  uVar12 = **(undefined4 **)(param_1 + 0xfec);
  iVar6 = get_system_byte_1();
  if ((((iVar6 == 1) || (iVar6 = get_work_mode(), *(char *)(iVar6 + 1) == '\b')) ||
      (iVar6 = get_system_ready_state(), iVar6 == 1)) || (*param_1 == '\x02')) {
    uVar13 = 0;
    goto LAB_00026fa0;
  }
  lVar18 = calculate_mathematical_operation_with_bit_shifting();
  plVar7 = (longlong *)(param_1 + 0x1060);
  if ((int)*plVar7 == 0 && *(int *)(param_1 + 0x1064) == 0) {
LAB_0002700e:
    if ((param_2 != 0xc) ||
       ((int)(uint)((uint)(lVar18 - *plVar7) < 1000) <= (int)((ulonglong)(lVar18 - *plVar7) >> 0x20)
       )) {
      uVar14 = 500;
      goto LAB_00027008;
    }
    uVar13 = 10;
LAB_00027396:
    *(longlong *)(param_1 + 0x1060) = lVar18;
  }
  else {
    uVar13 = (uint)(lVar18 - *plVar7);
    iVar6 = (int)((ulonglong)(lVar18 - *plVar7) >> 0x20);
    if ((int)(uint)(uVar13 < 0x1389) <= iVar6) goto LAB_0002700e;
    if (param_2 == 0xc) {
      if (iVar6 < (int)(uint)(uVar13 < 1000)) {
        uVar13 = 10;
        goto LAB_00026fa0;
      }
      uVar14 = 3000;
    }
    else {
      uVar14 = 3000;
      if (param_2 == 0) {
        uVar14 = 5000;
      }
    }
LAB_00027008:
    uVar15 = 0x1f5;
    while ((uVar11 = (ushort)PERSISTENT_TASK_STATUS_MANAGER, PERSISTENT_TASK_STATUS_MANAGER != 0 &&
           (uVar15 = uVar15 - 1, uVar11 = uVar15, uVar15 != 0))) {
      delay_with_timing(1);
    }
    while (SLAVE_SYNCHRONIZATION_STATE_DATA != '\0') {
      delay_with_timing(1);
      uVar11 = uVar11 + 1;
    }
    uVar13 = (uint)DAT_2000302b;
    bVar3 = (byte)param_2;
    if ((uVar11 == 0) || (uVar13 != param_2)) {
      if (uVar13 == 1) {
        if (param_2 == 0) {
          if (0 < LOG_LEVEL) {
            format_str = "%s(): ESB send data after suspend cmd, ignore it.\n";
LAB_000270b8:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(format_str,"sync_to_slave");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          if (param_1[0xd5] == '\x06') {
            if (param_2 != 1) goto LAB_00027148;
            bVar5 = bVar3;
            if (499 < SLAVE_SYNC_BUFFER) goto LAB_000270da;
          }
          else {
            bVar17 = param_2 == 1;
LAB_000270e0:
            if (!bVar17) goto LAB_00027148;
            if (499 < SLAVE_SYNC_BUFFER) goto LAB_0002709c;
          }
LAB_000270ec:
          if (0 < LOG_LEVEL) {
            format_str = "%s(): ESB send same cmd, ignore it %d.\n";
            goto LAB_0002707a;
          }
        }
      }
      else {
        if ((param_1[0xd5] != '\x06') || (uVar13 != 2)) {
          if (param_2 == 0) goto LAB_0002709c;
          if (uVar13 == param_2) {
            if ((param_2 != 7) && (4 < param_2 - 0xc)) {
              if (SLAVE_SYNC_BUFFER < 500) goto LAB_000270ec;
              goto LAB_00027148;
            }
            SLAVE_SYNCHRONIZATION_STATE_DATA = 1;
          }
          else {
LAB_00027148:
            SLAVE_SYNCHRONIZATION_STATE_DATA = 1;
            bVar5 = SLAVE_SYNCHRONIZATION_STATE_DATA;
            if ((int)param_2 < 3) goto LAB_000270da;
          }
          goto LAB_00027156;
        }
        if (param_2 != 0) {
          bVar17 = param_2 == 2;
          goto LAB_000270e0;
        }
        if (0 < LOG_LEVEL) {
          format_str = "%s(): ESB send data after resume cmd, ignore it.\n";
          goto LAB_000270b8;
        }
      }
LAB_0002708e:
      DAT_2000302b = 0;
    }
    else {
      if (param_2 != 0) {
        if (0 < LOG_LEVEL) {
          format_str = "%s(): ESB send same type cmd %d, exit\n";
LAB_0002707a:
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(format_str,"sync_to_slave",param_2);
          }
          else {
            handle_heartbeat();
          }
        }
        goto LAB_0002708e;
      }
LAB_0002709c:
      SLAVE_SYNCHRONIZATION_STATE_DATA = 1;
      bVar5 = SLAVE_SYNCHRONIZATION_STATE_DATA;
LAB_000270da:
      SLAVE_SYNCHRONIZATION_STATE_DATA = bVar5;
      DAT_2000302b = bVar3;
LAB_00027156:
      cVar1 = param_1[0xda];
      if (param_1[0xd5] == '\n') {
        cVar2 = *(char *)(*(int *)(param_1 + 0x1000) + 7);
      }
      else {
        cVar2 = param_1[0xee4];
      }
      param_1[0xda] = cVar1 + '\x01';
      param_1[0xd4] = bVar3 & 0x3f | cVar2 << 6;
      param_1[0xc9] = param_1[0xc9] & 0x3fU | 0x40;
      *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(param_1 + 0x1072);
      *(short *)(param_1 + 0xd8) =
           (short)*(undefined4 *)(param_1 + 0xeb8) + *(short *)(param_1 + 0x1074);
      local_124 = CONCAT31(local_124._1_3_,2);
      uVar8 = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xd0) = uVar12;
      if ((param_3 == (undefined4 *)0x0) || (param_4 == 0)) {
        uVar9 = 0;
LAB_000271d0:
        *(undefined4 *)(param_1 + 0xe5) = uVar9;
      }
      else {
        if (4 < param_4) {
          uVar9 = *param_3;
          goto LAB_000271d0;
        }
        memcpy(param_1 + 0xe5,param_3,param_4);
      }
      local_124._1_3_ = (undefined3)*(undefined4 *)(param_1 + 0xc9);
      uStack_120 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc9) >> 0x18);
      local_11f = *(undefined4 *)(param_1 + 0xcd);
      local_11b = *(undefined2 *)(param_1 + 0xd1);
      local_119 = param_1[0xd3];
      format_str = param_1 + 0xd4;
      puVar4 = local_118;
      do {
        puVar16 = puVar4;
        pcVar10 = format_str;
        uVar9 = *(undefined4 *)(pcVar10 + 4);
        format_str = pcVar10 + 8;
        *puVar16 = *(undefined4 *)pcVar10;
        puVar16[1] = uVar9;
        puVar4 = puVar16 + 2;
      } while (format_str != param_1 + 0xe4);
      puVar16[2] = *(undefined4 *)format_str;
      *(char *)(puVar16 + 3) = pcVar10[0xc];
      param_1[0x105a] = '\x01';
      bVar3 = param_1[0xec];
      if (((bVar3 == 6) || (bVar3 == 0)) || (param_2 != 0)) {
LAB_00027372:
        (**(code **)(param_1 + 0x774))(&local_124,0x21);
        uVar13 = 0;
        while (param_1[0x105a] != '\x02') {
          uVar13 = uVar13 + 1 & 0xffff;
          if (uVar13 == uVar14) {
            uVar13 = uVar14;
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): sync to slave failed!!!!!! wait_count %d\n","sync_to_slave",
                            uVar14);
              }
              else {
                handle_heartbeat();
              }
              if (param_1[0x105a] == '\x02') break;
            }
            set_work_mode_timestamp(uVar8);
            goto LAB_00027390;
          }
          delay_with_timing(1);
        }
        set_work_mode_timestamp(uVar12);
LAB_00027390:
        if (uVar14 <= uVar13) goto LAB_00026fa0;
        goto LAB_00027396;
      }
      cVar2 = param_1[0xee4];
      if (param_1[0xeb] == cVar2) {
        if (param_1[0xd5] == '\x10') {
          if ((param_1[0xe9] == param_1[0xcc]) && (param_1[0xce] == '\0')) {
            if (cVar2 != '\x02') goto LAB_00027304;
            goto LAB_000273f0;
          }
          param_1[0xda] = cVar1;
          if (0 < LOG_LEVEL) {
            format_str = "%s(): ESB send even ai is changed or receiving, ignore it.\n";
            goto LAB_00027298;
          }
        }
        else if (param_1[0xeb] == '\x02') {
          if (param_1[0xcc] == param_1[0xe9]) {
            if (param_1[0xce] == '\0') goto LAB_000273f0;
            param_1[0xda] = cVar1;
            if (0 < LOG_LEVEL) {
              format_str = "%s(): ESB send up package is receiving, ignore it.\n";
              goto LAB_00027298;
            }
          }
          else {
            param_1[0xda] = cVar1;
            if (0 < LOG_LEVEL) {
              format_str = "%s(): ESB send up package is changed, ignore it.\n";
              goto LAB_00027298;
            }
          }
        }
        else {
LAB_00027304:
          if (cVar2 == '\x01') {
            if (param_1[0xea] == param_1[0xcd]) {
              if (param_1[0xcf] == '\0') goto LAB_000273f0;
              param_1[0xda] = cVar1;
              if (0 < LOG_LEVEL) {
                format_str = "%s(): ESB send down package is receiving, ignore it.\n";
                goto LAB_00027298;
              }
            }
            else {
              param_1[0xda] = cVar1;
              if (0 < LOG_LEVEL) {
                format_str = "%s(): ESB send down package is changed, ignore it.\n";
                goto LAB_00027298;
              }
            }
          }
          else {
LAB_000273f0:
            if (((bVar3 == param_1[0xd5]) || ((byte)param_1[0xd5] < 7)) || (bVar3 < 7))
            goto LAB_00027372;
            param_1[0xda] = cVar1;
            if (0 < LOG_LEVEL) {
              format_str = "%s(): ESB send package id is changed, ignore it.\n";
LAB_00027298:
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(format_str,"sync_to_slave");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
      }
      else {
        param_1[0xda] = cVar1;
        if (0 < LOG_LEVEL) {
          format_str = "%s(): ESB send imu status is changed, ignore it.\n";
          goto LAB_00027298;
        }
      }
    }
    uVar13 = 5000;
  }
LAB_00026fa0:
  SLAVE_SYNC_BUFFER = (short)uVar13;
  SLAVE_SYNCHRONIZATION_STATE_DATA = 0;
  return uVar13;
}


