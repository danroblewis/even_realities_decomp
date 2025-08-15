/*
 * Function: handle_timer_interrupt_callback_execution
 * Entry:    00063b10
 * Prototype: undefined handle_timer_interrupt_callback_execution()
 */


undefined4 handle_timer_interrupt_callback_execution(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  process_data_with_callback_execution_alt4(0x18,1,0);
  iVar2 = setup_timer_configuration(iVar2,iVar2 + 8,0x63b41);
  if (iVar2 == 0xbad0000) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff0;
  }
  return uVar1;
}


