/*
 * Function: validate_spin_lock_state
 * Entry:    00080c8c
 * Prototype: undefined validate_spin_lock_state()
 */


void validate_spin_lock_state(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = process_data_with_callback_validation_alt5();
  if ((int)uVar1 != 0) {
    z_spin_lock_valid((int)uVar1 + 0x6c,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}


