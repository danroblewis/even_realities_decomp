/*
 * Function: get_work_mode_status
 * Entry:    00037060
 * Prototype: undefined get_work_mode_status()
 */


undefined1 get_work_mode_status(void)

{
  CURRENT_STOCK_INDEX = DAT_2001b816;
  set_system_byte_69();
  return CURRENT_STOCK_INDEX;
}


