/*
 * Function: handle_process_state_machine
 * Entry:    0000fcf0
 * Prototype: undefined handle_process_state_machine()
 */


/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000fdd2 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void handle_process_state_machine(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 extraout_r2;
  undefined1 uVar5;
  int iVar6;
  undefined4 extraout_s1;
  
  process_adc_nfc_threshold_event(param_3,&PROCESS_STATE_MACHINE_CONTROL);
  PROCESS_STATE_MACHINE_CONTROL = 1;
  switch(*(undefined1 *)(param_3 + 5)) {
  case 1:
    set_default_configuration_values(param_3);
    *(undefined1 *)(param_3 + 5) = 2;
    PROCESS_STATE_MACHINE_CONTROL = extraout_r2;
    *(undefined1 *)(param_3 + 2) = 0;
    return;
  case 2:
    calculate_ble_schedule_timing(0x667,0);
LAB_0000fd36:
    uVar5 = 3;
    break;
  case 3:
    if (*(char *)(param_3 + 2) == '\0') {
      if (*(char *)(param_3 + 7) == '\0') {
        if ((DAT_20003023 == '\0') && (*(char *)(param_3 + 0xb) == *(char *)(param_3 + 0xc))) {
          bVar1 = *(byte *)(param_3 + 0x13);
          iVar6 = (uint)bVar1 - (uint)PROCESS_STATE_MACHINE_DATA;
          if (iVar6 < 0) {
            iVar6 = (uint)PROCESS_STATE_MACHINE_DATA - (uint)bVar1;
          }
          if (0x14 < iVar6) {
            PROCESS_STATE_MACHINE_DATA = (ushort)bVar1;
            goto LAB_0000fd68;
          }
        }
        else {
LAB_0000fd68:
          *(char *)(param_3 + 0xb) = *(char *)(param_3 + 0xc);
          handle_complex_data_processing_and_writing(param_3 + 7,param_3 + 0x11,param_3 + 0x1c);
          DAT_20003023 = '\0';
        }
        *(undefined1 *)(param_3 + 5) = 4;
      }
      if (*(char *)(param_3 + 1) != '\0') {
        *(undefined1 *)(param_3 + 1) = 0;
      }
      PROCESS_STATE_MACHINE_BUFFER = 150.0;
switchD_0000fd08_caseD_e:
      set_timestamp();
      return;
    }
LAB_0000fd3e:
    uVar5 = 0xc;
    break;
  case 4:
    uVar4 = calculate_time_difference();
    if ((float)uVar4 <= PROCESS_STATE_MACHINE_BUFFER) {
      return;
    }
    if (*(char *)(param_3 + 7) == '\0') {
      uVar5 = 9;
    }
    else {
      uVar5 = 5;
    }
    break;
  case 5:
  case 6:
  case 7:
  case 9:
    if (*(char *)(param_3 + 7) == '\0') {
      uVar3 = int_to_float_64bit_signed(*(byte *)(param_3 + 0xb) + 3);
      uVar3 = handle_complex_mathematical_function(0,param_2,uVar3);
      float_add_64bit(uVar3,extraout_s1,0,0x40490000);
      PROCESS_STATE_MACHINE_BUFFER = (float)complex_float_conversion();
    }
    set_timestamp();
    uVar5 = 10;
    break;
  default:
    goto switchD_0000fd08_caseD_8;
  case 10:
    if ((*(char *)(param_3 + 1) == '\0') &&
       (uVar4 = calculate_time_difference(), (float)uVar4 < PROCESS_STATE_MACHINE_BUFFER)) {
      return;
    }
    uVar5 = 0xb;
    break;
  case 0xb:
    cVar2 = *(char *)(param_3 + 7);
    if (*(char *)(param_3 + 1) == '\0') {
      if (cVar2 != '\0') {
        PROCESS_STATE_MACHINE_CONTROL = 1;
        return;
      }
      goto LAB_0000fd36;
    }
    if (*(char *)(param_3 + 2) != '\0') {
      if (cVar2 != '\0') {
        PROCESS_STATE_MACHINE_CONTROL = 1;
        return;
      }
      goto LAB_0000fd3e;
    }
    if (cVar2 != '\0') {
      PROCESS_STATE_MACHINE_CONTROL = 1;
      return;
    }
    uVar5 = 2;
    break;
  case 0xc:
    *(undefined1 *)(param_3 + 7) = 2;
    *(undefined1 *)(param_3 + 0xb) = 0x13;
    handle_complex_data_processing_and_writing(param_3 + 7,param_3 + 0x11,param_3 + 0x1c);
    DAT_20003023 = '\x01';
    *(undefined1 *)(param_3 + 1) = 0;
    set_timestamp();
    uVar5 = 0xe;
    break;
  case 0xe:
    goto switchD_0000fd08_caseD_e;
  }
  *(undefined1 *)(param_3 + 5) = uVar5;
switchD_0000fd08_caseD_8:
  return;
}


