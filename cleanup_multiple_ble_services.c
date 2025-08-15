/*
 * Function: cleanup_multiple_ble_services
 * Entry:    00082fa6
 * Prototype: undefined cleanup_multiple_ble_services()
 */


void cleanup_multiple_ble_services(int param_1)

{
  cleanup_ble_service_and_handles(*(undefined1 *)(param_1 + -0x28),param_1 + -0x27);
  cleanup_ble_service_and_handles(*(undefined1 *)(param_1 + -0x1c),param_1 + -0x1b);
  cleanup_ble_service_and_handles(*(undefined1 *)(param_1 + -0x10),param_1 + -0xf);
  return;
}


