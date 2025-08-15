/*
 * Function: init_bluetooth_stack
 * Entry:    0002953c
 * Prototype: undefined init_bluetooth_stack()
 */


void init_bluetooth_stack(void)

{
  int bluetooth_setup_result;
  undefined4 in_r3;
  
  bluetooth_setup_result = setup_bluetooth_stack(&DAT_20007b1c,0,5,in_r3,in_r3);
  if (bluetooth_setup_result == 0) {
    SPIN_LOCK_VALIDATION_ENABLED_FLAG = 1;
  }
  return;
}


