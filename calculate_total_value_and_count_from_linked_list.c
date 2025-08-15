/*
 * Function: calculate_total_value_and_count_from_linked_list
 * Entry:    0007c754
 * Prototype: undefined calculate_total_value_and_count_from_linked_list()
 */


undefined4 calculate_total_value_and_count_from_linked_list(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar2 = 7;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    for (iVar3 = *param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      iVar1 = combine_pointer_offset_and_function_dispatch_results(iVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + iVar1;
    }
    *param_2 = iVar5;
    param_2[1] = iVar4;
    uVar2 = 0;
  }
  return uVar2;
}


