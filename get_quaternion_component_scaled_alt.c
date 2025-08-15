/*
 * Function: get_quaternion_component_scaled_alt
 * Entry:    00026808
 * Prototype: float get_quaternion_component_scaled_alt(int quaternion_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: float get_quaternion_component_scaled_alt(int quaternion_data) */

float get_quaternion_component_scaled_alt(int quaternion_data)

{
  if (*(char *)(quaternion_data + 0x28) == '\0') {
    FUN_0007cab4();
  }
  return *(float *)(quaternion_data + 0x30) * 57.295;
}


