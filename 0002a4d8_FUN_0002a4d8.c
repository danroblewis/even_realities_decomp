/*
 * Function: FUN_0002a4d8
 * Entry:    0002a4d8
 * Prototype: undefined FUN_0002a4d8()
 */


void FUN_0002a4d8(uint param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0007cb2c();
  DAT_200040c8 = (int)(lVar1 + (ulonglong)param_1);
  DAT_200040cc = (int)(lVar1 + (ulonglong)param_1 >> 0x20);
  return;
}


