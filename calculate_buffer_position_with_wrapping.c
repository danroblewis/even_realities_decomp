/*
 * Function: calculate_buffer_position_with_wrapping
 * Entry:    0007e33a
 * Prototype: undefined calculate_buffer_position_with_wrapping()
 */


int calculate_buffer_position_with_wrapping
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  
  local_c = param_2;
  iVar1 = calculate_buffer_available_space(param_1,&local_c,param_3,param_4,param_1);
  if (iVar1 != 0) {
    local_c = local_c + -1 + *(int *)(param_1 + 0xc);
  }
  return (*(int *)(param_1 + 0x24) - local_c) + -1;
}


