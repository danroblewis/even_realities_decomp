/*
 * Function: FUN_00018300
 * Entry:    00018300
 * Prototype: undefined FUN_00018300()
 */


void FUN_00018300(undefined4 param_1,uint param_2)

{
  DEBUG_PRINT("Updated MTU: TX: %d RX: %d bytes\n");
  if ((99 < param_2) && (z_spin_lock_valid(DAT_20006ab8 + 0x230), param_2 == 0x1f2)) {
    change_work_mode_to(1);
    return;
  }
  return;
}


