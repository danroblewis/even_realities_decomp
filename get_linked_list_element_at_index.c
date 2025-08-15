/*
 * Function: get_linked_list_element_at_index
 * Entry:    00085030
 * Prototype: undefined get_linked_list_element_at_index()
 */


int get_linked_list_element_at_index(int *param_1,int param_2)

{
  if (-1 < param_2) {
    if (param_1 != (int *)0x0) {
      param_1 = *(int **)((int)param_1 + 8);
      for (; (param_1 != (int *)0x0 && (param_2 != 0)); param_2 = param_2 + -1) {
        param_1 = (int *)*param_1;
      }
    }
    return (int)param_1;
  }
  return 0;
}


