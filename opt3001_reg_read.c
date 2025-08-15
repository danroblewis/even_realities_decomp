/*
 * Function: opt3001_reg_read
 * Entry:    0002e594
 * Prototype: undefined opt3001_reg_read()
 */


undefined4 opt3001_reg_read(undefined1 param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38 [4];
  ushort local_34 [2];
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  ushort *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar2 = 0;
  local_34[0] = 0;
  iVar1 = check_driver_ready(OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER);
  if (iVar1 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Bus device is not ready\n","opt3001_reg_read");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffed;
  }
  else {
    local_2c = 1;
    local_24 = local_34;
    local_28 = 0;
    local_20 = 2;
    local_1c = 7;
    local_38[0] = param_1;
    local_30 = local_38;
    iVar1 = (**(code **)(*(int *)(OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER + 8) + 8))
                      (OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER,&local_30,2,0x45);
    if (iVar1 < 0) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ERR: opt3007 i2c read addr=0x%x,\n","opt3001_reg_read",0x45);
        }
        else {
          handle_heartbeat();
        }
      }
      uVar2 = 0xfffffffe;
    }
    else {
      *param_2 = local_34[0] << 8 | local_34[0] >> 8;
    }
  }
  return uVar2;
}


