/*
 * Function: validate_ble_characteristics_and_process
 * Entry:    0005e5b8
 * Prototype: undefined validate_ble_characteristics_and_process()
 */


undefined4 validate_ble_characteristics_and_process(void)

{
  DAT_2001d532 = (DAT_200020a2 & 6) == 6;
  validate_and_process_ble_characteristics_with_callback_validation(&DAT_20002a50);
  return 0;
}


