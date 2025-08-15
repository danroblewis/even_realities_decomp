/*
 * Function: find_data_structure_by_comparison
 * Entry:    0007eae4
 * Prototype: int find_data_structure_by_comparison(undefined4 param1, undefined4 param2)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int find_data_structure_by_comparison(undefined4 param1, undefined4 param2) */

int find_data_structure_by_comparison(int param1,undefined4 param2)

{
  int iVar1;
  
  iVar1 = compare_byte_arrays(param2,param1 + 0x40);
  if (iVar1 != 0) {
    iVar1 = compare_byte_arrays(param2,param1 + 0xb0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1 * 0x70 + param1;
}


