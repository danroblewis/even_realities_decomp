/*
 * Function: fast_inverse_square_root
 * Entry:    000265e8
 * Prototype: float fast_inverse_square_root(float value)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: float fast_inverse_square_root(float value) */

float fast_inverse_square_root(float value)

{
  float approximation;
  
  approximation = (float)(0x5f3759df - ((int)value >> 1));
  approximation = (1.5 - approximation * value * 0.5 * approximation) * approximation;
  return (1.5 - approximation * value * 0.5 * approximation) * approximation;
}


