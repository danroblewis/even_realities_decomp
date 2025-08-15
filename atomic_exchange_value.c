/*
 * Function: atomic_exchange_value
 * Entry:    0007eb4e
 * Prototype: int atomic_exchange_value(int * ptr, int new_value)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int atomic_exchange_value(int *ptr, int new_value) */

int atomic_exchange_value(int *ptr,int new_value)

{
  *ptr = new_value;
  return (int)ptr;
}


