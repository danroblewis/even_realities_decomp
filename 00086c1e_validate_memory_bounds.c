/*
 * Function: validate_memory_bounds
 * Entry:    00086c1e
 * Prototype: undefined __stdcall validate_memory_bounds(undefined4 mapped_buffer, undefined4 buffer_size, undefined4 offset, undefined4 requested_size)
 */


void validate_memory_bounds
               (undefined4 mapped_buffer,undefined4 buffer_size,uint offset,uint requested_size)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(buffer_size,mapped_buffer);
  if (offset <= requested_size) goto LAB_00086c28;
LAB_00086c24:
  do {
    uVar3 = handle_buffer_overflow();
    offset = extraout_r2;
LAB_00086c28:
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    if (uVar2 <= uVar1) {
      if (uVar1 < uVar2 + offset) goto LAB_00086c24;
      if (uVar2 != uVar1) goto LAB_00086c3c;
    }
    if (uVar1 + offset <= uVar2) {
LAB_00086c3c:
      memcpy();
      return;
    }
  } while( true );
}


