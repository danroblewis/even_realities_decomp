/*
 * Function: setup_buffer_management
 * Entry:    000864b2
 * Prototype: undefined setup_buffer_management()
 */


undefined4 setup_buffer_management(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xe) != param_2) {
    uVar1 = update_ble_connection_priority();
    return uVar1;
  }
  return 0;
}


