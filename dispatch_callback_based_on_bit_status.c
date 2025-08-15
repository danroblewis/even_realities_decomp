/*
 * Function: dispatch_callback_based_on_bit_status
 * Entry:    000654c4
 * Prototype: undefined __stdcall dispatch_callback_based_on_bit_status(undefined4 callback_parameter)
 */


void dispatch_callback_based_on_bit_status(undefined4 callback_parameter)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = calculate_bit_offset_with_lookup();
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar2 = (uint)*(ushort *)((int)&INTERRUPT_CONFIGURATION_BITMAP_ARRAY + ((int)uVar3 + 8) * 2);
  if ((int)(uVar2 << 0x17) < 0) {
    uVar2 = (uVar2 << 0x13) >> 0x1c;
    (*(code *)(&INTERRUPT_CONFIGURATION_BITMAP_ARRAY)[uVar2 * 2])
              (callback_parameter,uVar1,(&DAT_20002bc4)[uVar2 * 2]);
  }
  if (DAT_20002bc8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000654fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_20002bc8)(callback_parameter,uVar1,DAT_20002bcc);
    return;
  }
  return;
}


