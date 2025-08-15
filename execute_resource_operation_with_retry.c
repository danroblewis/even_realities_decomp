/*
 * Function: execute_resource_operation_with_retry
 * Entry:    00025850
 * Prototype: int execute_resource_operation_with_retry(int resource_context, undefined4 operation_id, undefined4 operation_data, int data_length)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int execute_resource_operation_with_retry(int resource_context, undefined4
   operation_id, undefined4 operation_data, int data_length) */

int execute_resource_operation_with_retry
              (int resource_context,undefined4 operation_id,undefined4 operation_data,
              int data_length)

{
  int operation_result;
  undefined4 current_operation_id;
  undefined4 extraout_r1;
  int max_retries;
  int resource_handle;
  undefined4 mutex_handle;
  
  if (data_length == 0) {
    operation_result = 0;
  }
  else {
    max_retries = 0x14;
    resource_handle = *(int *)(resource_context + 4);
    mutex_handle = *(undefined4 *)(resource_context + 0x10);
    current_operation_id = operation_id;
    while( true ) {
      resource_mutex_acquire(mutex_handle,current_operation_id,0xffffffff,0xffffffff);
      operation_result =
           format_and_send_data_packet_with_modified_flags
                     (resource_handle,operation_id,operation_data,data_length);
      mutex_unlock(mutex_handle);
      if (operation_result == 0) break;
      max_retries = max_retries + -1;
      if (max_retries == 0) {
        DEBUG_PRINT("eeprom_st25dv_write_sys addr %04X offset %04X failed %d\r\n",
                    *(ushort *)(resource_handle + 8) | 4,operation_id,operation_result);
        return operation_result;
      }
      set_ble_schedule_timing_for_data_transmission();
      current_operation_id = extraout_r1;
    }
  }
  return operation_result;
}


