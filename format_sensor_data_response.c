/*
 * Function: format_sensor_data_response
 * Entry:    00031b60
 * Prototype: undefined format_sensor_data_response()
 */


undefined4
format_sensor_data_response(int param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 auStack_34 [32];
  
  uVar2 = 0;
  local_38 = 0;
  fill_memory_buffer(auStack_34,0,0x1c);
  DEBUG_PRINT("join in get_sn_info\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (char *)0x0)) {
    DEBUG_PRINT("get_sn_info para is NULL\n");
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined1 *)*param_3;
    *puVar3 = 0x22;
    puVar3[1] = *(undefined1 *)(param_1 + 1);
    puVar3[2] = 3;
    uVar1 = get_system_data();
    handle_buffer_overflow_condition(&local_38,0,0x20,&DAT_000a8c37,uVar1);
    uVar1 = calculate_string_length(&local_38);
    puVar3[3] = (char)uVar1;
    memcpy(puVar3 + 4,&local_38,uVar1);
    *param_4 = (char)uVar1 + '\x04';
  }
  return uVar2;
}


