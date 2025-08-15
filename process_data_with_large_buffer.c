/*
 * Function: process_data_with_large_buffer
 * Entry:    00049638
 * Prototype: undefined process_data_with_large_buffer()
 */


undefined4 process_data_with_large_buffer(undefined4 param_1)

{
  FONT_PARAMETER_PROCESSING_BUFFER =
       initialize_ble_connection_with_timeout
                 (&DAT_20004d18,&DAT_20028e68,0x1400,0x49091,param_1,0,0,0xfffffff2,0);
  return 0;
}


