/*
 * Function: handle_complex_data_processing
 * Entry:    00019da4
 * Prototype: undefined handle_complex_data_processing()
 */


undefined4 handle_complex_data_processing(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == (byte *)0x0) {
    uVar6 = 0xe4;
    pcVar4 = "[%s-%d]error, req is NULL ! \n";
  }
  else {
    if (param_1 != 0) {
      if (param_3 < 4) {
        if (IS_DEBUG != 0) {
          handle_heartbeat("[%s-%d]error, req_len is %d, too short ! \n",
                           "parse_receiver_msg_pack_pkcs7",0xef,param_3);
          return 0xca;
        }
        DEBUG_PRINT("[%s-%d]error, req_len is %d, too short ! \n","parse_receiver_msg_pack_pkcs7",
                    0xef,param_3);
        return 0xca;
      }
      bVar2 = param_2[3];
      uVar7 = (uint)*param_2;
      uVar8 = (uint)param_2[1];
      bVar1 = param_2[2];
      if (bVar2 == 0) {
        COMPLEX_DATA_PROCESSING_BUFFER = (ushort)bVar2;
        DAT_2000d6f0 = (ushort)param_2[1];
        DAT_2001031f = *param_2;
      }
      uVar5 = (uint)DAT_2001031f;
      if (uVar5 == uVar7) {
        uVar5 = (uint)DAT_2000d6f0;
        if (uVar8 == uVar5) {
          sVar3 = COMPLEX_DATA_PROCESSING_BUFFER - 4;
          memcpy(param_1 + (uint)COMPLEX_DATA_PROCESSING_BUFFER,param_2 + 4,param_3 - 4,uVar8,
                 param_1,param_2,param_3);
          COMPLEX_DATA_PROCESSING_BUFFER = (short)param_3 + sVar3;
          if ((uint)bVar2 != bVar1 - 1) {
            return 0xcb;
          }
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("origin_data is %s \n",param_1);
          }
          else {
            handle_heartbeat();
          }
          return 0xc9;
        }
        uVar6 = 0x10f;
        if (IS_DEBUG == 0) {
          pcVar4 = "[%s-%d]error, curMsgId is %d, but parseMsgId is %d ! \n";
          goto LAB_00019e46;
        }
        pcVar4 = "[%s-%d]error, curMsgId is %d, but parseMsgId is %d ! \n";
      }
      else {
        uVar8 = uVar7;
        if (IS_DEBUG == 0) {
          uVar6 = 0x109;
          pcVar4 = "[%s-%d]error, curCmd is %d, but parseCmd is %d ! \n";
LAB_00019e46:
          DEBUG_PRINT(pcVar4,"parse_receiver_msg_pack_pkcs7",uVar6,uVar8,uVar5);
          return 0xca;
        }
        uVar6 = 0x109;
        pcVar4 = "[%s-%d]error, curCmd is %d, but parseCmd is %d ! \n";
      }
      handle_heartbeat(pcVar4,"parse_receiver_msg_pack_pkcs7",uVar6,uVar8);
      return 0xca;
    }
    uVar6 = 0xe9;
    pcVar4 = "[%s-%d]error, origin_data is NULL ! \n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar4,"parse_receiver_msg_pack_pkcs7",uVar6);
  }
  else {
    handle_heartbeat();
  }
  return 0xca;
}


