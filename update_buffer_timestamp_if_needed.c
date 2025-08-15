/*
 * Function: update_buffer_timestamp_if_needed
 * Entry:    0007e4f2
 * Prototype: undefined update_buffer_timestamp_if_needed()
 */


void update_buffer_timestamp_if_needed(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) << 0x1d < 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar1 = calculate_buffer_position_with_wrapping();
    if (uVar1 <= uVar2) {
      *(uint *)(param_1 + 0x28) = uVar2;
    }
    if (uVar1 > uVar2) {
      *(uint *)(param_1 + 0x28) = uVar1;
    }
  }
  return;
}


