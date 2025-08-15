/*
 * Function: calculate_device_address_by_index
 * Entry:    00060778
 * Prototype: undefined calculate_device_address_by_index()
 */


int calculate_device_address_by_index(byte param_1)

{
  return (uint)param_1 * 0x20 + 0x2000b098;
}


