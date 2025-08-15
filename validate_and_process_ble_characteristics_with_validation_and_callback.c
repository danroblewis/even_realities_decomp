/*
 * Function: validate_and_process_ble_characteristics_with_validation_and_callback
 * Entry:    00055cf0
 * Prototype: undefined validate_and_process_ble_characteristics_with_validation_and_callback()
 */


bool validate_and_process_ble_characteristics_with_validation_and_callback
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1,&DAT_000f3a16,0x40,param_4,param_4);
  return iVar1 == 0;
}


