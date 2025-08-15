/*
 * Function: initialize_data_structure_with_mutex
 * Entry:    0007eb5c
 * Prototype: int initialize_data_structure_with_mutex(undefined4 param1)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int initialize_data_structure_with_mutex(undefined4 param1) */

int initialize_data_structure_with_mutex(int param1)

{
  int extraout_r1;
  int iVar1;
  
  iVar1 = *(int *)(param1 + 0x10);
  *(undefined4 *)(iVar1 + 0x3b8) = **(undefined4 **)(param1 + 4);
  init_mutex(iVar1 + 0x1b0);
  atomic_exchange_value((int *)(iVar1 + 0x3bc),0);
  return extraout_r1;
}


