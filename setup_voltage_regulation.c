/*
 * Function: setup_voltage_regulation
 * Entry:    000869f2
 * Prototype: undefined setup_voltage_regulation()
 */


bool setup_voltage_regulation(uint param_1)

{
  return (param_1 & 0x7fffffff) < 0x7f800000;
}


