/*
 * Function: execute_callback_loop_until_completion
 * Entry:    0007eea6
 * Prototype: undefined execute_callback_loop_until_completion()
 */


void execute_callback_loop_until_completion
               (code *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  do {
    iVar1 = (*param_1)(param_2,param_3,param_4);
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  } while (param_3 != 0);
  return;
}


