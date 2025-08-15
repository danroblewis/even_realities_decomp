/*
 * Function: send_control_message_with_byte_swap
 * Entry:    00025740
 * Prototype: undefined __stdcall send_control_message_with_byte_swap(undefined4 comm_interface, undefined4 comm_param, undefined4 control_value, undefined4 control_param, undefined4 message_context)
 */


int send_control_message_with_byte_swap
              (undefined4 comm_interface,undefined4 comm_param,uint control_value,
              undefined4 control_param,undefined4 message_context)

{
  int iVar1;
  ushort local_24 [2];
  ushort *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_24[0] = (ushort)((control_value & 0xff) << 8) | (ushort)(control_value >> 8) & 0xff;
  local_10 = message_context;
  local_20 = local_24;
  local_c = 7;
  local_1c = 2;
  local_18 = 0;
  local_14 = control_param;
  iVar1 = execute_callback_function_pointer(comm_interface,&local_20,2,comm_param);
  set_ble_schedule_timing_for_data_transmission();
  if (iVar1 < 0) {
    DEBUG_PRINT("_st25dv_read  ret %d \n",iVar1);
  }
  return iVar1;
}


