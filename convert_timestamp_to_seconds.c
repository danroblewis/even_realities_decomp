/*
 * Function: convert_timestamp_to_seconds
 * Entry:    0004a500
 * Prototype: undefined convert_timestamp_to_seconds()
 */


void convert_timestamp_to_seconds(void)

{
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = get_system_timestamp_ms();
  DAT_2000a0b0 = handle_signed_division((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0,in_r3);
  return;
}


