/*
 * Function: initialize_attitude_data_structure_with_defaults
 * Entry:    0002659c
 * Prototype: undefined __stdcall initialize_attitude_data_structure_with_defaults(undefined4 attitude_data_ptr)
 */


void initialize_attitude_data_structure_with_defaults(undefined4 *attitude_data_ptr)

{
  *attitude_data_ptr = 0x26419;
  attitude_data_ptr[2] = 0x262ad;
  attitude_data_ptr[1] = 0x26339;
  return;
}


