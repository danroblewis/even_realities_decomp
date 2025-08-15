/*
 * Function: decrement_timer_counter
 * Entry:    0003441c
 * Prototype: undefined decrement_timer_counter()
 */


void decrement_timer_counter(void)

{
  if ((&TIMEOUT_MESSAGE_STATE_TABLE)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] != 0) {
    (&TIMEOUT_MESSAGE_STATE_TABLE)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] =
         (&TIMEOUT_MESSAGE_STATE_TABLE)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] + -10;
  }
  return;
}


