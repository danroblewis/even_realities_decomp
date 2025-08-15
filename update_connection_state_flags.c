/*
 * Function: update_connection_state_flags
 * Entry:    00072078
 * Prototype: undefined update_connection_state_flags()
 */


void update_connection_state_flags(uint *param_1)

{
  *param_1 = DMIC_BUFFER_SIZE | CONNECTION_STATE_VALIDATION_BUFFER;
  return;
}


