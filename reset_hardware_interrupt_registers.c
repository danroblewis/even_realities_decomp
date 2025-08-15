/*
 * Function: reset_hardware_interrupt_registers
 * Entry:    00066478
 * Prototype: undefined reset_hardware_interrupt_registers()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_hardware_interrupt_registers(void)

{
  HARDWARE_INTERRUPT_TRIGGER_REGISTER = 0;
  _DAT_5002b308 = 1;
  _DAT_5002b010 = 1;
  _DAT_5002b500 = 0;
  _DAT_5002b100 = 0;
  return;
}


