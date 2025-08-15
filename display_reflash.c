/*
 * Function: display_reflash
 * Entry:    0004967c
 * Prototype: undefined display_reflash()
 */


undefined4 display_reflash(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined2 local_2e;
  undefined1 auStack_2c [20];
  
  fill_memory_buffer(&local_30,0,0x18);
  if (param_2 < 0xb) {
    lVar6 = thunk_FUN_00074f68();
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): send reflash command......\n","display_reflash");
      }
      else {
        handle_heartbeat();
      }
    }
    fill_memory_buffer(&uStack_2f,0,0x17);
    local_30 = 2;
    if (param_1 != 0) {
      memcpy(auStack_2c,param_1,param_2);
      local_2e = (undefined2)param_2;
    }
    iVar1 = enqueue_message_to_queue(&DAT_200038c4,&local_30,0,0);
    if (iVar1 == 0) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): send reflash command end .......\n","display_reflash");
        }
        else {
          handle_heartbeat();
        }
      }
      lVar7 = thunk_FUN_00074f68();
      if (2 < LOG_LEVEL) {
        uVar4 = (uint)((ulonglong)(lVar7 * 1000) >> 0x20);
        uVar2 = (uint)((ulonglong)(lVar6 * 1000) >> 0x20);
        uVar3 = (uint)(lVar7 * 1000) >> 0xf | uVar4 * 0x20000;
        uVar5 = (uint)(lVar6 * 1000) >> 0xf | uVar2 * 0x20000;
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): send reflash command cost %lldMs\n","display_reflash",uVar3 - uVar5,
                      ((uVar4 >> 0xf) - (uVar2 >> 0xf)) - (uint)(uVar3 < uVar5));
        }
        else {
          handle_heartbeat("%s(): send reflash command cost %lldMs\n","display_reflash");
        }
      }
      call_function_with_font_parameters();
      return 0;
    }
    DEBUG_PRINT("message queue send failed %s\r\n","display_reflash");
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): send data length more than %d,can\'t load it,exit ...\n","display_reflash",
                  10);
    }
    else {
      handle_heartbeat();
    }
  }
  return 0xffffffff;
}


