/*
 * Function: process_task_completion_with_priority_based_callback
 * Entry:    0004da90
 * Prototype: undefined __stdcall process_task_completion_with_priority_based_callback(undefined4 task_context, undefined4 task_priority)
 */


void process_task_completion_with_priority_based_callback(undefined4 task_context,int task_priority)

{
  char *pcVar1;
  
  if (task_priority << 0x1b < 0) {
    return;
  }
  if (task_priority << 0x1a < 0) {
    pcVar1 = "\n";
  }
  else {
    pcVar1 = "\r\n";
  }
  process_task_completion_with_callback_execution(task_context,pcVar1);
  return;
}


