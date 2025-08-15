/*
 * Function: search_data_structure_with_bounds_limit
 * Entry:    0007f210
 * Prototype: undefined search_data_structure_with_bounds_limit()
 */


int search_data_structure_with_bounds_limit(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = search_data_structure_wrapper(*param_1,*(undefined2 *)(param_1 + 1),param_2,param_3);
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  return iVar1;
}


