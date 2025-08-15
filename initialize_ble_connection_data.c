/*
 * Function: initialize_ble_connection_data
 * Entry:    0005a39c
 * Prototype: undefined initialize_ble_connection_data()
 */


void initialize_ble_connection_data
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r2;
  
  copy_data_structure_fields(param_1 + 1,&DAT_000f2b3a,param_1,param_4,param_4);
  *(undefined1 *)(extraout_r2 + 8) = 0;
  *(undefined4 *)(extraout_r2 + 0xc) = 0;
  return;
}


