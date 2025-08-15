/*
 * Function: getAudioMessageQueueCacheData
 * Entry:    0002f460
 * Prototype: undefined getAudioMessageQueueCacheData()
 */


int getAudioMessageQueueCacheData
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00072240(&DAT_20003890,param_1,0,0,param_4);
  if (iVar1 != 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): dequeue_dmic failed\r\n\n","getAudioMessageQueueCacheData");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


