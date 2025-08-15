/*
 * Function: check_bind_status
 * Entry:    00026b88
 * Prototype: undefined check_bind_status()
 */


void check_bind_status(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    if ((((DAT_20018d83 == '\0') ||
         (cVar1 = DAT_20018d83 + -1, bVar2 = DAT_20018d83 == '\x01', DAT_20018d83 = cVar1, bVar2))
        && (*(char *)(param_1 + 0x1071) == '\x01')) &&
       (*(undefined1 *)(param_1 + 0x1071) = 0, 0 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): disable allow bind mode\n","check_bind_status");
        return;
      }
      handle_heartbeat();
      return;
    }
  }
  else {
    if (param_3 == 0) {
      if ((*(char *)(param_1 + 0x1071) == '\0') &&
         (*(undefined1 *)(param_1 + 0x1071) = 1, 0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): enable allow bind mode\n","check_bind_status");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1071) = 0;
    }
    DAT_20018d83 = '\x03';
  }
  return;
}


