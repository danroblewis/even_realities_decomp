/*
 * Function: display_reflash_handler
 * Entry:    00048e28
 * Prototype: undefined display_reflash_handler()
 */


undefined4 display_reflash_handler(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)DISPLAY_REFRESH_BUFFER;
  if (param_4 == 2) {
    if ((param_2 != uVar1) && (uVar1 != 0)) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",
                      "display_reflash_handler",param_3,0,param_1,param_2);
        }
        else {
          handle_heartbeat();
        }
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): The wrong screen ID has appeared, and the exception handling is closed,The message ID at startup is %d. The current message ID is%d\n"
                        ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,param_2);
          }
          else {
            handle_heartbeat("%s(): The wrong screen ID has appeared, and the exception handling is closed,The message ID at startup is %d. The current message ID is%d\n"
                             ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,param_2);
          }
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): To perform exception handling, close the previous SCREEN ID = %d UI application first\n"
                          ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER);
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      route_ui_tasks(param_1,param_2,param_3,2);
      return 0xffffffff;
    }
  }
  else if (param_4 == 1) {
    if ((param_2 != uVar1) && (uVar1 != 0)) {
      uVar2 = param_1;
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ----------------------------------------------------------------------------------------\n"
                      ,"display_reflash_handler",param_3,0,param_1,param_2);
        }
        else {
          handle_heartbeat();
        }
        if (0 < LOG_LEVEL) {
          uVar2 = 1;
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): There is a screen ID error. The previous screen iD was %d, the current screen ID is %d, and the UI process to be performed is %d\n"
                        ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,param_2,1);
          }
          else {
            handle_heartbeat("%s(): There is a screen ID error. The previous screen iD was %d, the current screen ID is %d, and the UI process to be performed is %d\n"
                             ,"display_reflash_handler");
          }
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): The UI framework closes the opened UI application first, and the closed application ScreenID is %d\n"
                          ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,0,uVar2);
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      route_ui_tasks(param_1,DISPLAY_REFRESH_BUFFER,param_3,2);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): Because ScreenID has changed, close the old screenID application first and update the backup value of screenID to %d\n"
                      ,"display_reflash_handler",param_2,0,uVar2);
        }
        else {
          handle_heartbeat();
        }
      }
      DISPLAY_REFRESH_BUFFER = (byte)param_2;
    }
  }
  else if ((param_2 != uVar1) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): *************************************************************************************************\n"
                  ,"display_reflash_handler",param_3,0,param_1,param_2);
    }
    else {
      handle_heartbeat();
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): There is a screen ID error. The previous screen iD was %d, the current screen ID is %d, and the UI process to be performed is %d\n"
                    ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,param_2,param_4);
      }
      else {
        handle_heartbeat("%s(): There is a screen ID error. The previous screen iD was %d, the current screen ID is %d, and the UI process to be performed is %d\n"
                         ,"display_reflash_handler",(uint)DISPLAY_REFRESH_BUFFER,param_2);
      }
    }
  }
  route_ui_tasks(param_1,param_2,param_3,param_4);
  return 0;
}


