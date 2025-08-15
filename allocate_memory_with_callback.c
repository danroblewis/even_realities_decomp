/*
 * Function: allocate_memory_with_callback
 * Entry:    0007e1e6
 * Prototype: int allocate_memory_with_callback(void * task_structure, void * callback_data, void * callback_func, int callback_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int execute_task_state_callback(void *task_structure, void *callback_data,
   void *callback_func, int callback_param) */

int allocate_memory_with_callback
              (void *task_structure,void *callback_data,void *callback_func,int callback_param)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE =
       (code *)handle_task_completion_state_transition((int)callback_data + 4,callback_param);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007e20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(task_structure,callback_data,callback_func,callback_param);
    return iVar1;
  }
  return 0;
}


