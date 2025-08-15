/*
 * Function: update_buffer_read_position
 * Entry:    0007e4bc
 * Prototype: undefined update_buffer_read_position()
 */


void update_buffer_read_position(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = calculate_buffer_offset_with_wrapping();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (*param_1 == (int)uVar2) {
    *param_1 = iVar1;
    param_1[4] = param_1[4] & 0xfffffff7;
  }
  else {
    *(uint *)(param_1[8] + iVar1 * 4) = param_3 << 2 | 2;
    iVar1 = calculate_buffer_offset_with_wrapping(param_1,param_1[1],param_3);
    param_1[1] = iVar1;
  }
  return;
}


