/*
 * Function: FUN_0007d874
 * Entry:    0007d874
 * Prototype: undefined FUN_0007d874()
 */


undefined4 FUN_0007d874(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT11((char)param_1,1);
  uStack_8 = param_3;
  display_reflash(&local_c,2,param_3,1,param_1);
  manage_ble_connection_priority_with_data_processing();
  return 0;
}


