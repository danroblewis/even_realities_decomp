/*
 * Function: release_buffer_allocation_mutex
 * Entry:    00076ba8
 * Prototype: undefined release_buffer_allocation_mutex()
 */


void release_buffer_allocation_mutex(void)

{
  release_mutex(&DAT_20003804);
  return;
}


