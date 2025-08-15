/*
 * Function: process_data_with_verification
 * Entry:    00047ad0
 * Prototype: undefined process_data_with_verification()
 */


int process_data_with_verification(undefined4 param_1)

{
  DAT_2000a090 = initialize_ble_connection_with_timeout
                           (&DAT_20004c08,&DAT_20028668,0x800,0x47c49,param_1,0,0,0xfffffff4,0);
  return -(uint)(DAT_2000a090 == 0);
}


