/*
 * Function: runtime_info_sync
 * Entry:    00016268
 * Prototype: undefined runtime_info_sync()
 */


undefined4 runtime_info_sync(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  uint local_14;
  
  local_18 = CONCAT22(*param_1,1);
  local_14 = (uint)*(uint3 *)(param_1 + 1);
  uVar1 = global_ipc_service_send(&local_18,8);
  if ((DAT_20002fe0 != '\0') && (DAT_20002fe0 = '\0', 1 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): --role:%d --mode:%d, esb_channel %d --ret:%d esb_master_addr %02X esb_slave_addr %02X\n"
                  ,"runtime_info_sync",local_18 >> 0x10 & 0xff,local_18 >> 0x18,local_14 & 0xff,
                  uVar1,(uint)*(byte *)((int)param_1 + 3),(uint)*(byte *)(param_1 + 2));
    }
    else {
      handle_heartbeat();
    }
  }
  return uVar1;
}


