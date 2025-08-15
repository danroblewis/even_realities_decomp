/*
 * Function: compare_and_update_sensor_data
 * Entry:    0002eb40
 * Prototype: undefined compare_and_update_sensor_data()
 */


uint compare_and_update_sensor_data
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = DAT_20018da6;
  uVar2 = (uint)DAT_20018da6;
  if (DAT_20018da5 != uVar2) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("[csh_debug_box]isInbox is %d \n",uVar2,param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  DAT_20018da5 = bVar1;
  return uVar2;
}


