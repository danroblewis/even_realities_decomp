/*
 * Function: handle_complex_data_writing
 * Entry:    00024f78
 * Prototype: undefined handle_complex_data_writing()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int handle_complex_data_writing(void)

{
  short sVar1;
  int iVar2;
  undefined1 local_19;
  undefined4 local_18;
  ushort local_12;
  
  local_18 = _DAT_20007a14;
  BLE_DATA_PROCESSING_BUFFER = 4;
  if (COMPLEX_DATA_WRITING_STATE_FLAGS == '\0') {
    local_12 = DAT_20007a1a << 8 | DAT_20007a1a >> 8;
    BLE_DATA_PROCESSING_BUFFER = 8;
  }
  sVar1 = handle_data_writing_alt2(&local_18);
  iVar2 = (int)sVar1;
  if (iVar2 == 0) {
    local_19 = 3;
    iVar2 = send_data_packet_with_retry_and_mutex
                      (SYSTEM_CONFIGURATION_PARAMETER,BLE_DATA_PROCESSING_BUFFER,&local_19,1);
    if (iVar2 == 0) {
      local_19 = 0;
      iVar2 = send_data_packet_with_retry_and_mutex
                        (SYSTEM_CONFIGURATION_PARAMETER,BLE_DATA_PROCESSING_BUFFER + 1,&local_19);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      iVar2 = -iVar2;
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}


