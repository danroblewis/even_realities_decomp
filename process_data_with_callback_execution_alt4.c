/*
 * Function: process_data_with_callback_execution_alt4
 * Entry:    00051fe4
 * Prototype: undefined process_data_with_callback_execution_alt4()
 */


void process_data_with_callback_execution_alt4(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = fill_memory_buffer(&BLE_CONNECTION_DATA_BUFFER,0,0x2c,&BLE_CONNECTION_DATA_BUFFER,in_r3);
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  return;
}


