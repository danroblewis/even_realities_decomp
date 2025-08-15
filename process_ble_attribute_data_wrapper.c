/*
 * Function: process_ble_attribute_data_wrapper
 * Entry:    00081bf0
 * Prototype: undefined process_ble_attribute_data_wrapper()
 */


undefined4
process_ble_attribute_data_wrapper
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  process_ble_attribute_data_in_chunks
            (*(undefined4 *)*param_1,*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x10),
             (undefined4 *)*param_1,param_4);
  return 0;
}


