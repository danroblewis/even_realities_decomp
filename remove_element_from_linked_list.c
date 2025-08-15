/*
 * Function: remove_element_from_linked_list
 * Entry:    00081bac
 * Prototype: undefined remove_element_from_linked_list()
 */


void remove_element_from_linked_list(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *param_1 = iVar2;
    if (piVar1 == (int *)param_1[1]) {
      param_1[1] = iVar2;
    }
  }
  return;
}


