/*
 * Function: _clean_fb_data
 * Entry:    000471cc
 * Prototype: undefined _clean_fb_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


int _clean_fb_data(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  
  if (0x27f < param_5) {
    param_5 = 0x280;
  }
  if (199 < param_6) {
    param_6 = 200;
  }
  if ((param_5 < param_3) || (param_6 < param_4)) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): clean frame buffer parameter error!!!\n","_clean_fb_data",param_3,0,
                    param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = -1;
  }
  else {
    param_3 = param_3 / 2;
    piVar2 = (int *)(param_1 + (param_4 + 0x3fffffff) * 4);
    while ((int *)(param_1 + param_6 * 4) != piVar2) {
      piVar2 = piVar2 + 1;
      fill_memory_buffer(*piVar2 + param_3,param_2,(1 - param_3) + param_5 / 2);
    }
    iVar1 = (param_5 / 2 - param_3) + 1;
  }
  return iVar1;
}


