/*
 * Function: format_json_value_with_memory_management
 * Entry:    00064a88
 * Prototype: undefined format_json_value_with_memory_management()
 */


int format_json_value_with_memory_management(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_20;
  code *pcStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  fill_memory_buffer(&local_34,0,0x24);
  local_34 = (*JSON_ALLOC_TPL)(0x100);
  local_30 = 0x100;
  pcStack_14 = SENSOR_CALLBACK_FUNCTION;
  pcStack_18 = SENSOR_INIT_FUNCTION;
  pcStack_1c = JSON_ALLOC_TPL;
  local_20 = param_2;
  if ((local_34 != 0) && (iVar1 = format_json_value_by_type(param_1,&local_34), iVar1 != 0)) {
    update_string_position_by_length(&local_34);
    if (SENSOR_CALLBACK_FUNCTION == (code *)0x0) {
      iVar1 = (*JSON_ALLOC_TPL)(local_2c + 1);
      if (iVar1 != 0) {
        uVar2 = local_2c + 1U;
        if (local_30 <= local_2c + 1U) {
          uVar2 = local_30;
        }
        memcpy(iVar1,local_34,uVar2);
        *(undefined1 *)(iVar1 + local_2c) = 0;
        (*SENSOR_INIT_FUNCTION)(local_34);
        return iVar1;
      }
    }
    else {
      iVar1 = (*SENSOR_CALLBACK_FUNCTION)(local_34,local_2c + 1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  if (local_34 != 0) {
    (*SENSOR_INIT_FUNCTION)();
  }
  return 0;
}


