/*
 * Function: opt3007_chip_init
 * Entry:    0002e67c
 * Prototype: undefined opt3007_chip_init()
 */


undefined4 opt3007_chip_init(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  ushort local_2c;
  ushort local_2a;
  undefined1 local_28;
  byte local_27;
  undefined1 local_26;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_2c = 0;
  if (param_1 == 0) {
    param_1 = get_work_mode();
    param_1 = param_1 + 0xf80;
  }
  OPT3007_LIGHT_SENSOR_STATE = param_1;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): opt3007 init start:\n","opt3007_chip_init");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = opt3001_reg_read(0x7e,&local_2c);
  if (iVar1 == 0) {
    uVar3 = (uint)local_2c;
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): mfg_id=0x%x,\n","opt3007_chip_init",uVar3);
      }
      else {
        handle_heartbeat();
      }
    }
    if (uVar3 == 0x5449) {
      iVar1 = opt3001_reg_read(0x7f,&local_2c);
      if (iVar1 != 0) {
        if (LOG_LEVEL < 1) {
          return 0xfffffffb;
        }
        pcVar2 = "%s(): opt3007 dev id=0x%x err!\n";
        goto LAB_0002e6c8;
      }
      uVar3 = (uint)local_2c;
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): dev_id=0x%x,\n","opt3007_chip_init",uVar3);
        }
        else {
          handle_heartbeat();
        }
      }
      if (uVar3 == 0x3001) {
        iVar1 = opt3001_reg_read(1,&local_2a);
        if (iVar1 == 0) {
          local_27 = (byte)((local_2a & 63999) >> 8) | 6;
          local_28 = 1;
          local_26 = (undefined1)(local_2a & 63999);
          iVar1 = check_driver_ready(OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER);
          if (iVar1 == 0) {
            if (LOG_LEVEL < 1) {
              return 0xfffffffb;
            }
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Bus device is not ready\n","opt3001_reg_write");
            }
            else {
              handle_heartbeat();
            }
          }
          else {
            local_24 = &local_28;
            local_20 = 3;
            local_1c = 2;
            iVar1 = (**(code **)(*(int *)(OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER + 8) + 8))
                              (OPT3001_AND_OPT3007_SENSOR_REGISTER_BUFFER,&local_24,1,0x45);
            if (-1 < iVar1) {
              if (OPT3007_LIGHT_SENSOR_STATE != 0) {
                *(undefined4 *)(OPT3007_LIGHT_SENSOR_STATE + 0x10) = 1;
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): opt3007 init done!\n","opt3007_chip_init");
                }
                else {
                  handle_heartbeat();
                }
              }
              OPT3001_AMBIENT_LIGHT_SENSOR_STATE = 1;
              return 0;
            }
            if (LOG_LEVEL < 1) {
              return 0xfffffffb;
            }
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): opt3007 i2c write err=%d,\n","opt3001_reg_write");
            }
            else {
              handle_heartbeat();
            }
          }
        }
        if (LOG_LEVEL < 1) {
          return 0xfffffffb;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0xfffffffb;
        }
        DEBUG_PRINT("%s(): opt3007 Failed to set mode to continuous conversion\n",
                    "opt3007_chip_init");
        return 0xfffffffb;
      }
      if (LOG_LEVEL < 1) {
        return 0xffffff7a;
      }
      pcVar2 = "%s(): opt3007 Bad device id 0x%x\n";
    }
    else {
      if (LOG_LEVEL < 1) {
        return 0xffffff7a;
      }
      pcVar2 = "%s(): opt3007 Bad manufacturer id 0x%x\n";
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(pcVar2,"opt3007_chip_init",uVar3);
    }
    else {
      handle_heartbeat();
    }
    return 0xffffff7a;
  }
  if (LOG_LEVEL < 1) {
    return 0xfffffffb;
  }
  pcVar2 = "%s(): opt3007 mfg id=0x%x, err\n";
LAB_0002e6c8:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar2,"opt3007_chip_init",(uint)local_2c);
  }
  else {
    handle_heartbeat();
  }
  return 0xfffffffb;
}


