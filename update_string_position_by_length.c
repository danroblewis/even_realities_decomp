/*
 * Function: update_string_position_by_length
 * Entry:    00084f16
 * Prototype: undefined update_string_position_by_length()
 */


void update_string_position_by_length(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = param_1[2];
    iVar1 = calculate_string_length(*param_1 + iVar2);
    param_1[2] = iVar2 + iVar1;
  }
  return;
}


