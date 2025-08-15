/*
 * Function: mutex_unlock_jbd_display
 * Entry:    000476a8
 * Prototype: undefined mutex_unlock_jbd_display()
 */


void mutex_unlock_jbd_display(void)

{
  mutex_unlock(&JBD_DISPLAY_CONFIG);
  return;
}


