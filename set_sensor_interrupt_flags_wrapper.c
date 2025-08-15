/*
 * Function: set_sensor_interrupt_flags_wrapper
 * Entry:    000850dc
 * Prototype: undefined set_sensor_interrupt_flags_wrapper()
 */


void set_sensor_interrupt_flags_wrapper(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  set_sensor_interrupt_flags();
  set_sensor_interrupt_flags_alt(param_1,param_3);
  return;
}


