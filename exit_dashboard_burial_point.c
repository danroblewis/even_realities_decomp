/*
 * Function: exit_dashboard_burial_point
 * Entry:    0004aab0
 * Prototype: undefined exit_dashboard_burial_point()
 */


void exit_dashboard_burial_point(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x1092) != '\0') && (uVar2 = FUN_0007dac0(), uVar2 < 7)) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1092) = 0;
    uVar4 = get_dashboard_sum_time();
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_0007db50();
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        iVar1 = get_work_mode();
        DEBUG_PRINT("%s(): [exit_dashboard_burial_point] sum_time is %d ms,dashboard_sum_time is %d s\n"
                    ,"exit_dashboard_burial_point",(int)uVar4,uVar3,*(undefined4 *)(iVar1 + 0x10d2))
        ;
      }
      else {
        iVar1 = get_work_mode();
        handle_heartbeat("%s(): [exit_dashboard_burial_point] sum_time is %d ms,dashboard_sum_time is %d s\n"
                         ,"exit_dashboard_burial_point",(int)uVar4,uVar3,
                         *(undefined4 *)(iVar1 + 0x10d2));
      }
    }
  }
  return;
}


