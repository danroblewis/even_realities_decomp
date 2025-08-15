/*
 * Function: ble_process_put_req
 * Entry:    0001a75c
 * Prototype: undefined __stdcall ble_process_put_req(undefined4 param_1, byte * packet, undefined4 param_3)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_process_put_req(int param_1,byte *packet,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined3 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 return_status;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  int iVar27;
  bool bVar28;
  undefined8 uVar29;
  uint local_154;
  uint local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_13c [2];
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 local_12f;
  undefined2 uStack_12e;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined2 local_12a;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined4 *puVar11;
  byte packets;
  
  puVar25 = *(undefined4 **)(param_1 + 0x10);
  iVar17 = param_1 + -0x77c;
  _local_13c = 0;
  fill_memory_buffer(&local_138,0,0x10);
  uVar6 = _local_13c;
  puVar10 = puVar25 + 1;
  *puVar25 = *(undefined4 *)packet;
  *(uint *)(param_1 + 0x14) = *(ushort *)(packet + 2) + 4;
  packets = *packet;
  _local_13c = CONCAT31(stack0xfffffec5,packets);
  uVar22 = _local_13c;
  _uStack_13a = SUB42(uVar6,2);
  uVar4 = local_138._1_3_;
  _local_13c = uVar22;
  switch(packets) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 0xb:
  case 0x14:
    memcpy(puVar10,(int)param_3 + 1,*(ushort *)(packet + 2) - 1);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(0x9b9bd,0x9e077,(uint)*(byte *)(puVar25 + 1),(uint)*(byte *)((int)puVar25 + 5),
                    (uint)*(byte *)((int)puVar25 + 6),(uint)*(byte *)((int)puVar25 + 7));
      }
      else {
        handle_heartbeat();
      }
    }
    spi_master_transaction_debug(param_1,&local_128,8);
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 4:
    handle_whitelist_app_from_app(param_1,puVar10,param_3,packet[2],local_13c);
    break;
  case 6:
    uVar1 = *(ushort *)((int)param_3 + 1);
    uVar23 = (uint)uVar1;
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 == uVar9) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(0x9bb5d,0x9e077,(uint)*(byte *)((int)param_3 + 3));
        }
        else {
          handle_heartbeat();
        }
      }
      switch(*(undefined1 *)(param_3 + 1)) {
      case 1:
        uVar26 = *(undefined4 *)((int)param_3 + 9);
        uVar22 = *(undefined4 *)((int)param_3 + 0xd);
        set_system_timestamp(uVar26,uVar22);
        uVar6 = *(undefined4 *)((int)param_3 + 5);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(0x9bb7a,0x9e077,uVar26,uVar22,uVar6);
          }
          else {
            handle_heartbeat(0x9bb7a,0x9e077,uVar26,uVar22);
          }
        }
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 4) = *(undefined1 *)((int)param_3 + 0x11);
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 5) = *(undefined1 *)((int)param_3 + 0x12);
        **(undefined4 **)(param_1 + 0x870) = uVar6;
        iVar17 = *(int *)(param_1 + 0x870);
        *(undefined4 *)(iVar17 + 6) = uVar26;
        *(undefined4 *)(iVar17 + 10) = uVar22;
        local_128 = 0;
        local_124 = 0;
        local_120 = 0;
        unix_timestamp_to_datetime(uVar6,&local_128);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(0x9bbb9,0x9e077,uVar6,local_128 & 0xffff,local_128 >> 0x10,
                        local_124 & 0xffff,local_124 >> 0x10,local_120 & 0xffff,local_120 >> 0x10);
          }
          else {
            handle_heartbeat();
          }
        }
        update_timer_interval(*(undefined4 *)(param_1 + 0x870),0,1);
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 0x5d) = *(undefined1 *)((int)param_3 + 0x13);
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 0x5e) = *(undefined1 *)(param_3 + 5);
        if (2 < LOG_LEVEL) {
          cVar5 = *(char *)(*(int *)(param_1 + 0x870) + 0x5e);
          if (IS_DEBUG == 0) {
            iVar17 = 0x9b9ab;
            if (cVar5 != '\0') {
              iVar17 = 0x9b99d;
            }
            iVar7 = 0x9b9a8;
            if (cVar5 != '\0') {
              iVar7 = 0x9b99a;
            }
            DEBUG_PRINT(0x9bbe8,0x9e077,iVar7,iVar17);
          }
          else {
            iVar17 = 0x9b99d;
            if (cVar5 == '\0') {
              iVar17 = 0x9b9ab;
            }
            iVar7 = 0x9b99a;
            if (cVar5 == '\0') {
              iVar7 = 0x9b9a8;
            }
            handle_heartbeat(0x9bbe8,0x9e077,iVar7,iVar17);
          }
        }
        load_work_mode_settings();
        initialize_config_signature();
        fill_memory_buffer((int)&local_138 + 1,0,0xf);
        _local_13c = *param_3;
        local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        break;
      case 2:
        fill_memory_buffer((int)&local_138 + 1,0,0xf);
        _local_13c = *param_3;
        local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        break;
      case 3:
        uVar2 = *(ushort *)((int)param_3 + 5);
        uVar18 = (uint)uVar2;
        uVar9 = (uint)*(ushort *)((int)param_3 + 7);
        if (uVar18 == 1) {
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = *(undefined1 *)((int)param_3 + 9);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = *(undefined1 *)((int)param_3 + 10);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x66) = *(undefined1 *)((int)param_3 + 0xb);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(0x9bc2d,0x9e077,(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                          (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
            }
            else {
              handle_heartbeat(0x9bc2d,0x9e077);
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                iVar17 = get_work_mode();
                DEBUG_PRINT(0x9bc6f,0x9e077,(uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x66));
              }
              else {
                iVar17 = get_work_mode();
                handle_heartbeat(0x9bc6f,0x9e077,*(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x66));
              }
            }
          }
          iVar17 = get_work_mode();
          if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x66) != '\x03') {
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
          packets = *(byte *)(param_3 + 3);
          uVar9 = (uint)packets;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(0x9bc91,0x9e077,uVar9);
            }
            else {
              handle_heartbeat();
            }
          }
          pcVar20 = (char *)((int)param_3 + 0xd);
          if (uVar9 < 9) {
            iVar17 = 0x200119da;
            local_154 = 0;
            while( true ) {
              if (uVar9 == local_154) {
                iVar17 = get_work_mode();
                *(byte *)(*(int *)(iVar17 + 0xfec) + 0x67) = packets;
                uStack_133 = 0;
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT(0x9bd3d,0x9e077);
                return;
              }
              if (*pcVar20 != '\x01') break;
              if ((0x40 < (byte)pcVar20[1]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(0x9bcd9,0x9e077);
                }
                else {
                  handle_heartbeat();
                }
              }
              fill_memory_buffer(0x20011979,0,0x408);
              bVar8 = pcVar20[1];
              iVar7 = iVar17 + -0x60;
              if (0x3f < bVar8) {
                bVar8 = 0x40;
              }
              memcpy(iVar7,pcVar20 + 2,bVar8);
              uVar23 = (uint)(byte)pcVar20[1];
              iVar21 = uVar23 + 2;
              if (pcVar20[iVar21] != '\x02') {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT(0x9bd8b,0x9e077);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT(0x9bd3d,0x9e077);
                return;
              }
              if ((0x20 < (byte)pcVar20[uVar23 + 3]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule time data format error!!!\n",0x9e077);
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar24 = iVar17 + -0x20;
              bVar8 = pcVar20[uVar23 + 3];
              if (0x1f < bVar8) {
                bVar8 = 0x20;
              }
              memcpy(iVar24,pcVar20 + uVar23 + 4,bVar8);
              iVar14 = (byte)pcVar20[uVar23 + 3] + 2 + iVar21;
              if (pcVar20[(byte)pcVar20[uVar23 + 3] + 2 + iVar21] != '\x03') {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): schedule time data struct error, error type = %d\n",
                                "ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                return;
              }
              if ((0x20 < (byte)pcVar20[iVar14 + 1]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule location data format error!!!\n",0x9e077);
                }
                else {
                  handle_heartbeat();
                }
              }
              *(undefined1 *)(iVar17 + -0x61) = 1;
              bVar8 = pcVar20[iVar14 + 1];
              if (0x1f < bVar8) {
                bVar8 = 0x20;
              }
              memcpy(iVar17,pcVar20 + iVar14 + 2,bVar8);
              pcVar20 = pcVar20 + (byte)pcVar20[iVar14 + 1] + 2 + iVar14;
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule title : %s , time :%s , location : %s \n",0x9e077,
                              iVar7,iVar24,iVar17);
                }
                else {
                  handle_heartbeat("%s(): schedule title : %s , time :%s , location : %s \n",0x9e077
                                   ,iVar7,iVar24);
                }
              }
              iVar17 = iVar17 + 0x81;
              local_154 = local_154 + 1 & 0xff;
            }
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(0x9bd04,0x9e077);
              }
              else {
                handle_heartbeat();
              }
            }
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT(0x9bd3d,0x9e077);
            return;
          }
        }
        else {
          if (uVar9 == 1) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Action ID = 1,Received schedule multiple initialization packets, currently the first packet of data\n"
                            ,"ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
            SCHEDULE_PACKET_COUNTER = 0;
            SCHEDULE_TOTAL_PACKETS = 0;
            SCHEDULE_DATA_OFFSET = 0;
            fill_memory_buffer(&SCHEDULE_DATA_BUFFER,0,0x420);
            validate_memory_bounds(&SCHEDULE_DATA_BUFFER,(int)param_3 + 9,uVar23 - 9,0x420);
            _local_13c = *param_3;
            local_138 = param_3[1];
            SCHEDULE_DATA_OFFSET = SCHEDULE_DATA_OFFSET + -9 + uVar1;
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            SCHEDULE_PACKET_COUNTER = SCHEDULE_PACKET_COUNTER + 1;
            local_134 = *(undefined1 *)(param_3 + 2);
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            SCHEDULE_TOTAL_PACKETS = uVar2;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
          if (uVar9 < uVar18) {
            if ((uint)SCHEDULE_PACKET_COUNTER == uVar9 - 1) {
              memcpy(&SCHEDULE_DATA_BUFFER + SCHEDULE_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
              _local_13c = *param_3;
              SCHEDULE_DATA_OFFSET = (SCHEDULE_DATA_OFFSET - 9) + uVar1;
              local_138 = param_3[1];
              SCHEDULE_PACKET_COUNTER = SCHEDULE_PACKET_COUNTER + 1;
              uStack_133 = 0;
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              local_134 = *(undefined1 *)(param_3 + 2);
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if (-1 < iVar17) {
                return;
              }
              if (LOG_LEVEL < 1) {
                return;
              }
              if (IS_DEBUG != 0) {
                handle_heartbeat();
                return;
              }
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              return;
            }
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,SCHEDULE_PACKET_COUNTER + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req",uVar9,SCHEDULE_PACKET_COUNTER + 1);
              }
            }
            SCHEDULE_TOTAL_PACKETS = 0;
            SCHEDULE_PACKET_COUNTER = 0;
            fill_memory_buffer(&SCHEDULE_DATA_BUFFER,0,0x420);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
          if (uVar9 != uVar18) {
            return;
          }
          if (((uint)SCHEDULE_PACKET_COUNTER != uVar9 - 1) || (SCHEDULE_TOTAL_PACKETS != uVar9)) {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,SCHEDULE_PACKET_COUNTER + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req",uVar9,SCHEDULE_PACKET_COUNTER + 1);
              }
            }
            SCHEDULE_TOTAL_PACKETS = 0;
            SCHEDULE_PACKET_COUNTER = 0;
            fill_memory_buffer(&SCHEDULE_DATA_BUFFER,0,0x420);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
          memcpy(&SCHEDULE_DATA_BUFFER + SCHEDULE_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
          SCHEDULE_DATA_OFFSET = (SCHEDULE_DATA_OFFSET - 9) + uVar1;
          SCHEDULE_PACKET_COUNTER = SCHEDULE_PACKET_COUNTER + 1;
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = SCHEDULE_DATA_BUFFER;
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = QUICKNOTE_DISPLAY_MODE;
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x66) = QUICKNOTE_CUSTOM_AREA_VALUE;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                          "ble_process_put_req",(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                          (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
            }
            else {
              handle_heartbeat("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                               "ble_process_put_req");
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                iVar17 = get_work_mode();
                DEBUG_PRINT("%s(): schedule display mode = %d\n","ble_process_put_req",
                            (uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x66));
              }
              else {
                iVar17 = get_work_mode();
                handle_heartbeat("%s(): schedule display mode = %d\n","ble_process_put_req",
                                 *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x66));
              }
            }
          }
          iVar17 = get_work_mode();
          packets = QUICKNOTE_DATA_LENGTH;
          if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x66) != '\x03') {
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
          uVar9 = (uint)QUICKNOTE_DATA_LENGTH;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): schedule record num = %d\n","ble_process_put_req",uVar9);
            }
            else {
              handle_heartbeat();
            }
          }
          if (uVar9 < 9) {
            puVar12 = &QUICKNOTE_OPERATION_BUFFER;
            pcVar20 = &QUICKNOTE_DATA_BUFFER;
            local_150 = 0;
            while( true ) {
              if (uVar9 == local_150) {
                iVar17 = get_work_mode();
                *(byte *)(*(int *)(iVar17 + 0xfec) + 0x67) = packets;
                uStack_133 = 0;
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                return;
              }
              if (*pcVar20 != '\x01') break;
              if ((0x40 < (byte)pcVar20[1]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule title data format error!!!\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
              fill_memory_buffer(puVar12,0,0x81);
              uVar18 = (uint)(byte)pcVar20[1];
              uVar23 = uVar18;
              if (0x3f < uVar18) {
                uVar23 = 0x40;
              }
              memcpy(puVar12 + 1,pcVar20 + 2,uVar23);
              iVar17 = uVar18 + 2;
              if (pcVar20[iVar17] != '\x02') {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): schedule time data struct error, error type = %d\n",
                                "ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                return;
              }
              if ((0x20 < (byte)pcVar20[uVar18 + 3]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule time data format error!!!\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
              uVar16 = (uint)(byte)pcVar20[uVar18 + 3];
              uVar23 = uVar16;
              if (0x1f < uVar16) {
                uVar23 = 0x20;
              }
              memcpy(puVar12 + 0x41,pcVar20 + uVar18 + 4,uVar23);
              iVar7 = uVar16 + 2 + iVar17;
              if (pcVar20[uVar16 + 2 + iVar17] != '\x03') {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): schedule time data struct error, error type = %d\n",
                                "ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if (-1 < iVar17) {
                  return;
                }
                if (LOG_LEVEL < 1) {
                  return;
                }
                if (IS_DEBUG != 0) {
                  handle_heartbeat();
                  return;
                }
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                return;
              }
              if ((0x20 < (byte)pcVar20[iVar7 + 1]) && (1 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule time data format error!!!\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
              *puVar12 = 1;
              uVar18 = (uint)(byte)pcVar20[iVar7 + 1];
              uVar23 = uVar18;
              if (0x1f < uVar18) {
                uVar23 = 0x20;
              }
              memcpy(puVar12 + 0x61,pcVar20 + iVar7 + 2,uVar23);
              pcVar20 = pcVar20 + uVar18 + 2 + iVar7;
              local_150 = local_150 + 1 & 0xff;
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): schedule title : %s , time :%s , location : %s \n",
                              "ble_process_put_req",puVar12 + 0x82,puVar12 + 0xc2,puVar12 + 0xe2);
                }
                else {
                  handle_heartbeat("%s(): schedule title : %s , time :%s , location : %s \n");
                }
              }
              puVar12 = puVar12 + 0x81;
            }
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): schedule title data struct error, error type = %d\n",
                            "ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if (-1 < iVar17) {
              return;
            }
            if (LOG_LEVEL < 1) {
              return;
            }
            if (IS_DEBUG != 0) {
              handle_heartbeat();
              return;
            }
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            return;
          }
        }
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(0x9bcb7,0x9e077);
          }
          else {
            handle_heartbeat();
          }
        }
        break;
      case 4:
        uVar2 = *(ushort *)((int)param_3 + 5);
        uVar18 = (uint)uVar2;
        uVar9 = (uint)*(ushort *)((int)param_3 + 7);
        if (uVar18 == 1) {
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = *(undefined1 *)((int)param_3 + 9);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = *(undefined1 *)((int)param_3 + 10);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x68) = *(undefined1 *)((int)param_3 + 0xb);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                          "ble_process_put_req",(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                          (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
            }
            else {
              handle_heartbeat("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                               "ble_process_put_req");
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                iVar17 = get_work_mode();
                DEBUG_PRINT("%s(): stocks display mode = %d\n","ble_process_put_req",
                            (uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x68));
              }
              else {
                iVar17 = get_work_mode();
                handle_heartbeat("%s(): stocks display mode = %d\n","ble_process_put_req",
                                 *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x68));
              }
            }
          }
          iVar17 = get_work_mode();
          if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x68) == '\x02') {
            uVar9 = (uint)*(byte *)(param_3 + 3);
            if (uVar9 < 5) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): current stocks index num = %d\n","ble_process_put_req",uVar9);
                }
                else {
                  handle_heartbeat();
                }
              }
              if (*(char *)((int)param_3 + 0xd) == '\x02') {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): delete stocks index num = %d\n","ble_process_put_req",uVar9);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                fill_memory_buffer(&STOCK_DATA_FLAGS + (uVar9 - 1) * 0x7f2,0);
                log_system_status();
              }
              else {
                if (*(char *)((int)param_3 + 0xe) != '\x01') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stock code data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x20 < *(byte *)((int)param_3 + 0xf)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks code oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                iVar7 = uVar9 - 1;
                iVar17 = iVar7 * 0x7f2;
                packets = *(byte *)((int)param_3 + 0xf);
                iVar21 = iVar17 + 0x2000d71a;
                if (0x1f < packets) {
                  packets = 0x20;
                }
                iVar24 = memcmp_byte_arrays(iVar21,param_3 + 4,packets);
                if (iVar24 != 0) {
                  fill_memory_buffer(iVar21,0,0x20);
                  log_system_status();
                }
                packets = *(byte *)((int)param_3 + 0xf);
                if (0x1f < packets) {
                  packets = 0x20;
                }
                memcpy(iVar21,param_3 + 4,packets);
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock code name : %s\n","ble_process_put_req",iVar21);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uVar9 = (uint)*(byte *)((int)param_3 + 0xf);
                iVar21 = uVar9 + 0x10;
                if (*(char *)((int)param_3 + iVar21) != '\x02') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks company name data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x40 < *(byte *)((int)param_3 + uVar9 + 0x11)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks share price oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar24 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar24 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                packets = *(byte *)((int)param_3 + uVar9 + 0x11);
                iVar24 = iVar17 + 0x2000d73a;
                iVar14 = (int)param_3 + uVar9 + 0x12;
                if (0x3f < packets) {
                  packets = 0x40;
                }
                iVar15 = memcmp_byte_arrays(iVar24,iVar14,packets);
                if (iVar15 != 0) {
                  fill_memory_buffer(iVar24,0,0x40);
                  log_system_status();
                }
                packets = *(byte *)((int)param_3 + uVar9 + 0x11);
                if (0x3f < packets) {
                  packets = 0x40;
                }
                memcpy(iVar24,iVar14,packets);
                iVar15 = *(byte *)((int)param_3 + uVar9 + 0x11) + 2;
                iVar14 = iVar15 + iVar21;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock company name : %s\n","ble_process_put_req",iVar24);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                if (*(char *)((int)param_3 + iVar15 + iVar21) != '\x03') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks share price data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x10 < *(byte *)((int)param_3 + iVar14 + 1)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks share price oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar21 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar21 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                uVar6 = fill_memory_buffer(iVar17 + 0x2000d77a,0,0x10);
                packets = *(byte *)((int)param_3 + iVar14 + 1);
                if (0xf < packets) {
                  packets = 0x10;
                }
                uVar6 = memcpy(uVar6,(int)param_3 + iVar14 + 2,packets);
                iVar24 = *(byte *)((int)param_3 + iVar14 + 1) + 2;
                iVar21 = iVar24 + iVar14;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock price  : %s\n","ble_process_put_req",uVar6);
                  }
                  else {
                    handle_heartbeat("%s(): stock price  : %s\n","ble_process_put_req",uVar6);
                  }
                }
                if (*(char *)((int)param_3 + iVar24 + iVar14) != '\x04') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks price change data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x10 < *(byte *)((int)param_3 + iVar21 + 1)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks price change oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar24 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar24 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                uVar6 = fill_memory_buffer(iVar17 + 0x2000d78a,0,0x10);
                packets = *(byte *)((int)param_3 + iVar21 + 1);
                if (0xf < packets) {
                  packets = 0x10;
                }
                uVar6 = memcpy(uVar6,(int)param_3 + iVar21 + 2,packets);
                iVar14 = *(byte *)((int)param_3 + iVar21 + 1) + 2;
                iVar24 = iVar14 + iVar21;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock price change  : %s\n","ble_process_put_req",uVar6);
                  }
                  else {
                    handle_heartbeat("%s(): stock price change  : %s\n","ble_process_put_req",uVar6)
                    ;
                  }
                }
                if (*(char *)((int)param_3 + iVar14 + iVar21) != '\x05') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x10 < *(byte *)((int)param_3 + iVar24 + 1)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks price change oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar21 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar21 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                uVar6 = fill_memory_buffer(iVar17 + 0x2000d79a,0,0x10);
                packets = *(byte *)((int)param_3 + iVar24 + 1);
                if (0xf < packets) {
                  packets = 0x10;
                }
                uVar6 = memcpy(uVar6,(int)param_3 + iVar24 + 2,packets);
                iVar14 = *(byte *)((int)param_3 + iVar24 + 1) + 2;
                iVar21 = iVar14 + iVar24;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock change rate : %s\n","ble_process_put_req",uVar6);
                  }
                  else {
                    handle_heartbeat("%s(): stock change rate : %s\n","ble_process_put_req",uVar6);
                  }
                }
                iVar15 = LOG_LEVEL;
                if (*(char *)((int)param_3 + iVar14 + iVar24) != '\x06') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (*(char *)((int)param_3 + iVar21 + 1) != '\x01') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks change status sformat error !!!\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                (&STOCK_DATA_BUFFER)[iVar7 * 0x7f2] = *(undefined1 *)((int)param_3 + iVar21 + 2);
                iVar14 = *(byte *)((int)param_3 + iVar21 + 1) + 2;
                iVar24 = iVar14 + iVar21;
                if (2 < iVar15) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stock change status : %d\n","ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                iVar15 = LOG_LEVEL;
                if (*(char *)((int)param_3 + iVar14 + iVar21) != '\a') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                uVar1 = *(ushort *)((int)param_3 + iVar24 + 1);
                if (0x75e < uVar1) {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stocks image format oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                iVar7 = iVar7 * 0x7f2;
                *(ushort *)(&STOCK_DATA_SIZES + iVar7) = uVar1;
                uVar6 = fill_memory_buffer(iVar17 + 0x2000d7aa,0);
                memcpy(uVar6,(int)param_3 + iVar24 + 3,uVar1);
                (&STOCK_DATA_FLAGS)[iVar7] = 1;
                if (2 < iVar15) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): We received %d byte of data from the App\n",
                                "ble_process_put_req",(uint)*(ushort *)(&STOCK_DATA_SIZES + iVar7));
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
              uStack_133 = 0;
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            else {
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): stocks data oversize!!!!\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              uStack_133 = 1;
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else {
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else if (uVar9 == 1) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Action ID = 1,Received schedule multiple initialization packets, currently the first packet of data\n"
                          ,"ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          RECEIVED_PACKET_COUNT = 0;
          TOTAL_PACKET_COUNT = 0;
          PACKET_DATA_OFFSET = 0;
          fill_memory_buffer(&PACKET_ASSEMBLY_BUFFER,0,0x812);
          validate_memory_bounds(&PACKET_ASSEMBLY_BUFFER,(int)param_3 + 9,uVar23 - 9,0x812);
          _local_13c = *param_3;
          local_138 = param_3[1];
          PACKET_DATA_OFFSET = PACKET_DATA_OFFSET + -9 + uVar1;
          uStack_133 = 0;
          uStack_132 = 0;
          uStack_131 = 0;
          uStack_130 = 0;
          RECEIVED_PACKET_COUNT = RECEIVED_PACKET_COUNT + 1;
          local_134 = *(undefined1 *)(param_3 + 2);
          local_12f = 0;
          uStack_12e = 0;
          uStack_12c = 0;
          uStack_12b = 0;
          local_12a = 0;
          TOTAL_PACKET_COUNT = uVar2;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else if (uVar9 < uVar18) {
          if ((uint)RECEIVED_PACKET_COUNT == uVar9 - 1) {
            memcpy(&PACKET_ASSEMBLY_BUFFER + PACKET_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
            _local_13c = *param_3;
            PACKET_DATA_OFFSET = (PACKET_DATA_OFFSET - 9) + uVar1;
            local_138 = param_3[1];
            RECEIVED_PACKET_COUNT = RECEIVED_PACKET_COUNT + 1;
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,SCHEDULE_PACKET_COUNTER + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req");
              }
            }
            TOTAL_PACKET_COUNT = 0;
            RECEIVED_PACKET_COUNT = 0;
            fill_memory_buffer(&PACKET_ASSEMBLY_BUFFER,0,0x812);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else if (uVar9 == uVar18) {
          if (((uint)RECEIVED_PACKET_COUNT == uVar9 - 1) && (TOTAL_PACKET_COUNT == uVar9)) {
            memcpy(&PACKET_ASSEMBLY_BUFFER + PACKET_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
            PACKET_DATA_OFFSET = (PACKET_DATA_OFFSET - 9) + uVar1;
            RECEIVED_PACKET_COUNT = RECEIVED_PACKET_COUNT + 1;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = PACKET_ASSEMBLY_BUFFER;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = STOCK_DISPLAY_MODE;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x68) = STOCK_CUSTOM_AREA_VALUE;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                            "ble_process_put_req",(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                            (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
              }
              else {
                handle_heartbeat("%s(): Dashboard display mode :%d  custom display Area value : %d\n"
                                 ,"ble_process_put_req");
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  iVar17 = get_work_mode();
                  DEBUG_PRINT("%s(): stocks display mode = %d\n","ble_process_put_req",
                              (uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x68));
                }
                else {
                  iVar17 = get_work_mode();
                  handle_heartbeat("%s(): stocks display mode = %d\n","ble_process_put_req",
                                   *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x68));
                }
              }
            }
            iVar17 = get_work_mode();
            if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x68) == '\x02') {
              uVar9 = (uint)STOCK_COUNT_LIMIT;
              if (STOCK_COUNT_LIMIT < 5) {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): current stocks index num = %d\n","ble_process_put_req",uVar9)
                    ;
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                if (STOCK_OPERATION_TYPE == '\x02') {
                  if (2 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): delete stocks index num = %d\n","ble_process_put_req",uVar9
                                 );
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  log_system_status();
                  fill_memory_buffer(&STOCK_DATA_FLAGS + (uVar9 - 1) * 0x7f2,0);
                  uStack_133 = 0;
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                else if (STOCK_DATA_ACTIVE_FLAG == '\x01') {
                  if (0x20 < STOCK_DATA_LENGTH) {
                    if (1 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): stocks code oversize !!!\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    uStack_132 = 0;
                    uStack_131 = 0;
                    uStack_130 = 0;
                    local_12f = 0;
                    uStack_12e = 0;
                    uStack_12c = 0;
                    uStack_12b = 0;
                    local_12a = 0;
                    _local_13c = *param_3;
                    local_138 = param_3[1];
                    local_134 = *(undefined1 *)(param_3 + 2);
                    uStack_133 = 1;
                    iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                    if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                  }
                  iVar7 = uVar9 - 1;
                  iVar17 = iVar7 * 0x7f2;
                  iVar21 = iVar17 + 0x2000d71a;
                  packets = STOCK_DATA_LENGTH;
                  if (0x1f < STOCK_DATA_LENGTH) {
                    packets = 0x20;
                  }
                  iVar24 = memcmp_byte_arrays(iVar21,&STOCK_DATA_BUFFER,packets);
                  if (iVar24 != 0) {
                    fill_memory_buffer(iVar21,0,0x20);
                    log_system_status();
                  }
                  packets = STOCK_DATA_LENGTH;
                  if (0x1f < STOCK_DATA_LENGTH) {
                    packets = 0x20;
                  }
                  memcpy(iVar21,&STOCK_DATA_BUFFER,packets);
                  if (2 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stock code name : %s\n","ble_process_put_req",iVar21);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uVar9 = (uint)STOCK_DATA_LENGTH;
                  if ((&STOCK_DATA_BUFFER)[uVar9] == '\x02') {
                    if (0x40 < (byte)(&STOCK_FIELD_LENGTHS)[uVar9]) {
                      if (1 < LOG_LEVEL) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): stocks share price oversize !!!\n",
                                      "ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                      uStack_132 = 0;
                      uStack_131 = 0;
                      uStack_130 = 0;
                      local_12f = 0;
                      uStack_12e = 0;
                      uStack_12c = 0;
                      uStack_12b = 0;
                      local_12a = 0;
                      _local_13c = *param_3;
                      local_138 = param_3[1];
                      local_134 = *(undefined1 *)(param_3 + 2);
                      uStack_133 = 1;
                      iVar21 = (**(code **)(param_1 + 0xc))(local_13c,10);
                      if ((iVar21 < 0) && (0 < LOG_LEVEL)) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                    }
                    packets = (&STOCK_FIELD_LENGTHS)[uVar9];
                    iVar21 = iVar17 + 0x2000d73a;
                    if (0x3f < packets) {
                      packets = 0x40;
                    }
                    iVar24 = memcmp_byte_arrays(iVar21,uVar9 + 0x20010d50,packets);
                    if (iVar24 != 0) {
                      fill_memory_buffer(iVar21,0,0x40);
                      log_system_status();
                    }
                    uVar18 = (uint)(byte)(&STOCK_FIELD_LENGTHS)[uVar9];
                    uVar23 = uVar18;
                    if (0x3f < uVar18) {
                      uVar23 = 0x40;
                    }
                    memcpy(iVar21,uVar9 + 0x20010d50,uVar23);
                    iVar24 = uVar18 + 2 + uVar9;
                    if (2 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): stock company name : %s\n","ble_process_put_req",iVar21);
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    if ((&STOCK_DATA_BUFFER)[uVar18 + 2 + uVar9] == '\x03') {
                      if (0x10 < (byte)(&STOCK_DATA_BUFFER)[iVar24 + 1]) {
                        if (1 < LOG_LEVEL) {
                          if (IS_DEBUG == 0) {
                            DEBUG_PRINT("%s(): stocks share price oversize !!!\n",
                                        "ble_process_put_req");
                          }
                          else {
                            handle_heartbeat();
                          }
                        }
                        uStack_132 = 0;
                        uStack_131 = 0;
                        uStack_130 = 0;
                        local_12f = 0;
                        uStack_12e = 0;
                        uStack_12c = 0;
                        uStack_12b = 0;
                        local_12a = 0;
                        _local_13c = *param_3;
                        local_138 = param_3[1];
                        local_134 = *(undefined1 *)(param_3 + 2);
                        uStack_133 = 1;
                        iVar21 = (**(code **)(param_1 + 0xc))(local_13c,10);
                        if ((iVar21 < 0) && (0 < LOG_LEVEL)) {
                          if (IS_DEBUG == 0) {
                            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req"
                                       );
                          }
                          else {
                            handle_heartbeat();
                          }
                        }
                      }
                      uVar6 = fill_memory_buffer(iVar17 + 0x2000d77a,0,0x10);
                      uVar23 = (uint)(byte)(&STOCK_DATA_BUFFER)[iVar24 + 1];
                      uVar9 = uVar23;
                      if (0xf < uVar23) {
                        uVar9 = 0x10;
                      }
                      uVar6 = memcpy(uVar6,&STOCK_DATA_BUFFER + iVar24 + 2,uVar9);
                      iVar21 = uVar23 + 2 + iVar24;
                      if (2 < LOG_LEVEL) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): stock price  : %s\n","ble_process_put_req",uVar6);
                        }
                        else {
                          handle_heartbeat("%s(): stock price  : %s\n","ble_process_put_req",uVar6);
                        }
                      }
                      if ((&STOCK_DATA_BUFFER)[uVar23 + 2 + iVar24] == '\x04') {
                        if (0x10 < (byte)(&STOCK_DATA_BUFFER)[iVar21 + 1]) {
                          if (1 < LOG_LEVEL) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): stocks price change oversize !!!\n",
                                          "ble_process_put_req");
                            }
                            else {
                              handle_heartbeat();
                            }
                          }
                          uStack_132 = 0;
                          uStack_131 = 0;
                          uStack_130 = 0;
                          local_12f = 0;
                          uStack_12e = 0;
                          uStack_12c = 0;
                          uStack_12b = 0;
                          local_12a = 0;
                          _local_13c = *param_3;
                          local_138 = param_3[1];
                          local_134 = *(undefined1 *)(param_3 + 2);
                          uStack_133 = 1;
                          iVar24 = (**(code **)(param_1 + 0xc))(local_13c,10);
                          if ((iVar24 < 0) && (0 < LOG_LEVEL)) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                          "ble_process_put_req");
                            }
                            else {
                              handle_heartbeat();
                            }
                          }
                        }
                        uVar6 = fill_memory_buffer(iVar17 + 0x2000d78a,0,0x10);
                        uVar23 = (uint)(byte)(&STOCK_DATA_BUFFER)[iVar21 + 1];
                        uVar9 = uVar23;
                        if (0xf < uVar23) {
                          uVar9 = 0x10;
                        }
                        uVar6 = memcpy(uVar6,&STOCK_DATA_BUFFER + iVar21 + 2,uVar9);
                        iVar24 = uVar23 + 2 + iVar21;
                        if (2 < LOG_LEVEL) {
                          if (IS_DEBUG == 0) {
                            DEBUG_PRINT("%s(): stock price change  : %s\n","ble_process_put_req",
                                        uVar6);
                          }
                          else {
                            handle_heartbeat("%s(): stock price change  : %s\n",
                                             "ble_process_put_req",uVar6);
                          }
                        }
                        if ((&STOCK_DATA_BUFFER)[uVar23 + 2 + iVar21] == '\x05') {
                          if (0x10 < (byte)(&STOCK_DATA_BUFFER)[iVar24 + 1]) {
                            if (1 < LOG_LEVEL) {
                              if (IS_DEBUG == 0) {
                                DEBUG_PRINT("%s(): stocks price change oversize !!!\n",
                                            "ble_process_put_req");
                              }
                              else {
                                handle_heartbeat();
                              }
                            }
                            _local_13c = *param_3;
                            local_138 = param_3[1];
                            uStack_132 = 0;
                            uStack_131 = 0;
                            uStack_130 = 0;
                            local_12f = 0;
                            uStack_12e = 0;
                            uStack_12c = 0;
                            uStack_12b = 0;
                            local_12a = 0;
                            local_134 = *(undefined1 *)(param_3 + 2);
                            uStack_133 = 1;
                            iVar21 = (**(code **)(param_1 + 0xc))(local_13c,10);
                            if ((iVar21 < 0) && (0 < LOG_LEVEL)) {
                              if (IS_DEBUG == 0) {
                                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                            "ble_process_put_req");
                              }
                              else {
                                handle_heartbeat();
                              }
                            }
                          }
                          uVar6 = fill_memory_buffer(iVar17 + 0x2000d79a,0,0x10);
                          uVar23 = (uint)(byte)(&STOCK_DATA_BUFFER)[iVar24 + 1];
                          uVar9 = uVar23;
                          if (0xf < uVar23) {
                            uVar9 = 0x10;
                          }
                          uVar6 = memcpy(uVar6,&STOCK_DATA_BUFFER + iVar24 + 2,uVar9);
                          iVar21 = uVar23 + 2 + iVar24;
                          if (2 < LOG_LEVEL) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): stock change rate : %s\n","ble_process_put_req",
                                          uVar6);
                            }
                            else {
                              handle_heartbeat("%s(): stock change rate : %s\n",
                                               "ble_process_put_req",uVar6);
                            }
                          }
                          iVar14 = LOG_LEVEL;
                          if ((&STOCK_DATA_BUFFER)[uVar23 + 2 + iVar24] == '\x06') {
                            if ((&STOCK_DATA_BUFFER)[iVar21 + 1] == '\x01') {
                              (&STOCK_DATA_BUFFER)[iVar7 * 0x7f2] = (&STOCK_DATA_BUFFER)[iVar21 + 2]
                              ;
                              if (2 < iVar14) {
                                if (IS_DEBUG == 0) {
                                  DEBUG_PRINT("%s(): stock change status : %d\n",
                                              "ble_process_put_req");
                                }
                                else {
                                  handle_heartbeat();
                                }
                              }
                              iVar24 = LOG_LEVEL;
                              if ((&STOCK_DATA_BUFFER)[iVar21 + 3] == '\a') {
                                uVar1 = *(ushort *)(&STOCK_DATA_BUFFER + iVar21 + 4);
                                if (uVar1 < 0x75f) {
                                  iVar7 = iVar7 * 0x7f2;
                                  *(ushort *)(&STOCK_DATA_SIZES + iVar7) = uVar1;
                                  uVar6 = fill_memory_buffer(iVar17 + 0x2000d7aa,0);
                                  memcpy(uVar6,&STOCK_DATA_BUFFER + iVar21 + 6,uVar1);
                                  (&STOCK_DATA_FLAGS)[iVar7] = 1;
                                  if (2 < iVar24) {
                                    if (IS_DEBUG == 0) {
                                      DEBUG_PRINT("%s(): We received %d byte of data from the App\n"
                                                  ,"ble_process_put_req",
                                                  (uint)*(ushort *)(&STOCK_DATA_SIZES + iVar7));
                                    }
                                    else {
                                      handle_heartbeat();
                                    }
                                  }
                                  _local_13c = *param_3;
                                  TOTAL_PACKET_COUNT = 0;
                                  local_138 = param_3[1];
                                  uStack_133 = 0;
                                  uStack_132 = 0;
                                  uStack_131 = 0;
                                  uStack_130 = 0;
                                  local_12f = 0;
                                  uStack_12e = 0;
                                  RECEIVED_PACKET_COUNT = 0;
                                  uStack_12c = 0;
                                  uStack_12b = 0;
                                  local_12a = 0;
                                  local_134 = *(undefined1 *)(param_3 + 2);
                                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                                    if (IS_DEBUG == 0) {
                                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                                  "ble_process_put_req");
                                    }
                                    else {
                                      handle_heartbeat();
                                    }
                                  }
                                }
                                else {
                                  if (0 < LOG_LEVEL) {
                                    if (IS_DEBUG == 0) {
                                      DEBUG_PRINT("%s(): stocks image format oversize !!!\n",
                                                  "ble_process_put_req");
                                    }
                                    else {
                                      handle_heartbeat();
                                    }
                                  }
                                  _local_13c = *param_3;
                                  local_138 = param_3[1];
                                  uStack_132 = 0;
                                  uStack_131 = 0;
                                  uStack_130 = 0;
                                  local_12f = 0;
                                  uStack_12e = 0;
                                  uStack_12c = 0;
                                  uStack_12b = 0;
                                  local_12a = 0;
                                  local_134 = *(undefined1 *)(param_3 + 2);
                                  uStack_133 = 1;
                                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                                    if (IS_DEBUG == 0) {
                                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                                  "ble_process_put_req");
                                    }
                                    else {
                                      handle_heartbeat();
                                    }
                                  }
                                }
                              }
                              else {
                                if (0 < LOG_LEVEL) {
                                  if (IS_DEBUG == 0) {
                                    DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n"
                                                ,"ble_process_put_req");
                                  }
                                  else {
                                    handle_heartbeat();
                                  }
                                }
                                _local_13c = *param_3;
                                local_138 = param_3[1];
                                uStack_132 = 0;
                                uStack_131 = 0;
                                uStack_130 = 0;
                                local_12f = 0;
                                uStack_12e = 0;
                                uStack_12c = 0;
                                uStack_12b = 0;
                                local_12a = 0;
                                local_134 = *(undefined1 *)(param_3 + 2);
                                uStack_133 = 1;
                                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                                if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                                  if (IS_DEBUG == 0) {
                                    DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                                "ble_process_put_req");
                                  }
                                  else {
                                    handle_heartbeat();
                                  }
                                }
                              }
                            }
                            else {
                              if (0 < LOG_LEVEL) {
                                if (IS_DEBUG == 0) {
                                  DEBUG_PRINT("%s(): stocks change status sformat error !!!\n",
                                              "ble_process_put_req");
                                }
                                else {
                                  handle_heartbeat();
                                }
                              }
                              _local_13c = *param_3;
                              local_138 = param_3[1];
                              uStack_132 = 0;
                              uStack_131 = 0;
                              uStack_130 = 0;
                              local_12f = 0;
                              uStack_12e = 0;
                              uStack_12c = 0;
                              uStack_12b = 0;
                              local_12a = 0;
                              local_134 = *(undefined1 *)(param_3 + 2);
                              uStack_133 = 1;
                              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                                if (IS_DEBUG == 0) {
                                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                              "ble_process_put_req");
                                }
                                else {
                                  handle_heartbeat();
                                }
                              }
                            }
                          }
                          else {
                            if (0 < LOG_LEVEL) {
                              if (IS_DEBUG == 0) {
                                DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n"
                                            ,"ble_process_put_req");
                              }
                              else {
                                handle_heartbeat();
                              }
                            }
                            _local_13c = *param_3;
                            local_138 = param_3[1];
                            uStack_132 = 0;
                            uStack_131 = 0;
                            uStack_130 = 0;
                            local_12f = 0;
                            uStack_12e = 0;
                            uStack_12c = 0;
                            uStack_12b = 0;
                            local_12a = 0;
                            local_134 = *(undefined1 *)(param_3 + 2);
                            uStack_133 = 1;
                            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                              if (IS_DEBUG == 0) {
                                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                            "ble_process_put_req");
                              }
                              else {
                                handle_heartbeat();
                              }
                            }
                          }
                        }
                        else {
                          if (0 < LOG_LEVEL) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): stocks change rate data struct error, error type = %d\n"
                                          ,"ble_process_put_req");
                            }
                            else {
                              handle_heartbeat();
                            }
                          }
                          _local_13c = *param_3;
                          local_138 = param_3[1];
                          uStack_132 = 0;
                          uStack_131 = 0;
                          uStack_130 = 0;
                          local_12f = 0;
                          uStack_12e = 0;
                          uStack_12c = 0;
                          uStack_12b = 0;
                          local_12a = 0;
                          local_134 = *(undefined1 *)(param_3 + 2);
                          uStack_133 = 1;
                          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                            if (IS_DEBUG == 0) {
                              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n",
                                          "ble_process_put_req");
                            }
                            else {
                              handle_heartbeat();
                            }
                          }
                        }
                      }
                      else {
                        if (0 < LOG_LEVEL) {
                          if (IS_DEBUG == 0) {
                            DEBUG_PRINT("%s(): stocks price change data struct error, error type = %d\n"
                                        ,"ble_process_put_req");
                          }
                          else {
                            handle_heartbeat();
                          }
                        }
                        uStack_132 = 0;
                        uStack_131 = 0;
                        uStack_130 = 0;
                        local_12f = 0;
                        uStack_12e = 0;
                        uStack_12c = 0;
                        uStack_12b = 0;
                        local_12a = 0;
                        _local_13c = *param_3;
                        local_138 = param_3[1];
                        local_134 = *(undefined1 *)(param_3 + 2);
                        uStack_133 = 1;
                        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                          if (IS_DEBUG == 0) {
                            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req"
                                       );
                          }
                          else {
                            handle_heartbeat();
                          }
                        }
                      }
                    }
                    else {
                      if (0 < LOG_LEVEL) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): stocks share price data struct error, error type = %d\n"
                                      ,"ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                      uStack_132 = 0;
                      uStack_131 = 0;
                      uStack_130 = 0;
                      local_12f = 0;
                      uStack_12e = 0;
                      uStack_12c = 0;
                      uStack_12b = 0;
                      local_12a = 0;
                      _local_13c = *param_3;
                      local_138 = param_3[1];
                      local_134 = *(undefined1 *)(param_3 + 2);
                      uStack_133 = 1;
                      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                      if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                    }
                  }
                  else {
                    if (0 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): stocks company name data struct error, error type = %d\n"
                                    ,"ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    uStack_132 = 0;
                    uStack_131 = 0;
                    uStack_130 = 0;
                    local_12f = 0;
                    uStack_12e = 0;
                    uStack_12c = 0;
                    uStack_12b = 0;
                    local_12a = 0;
                    _local_13c = *param_3;
                    local_138 = param_3[1];
                    local_134 = *(undefined1 *)(param_3 + 2);
                    uStack_133 = 1;
                    iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                    if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                  }
                }
                else {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stock code data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
              }
              else {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stocks data oversize!!!!\n","ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
            }
            else {
              uStack_133 = 0;
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,RECEIVED_PACKET_COUNT + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req",uVar9,RECEIVED_PACKET_COUNT + 1);
              }
            }
            TOTAL_PACKET_COUNT = 0;
            RECEIVED_PACKET_COUNT = 0;
            fill_memory_buffer(&PACKET_ASSEMBLY_BUFFER,0,0x812);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        break;
      case 5:
        uVar2 = *(ushort *)((int)param_3 + 5);
        uVar18 = (uint)uVar2;
        uVar9 = (uint)*(ushort *)((int)param_3 + 7);
        if (uVar18 == 1) {
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = *(undefined1 *)((int)param_3 + 9);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = *(undefined1 *)((int)param_3 + 10);
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x69) = *(undefined1 *)((int)param_3 + 0xb);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                          "ble_process_put_req",(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                          (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
            }
            else {
              handle_heartbeat("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                               "ble_process_put_req");
            }
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                iVar17 = get_work_mode();
                DEBUG_PRINT("%s(): news display mode = %d\n","ble_process_put_req",
                            (uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x69));
              }
              else {
                iVar17 = get_work_mode();
                handle_heartbeat("%s(): news display mode = %d\n","ble_process_put_req",
                                 *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x69));
              }
            }
          }
          iVar17 = get_work_mode();
          if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x69) == '\x02') {
            uVar9 = (uint)*(byte *)(param_3 + 3);
            if (uVar9 < 5) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): current news index num = %d\n","ble_process_put_req",uVar9);
                }
                else {
                  handle_heartbeat();
                }
              }
              if (*(char *)((int)param_3 + 0xd) == '\x02') {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): delete news index num = %d\n","ble_process_put_req",uVar9);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                fill_memory_buffer(&NEWS_ENTRY_FLAGS + (uVar9 - 1) * 0x159,0);
                clear_work_mode_flags();
              }
              else {
                if (*(char *)((int)param_3 + 0xe) != '\x01') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): news data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                if (0x40 < *(byte *)((int)param_3 + 0xf)) {
                  if (1 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): news source oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                iVar17 = (uVar9 - 1) * 0x159;
                packets = *(byte *)((int)param_3 + 0xf);
                iVar7 = iVar17 + 0x200107e4;
                if (0x3f < packets) {
                  packets = 0x40;
                }
                iVar21 = memcmp_byte_arrays(iVar7,param_3 + 4,packets);
                if (iVar21 != 0) {
                  fill_memory_buffer(iVar7,0,0x40);
                  clear_work_mode_flags();
                }
                packets = *(byte *)((int)param_3 + 0xf);
                if (0x3f < packets) {
                  packets = 0x40;
                }
                memcpy(iVar7,param_3 + 4,packets);
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): news source : %s\n","ble_process_put_req",iVar7);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uVar23 = (uint)*(byte *)((int)param_3 + 0xf);
                if (*(char *)((int)param_3 + uVar23 + 0x10) != '\x02') {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): news change rate data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                uVar18 = (uint)*(ushort *)((int)param_3 + uVar23 + 0x11);
                if (0x118 < uVar18) {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): news txt format oversize !!!\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if (-1 < iVar17) {
                    return;
                  }
                  if (LOG_LEVEL < 1) {
                    return;
                  }
                  if (IS_DEBUG != 0) {
                    handle_heartbeat();
                    return;
                  }
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  return;
                }
                iVar17 = iVar17 + 0x20010824;
                iVar7 = memcmp_byte_arrays(iVar17,(int)param_3 + uVar23 + 0x12,
                                           *(undefined1 *)((int)param_3 + uVar23 + 0x11));
                if (iVar7 != 0) {
                  fill_memory_buffer(iVar17,0,0x118);
                  clear_work_mode_flags();
                }
                memcpy(iVar17,(int)param_3 + uVar23 + 0x13,uVar18);
                (&NEWS_ENTRY_FLAGS)[(uVar9 - 1) * 0x159] = 1;
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): We received %d byte of data from the News App\n",
                                "ble_process_put_req",uVar18);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
              uStack_133 = 0;
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            else {
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): news index num  oversize!!!!\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              uStack_133 = 1;
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else {
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else if (uVar9 == 1) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Action ID = 1,Received schedule multiple initialization packets, currently the first packet of data\n"
                          ,"ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          NEWS_RECEIVED_COUNT = 0;
          NEWS_TOTAL_PACKETS = 0;
          NEWS_BUFFER_OFFSET = 0;
          fill_memory_buffer(&NEWS_DATA_BUFFER,0,0x161);
          validate_memory_bounds(&NEWS_DATA_BUFFER,(int)param_3 + 9,uVar23 - 9,0x161);
          _local_13c = *param_3;
          local_138 = param_3[1];
          NEWS_BUFFER_OFFSET = NEWS_BUFFER_OFFSET + -9 + uVar1;
          uStack_133 = 0;
          uStack_132 = 0;
          uStack_131 = 0;
          uStack_130 = 0;
          NEWS_RECEIVED_COUNT = NEWS_RECEIVED_COUNT + 1;
          local_134 = *(undefined1 *)(param_3 + 2);
          local_12f = 0;
          uStack_12e = 0;
          uStack_12c = 0;
          uStack_12b = 0;
          local_12a = 0;
          NEWS_TOTAL_PACKETS = uVar2;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else if (uVar9 < uVar18) {
          if ((uint)NEWS_RECEIVED_COUNT == uVar9 - 1) {
            memcpy(&NEWS_DATA_BUFFER + NEWS_BUFFER_OFFSET,(int)param_3 + 9,uVar23 - 9);
            _local_13c = *param_3;
            NEWS_BUFFER_OFFSET = (NEWS_BUFFER_OFFSET - 9) + uVar1;
            local_138 = param_3[1];
            NEWS_RECEIVED_COUNT = NEWS_RECEIVED_COUNT + 1;
            uStack_133 = 0;
            uStack_132 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            local_12f = 0;
            uStack_12e = 0;
            uStack_12c = 0;
            uStack_12b = 0;
            local_12a = 0;
            local_134 = *(undefined1 *)(param_3 + 2);
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,NEWS_RECEIVED_COUNT + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req",uVar9,NEWS_RECEIVED_COUNT + 1);
              }
            }
            NEWS_TOTAL_PACKETS = 0;
            NEWS_RECEIVED_COUNT = 0;
            fill_memory_buffer(&NEWS_DATA_BUFFER,0,0x161);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else if (uVar9 == uVar18) {
          if (((uint)NEWS_RECEIVED_COUNT == uVar9 - 1) && (NEWS_TOTAL_PACKETS == uVar9)) {
            memcpy(&NEWS_DATA_BUFFER + NEWS_BUFFER_OFFSET,(int)param_3 + 9,uVar23 - 9);
            NEWS_BUFFER_OFFSET = uVar1 + (NEWS_BUFFER_OFFSET - 9);
            NEWS_RECEIVED_COUNT = NEWS_RECEIVED_COUNT + 1;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 100) = NEWS_DATA_BUFFER;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x65) = NEWS_DISPLAY_MODE;
            iVar17 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x69) = NEWS_INDEX_NUMBER;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Dashboard display mode :%d  custom display Area value : %d\n",
                            "ble_process_put_req",(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                            (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
              }
              else {
                handle_heartbeat("%s(): Dashboard display mode :%d  custom display Area value : %d\n"
                                 ,"ble_process_put_req");
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  iVar17 = get_work_mode();
                  DEBUG_PRINT("%s(): news display mode = %d\n","ble_process_put_req",
                              (uint)*(byte *)(*(int *)(iVar17 + 0xfec) + 0x69));
                }
                else {
                  iVar17 = get_work_mode();
                  handle_heartbeat("%s(): news display mode = %d\n","ble_process_put_req",
                                   *(undefined1 *)(*(int *)(iVar17 + 0xfec) + 0x69));
                }
              }
            }
            iVar17 = get_work_mode();
            if (*(char *)(*(int *)(iVar17 + 0xfec) + 0x69) == '\x02') {
              uVar9 = (uint)NEWS_COUNT_LIMIT;
              if (NEWS_COUNT_LIMIT < 5) {
                if (2 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): current news index num = %d\n","ble_process_put_req",uVar9);
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                if (NEWS_OPERATION_TYPE == '\x02') {
                  if (2 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): delete news index num = %d\n","ble_process_put_req",uVar9);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  fill_memory_buffer(&NEWS_ENTRY_FLAGS + (uVar9 - 1) * 0x159,0);
                  uStack_133 = 0;
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
                else if (NEWS_DATA_ACTIVE_FLAG == '\x01') {
                  if (0x40 < NEWS_DATA_LENGTH) {
                    if (1 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): news source oversize !!!\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    uStack_132 = 0;
                    uStack_131 = 0;
                    uStack_130 = 0;
                    local_12f = 0;
                    uStack_12e = 0;
                    uStack_12c = 0;
                    uStack_12b = 0;
                    local_12a = 0;
                    _local_13c = *param_3;
                    local_138 = param_3[1];
                    local_134 = *(undefined1 *)(param_3 + 2);
                    uStack_133 = 1;
                    iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                    if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                  }
                  iVar17 = (uVar9 - 1) * 0x159;
                  iVar7 = iVar17 + 0x200107e4;
                  packets = NEWS_DATA_LENGTH;
                  if (0x3f < NEWS_DATA_LENGTH) {
                    packets = 0x40;
                  }
                  iVar21 = memcmp_byte_arrays(iVar7,&NEWS_DATA_BUFFER,packets);
                  if (iVar21 != 0) {
                    fill_memory_buffer(iVar7,0,0x40);
                    clear_work_mode_flags();
                  }
                  packets = NEWS_DATA_LENGTH;
                  if (0x3f < NEWS_DATA_LENGTH) {
                    packets = 0x40;
                  }
                  memcpy(iVar7,&NEWS_DATA_BUFFER,packets);
                  if (2 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): stock code name : %s\n","ble_process_put_req",iVar7);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uVar23 = (uint)NEWS_DATA_LENGTH;
                  if ((&NEWS_DATA_BUFFER)[uVar23] == '\x02') {
                    uVar18 = (uint)*(ushort *)(&NEWS_DATA_SIZES + uVar23);
                    if (uVar18 < 0x119) {
                      iVar17 = iVar17 + 0x20010824;
                      iVar7 = memcmp_byte_arrays(iVar17,uVar23 + 0x2001068b,
                                                 (&NEWS_DATA_SIZES)[uVar23]);
                      if (iVar7 != 0) {
                        fill_memory_buffer(iVar17,0,0x118);
                        clear_work_mode_flags();
                      }
                      memcpy(iVar17,uVar23 + 0x2001068c,uVar18);
                      (&NEWS_ENTRY_FLAGS)[(uVar9 - 1) * 0x159] = 1;
                      if (2 < LOG_LEVEL) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): We received %d byte of data from the News App\n",
                                      "ble_process_put_req",uVar18);
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                      uStack_133 = 0;
                      uStack_132 = 0;
                      uStack_131 = 0;
                      uStack_130 = 0;
                      NEWS_TOTAL_PACKETS = 0;
                      local_12f = 0;
                      uStack_12e = 0;
                      NEWS_RECEIVED_COUNT = 0;
                      uStack_12c = 0;
                      uStack_12b = 0;
                      local_12a = 0;
                      _local_13c = *param_3;
                      local_138 = param_3[1];
                      local_134 = *(undefined1 *)(param_3 + 2);
                      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                      if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                    }
                    else {
                      if (0 < LOG_LEVEL) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): news txt format oversize !!!\n","ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                      uStack_132 = 0;
                      uStack_131 = 0;
                      uStack_130 = 0;
                      local_12f = 0;
                      uStack_12e = 0;
                      uStack_12c = 0;
                      uStack_12b = 0;
                      local_12a = 0;
                      _local_13c = *param_3;
                      local_138 = param_3[1];
                      local_134 = *(undefined1 *)(param_3 + 2);
                      uStack_133 = 1;
                      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                      if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                        if (IS_DEBUG == 0) {
                          DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                        }
                        else {
                          handle_heartbeat();
                        }
                      }
                    }
                  }
                  else {
                    if (0 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): news change rate data struct error, error type = %d\n",
                                    "ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                    uStack_132 = 0;
                    uStack_131 = 0;
                    uStack_130 = 0;
                    local_12f = 0;
                    uStack_12e = 0;
                    uStack_12c = 0;
                    uStack_12b = 0;
                    local_12a = 0;
                    _local_13c = *param_3;
                    local_138 = param_3[1];
                    local_134 = *(undefined1 *)(param_3 + 2);
                    uStack_133 = 1;
                    iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                    if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                  }
                }
                else {
                  if (0 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): news data struct error, error type = %d\n",
                                  "ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uStack_132 = 0;
                  uStack_131 = 0;
                  uStack_130 = 0;
                  local_12f = 0;
                  uStack_12e = 0;
                  uStack_12c = 0;
                  uStack_12b = 0;
                  local_12a = 0;
                  _local_13c = *param_3;
                  local_138 = param_3[1];
                  local_134 = *(undefined1 *)(param_3 + 2);
                  uStack_133 = 1;
                  iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                  if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                }
              }
              else {
                if (0 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): stocks data oversize!!!!\n","ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uStack_132 = 0;
                uStack_131 = 0;
                uStack_130 = 0;
                local_12f = 0;
                uStack_12e = 0;
                uStack_12c = 0;
                uStack_12b = 0;
                local_12a = 0;
                _local_13c = *param_3;
                local_138 = param_3[1];
                local_134 = *(undefined1 *)(param_3 + 2);
                uStack_133 = 1;
                iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
                if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
            }
            else {
              uStack_133 = 0;
              uStack_132 = 0;
              uStack_131 = 0;
              uStack_130 = 0;
              local_12f = 0;
              uStack_12e = 0;
              uStack_12c = 0;
              uStack_12b = 0;
              local_12a = 0;
              _local_13c = *param_3;
              local_138 = param_3[1];
              local_134 = *(undefined1 *)(param_3 + 2);
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,NEWS_RECEIVED_COUNT + 1);
              }
              else {
                handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req",uVar9,NEWS_RECEIVED_COUNT + 1);
              }
            }
            NEWS_TOTAL_PACKETS = 0;
            NEWS_RECEIVED_COUNT = 0;
            fill_memory_buffer(&NEWS_DATA_BUFFER,0,0x161);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        break;
      case 6:
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 100) = *(undefined1 *)((int)param_3 + 5);
        *(undefined1 *)(*(int *)(param_1 + 0x870) + 0x65) = *(undefined1 *)((int)param_3 + 6);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(0x9bc2d,0x9e077,(uint)*(byte *)(*(int *)(param_1 + 0x870) + 100),
                        (uint)*(byte *)(*(int *)(param_1 + 0x870) + 0x65));
          }
          else {
            handle_heartbeat(0x9bc2d,0x9e077);
          }
        }
        load_work_mode_settings();
        initialize_config_signature();
        fill_memory_buffer((int)&local_138 + 1,0,0xf);
        _local_13c = *param_3;
        local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
      }
    }
    else {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(0x9bafd,0x9e077,uVar9,uVar23);
        }
        else {
          handle_heartbeat(0x9bafd,0x9e077,uVar9,uVar23);
        }
      }
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
    }
    break;
  case 7:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(0x9ba85,0x9e077);
      }
      else {
        handle_heartbeat();
      }
    }
    puVar25[1] = *(undefined4 *)((int)param_3 + 1);
    *(undefined1 *)(puVar25 + 2) = *(undefined1 *)((int)param_3 + 5);
    *(undefined2 *)((int)puVar25 + 2) = 5;
    *(undefined4 *)(param_1 + 0x14) = 9;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(0x9baaa,0x9e077,puVar25[1],(uint)*(byte *)(puVar25 + 2));
      }
      else {
        handle_heartbeat(0x9baaa,0x9e077);
      }
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(0x9bad3,0x9e077,(uint)*(byte *)(puVar25 + 1),(uint)*(byte *)((int)puVar25 + 5)
                      ,(uint)*(byte *)((int)puVar25 + 6),(uint)*(byte *)((int)puVar25 + 7),
                      (uint)*(byte *)(puVar25 + 2));
        }
        else {
          handle_heartbeat();
        }
      }
    }
    spi_master_transaction_debug(param_1,&local_128,8);
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 8:
    uVar23 = (uint)*(ushort *)((int)param_3 + 1);
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 == uVar9) {
      cVar5 = *(char *)(param_3 + 1);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(0x9ba29,0x9e077);
        }
        else {
          handle_heartbeat();
        }
      }
      if (cVar5 == '\x03') {
        if (*(byte *)((int)param_3 + 5) < 3) {
          iVar17 = get_work_mode();
          if (iVar17 == 1) {
            PROXY_THREAD_ID = *(undefined1 *)((int)param_3 + 3);
            double_click_start(*(undefined1 *)((int)param_3 + 5));
          }
          else {
            fill_memory_buffer(local_13c,0,0x14);
            validate_memory_bounds(local_13c,param_3,uVar23,0x14);
            (**(code **)(param_1 + 0xc))(local_13c,uVar23);
          }
        }
        else if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT(0x9ba52,0x9e077);
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else if (cVar5 == '\x04') {
        fill_memory_buffer(local_13c,0,0x14);
        validate_memory_bounds(local_13c,param_3,uVar23,0x14);
        return_status = get_system_byte_2();
        local_138._0_2_ = CONCAT11(return_status,(undefined1)local_138);
        (**(code **)(param_1 + 0xc))(local_13c,uVar23);
      }
    }
    else if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(0x9b8fd,0x9e077,uVar9,uVar23);
      }
      else {
        handle_heartbeat(0x9b8fd,0x9e077,uVar9,uVar23);
      }
    }
    break;
  case 9:
    uVar1 = *(ushort *)((int)param_3 + 1);
    uVar23 = (uint)uVar1;
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 != uVar9) {
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req",uVar9,uVar23);
        return;
      }
      DEBUG_PRINT("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                  ,"ble_process_put_req",uVar9,uVar23);
      return;
    }
    puVar12 = (undefined1 *)(uint)*(byte *)(param_3 + 1);
    switch(puVar12) {
    case (undefined1 *)0x1:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received teleprompter init  packet ....\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(puVar10,0,0x217);
      iVar7 = LOG_LEVEL;
      uVar2 = *(ushort *)((int)param_3 + 5);
      uVar9 = (uint)uVar2;
      uVar18 = (uint)*(ushort *)((int)param_3 + 7);
      if (uVar9 == 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received teleprompter init packet,total packet = 1\n",
                        "ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        return_status = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(param_1 + -0x6af) = return_status;
        set_work_mode_status(return_status,0);
        *(undefined1 *)((int)puVar25 + 0xe) = 1;
        *(undefined1 *)((int)puVar25 + 5) = 1;
        *(byte *)(puVar25 + 1) = *(byte *)((int)param_3 + 10) & 0xf;
        *(byte *)((int)puVar25 + 0xf) = *(byte *)((int)param_3 + 10) & 0x80;
        *(undefined1 *)(puVar25 + 4) = *(undefined1 *)((int)param_3 + 9);
        *(undefined1 *)((int)puVar25 + 0x11) = *(undefined1 *)((int)param_3 + 0xb);
        *(undefined1 *)((int)puVar25 + 0x12) = 0;
        *(undefined1 *)((int)puVar25 + 0x13) = 0;
        *(undefined1 *)(puVar25 + 5) = 0;
        memcpy((int)puVar25 + 0x1b,param_3 + 3,uVar23 - 0x14);
        *(short *)((int)puVar25 + 0x19) = (short)(uVar23 - 0x14);
        uVar6 = *(undefined4 *)((int)param_3 + (uVar23 - 4));
        *(uint *)((int)puVar25 + 6) =
             (uint)*(byte *)((int)param_3 + (uVar23 - 6)) << 0x10 |
             (uint)*(byte *)((int)param_3 + (uVar23 - 7)) << 8 |
             (uint)*(byte *)((int)param_3 + (uVar23 - 8)) |
             (uint)*(byte *)((int)param_3 + (uVar23 - 5)) << 0x18;
        *(undefined4 *)((int)puVar25 + 10) = uVar6;
        local_148 = 0;
        uStack_144 = 0;
        calculate_elapsed_time(&local_148);
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): *******************------ received app send timestamp = %lld,current system timestamp = %lld\n"
                        ,"ble_process_put_req",*(undefined4 *)((int)puVar25 + 6),
                        *(undefined4 *)((int)puVar25 + 10),local_148,uStack_144);
          }
          else {
            handle_heartbeat();
          }
        }
        uVar1 = *(ushort *)(packet + 2);
        *(ushort *)((int)puVar25 + 2) = uVar1;
        *(uint *)(param_1 + 0x14) = uVar1 + 4;
        spi_master_transaction_debug(param_1,&local_128,8);
        uStack_133 = 0;
        uStack_132 = 0;
        uStack_131 = 0;
        uStack_130 = 0;
        local_12f = 0;
        uStack_12e = 0;
        uStack_12c = 0;
        uStack_12b = 0;
        local_12a = 0;
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        iVar17 = get_work_mode();
        if (iVar17 == 1) {
          send_response_data_to_msgqueue(local_13c,10);
        }
        else {
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (uVar18 == 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Action ID = 1,Received multiple initialization packets, currently the first packet of data\n"
                        ,"ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        NAV_PACKET_COUNTER = 0;
        NAV_DATA_OFFSET = 0;
        TELEPROMPTER_BUFFER_OFFSET = 0;
        NAV_TOTAL_PACKETS = uVar2;
        fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
        TELEPROMPTER_ACTION_ID = 1;
        TELEPROMPTER_COMPLETION_FLAG = '\0';
        TELEPROMPTER_DATA_BUFFER = *(byte *)((int)param_3 + 10) & 0xf;
        TELEPROMPTER_DISPLAY_MODE = *(byte *)((int)param_3 + 10) & 0x80;
        TELEPROMPTER_LANGUAGE = *(undefined1 *)((int)param_3 + 9);
        TELEPROMPTER_SPEED = *(undefined1 *)((int)param_3 + 0xb);
        TELEPROMPTER_PAUSE_FLAG = 0;
        TELEPROMPTER_OPERATION_COUNTER = 0;
        _TELEPROMPTER_TIMESTAMP_LOW = 0;
        _TELEPROMPTER_TIMESTAMP_HIGH = 0;
        validate_memory_bounds(&TELEPROMPTER_TEXT_BUFFER,param_3 + 3,uVar23 - 0xc,0x200);
        TELEPROMPTER_BUFFER_OFFSET = (ushort)(uVar23 - 0xc);
        _local_13c = *param_3;
        NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 0;
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else if (uVar18 < uVar9) {
        if ((uint)NAV_PACKET_COUNTER == uVar18 - 1) {
          memcpy(&TELEPROMPTER_TEXT_BUFFER + TELEPROMPTER_BUFFER_OFFSET,param_3 + 3,uVar23 - 0xc);
          TELEPROMPTER_BUFFER_OFFSET = (TELEPROMPTER_BUFFER_OFFSET - 0xc) + uVar1;
          if (2 < iVar7) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTION ID = 1,Successfully received the subpackage content, the packet sequence is %d\n"
                          ,"ble_process_put_req",uVar18);
            }
            else {
              handle_heartbeat();
            }
          }
          _local_13c = *param_3;
          NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 0;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
          NAV_TOTAL_PACKETS = uVar2;
          fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
          _local_13c = *param_3;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (uVar18 == uVar9) {
        if (((uint)NAV_PACKET_COUNTER == uVar18 - 1) && (NAV_TOTAL_PACKETS == uVar18)) {
          return_status = *(undefined1 *)((int)param_3 + 3);
          *(undefined1 *)(param_1 + -0x6af) = return_status;
          set_work_mode_status(return_status,0);
          memcpy(&TELEPROMPTER_TEXT_BUFFER + TELEPROMPTER_BUFFER_OFFSET,param_3 + 3,uVar23 - 0x14);
          TELEPROMPTER_BUFFER_OFFSET = (TELEPROMPTER_BUFFER_OFFSET - 0x14) + uVar1;
          _TELEPROMPTER_TIMESTAMP_LOW =
               (uint)*(byte *)((int)param_3 + (uVar23 - 6)) << 0x10 |
               (uint)*(byte *)((int)param_3 + (uVar23 - 7)) << 8 |
               (uint)*(byte *)((int)param_3 + (uVar23 - 8)) |
               (uint)*(byte *)((int)param_3 + (uVar23 - 5)) << 0x18;
          _TELEPROMPTER_TIMESTAMP_HIGH = *(undefined4 *)((int)param_3 + (uVar23 - 4));
          local_128 = 0;
          local_124 = 0;
          TELEPROMPTER_DATA_SIZE = TELEPROMPTER_BUFFER_OFFSET;
          calculate_elapsed_time(&local_128);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): *******************------ received app send timestamp = %lld,current system timestamp = %lld\n"
                          ,"ble_process_put_req",_TELEPROMPTER_TIMESTAMP_LOW,
                          _TELEPROMPTER_TIMESTAMP_HIGH,local_128,local_124);
            }
            else {
              handle_heartbeat();
            }
          }
          NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
          TELEPROMPTER_COMPLETION_FLAG = '\x01';
          iVar7 = get_work_mode();
          memcpy(*(undefined4 *)(iVar7 + 0xffc),&TELEPROMPTER_DATA_BUFFER,0x217);
          if (TELEPROMPTER_COMPLETION_FLAG != '\0') {
            update_persist_task_status(iVar17,9,2);
          }
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTION ID = 1,Successfully assembled multiple packages of data, and updated the complete content to the UI thread for data update.\n"
                          ,"ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          local_138 = param_3[1];
          NAV_TOTAL_PACKETS = 0;
          _local_13c = *param_3;
          NAV_PACKET_COUNTER = 0;
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 0;
          iVar17 = get_work_mode();
          if (iVar17 == 1) {
            send_response_data_to_msgqueue(local_13c,10);
          }
          else {
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_PACKET_COUNTER = 0;
          NAV_TOTAL_PACKETS = uVar2;
          fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
          _local_13c = *param_3;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): A serious packet order error occurred!\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        NAV_TOTAL_PACKETS = 0;
        NAV_PACKET_COUNTER = 0;
        fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 1;
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      break;
    case (undefined1 *)0x2:
      *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
      set_work_mode_status(*(undefined1 *)((int)param_3 + 3),0);
      *(uint *)(param_1 + 0x14) = *(ushort *)((int)puVar25 + 2) + 4;
      *(undefined2 *)(*(int *)(param_1 + 0x880) + 0xe) = *(undefined2 *)((int)param_3 + 6);
      *(undefined1 *)(*(int *)(param_1 + 0x880) + 0xd) = *(undefined1 *)((int)param_3 + 5);
      *(undefined1 *)(*(int *)(param_1 + 0x880) + 10) = 2;
      iVar7 = *(int *)(param_1 + 0x880);
      uVar6 = *(undefined4 *)((int)param_3 + (uVar23 - 4));
      *(uint *)(iVar7 + 2) =
           (uint)*(byte *)((int)param_3 + (uVar23 - 6)) << 0x10 |
           (uint)*(byte *)((int)param_3 + (uVar23 - 7)) << 8 |
           (uint)*(byte *)((int)param_3 + (uVar23 - 8)) |
           (uint)*(byte *)((int)param_3 + (uVar23 - 5)) << 0x18;
      iVar17 = LOG_LEVEL;
      *(undefined4 *)(iVar7 + 6) = uVar6;
      if (2 < iVar17) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): MARK POSITION = %d\n","ble_process_put_req",
                      (uint)*(ushort *)(*(int *)(param_1 + 0x880) + 0xe));
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer((int)&local_138 + 1,0,0xf);
      _local_13c = *param_3;
      local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)(param_3 + 1));
      iVar17 = get_work_mode();
      if (iVar17 != 1) {
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
        if (-1 < iVar17) {
          return;
        }
        if (LOG_LEVEL < 1) {
          return;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return;
        }
        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
        return;
      }
      goto LAB_0001e8ae;
    case (undefined1 *)0x3:
    case (undefined1 *)0x7:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received teleprompter text upgrade packet ....\n","ble_process_put_req"
                     );
        }
        else {
          handle_heartbeat();
        }
      }
      iVar17 = LOG_LEVEL;
      uVar2 = *(ushort *)((int)param_3 + 5);
      uVar9 = (uint)uVar2;
      uVar18 = (uint)*(ushort *)((int)param_3 + 7);
      if (uVar9 == 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received TEXT UPGRADE Single PACKET ...\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        return_status = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(param_1 + -0x6af) = return_status;
        set_work_mode_status(return_status,0);
        *(undefined1 *)(*(int *)(param_1 + 0x880) + 10) = 3;
        *(undefined1 *)(*(int *)(param_1 + 0x880) + 1) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x880) + 0xd) = *(undefined1 *)((int)param_3 + 9);
        *(undefined2 *)(*(int *)(param_1 + 0x880) + 0xe) = *(undefined2 *)((int)param_3 + 10);
        fill_memory_buffer(*(int *)(param_1 + 0x880) + 0x17,0,0x200);
        memcpy(*(int *)(param_1 + 0x880) + 0x17,param_3 + 3,uVar23 - 0x14);
        *(short *)(*(int *)(param_1 + 0x880) + 0x15) = (short)(uVar23 - 0x14);
        iVar17 = *(int *)(param_1 + 0x880);
        uVar6 = *(undefined4 *)((int)param_3 + (uVar23 - 4));
        *(uint *)(iVar17 + 2) =
             (uint)*(byte *)((int)param_3 + (uVar23 - 6)) << 0x10 |
             (uint)*(byte *)((int)param_3 + (uVar23 - 7)) << 8 |
             (uint)*(byte *)((int)param_3 + (uVar23 - 8)) |
             (uint)*(byte *)((int)param_3 + (uVar23 - 5)) << 0x18;
        *(undefined4 *)(iVar17 + 6) = uVar6;
        local_128 = 0;
        local_124 = 0;
        calculate_elapsed_time(&local_128);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): *******************------ received app send timestamp = %lld,current system timestamp = %lld\n"
                        ,"ble_process_put_req",*(undefined4 *)(*(int *)(param_1 + 0x880) + 2),
                        *(undefined4 *)(*(int *)(param_1 + 0x880) + 6),local_128,local_124);
          }
          else {
            handle_heartbeat();
          }
        }
        if (puVar12 == (undefined1 *)0x7) {
          TELEPROMPTER_ACTIVE_FLAG = 1;
        }
        uVar1 = *(ushort *)(packet + 2);
        *(ushort *)((int)puVar25 + 2) = uVar1;
        *(uint *)(param_1 + 0x14) = uVar1 + 4;
        uStack_133 = 0;
        uStack_132 = 0;
        uStack_131 = 0;
        uStack_130 = 0;
        local_12f = 0;
        uStack_12e = 0;
        uStack_12c = 0;
        uStack_12b = 0;
        local_12a = 0;
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        iVar17 = get_work_mode();
        if (iVar17 == 1) {
          send_response_data_to_msgqueue(local_13c,10);
        }
        else {
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (uVar18 == 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ACTION ID = 3,Received multiple initialization packets, currently the first packet of data\n"
                        ,"ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        NAV_PACKET_COUNTER = 0;
        NAV_DATA_OFFSET = 0;
        NAV_TOTAL_PACKETS = uVar2;
        fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
        validate_memory_bounds(&TELEPROMPTER_DATA_BUFFER,param_3 + 3,uVar23 - 0xc,0x217);
        NAV_DATA_OFFSET = (ushort)(uVar23 - 0xc);
        iVar17 = *(int *)(param_1 + 0x880);
        NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
        *(undefined1 *)(iVar17 + 2) = 0;
        *(undefined1 *)(iVar17 + 3) = 0;
        *(undefined1 *)(iVar17 + 4) = 0;
        *(undefined1 *)(iVar17 + 5) = 0;
        *(undefined1 *)(iVar17 + 6) = 0;
        *(undefined1 *)(iVar17 + 7) = 0;
        *(undefined1 *)(iVar17 + 8) = 0;
        *(undefined1 *)(iVar17 + 9) = 0;
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 0;
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else if (uVar18 < uVar9) {
        if ((uint)NAV_PACKET_COUNTER == uVar18 - 1) {
          memcpy(&TELEPROMPTER_DATA_BUFFER + NAV_DATA_OFFSET,param_3 + 3,uVar23 - 0xc);
          NAV_DATA_OFFSET = (NAV_DATA_OFFSET - 0xc) + uVar1;
          if (2 < iVar17) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTION ID = 3,Successfully received the subpackage content, the packet sequence is %d\n"
                          ,"ble_process_put_req",uVar18);
            }
            else {
              handle_heartbeat();
            }
          }
          _local_13c = *param_3;
          NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 0;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_TOTAL_PACKETS = 0;
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
          fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
          _local_13c = *param_3;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else if (uVar9 == uVar18) {
        if (((uint)NAV_PACKET_COUNTER == uVar9 - 1) && (NAV_TOTAL_PACKETS == uVar9)) {
          return_status = *(undefined1 *)((int)param_3 + 3);
          *(undefined1 *)(param_1 + -0x6af) = return_status;
          set_work_mode_status(return_status,0);
          memcpy(&TELEPROMPTER_DATA_BUFFER + NAV_DATA_OFFSET,param_3 + 3,uVar23 - 0x14);
          NAV_DATA_OFFSET = (NAV_DATA_OFFSET - 0x14) + uVar1;
          NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
          fill_memory_buffer(*(int *)(param_1 + 0x880) + 0x17,0,0x200);
          memcpy(*(int *)(param_1 + 0x880) + 0x17,&TELEPROMPTER_DATA_BUFFER,NAV_DATA_OFFSET);
          *(ushort *)(*(int *)(param_1 + 0x880) + 0x15) = NAV_DATA_OFFSET;
          *(undefined1 *)(*(int *)(param_1 + 0x880) + 10) = 3;
          *(undefined1 *)(*(int *)(param_1 + 0x880) + 0xd) = *(undefined1 *)((int)param_3 + 9);
          *(undefined2 *)(*(int *)(param_1 + 0x880) + 0xe) = *(undefined2 *)((int)param_3 + 10);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTIION ID = 3,Successfully assembled multiple packages of data, and updated the complete content to the UI thread for data update.\n"
                          ,"ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar17 = *(int *)(param_1 + 0x880);
          uVar6 = *(undefined4 *)((int)param_3 + (uVar23 - 4));
          *(uint *)(iVar17 + 2) =
               (uint)*(byte *)((int)param_3 + (uVar23 - 6)) << 0x10 |
               (uint)*(byte *)((int)param_3 + (uVar23 - 7)) << 8 |
               (uint)*(byte *)((int)param_3 + (uVar23 - 8)) |
               (uint)*(byte *)((int)param_3 + (uVar23 - 5)) << 0x18;
          *(undefined4 *)(iVar17 + 6) = uVar6;
          local_128 = 0;
          local_124 = 0;
          calculate_elapsed_time(&local_128);
          return_status = extraout_r2;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): *******************------ received app send timestamp = %lld,current system timestamp = %lld\n"
                          ,"ble_process_put_req",*(undefined4 *)(*(int *)(param_1 + 0x880) + 2),
                          *(undefined4 *)(*(int *)(param_1 + 0x880) + 6),local_128,local_124);
              return_status = extraout_r2_01;
            }
            else {
              handle_heartbeat();
              return_status = extraout_r2_00;
            }
          }
          local_138 = param_3[1];
          bVar28 = puVar12 == (undefined1 *)0x7;
          if (bVar28) {
            return_status = 1;
            puVar12 = &TELEPROMPTER_ACTIVE_FLAG;
          }
          _local_13c = *param_3;
          if (bVar28) {
            *puVar12 = return_status;
          }
          NAV_TOTAL_PACKETS = 0;
          local_134 = *(undefined1 *)(param_3 + 2);
          NAV_PACKET_COUNTER = 0;
          uStack_133 = 0;
          iVar17 = get_work_mode();
          if (iVar17 == 1) {
            send_response_data_to_msgqueue(local_13c,10);
          }
          else {
            iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
            if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
          NAV_TOTAL_PACKETS = uVar2;
          fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
          _local_13c = *param_3;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
          if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ACTION ID = 3,A serious packet order error occurred!\n",
                        "ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        NAV_TOTAL_PACKETS = 0;
        NAV_PACKET_COUNTER = 0;
        NAV_DATA_OFFSET = 0;
        fill_memory_buffer(&TELEPROMPTER_DATA_BUFFER,0,0x217);
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 1;
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      break;
    case (undefined1 *)0x5:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received teleprompter func exit packet ....\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar17 = get_work_mode();
      if (iVar17 == 1) {
        return_status = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(param_1 + -0x6af) = return_status;
        set_work_mode_status(return_status,0);
        fill_memory_buffer(puVar10,0,0x217);
        *(uint *)(param_1 + 0x14) = *(ushort *)((int)puVar25 + 2) + 4;
        spi_master_transaction_debug(param_1,&local_128,8);
      }
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1));
      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
      if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    break;
  case 10:
    uVar1 = *(ushort *)((int)param_3 + 1);
    uVar23 = (uint)uVar1;
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 != uVar9) {
      if (LOG_LEVEL < 2) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req",uVar9,uVar23);
        return;
      }
      DEBUG_PRINT("%s(): packet length error,input data length = %d,packet data length = %d\n",
                  "ble_process_put_req",uVar9,uVar23);
      return;
    }
    switch(*(undefined1 *)(param_3 + 1)) {
    case 0:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received navigation func startup  packet ....\n","ble_process_put_req")
          ;
        }
        else {
          handle_heartbeat();
        }
      }
      iVar17 = get_work_mode();
      puVar12 = *(undefined1 **)(iVar17 + 0x1000);
      *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
      fill_memory_buffer(puVar12,0,0xf5);
      iVar17 = get_work_mode();
      fill_memory_buffer(*(undefined4 *)(iVar17 + 0x1000),0,0xf5);
      puVar12[0xaf] = 0;
      *puVar12 = 1;
      puVar12[0xb0] = *(undefined1 *)((int)param_3 + 3);
      OVERVIEW_MAP_ACTIVE = 0;
      PANORAMIC_MAP_ACTIVE = 0;
      uVar6 = get_work_mode();
      update_persist_task_status(uVar6,10,2);
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138._0_2_ = (ushort)*(byte *)(param_3 + 1);
      iVar17 = get_work_mode();
      if (iVar17 != 1) {
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
        if (-1 < iVar17) {
          return;
        }
        if (LOG_LEVEL < 1) {
          return;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return;
        }
        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
        return;
      }
      goto LAB_0001e8ae;
    case 1:
      iVar17 = get_work_mode();
      iVar7 = *(int *)(iVar17 + 0x1000);
      iVar17 = get_work_mode();
      *(undefined1 *)(iVar17 + 0xcd) = *(undefined1 *)((int)param_3 + 3);
      *(undefined1 *)(iVar7 + 1) = *(undefined1 *)((int)param_3 + 5);
      uVar1 = *(ushort *)((int)param_3 + 6);
      *(ushort *)(iVar7 + 8) = uVar1;
      uVar2 = *(ushort *)(param_3 + 2);
      *(ushort *)(iVar7 + 10) = uVar2;
      if (((0x1e8 < uVar1) || (0x88 < uVar2)) && (0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): app send x/y parameter overstep!!! x= %d,y= %d\n","ble_process_put_req"
                     );
        }
        else {
          handle_heartbeat("%s(): app send x/y parameter overstep!!! x= %d,y= %d\n",
                           "ble_process_put_req");
        }
      }
      pcVar20 = (char *)((int)param_3 + 9);
      uVar9 = 0;
      do {
        uVar18 = uVar9;
        if (uVar23 - 10 <= uVar18) goto LAB_0001fbe4;
        pcVar20 = pcVar20 + 1;
        uVar9 = uVar18 + 1;
      } while (*pcVar20 != '\0');
      if (0x18 < (int)uVar9) {
LAB_0001fbe4:
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): TIME_REMAINNING_STRING_SIZE oversize\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        return;
      }
      iVar17 = iVar7 + 0xd;
      fill_memory_buffer(iVar17,0,0x18);
      memcpy(iVar17,(int)param_3 + 10,uVar9);
      iVar24 = uVar18 + 10;
      iVar21 = uVar23 - 1;
      pcVar20 = (char *)((int)param_3 + iVar24);
      uVar9 = 0;
      do {
        if ((uint)(iVar21 - iVar24) <= uVar9) goto LAB_0001fc74;
        pcVar20 = pcVar20 + 1;
        uVar9 = uVar9 + 1;
      } while (*pcVar20 != '\0');
      if (0x18 < (int)uVar9) {
LAB_0001fc74:
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): KILOMETER_REMAINNING_STRING_SIZE oversize\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        return;
      }
      iVar14 = iVar7 + 0x25;
      fill_memory_buffer(iVar14,0,0x18);
      memcpy(iVar14,uVar18 + 0xb + (int)param_3,uVar9);
      iVar24 = iVar24 + uVar9;
      pcVar20 = (char *)((int)param_3 + iVar24);
      uVar9 = 0;
      do {
        if ((uint)(iVar21 - iVar24) <= uVar9) goto LAB_0001fcfe;
        pcVar20 = pcVar20 + 1;
        uVar9 = uVar9 + 1;
      } while (*pcVar20 != '\0');
      if (0x40 < (int)uVar9) {
LAB_0001fcfe:
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ROAD_NAME_STRING_SIZE oversize\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        return;
      }
      iVar15 = iVar7 + 0x3d;
      fill_memory_buffer(iVar15,0,0x40);
      memcpy(iVar15,iVar24 + 1 + (int)param_3,uVar9);
      iVar24 = iVar24 + uVar9;
      pcVar20 = (char *)((int)param_3 + iVar24);
      uVar9 = 0;
      do {
        if ((uint)(iVar21 - iVar24) <= uVar9) goto LAB_0001fdb6;
        pcVar20 = pcVar20 + 1;
        uVar9 = uVar9 + 1;
      } while (*pcVar20 != '\0');
      if (0x18 < (int)uVar9) {
LAB_0001fdb6:
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): REMAINING_DISTANCE_STRING_SIZE oversize\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        return;
      }
      iVar27 = iVar7 + 0x7d;
      fill_memory_buffer(iVar27,0,0x18);
      iVar19 = uVar9 + iVar24;
      memcpy(iVar27,iVar24 + 1 + (int)param_3,uVar9);
      iVar24 = LOG_LEVEL;
      pcVar20 = (char *)((int)param_3 + iVar19);
      uVar9 = 0;
      do {
        if ((uint)(iVar21 - iVar19) <= uVar9) goto LAB_0001fe3a;
        pcVar20 = pcVar20 + 1;
        uVar9 = uVar9 + 1;
      } while (*pcVar20 != '\0');
      if (0x18 < (int)uVar9) {
LAB_0001fe3a:
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): CURRENT_SPEED_STRING_SIZE oversize\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
        (**(code **)(param_1 + 0xc))(local_13c,6);
        return;
      }
      iVar21 = iVar7 + 0x95;
      fill_memory_buffer(iVar21,0,0x18);
      memcpy(iVar21,(int)param_3 + iVar19 + 1,uVar9);
      if (2 < iVar24) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): direction = %d,x = %d,y = %d,time_remaining = %s,remainning_kilometers = %s,road_name_info = %s,                            remaining_distance_info= %s,current speed = %s\n"
                      ,"ble_process_put_req",(uint)*(byte *)(iVar7 + 1),(uint)*(ushort *)(iVar7 + 8)
                      ,(uint)*(ushort *)(iVar7 + 10),iVar17,iVar14,iVar15,iVar27,iVar21);
        }
        else {
          handle_heartbeat("%s(): direction = %d,x = %d,y = %d,time_remaining = %s,remainning_kilometers = %s,road_name_info = %s,                            remaining_distance_info= %s,current speed = %s\n"
                           ,"ble_process_put_req",(uint)*(byte *)(iVar7 + 1),
                           (uint)*(ushort *)(iVar7 + 8),(uint)*(ushort *)(iVar7 + 10),iVar17,iVar14,
                           iVar15,iVar27,iVar21);
        }
      }
      *(undefined1 *)(iVar7 + 6) = 1;
      *(undefined1 *)(iVar7 + 0xaf) = 1;
      *(undefined1 *)(iVar7 + 0xb0) = *(undefined1 *)((int)param_3 + 3);
      fill_memory_buffer((int)&local_138 + 1,0,0xf);
      _local_13c = *param_3;
      local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)(param_3 + 1));
      NAVIGATION_ACTIVE = 1;
      iVar17 = get_work_mode();
      if (iVar17 != 1) {
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
        if (-1 < iVar17) {
          return;
        }
        if (LOG_LEVEL < 1) {
          return;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return;
        }
        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
        return;
      }
      goto LAB_0001e8ae;
    case 2:
      uVar18 = (uint)*(ushort *)((int)param_3 + 7);
      uVar2 = *(ushort *)((int)param_3 + 5);
      uVar9 = (uint)uVar2;
      if (uVar18 == 1) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Received multiple initialization packets, currently the first packet of data,total packet = %d\n"
                        ,"ble_process_put_req",uVar9);
          }
          else {
            handle_heartbeat();
          }
        }
        NAV_PACKET_COUNTER = 0;
        NAV_DATA_OFFSET = 0;
        NAV_TOTAL_PACKETS = uVar2;
        iVar17 = get_work_mode();
        iVar17 = *(int *)(iVar17 + 0x1000);
        OVERVIEW_MAP_ACTIVE = 0;
        configure_work_mode_state(0xffffffff,0xffffffff);
        fill_memory_buffer(&overview_map_buffer,0,0x1210);
        uVar1 = (ushort)(uVar23 - 9);
        validate_memory_bounds(&overview_map_buffer,(int)param_3 + 9,uVar23 - 9,0x1210);
        unlock_navigation_data_mutex();
        NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
        NAV_DATA_OFFSET = uVar1;
        if (uVar9 == 1) {
          OVERVIEW_MAP_READY = (undefined1)uVar2;
          *(undefined1 *)(iVar17 + 6) = OVERVIEW_MAP_READY;
          OVERVIEW_MAP_ACTIVE = OVERVIEW_MAP_READY;
          *(undefined1 *)(iVar17 + 0xaf) = 2;
          *(undefined1 *)(iVar17 + 0xb0) = *(undefined1 *)((int)param_3 + 3);
          *(uint *)(iVar17 + 0xb1) = (uint)NAV_DATA_OFFSET;
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Successfully received navigation data .Maps are compressed to only one pack!!!\n"
                          ,"ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          NAV_TOTAL_PACKETS = 0;
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
        }
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 0;
        (**(code **)(param_1 + 0xc))(local_13c,10);
      }
      else if (uVar18 < uVar9) {
        if ((uint)NAV_PACKET_COUNTER == uVar18 - 1) {
          if ((NAV_DATA_OFFSET - 9) + uVar23 < 0x1210) {
            get_work_mode();
            configure_work_mode_state(0xffffffff,0xffffffff);
            memcpy(&overview_map_buffer + NAV_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
            unlock_navigation_data_mutex();
            OVERVIEW_MAP_ACTIVE = 0;
            NAV_DATA_OFFSET = (NAV_DATA_OFFSET - 9) + uVar1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Successfully received the subpackage content, the packet sequence is %d,total size = %d\n"
                            ,"ble_process_put_req",uVar18,(uint)NAV_DATA_OFFSET);
              }
              else {
                handle_heartbeat("%s(): Successfully received the subpackage content, the packet sequence is %d,total size = %d\n"
                                 ,"ble_process_put_req",uVar18,NAV_DATA_OFFSET);
              }
            }
            NAV_PACKET_COUNTER = NAV_PACKET_COUNTER + 1;
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): overview map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                          ,"ble_process_put_req",(uint)NAV_DATA_OFFSET,
                          (NAV_DATA_OFFSET - 9) + uVar23);
            }
            else {
              handle_heartbeat("%s(): overview map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                               ,"ble_process_put_req",NAV_DATA_OFFSET,(NAV_DATA_OFFSET - 9) + uVar23
                              );
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
          NAV_TOTAL_PACKETS = uVar2;
          configure_work_mode_state(0xffffffff,0xffffffff);
          fill_memory_buffer(&overview_map_buffer,0,0x1210);
          unlock_navigation_data_mutex();
          get_work_mode();
          _local_13c = *param_3;
          OVERVIEW_MAP_ACTIVE = 0;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          (**(code **)(param_1 + 0xc))(local_13c,10);
        }
      }
      else if (uVar18 == uVar9) {
        if (((uint)NAV_PACKET_COUNTER == uVar18 - 1) && (uVar18 == NAV_TOTAL_PACKETS)) {
          if ((NAV_DATA_OFFSET - 9) + uVar23 < 0x1211) {
            *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
            iVar17 = get_work_mode();
            iVar17 = *(int *)(iVar17 + 0x1000);
            configure_work_mode_state(0xffffffff,0xffffffff);
            memcpy(&overview_map_buffer + NAV_DATA_OFFSET,(int)param_3 + 9,uVar23 - 9);
            unlock_navigation_data_mutex();
            NAV_DATA_OFFSET = (NAV_DATA_OFFSET - 9) + uVar1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Successfully received the last packet,packet length = %d,total packet size = %d\n"
                            ,"ble_process_put_req",uVar18,(uint)NAV_DATA_OFFSET);
              }
              else {
                handle_heartbeat("%s(): Successfully received the last packet,packet length = %d,total packet size = %d\n"
                                 ,"ble_process_put_req",uVar18,NAV_DATA_OFFSET);
              }
            }
            *(undefined1 *)(iVar17 + 6) = 1;
            OVERVIEW_MAP_ACTIVE = 1;
            OVERVIEW_MAP_READY = 1;
            *(undefined1 *)(iVar17 + 0xaf) = 2;
            *(undefined1 *)(iVar17 + 0xb0) = *(undefined1 *)((int)param_3 + 3);
            *(uint *)(iVar17 + 0xb1) = (uint)NAV_DATA_OFFSET;
            local_138 = param_3[1];
            _local_13c = *param_3;
            NAV_TOTAL_PACKETS = 0;
            local_134 = *(undefined1 *)(param_3 + 2);
            NAV_PACKET_COUNTER = 0;
            NAV_DATA_OFFSET = 0;
            uStack_133 = 0;
            iVar17 = get_work_mode();
            if (iVar17 == 1) {
              send_response_data_to_msgqueue(local_13c,10);
            }
            else {
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,10);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): overview map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                          ,"ble_process_put_req",(uint)NAV_DATA_OFFSET,
                          (NAV_DATA_OFFSET - 9) + uVar23);
            }
            else {
              handle_heartbeat("%s(): overview map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                               ,"ble_process_put_req",NAV_DATA_OFFSET,(NAV_DATA_OFFSET - 9) + uVar23
                              );
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
            }
          }
          NAV_PACKET_COUNTER = 0;
          NAV_DATA_OFFSET = 0;
          NAV_TOTAL_PACKETS = uVar2;
          configure_work_mode_state(0xffffffff,0xffffffff);
          fill_memory_buffer(&overview_map_buffer,0,0x1210);
          unlock_navigation_data_mutex();
          get_work_mode();
          _local_13c = *param_3;
          OVERVIEW_MAP_ACTIVE = 0;
          local_138 = param_3[1];
          local_134 = *(undefined1 *)(param_3 + 2);
          uStack_133 = 1;
          (**(code **)(param_1 + 0xc))(local_13c,10);
        }
      }
      else {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                        ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
          }
          else {
            handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                             ,"ble_process_put_req",uVar18,NAV_PACKET_COUNTER + 1);
          }
        }
        NAV_PACKET_COUNTER = 0;
        NAV_DATA_OFFSET = 0;
        NAV_TOTAL_PACKETS = uVar2;
        configure_work_mode_state(0xffffffff,0xffffffff);
        fill_memory_buffer(&overview_map_buffer,0,0x1210);
        unlock_navigation_data_mutex();
        _local_13c = *param_3;
        local_138 = param_3[1];
        local_134 = *(undefined1 *)(param_3 + 2);
        uStack_133 = 1;
        (**(code **)(param_1 + 0xc))(local_13c,10);
      }
      break;
    case 3:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received navigation panoramic map data packet ....\n",
                      "ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      uVar9 = (uint)*(ushort *)((int)param_3 + 7);
      uVar2 = *(ushort *)((int)param_3 + 5);
      if (uVar9 == 1) {
        uVar23 = uVar23 - 10;
        PANORAMIC_PACKET_COUNTER = 0;
        PANORAMIC_PACKET_OFFSET = 0;
        PANORAMIC_TOTAL_PACKETS = uVar2;
        iVar17 = get_work_mode();
        PANORAMIC_MAP_ACTIVE = 0;
        *(undefined1 *)(*(int *)(iVar17 + 0x1000) + 0xad) = *(undefined1 *)((int)param_3 + 9);
        fill_memory_buffer(&panoramic_map_buffer,0,0x40d0);
        validate_memory_bounds(&panoramic_map_buffer,(int)param_3 + 10,uVar23,0x40d0);
        PANORAMIC_PACKET_OFFSET = (ushort)uVar23;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Successfully received multiple initialization packets, currently the first packet of data,received data size = %d,total packet len = %d\n"
                        ,"ble_process_put_req",uVar23 & 0xffff,(uint)PANORAMIC_TOTAL_PACKETS);
          }
          else {
            handle_heartbeat("%s(): Successfully received multiple initialization packets, currently the first packet of data,received data size = %d,total packet len = %d\n"
                             ,"ble_process_put_req",uVar23 & 0xffff,PANORAMIC_TOTAL_PACKETS);
          }
        }
        _local_13c = *param_3;
        PANORAMIC_PACKET_COUNTER = PANORAMIC_PACKET_COUNTER + 1;
        local_138 = param_3[1];
        local_134 = (undefined1)*(undefined2 *)(param_3 + 2);
        uStack_133 = (undefined1)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
        uStack_132 = 0;
        (**(code **)(param_1 + 0xc))(local_13c,0xb);
      }
      else if (uVar9 < uVar2) {
        get_work_mode();
        if ((uint)PANORAMIC_PACKET_COUNTER == uVar9 - 1) {
          if ((PANORAMIC_PACKET_OFFSET - 10) + uVar23 < 0x40d0) {
            PANORAMIC_MAP_ACTIVE = 0;
            memcpy(&panoramic_map_buffer + PANORAMIC_PACKET_OFFSET,(int)param_3 + 10,uVar23 - 10);
            PANORAMIC_PACKET_OFFSET = (PANORAMIC_PACKET_OFFSET - 10) + uVar1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Successfully received the subpackage content, the packet sequence is %d,total received size = %d\n"
                            ,"ble_process_put_req",uVar9,(uint)PANORAMIC_PACKET_OFFSET);
              }
              else {
                handle_heartbeat("%s(): Successfully received the subpackage content, the packet sequence is %d,total received size = %d\n"
                                 ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_OFFSET);
              }
            }
            PANORAMIC_PACKET_COUNTER = PANORAMIC_PACKET_COUNTER + 1;
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Panoramic map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                          ,"ble_process_put_req",(uint)PANORAMIC_PACKET_OFFSET,
                          (PANORAMIC_PACKET_OFFSET - 10) + uVar23);
            }
            else {
              handle_heartbeat("%s(): Panoramic map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                               ,"ble_process_put_req",PANORAMIC_PACKET_OFFSET,
                               (PANORAMIC_PACKET_OFFSET - 10) + uVar23);
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
            }
          }
          PANORAMIC_PACKET_COUNTER = 0;
          PANORAMIC_PACKET_OFFSET = 0;
          PANORAMIC_TOTAL_PACKETS = uVar2;
          fill_memory_buffer(&panoramic_map_buffer,0,0x40d0);
          _local_13c = *param_3;
          PANORAMIC_MAP_ACTIVE = 0;
          local_138 = param_3[1];
          local_134 = (undefined1)*(undefined2 *)(param_3 + 2);
          uStack_133 = (undefined1)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
          uStack_132 = 1;
          (**(code **)(param_1 + 0xc))(local_13c,0xb);
        }
      }
      else if (uVar9 == uVar2) {
        iVar17 = get_work_mode();
        uVar3 = PANORAMIC_PACKET_OFFSET;
        iVar17 = *(int *)(iVar17 + 0x1000);
        if (((uint)PANORAMIC_PACKET_COUNTER == uVar9 - 1) && (uVar9 == PANORAMIC_TOTAL_PACKETS)) {
          if ((PANORAMIC_PACKET_OFFSET - 10) + uVar23 < 0x40d1) {
            *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
            memcpy(&panoramic_map_buffer + uVar3,(int)param_3 + 10,uVar23 - 10);
            PANORAMIC_PACKET_OFFSET = (PANORAMIC_PACKET_OFFSET - 10) + uVar1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Successfully received panoramic map  last packet,Packet id = %d,total received size = %d\n"
                            ,"ble_process_put_req",uVar9,(uint)PANORAMIC_PACKET_OFFSET);
              }
              else {
                handle_heartbeat("%s(): Successfully received panoramic map  last packet,Packet id = %d,total received size = %d\n"
                                 ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_OFFSET);
              }
            }
            PANORAMIC_MAP_ACTIVE = 1;
            PANORAMIC_MAP_READY = 1;
            *(undefined1 *)(iVar17 + 6) = 1;
            *(undefined1 *)(iVar17 + 0xaf) = 3;
            *(undefined1 *)(iVar17 + 0xb0) = *(undefined1 *)((int)param_3 + 3);
            local_138 = param_3[1];
            PANORAMIC_TOTAL_PACKETS = 0;
            _local_13c = *param_3;
            PANORAMIC_PACKET_COUNTER = 0;
            PANORAMIC_PACKET_OFFSET = 0;
            local_134 = (undefined1)*(undefined2 *)(param_3 + 2);
            uStack_133 = (undefined1)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
            uStack_132 = 0;
            iVar17 = get_work_mode();
            if (iVar17 == 1) {
              send_response_data_to_msgqueue(local_13c,0xb);
            }
            else {
              iVar17 = (**(code **)(param_1 + 0xc))(local_13c,0xb);
              if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
          }
          else if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Panoramic map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                          ,"ble_process_put_req",(uint)PANORAMIC_PACKET_OFFSET,
                          (PANORAMIC_PACKET_OFFSET - 10) + uVar23);
            }
            else {
              handle_heartbeat("%s(): Panoramic map : The data length of the current packet is too long, the current data length %d,wait write data length = %d\n"
                               ,"ble_process_put_req",PANORAMIC_PACKET_OFFSET,
                               (PANORAMIC_PACKET_OFFSET - 10) + uVar23);
            }
          }
        }
        else {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                          ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
            }
            else {
              handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                               ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
            }
          }
          PANORAMIC_PACKET_COUNTER = 0;
          PANORAMIC_PACKET_OFFSET = 0;
          PANORAMIC_TOTAL_PACKETS = uVar2;
          fill_memory_buffer(&panoramic_map_buffer,0,0x40d0);
          _local_13c = *param_3;
          PANORAMIC_MAP_ACTIVE = 0;
          local_138 = param_3[1];
          local_134 = (undefined1)*(undefined2 *)(param_3 + 2);
          uStack_133 = (undefined1)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
          uStack_132 = 1;
          (**(code **)(param_1 + 0xc))(local_13c,0xb);
        }
      }
      else {
        get_work_mode();
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                        ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
          }
          else {
            handle_heartbeat("%s(): There is a packet order error, current packet order = %d, expected packet order =%d\n"
                             ,"ble_process_put_req",uVar9,PANORAMIC_PACKET_COUNTER + 1);
          }
        }
        PANORAMIC_PACKET_COUNTER = 0;
        PANORAMIC_PACKET_OFFSET = 0;
        PANORAMIC_TOTAL_PACKETS = uVar2;
        fill_memory_buffer(&panoramic_map_buffer,0,0x40d0);
        _local_13c = *param_3;
        PANORAMIC_MAP_ACTIVE = 0;
        local_138 = param_3[1];
        local_134 = (undefined1)*(undefined2 *)(param_3 + 2);
        uStack_133 = (undefined1)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
        uStack_132 = 1;
        (**(code **)(param_1 + 0xc))(local_13c,0xb);
      }
      break;
    case 4:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received app send sync packet ....\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar17 = get_work_mode();
      pcVar20 = *(char **)(iVar17 + 0x1000);
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1));
      if (*pcVar20 == '\0') {
        local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1)) & 0xffff00ff;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): navigation don\'t startup, sync packet return\n",
                        "ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
      else {
        SYNC_PACKET_COUNTER = SYNC_PACKET_COUNTER + 1;
      }
      (**(code **)(param_1 + 0xc))(local_13c,6);
      break;
    case 5:
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received navigation func exit packet ....\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar17 = get_work_mode();
      puVar12 = *(undefined1 **)(iVar17 + 0x1000);
      *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
      fill_memory_buffer(puVar12 + 1,0,0xf4);
      *puVar12 = 0;
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138._0_2_ = CONCAT11(1,*(undefined1 *)(param_3 + 1));
      (**(code **)(param_1 + 0xc))(local_13c,6);
      break;
    case 6:
      iVar17 = get_work_mode();
      iVar17 = *(int *)(iVar17 + 0x1000);
      *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
      packets = *(byte *)((int)param_3 + 5);
      *(undefined1 *)(iVar17 + 6) = 1;
      *(byte *)(iVar17 + 0xae) = packets;
      *(undefined1 *)(iVar17 + 0xaf) = 6;
      *(undefined1 *)(iVar17 + 0xb0) = *(undefined1 *)((int)param_3 + 3);
      fill_memory_buffer((int)&local_138 + 2,0,0xe);
      _local_13c = *param_3;
      local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1));
      uVar6 = fill_memory_buffer(iVar17 + 0xb5,0,0x40);
      if (uVar23 - 6 < 0x40) {
        uVar6 = memcpy(uVar6,(int)param_3 + 6);
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received arrived status packet. arrived status = %d ,arrived prompt word = %s\n"
                        ,"ble_process_put_req",(uint)packets,uVar6);
          }
          else {
            handle_heartbeat("%s(): received arrived status packet. arrived status = %d ,arrived prompt word = %s\n"
                             ,"ble_process_put_req",(uint)packets);
          }
        }
        return_status = 0;
      }
      else {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): app send prompt word oversize,drop it...\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        return_status = 1;
      }
      local_138._0_2_ = CONCAT11(return_status,(undefined1)local_138);
      iVar17 = get_work_mode();
      if (iVar17 != 1) {
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
        if (-1 < iVar17) {
          return;
        }
        if (LOG_LEVEL < 1) {
          return;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return;
        }
        DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
        return;
      }
LAB_0001e8ae:
      send_response_data_to_msgqueue(local_13c,6);
    }
    break;
  default:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): @tx error put req_type: %d\n","ble_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar6 = _local_13c;
    local_13c = (undefined1  [2])CONCAT11(0xca,local_13c[0]);
    uStack_139 = SUB41(uVar6,3);
    _local_13c = CONCAT12(0x15,local_13c);
    strcpy_safe(local_13c + 2,"error put req.");
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0xd:
    if (*(short *)(packet + 2) != 0) {
      fill_memory_buffer(&TELEPROMPTER_TEMP_BUFFER,0,0x158);
      if ((uint)*(byte *)((int)param_3 + 3) == *(byte *)((int)param_3 + 2) - 1) {
        return_status = 0xc9;
      }
      else {
        copy_to_work_mode_buffer
                  (*(undefined4 *)(param_1 + 0x888),0x198,*(undefined1 *)(param_1 + -0x6af),0);
        set_work_mode_status(*(undefined1 *)((int)param_3 + 1),1,0);
        return_status = 0xcb;
      }
      local_13c = (undefined1  [2])CONCAT11(return_status,local_13c[0]);
      validate_memory_bounds
                (&TELEPROMPTER_TEMP_BUFFER,(int)param_3 + 7,*(ushort *)(packet + 2) - 7,0x158);
    }
    if (*(char *)((int)param_3 + 3) == '\0') {
      fill_memory_buffer(*(int *)(param_1 + 0x888) + 6,0,400);
      iVar17 = *(int *)(param_1 + 0x888);
      *(undefined1 *)(iVar17 + 0x196) = 0;
      *(undefined1 *)(iVar17 + 0x197) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x888) + 3) = *(undefined1 *)(param_3 + 1);
      *(ushort *)(*(int *)(param_1 + 0x888) + 4) =
           (ushort)*(byte *)((int)param_3 + 6) + (ushort)*(byte *)((int)param_3 + 5) * 0x100;
    }
    memcpy(*(int *)(param_1 + 0x888) + *(ushort *)(*(int *)(param_1 + 0x888) + 0x196) + 6,
           &TELEPROMPTER_TEMP_BUFFER,*(ushort *)(packet + 2) - 7);
    *(short *)(*(int *)(param_1 + 0x888) + 0x196) =
         *(short *)(*(int *)(param_1 + 0x888) + 0x196) + *(short *)(packet + 2) + -7;
    uVar1 = *(ushort *)(packet + 2);
    *(ushort *)((int)puVar25 + 2) = uVar1;
    *(uint *)(param_1 + 0x14) = uVar1 + 4;
    if ((uint)*(byte *)((int)param_3 + 3) == *(byte *)((int)param_3 + 2) - 1) {
      spi_master_transaction_debug(param_1,&local_128,8);
    }
    _local_13c = CONCAT12(*(undefined1 *)((int)param_3 + 1),local_13c);
    _local_13c = CONCAT13(*(undefined1 *)((int)param_3 + 2),_local_13c);
    local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)((int)param_3 + 3));
    iVar17 = get_work_mode();
    packets = *(byte *)((int)param_3 + 3);
    bVar8 = *(byte *)((int)param_3 + 2);
    if (iVar17 == 1) {
      if ((uint)packets == bVar8 - 1) {
        DISPLAY_EVENT_TYPE = 0xd;
        PACKET_COUNT = packets;
        CURRENT_PACKET_INDEX = bVar8;
        set_work_mode_status(*(undefined1 *)((int)param_3 + 1),0);
      }
      else {
        (**(code **)(param_1 + 0xc))(local_13c,0x14);
      }
    }
    else {
      if ((uint)packets == bVar8 - 1) {
        set_work_mode_status(*(undefined1 *)((int)param_3 + 1),0);
      }
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
    }
    break;
  case 0xe:
    if (*(char *)((int)param_3 + 1) == '\x01') {
      iVar17 = is_panoramic_mode_active();
      if (((((iVar17 != 0) || (iVar17 = get_work_mode(), **(int **)(iVar17 + 0x1054) == 9)) ||
           (iVar17 = get_work_mode(), **(int **)(iVar17 + 0x1054) == 0x10)) ||
          (iVar17 = get_work_mode(), **(int **)(iVar17 + 0x1054) == 0xb)) ||
         ((iVar17 = get_work_mode(), *(char *)(iVar17 + 0xd5) == '\0' &&
          (iVar17 = get_work_mode(), *(char *)(iVar17 + 0xfe6) == '\0')))) {
        iVar17 = get_work_mode();
        if ((**(int **)(iVar17 + 0x1054) == 0x10) &&
           (iVar17 = get_work_mode(), **(char **)(iVar17 + 0x100c) == '\x02')) {
          iVar17 = get_work_mode();
          **(undefined1 **)(iVar17 + 0x100c) = 3;
        }
        *(byte *)(param_1 + 0x8dd) = *(byte *)(param_1 + 0x8dd) | 4;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received open dmic command\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        z_spin_lock_valid(param_1 + -0x714);
        goto LAB_00020e1e;
      }
      return_status = 0xca;
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received close dmic command\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      enable_dmic_stream();
LAB_00020e1e:
      return_status = 0xc9;
    }
    uVar6 = _local_13c;
    local_13c = (undefined1  [2])CONCAT11(return_status,local_13c[0]);
    uStack_139 = SUB41(uVar6,3);
    _local_13c = CONCAT12(*(undefined1 *)((int)param_3 + 1),local_13c);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0xf:
    if (*(short *)(packet + 2) != 0) {
      fill_memory_buffer(&TELEPROMPTER_TEMP_BUFFER,0,0x158);
      if ((uint)*(byte *)((int)param_3 + 3) == *(byte *)((int)param_3 + 2) - 1) {
        return_status = 0xc9;
      }
      else {
        copy_to_work_mode_buffer
                  (*(undefined4 *)(param_1 + 0x88c),0x198,*(undefined1 *)(param_1 + -0x6b0),1);
        set_work_mode_flags(*(undefined1 *)((int)param_3 + 1),1);
        return_status = 0xcb;
      }
      local_13c = (undefined1  [2])CONCAT11(return_status,local_13c[0]);
      validate_memory_bounds
                (&TELEPROMPTER_TEMP_BUFFER,(int)param_3 + 7,*(ushort *)(packet + 2) - 7,0x158);
    }
    if (*(char *)((int)param_3 + 3) == '\0') {
      fill_memory_buffer(*(int *)(param_1 + 0x88c) + 6,0,400);
      iVar17 = *(int *)(param_1 + 0x88c);
      *(undefined1 *)(iVar17 + 0x196) = 0;
      *(undefined1 *)(iVar17 + 0x197) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x88c) + 3) = *(undefined1 *)(param_3 + 1);
      *(ushort *)(*(int *)(param_1 + 0x88c) + 4) =
           (ushort)*(byte *)((int)param_3 + 6) + (ushort)*(byte *)((int)param_3 + 5) * 0x100;
    }
    memcpy(*(int *)(param_1 + 0x88c) + *(ushort *)(*(int *)(param_1 + 0x88c) + 0x196) + 6,
           &TELEPROMPTER_TEMP_BUFFER,*(ushort *)(packet + 2) - 7);
    *(short *)(*(int *)(param_1 + 0x88c) + 0x196) =
         *(short *)(*(int *)(param_1 + 0x88c) + 0x196) + *(short *)(packet + 2) + -7;
    uVar1 = *(ushort *)(packet + 2);
    *(ushort *)((int)puVar25 + 2) = uVar1;
    *(uint *)(param_1 + 0x14) = uVar1 + 4;
    if ((uint)*(byte *)((int)param_3 + 3) == *(byte *)((int)param_3 + 2) - 1) {
      spi_master_transaction_debug(param_1,&local_128,8);
    }
    _local_13c = CONCAT12(*(undefined1 *)((int)param_3 + 1),local_13c);
    _local_13c = CONCAT13(*(undefined1 *)((int)param_3 + 2),_local_13c);
    local_138 = CONCAT31(local_138._1_3_,*(undefined1 *)((int)param_3 + 3));
    iVar17 = get_work_mode();
    packets = *(byte *)((int)param_3 + 3);
    bVar8 = *(byte *)((int)param_3 + 2);
    if (iVar17 == 1) {
      if ((uint)packets == bVar8 - 1) {
        DISPLAY_EVENT_TYPE = 0xf;
        PACKET_COUNT = packets;
        CURRENT_PACKET_INDEX = bVar8;
        set_work_mode_flags(*(undefined1 *)((int)param_3 + 1),0);
      }
      else {
        (**(code **)(param_1 + 0xc))(local_13c,0x14);
      }
    }
    else {
      if ((uint)packets == bVar8 - 1) {
        set_work_mode_flags(*(undefined1 *)((int)param_3 + 1),0);
      }
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
    }
    break;
  case 0x10:
    local_13c = (undefined1  [2])CONCAT11(6,packets);
    _local_13c = CONCAT12(0,local_13c);
    packets = *(byte *)(param_3 + 1);
    _local_13c = CONCAT13(*(undefined1 *)((int)param_3 + 3),_local_13c);
    local_138 = CONCAT31(uVar4,packets);
    if ((*(short *)(packet + 2) == *(short *)((int)param_3 + 1)) && (packets < 3)) {
      if (packets == 1) {
        iVar17 = get_work_mode();
        if (*(int *)(iVar17 + 0xf68) != 0) {
          if (1 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(0x9b9e4,0x9e077);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar17 = get_work_mode();
          *(undefined4 *)(iVar17 + 0xf68) = 0;
          iVar17 = get_work_mode();
          *(undefined4 *)(iVar17 + 0x104c) = 0;
          iVar17 = get_work_mode();
          z_spin_lock_valid(iVar17 + 0x80);
        }
      }
      else if (packets == 2) {
        if (*(char *)((int)param_3 + 5) == '\x01') {
          iVar17 = get_work_mode();
          **(undefined1 **)(iVar17 + 0x101c) = 1;
          iVar17 = get_work_mode();
          *(undefined1 *)(*(int *)(iVar17 + 0x101c) + 1) = *(undefined1 *)((int)param_3 + 6);
          iVar17 = get_work_mode();
          if (*(char *)(*(int *)(iVar17 + 0x101c) + 1) == '\x01') {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(0x9ba06,0x9e077,DISPLAY_DISPATCH_THREAD_FINAL_OPERATION_STATE);
              }
              else {
                handle_heartbeat();
              }
            }
            iVar17 = get_work_mode();
            *(undefined4 *)(iVar17 + 0xf68) = DISPLAY_DISPATCH_THREAD_FINAL_OPERATION_STATE;
            iVar17 = get_work_mode();
            *(undefined4 *)(iVar17 + 0x104c) = 0;
            iVar17 = get_work_mode();
            z_spin_lock_valid(iVar17 + 0x80);
          }
          *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
          uVar6 = get_work_mode();
          update_persist_task_status(uVar6,0x11,2);
        }
        else {
          iVar17 = get_work_mode();
          **(undefined1 **)(iVar17 + 0x101c) = 0;
        }
      }
      return_status = 0xc9;
    }
    else {
      return_status = 0xca;
    }
    local_138._0_2_ = CONCAT11(return_status,(undefined1)local_138);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0x15:
    PACKET_SEQUENCE_COUNTER = PACKET_SEQUENCE_COUNTER + '\x01';
    if (*(char *)((int)param_3 + 1) == PACKET_SEQUENCE_COUNTER) {
      enqueue_file((int)param_3 + 1,*(short *)(packet + 2) - 1U & 0xff);
      *(undefined4 *)(param_1 + 0x8d0) = 0x15;
      z_spin_lock_valid(param_1 + -0x6fc);
    }
    else {
      local_13c = (undefined1  [2])CONCAT11(PACKET_SEQUENCE_COUNTER,packets);
      uStack_139 = SUB41(uVar6,3);
      _local_13c = CONCAT12(0xca,local_13c);
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
      PACKET_SEQUENCE_COUNTER = PACKET_SEQUENCE_COUNTER + -1;
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): wrong package id %d\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    uVar29 = get_current_time_ms();
    *(undefined8 *)(param_1 + 0x8e4) = uVar29;
    break;
  case 0x16:
    local_128 = CONCAT31(CONCAT12(*(undefined1 *)((int)param_3 + 1),
                                  CONCAT11(*(undefined1 *)((int)param_3 + 2),
                                           *(undefined1 *)((int)param_3 + 3))),
                         *(undefined1 *)(param_3 + 1));
    local_13c = (undefined1  [2])CONCAT11(*(undefined1 *)((int)param_3 + 1),packets);
    uVar9 = local_128;
    if (local_128 == CRC32_CHECKSUM_VALUE) {
      uVar9 = 0xc9;
    }
    return_status = (undefined1)uVar9;
    if (local_128 != CRC32_CHECKSUM_VALUE) {
      return_status = 0xca;
    }
    _local_13c = CONCAT12(*(undefined1 *)((int)param_3 + 2),local_13c);
    _local_13c = CONCAT13(*(undefined1 *)((int)param_3 + 3),_local_13c);
    local_138._0_2_ = CONCAT11(return_status,*(undefined1 *)(param_3 + 1));
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    *(uint *)(param_1 + 0x8d0) = (uint)*packet;
    z_spin_lock_valid(param_1 + -0x6fc);
    break;
  case 0x17:
    set_system_navigation_mode(1);
    uVar29 = get_current_time_ms();
    *(undefined8 *)(param_1 + 0x8e4) = uVar29;
    *(uint *)(param_1 + 0x8d0) = (uint)*packet;
    z_spin_lock_valid(param_1 + -0x6fc);
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0x18:
    iVar7 = get_work_mode();
    if ((*(char *)(iVar7 + 0xd5) == '\v') ||
       (iVar7 = get_work_mode(), *(char *)(iVar7 + 0xd5) == '\x10')) {
      render_panoramic_view(iVar17,0);
    }
    else {
      handle_work_mode_finish(iVar17,0);
    }
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0x1c:
    if ((*(char *)((int)param_3 + 2) != '\0') && (*(char *)((int)param_3 + 3) != '\0')) {
      **(char **)(param_1 + 0x888) = *(char *)((int)param_3 + 3);
      *(undefined1 *)(*(int *)(param_1 + 0x888) + 1) = *(undefined1 *)((int)param_3 + 2);
      **(undefined1 **)(param_1 + 0x88c) = *(undefined1 *)((int)param_3 + 3);
      *(undefined1 *)(*(int *)(param_1 + 0x88c) + 1) = *(undefined1 *)((int)param_3 + 2);
    }
    return_status = *(undefined1 *)((int)param_3 + 1);
    *(undefined1 *)(*(int *)(param_1 + 0x888) + 2) = return_status;
    *(undefined1 *)(*(int *)(param_1 + 0x88c) + 2) = return_status;
    set_dmic_stream_state(*(undefined1 *)((int)param_3 + 1));
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received start/Pause command,origin language type = %d,translate origin language type = %d,Suspend status = %d\n"
                    ,"ble_process_put_req",(uint)(*(byte **)(param_1 + 0x88c))[1],
                    (uint)**(byte **)(param_1 + 0x88c),
                    (uint)*(byte *)(*(int *)(param_1 + 0x888) + 2));
      }
      else {
        handle_heartbeat(
                        "%s(): received start/Pause command,origin language type = %d,translate origin language type = %d,Suspend status = %d\n"
                        );
      }
    }
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
    break;
  case 0x1e:
    uVar1 = *(ushort *)((int)param_3 + 1);
    uVar23 = (uint)uVar1;
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 == uVar9) {
      switch(*(undefined1 *)(param_3 + 1)) {
      case 1:
        iVar17 = get_work_mode();
        if (((iVar17 == 1) && (uVar23 == 6)) && (*(char *)((int)param_3 + 5) == '\x01')) {
          requestAudioInfoToApp(0);
        }
        break;
      case 2:
        iVar17 = get_work_mode();
        if (iVar17 == 1) {
          if (uVar23 == 6) {
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): received request voice data commmand\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
            send_audio_stream_file_to_app(0,*(undefined1 *)((int)param_3 + 5));
          }
          else if (uVar23 == 0xb) {
            if (*(char *)((int)param_3 + 10) == '\0') {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): received request voice data next data\n","ble_process_put_req")
                  ;
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            else if (*(char *)((int)param_3 + 10) == -0x56) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): APP success received audio data ,delete voice block num %d\n",
                              "ble_process_put_req",(uint)*(byte *)((int)param_3 + 9));
                }
                else {
                  handle_heartbeat();
                }
              }
              iVar17 = get_work_mode();
              if (iVar17 == 1) {
                if (*(byte *)((int)param_3 + 9) - 1 < 4) {
                  delAudioStreamRecord((uint)*(byte *)((int)param_3 + 9));
                }
                else if (1 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): APP delete voice block num error %d\n","ble_process_put_req")
                    ;
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
            }
            else if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): app return error response information\n","ble_process_put_req");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        break;
      case 3:
        uVar2 = *(ushort *)((int)param_3 + 5);
        uVar18 = (uint)uVar2;
        uVar9 = (uint)*(ushort *)((int)param_3 + 7);
        if (uVar18 == 1) {
          cVar5 = *(char *)((int)param_3 + 10);
          uVar9 = *(byte *)((int)param_3 + 9) & 0xf;
          iVar24 = uVar9 - 1;
          iVar21 = iVar24 * 0x143;
          iVar17 = iVar21 + 4;
          fill_memory_buffer(*(int *)(param_1 + 0x8a4) + iVar17,0,0x29);
          iVar7 = iVar21 + 0x2d;
          fill_memory_buffer(*(int *)(param_1 + 0x8a4) + iVar7,0,0x119);
          if (cVar5 == '\0') {
            *(undefined1 *)(*(int *)(param_1 + 0x8a4) + iVar21 + 3) = 0;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): received empty quick note data ,delete quick note num.%d\n",
                            "ble_process_put_req",uVar9);
              }
              else {
                handle_heartbeat();
              }
            }
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 0;
            (**(code **)(param_1 + 0xc))(local_13c,10);
            deleteQuickNoteData(iVar24);
          }
          else {
            uVar23 = (uint)*(byte *)((int)param_3 + 0xb);
            uVar9 = uVar23;
            if (0x28 < uVar23) {
              uVar9 = 0x29;
            }
            memcpy(*(int *)(param_1 + 0x8a4) + iVar17,param_3 + 3,uVar9);
            uVar18 = (uint)*(ushort *)((int)param_3 + uVar23 + 0xc);
            uVar9 = 0x119;
            if (uVar18 < 0x11a) {
              uVar9 = uVar18;
            }
            memcpy(*(int *)(param_1 + 0x8a4) + iVar7,uVar23 + 0xe + (int)param_3,uVar9);
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): title length = %d,text length = %d\n","ble_process_put_req",
                            uVar23,uVar18);
              }
              else {
                handle_heartbeat("%s(): title length = %d,text length = %d\n","ble_process_put_req",
                                 uVar23,uVar18);
              }
            }
            *(undefined1 *)(iVar24 * 0x143 + *(int *)(param_1 + 0x8a4) + 3) = 1;
            if (2 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Quick Note Title = %s,TXET = %s\n","ble_process_put_req",
                            iVar17 + *(int *)(param_1 + 0x8a4),*(int *)(param_1 + 0x8a4) + iVar7);
              }
              else {
                handle_heartbeat("%s(): Quick Note Title = %s,TXET = %s\n","ble_process_put_req");
              }
            }
            upgradeQuickNoteDataToFlash(iVar24);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 0;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
        }
        else if (uVar9 == 1) {
          fill_memory_buffer(&QUICKNOTE_TEXT_BUFFER,0,0x119);
          fill_memory_buffer(&QUICKNOTE_TITLE_BUFFER,0,0x29);
          QUICKNOTE_BUFFER_OFFSET = 0;
          QUICKNOTE_RECORD_NUMBER = *(byte *)((int)param_3 + 9);
          QUICKNOTE_RECEIVED_COUNT = 0;
          QUICKNOTE_TOTAL_PACKETS = uVar2;
          *(undefined1 *)((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + *(int *)(param_1 + 0x8a4) + 3) = 0
          ;
          if ((QUICKNOTE_RECORD_NUMBER < 5) && (QUICKNOTE_RECORD_NUMBER != 0)) {
            uVar18 = (uint)*(byte *)((int)param_3 + 0xb);
            uVar9 = uVar18;
            if (0x28 < uVar18) {
              uVar9 = 0x29;
            }
            memcpy(&QUICKNOTE_TITLE_BUFFER,param_3 + 3,uVar9);
            uVar23 = (uVar23 - 0xe) - uVar18;
            uVar16 = uVar23 & 0xffff;
            uVar9 = 0x119;
            if (uVar16 < 0x11a) {
              uVar9 = uVar16;
            }
            memcpy(&QUICKNOTE_TEXT_BUFFER + QUICKNOTE_BUFFER_OFFSET,uVar18 + 0xe + (int)param_3,
                   uVar9);
            QUICKNOTE_BUFFER_OFFSET = (ushort)uVar23;
            _local_13c = *param_3;
            QUICKNOTE_RECEIVED_COUNT = QUICKNOTE_RECEIVED_COUNT + 1;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 0;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
          else {
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): app send parameter error,qucik note num = %d\n",
                            "ble_process_put_req",(uint)QUICKNOTE_RECORD_NUMBER);
              }
              else {
                handle_heartbeat("%s(): app send parameter error,qucik note num = %d\n",
                                 "ble_process_put_req",QUICKNOTE_RECORD_NUMBER);
              }
            }
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
        }
        else if (uVar9 < uVar18) {
          if ((uint)QUICKNOTE_RECEIVED_COUNT == uVar9 - 1) {
            memcpy(&QUICKNOTE_TEXT_BUFFER + QUICKNOTE_BUFFER_OFFSET,(int)param_3 + 9,uVar23 - 9);
            _local_13c = *param_3;
            QUICKNOTE_BUFFER_OFFSET = (QUICKNOTE_BUFFER_OFFSET - 9) + uVar1;
            local_138 = param_3[1];
            QUICKNOTE_RECEIVED_COUNT = QUICKNOTE_RECEIVED_COUNT + 1;
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 0;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,NAV_PACKET_COUNTER + 1);
              }
              else {
                handle_heartbeat("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req");
              }
            }
            QUICKNOTE_TOTAL_PACKETS = 0;
            QUICKNOTE_RECEIVED_COUNT = 0;
            QUICKNOTE_BUFFER_OFFSET = 0;
            fill_memory_buffer(&QUICKNOTE_TEXT_BUFFER,0,0x119);
            fill_memory_buffer(&QUICKNOTE_TITLE_BUFFER,0,0x29);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
        }
        else if (uVar18 == uVar9) {
          if (((uint)QUICKNOTE_RECEIVED_COUNT == uVar18 - 1) && (QUICKNOTE_TOTAL_PACKETS == uVar18))
          {
            memcpy(&QUICKNOTE_TEXT_BUFFER + QUICKNOTE_BUFFER_OFFSET,(int)param_3 + 9,uVar23 - 9);
            QUICKNOTE_BUFFER_OFFSET = uVar1 + (QUICKNOTE_BUFFER_OFFSET - 9);
            fill_memory_buffer((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + 4 + *(int *)(param_1 + 0x8a4)
                               ,0,0x29);
            puVar10 = &QUICKNOTE_TITLE_BUFFER;
            puVar25 = (undefined4 *)
                      ((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + *(int *)(param_1 + 0x8a4) + 4);
            do {
              puVar11 = puVar10 + 1;
              puVar13 = puVar25 + 1;
              *puVar25 = *puVar10;
              puVar10 = puVar11;
              puVar25 = puVar13;
            } while (puVar11 != (undefined4 *)0x20010469);
            *(undefined1 *)puVar13 = uRam20010469;
            fill_memory_buffer((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + 0x2d +
                               *(int *)(param_1 + 0x8a4),0,0x119);
            memcpy((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + *(int *)(param_1 + 0x8a4) + 0x2d,
                   &QUICKNOTE_TEXT_BUFFER,0x119);
            *(undefined1 *)((QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + *(int *)(param_1 + 0x8a4) + 3) =
                 1;
            if (2 < LOG_LEVEL) {
              iVar17 = *(int *)(param_1 + 0x8a4);
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): Quick Note Title =%s,QuickNote TXET =%s\n","ble_process_put_req",
                            (QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + iVar17 + 4,
                            (QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + iVar17 + 0x2d);
              }
              else {
                handle_heartbeat("%s(): Quick Note Title =%s,QuickNote TXET =%s\n",
                                 "ble_process_put_req",
                                 (QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + iVar17 + 4,
                                 (QUICKNOTE_RECORD_NUMBER - 1) * 0x143 + iVar17 + 0x2d);
              }
            }
            upgradeQuickNoteDataToFlash(QUICKNOTE_RECORD_NUMBER - 1);
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 0;
            (**(code **)(param_1 + 0xc))(local_13c,10);
            QUICKNOTE_BUFFER_OFFSET = 0;
            QUICKNOTE_RECEIVED_COUNT = 0;
            QUICKNOTE_TOTAL_PACKETS = 0;
          }
          else {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                            ,"ble_process_put_req",uVar9,NAV_PACKET_COUNTER + 1);
              }
              else {
                handle_heartbeat("%s(): ACTION ID = 3,There is a packet order error, current packet order = %d, expected packet order =%d\n"
                                 ,"ble_process_put_req");
              }
            }
            fill_memory_buffer(&QUICKNOTE_TEXT_BUFFER,0,0x119);
            fill_memory_buffer(&QUICKNOTE_TITLE_BUFFER,0,0x29);
            QUICKNOTE_BUFFER_OFFSET = 0;
            QUICKNOTE_RECEIVED_COUNT = 0;
            QUICKNOTE_TOTAL_PACKETS = 0;
            _local_13c = *param_3;
            local_138 = param_3[1];
            local_134 = *(undefined1 *)(param_3 + 2);
            uStack_133 = 1;
            (**(code **)(param_1 + 0xc))(local_13c,10);
          }
        }
        break;
      case 4:
        if (*(byte *)((int)param_3 + 5) < 5) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): delete audio record num = %d\n","ble_process_put_req",
                          *(byte *)((int)param_3 + 5) - 1);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar17 = get_work_mode();
          if (iVar17 == 1) {
            delAudioStreamRecord(*(undefined1 *)((int)param_3 + 5));
          }
          _local_13c = *param_3;
          local_138._0_2_ = (ushort)*(byte *)(param_3 + 1);
          (**(code **)(param_1 + 0xc))(local_13c,6);
        }
        else {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): received delete all quick note audio file command .\n",
                          "ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar17 = get_work_mode();
          if (iVar17 == 1) {
            delAudioStreamRecord(0xff);
          }
          _local_13c = *param_3;
          local_138._0_2_ = (ushort)*(byte *)(param_3 + 1);
          (**(code **)(param_1 + 0xc))(local_13c,6);
        }
        break;
      case 5:
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received clean audio voice command\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        iVar17 = get_work_mode();
        if (iVar17 == 1) {
          delAudioStreamRecord(0xff);
          _local_13c = *param_3;
          local_138._0_2_ = (ushort)*(byte *)(param_3 + 1);
          (**(code **)(param_1 + 0xc))(local_13c,6);
        }
      }
    }
    else if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): packet length error,input data length = %d,packet data length = %d\n",
                    "ble_process_put_req",uVar9,uVar23);
      }
      else {
        handle_heartbeat("%s(): packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req",uVar9,uVar23);
      }
    }
    break;
  case 0x1f:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received onboarding init packet ....\n","ble_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar9 = onboarding_ble_process(iVar17,packet,param_3,local_13c);
    if (0 < (int)uVar9) {
      memcpy(puVar10,param_3,*(undefined2 *)(packet + 2));
      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,uVar9 & 0xffff);
      if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): onboarding post_to_host failed ret = %d\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    break;
  case 0x20:
    if (((*(ushort *)(packet + 2) < 0x15) && (*(char *)((int)param_3 + 1) == '\r')) &&
       (*(char *)((int)param_3 + 2) == '\x0e')) {
      enqueue_file((int)param_3 + 1,*(ushort *)(packet + 2) - 1 & 0xff);
      *(undefined4 *)(param_1 + 0x8d0) = 0x20;
      z_spin_lock_valid(param_1 + -0x6fc);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): recv upgrade font success\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
      local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
    }
    else {
      local_13c = (undefined1  [2])CONCAT11(0xca,packets);
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): recv upgrade font failed\n","ble_process_put_req");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    PACKET_SEQUENCE_COUNTER = -1;
    break;
  case 0x22:
    if (*(short *)((int)param_3 + 1) == *(short *)(packet + 2)) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): received sync id = %d\n","ble_process_put_req",
                      (uint)*(byte *)((int)param_3 + 3));
        }
        else {
          handle_heartbeat();
        }
      }
      if (*(char *)(param_3 + 1) == '\x01') {
        local_134 = 0;
        uStack_133 = 0;
        uStack_132 = 0;
        uStack_131 = 0;
        uStack_130 = 0;
        local_12f = 0;
        uStack_12e = 0;
        uStack_12c = 0;
        uStack_12b = 0;
        local_12a = 0;
        _local_13c = *param_3;
        local_138._2_2_ = (undefined2)((uint)param_3[1] >> 0x10);
        local_138._0_1_ = (undefined1)param_3[1];
        local_138._0_2_ = CONCAT11(*(undefined1 *)(param_1 + -0x69f),(undefined1)local_138);
        cVar5 = get_work_mode_status();
        local_138 = CONCAT13(*(undefined1 *)(*(int *)(param_1 + 0x870) + 0x5f),
                             CONCAT12(cVar5 + '\x01',(ushort)local_138));
        (**(code **)(param_1 + 0xc))(local_13c,8);
      }
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): dashboard information packet length error,input data length = %d,packet data length = %d\n"
                    ,"ble_process_put_req");
      }
      else {
        handle_heartbeat("%s(): dashboard information packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req");
      }
    }
    break;
  case 0x24:
    uVar23 = (uint)*(ushort *)((int)param_3 + 1);
    uVar9 = (uint)*(ushort *)(packet + 2);
    if (uVar23 != uVar9) {
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req",uVar9,uVar23);
        return;
      }
      DEBUG_PRINT("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                  ,"ble_process_put_req",uVar9,uVar23);
      return;
    }
    if (*(char *)(param_3 + 1) != '\x06') {
      return;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): received teleprompter suspend packet ....\n","ble_process_put_req");
      }
      else {
        handle_heartbeat();
      }
    }
    return_status = *(undefined1 *)((int)param_3 + 3);
    *(undefined1 *)(param_1 + -0x6af) = return_status;
    set_work_mode_status(return_status,0);
    cVar5 = *(char *)((int)param_3 + 5);
    if (cVar5 != '\x01') {
      cVar5 = '\0';
    }
    *(char *)(*(int *)(param_1 + 0x880) + 0x10) = cVar5;
    iVar17 = *(int *)(param_1 + 0x880);
    uVar6 = *(undefined4 *)((int)param_3 + (uVar23 - 8));
    *(uint *)(iVar17 + 2) =
         (uint)*(byte *)((int)param_3 + (uVar23 - 10)) << 0x10 |
         (uint)*(byte *)((int)param_3 + (uVar23 - 0xb)) << 8 |
         (uint)*(byte *)((int)param_3 + (uVar23 - 0xc)) |
         (uint)*(byte *)((int)param_3 + (uVar23 - 9)) << 0x18;
    *(undefined4 *)(iVar17 + 6) = uVar6;
    *(uint *)(*(int *)(param_1 + 0x880) + 0x11) =
         (uint)*(byte *)((int)param_3 + (uVar23 - 2)) << 0x10 |
         (uint)*(byte *)((int)param_3 + (uVar23 - 3)) << 8 |
         (uint)*(byte *)((int)param_3 + (uVar23 - 4)) |
         (uint)*(byte *)((int)param_3 + (uVar23 - 1)) << 0x18;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): SUSPEND status ,app send counter time = %d\n","ble_process_put_req",
                    *(undefined4 *)(*(int *)(param_1 + 0x880) + 0x11));
      }
      else {
        handle_heartbeat();
      }
    }
    *(uint *)(param_1 + 0x14) = *(ushort *)((int)puVar25 + 2) + 4;
    fill_memory_buffer((int)&local_138 + 2,0,0xe);
    _local_13c = *param_3;
    local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1));
    iVar17 = get_work_mode();
    if (iVar17 != 1) {
      iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
      if (-1 < iVar17) {
        return;
      }
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return;
      }
      DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
      return;
    }
    goto LAB_0001e8ae;
  case 0x25:
    if (*(short *)((int)param_3 + 1) == *(short *)(packet + 2)) {
      if (*(char *)(param_3 + 1) == '\x04') {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): received app send sync packet ....\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
        HEARTBEAT_SEQ = HEARTBEAT_SEQ + 1;
        *(uint *)(param_1 + 0x14) = *(ushort *)((int)puVar25 + 2) + 4;
        fill_memory_buffer((int)&local_138 + 2,0,0xe);
        _local_13c = *param_3;
        local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 1));
        iVar17 = (**(code **)(param_1 + 0xc))(local_13c,6);
        if ((iVar17 < 0) && (0 < LOG_LEVEL)) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): post_to_host failed ret = %d\n","ble_process_put_req");
          }
          else {
            handle_heartbeat();
          }
        }
      }
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                    ,"ble_process_put_req");
      }
      else {
        handle_heartbeat("%s(): teleprompter packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_put_req");
      }
    }
    break;
  case 0x26:
    local_13c = (undefined1  [2])CONCAT11(6,packets);
    _local_13c = CONCAT12(0,local_13c);
    _local_13c = CONCAT13(*(undefined1 *)((int)param_3 + 3),_local_13c);
    packets = *(byte *)(param_3 + 1);
    if ((*(short *)(packet + 2) == *(short *)((int)param_3 + 1)) && (packets < 5)) {
      local_138._0_2_ = CONCAT11(0xc9,packets);
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
      switch(local_138 & 0xff) {
      case 1:
        *(undefined1 *)(param_1 + 0x912) = 1;
        break;
      case 2:
        if ((*(byte *)((int)param_3 + 6) < 9) && (*(byte *)((int)param_3 + 7) < 10)) {
          *(undefined1 *)(param_1 + -0x6af) = *(undefined1 *)((int)param_3 + 3);
          memcpy(puVar10,param_3,*(undefined2 *)(packet + 2));
          spi_master_transaction_debug(param_1,&local_128,8);
        }
        break;
      case 3:
        iVar17 = get_system_ready_state();
        if (iVar17 == 1) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): give mic_transm_sem\n","ble_process_put_req");
            }
            else {
              handle_heartbeat();
            }
          }
          z_spin_lock_valid(&MICROPHONE_THREAD_SYNC);
        }
        break;
      case 4:
        packets = *(byte *)((int)param_3 + 5);
        uVar9 = (uint)packets;
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ble set lum gear:%d\n","ble_process_put_req",uVar9);
          }
          else {
            handle_heartbeat();
          }
        }
        if ((uVar9 < 0x40) && (*(ushort *)(param_1 + 0x762) != uVar9)) {
          *(ushort *)(param_1 + 0x762) = (ushort)packets;
          *(ushort *)(param_1 + 0x75c) = (ushort)packets;
          *(uint *)(param_1 + 0x8d0) = (uint)*packet;
          z_spin_lock_valid(param_1 + -0x6fc);
        }
      }
    }
    else {
      local_138._0_2_ = CONCAT11(0xca,packets);
      (**(code **)(param_1 + 0xc))(local_13c,0x14);
    }
    break;
  case 0x27:
    *(undefined1 *)(param_1 + 0x911) = *(undefined1 *)((int)param_3 + 1);
    *(undefined4 *)(param_1 + 0x8d0) = 0x27;
    z_spin_lock_valid(param_1 + -0x6fc);
    local_13c = (undefined1  [2])CONCAT11(0xc9,local_13c[0]);
    (**(code **)(param_1 + 0xc))(local_13c,0x14);
  }
  return;
}


