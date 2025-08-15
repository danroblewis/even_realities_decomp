/*
 * Function: FUN_0007c8fa
 * Entry:    0007c8fa
 * Prototype: undefined FUN_0007c8fa()
 */


void FUN_0007c8fa(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = send_control_message_with_retry(param_1,1,&stack0xffffffef,1,param_1,param_2);
  if (iVar1 == 0) {
    execute_resource_operation_with_retry(param_1,1,&stack0xffffffef,1);
  }
  return;
}


