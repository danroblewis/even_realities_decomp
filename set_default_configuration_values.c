/*
 * Function: set_default_configuration_values
 * Entry:    0007c3c2
 * Prototype: undefined set_default_configuration_values()
 */


void set_default_configuration_values(int param_1)

{
  *(undefined1 *)(param_1 + 0xb) = 9;
  *(undefined1 *)(param_1 + 0xc) = 9;
  *(undefined2 *)(param_1 + 0x30) = 0x909;
  return;
}


