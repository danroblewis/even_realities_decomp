/*
 * Function: FUN_00019cd0
 * Entry:    00019cd0
 * Prototype: undefined FUN_00019cd0()
 */


undefined4 FUN_00019cd0(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  char *format_string;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == (byte *)0x0) {
    uVar4 = 0xb0;
    format_string = "[%s-%d]error, req is NULL ! \n";
  }
  else {
    if (param_1 != 0) {
      if (param_3 < 3) {
        if (IS_DEBUG != 0) {
          handle_heartbeat("[%s-%d]error, req_len is %d, too short ! \n","parse_receiver_pack_pkcs7"
                           ,0xbb,param_3);
          return 0xca;
        }
        DEBUG_PRINT("[%s-%d]error, req_len is %d, too short ! \n","parse_receiver_pack_pkcs7",0xbb,
                    param_3);
        return 0xca;
      }
      bVar1 = param_2[2];
      uVar5 = (uint)*param_2;
      bVar2 = param_2[1];
      if (bVar1 == 0) {
        DAT_2000d6f4 = (ushort)bVar1;
        DAT_20010320 = *param_2;
      }
      if (DAT_20010320 != uVar5) {
        if (IS_DEBUG != 0) {
          handle_heartbeat("[%s-%d]error, curCmd is %d, but parseCmd is %d ! \n",
                           "parse_receiver_pack_pkcs7");
          return 0xca;
        }
        DEBUG_PRINT("[%s-%d]error, curCmd is %d, but parseCmd is %d ! \n",
                    "parse_receiver_pack_pkcs7",0xd0,uVar5,(uint)DAT_20010320);
        return 0xca;
      }
      sVar3 = (short)param_3 + (DAT_2000d6f4 - 3);
      memcpy(param_1 + (uint)DAT_2000d6f4,param_2 + 3,param_3 - 3,uVar5,param_1,param_2);
      if ((uint)bVar1 == bVar2 - 1) {
        DAT_2000d6f4 = sVar3;
        return 0xc9;
      }
      DAT_2000d6f4 = sVar3;
      return 0xcb;
    }
    uVar4 = 0xb5;
    format_string = "[%s-%d]error, origin_data is NULL ! \n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"parse_receiver_pack_pkcs7",uVar4);
  }
  else {
    handle_heartbeat();
  }
  return 0xca;
}


