/*
 * Function: start_ancs_work_thread
 * Entry:    000198cc
 * Prototype: undefined start_ancs_work_thread()
 */


void start_ancs_work_thread(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)get_work_mode();
  if ((*pcVar1 == '\x02') && (iVar2 = get_system_ready_state(), iVar2 != 1)) {
    FUN_00071eac(&DAT_20003c50,&DAT_2001d568,0x1400,0x19719,param_1,0,0,0xfffffff5,0);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return;
      }
      DEBUG_PRINT("%s(): exit\n\n","start_ancs_work_thread");
      return;
    }
  }
  return;
}


