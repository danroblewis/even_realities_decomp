/*
 * Function: update_buffer_read_write_positions
 * Entry:    0007e390
 * Prototype: undefined update_buffer_read_write_positions()
 */


void update_buffer_read_write_positions
               (uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = param_2 << 2 | 2;
  *(uint *)(param_1[8] + *param_1 * 4) = uVar1;
  uVar1 = calculate_buffer_offset_with_wrapping(param_1,*param_1,param_2,uVar1,param_4);
  uVar2 = param_1[3];
  bVar3 = uVar1 == uVar2;
  if (bVar3) {
    uVar2 = param_1[4];
  }
  *param_1 = uVar1;
  if (bVar3) {
    uVar2 = uVar2 | 8;
  }
  if (bVar3) {
    param_1[4] = uVar2;
  }
  uVar1 = calculate_buffer_offset_with_wrapping(param_1,param_1[1],param_2,uVar2,param_4);
  param_1[1] = uVar1;
  return;
}


