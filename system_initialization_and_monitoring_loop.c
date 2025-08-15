/*
 * Function: system_initialization_and_monitoring_loop
 * Entry:    0002a4f4
 * Prototype: void system_initialization_and_monitoring_loop(undefined4 param1, uint param2, undefined4 param3, undefined4 param4)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void system_initialization_and_monitoring_loop(undefined4 param1, uint param2,
   undefined4 param3, undefined4 param4) */

void system_initialization_and_monitoring_loop
               (undefined4 param1,uint param2,undefined4 param3,undefined4 param4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param2;
  uStack_28 = param3;
  iVar3 = setup_bluetooth_stack(&DAT_20007b00,0,10,param4,param1);
  if (iVar3 == 0) {
    DAT_20018d88 = 1;
  }
  DEBUG_PRINT("[csh_debug_nfc] g_nfcMsgSemInitOk is %d \n",(uint)DAT_20018d88);
  iVar3 = 0;
LAB_0002a516:
  do {
    iVar4 = get_work_mode();
    if (*(char *)(iVar4 + 1) == '\b') {
      calculate_and_store_timestamp_with_offset(10000);
      set_next_timing_deadline();
      uVar5 = 0x667;
    }
    else {
      iVar4 = get_work_mode();
      if (*(char *)(iVar4 + 1) == '\x01') {
        uVar5 = 0x28000;
      }
      else {
        uVar9 = get_system_ready_state();
        uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 1) {
          do {
            iVar4 = manage_ble_connection_state_comprehensive(&DAT_20007b00,uVar5,0x18000,0);
            cVar2 = POWER_MANAGEMENT_STATE;
            if (iVar4 != 0) {
              POWER_MANAGEMENT_STATE = cVar2;
              if ((POWER_MANAGEMENT_STATE == '\0') &&
                 (iVar4 = get_work_mode(), *(char *)(iVar4 + 1) != '\b')) {
                uVar9 = calculate_mathematical_operation_with_bit_shifting();
                uVar7 = SYSTEM_TIMESTAMP_AND_MONITORING_DATA;
                uVar1 = DAT_200040c8;
                uVar10 = calculate_mathematical_operation_with_bit_shifting();
                uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
                if ((SYSTEM_TIMESTAMP_AND_MONITORING_DATA <= uVar8 &&
                     (uint)((uint)uVar10 <= DAT_200040c8) <=
                     SYSTEM_TIMESTAMP_AND_MONITORING_DATA - uVar8) &&
                   (uVar7 = (int)((ulonglong)uVar9 >> 0x20) - uVar7,
                   uVar8 = (uint)((uint)uVar9 < uVar1),
                   uVar7 != uVar8 || uVar7 - uVar8 < (uint)(3000 < (uint)uVar9 - uVar1))) {
                  set_sensor_enable_state(0,0);
                  set_sensor_enable_state(1,0);
                  POWER_MANAGEMENT_STATE = cVar2;
                }
              }
              goto LAB_0002a516;
            }
            uStack_2c = uStack_2c & 0xffffff;
            uVar9 = calculate_mathematical_operation_with_bit_shifting();
            uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
            if (SYSTEM_TIMESTAMP_AND_MONITORING_DATA <= uVar7 &&
                (uint)((uint)uVar9 <= DAT_200040c8) <= SYSTEM_TIMESTAMP_AND_MONITORING_DATA - uVar7)
            {
              calculate_and_store_timestamp_with_offset(0);
            }
            retry_nfc_operation_with_backoff((int)&uStack_2c + 3);
            if ((int)((uStack_2c >> 0x18) << 0x1a) < 0) {
              check_and_enter_long_trip_mode();
              break;
            }
            iVar3 = iVar3 + 1;
            uVar5 = extraout_r1;
          } while (iVar3 < 10);
          set_sensor_enable_state(0,1);
          iVar3 = 0;
          goto LAB_0002a516;
        }
        iVar4 = check_and_enter_long_trip_mode();
        iVar6 = get_work_mode();
        if (*(char *)(iVar6 + 0x1088) == '\x01') {
          iVar4 = initialize_sensor_system_complete();
        }
        calculate_ble_schedule_timing(0x1334,0);
        if (iVar4 == 0) {
          monitor_sensor_status_periodically();
        }
        uVar5 = 0x1334;
      }
    }
    calculate_ble_schedule_timing(uVar5,0);
  } while( true );
}


