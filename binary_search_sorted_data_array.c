/*
 * Function: binary_search_sorted_data_array
 * Entry:    0007f386
 * Prototype: undefined binary_search_sorted_data_array()
 */


int binary_search_sorted_data_array(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 != 0) {
    iVar4 = 0;
    iVar1 = iVar1 + -1;
    while (iVar4 <= iVar1) {
      iVar3 = (iVar4 + iVar1) / 2;
      uVar2 = (uint)*(ushort *)(param_1 + (iVar3 + 3) * 8 + 8);
      if (uVar2 < param_2) {
        iVar4 = iVar3 + 1;
      }
      else {
        if (uVar2 <= param_2) {
          return param_1 + (iVar3 + 3) * 8 + 4;
        }
        iVar1 = iVar3 + -1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


