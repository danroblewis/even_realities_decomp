/*
 * Function: unlock_display_mutex
 * Entry:    00026850
 * Prototype: undefined unlock_display_mutex()
 */


void unlock_display_mutex(void)

{
  mutex_unlock(&DAT_20007b3c);
  return;
}


