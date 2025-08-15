/*
 * Function: validate_spin_lock
 * Entry:    0002a4c0
 * Prototype: undefined validate_spin_lock()
 */


void validate_spin_lock(void)

{
  if (DAT_20018d88 != '\0') {
    z_spin_lock_valid(&DAT_20007b00);
    return;
  }
  return;
}


