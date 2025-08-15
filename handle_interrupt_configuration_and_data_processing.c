/*
 * Function: handle_interrupt_configuration_and_data_processing
 * Entry:    00083cfc
 * Prototype: undefined handle_interrupt_configuration_and_data_processing()
 */


int handle_interrupt_configuration_and_data_processing
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = process_data_and_call_handler(*(undefined4 *)(iVar2 + 0x20),0);
      if (-1 < iVar1) {
        set_interrupt_configuration_status(iVar2);
      }
    }
    else {
      iVar1 = -0x86;
    }
    return iVar1;
  }
  reset_interrupt_configuration(iVar2);
  iVar2 = process_data_and_call_handler(*(undefined4 *)(iVar2 + 0x20),1,extraout_r2,param_4);
  return iVar2;
}


