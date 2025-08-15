/*
 * Function: send_data_packet_with_validation_and_retry
 * Entry:    0007c3d0
 * Prototype: undefined send_data_packet_with_validation_and_retry()
 */


int send_data_packet_with_validation_and_retry(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  uVar4 = 0xfe000003;
  local_1c = param_1;
  iVar1 = calculate_mathematical_result_alt2();
  if (param_1 < 0xff) {
    iVar3 = 2;
  }
  else {
    iVar3 = 4;
  }
  if ((uint)(((iVar1 - BLE_DATA_PROCESSING_BUFFER) + -1) - iVar3) < param_1) {
    iVar1 = -2;
  }
  else {
    iVar3 = handle_complex_data_processing_alt();
    iVar1 = BLE_DATA_PROCESSING_BUFFER;
    if (iVar3 == 0) {
      if (param_1 < 0xff) {
        iVar3 = 2;
        local_1c._0_2_ = CONCAT11((char)param_1,3);
      }
      else {
        iVar3 = 4;
        local_1c = CONCAT22((ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff,0xff03);
      }
      iVar2 = send_data_packet_with_retry_and_mutex
                        (SYSTEM_CONFIGURATION_PARAMETER,BLE_DATA_PROCESSING_BUFFER,&local_1c,iVar3,
                         uVar4);
      if (iVar2 == 0) {
        iVar2 = send_data_packet_with_retry_and_mutex
                          (SYSTEM_CONFIGURATION_PARAMETER,iVar3 + iVar1,param_2,param_1);
        if (iVar2 == 0) {
          iVar1 = send_data_packet_with_retry_and_mutex
                            (SYSTEM_CONFIGURATION_PARAMETER,param_1 + iVar3 + iVar1,&stack0xffffffe3
                             ,1);
          if (iVar1 != 0) {
            iVar1 = 1;
          }
          return -iVar1;
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


