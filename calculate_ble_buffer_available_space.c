/*
 * Function: calculate_ble_buffer_available_space
 * Entry:    00083730
 * Prototype: undefined calculate_ble_buffer_available_space()
 */


int calculate_ble_buffer_available_space(int *param_1)

{
  return ((uint)*(ushort *)((int)param_1 + 6) - (uint)*(ushort *)(param_1 + 1)) -
         (*param_1 - param_1[2]);
}


