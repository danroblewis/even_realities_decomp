/*
 * Function: acquire_buffer_allocation_mutex
 * Entry:    00076b9c
 * Prototype: undefined acquire_buffer_allocation_mutex()
 */


void acquire_buffer_allocation_mutex(void)

{
  acquire_mutex(&DAT_20003804);
  return;
}


