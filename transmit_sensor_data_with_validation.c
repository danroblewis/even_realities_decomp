/*
 * Function: transmit_sensor_data_with_validation
 * Entry:    00030cd0
 * Prototype: undefined transmit_sensor_data_with_validation()
 */


undefined4
transmit_sensor_data_with_validation(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  char *format_string;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  if ((((param_2 == 0) || (param_3 == (undefined1 *)0x0)) || (param_4 == 0)) || (param_1 == 2)) {
    DEBUG_PRINT("comm_write para is error\n");
    return 0xffffffff;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0;
    }
    if (((param_2 == 0) || (param_3 == (undefined1 *)0x0)) || (param_4 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = (**(code **)(*(int *)(param_2 + 8) + 4))();
      if (iVar2 == 0) {
        calculate_ble_schedule_timing(0x4000,0);
        (**(code **)(*(int *)(param_2 + 8) + 0x1c))(param_2,*param_3);
        calculate_ble_schedule_timing(0xccd,0);
        uVar3 = 0;
      }
      else {
        DEBUG_PRINT("Failed to initiate transmission\n");
        uVar3 = 0xfffffffe;
      }
    }
    return uVar3;
  }
  if (((param_2 == 0) || (param_3 == (undefined1 *)0x0)) || (param_4 == 0)) {
    return 0xffffffff;
  }
  uStack_14 = (uint)param_3 & 0xffffff;
  iVar2 = param_2;
  iVar1 = send_control_message_with_retry_and_mutex(param_2,0x2006,(int)&uStack_14 + 3,1,param_2);
  if (iVar1 == 0) {
    if ((uStack_14 & 0x6000000) == 0) {
      iVar1 = send_data_packet_with_retry_and_mutex(param_2,0x2008,param_3,param_4);
      if (iVar1 == 0) {
        iVar2 = send_control_message_with_retry_and_mutex
                          (param_2,0x2006,(int)&uStack_14 + 3,1,iVar2);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_00025974;
      }
      format_string = "eeprom_st25dv_write ST25DV_REG_MAILBOX_DYN failed\n";
    }
    else {
      format_string = "eeprom_st25dv_write_i2c_mb_mailbox_ram no write\n";
    }
    DEBUG_PRINT(format_string);
    uVar3 = 0xfffffffd;
  }
  else {
LAB_00025974:
    DEBUG_PRINT("eeprom_st25dv_read ST25DV_REG_MB_CTRL_DYN is failed\n");
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}


