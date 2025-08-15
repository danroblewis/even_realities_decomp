/*
 * Function: sett_init
 * Entry:    00022518
 * Prototype: undefined sett_init()
 */


void sett_init(int *param_1)

{
  int iVar1;
  char *format_string;
  
  iVar1 = handle_configuration_setting_with_callback();
  if (iVar1 == 0) {
    iVar1 = initialize_buffer_structure_with_context(&DAT_20002368);
    if (iVar1 == 0) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): init ok\n","sett_init");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar1 = 1;
      goto LAB_0002253c;
    }
    if (LOG_LEVEL < 2) goto LAB_0002253c;
    format_string = "%s(): Cannot register settings handler %d\n";
  }
  else {
    if (LOG_LEVEL < 2) goto LAB_0002253c;
    format_string = "%s(): Failed to initialize settings subsystem, error: %d\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"sett_init",iVar1);
  }
  else {
    handle_heartbeat();
  }
LAB_0002253c:
  *param_1 = iVar1;
  param_1[1] = 0x22169;
  param_1[2] = (int)&LAB_0007c26a_1;
  param_1[3] = (int)&LAB_00022120_1;
  return;
}


