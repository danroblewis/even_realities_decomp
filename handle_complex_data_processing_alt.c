/*
 * Function: handle_complex_data_processing_alt
 * Entry:    00024dac
 * Prototype: undefined handle_complex_data_processing_alt()
 */


int handle_complex_data_processing_alt
              (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  COMPLEX_DATA_PROCESSING_EXTENDED_STATE = 0;
  local_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  sVar1 = handle_data_writing_alt(&local_18);
  iVar2 = (int)sVar1;
  if (iVar2 == 0) {
    if (((byte)((char)local_18 + 0x1fU) < 2) && ((local_18._1_1_ & 0xfc) == 0x40)) {
      uVar4 = (uint)local_18._2_1_;
      COMPLEX_DATA_WRITING_STATE_FLAGS = local_18._2_1_;
      if (uVar4 == 0) {
        BLE_DATA_PROCESSING_BUFFER = 8;
        uVar4 = (uStack_14._2_2_ & 0xff) << 8 | (uint)(uStack_14._2_2_ >> 8);
        sVar1 = (short)uVar4;
      }
      else {
        BLE_DATA_PROCESSING_BUFFER = 4;
      }
      COMPLEX_DATA_PROCESSING_STATE_FLAGS = local_18._1_1_;
      DAT_20007a14 = (char)local_18;
      COMPLEX_DATA_PROCESSING_ALTERNATIVE_STATE = local_18._3_1_;
      DAT_20007a1a = sVar1;
      while ((iVar2 = send_control_message_with_retry_and_mutex
                                (SYSTEM_CONFIGURATION_PARAMETER,BLE_DATA_PROCESSING_BUFFER,&local_1c
                                 ,4,param_1), iVar2 == 0 && (BLE_DATA_PROCESSING_BUFFER < uVar4))) {
        if ((local_1c & 0xff) == 3) {
          if (local_1c._1_1_ == 0) {
            local_1c._0_1_ = 1;
          }
          else if ((COMPLEX_DATA_PROCESSING_STATE_FLAGS & 3) == 0) {
            local_1c._0_1_ = 2;
          }
          COMPLEX_DATA_PROCESSING_EXTENDED_STATE = (undefined1)local_1c;
          return 0;
        }
        if ((local_1c & 0xff) != 0xfd) break;
        uVar3 = (uint)local_1c._1_1_;
        if (uVar3 == 0xff) {
          uVar3 = local_1c >> 0x10;
        }
        BLE_DATA_PROCESSING_BUFFER = BLE_DATA_PROCESSING_BUFFER + uVar3;
      }
    }
    iVar2 = -5;
  }
  return iVar2;
}


