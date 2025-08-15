/*
 * Function: calculate_linked_list_total_size
 * Entry:    00081bc0
 * Prototype: undefined calculate_linked_list_total_size()
 */


int calculate_linked_list_total_size(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 0x10);
  }
  return iVar1;
}


