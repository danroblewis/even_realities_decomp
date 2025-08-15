/*
 * Function: cleanup_ble_connection_and_free_memory
 * Entry:    00059708
 * Prototype: undefined cleanup_ble_connection_and_free_memory()
 */


void cleanup_ble_connection_and_free_memory(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
              (*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
    decrement_reference_count_and_cleanup_memory(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  enqueue_message_to_priority_queue(&DAT_20003798,param_1);
  return;
}


