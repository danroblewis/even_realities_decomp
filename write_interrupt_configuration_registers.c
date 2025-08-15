/*
 * Function: write_interrupt_configuration_registers
 * Entry:    00066784
 * Prototype: undefined __stdcall write_interrupt_configuration_registers(undefined4 interrupt_config_values)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_interrupt_configuration_registers(int *interrupt_config_values)

{
  _DAT_5002b524 = *interrupt_config_values;
  if (_DAT_5002b524 == 0xff) {
    _DAT_5002b524 = -1;
  }
  _DAT_5002b528 = interrupt_config_values[1];
  if (_DAT_5002b528 == 0xff) {
    _DAT_5002b528 = -1;
  }
  _DAT_5002b530 = interrupt_config_values[2];
  if (_DAT_5002b530 == 0xff) {
    _DAT_5002b530 = -1;
  }
  _DAT_5002b534 = interrupt_config_values[3];
  if (_DAT_5002b534 == 0xff) {
    _DAT_5002b534 = -1;
  }
  _DAT_5002b538 = interrupt_config_values[4];
  if (_DAT_5002b538 == 0xff) {
    _DAT_5002b538 = -1;
  }
  _DAT_5002b53c = interrupt_config_values[5];
  if (_DAT_5002b53c == 0xff) {
    _DAT_5002b53c = -1;
  }
  return;
}


