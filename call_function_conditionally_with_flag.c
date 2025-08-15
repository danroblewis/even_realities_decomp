/*
 * Function: call_function_conditionally_with_flag
 * Entry:    0004906c
 * Prototype: undefined call_function_conditionally_with_flag()
 */


void call_function_conditionally_with_flag(void)

{
  if (DAT_2001d446 == '\x01') {
    FUN_00074554(DAT_2000a09c,0xfffffff2);
    DAT_2001d446 = '\0';
  }
  return;
}


