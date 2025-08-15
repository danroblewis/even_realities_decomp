/*
 * Function: process_data_with_compression_and_validation
 * Entry:    0008307a
 * Prototype: undefined process_data_with_compression_and_validation()
 */


int process_data_with_compression_and_validation
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = find_ble_connection_by_handle(param_1,6);
  if ((int)uVar1 == 0) {
    process_and_compress_data_wrapper
              (&DAT_00088180,0x1040,&stack0xfffffff0,2,0,(int)((ulonglong)uVar1 >> 0x20),extraout_r2
               ,param_4);
    return 0;
  }
  return (int)uVar1 + -0xf0;
}


