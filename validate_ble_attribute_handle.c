/*
 * Function: validate_ble_attribute_handle
 * Entry:    00059c48
 * Prototype: undefined validate_ble_attribute_handle()
 */


undefined1 * validate_ble_attribute_handle(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = compare_byte_arrays_7_bytes(param_2 + 1,&DAT_000f2b3a);
  }
  else {
    iVar1 = ble_uuid_comparison_handler(param_1,*param_2);
  }
  if (iVar1 == 0) {
    param_2 = (undefined1 *)0x0;
  }
  return param_2;
}


