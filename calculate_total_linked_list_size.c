/*
 * Function: calculate_total_linked_list_size
 * Entry:    00081616
 * Prototype: undefined calculate_total_linked_list_size()
 */


int calculate_total_linked_list_size(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 0x10);
  }
  return iVar1;
}


