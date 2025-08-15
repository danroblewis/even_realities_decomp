/*
 * Function: get_quaternion_component_scaled
 * Entry:    000267e8
 * Prototype: float get_quaternion_component_scaled(int quaternion_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: float get_quaternion_component_scaled(int quaternion_data) */

float get_quaternion_component_scaled(int quaternion_data)

{
  if (*(char *)(quaternion_data + 0x28) == '\0') {
    calculate_mathematical_formula_with_floating_point();
  }
  return *(float *)(quaternion_data + 0x2c) * 57.295;
}


