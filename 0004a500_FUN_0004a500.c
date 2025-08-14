/*
 * Function: FUN_0004a500
 * Entry:    0004a500
 * Prototype: undefined FUN_0004a500()
 */


void FUN_0004a500(void)

{
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = get_system_timestamp_ms();
  DAT_2000a0b0 = FUN_0000e1a4((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0,in_r3);
  return;
}


