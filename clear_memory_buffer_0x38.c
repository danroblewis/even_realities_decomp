/*
 * Function: clear_memory_buffer_0x38
 * Entry:    0003dfe4
 * Prototype: undefined clear_memory_buffer_0x38()
 */


undefined4 clear_memory_buffer_0x38(void)

{
  undefined4 in_r3;
  
  fill_memory_buffer(&UI_TASK_ROUTING_STATE_MANAGEMENT,0,0x38,in_r3,in_r3);
  return 0;
}


