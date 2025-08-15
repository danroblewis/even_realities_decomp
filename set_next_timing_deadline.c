/*
 * Function: set_next_timing_deadline
 * Entry:    00032c0c
 * Prototype: undefined set_next_timing_deadline()
 */


void set_next_timing_deadline(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0007d12e();
  DAT_20004948 = (int)(lVar1 + 10000);
  DAT_2000494c = (int)((ulonglong)(lVar1 + 10000) >> 0x20);
  return;
}


