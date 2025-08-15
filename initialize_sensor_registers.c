/*
 * Function: initialize_sensor_registers
 * Entry:    00030224
 * Prototype: undefined initialize_sensor_registers()
 */


int initialize_sensor_registers(void)

{
  uint uVar1;
  undefined4 in_r3;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &SYSTEM_MESSAGE_AND_ERROR_HANDLING_1;
  do {
    uVar1 = puVar2[1];
    if (*puVar2 != 0x4414) {
      transmit_sensor_data_with_retry(*puVar2 & 0xffff);
      uVar1 = DISPLAY_DISPATCH_THREAD_EXTENDED_FINAL_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE;
    }
    DISPLAY_DISPATCH_THREAD_EXTENDED_FINAL_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE = uVar1;
    iVar3 = iVar3 + 2;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0x58);
  iVar3 = transmit_sensor_data_with_retry(0x4408,1);
  if (iVar3 == 0) {
    DISPLAY_DISPATCH_THREAD_ULTIMATE_EXTENDED_FINAL_COMPREHENSIVE_COMPLETION_STATE = 1;
    iVar3 = transmit_sensor_data_with_retry
                      (0x4414,
                       DISPLAY_DISPATCH_THREAD_EXTENDED_FINAL_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE
                       ,1,&
                          DISPLAY_DISPATCH_THREAD_EXTENDED_FINAL_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE
                       ,in_r3);
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    iVar3 = -iVar3;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}


