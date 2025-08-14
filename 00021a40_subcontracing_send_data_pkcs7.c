/*
 * Function: subcontracing_send_data_pkcs7
 * Entry:    00021a40
 * Prototype: undefined __stdcall subcontracing_send_data_pkcs7(undefined4 param_1, undefined4 raw_data_len, undefined1 param_3, undefined4 param_4)
 */


undefined4
subcontracing_send_data_pkcs7(int param_1,int raw_data_len,undefined1 param_3,code *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int integer_num;
  uint uVar9;
  int tail_len;
  int iVar10;
  int iVar11;
  undefined1 local_3c [3];
  undefined4 uStack_39;
  undefined1 local_35 [17];
  undefined4 *puVar8;
  
  uVar9 = raw_data_len / 0x11;
  _local_3c = 0;
  fill_memory_buffer((int)&uStack_39 + 1,0,0x10);
  integer_num = uVar9 + 1;
  tail_len = raw_data_len % 0x11;
  local_3c._0_2_ = CONCAT11((char)integer_num,param_3);
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): integer_num: %d, tail_len: %d, raw_data_len: %d\n",
                  "subcontracing_send_data_pkcs7",integer_num,tail_len,raw_data_len);
    }
    else {
      handle_heartbeat("%s(): integer_num: %d, tail_len: %d, raw_data_len: %d\n",
                       "subcontracing_send_data_pkcs7",integer_num,tail_len);
    }
  }
  iVar11 = 0;
  while( true ) {
    iVar1 = LOG_LEVEL;
    iVar10 = iVar11 + 1;
    if ((int)uVar9 <= iVar11) break;
    puVar6 = (undefined4 *)(iVar11 * 0x11 + param_1);
    local_3c = (undefined1  [3])CONCAT12((char)iVar11,local_3c._0_2_);
    puVar3 = (undefined4 *)(local_3c + 3);
    puVar7 = puVar6;
    do {
      puVar8 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar8;
    } while (puVar8 != puVar6 + 4);
    *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&DAT_0009d6d8,"subcontracing_send_data_pkcs7",iVar10,integer_num);
      }
      else {
        handle_heartbeat(&DAT_0009d6d8,"subcontracing_send_data_pkcs7",iVar10,integer_num);
      }
    }
    dump_hex_data(&DAT_0009d6ee,local_3c);
    (*param_4)(local_3c);
    iVar11 = iVar10;
  }
  uVar5 = uVar9 & ~((int)uVar9 >> 0x1f);
  iVar11 = uVar5 + 1;
  local_3c = (undefined1  [3])CONCAT12((char)uVar5,local_3c._0_2_);
  if (tail_len == 0) {
    fill_memory_buffer(local_3c + 3,0x11);
    if (iVar1 < 3) goto LAB_00021b5a;
    if (IS_DEBUG == 0) {
      puVar2 = &DAT_0009d6f3;
LAB_00021b56:
      DEBUG_PRINT(puVar2,"subcontracing_send_data_pkcs7",iVar11,integer_num);
      goto LAB_00021b5a;
    }
    puVar2 = &DAT_0009d6f3;
  }
  else {
    fill_memory_buffer(local_3c + tail_len + 3,0x11 - tail_len);
    validate_memory_bounds(local_3c + 3,uVar9 * 0x11 + param_1,tail_len,0x11);
    if (iVar1 < 3) goto LAB_00021b5a;
    if (IS_DEBUG == 0) {
      puVar2 = &DAT_0009d714;
      goto LAB_00021b56;
    }
    puVar2 = &DAT_0009d714;
  }
  handle_heartbeat(puVar2,"subcontracing_send_data_pkcs7",iVar11,integer_num);
LAB_00021b5a:
  dump_hex_data(&DAT_0009d70f,local_3c);
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): total-size:%d\n","subcontracing_send_data_pkcs7",raw_data_len);
    }
    else {
      handle_heartbeat();
    }
  }
  (*param_4)(local_3c);
  return 0;
}


