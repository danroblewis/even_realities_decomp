/*
 * Function: count_linked_list_elements
 * Entry:    00085020
 * Prototype: undefined count_linked_list_elements()
 */


int count_linked_list_elements(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    param_1 = 0;
    for (piVar1 = (int *)*piVar1; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


