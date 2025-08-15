/*
 * Function: validate_spin_lock_if_enabled
 * Entry:    0002a0c0
 * Prototype: undefined validate_spin_lock_if_enabled()
 */


void validate_spin_lock_if_enabled(void)

{
  if (SPIN_LOCK_VALIDATION_ENABLED_FLAG != '\0') {
    z_spin_lock_valid(&DAT_20007b1c);
    return;
  }
  return;
}


