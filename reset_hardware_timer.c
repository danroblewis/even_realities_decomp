/*
 * Function: reset_hardware_timer
 * Entry:    00084c5e
 * Prototype: undefined reset_hardware_timer()
 */


void reset_hardware_timer(short param_1)

{
  *(undefined4 *)((ushort)((param_1 + 0x50) * 4) + 0x50015000) = 0;
  return;
}


