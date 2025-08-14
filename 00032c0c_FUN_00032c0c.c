/*
 * Function: FUN_00032c0c
 * Entry:    00032c0c
 * Prototype: undefined FUN_00032c0c()
 */


void FUN_00032c0c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0007d12e();
  DAT_20004948 = (int)(lVar1 + 10000);
  DAT_2000494c = (int)((ulonglong)(lVar1 + 10000) >> 0x20);
  return;
}


