/*
 * Function: acquire_connection_mutex
 * Entry:    00081320
 * Prototype: undefined acquire_connection_mutex()
 */


void acquire_connection_mutex(int param_1)

{
  acquire_mutex_with_priority_control(param_1 + 0x18);
  return;
}


