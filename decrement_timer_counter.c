/*
 * Function: decrement_timer_counter
 * Entry:    0003441c
 * Prototype: undefined decrement_timer_counter()
 */


void decrement_timer_counter(void)

{
  if ((&DAT_20007db0)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] != 0) {
    (&DAT_20007db0)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] =
         (&DAT_20007db0)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] + -10;
  }
  return;
}


