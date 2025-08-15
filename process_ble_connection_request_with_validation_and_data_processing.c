/*
 * Function: process_ble_connection_request_with_validation_and_data_processing
 * Entry:    000842cc
 * Prototype: undefined process_ble_connection_request_with_validation_and_data_processing()
 */


void process_ble_connection_request_with_validation_and_data_processing
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = validate_ble_connection_request_packet
                    (param_3,param_4,(int)&uStack_14 + 2,param_4,param_1);
  if (iVar1 != -0x16) {
    pack_parameters_and_call_callback
              (*(undefined4 *)(param_1 + 0x1c),8,param_2 + 0xcU & 0xff,uStack_14._2_1_);
    return;
  }
  return;
}


