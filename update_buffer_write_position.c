/*
 * Function: update_buffer_write_position
 * Entry:    0007e378
 * Prototype: undefined update_buffer_write_position()
 */


void update_buffer_write_position(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = calculate_buffer_offset_with_wrapping(param_1,*(undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
  return;
}


