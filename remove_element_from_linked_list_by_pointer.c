/*
 * Function: remove_element_from_linked_list_by_pointer
 * Entry:    00081788
 * Prototype: undefined remove_element_from_linked_list_by_pointer()
 */


void remove_element_from_linked_list_by_pointer(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    piVar1 = (int *)0x0;
    piVar2 = *(int **)(param_1 + 0x54);
    do {
      if (param_2 == piVar2 + -2) {
        remove_element_from_linked_list_alt(param_1 + 0x54,piVar1);
        return;
      }
      piVar3 = (int *)*piVar2;
      piVar1 = piVar2;
      piVar2 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return;
}


