/*
 * Function: enter_into_long_trip
 * Entry:    000330ec
 * Prototype: undefined enter_into_long_trip()
 */


undefined4 enter_into_long_trip(undefined4 param_1)

{
  int iVar1;
  char *format_string;
  uint uVar2;
  uint extraout_r2;
  byte *pbVar3;
  byte *extraout_r3;
  undefined4 uVar4;
  uint local_28;
  uint local_24;
  undefined *local_20;
  byte *local_1c [2];
  
  if (((SENSOR_SYSTEM_STATUS_AND_CONFIGURATION == 0) ||
      (SENSOR_CONFIGURATION_PARAMETER_STORAGE == 0)) || (SENSOR_CONFIGURATION_PARAMETERS == '\x02'))
  {
    DEBUG_PRINT("comm para is error\n");
    uVar4 = 0xffffffff;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = &DAT_20019ff5;
    local_1c[0] = &DAT_2001a0f5;
    set_sensor_system_status();
    iVar1 = SENSOR_SYSTEM_STATUS_AND_CONFIGURATION;
    if (SENSOR_CONFIGURATION_PARAMETERS != '\0') {
      iVar1 = SENSOR_CONFIGURATION_PARAMETER_STORAGE;
    }
    iVar1 = process_data_with_operation_mode_and_validation
                      (SENSOR_CONFIGURATION_PARAMETERS,iVar1,&local_20,&local_24);
    if (iVar1 == 0) {
      iVar1 = route_command_to_handler
                        (SENSOR_CONFIGURATION_PARAMETERS,&DAT_20019ff5,local_24 & 0xff,local_1c,
                         &local_28,param_1);
      if (iVar1 == 0) {
        iVar1 = SENSOR_SYSTEM_STATUS_AND_CONFIGURATION;
        if (SENSOR_CONFIGURATION_PARAMETERS != '\0') {
          iVar1 = SENSOR_CONFIGURATION_PARAMETER_STORAGE;
        }
        iVar1 = transmit_sensor_data_with_validation
                          (SENSOR_CONFIGURATION_PARAMETERS,iVar1,local_1c[0],local_28 & 0xff);
        if (iVar1 == 0) {
          reset_sensor_system_status();
          if (local_1c[0][9] == 0x80) {
            calculate_ble_schedule_timing_with_division_and_scaling(1000);
            local_1c[0][9] = 0;
            set_sensor_system_status();
            transmit_sensor_data_with_validation
                      (SENSOR_CONFIGURATION_PARAMETERS,SENSOR_SYSTEM_STATUS_AND_CONFIGURATION,
                       local_1c[0],local_28 & 0xff);
            reset_sensor_system_status();
          }
          pbVar3 = local_1c[0];
          if (SENSOR_CONFIGURATION_PARAMETERS != '\0') {
            pbVar3 = local_1c[0] + 4;
          }
          uVar2 = (uint)*pbVar3;
          uVar4 = 0;
          if (uVar2 == 0x1b) {
            if (pbVar3[8] != 0) {
              erase_audio_buffer();
            }
          }
          else if (uVar2 == 0x13) {
            if (((pbVar3[4] & 0xfb) == 0) && (iVar1 = format_and_send_sensor_data_alt(), iVar1 != 0)
               ) {
              uVar4 = 0xfffffffb;
            }
          }
          else {
            if (uVar2 != 6) {
              if (uVar2 != 0xb) goto LAB_0003325a;
              if (LOG_LEVEL < 1) goto LAB_0003324c;
              format_string = "%s(): sys reboot because process_pt_data cmd PTP_DEVICE_RESTART\n";
              do {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT(format_string,"process_pt_data");
                }
                else {
                  handle_heartbeat();
                }
LAB_0003324c:
                do {
                  while( true ) {
                    calculate_ble_schedule_timing_with_division_and_scaling(300);
                    system_fatal_error_handler_with_priority_control(1);
                    uVar2 = extraout_r2;
                    pbVar3 = extraout_r3;
LAB_0003325a:
                    if (uVar2 != 0x3c) break;
                    if (pbVar3[4] != 0) {
                      return 0;
                    }
                    if (0 < LOG_LEVEL) {
                      if (IS_DEBUG == 0) {
                        DEBUG_PRINT("%s(): sys reboot because process_pt_data cmd %d and ACK_SUCC\n"
                                    ,"process_pt_data");
                      }
                      else {
                        handle_heartbeat();
                      }
                    }
                  }
                  if (uVar2 != 1) {
                    return 0;
                  }
                  if (pbVar3[4] != 0) {
                    return 0;
                  }
                } while (LOG_LEVEL < 1);
                format_string = "%s(): sys reboot because process_pt_data cmd ACK_SUCC\n";
              } while( true );
            }
            if (pbVar3[2] == 2) {
              POWER_MANAGEMENT_STATE = 1;
              set_sensor_enable_state(1);
              calculate_and_store_timestamp_with_offset(10000);
            }
            else {
              DEBUG_PRINT("enter into long trip \n");
              calculate_ble_schedule_timing_with_division_and_scaling(10000);
              change_work_mode_to(7);
            }
          }
        }
        else {
          DEBUG_PRINT("comm_write is failed\n");
          uVar4 = 0xfffffffc;
          reset_sensor_system_status();
        }
      }
      else {
        DEBUG_PRINT("process_pt_protocol is failed\n");
        uVar4 = 0xfffffffd;
        reset_sensor_system_status();
      }
    }
    else {
      reset_sensor_system_status();
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}


