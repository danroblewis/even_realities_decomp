/*
 * Function: schedule_dashboard_lock_task
 * Entry:    00075174
 * Prototype: undefined __stdcall schedule_dashboard_lock_task(undefined4 task_context, undefined4 lock_control, undefined4 timeout_ms, undefined4 priority, undefined4 user_data1, undefined4 user_data2)
 */


void schedule_dashboard_lock_task
               (int task_context,undefined4 param_2,int timeout_ms,int priority,
               undefined4 user_data1,undefined4 user_data2)

{
  bool bVar1;
  
  if (priority == -1 && timeout_ms == -1) {
    return;
  }
  if ((int)((priority + 1) - (uint)(timeout_ms != -1)) < 0 ==
      (SBORROW4(priority,-1) != SBORROW4(priority + 1,(uint)(timeout_ms != -1)))) {
    if (priority < (int)(uint)(timeout_ms == 0)) {
      timeout_ms = 1;
      priority = 0;
    }
    bVar1 = timeout_ms != 0;
    timeout_ms = timeout_ms + -1;
    priority = priority + -1 + (uint)bVar1;
  }
  FUN_00074d74(task_context);
  *(undefined4 *)(task_context + 0x28) = user_data1;
  *(undefined4 *)(task_context + 0x2c) = user_data2;
  *(undefined4 *)(task_context + 0x30) = 0;
  FUN_00074bf4(task_context,&LAB_00075004_1,timeout_ms,priority);
  return;
}


