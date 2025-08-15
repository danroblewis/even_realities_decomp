/*
 * Function: try_enter_low_power_mode
 * Entry:    00026c8c
 * Prototype: undefined try_enter_low_power_mode()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void try_enter_low_power_mode(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  ushort uVar6;
  bool bVar7;
  longlong lVar8;
  
  uVar1 = get_adc_nfc_current_value();
  if (((4999 < uVar1) || (iVar2 = get_work_mode(), *(byte *)(iVar2 + 0xfc0) < 0x62)) ||
     (POWER_MANAGEMENT_STATE == 0)) {
    return;
  }
  disable_watchdog();
  uVar6 = 0;
LAB_00026cc2:
  do {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        uVar3 = get_adc_nfc_current_value();
        iVar2 = get_work_mode();
        DEBUG_PRINT("%s(): try to sleep chargerGetVdcRect() %d GLOBAL->battery_info[0] %d can_enter_low_power %d\n"
                    ,"try_enter_low_power_mode",uVar3,(uint)*(byte *)(iVar2 + 0xfc0),
                    (uint)POWER_MANAGEMENT_STATE);
      }
      else {
        uVar3 = get_adc_nfc_current_value();
        iVar2 = get_work_mode();
        handle_heartbeat("%s(): try to sleep chargerGetVdcRect() %d GLOBAL->battery_info[0] %d can_enter_low_power %d\n"
                         ,"try_enter_low_power_mode",uVar3,*(undefined1 *)(iVar2 + 0xfc0),
                         POWER_MANAGEMENT_STATE);
      }
    }
    uVar1 = 0;
    do {
      delay_with_timing(1000);
      manage_adc_nfc_system_state();
      fuel_gauge_update(&PTR_s_charger_00087d70,0);
      uVar4 = get_adc_nfc_current_value();
      if (uVar4 < 1000) {
        uVar1 = uVar1 & 0xffff;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 10);
    if (POWER_MANAGEMENT_STATE != 0) goto LAB_00026d96;
    iVar2 = compare_and_update_sensor_data_alt();
    if (iVar2 != 1) {
      if (LOG_LEVEL < 1) goto LAB_00026d88;
      if (IS_DEBUG == 0) {
        uVar3 = get_adc_nfc_current_value();
        pcVar5 = "%s(): force reboot becase can not enter low power mode %d\n";
        goto LAB_00026d84;
      }
      uVar3 = get_adc_nfc_current_value();
      pcVar5 = "%s(): force reboot becase can not enter low power mode %d\n";
      do {
        handle_heartbeat(pcVar5,"try_enter_low_power_mode",uVar3);
LAB_00026d88:
        do {
          delay_with_timing(500);
          system_fatal_error_handler_with_priority_control(1);
LAB_00026d96:
          uVar4 = get_adc_nfc_current_value();
          if ((1000 < uVar4) || (iVar2 = compare_and_update_sensor_data_alt(), iVar2 != 1)) {
            if (uVar1 != 10) {
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  uVar3 = get_adc_nfc_current_value();
                  DEBUG_PRINT("%s(): force exit low power mode becase can not enter low power mode %d\n"
                              ,"try_enter_low_power_mode",uVar3);
                }
                else {
                  uVar3 = get_adc_nfc_current_value();
                  handle_heartbeat("%s(): force exit low power mode becase can not enter low power mode %d\n"
                                   ,"try_enter_low_power_mode",uVar3);
                }
              }
              change_work_mode_to(9);
            }
            goto LAB_00026cc2;
          }
          POWER_MANAGEMENT_STATE = 2;
          while (DAT_20018d81 == '\0') {
            lVar8 = calculate_mathematical_operation_with_bit_shifting();
            lVar8 = lVar8 - CONCAT44(LOW_POWER_MODE_ENTRY_STATE_2,LOW_POWER_MODE_ENTRY_STATE_1);
            iVar2 = (int)((ulonglong)lVar8 >> 0x20);
            bVar7 = (uint)lVar8 < 300000;
            if ((uint)bVar7 <= (uint)-iVar2) break;
            if (POWER_MANAGEMENT_STATE == 0) {
              return;
            }
            delay_with_timing(1000,-(uint)!bVar7 - iVar2);
          }
          change_work_mode_to(8);
          _DAT_50005614 = 1;
          DAT_20018d81 = '\x01';
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): enter low power mode\n","try_enter_low_power_mode");
            }
            else {
              handle_heartbeat();
            }
          }
          while ((iVar2 = get_work_mode(), 0x5e < *(byte *)(iVar2 + 0xfc0) &&
                 (POWER_MANAGEMENT_STATE != 0))) {
            uVar6 = uVar6 + 1;
            delay_with_timing(0x32);
            if (0x4af < uVar6) {
              fuel_gauge_update(&PTR_s_charger_00087d70,0);
              uVar6 = 0;
            }
          }
          change_work_mode_to(9);
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              uVar3 = get_adc_nfc_current_value();
              iVar2 = get_work_mode();
              DEBUG_PRINT("%s(): wakeup chargerGetVdcRect() %d GLOBAL->battery_info[0] %d can_enter_low_power %d\n"
                          ,"try_enter_low_power_mode",uVar3,(uint)*(byte *)(iVar2 + 0xfc0),
                          (uint)POWER_MANAGEMENT_STATE);
            }
            else {
              uVar3 = get_adc_nfc_current_value();
              iVar2 = get_work_mode();
              handle_heartbeat("%s(): wakeup chargerGetVdcRect() %d GLOBAL->battery_info[0] %d can_enter_low_power %d\n"
                               ,"try_enter_low_power_mode",uVar3,*(undefined1 *)(iVar2 + 0xfc0),
                               POWER_MANAGEMENT_STATE);
            }
          }
          uVar1 = 0x28;
          do {
            if (POWER_MANAGEMENT_STATE != 0) break;
            delay_with_timing(100);
            manage_adc_nfc_system_state();
            fuel_gauge_update(&PTR_s_charger_00087d70,0);
            uVar1 = uVar1 - 1 & 0xff;
          } while (uVar1 != 0);
          iVar2 = compare_and_update_sensor_data_alt();
          if ((iVar2 == 1) || (uVar4 = get_adc_nfc_current_value(), 1000 < uVar4)) {
            delay_with_timing(6000);
            goto LAB_00026cc2;
          }
        } while (LOG_LEVEL < 1);
        if (IS_DEBUG == 0) {
          uVar3 = get_adc_nfc_current_value();
          pcVar5 = "%s(): force reboot becase can not get vac %d\n";
LAB_00026d84:
          DEBUG_PRINT(pcVar5,"try_enter_low_power_mode",uVar3);
          goto LAB_00026d88;
        }
        uVar3 = get_adc_nfc_current_value();
        pcVar5 = "%s(): force reboot becase can not get vac %d\n";
      } while( true );
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): glass box is close, wait enter low power mode again.\n",
                    "try_enter_low_power_mode");
      }
      else {
        handle_heartbeat();
      }
    }
  } while( true );
}


