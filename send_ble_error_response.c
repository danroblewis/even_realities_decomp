/*
 * Function: send_ble_error_response
 * Entry:    00059edc
 * Prototype: undefined send_ble_error_response()
 */


undefined4
send_ble_error_response(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ble_data_processing_wrapper
            (&DAT_00088128,0x1040,&stack0xfffffff0,2,param_1,param_2,param_3,param_4);
  return 0xffffffea;
}


