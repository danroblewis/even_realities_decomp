/*
 * Function: FUN_0007c9fe
 * Entry:    0007c9fe
 * Prototype: undefined FUN_0007c9fe()
 */


void FUN_0007c9fe(undefined4 param_1,undefined3 param_2)

{
  send_data_packet_with_retry_and_mutex
            (param_1,0x2002,&stack0xfffffff7,1,param_1,CONCAT13((char)param_2,param_2));
  return;
}


