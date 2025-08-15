/*
 * Function: enter_system_wait_state_with_data_synchronization
 * Entry:    0004c4d0
 * Prototype: undefined enter_system_wait_state_with_data_synchronization()
 */


void enter_system_wait_state_with_data_synchronization(void)

{
  DataSynchronizationBarrier(0xf);
  do {
    WaitForEvent();
  } while( true );
}


