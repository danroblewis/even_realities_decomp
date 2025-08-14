/*
 * Function: uint32_to_little_endian
 * Entry:    0004a568
 * Prototype: undefined uint32_to_little_endian()
 */


undefined4
uint32_to_little_endian
          (undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): buf is NULL !\n","uint32_to_little_endian",param_3,0,param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = 0;
  }
  else {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    param_1[3] = (char)((uint)param_2 >> 0x18);
    uVar1 = 1;
  }
  return uVar1;
}


