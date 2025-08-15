/*
 * Function: check_work_mode
 * Entry:    00027758
 * Prototype: undefined check_work_mode()
 */


void check_work_mode(int param_1,int param_2,int param_3)

{
  bool bVar1;
  byte event_id2;
  uint uVar2;
  int iVar3;
  char *debug_mode_message;
  uint new_box_charging_status;
  byte *pbVar4;
  byte bVar5;
  byte event_id;
  undefined8 uVar6;
  
  uVar2 = get_system_byte_1();
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 2) {
    return;
  }
  if (uVar2 == 8) {
    return;
  }
  uVar6 = calculate_mathematical_operation_with_bit_shifting();
  if ((int)((ulonglong)uVar6 >> 0x20) < (int)(uint)((uint)uVar6 < 10000)) {
    return;
  }
  iVar3 = get_work_mode();
  if ((((*(byte *)(iVar3 + 0xfc4) < 0x83) &&
       (iVar3 = get_work_mode(), 0x50 < *(byte *)(iVar3 + 0xfc4))) &&
      (iVar3 = get_work_mode(), '\0' < *(char *)(iVar3 + 0xfc8))) &&
     ((iVar3 = get_work_mode(), *(byte *)(iVar3 + 0xfc0) < 2 && (param_1 == 0)))) {
    debug_mode_message = (char *)get_work_mode();
    if (*debug_mode_message == '\x01') {
      _event_id2 = get_work_mode();
      sync_to_slave(_event_id2,3,0,0);
    }
    else {
      _event_id2 = get_work_mode();
      process_message_and_sync(_event_id2,5,0,0);
    }
    _event_id2 = get_work_mode();
    handle_work_mode_finish(_event_id2,1);
    change_work_mode_to(7);
    return;
  }
  if (BATTERY_VOLTAGE_LEVEL < 0x33) {
    if (BATTERY_VOLTAGE_LEVEL < 0x28) {
      DAT_20018d86 = '\0';
      get_work_mode();
      iVar3 = check_work_mode_state_valid();
      if (iVar3 == 0) {
        bVar5 = 3;
      }
      else {
        iVar3 = get_work_mode();
        if (**(char **)(iVar3 + 0x1014) == '\0') {
          bVar5 = 0x3c;
        }
        else {
          bVar5 = 10;
        }
      }
      DAT_20018d87 = DAT_20018d87 + 1;
      if (bVar5 <= DAT_20018d87) {
        DAT_20018d93 = 0;
        DAT_20018d92 = '\0';
        DAT_20018d87 = bVar5;
        check_and_clear_burial_point_flag();
        if (param_1 == 0) {
          if (uVar2 != 4) {
            _event_id2 = get_work_mode();
            handle_work_mode_finish(_event_id2,1);
            change_work_mode_to(4);
            if (0 < LOG_LEVEL) {
              debug_mode_message = "%s(): MODE_NORMAL_LOW_POWER_ID\n";
              goto LAB_00027964;
            }
          }
        }
        else if (param_2 == 0) {
          _event_id2 = get_work_mode();
          handle_work_mode_finish(_event_id2,1);
          change_work_mode_to(5);
          if (0 < LOG_LEVEL) {
            debug_mode_message = "%s(): MODE_CHARGING_RUN_ID\n";
            goto LAB_00027964;
          }
        }
        else {
          _event_id2 = get_work_mode();
          handle_work_mode_finish(_event_id2,1);
          change_work_mode_to(6);
          if (0 < LOG_LEVEL) {
            debug_mode_message = "%s(): MODE_CHARGING_LOW_POWER_ID\n";
LAB_00027964:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(debug_mode_message,"check_work_mode");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
    }
    bVar1 = false;
  }
  else {
    DAT_20018d93 = 1;
    enter_wear_burial_point();
    if (uVar2 - 2 < 2) {
      get_work_mode();
      iVar3 = check_work_mode_state_valid();
      if ((iVar3 != 0) && (change_work_mode_to(2), 0 < LOG_LEVEL)) {
        debug_mode_message = "%s(): MODE_NORMAL_RUN_ID\n";
        goto LAB_0002782c;
      }
    }
    else {
      _event_id2 = get_work_mode();
      handle_work_mode_finish(_event_id2,0);
      change_work_mode_to(3);
      if (0 < LOG_LEVEL) {
        debug_mode_message = "%s(): MODE_NORMAL_STANBY_ID\n";
LAB_0002782c:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(debug_mode_message,"check_work_mode");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    pbVar4 = (byte *)&DAT_20018d92;
    DAT_20018d87 = 0;
    bVar5 = DAT_20018d92 + 1;
    if (bVar5 < 2) {
LAB_00027844:
      *pbVar4 = bVar5;
    }
    else {
      DAT_20018d92 = '\x02';
      pbVar4 = (byte *)&DAT_20018d86;
      bVar5 = DAT_20018d86 + 1;
      if (bVar5 < 10) goto LAB_00027844;
      DAT_20018d86 = '\0';
      iVar3 = check_sensor_status_and_validate();
      if (iVar3 != 0) {
        initialize_sensor_system();
      }
    }
    bVar1 = true;
  }
  if (param_3 == 0) {
    DAT_20003025 = 0xff;
    DAT_20003026 = 0xff;
    DAT_20003027 = 0xff;
    LAST_BOX_CHARGING_STATUS = 0xff;
    DAT_20003029 = 0xff;
    DAT_2000302a = 0xff;
    DAT_20018d84 = 4;
    DAT_20018d85 = 4;
    return;
  }
  if ((DAT_2000302a == -1) || (iVar3 = get_work_mode(), *(int *)(iVar3 + 0x9b4) == 2)) {
    iVar3 = get_work_mode();
    if (*(int *)(iVar3 + 0x9b4) == 2) {
      uVar6 = get_work_mode();
      manage_ble_connection_state_comprehensive
                ((int)uVar6 + 0x9ac,(int)((ulonglong)uVar6 >> 0x20),0xffffffff,0xffffffff);
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): EVENT_GLASS_HAS_FINISH_BIND\n","check_work_mode");
      }
      else {
        handle_heartbeat();
      }
    }
    send_event_status(0x11);
    DAT_2000302a = 0xfe;
    return;
  }
  if (param_1 == 0) {
    if (bVar1) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): EVENT_ENTER_WARED\n","check_work_mode");
        }
        else {
          handle_heartbeat();
        }
      }
      event_id = 0x6;
    }
    else {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): EVENT_UNWARED_OUTBOX\n","check_work_mode");
        }
        else {
          handle_heartbeat();
        }
      }
      event_id = 0x7;
    }
    DAT_20003029 = 0xff;
    LAST_BOX_CHARGING_STATUS = 0xff;
    DAT_20018d85 = '\x04';
    DAT_20018d84 = '\x04';
  }
  else if (param_2 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): EVENT_PUT_IN_GLASS_BOX_OPEN\n","check_work_mode");
      }
      else {
        handle_heartbeat();
      }
    }
    event_id = 0x8;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): EVENT_PUT_IN_GLASS_BOX_CLOSE\n","check_work_mode");
      }
      else {
        handle_heartbeat();
      }
    }
    event_id = 0xb;
  }
  if (DAT_2000302d != event_id) {
    send_event_status(event_id);
    DAT_2000302d = event_id;
    return;
  }
  iVar3 = get_work_mode();
  bVar5 = *(byte *)(iVar3 + 0xfc0);
  if ((DAT_20003027 != bVar5) && (bVar5 < 0x65)) {
    DAT_20003027 = bVar5;
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): EVENT_STATE_BATTERY_PERCENT %d\n","check_work_mode");
      }
      else {
        handle_heartbeat();
      }
    }
    _event_id2 = 0xa;
    goto LAB_00027af8;
  }
  if (param_1 == 0) {
    if (DAT_20003026 != 0) {
LAB_00027b70:
      uVar2 = 0;
LAB_00027b72:
      if ((byte)(DAT_20018d84 + 1) < 5) {
        DAT_20018d84 = DAT_20018d84 + 1;
        return;
      }
      DAT_20018d84 = 0;
      iVar3 = get_work_mode();
      DAT_20003026 = (byte)uVar2;
      *(byte *)(iVar3 + 0x794) = DAT_20003026;
      send_event_status(9);
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): EVENT_STATE_CHARGING %d\n","check_work_mode",uVar2);
        return;
      }
      handle_heartbeat();
      return;
    }
    DAT_20018d84 = '\0';
  }
  else {
    uVar2 = compare_and_update_sensor_data_alt2();
    if (uVar2 == 0) {
      if (DAT_20003026 != 0) goto LAB_00027b70;
    }
    else {
      DAT_20018d84 = '\x04';
      if (DAT_20003026 != uVar2) goto LAB_00027b72;
    }
    DAT_20018d84 = '\0';
    new_box_charging_status = get_glassbox_charge_status();
    if (LAST_BOX_CHARGING_STATUS != new_box_charging_status) {
      DAT_20018d85 = DAT_20018d85 + 1;
      if (4 < DAT_20018d85) {
        DAT_20018d85 = 0;
        LAST_BOX_CHARGING_STATUS = (byte)new_box_charging_status;
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): EVENT_GLASS_BOX_STATUS %d\n","check_work_mode",
                        new_box_charging_status);
          }
          else {
            handle_heartbeat();
          }
        }
        send_event_status(0xe);
      }
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): last_box_charging_status is %d, box_charging_status is %d\n",
                    "check_work_mode",(uint)LAST_BOX_CHARGING_STATUS,new_box_charging_status);
        return;
      }
      handle_heartbeat("%s(): last_box_charging_status is %d, box_charging_status is %d\n",
                       "check_work_mode",(uint)LAST_BOX_CHARGING_STATUS,new_box_charging_status);
      return;
    }
    DAT_20018d85 = '\0';
    uVar2 = get_glassbox_charge_percent();
    if ((DAT_20003029 != uVar2) && (uVar2 < 0x65)) {
      DAT_20003029 = (byte)uVar2;
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): EVENT_GLASS_BOX_SOC %d\n","check_work_mode",uVar2,uVar2);
        }
        else {
          handle_heartbeat("%s(): EVENT_GLASS_BOX_SOC %d\n","check_work_mode",uVar2);
        }
      }
      _event_id2 = 0xf;
      goto LAB_00027af8;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): last_box_soc is %d, box_soc is %d\n","check_work_mode",(uint)DAT_20003029
                    ,uVar2);
      }
      else {
        handle_heartbeat("%s(): last_box_soc is %d, box_soc is %d\n","check_work_mode");
      }
    }
  }
  debug_mode_message = (char *)get_work_mode();
  if ((*debug_mode_message == '\x01') && (iVar3 = get_work_mode(), *(int *)(iVar3 + 0xf90) != 0)) {
    iVar3 = get_work_mode();
    iVar3 = calculate_brightness_level(iVar3 + 0xf80);
    if ((iVar3 != 0xff) && (iVar3 = get_work_mode(), *(char *)(iVar3 + 0xed5) != DAT_20003025)) {
      iVar3 = get_work_mode();
      DAT_20003025 = *(char *)(iVar3 + 0xed5);
      _event_id2 = 0x12;
LAB_00027af8:
      send_event_status(_event_id2);
      return;
    }
  }
  return;
}


