/*
 * Function: validate_spin_lock
 * Entry:    0002a4c0
 * Prototype: undefined validate_spin_lock()
 */


void validate_spin_lock(void)

{
  if (SPIN_LOCK_VALIDATION_AND_SYSTEM_INIT != '\0') {
    z_spin_lock_valid(&DAT_20007b00);
    return;
  }
  return;
}


