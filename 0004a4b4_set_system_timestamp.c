/*
 * Function: set_system_timestamp
 * Entry:    0004a4b4
 * Prototype: undefined __stdcall set_system_timestamp(undefined4 timestamp_low, undefined4 timestamp_high)
 */


void set_system_timestamp(undefined4 timestamp_low,undefined4 timestamp_high)

{
  undefined8 uVar1;
  
  CURRENT_TIMESTAMP_HIGH = timestamp_low;
  CURRENT_TIMESTAMP_LOW = timestamp_high;
  uVar1 = get_system_timestamp_ms();
  TIMESTAMP_REFERENCE_HIGH = (int)uVar1;
  TIMESTAMP_REFERENCE_LOW = (int)((ulonglong)uVar1 >> 0x20);
  return;
}


