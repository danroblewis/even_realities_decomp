/*
 * Function: cleanup_ble_attribute
 * Entry:    0005ea18
 * Prototype: undefined cleanup_ble_attribute()
 */


void cleanup_ble_attribute(undefined1 *param_1)

{
  if (param_1 == (undefined1 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","keys != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x131);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x131);
  }
  if ((int)((uint)(byte)param_1[8] << 0x1d) < 0) {
    handle_bluetooth_privacy_mode_management_with_validation();
  }
  process_data_with_callback_and_compression_alt(*param_1,param_1 + 1);
  fill_memory_buffer(param_1,0,0x5c);
  return;
}


