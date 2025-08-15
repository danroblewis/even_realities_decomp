/*
 * Function: initialize_ble_protocol
 * Entry:    00086554
 * Prototype: undefined initialize_ble_protocol()
 */


uint initialize_ble_protocol(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & ~(1 << (param_2 & 0xff));
  return uVar1 >> (param_2 & 0xff) & 1;
}


