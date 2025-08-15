/*
 * Function: manage_adc_nfc_system_state
 * Entry:    00025528
 * Prototype: undefined manage_adc_nfc_system_state()
 */


undefined4 manage_adc_nfc_system_state(undefined4 param_1,uint3 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  monitor_sensor_status_periodically();
  if (DAT_200079fc == 0) {
    iVar1 = handle_state_checking(1);
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = send_control_message_with_specific_command_code
                      (SYSTEM_CONFIGURATION_PARAMETER,&stack0xffffffef);
    if (iVar1 == 0) {
      uVar3 = uVar3 & 0xfeffffff;
      send_data_packet_with_specific_command_code(SYSTEM_CONFIGURATION_PARAMETER);
    }
    handle_data_writing_with_validation(0xff);
    iVar1 = handle_state_checking(0);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_200079fc = 1;
  }
  cVar2 = DAT_20002385;
  if (DAT_20002385 == '\x01') {
    DAT_20002384 = DAT_20002385;
    cVar2 = '\0';
    DAT_20002388 = 0x9010000;
    DAT_2000238c = 0xa031e09;
    DAT_20002386 = 0;
    DAT_20002390 = &LAB_000500fe_2;
    DAT_20002394 = 0;
    DAT_2000239c = 0x200;
    ADC_NFC_SYSTEM_STATE_FLAG_6 = 0x101;
    ADC_NFC_SYSTEM_STATE_FLAG_7 = 0xa0a;
    ADC_NFC_SYSTEM_STATE_FLAG_8 = 0xf000000;
    DAT_20002398 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_1 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_2 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_3 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_4 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_5 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_9 = 0;
    ADC_NFC_SYSTEM_STATE_FLAG_10 = 0;
    DAT_20002380 = 1;
  }
  process_adc_nfc_sensor_data_and_state
            (&DAT_20007a2c,&DAT_20002380,cVar2,&DAT_20002380,param_1,uVar3);
  iVar1 = get_system_ready_state();
  if ((iVar1 != 0) || (iVar1 = get_work_mode(), 0x1d < *(byte *)(iVar1 + 0xfc0))) {
    handle_process_state_machine(&DAT_20002380);
  }
  return 0;
}


