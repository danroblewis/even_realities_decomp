/*
 * Function: ble_process_get_req
 * Entry:    0001a064
 * Prototype: undefined __stdcall ble_process_get_req(byte param_1, byte * packet, byte param_3)
 */


void ble_process_get_req(byte param_1,byte *packet,byte param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint uVar13;
  code *pcVar14;
  byte *pbVar15;
  uint uVar16;
  byte bStack_200;
  byte return_code;
  byte bStack_1fe;
  byte bStack_1fd;
  byte local_1fc;
  byte bStack_1fb;
  undefined1 local_1fa [6];
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  byte local_1ee;
  undefined1 auStack_1e8 [192];
  undefined4 local_128;
  undefined2 local_124;
  uint local_122;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  byte local_118 [244];
  
  puVar12 = (undefined4 *)(uint)param_3;
  uVar6 = (uint)param_1;
  bStack_200 = 0;
  return_code = 0;
  bStack_1fe = 0;
  bStack_1fd = 0;
  fill_memory_buffer(&local_1fc,0,0x11);
  **(undefined4 **)(uVar6 + 0x10) = *(undefined4 *)packet;
  *(uint *)(uVar6 + 0x14) = (uint)*(ushort *)(packet + 2);
  bStack_200 = *packet;
  switch(bStack_200) {
  case 0x29:
    spi_master_transaction_debug(uVar6,&local_128,1);
    uVar16 = 0x65;
    uVar13 = (uint)local_128._1_1_;
    return_code = 0x65;
    bStack_1fe = (byte)local_128;
    bStack_1fd = local_128._1_1_;
    if (2 < LOG_LEVEL) {
      pcVar8 = "%s(): BLE_REQ_GET_BRIGHTNESS: 0x%02x,0x%02x,0x%02x,0x%02x,\n";
      bVar2 = bStack_200;
      uVar4 = local_128;
LAB_0001a112:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar8,"ble_process_get_req",(uint)bVar2,uVar16,uVar4 & 0xff,uVar13);
      }
      else {
        handle_heartbeat();
      }
    }
    break;
  case 0x2a:
    spi_master_transaction_debug(uVar6,&local_128,1);
    return_code = 0x68;
    bStack_1fe = (byte)local_128;
    if (2 < LOG_LEVEL) {
      uVar16 = (uint)bStack_200;
      if (IS_DEBUG != 0) {
        pcVar8 = "%s(): BLE_REQ_GET_ANTI_SHAKE_ENABLE: 0x%02x,0x%02x,\n";
        goto LAB_0001a310;
      }
      pcVar8 = "%s(): BLE_REQ_GET_ANTI_SHAKE_ENABLE: 0x%02x,0x%02x,\n";
LAB_0001a31a:
      DEBUG_PRINT(pcVar8,"ble_process_get_req",uVar16);
    }
    break;
  case 0x2b:
    spi_master_transaction_debug(uVar6,&local_128,1);
    return_code = 0x69;
    bStack_1fe = (byte)local_128;
    bStack_1fd = (byte)(local_128 >> 8);
    if (2 < LOG_LEVEL) {
      uVar16 = (uint)bStack_200;
      if (IS_DEBUG == 0) {
        pcVar8 = "%s(): BLE_REQ_GET_DISPLAY_MODE: 0x%02x,0x%02x,\n";
        goto LAB_0001a31a;
      }
      pcVar8 = "%s(): BLE_REQ_GET_DISPLAY_MODE: 0x%02x,0x%02x,\n";
LAB_0001a310:
      handle_heartbeat(pcVar8,"ble_process_get_req");
    }
    break;
  case 0x2c:
    if (*(char *)((int)puVar12 + 1) == '\x01') {
      *(undefined1 *)(uVar6 + 0x8ec) = 0;
    }
    else if (*(char *)((int)puVar12 + 1) == '\x02') {
      *(undefined1 *)(uVar6 + 0x8ec) = 1;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        pcVar8 = "IOS";
        if (*(char *)(uVar6 + 0x8ec) == '\0') {
          pcVar8 = "Android";
        }
        DEBUG_PRINT("%s(): %s mobile phone is connected,raw_data[1] = %d\n","ble_process_get_req",
                    pcVar8,(uint)*(byte *)((int)puVar12 + 1));
      }
      else {
        pcVar8 = "IOS";
        if (*(char *)(uVar6 + 0x8ec) == '\0') {
          pcVar8 = "Android";
        }
        handle_heartbeat("%s(): %s mobile phone is connected,raw_data[1] = %d\n",
                         "ble_process_get_req",pcVar8);
      }
    }
    spi_master_transaction_debug(uVar6,&local_128,0x18);
    bStack_1fe = (byte)local_128;
    bStack_1fd = (byte)(local_128 >> 8);
    local_1fc = (byte)(local_128 >> 0x10);
    bStack_1fb = (byte)(local_128 >> 0x18);
    local_1fa._0_2_ = local_124;
    return_code = 0x66;
    local_1fa._2_4_ = local_122;
    local_1f4 = local_11e;
    local_1f2 = local_11c;
    local_1f0 = local_11a;
    local_1ee = local_118[0];
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_REQ_GET_DEVICE_INFO: CHG:0x%02x,0x%02x,0x%02x,0x%02x,0x%02x M_SW_VER:v%d.%d.%d S_SW_VER:v%d.%d.%d BLE_SW_VER:v%d.%d\n"
                    ,"ble_process_get_req",local_128 & 0xff,(uint)bStack_1fd,
                    local_128 >> 0x10 & 0xff,local_128 >> 0x18,(uint)(byte)local_124,
                    (uint)local_124._1_1_,local_122 & 0xff,local_122 >> 8 & 0xff,
                    local_122 >> 0x10 & 0xff,local_122 >> 0x18,(uint)(byte)local_11e,
                    (uint)local_11a._1_1_,(uint)local_118[0]);
      }
      else {
        handle_heartbeat();
      }
    }
    break;
  case 0x2d:
    spi_master_transaction_debug(uVar6,&local_128,0xc);
    return_code = 0x67;
    dump_hex_data("get_mn_mac",&local_128,0xc);
    local_1fa._0_2_ = local_124;
    uVar5 = local_1fa._0_2_;
    local_1f4 = local_11e;
    bStack_1fe = (byte)local_128;
    bStack_1fd = (byte)(local_128 >> 8);
    local_1fc = (byte)(local_128 >> 0x10);
    bStack_1fb = (byte)(local_128 >> 0x18);
    local_1fa._2_4_ = local_122;
    if (2 < LOG_LEVEL) {
      local_1fa[0] = (byte)local_124;
      uVar16 = (uint)local_1fa[0];
      local_1fa[1] = (byte)((ushort)local_124 >> 8);
      uVar13 = (uint)local_1fa[1];
      local_1fa._0_2_ = uVar5;
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_REQ_GET_M_N_S_MAC: 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x\n"
                    ,"ble_process_get_req",(uint)bStack_200,(uint)return_code,local_128 & 0xff,
                    (uint)bStack_1fd,(uint)local_1fc,(uint)bStack_1fb,uVar16,uVar13,local_122 & 0xff
                    ,local_122 >> 8 & 0xff,local_122 >> 0x10 & 0xff,local_122 >> 0x18);
      }
      else {
        handle_heartbeat();
      }
    }
    break;
  case 0x2e:
    process_whitelist_app_packet_data(uVar6,&bStack_200);
    return;
  default:
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #tx error get req_type: %d\n","ble_process_get_req");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar16 = 0x14;
    return_code = 0xca;
    bStack_1fe = 0x14;
    strcpy_safe(&bStack_1fe,"error get req.");
    pcVar14 = *(code **)(uVar6 + 0xc);
    goto LAB_0001a53c;
  case 0x32:
    spi_master_transaction_debug(uVar6,&local_128,1);
    bStack_1fe = (byte)local_128;
    return_code = 0x6d;
    bStack_1fd = local_128._1_1_;
    uVar16 = (uint)local_128._1_1_;
    if (2 < LOG_LEVEL) {
      uVar13 = local_128 >> 0x18;
      pcVar8 = "%s(): BLE_REQ_GET_WAKEUP_ANGLE: 0x%02x,0x%02x,0x%02x,0x%02x,\n";
      bVar2 = (byte)local_128;
      uVar4 = local_128 >> 0x10;
      goto LAB_0001a112;
    }
    break;
  case 0x33:
    spi_master_transaction_debug(uVar6,&local_128,1);
    pbVar15 = (byte *)&local_128;
    return_code = 0x33;
    pbVar11 = &bStack_1fe;
    do {
      uVar7 = *(undefined4 *)pbVar15;
      uVar10 = *(undefined4 *)(pbVar15 + 4);
      pbVar15 = pbVar15 + 8;
      *(undefined4 *)pbVar11 = uVar7;
      *(undefined4 *)(pbVar11 + 4) = uVar10;
      pbVar11 = pbVar11 + 8;
    } while (pbVar15 != local_118);
    if (2 < LOG_LEVEL) {
      pcVar8 = "%s(): BLE_REQ_GET_GLASSES_SN: %s\n";
      puVar12 = &local_128;
LAB_0001a3dc:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar8,"ble_process_get_req",puVar12);
      }
      else {
        handle_heartbeat();
      }
    }
    break;
  case 0x34:
    spi_master_transaction_debug(uVar6,&local_128,1);
    pbVar15 = (byte *)&local_128;
    return_code = 0x34;
    pbVar11 = &bStack_1fe;
    do {
      uVar7 = *(undefined4 *)pbVar15;
      uVar10 = *(undefined4 *)(pbVar15 + 4);
      pbVar15 = pbVar15 + 8;
      *(undefined4 *)pbVar11 = uVar7;
      *(undefined4 *)(pbVar11 + 4) = uVar10;
      pbVar11 = pbVar11 + 8;
    } while (pbVar15 != local_118);
    if (2 < LOG_LEVEL) {
      pcVar8 = "%s(): BLE_REQ_GET_DEVICE_SN: %s\n";
      puVar12 = &local_128;
      goto LAB_0001a3dc;
    }
    break;
  case 0x35:
    spi_master_transaction_debug(uVar6,&local_128,1);
    return_code = 0xc9;
    puVar12 = (undefined4 *)(local_128 & 0xff);
    bStack_1fe = (byte)local_128;
    if (2 < LOG_LEVEL) {
      pcVar8 = "%s(): BLE_REQ_GET_ESB_CHANNEL: %d\n";
      goto LAB_0001a3dc;
    }
    break;
  case 0x36:
    process_data_and_send_response(uVar6,&local_128,&bStack_200);
    return;
  case 0x37:
    spi_master_transaction_debug(uVar6,&local_128,1);
    return_code = 0x37;
    bStack_1fe = (byte)local_128;
    bStack_1fd = (byte)(local_128 >> 8);
    local_1fc = (byte)(local_128 >> 0x10);
    bStack_1fb = (byte)(local_128 >> 0x18);
    local_1fa[0] = (byte)local_124;
    break;
  case 0x38:
    return_code = 0xc9;
    bStack_1fe = *(byte *)(uVar6 + 0x8f4);
    puVar12 = (undefined4 *)(uint)bStack_1fe;
    if (0 < LOG_LEVEL) {
      pcVar8 = "%s(): globle->enable_ancs %d\n";
      goto LAB_0001a3dc;
    }
    break;
  case 0x39:
    if (*(short *)((int)puVar12 + 1) == *(short *)(packet + 2)) {
      fill_memory_buffer(&bStack_1fb,0,0x10);
      uVar7 = *puVar12;
      local_1fc = *(byte *)(puVar12 + 1);
      bStack_200 = (byte)uVar7;
      return_code = (byte)((uint)uVar7 >> 8);
      bStack_1fe = (byte)((uint)uVar7 >> 0x10);
      bStack_1fd = (byte)((uint)uVar7 >> 0x18);
      iVar9 = is_panoramic_mode_active();
      if (iVar9 == 0) {
        if (*(char *)(uVar6 - 0x6a7) == '\0') {
          bStack_1fb = 0xff;
        }
        else {
          bStack_1fb = *(byte *)(uVar6 - 0x6a7);
        }
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): return system status to app,current running app is %d\n",
                        "ble_process_get_req",(uint)*(byte *)(uVar6 - 0x6a7));
          }
          else {
            handle_heartbeat("%s(): return system status to app,current running app is %d\n",
                             "ble_process_get_req",*(undefined1 *)(uVar6 - 0x6a7));
          }
        }
      }
      else {
        bStack_1fb = 0;
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): return system status to app,current running app is E_ID_SCREEN_IDLE\n"
                        ,"ble_process_get_req");
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
          DEBUG_PRINT("%s(): get device  information packet length error,input data length = %d,packet data length = %d\n"
                      ,"ble_process_get_req");
        }
        else {
          handle_heartbeat("%s(): get device  information packet length error,input data length = %d,packet data length = %d\n"
                           ,"ble_process_get_req");
        }
      }
      fill_memory_buffer(local_1fa,0,0xf);
      local_1fc = *(byte *)(puVar12 + 1);
      uVar7 = *puVar12;
      bStack_200 = (byte)uVar7;
      return_code = (byte)((uint)uVar7 >> 8);
      bStack_1fe = (byte)((uint)uVar7 >> 0x10);
      bStack_1fd = (byte)((uint)uVar7 >> 0x18);
      bStack_1fb = 0xff;
    }
    uVar16 = 6;
    pcVar14 = *(code **)(uVar6 + 0xc);
    goto LAB_0001a53c;
  case 0x3a:
    return_code = 0xc9;
    bStack_1fe = *(byte *)(uVar6 + 0x911);
    puVar12 = (undefined4 *)(uint)bStack_1fe;
    if (0 < LOG_LEVEL) {
      pcVar8 = "%s(): globle->check_mode %d\n";
      goto LAB_0001a3dc;
    }
    break;
  case 0x3b:
    bStack_1fe = *(byte *)(uVar6 + 0x744);
    uVar16 = (uint)bStack_1fe;
    return_code = 0xc9;
    bStack_1fd = *(byte *)(uVar6 + 0x745);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        pcVar8 = "%s(): BLE_GET_RASTER_CONFIG:raster_height_gear:%d,canvas_distance_gear:%d\n";
        goto LAB_0001a31a;
      }
      pcVar8 = "%s(): BLE_GET_RASTER_CONFIG:raster_height_gear:%d,canvas_distance_gear:%d\n";
      goto LAB_0001a310;
    }
    break;
  case 0x3c:
    return_code = 0xc9;
    bStack_1fe = *(byte *)(uVar6 + 0x913);
    puVar12 = (undefined4 *)(uint)bStack_1fe;
    if (0 < LOG_LEVEL) {
      pcVar8 = "%s(): globle->message_mode %d\n";
      goto LAB_0001a3dc;
    }
    break;
  case 0x3d:
    uVar16 = (uint)*(ushort *)((int)puVar12 + 1);
    uVar13 = (uint)*(ushort *)(packet + 2);
    if (uVar16 != uVar13) {
      if (LOG_LEVEL < 2) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat("%s(): packet length error,input data length = %d,packet data length = %d\n"
                         ,"ble_process_get_req",uVar13,uVar16);
        return;
      }
      DEBUG_PRINT("%s(): packet length error,input data length = %d,packet data length = %d\n",
                  "ble_process_get_req",uVar13,uVar16);
      return;
    }
    uVar1 = *(undefined1 *)((int)puVar12 + 5);
    fill_memory_buffer(&bStack_200,0,0x15);
    validate_memory_bounds(&bStack_200,puVar12,uVar16,0x15);
    iVar9 = get_work_mode();
    DAT_20018462 = uVar1;
    if (iVar9 == 1) {
      SendSystemLanguageInfoToSlave(uVar1);
    }
    pcVar14 = *(code **)(uVar6 + 0xc);
    goto LAB_0001a53c;
  case 0x3e:
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): BLE_GET_BURIAL_POINT_DATA\n\n","ble_process_get_req");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar9 = get_work_mode();
    memcpy(auStack_1e8,iVar9 + 0x10c6,0xc0);
    local_128._0_2_ = CONCAT11(0xc9,*packet);
    memcpy((int)&local_128 + 2,auStack_1e8,0xc0);
    uVar16 = 0xc2;
    pcVar14 = *(code **)(uVar6 + 0xc);
    puVar3 = &stack0x000000ec;
    goto LAB_0001a6ca;
  }
  uVar16 = 0x14;
  pcVar14 = *(code **)(uVar6 + 0xc);
LAB_0001a53c:
  puVar3 = &stack0x00000014;
LAB_0001a6ca:
  (*pcVar14)(puVar3 + -0x214,uVar16);
  return;
}


