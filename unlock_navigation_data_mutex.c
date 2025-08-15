/*
 * Function: unlock_navigation_data_mutex
 * Entry:    00019b48
 * Prototype: undefined unlock_navigation_data_mutex()
 */


void unlock_navigation_data_mutex(void)

{
  mutex_unlock(&WORK_MODE_CONTEXT);
  return;
}


