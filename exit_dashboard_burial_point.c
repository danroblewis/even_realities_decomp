/*
 * Function: exit_dashboard_burial_point
 * Entry:    0004aab0
 * Prototype: undefined exit_dashboard_burial_point()
 */


void exit_dashboard_burial_point(void)

{
  int iVar1;
  uint uVar2;
  undefined4 time_param1;
  undefined4 time_param2;
  undefined4 time_param3;
  undefined4 time_param4;
  undefined8 uVar3;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x1092) != '\0') && (uVar2 = get_burial_point_status_value(), uVar2 < 7)) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1092) = 0;
    uVar3 = get_dashboard_sum_time();
    time_param2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    time_param1 = (undefined4)uVar3;
    update_burial_point_timing_statistics_alt(time_param1,time_param2,time_param3,time_param4);
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        iVar1 = get_work_mode();
        DEBUG_PRINT("%s(): [exit_dashboard_burial_point] sum_time is %d ms,dashboard_sum_time is %d s\n"
                    ,"exit_dashboard_burial_point",time_param1,time_param2,
                    *(undefined4 *)(iVar1 + 0x10d2));
      }
      else {
        iVar1 = get_work_mode();
        handle_heartbeat("%s(): [exit_dashboard_burial_point] sum_time is %d ms,dashboard_sum_time is %d s\n"
                         ,"exit_dashboard_burial_point",time_param1,time_param2,
                         *(undefined4 *)(iVar1 + 0x10d2));
      }
    }
  }
  return;
}


