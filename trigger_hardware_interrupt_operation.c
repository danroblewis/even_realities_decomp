/*
 * Function: trigger_hardware_interrupt_operation
 * Entry:    000664f0
 * Prototype: undefined trigger_hardware_interrupt_operation()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int trigger_hardware_interrupt_operation(int param_1)

{
  int iVar1;
  
  _DAT_5002b500 = 1;
  _DAT_5002b100 = 0;
  _DAT_5002b000 = 1;
  if (param_1 != 0) {
    iVar1 = wait_for_hardware_interrupt_flag_with_timeout();
    if (iVar1 != 0xbad0000) {
      return iVar1;
    }
    HARDWARE_INTERRUPT_TRIGGER_REGISTER = 1;
  }
  return 0xbad0000;
}


