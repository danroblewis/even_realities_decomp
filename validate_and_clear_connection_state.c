/*
 * Function: validate_and_clear_connection_state
 * Entry:    0007205c
 * Prototype: undefined validate_and_clear_connection_state()
 */


bool validate_and_clear_connection_state(uint *param_1)

{
  bool bVar1;
  
  bVar1 = *param_1 == (DMIC_BUFFER_SIZE | DAT_2000b458);
  if (bVar1) {
    *param_1 = 0;
  }
  return bVar1;
}


