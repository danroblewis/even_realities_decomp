/*
 * Function: search_data_structure_for_value
 * Entry:    00083eb8
 * Prototype: undefined search_data_structure_for_value()
 */


undefined4 search_data_structure_for_value(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  while( true ) {
    *param_3 = uVar1;
    if (*(int *)(param_1 + 4) + (uint)*(byte *)(param_1 + 8) * 8 <= uVar1) {
      return 0xfffffffe;
    }
    if (*(byte *)(uVar1 + 5) == param_2) break;
    uVar1 = uVar1 + 8;
  }
  return 0;
}


