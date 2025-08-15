/*
 * Function: handle_parameter_validation
 * Entry:    00018300
 * Prototype: undefined handle_parameter_validation()
 */


void handle_parameter_validation(undefined4 param_1,uint param_2)

{
  DEBUG_PRINT("Updated MTU: TX: %d RX: %d bytes\n");
  if ((99 < param_2) && (z_spin_lock_valid(ANCS_CONNECTION_HANDLE + 0x230), param_2 == 0x1f2)) {
    change_work_mode_to(1);
    return;
  }
  return;
}


