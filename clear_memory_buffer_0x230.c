/*
 * Function: clear_memory_buffer_0x230
 * Entry:    0003cf34
 * Prototype: undefined clear_memory_buffer_0x230()
 */


void clear_memory_buffer_0x230(void)

{
  fill_memory_buffer(&UI_TELEPROMPTER_TASK_BUFFER,0,0x230);
  return;
}


