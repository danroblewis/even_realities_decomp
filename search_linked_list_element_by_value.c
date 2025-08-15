/*
 * Function: search_linked_list_element_by_value
 * Entry:    00081a4e
 * Prototype: undefined search_linked_list_element_by_value()
 */


void search_linked_list_element_by_value(int param_1,uint param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x54);
      (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + 7) != param_2)); piVar1 = (int *)*piVar1) {
  }
  return;
}


